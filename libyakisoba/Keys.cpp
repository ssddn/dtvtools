#include "Global.h"
#include "Keys.h"
#include "Keyset.h"

static const Keyset_t Keyset_WOWOW = {
	0x02,
	// Keys
	0x02, 0xcd, 0xfd, 0x76, 0xbf, 0xe1, 0x42, 0x73, 0x59,
	0x05, 0xa3, 0x5b, 0x4e, 0x53, 0xb7, 0x6f, 0xc6, 0x93,
	"WOWOW",
};

static const Keyset_t Keyset_StarChannelHD = {
	0x03,
	// Keys
	0x00, 0x92, 0x49, 0x24, 0x92, 0x49, 0x24, 0x92, 0x49,
	0x01, 0x20, 0x02, 0x32, 0x88, 0x82, 0x00, 0x23, 0x28,
	"Star Channel HD",
};

static const Keyset_t Keyset_E2_110CS = {
	0x17,
	// Keys
	0x04, 0x83, 0xe7, 0x67, 0x19, 0x30, 0xa0, 0x34, 0x1f,
	0x01, 0x25, 0x12, 0x73, 0x04, 0x48, 0x12, 0x26, 0x84,
	"SkyPerfecTV E2 / 110CS",
};

static const Keyset_t Keyset_Safetynet = {
	0x1d,
	// Keys
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0xdb, 0xa4, 0x96, 0xac, 0xec, 0xef, 0x81, 0x28,
	"Safenet",
};

static const Keyset_t Keyset_NHK = {
	0x1e,
	// Keys
	0x02, 0x8d, 0x82, 0x06, 0xc6, 0x2e, 0xb1, 0x41, 0x0d,
	0x01, 0x15, 0xf8, 0xc5, 0xbf, 0x84, 0x0b, 0x66, 0x94,
	"NHK",
};

static const Keyset_t Keyset_Email = {
	0x20,
	// Keys
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	"Email",
};

static const Keyset_t Keyset_NHK_Email = {
	0x01,
	// Keys
	0x02, 0x8d, 0x82, 0x06, 0xc6, 0x2e, 0xb1, 0x41, 0x0d,
	0x01, 0x15, 0xf8, 0xc5, 0xbf, 0x84, 0x0b, 0x66, 0x94,
	"NHK_Email",
};

s32 BCAS::Keys::RegisterAll(void)
{
	BCAS::Keyset::Register(&Keyset_WOWOW);
	BCAS::Keyset::Register(&Keyset_StarChannelHD);
	BCAS::Keyset::Register(&Keyset_E2_110CS);
	BCAS::Keyset::Register(&Keyset_Safetynet);
	BCAS::Keyset::Register(&Keyset_NHK);
	BCAS::Keyset::Register(&Keyset_Email);
	BCAS::Keyset::Register(&Keyset_NHK_Email);

	return 0;
}
