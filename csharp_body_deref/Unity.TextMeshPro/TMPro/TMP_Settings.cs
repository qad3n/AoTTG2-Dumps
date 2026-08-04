// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Settings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000079")]
[ExcludeFromPreset]
public class TMP_Settings : ScriptableObject
{
	[Token(Token = "0x200007A")]
	public class LineBreakingTable
	{
		[Token(Token = "0x40003C6")]
		[FieldOffset(Offset = "0x10")]
		public Dictionary<int, char> leadingCharacters;

		[Token(Token = "0x40003C7")]
		[FieldOffset(Offset = "0x18")]
		public Dictionary<int, char> followingCharacters;

		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x4C8B6B0", Offset = "0x4C8B6B0", VA = "0x4C8B6B0")]
		public LineBreakingTable()
		{
		}
	}

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_Settings s_Instance;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private bool m_enableWordWrapping;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x19")]
	[SerializeField]
	private bool m_enableKerning;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x1A")]
	[SerializeField]
	private bool m_enableExtraPadding;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x1B")]
	[SerializeField]
	private bool m_enableTintAllSprites;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private bool m_enableParseEscapeCharacters;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x1D")]
	[SerializeField]
	private bool m_EnableRaycastTarget;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x1E")]
	[SerializeField]
	private bool m_GetFontFeaturesAtRuntime;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private int m_missingGlyphCharacter;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private bool m_warningsDisabled;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private TMP_FontAsset m_defaultFontAsset;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private string m_defaultFontAssetPath;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private float m_defaultFontSize;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private float m_defaultAutoSizeMinRatio;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float m_defaultAutoSizeMaxRatio;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private Vector2 m_defaultTextMeshProTextContainerSize;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private Vector2 m_defaultTextMeshProUITextContainerSize;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private bool m_autoSizeTextContainer;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x55")]
	[SerializeField]
	private bool m_IsTextObjectScaleStatic;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private List<TMP_FontAsset> m_fallbackFontAssets;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private bool m_matchMaterialPreset;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private TMP_SpriteAsset m_defaultSpriteAsset;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private string m_defaultSpriteAssetPath;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private bool m_enableEmojiSupport;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private uint m_MissingCharacterSpriteUnicode;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private string m_defaultColorGradientPresetsPath;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private TMP_StyleSheet m_defaultStyleSheet;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	private string m_StyleSheetsResourcePath;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private TextAsset m_leadingCharacters;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private TextAsset m_followingCharacters;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private LineBreakingTable m_linebreakingRules;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private bool m_UseModernHangulLineBreakingRules;

	[Token(Token = "0x170000BD")]
	public static string version
	{
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x4C8AD10", Offset = "0x4C8AD10", VA = "0x4C8AD10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BE")]
	public static bool enableWordWrapping
	{
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x4C8AD40", Offset = "0x4C8AD40", VA = "0x4C8AD40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BF")]
	public static bool enableKerning
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x4C8AE30", Offset = "0x4C8AE30", VA = "0x4C8AE30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C0")]
	public static bool enableExtraPadding
	{
		[Token(Token = "0x60003D0")]
		[Address(RVA = "0x4C8AE50", Offset = "0x4C8AE50", VA = "0x4C8AE50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C1")]
	public static bool enableTintAllSprites
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x4C8AE70", Offset = "0x4C8AE70", VA = "0x4C8AE70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C2")]
	public static bool enableParseEscapeCharacters
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x4C8AE90", Offset = "0x4C8AE90", VA = "0x4C8AE90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C3")]
	public static bool enableRaycastTarget
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x4C8AEB0", Offset = "0x4C8AEB0", VA = "0x4C8AEB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C4")]
	public static bool getFontFeaturesAtRuntime
	{
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x4C8AED0", Offset = "0x4C8AED0", VA = "0x4C8AED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C5")]
	public static int missingGlyphCharacter
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x4C8AEF0", Offset = "0x4C8AEF0", VA = "0x4C8AEF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x4C8AF10", Offset = "0x4C8AF10", VA = "0x4C8AF10")]
		set
		{
		}
	}

	[Token(Token = "0x170000C6")]
	public static bool warningsDisabled
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x4C8AF30", Offset = "0x4C8AF30", VA = "0x4C8AF30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C7")]
	public static TMP_FontAsset defaultFontAsset
	{
		[Token(Token = "0x60003D8")]
		[Address(RVA = "0x4C8AF50", Offset = "0x4C8AF50", VA = "0x4C8AF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C8")]
	public static string defaultFontAssetPath
	{
		[Token(Token = "0x60003D9")]
		[Address(RVA = "0x4C8AF70", Offset = "0x4C8AF70", VA = "0x4C8AF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public static float defaultFontSize
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x4C8AF90", Offset = "0x4C8AF90", VA = "0x4C8AF90")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CA")]
	public static float defaultTextAutoSizingMinRatio
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x4C8AFB0", Offset = "0x4C8AFB0", VA = "0x4C8AFB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CB")]
	public static float defaultTextAutoSizingMaxRatio
	{
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x4C8AFD0", Offset = "0x4C8AFD0", VA = "0x4C8AFD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CC")]
	public static Vector2 defaultTextMeshProTextContainerSize
	{
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x4C8AFF0", Offset = "0x4C8AFF0", VA = "0x4C8AFF0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000CD")]
	public static Vector2 defaultTextMeshProUITextContainerSize
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x4C8B010", Offset = "0x4C8B010", VA = "0x4C8B010")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000CE")]
	public static bool autoSizeTextContainer
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x4C8B030", Offset = "0x4C8B030", VA = "0x4C8B030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CF")]
	public static bool isTextObjectScaleStatic
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x4C8B050", Offset = "0x4C8B050", VA = "0x4C8B050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x4C8B070", Offset = "0x4C8B070", VA = "0x4C8B070")]
		set
		{
		}
	}

	[Token(Token = "0x170000D0")]
	public static List<TMP_FontAsset> fallbackFontAssets
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x4C8B090", Offset = "0x4C8B090", VA = "0x4C8B090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	public static bool matchMaterialPreset
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x4C8B0B0", Offset = "0x4C8B0B0", VA = "0x4C8B0B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D2")]
	public static TMP_SpriteAsset defaultSpriteAsset
	{
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x4C8B0D0", Offset = "0x4C8B0D0", VA = "0x4C8B0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	public static string defaultSpriteAssetPath
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x4C8B0F0", Offset = "0x4C8B0F0", VA = "0x4C8B0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D4")]
	public static bool enableEmojiSupport
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x4C8B110", Offset = "0x4C8B110", VA = "0x4C8B110")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x4C8B130", Offset = "0x4C8B130", VA = "0x4C8B130")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public static uint missingCharacterSpriteUnicode
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x4C8B150", Offset = "0x4C8B150", VA = "0x4C8B150")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60003E9")]
		[Address(RVA = "0x4C8B170", Offset = "0x4C8B170", VA = "0x4C8B170")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	public static string defaultColorGradientPresetsPath
	{
		[Token(Token = "0x60003EA")]
		[Address(RVA = "0x4C8B190", Offset = "0x4C8B190", VA = "0x4C8B190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	public static TMP_StyleSheet defaultStyleSheet
	{
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x4C8B1B0", Offset = "0x4C8B1B0", VA = "0x4C8B1B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	public static string styleSheetsResourcePath
	{
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x4C8B1D0", Offset = "0x4C8B1D0", VA = "0x4C8B1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D9")]
	public static TextAsset leadingCharacters
	{
		[Token(Token = "0x60003ED")]
		[Address(RVA = "0x4C8B1F0", Offset = "0x4C8B1F0", VA = "0x4C8B1F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	public static TextAsset followingCharacters
	{
		[Token(Token = "0x60003EE")]
		[Address(RVA = "0x4C8B210", Offset = "0x4C8B210", VA = "0x4C8B210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DB")]
	public static LineBreakingTable linebreakingRules
	{
		[Token(Token = "0x60003EF")]
		[Address(RVA = "0x4C8B230", Offset = "0x4C8B230", VA = "0x4C8B230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DC")]
	public static bool useModernHangulLineBreakingRules
	{
		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x4C8B3C0", Offset = "0x4C8B3C0", VA = "0x4C8B3C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x4C8B3E0", Offset = "0x4C8B3E0", VA = "0x4C8B3E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DD")]
	public static TMP_Settings instance
	{
		[Token(Token = "0x60003F2")]
		[Address(RVA = "0x4C8AD60", Offset = "0x4C8AD60", VA = "0x4C8AD60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x4C8B400", Offset = "0x4C8B400", VA = "0x4C8B400")]
	public static TMP_Settings LoadDefaultSettings()
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x4C8B4F0", Offset = "0x4C8B4F0", VA = "0x4C8B4F0")]
	public static TMP_Settings GetSettings()
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x4C8B550", Offset = "0x4C8B550", VA = "0x4C8B550")]
	public static TMP_FontAsset GetFontAsset()
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x4C8B5C0", Offset = "0x4C8B5C0", VA = "0x4C8B5C0")]
	public static TMP_SpriteAsset GetSpriteAsset()
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x4C8B630", Offset = "0x4C8B630", VA = "0x4C8B630")]
	public static TMP_StyleSheet GetStyleSheet()
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x4C8B270", Offset = "0x4C8B270", VA = "0x4C8B270")]
	public static void LoadLinebreakingRules()
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x4C8B6C0", Offset = "0x4C8B6C0", VA = "0x4C8B6C0")]
	private static Dictionary<int, char> GetCharacters(TextAsset file)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x4C8B7E0", Offset = "0x4C8B7E0", VA = "0x4C8B7E0")]
	public TMP_Settings()
	{
	}
}
