using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200078E")]
internal class RegionBanPage
{
	[Token(Token = "0x400245B")]
	[FieldOffset(Offset = "0x10")]
	public int Count;

	[Token(Token = "0x400245C")]
	[FieldOffset(Offset = "0x14")]
	public int EndIndex;

	[Token(Token = "0x400245D")]
	[FieldOffset(Offset = "0x18")]
	public RegionBanEntry[] Entries;

	[Token(Token = "0x6004876")]
	[Address(RVA = "0x40BD3C0", Offset = "0x40BD3C0", VA = "0x40BD3C0")]
	public RegionBanPage()
	{
	}
}
