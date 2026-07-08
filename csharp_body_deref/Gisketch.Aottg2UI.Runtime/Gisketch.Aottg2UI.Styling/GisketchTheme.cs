using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000020")]
public sealed class GisketchTheme
{
	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GisketchTheme Default;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Color> _colors;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<string, GisketchStyleDefinition> _styles;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, GisketchMotionToken> _motions;

	[Token(Token = "0x17000011")]
	internal float ReliefIntensity
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x39D87E0", Offset = "0x39D87E0", VA = "0x39D87E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x39D87F0", Offset = "0x39D87F0", VA = "0x39D87F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	internal bool IsDarkMode
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x39D8800", Offset = "0x39D8800", VA = "0x39D8800")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x39D8810", Offset = "0x39D8810", VA = "0x39D8810")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x39CDCE0", Offset = "0x39CDCE0", VA = "0x39CDCE0")]
	private void AddAtomDefaults()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x39CFC20", Offset = "0x39CFC20", VA = "0x39CFC20")]
	private void AddToastDefaults()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x39D4930", Offset = "0x39D4930", VA = "0x39D4930")]
	private void AddToastVariant(string suffix, string border, string icon)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x39CF610", Offset = "0x39CF610", VA = "0x39CF610")]
	private static GisketchStyleDefinition CopyInputStyle(string name, float height)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x39CEF70", Offset = "0x39CEF70", VA = "0x39CEF70")]
	private static GisketchStyleDefinition ControlStyle(string name, string background, float height)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x39CEDA0", Offset = "0x39CEDA0", VA = "0x39CEDA0")]
	private static GisketchStyleDefinition IconStyle(string name, string color, float size)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x39CF290", Offset = "0x39CF290", VA = "0x39CF290")]
	private static GisketchStyleDefinition DropdownItemStyle(string name = "dropdownItem", bool leftAligned = false)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x39D4BC0", Offset = "0x39D4BC0", VA = "0x39D4BC0")]
	private static GisketchLength Percent(float value)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x39D4C50", Offset = "0x39D4C50", VA = "0x39D4C50")]
	private void AddDefaults()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x39D77C0", Offset = "0x39D77C0", VA = "0x39D77C0")]
	private void AddDialogVariant(string suffix, string background, string textColor = "buttonText")
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x39D7980", Offset = "0x39D7980", VA = "0x39D7980")]
	private static GisketchStyleDefinition DialogTitleBar(string name, string background)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x39CF960", Offset = "0x39CF960", VA = "0x39CF960")]
	private static GisketchStyleDefinition ButtonStyle(string name, string background, string fontFamily, int fontWeight, float fontSize, float height)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x39CF4F0", Offset = "0x39CF4F0", VA = "0x39CF4F0")]
	private static GisketchStyleDefinition TextStyle(string name, string textColor, string fontFamily, int fontWeight, float fontSize)
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x39CF200", Offset = "0x39CF200", VA = "0x39CF200")]
	private static GisketchLength Points(float value)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x39D02E0", Offset = "0x39D02E0", VA = "0x39D02E0")]
	private void AddMainMenuDefaults()
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x39D7B40", Offset = "0x39D7B40", VA = "0x39D7B40")]
	private void ApplyColors(GisketchColorToken[] colors)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x39D7C60", Offset = "0x39D7C60", VA = "0x39D7C60")]
	private void ApplyAlias(string token, Color color)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x39D7EB0", Offset = "0x39D7EB0", VA = "0x39D7EB0")]
	private GisketchThemePalette FindPalette(GisketchThemeDefinition definition)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x39D7FF0", Offset = "0x39D7FF0", VA = "0x39D7FF0")]
	private static GisketchStyleDefinition MergeStyle(GisketchStyleDefinition baseStyle, GisketchStyleDefinition patch)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x39D84A0", Offset = "0x39D84A0", VA = "0x39D84A0")]
	private static GisketchStyleDefinition CopyStyle(GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x39D8760", Offset = "0x39D8760", VA = "0x39D8760")]
	private static GisketchLength CopyLength(GisketchLength length)
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x39C2DD0", Offset = "0x39C2DD0", VA = "0x39C2DD0")]
	public static GisketchTheme FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x39C2E30", Offset = "0x39C2E30", VA = "0x39C2E30")]
	public static GisketchTheme FromDefinition(GisketchThemeDefinition definition)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x39D89D0", Offset = "0x39D89D0", VA = "0x39D89D0")]
	public GisketchStyleDefinition GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x39D8A90", Offset = "0x39D8A90", VA = "0x39D8A90")]
	public bool TryGetStyle(string name, out GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x39D8B10", Offset = "0x39D8B10", VA = "0x39D8B10")]
	public Color GetColor(string token, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x39D8BB0", Offset = "0x39D8BB0", VA = "0x39D8BB0")]
	public string GetMotionPreset(string tokenOrPreset)
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x39D8C30", Offset = "0x39D8C30", VA = "0x39D8C30")]
	public float GetMotionDuration(string tokenOrPreset, float fallback = 0.16f)
	{
		return default(float);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x39D8940", Offset = "0x39D8940", VA = "0x39D8940")]
	private GisketchStyleDefinition StyleOrNull(string name)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x39D8820", Offset = "0x39D8820", VA = "0x39D8820")]
	public GisketchTheme()
	{
	}
}
