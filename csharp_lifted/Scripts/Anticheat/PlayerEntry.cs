// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.PlayerEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/PlayerEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20009DF")]
internal class PlayerEntry
{
	[Token(Token = "0x4003168")]
	[FieldOffset(Offset = "0x10")]
	public string SessionId;

	[Token(Token = "0x4003169")]
	[FieldOffset(Offset = "0x18")]
	public string IPAddress;

	[Token(Token = "0x400316A")]
	[FieldOffset(Offset = "0x20")]
	public string Username;

	[Token(Token = "0x400316B")]
	[FieldOffset(Offset = "0x28")]
	public int ActorNumber;

	[Token(Token = "0x6005B35")]
	[Address(RVA = "0x5D324D0", Offset = "0x5D314D0", VA = "0x5D324D0")]
	public PlayerEntry()
	{
		// Lifted from source/cpp/Anticheat/PlayerEntry.c (Anticheat.PlayerEntry$$.ctor): clean
		base();
		return;
	}
}
