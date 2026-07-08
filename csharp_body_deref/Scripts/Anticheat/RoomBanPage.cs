using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200078C")]
internal class RoomBanPage
{
	[Token(Token = "0x4002453")]
	[FieldOffset(Offset = "0x10")]
	public int Count;

	[Token(Token = "0x4002454")]
	[FieldOffset(Offset = "0x14")]
	public int EndIndex;

	[Token(Token = "0x4002455")]
	[FieldOffset(Offset = "0x18")]
	public RoomBanEntry[] Entries;

	[Token(Token = "0x6004874")]
	[Address(RVA = "0x40BE300", Offset = "0x40BE300", VA = "0x40BE300")]
	public RoomBanPage()
	{
	}
}
