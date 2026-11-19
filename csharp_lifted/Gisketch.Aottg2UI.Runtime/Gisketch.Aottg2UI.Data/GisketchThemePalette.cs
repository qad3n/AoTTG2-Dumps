// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchThemePalette
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchThemePalette.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000070")]
public sealed class GisketchThemePalette
{
	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x18")]
	public GisketchColorToken[] colors;

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x5261220", Offset = "0x5260220", VA = "0x5261220")]
	public GisketchThemePalette()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchThemePalette.c (Gisketch.Aottg2UI.Data.GisketchThemePalette$$.ctor): clean
		base();
		return;
	}
}
