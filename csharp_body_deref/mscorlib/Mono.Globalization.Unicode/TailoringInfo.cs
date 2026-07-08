using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x2000032")]
internal class TailoringInfo
{
	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x10")]
	public readonly int LCID;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x14")]
	public readonly int TailoringIndex;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x18")]
	public readonly int TailoringCount;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x1C")]
	public readonly bool FrenchSort;

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4DEBC50", Offset = "0x4DEBC50", VA = "0x4DEBC50")]
	public TailoringInfo(int lcid, int tailoringIndex, int tailoringCount, bool frenchSort)
	{
	}
}
