using Il2CppDummyDll;

namespace Unity.Profiling.LowLevel;

[Token(Token = "0x2000028")]
public enum ProfilerMarkerDataType : byte
{
	[Token(Token = "0x4000063")]
	InstanceId = 1,
	[Token(Token = "0x4000064")]
	Int32 = 2,
	[Token(Token = "0x4000065")]
	UInt32 = 3,
	[Token(Token = "0x4000066")]
	Int64 = 4,
	[Token(Token = "0x4000067")]
	UInt64 = 5,
	[Token(Token = "0x4000068")]
	Float = 6,
	[Token(Token = "0x4000069")]
	Double = 7,
	[Token(Token = "0x400006A")]
	String16 = 9,
	[Token(Token = "0x400006B")]
	Blob8 = 11,
	[Token(Token = "0x400006C")]
	GfxResourceId = 12
}
