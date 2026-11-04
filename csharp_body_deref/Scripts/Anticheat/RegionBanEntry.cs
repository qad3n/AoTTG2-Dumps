// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RegionBanEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RegionBanEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200097C")]
internal class RegionBanEntry
{
	[Token(Token = "0x4002EC6")]
	[FieldOffset(Offset = "0x10")]
	public string TargetId;

	[Token(Token = "0x4002EC7")]
	[FieldOffset(Offset = "0x18")]
	public string Username;

	[Token(Token = "0x4002EC8")]
	[FieldOffset(Offset = "0x20")]
	public bool IsIPBan;

	[Token(Token = "0x4002EC9")]
	[FieldOffset(Offset = "0x28")]
	public string Reason;

	[Token(Token = "0x4002ECA")]
	[FieldOffset(Offset = "0x30")]
	public string BannedBy;

	[Token(Token = "0x60057E1")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public RegionBanEntry()
	{
	}
}
