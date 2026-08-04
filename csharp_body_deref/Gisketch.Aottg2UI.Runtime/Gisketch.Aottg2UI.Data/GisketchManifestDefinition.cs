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
[Token(Token = "0x2000047")]
public sealed class GisketchManifestDefinition
{
	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x10")]
	public int schemaVersion;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x18")]
	public string initialScreen;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x20")]
	public GisketchThemeDefinition theme;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x28")]
	public GisketchScreenDefinition[] screens;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x30")]
	public GisketchOverlayDefinition[] dialogs;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x38")]
	public GisketchOverlayDefinition[] popovers;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x40")]
	public GisketchTooltipDefinition[] tooltips;

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x3A5AEB0", Offset = "0x3A5AEB0", VA = "0x3A5AEB0")]
	public static GisketchManifestDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x3A47D20", Offset = "0x3A47D20", VA = "0x3A47D20")]
	public GisketchScreenDefinition FindScreen(string id)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x3A52A90", Offset = "0x3A52A90", VA = "0x3A52A90")]
	public GisketchOverlayDefinition FindDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x3A52350", Offset = "0x3A52350", VA = "0x3A52350")]
	public GisketchOverlayDefinition FindPopover(string id)
	{
		return null;
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x3A5AF70", Offset = "0x3A5AF70", VA = "0x3A5AF70")]
	public GisketchTooltipDefinition FindTooltip(string id)
	{
		return null;
	}

	[Token(Token = "0x600024A")]
	private static T FindById<T>(T[] items, string id, Func<T, string> getId) where T : class
	{
		return null;
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x3A5B090", Offset = "0x3A5B090", VA = "0x3A5B090")]
	public GisketchManifestDefinition()
	{
	}
}
