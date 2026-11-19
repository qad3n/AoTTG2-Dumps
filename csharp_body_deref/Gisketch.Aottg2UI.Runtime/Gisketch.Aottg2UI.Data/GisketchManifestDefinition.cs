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
[Token(Token = "0x200005F")]
public sealed class GisketchManifestDefinition
{
	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x10")]
	public int schemaVersion;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x18")]
	public string initialScreen;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x20")]
	public GisketchThemeDefinition theme;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x28")]
	public GisketchScreenDefinition[] screens;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x30")]
	public GisketchOverlayDefinition[] dialogs;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x38")]
	public GisketchOverlayDefinition[] popovers;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x40")]
	public GisketchTooltipDefinition[] tooltips;

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x5260D00", Offset = "0x525FD00", VA = "0x5260D00")]
	public static GisketchManifestDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x524E040", Offset = "0x524D040", VA = "0x524E040")]
	public GisketchScreenDefinition FindScreen(string id)
	{
		return null;
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x5258820", Offset = "0x5257820", VA = "0x5258820")]
	public GisketchOverlayDefinition FindDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x5257A20", Offset = "0x5256A20", VA = "0x5257A20")]
	public GisketchOverlayDefinition FindPopover(string id)
	{
		return null;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x5260DC0", Offset = "0x525FDC0", VA = "0x5260DC0")]
	public GisketchTooltipDefinition FindTooltip(string id)
	{
		return null;
	}

	[Token(Token = "0x600035F")]
	private static T FindById<T>(T[] items, string id, Func<T, string> getId) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x5260EE0", Offset = "0x525FEE0", VA = "0x5260EE0")]
	public GisketchManifestDefinition()
	{
	}
}
