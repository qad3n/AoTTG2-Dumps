// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RegionBanPage
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RegionBanPage.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20009E3")]
internal class RegionBanPage
{
	[Token(Token = "0x400317B")]
	[FieldOffset(Offset = "0x10")]
	public int Count;

	[Token(Token = "0x400317C")]
	[FieldOffset(Offset = "0x14")]
	public int EndIndex;

	[Token(Token = "0x400317D")]
	[FieldOffset(Offset = "0x18")]
	public RegionBanEntry[] Entries;

	[Token(Token = "0x6005B39")]
	[Address(RVA = "0x5D36260", Offset = "0x5D35260", VA = "0x5D36260")]
	public RegionBanPage()
	{
	}
}
