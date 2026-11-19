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

[Token(Token = "0x2000030")]
public sealed class GisketchTheme
{
	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GisketchTheme Default;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Color> _colors;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<string, GisketchStyleDefinition> _styles;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, GisketchMotionToken> _motions;

	[Token(Token = "0x1700001F")]
	internal float ReliefIntensity
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x5241500", Offset = "0x5240500", VA = "0x5241500")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x5241510", Offset = "0x5240510", VA = "0x5241510")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000020")]
	internal bool IsDarkMode
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x5241520", Offset = "0x5240520", VA = "0x5241520")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x5241530", Offset = "0x5240530", VA = "0x5241530")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x5235450", Offset = "0x5234450", VA = "0x5235450")]
	private void AddAtomDefaults()
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x5237530", Offset = "0x5236530", VA = "0x5237530")]
	private void AddToastDefaults()
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x523C5C0", Offset = "0x523B5C0", VA = "0x523C5C0")]
	private void AddToastVariant(string suffix, string border, string icon)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x5236E90", Offset = "0x5235E90", VA = "0x5236E90")]
	private static GisketchStyleDefinition CopyInputStyle(string name, float height)
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x5236800", Offset = "0x5235800", VA = "0x5236800")]
	private static GisketchStyleDefinition ControlStyle(string name, string background, float height)
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x5236630", Offset = "0x5235630", VA = "0x5236630")]
	private static GisketchStyleDefinition IconStyle(string name, string color, float size)
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x5236B20", Offset = "0x5235B20", VA = "0x5236B20")]
	private static GisketchStyleDefinition DropdownItemStyle(string name = "dropdownItem", bool leftAligned = false)
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x52374A0", Offset = "0x52364A0", VA = "0x52374A0")]
	private static GisketchLength Percent(float value)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x523C850", Offset = "0x523B850", VA = "0x523C850")]
	private void AddChangelogDefaults()
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x523CD70", Offset = "0x523BD70", VA = "0x523CD70")]
	private void AddDefaults()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x5240320", Offset = "0x523F320", VA = "0x5240320")]
	private void AddDialogVariant(string suffix, string background, string textColor = "buttonText")
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x5240600", Offset = "0x523F600", VA = "0x5240600")]
	private static GisketchStyleDefinition DialogTitleBar(string name, string background)
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x52371F0", Offset = "0x52361F0", VA = "0x52371F0")]
	private static GisketchStyleDefinition ButtonStyle(string name, string background, string fontFamily, int fontWeight, float fontSize, float height)
	{
		return null;
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x5236D70", Offset = "0x5235D70", VA = "0x5236D70")]
	private static GisketchStyleDefinition TextStyle(string name, string textColor, string fontFamily, int fontWeight, float fontSize)
	{
		return null;
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x5236A90", Offset = "0x5235A90", VA = "0x5236A90")]
	private static GisketchLength Points(float value)
	{
		return null;
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x52407C0", Offset = "0x523F7C0", VA = "0x52407C0")]
	private void AddRoomIconStyle(string name, Color color)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x5237BF0", Offset = "0x5236BF0", VA = "0x5237BF0")]
	private void AddMainMenuDefaults()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x5240890", Offset = "0x523F890", VA = "0x5240890")]
	private void ApplyColors(GisketchColorToken[] colors)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x52409A0", Offset = "0x523F9A0", VA = "0x52409A0")]
	private void ApplyAlias(string token, Color color)
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x5240BF0", Offset = "0x523FBF0", VA = "0x5240BF0")]
	private GisketchThemePalette FindPalette(GisketchThemeDefinition definition)
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x5240D10", Offset = "0x523FD10", VA = "0x5240D10")]
	private static GisketchStyleDefinition MergeStyle(GisketchStyleDefinition baseStyle, GisketchStyleDefinition patch)
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x52411B0", Offset = "0x52401B0", VA = "0x52411B0")]
	private static GisketchStyleDefinition CopyStyle(GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x5241480", Offset = "0x5240480", VA = "0x5241480")]
	private static GisketchLength CopyLength(GisketchLength length)
	{
		return null;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x52404E0", Offset = "0x523F4E0", VA = "0x52404E0")]
	private void AddSettingsDefaults()
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x5241540", Offset = "0x5240540", VA = "0x5241540")]
	public static GisketchTheme FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x52415A0", Offset = "0x52405A0", VA = "0x52415A0")]
	public static GisketchTheme FromDefinition(GisketchThemeDefinition definition)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x5241A10", Offset = "0x5240A10", VA = "0x5241A10")]
	public GisketchStyleDefinition GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x5241AD0", Offset = "0x5240AD0", VA = "0x5241AD0")]
	public bool TryGetStyle(string name, out GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x5241B50", Offset = "0x5240B50", VA = "0x5241B50")]
	public Color GetColor(string token, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x5241BF0", Offset = "0x5240BF0", VA = "0x5241BF0")]
	public string GetMotionPreset(string tokenOrPreset)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x5241C70", Offset = "0x5240C70", VA = "0x5241C70")]
	public float GetMotionDuration(string tokenOrPreset, float fallback = 0.16f)
	{
		return default(float);
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x5241980", Offset = "0x5240980", VA = "0x5241980")]
	private GisketchStyleDefinition StyleOrNull(string name)
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x5241860", Offset = "0x5240860", VA = "0x5241860")]
	public GisketchTheme()
	{
	}
}
