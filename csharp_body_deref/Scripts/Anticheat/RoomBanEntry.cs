// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RoomBanEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RoomBanEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20007ED")]
internal class RoomBanEntry
{
	[Token(Token = "0x40025EA")]
	[FieldOffset(Offset = "0x10")]
	public string SessionId;

	[Token(Token = "0x40025EB")]
	[FieldOffset(Offset = "0x18")]
	public string IPAddress;

	[Token(Token = "0x40025EC")]
	[FieldOffset(Offset = "0x20")]
	public string Username;

	[Token(Token = "0x40025ED")]
	[FieldOffset(Offset = "0x28")]
	public int ActorNumber;

	[Token(Token = "0x40025EE")]
	[FieldOffset(Offset = "0x2C")]
	public bool IsIPBan;

	[Token(Token = "0x40025EF")]
	[FieldOffset(Offset = "0x30")]
	public string Reason;

	[Token(Token = "0x40025F0")]
	[FieldOffset(Offset = "0x38")]
	public bool CanUnban;

	[Token(Token = "0x6004B66")]
	[Address(RVA = "0x43DC300", Offset = "0x43DC300", VA = "0x43DC300")]
	public RoomBanEntry()
	{
	}
}
