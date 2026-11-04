// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RoomBanPage
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RoomBanPage.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200097B")]
internal class RoomBanPage
{
	[Token(Token = "0x4002EC3")]
	[FieldOffset(Offset = "0x10")]
	public int Count;

	[Token(Token = "0x4002EC4")]
	[FieldOffset(Offset = "0x14")]
	public int EndIndex;

	[Token(Token = "0x4002EC5")]
	[FieldOffset(Offset = "0x18")]
	public RoomBanEntry[] Entries;

	[Token(Token = "0x60057E0")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public RoomBanPage()
	{
	}
}
