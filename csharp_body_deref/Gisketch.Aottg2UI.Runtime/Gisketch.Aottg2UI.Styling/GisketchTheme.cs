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
		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x3A3E380", Offset = "0x3A3E380", VA = "0x3A3E380")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x3A3E390", Offset = "0x3A3E390", VA = "0x3A3E390")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	internal bool IsDarkMode
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x3A3E3A0", Offset = "0x3A3E3A0", VA = "0x3A3E3A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x3A3E3B0", Offset = "0x3A3E3B0", VA = "0x3A3E3B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3A36EE0", Offset = "0x3A36EE0", VA = "0x3A36EE0")]
	private void AddAtomDefaults()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x3A38E20", Offset = "0x3A38E20", VA = "0x3A38E20")]
	private void AddToastDefaults()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3A3DB40", Offset = "0x3A3DB40", VA = "0x3A3DB40")]
	private void AddToastVariant(string suffix, string border, string icon)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x3A38810", Offset = "0x3A38810", VA = "0x3A38810")]
	private static GisketchStyleDefinition CopyInputStyle(string name, float height)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x3A38170", Offset = "0x3A38170", VA = "0x3A38170")]
	private static GisketchStyleDefinition ControlStyle(string name, string background, float height)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x3A37FA0", Offset = "0x3A37FA0", VA = "0x3A37FA0")]
	private static GisketchStyleDefinition IconStyle(string name, string color, float size)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3A38490", Offset = "0x3A38490", VA = "0x3A38490")]
	private static GisketchStyleDefinition DropdownItemStyle(string name = "dropdownItem", bool leftAligned = false)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3A3DDD0", Offset = "0x3A3DDD0", VA = "0x3A3DDD0")]
	private static GisketchLength Percent(float value)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3A3DE60", Offset = "0x3A3DE60", VA = "0x3A3DE60")]
	private void AddChangelogDefaults()
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3A2ACC0", Offset = "0x3A2ACC0", VA = "0x3A2ACC0")]
	public static GisketchTheme FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3A2AD20", Offset = "0x3A2AD20", VA = "0x3A2AD20")]
	public static GisketchTheme FromDefinition(GisketchThemeDefinition definition)
	{
		return null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3A41C10", Offset = "0x3A41C10", VA = "0x3A41C10")]
	public GisketchStyleDefinition GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x3A41CD0", Offset = "0x3A41CD0", VA = "0x3A41CD0")]
	public bool TryGetStyle(string name, out GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x3A41D50", Offset = "0x3A41D50", VA = "0x3A41D50")]
	public Color GetColor(string token, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x3A41DF0", Offset = "0x3A41DF0", VA = "0x3A41DF0")]
	public string GetMotionPreset(string tokenOrPreset)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x3A41E70", Offset = "0x3A41E70", VA = "0x3A41E70")]
	public float GetMotionDuration(string tokenOrPreset, float fallback = 0.16f)
	{
		return default(float);
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3A416D0", Offset = "0x3A416D0", VA = "0x3A416D0")]
	private GisketchStyleDefinition StyleOrNull(string name)
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3A3E4E0", Offset = "0x3A3E4E0", VA = "0x3A3E4E0")]
	private void AddDefaults()
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3A41F20", Offset = "0x3A41F20", VA = "0x3A41F20")]
	private void AddDialogVariant(string suffix, string background, string textColor = "buttonText")
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3A420E0", Offset = "0x3A420E0", VA = "0x3A420E0")]
	private static GisketchStyleDefinition DialogTitleBar(string name, string background)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3A38B60", Offset = "0x3A38B60", VA = "0x3A38B60")]
	private static GisketchStyleDefinition ButtonStyle(string name, string background, string fontFamily, int fontWeight, float fontSize, float height)
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x3A386F0", Offset = "0x3A386F0", VA = "0x3A386F0")]
	private static GisketchStyleDefinition TextStyle(string name, string textColor, string fontFamily, int fontWeight, float fontSize)
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x3A38400", Offset = "0x3A38400", VA = "0x3A38400")]
	private static GisketchLength Points(float value)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x3A394E0", Offset = "0x3A394E0", VA = "0x3A394E0")]
	private void AddMainMenuDefaults()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3A41470", Offset = "0x3A41470", VA = "0x3A41470")]
	private void ApplyColors(GisketchColorToken[] colors)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x3A422A0", Offset = "0x3A422A0", VA = "0x3A422A0")]
	private void ApplyAlias(string token, Color color)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x3A41590", Offset = "0x3A41590", VA = "0x3A41590")]
	private GisketchThemePalette FindPalette(GisketchThemeDefinition definition)
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3A41760", Offset = "0x3A41760", VA = "0x3A41760")]
	private static GisketchStyleDefinition MergeStyle(GisketchStyleDefinition baseStyle, GisketchStyleDefinition patch)
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3A424F0", Offset = "0x3A424F0", VA = "0x3A424F0")]
	private static GisketchStyleDefinition CopyStyle(GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3A427B0", Offset = "0x3A427B0", VA = "0x3A427B0")]
	private static GisketchLength CopyLength(GisketchLength length)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3A3E3C0", Offset = "0x3A3E3C0", VA = "0x3A3E3C0")]
	public GisketchTheme()
	{
	}
}
