using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000063")]
[ExcludeFromPreset]
public class TMP_Settings : ScriptableObject
{
	[Token(Token = "0x2000064")]
	public class LineBreakingTable
	{
		[Token(Token = "0x40002D2")]
		[FieldOffset(Offset = "0x10")]
		public Dictionary<int, char> leadingCharacters;

		[Token(Token = "0x40002D3")]
		[FieldOffset(Offset = "0x18")]
		public Dictionary<int, char> followingCharacters;

		[Token(Token = "0x600030A")]
		[Address(RVA = "0x493E130", Offset = "0x493E130", VA = "0x493E130")]
		public LineBreakingTable()
		{
		}
	}

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_Settings s_Instance;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private bool m_enableWordWrapping;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x19")]
	[SerializeField]
	private bool m_enableKerning;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x1A")]
	[SerializeField]
	private bool m_enableExtraPadding;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x1B")]
	[SerializeField]
	private bool m_enableTintAllSprites;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private bool m_enableParseEscapeCharacters;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x1D")]
	[SerializeField]
	private bool m_EnableRaycastTarget;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x1E")]
	[SerializeField]
	private bool m_GetFontFeaturesAtRuntime;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private int m_missingGlyphCharacter;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private bool m_warningsDisabled;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private TMP_FontAsset m_defaultFontAsset;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private string m_defaultFontAssetPath;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private float m_defaultFontSize;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private float m_defaultAutoSizeMinRatio;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float m_defaultAutoSizeMaxRatio;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private Vector2 m_defaultTextMeshProTextContainerSize;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private Vector2 m_defaultTextMeshProUITextContainerSize;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private bool m_autoSizeTextContainer;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x55")]
	[SerializeField]
	private bool m_IsTextObjectScaleStatic;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private List<TMP_FontAsset> m_fallbackFontAssets;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private bool m_matchMaterialPreset;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private TMP_SpriteAsset m_defaultSpriteAsset;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private string m_defaultSpriteAssetPath;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private bool m_enableEmojiSupport;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private uint m_MissingCharacterSpriteUnicode;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private string m_defaultColorGradientPresetsPath;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private TMP_StyleSheet m_defaultStyleSheet;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	private string m_StyleSheetsResourcePath;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private TextAsset m_leadingCharacters;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private TextAsset m_followingCharacters;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private LineBreakingTable m_linebreakingRules;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private bool m_UseModernHangulLineBreakingRules;

	[Token(Token = "0x1700009C")]
	public static string version
	{
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x493D790", Offset = "0x493D790", VA = "0x493D790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public static bool enableWordWrapping
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x493D7C0", Offset = "0x493D7C0", VA = "0x493D7C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009E")]
	public static bool enableKerning
	{
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x493D8B0", Offset = "0x493D8B0", VA = "0x493D8B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009F")]
	public static bool enableExtraPadding
	{
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x493D8D0", Offset = "0x493D8D0", VA = "0x493D8D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A0")]
	public static bool enableTintAllSprites
	{
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x493D8F0", Offset = "0x493D8F0", VA = "0x493D8F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A1")]
	public static bool enableParseEscapeCharacters
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x493D910", Offset = "0x493D910", VA = "0x493D910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A2")]
	public static bool enableRaycastTarget
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x493D930", Offset = "0x493D930", VA = "0x493D930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A3")]
	public static bool getFontFeaturesAtRuntime
	{
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x493D950", Offset = "0x493D950", VA = "0x493D950")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A4")]
	public static int missingGlyphCharacter
	{
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x493D970", Offset = "0x493D970", VA = "0x493D970")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x493D990", Offset = "0x493D990", VA = "0x493D990")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public static bool warningsDisabled
	{
		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x493D9B0", Offset = "0x493D9B0", VA = "0x493D9B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	public static TMP_FontAsset defaultFontAsset
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x493D9D0", Offset = "0x493D9D0", VA = "0x493D9D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A7")]
	public static string defaultFontAssetPath
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x493D9F0", Offset = "0x493D9F0", VA = "0x493D9F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A8")]
	public static float defaultFontSize
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x493DA10", Offset = "0x493DA10", VA = "0x493DA10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000A9")]
	public static float defaultTextAutoSizingMinRatio
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x493DA30", Offset = "0x493DA30", VA = "0x493DA30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000AA")]
	public static float defaultTextAutoSizingMaxRatio
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x493DA50", Offset = "0x493DA50", VA = "0x493DA50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000AB")]
	public static Vector2 defaultTextMeshProTextContainerSize
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x493DA70", Offset = "0x493DA70", VA = "0x493DA70")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000AC")]
	public static Vector2 defaultTextMeshProUITextContainerSize
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x493DA90", Offset = "0x493DA90", VA = "0x493DA90")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000AD")]
	public static bool autoSizeTextContainer
	{
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x493DAB0", Offset = "0x493DAB0", VA = "0x493DAB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AE")]
	public static bool isTextObjectScaleStatic
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x493DAD0", Offset = "0x493DAD0", VA = "0x493DAD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x493DAF0", Offset = "0x493DAF0", VA = "0x493DAF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public static List<TMP_FontAsset> fallbackFontAssets
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x493DB10", Offset = "0x493DB10", VA = "0x493DB10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B0")]
	public static bool matchMaterialPreset
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x493DB30", Offset = "0x493DB30", VA = "0x493DB30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B1")]
	public static TMP_SpriteAsset defaultSpriteAsset
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x493DB50", Offset = "0x493DB50", VA = "0x493DB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B2")]
	public static string defaultSpriteAssetPath
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x493DB70", Offset = "0x493DB70", VA = "0x493DB70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B3")]
	public static bool enableEmojiSupport
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x493DB90", Offset = "0x493DB90", VA = "0x493DB90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x493DBB0", Offset = "0x493DBB0", VA = "0x493DBB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public static uint missingCharacterSpriteUnicode
	{
		[Token(Token = "0x60002F7")]
		[Address(RVA = "0x493DBD0", Offset = "0x493DBD0", VA = "0x493DBD0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x493DBF0", Offset = "0x493DBF0", VA = "0x493DBF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public static string defaultColorGradientPresetsPath
	{
		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x493DC10", Offset = "0x493DC10", VA = "0x493DC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B6")]
	public static TMP_StyleSheet defaultStyleSheet
	{
		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x493DC30", Offset = "0x493DC30", VA = "0x493DC30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B7")]
	public static string styleSheetsResourcePath
	{
		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x493DC50", Offset = "0x493DC50", VA = "0x493DC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B8")]
	public static TextAsset leadingCharacters
	{
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x493DC70", Offset = "0x493DC70", VA = "0x493DC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	public static TextAsset followingCharacters
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x493DC90", Offset = "0x493DC90", VA = "0x493DC90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BA")]
	public static LineBreakingTable linebreakingRules
	{
		[Token(Token = "0x60002FE")]
		[Address(RVA = "0x493DCB0", Offset = "0x493DCB0", VA = "0x493DCB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BB")]
	public static bool useModernHangulLineBreakingRules
	{
		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x493DE40", Offset = "0x493DE40", VA = "0x493DE40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000300")]
		[Address(RVA = "0x493DE60", Offset = "0x493DE60", VA = "0x493DE60")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	public static TMP_Settings instance
	{
		[Token(Token = "0x6000301")]
		[Address(RVA = "0x493D7E0", Offset = "0x493D7E0", VA = "0x493D7E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x493DE80", Offset = "0x493DE80", VA = "0x493DE80")]
	public static TMP_Settings LoadDefaultSettings()
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x493DF70", Offset = "0x493DF70", VA = "0x493DF70")]
	public static TMP_Settings GetSettings()
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x493DFD0", Offset = "0x493DFD0", VA = "0x493DFD0")]
	public static TMP_FontAsset GetFontAsset()
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x493E040", Offset = "0x493E040", VA = "0x493E040")]
	public static TMP_SpriteAsset GetSpriteAsset()
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x493E0B0", Offset = "0x493E0B0", VA = "0x493E0B0")]
	public static TMP_StyleSheet GetStyleSheet()
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x493DCF0", Offset = "0x493DCF0", VA = "0x493DCF0")]
	public static void LoadLinebreakingRules()
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x493E140", Offset = "0x493E140", VA = "0x493E140")]
	private static Dictionary<int, char> GetCharacters(TextAsset file)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x493E260", Offset = "0x493E260", VA = "0x493E260")]
	public TMP_Settings()
	{
	}
}
