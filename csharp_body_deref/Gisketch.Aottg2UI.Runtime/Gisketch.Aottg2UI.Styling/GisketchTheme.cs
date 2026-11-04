// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTheme
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000029")]
public sealed class GisketchTheme
{
	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GisketchTheme Default;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Color> _colors;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<string, GisketchStyleDefinition> _styles;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, GisketchMotionToken> _motions;

	[Token(Token = "0x1700001F")]
	internal float ReliefIntensity
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x584AC0", Offset = "0x5830C0", VA = "0x180584AC0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x584B70", Offset = "0x583170", VA = "0x180584B70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000020")]
	internal bool IsDarkMode
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x584AB0", Offset = "0x5830B0", VA = "0x180584AB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x584B60", Offset = "0x583160", VA = "0x180584B60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x188CA90", Offset = "0x188B090", VA = "0x18188CA90")]
	private void AddAtomDefaults()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x1895A30", Offset = "0x1894030", VA = "0x181895A30")]
	private void AddToastDefaults()
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x1896050", Offset = "0x1894650", VA = "0x181896050")]
	private void AddToastVariant(string suffix, string border, string icon)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x1896A10", Offset = "0x1895010", VA = "0x181896A10")]
	private static GisketchStyleDefinition CopyInputStyle(string name, float height)
	{
		return null;
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x1896810", Offset = "0x1894E10", VA = "0x181896810")]
	private static GisketchStyleDefinition ControlStyle(string name, string background, float height)
	{
		return null;
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x1897BC0", Offset = "0x18961C0", VA = "0x181897BC0")]
	private static GisketchStyleDefinition IconStyle(string name, string color, float size)
	{
		return null;
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x18971B0", Offset = "0x18957B0", VA = "0x1818971B0")]
	private static GisketchStyleDefinition DropdownItemStyle(string name = "dropdownItem", bool leftAligned = false)
	{
		return null;
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x18980D0", Offset = "0x18966D0", VA = "0x1818980D0")]
	private static GisketchLength Percent(float value)
	{
		return null;
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x188DAF0", Offset = "0x188C0F0", VA = "0x18188DAF0")]
	private void AddChangelogDefaults()
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x188E060", Offset = "0x188C660", VA = "0x18188E060")]
	private void AddDefaults()
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x1891280", Offset = "0x188F880", VA = "0x181891280")]
	private void AddDialogVariant(string suffix, string background, string textColor = "buttonText")
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x1896FF0", Offset = "0x18955F0", VA = "0x181896FF0")]
	private static GisketchStyleDefinition DialogTitleBar(string name, string background)
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x18965E0", Offset = "0x1894BE0", VA = "0x1818965E0")]
	private static GisketchStyleDefinition ButtonStyle(string name, string background, string fontFamily, int fontWeight, float fontSize, float height)
	{
		return null;
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x1898280", Offset = "0x1896880", VA = "0x181898280")]
	private static GisketchStyleDefinition TextStyle(string name, string textColor, string fontFamily, int fontWeight, float fontSize)
	{
		return null;
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x1898160", Offset = "0x1896760", VA = "0x181898160")]
	private static GisketchLength Points(float value)
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x18915E0", Offset = "0x188FBE0", VA = "0x1818915E0")]
	private void AddMainMenuDefaults()
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x18964C0", Offset = "0x1894AC0", VA = "0x1818964C0")]
	private void ApplyColors(GisketchColorToken[] colors)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x1896210", Offset = "0x1894810", VA = "0x181896210")]
	private void ApplyAlias(string token, Color color)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x1897390", Offset = "0x1895990", VA = "0x181897390")]
	private GisketchThemePalette FindPalette(GisketchThemeDefinition definition)
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x1897CC0", Offset = "0x18962C0", VA = "0x181897CC0")]
	private static GisketchStyleDefinition MergeStyle(GisketchStyleDefinition baseStyle, GisketchStyleDefinition patch)
	{
		return null;
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x1896D20", Offset = "0x1895320", VA = "0x181896D20")]
	private static GisketchStyleDefinition CopyStyle(GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x1896CA0", Offset = "0x18952A0", VA = "0x181896CA0")]
	private static GisketchLength CopyLength(GisketchLength length)
	{
		return null;
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x18958F0", Offset = "0x1893EF0", VA = "0x1818958F0")]
	private void AddSettingsDefaults()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x18978B0", Offset = "0x1895EB0", VA = "0x1818978B0")]
	public static GisketchTheme FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x18974D0", Offset = "0x1895AD0", VA = "0x1818974D0")]
	public static GisketchTheme FromDefinition(GisketchThemeDefinition definition)
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x1897B00", Offset = "0x1896100", VA = "0x181897B00")]
	public GisketchStyleDefinition GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x1898390", Offset = "0x1896990", VA = "0x181898390")]
	public bool TryGetStyle(string name, out GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x1897910", Offset = "0x1895F10", VA = "0x181897910")]
	public Color GetColor(string token, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x1897A60", Offset = "0x1896060", VA = "0x181897A60")]
	public string GetMotionPreset(string tokenOrPreset)
	{
		return null;
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x18979B0", Offset = "0x1895FB0", VA = "0x1818979B0")]
	public float GetMotionDuration(string tokenOrPreset, float fallback = 0.16f)
	{
		return default(float);
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x18981F0", Offset = "0x18967F0", VA = "0x1818981F0")]
	private GisketchStyleDefinition StyleOrNull(string name)
	{
		return null;
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x18984B0", Offset = "0x1896AB0", VA = "0x1818984B0")]
	public GisketchTheme()
	{
	}
}
