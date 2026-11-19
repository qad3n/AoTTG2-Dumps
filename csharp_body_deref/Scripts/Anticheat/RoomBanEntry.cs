// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RoomBanEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RoomBanEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20009E0")]
internal class RoomBanEntry
{
	[Token(Token = "0x400316C")]
	[FieldOffset(Offset = "0x10")]
	public string SessionId;

	[Token(Token = "0x400316D")]
	[FieldOffset(Offset = "0x18")]
	public string IPAddress;

	[Token(Token = "0x400316E")]
	[FieldOffset(Offset = "0x20")]
	public string Username;

	[Token(Token = "0x400316F")]
	[FieldOffset(Offset = "0x28")]
	public int ActorNumber;

	[Token(Token = "0x4003170")]
	[FieldOffset(Offset = "0x2C")]
	public bool IsIPBan;

	[Token(Token = "0x4003171")]
	[FieldOffset(Offset = "0x30")]
	public string Reason;

	[Token(Token = "0x4003172")]
	[FieldOffset(Offset = "0x38")]
	public bool CanUnban;

	[Token(Token = "0x6005B36")]
	[Address(RVA = "0x5D34340", Offset = "0x5D33340", VA = "0x5D34340")]
	public RoomBanEntry()
	{
	}
}
