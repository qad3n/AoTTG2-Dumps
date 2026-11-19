// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchMatch
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchMatch.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000041")]
public readonly struct GisketchSearchMatch
{
	[Token(Token = "0x4000137")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly int Score;

	[Token(Token = "0x4000138")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public readonly int DisplayStart;

	[Token(Token = "0x4000139")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly int DisplayLength;

	[Token(Token = "0x400013A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string HiddenText;

	[Token(Token = "0x400013B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly int[] DisplayIndices;

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x524C340", Offset = "0x524B340", VA = "0x524C340")]
	public GisketchSearchMatch(int score, int displayStart, int displayLength, string hiddenText, [Optional] int[] displayIndices)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchMatch.c (Gisketch.Aottg2UI.Search.GisketchSearchMatch$$.ctor): clean
		this.Score = score;
		this.DisplayStart = displayStart;
		this.DisplayLength = displayLength;
		if (hiddenText == null) {
			hiddenText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this.HiddenText = hiddenText;
		this.DisplayIndices = displayIndices;
		return;
	}
}
