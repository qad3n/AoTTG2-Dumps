using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005A2")]
internal readonly struct DaylightTimeStruct
{
	[Token(Token = "0x400181A")]
	[FieldOffset(Offset = "0x0")]
	public readonly DateTime Start;

	[Token(Token = "0x400181B")]
	[FieldOffset(Offset = "0x8")]
	public readonly DateTime End;

	[Token(Token = "0x400181C")]
	[FieldOffset(Offset = "0x10")]
	public readonly TimeSpan Delta;

	[Token(Token = "0x6002C1A")]
	[Address(RVA = "0x4F644E0", Offset = "0x4F644E0", VA = "0x4F644E0")]
	public DaylightTimeStruct(DateTime start, DateTime end, TimeSpan delta)
	{
	}
}
