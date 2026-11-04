// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchMatch
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchMatch.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x200003A")]
public readonly struct GisketchSearchMatch
{
	[Token(Token = "0x4000114")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly int Score;

	[Token(Token = "0x4000115")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public readonly int DisplayStart;

	[Token(Token = "0x4000116")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly int DisplayLength;

	[Token(Token = "0x4000117")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string HiddenText;

	[Token(Token = "0x4000118")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly int[] DisplayIndices;

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x18B1EB0", Offset = "0x18B04B0", VA = "0x1818B1EB0")]
	public GisketchSearchMatch(int score, int displayStart, int displayLength, string hiddenText, [Optional] int[] displayIndices)
	{
	}
}
