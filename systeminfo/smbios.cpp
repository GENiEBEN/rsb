#include "smbios.hpp"
#include <cstring>

using smbios::dmi_memory_device_type;

auto smbios::dmi_system_uuid(
	const BYTE* p, short version
		) -> void
{
	bool only0xff = true;
	bool only0x00 = true;
	int i{};

	//
	// 16 because of the byte uuid
	// this process also makes so that the uuid isn't all
	// 1's and 0's
	//


	for (i = 0; i < 16 && (only0x00 || only0xff); i++) {
		if (p[i] != 0x00) { only0x00 = false; }
		if (p[i] != 0xFF) { only0xff = false; }
	}

	if (only0x00) { std::puts("Not present : 0x00"); return; }
	if (only0xff) { std::puts("Not Settable: 0xff"); return; }

	if (version >= 0x0206) {
		std::printf("%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X\n",
			p[3], p[2], p[1], p[0], p[5], p[4], p[7], p[6],
			p[8], p[9], p[10], p[11], p[12], p[13], p[14], p[15]);
	} else {
			std::printf("-%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X\n",
				p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7],
				p[8], p[9], p[10], p[11], p[12], p[13], p[14], p[15]);
	}
}

auto smbios::dmi_string(
	const smbios::dmi_header* dm, BYTE src
		) -> const char*
{
	std::size_t length{};
	std::size_t i{};

	char* bp = (char*)dm;
		//reinterpret_cast<char*> (dm);

	if (src == 0) { return "Not specified"; }
	bp += dm->length;

	while (src > 1 && *bp) {
		bp += std::strlen(bp);
		bp++;
		src--;
	}
	
	if (!*bp) { return "BAD_INDEXING"; }

	
	
	//
	// filtering ASCII
	// removal of junk data
	//

	length = std::strlen(bp);
	for (int i = 0; i < length; i++) {
		if (bp[i] < 32 || bp[i] == 127) { bp[i] = '.'; }
	}
	return bp;

}


