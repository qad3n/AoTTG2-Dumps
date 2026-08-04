// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RoomBanPage
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RoomBanPage.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20007EE")]
internal class RoomBanPage
{
	[Token(Token = "0x40025F1")]
	[FieldOffset(Offset = "0x10")]
	public int Count;

	[Token(Token = "0x40025F2")]
	[FieldOffset(Offset = "0x14")]
	public int EndIndex;

	[Token(Token = "0x40025F3")]
	[FieldOffset(Offset = "0x18")]
	public RoomBanEntry[] Entries;

	[Token(Token = "0x6004B67")]
	[Address(RVA = "0x43DBC80", Offset = "0x43DBC80", VA = "0x43DBC80")]
	public RoomBanPage()
	{
	}
}
