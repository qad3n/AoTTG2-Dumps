// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RegionBanEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RegionBanEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20007EF")]
internal class RegionBanEntry
{
	[Token(Token = "0x40025F4")]
	[FieldOffset(Offset = "0x10")]
	public string TargetId;

	[Token(Token = "0x40025F5")]
	[FieldOffset(Offset = "0x18")]
	public string Username;

	[Token(Token = "0x40025F6")]
	[FieldOffset(Offset = "0x20")]
	public bool IsIPBan;

	[Token(Token = "0x40025F7")]
	[FieldOffset(Offset = "0x28")]
	public string Reason;

	[Token(Token = "0x40025F8")]
	[FieldOffset(Offset = "0x30")]
	public string BannedBy;

	[Token(Token = "0x6004B68")]
	[Address(RVA = "0x43DC310", Offset = "0x43DC310", VA = "0x43DC310")]
	public RegionBanEntry()
	{
	}
}
