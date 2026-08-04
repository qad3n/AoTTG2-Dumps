// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RegionBanPage
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RegionBanPage.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20007F0")]
internal class RegionBanPage
{
	[Token(Token = "0x40025F9")]
	[FieldOffset(Offset = "0x10")]
	public int Count;

	[Token(Token = "0x40025FA")]
	[FieldOffset(Offset = "0x14")]
	public int EndIndex;

	[Token(Token = "0x40025FB")]
	[FieldOffset(Offset = "0x18")]
	public RegionBanEntry[] Entries;

	[Token(Token = "0x6004B69")]
	[Address(RVA = "0x43DAD40", Offset = "0x43DAD40", VA = "0x43DAD40")]
	public RegionBanPage()
	{
	}
}
