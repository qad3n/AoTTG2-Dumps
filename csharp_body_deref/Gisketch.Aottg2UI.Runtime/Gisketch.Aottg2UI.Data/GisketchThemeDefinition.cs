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
[Token(Token = "0x200006E")]
public sealed class GisketchThemeDefinition
{
	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x18")]
	public string mode;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x20")]
	public GisketchColorToken[] colors;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x28")]
	public GisketchThemePalette[] palettes;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x30")]
	public GisketchStyleDefinition[] styles;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x38")]
	public GisketchMotionToken[] motions;

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x5261150", Offset = "0x5260150", VA = "0x5261150")]
	public static GisketchThemeDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x5261200", Offset = "0x5260200", VA = "0x5261200")]
	public GisketchThemeDefinition()
	{
	}
}
