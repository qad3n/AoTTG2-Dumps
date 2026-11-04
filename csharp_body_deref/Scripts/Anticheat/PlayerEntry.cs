// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.PlayerEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/PlayerEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x2000979")]
internal class PlayerEntry
{
	[Token(Token = "0x4002EB8")]
	[FieldOffset(Offset = "0x10")]
	public string SessionId;

	[Token(Token = "0x4002EB9")]
	[FieldOffset(Offset = "0x18")]
	public string IPAddress;

	[Token(Token = "0x4002EBA")]
	[FieldOffset(Offset = "0x20")]
	public string Username;

	[Token(Token = "0x4002EBB")]
	[FieldOffset(Offset = "0x28")]
	public int ActorNumber;

	[Token(Token = "0x60057DE")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public PlayerEntry()
	{
	}
}
