// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RoomBanEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RoomBanEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200097A")]
internal class RoomBanEntry
{
	[Token(Token = "0x4002EBC")]
	[FieldOffset(Offset = "0x10")]
	public string SessionId;

	[Token(Token = "0x4002EBD")]
	[FieldOffset(Offset = "0x18")]
	public string IPAddress;

	[Token(Token = "0x4002EBE")]
	[FieldOffset(Offset = "0x20")]
	public string Username;

	[Token(Token = "0x4002EBF")]
	[FieldOffset(Offset = "0x28")]
	public int ActorNumber;

	[Token(Token = "0x4002EC0")]
	[FieldOffset(Offset = "0x2C")]
	public bool IsIPBan;

	[Token(Token = "0x4002EC1")]
	[FieldOffset(Offset = "0x30")]
	public string Reason;

	[Token(Token = "0x4002EC2")]
	[FieldOffset(Offset = "0x38")]
	public bool CanUnban;

	[Token(Token = "0x60057DF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public RoomBanEntry()
	{
	}
}
