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
[Token(Token = "0x2000054")]
public sealed class GisketchThemeDefinition
{
	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x18")]
	public string mode;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x20")]
	public GisketchColorToken[] colors;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x28")]
	public GisketchThemePalette[] palettes;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x30")]
	public GisketchStyleDefinition[] styles;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x38")]
	public GisketchMotionToken[] motions;

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x3A5B300", Offset = "0x3A5B300", VA = "0x3A5B300")]
	public static GisketchThemeDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x3A5B3B0", Offset = "0x3A5B3B0", VA = "0x3A5B3B0")]
	public GisketchThemeDefinition()
	{
	}
}
