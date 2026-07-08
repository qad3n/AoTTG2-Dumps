using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000045")]
public sealed class GisketchManifestDefinition
{
	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x10")]
	public int schemaVersion;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x18")]
	public string initialScreen;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x20")]
	public GisketchThemeDefinition theme;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x28")]
	public GisketchScreenDefinition[] screens;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x30")]
	public GisketchOverlayDefinition[] dialogs;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x38")]
	public GisketchOverlayDefinition[] popovers;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x40")]
	public GisketchTooltipDefinition[] tooltips;

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x39F0130", Offset = "0x39F0130", VA = "0x39F0130")]
	public static GisketchManifestDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x39DD6A0", Offset = "0x39DD6A0", VA = "0x39DD6A0")]
	public GisketchScreenDefinition FindScreen(string id)
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x39E8EC0", Offset = "0x39E8EC0", VA = "0x39E8EC0")]
	public GisketchOverlayDefinition FindDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x39E8B30", Offset = "0x39E8B30", VA = "0x39E8B30")]
	public GisketchOverlayDefinition FindPopover(string id)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x39F01F0", Offset = "0x39F01F0", VA = "0x39F01F0")]
	public GisketchTooltipDefinition FindTooltip(string id)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	private static T FindById<T>(T[] items, string id, Func<T, string> getId) where T : class
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x39F0310", Offset = "0x39F0310", VA = "0x39F0310")]
	public GisketchManifestDefinition()
	{
	}
}
