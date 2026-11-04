// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchManifestDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchManifestDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000059")]
public sealed class GisketchManifestDefinition
{
	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x10")]
	public int schemaVersion;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x18")]
	public string initialScreen;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x20")]
	public GisketchThemeDefinition theme;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x28")]
	public GisketchScreenDefinition[] screens;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x30")]
	public GisketchOverlayDefinition[] dialogs;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x38")]
	public GisketchOverlayDefinition[] popovers;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x40")]
	public GisketchTooltipDefinition[] tooltips;

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x18D0900", Offset = "0x18CEF00", VA = "0x1818D0900")]
	public static GisketchManifestDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x18D06E0", Offset = "0x18CECE0", VA = "0x1818D06E0")]
	public GisketchScreenDefinition FindScreen(string id)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x18D04C0", Offset = "0x18CEAC0", VA = "0x1818D04C0")]
	public GisketchOverlayDefinition FindDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x18D05D0", Offset = "0x18CEBD0", VA = "0x1818D05D0")]
	public GisketchOverlayDefinition FindPopover(string id)
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x18D07F0", Offset = "0x18CEDF0", VA = "0x1818D07F0")]
	public GisketchTooltipDefinition FindTooltip(string id)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	private static T FindById<T>(T[] items, string id, Func<T, string> getId) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x18D09C0", Offset = "0x18CEFC0", VA = "0x1818D09C0")]
	public GisketchManifestDefinition()
	{
	}
}
