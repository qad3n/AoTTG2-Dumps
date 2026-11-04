// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.RegionBanPage
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/RegionBanPage.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200097D")]
internal class RegionBanPage
{
	[Token(Token = "0x4002ECB")]
	[FieldOffset(Offset = "0x10")]
	public int Count;

	[Token(Token = "0x4002ECC")]
	[FieldOffset(Offset = "0x14")]
	public int EndIndex;

	[Token(Token = "0x4002ECD")]
	[FieldOffset(Offset = "0x18")]
	public RegionBanEntry[] Entries;

	[Token(Token = "0x60057E2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public RegionBanPage()
	{
	}
}
