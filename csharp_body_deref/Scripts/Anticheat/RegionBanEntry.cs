// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RegionBanEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RegionBanEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20009E2")]
internal class RegionBanEntry
{
	[Token(Token = "0x4003176")]
	[FieldOffset(Offset = "0x10")]
	public string TargetId;

	[Token(Token = "0x4003177")]
	[FieldOffset(Offset = "0x18")]
	public string Username;

	[Token(Token = "0x4003178")]
	[FieldOffset(Offset = "0x20")]
	public bool IsIPBan;

	[Token(Token = "0x4003179")]
	[FieldOffset(Offset = "0x28")]
	public string Reason;

	[Token(Token = "0x400317A")]
	[FieldOffset(Offset = "0x30")]
	public string BannedBy;

	[Token(Token = "0x6005B38")]
	[Address(RVA = "0x5D35820", Offset = "0x5D34820", VA = "0x5D35820")]
	public RegionBanEntry()
	{
	}
}
