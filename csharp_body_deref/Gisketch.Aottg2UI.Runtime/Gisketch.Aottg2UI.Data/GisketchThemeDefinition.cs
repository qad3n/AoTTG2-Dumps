// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchThemeDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchThemeDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000068")]
public sealed class GisketchThemeDefinition
{
	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x18")]
	public string mode;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x20")]
	public GisketchColorToken[] colors;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x28")]
	public GisketchThemePalette[] palettes;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x30")]
	public GisketchStyleDefinition[] styles;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x38")]
	public GisketchMotionToken[] motions;

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x18D20D0", Offset = "0x18D06D0", VA = "0x1818D20D0")]
	public static GisketchThemeDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public GisketchThemeDefinition()
	{
	}
}
