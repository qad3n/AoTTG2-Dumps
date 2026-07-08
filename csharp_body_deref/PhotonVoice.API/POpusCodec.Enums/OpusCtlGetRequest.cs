using Il2CppDummyDll;

namespace POpusCodec.Enums;

[Token(Token = "0x2000010")]
internal enum OpusCtlGetRequest
{
	[Token(Token = "0x400004B")]
	Application = 4001,
	[Token(Token = "0x400004C")]
	Bitrate = 4003,
	[Token(Token = "0x400004D")]
	MaxBandwidth = 4005,
	[Token(Token = "0x400004E")]
	VBR = 4007,
	[Token(Token = "0x400004F")]
	Bandwidth = 4009,
	[Token(Token = "0x4000050")]
	Complexity = 4011,
	[Token(Token = "0x4000051")]
	InbandFec = 4013,
	[Token(Token = "0x4000052")]
	PacketLossPercentage = 4015,
	[Token(Token = "0x4000053")]
	Dtx = 4017,
	[Token(Token = "0x4000054")]
	VBRConstraint = 4021,
	[Token(Token = "0x4000055")]
	ForceChannels = 4023,
	[Token(Token = "0x4000056")]
	Signal = 4025,
	[Token(Token = "0x4000057")]
	LookAhead = 4027,
	[Token(Token = "0x4000058")]
	SampleRate = 4029,
	[Token(Token = "0x4000059")]
	FinalRange = 4031,
	[Token(Token = "0x400005A")]
	Pitch = 4033,
	[Token(Token = "0x400005B")]
	Gain = 4035,
	[Token(Token = "0x400005C")]
	LsbDepth = 4037,
	[Token(Token = "0x400005D")]
	LastPacketDurationRequest = 4039
}
