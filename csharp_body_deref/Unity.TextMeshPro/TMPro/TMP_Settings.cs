// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Settings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.TextCore;

namespace TMPro;

[Serializable]
[Token(Token = "0x200006E")]
[ExcludeFromPreset]
[HelpURL("https://docs.unity3d.com/Packages/com.unity.ugui@2.0/manual/TextMeshPro/Settings.html")]
public class TMP_Settings : ScriptableObject
{
	[Token(Token = "0x200006F")]
	public class LineBreakingTable
	{
		[Token(Token = "0x4000330")]
		[FieldOffset(Offset = "0x10")]
		public HashSet<uint> leadingCharacters;

		[Token(Token = "0x4000331")]
		[FieldOffset(Offset = "0x18")]
		public HashSet<uint> followingCharacters;

		[Token(Token = "0x600039E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LineBreakingTable()
		{
		}
	}

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_Settings s_Instance;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal string assetVersion;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x8")]
	internal static string s_CurrentAssetVersion;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("m_enableWordWrapping")]
	[SerializeField]
	private TextWrappingModes m_TextWrappingMode;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private bool m_enableKerning;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private List<OTL_FeatureTag> m_ActiveFontFeatures;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool m_enableExtraPadding;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x31")]
	[SerializeField]
	private bool m_enableTintAllSprites;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x32")]
	[SerializeField]
	private bool m_enableParseEscapeCharacters;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x33")]
	[SerializeField]
	private bool m_EnableRaycastTarget;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private bool m_GetFontFeaturesAtRuntime;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private int m_missingGlyphCharacter;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private bool m_ClearDynamicDataOnBuild;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x3D")]
	[SerializeField]
	private bool m_warningsDisabled;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private TMP_FontAsset m_defaultFontAsset;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private string m_defaultFontAssetPath;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private float m_defaultFontSize;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private float m_defaultAutoSizeMinRatio;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private float m_defaultAutoSizeMaxRatio;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private Vector2 m_defaultTextMeshProTextContainerSize;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private Vector2 m_defaultTextMeshProUITextContainerSize;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private bool m_autoSizeTextContainer;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x6D")]
	[SerializeField]
	private bool m_IsTextObjectScaleStatic;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private List<TMP_FontAsset> m_fallbackFontAssets;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private bool m_matchMaterialPreset;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x79")]
	[SerializeField]
	private bool m_HideSubTextObjects;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private TMP_SpriteAsset m_defaultSpriteAsset;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private string m_defaultSpriteAssetPath;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	private bool m_enableEmojiSupport;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x94")]
	[SerializeField]
	private uint m_MissingCharacterSpriteUnicode;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private List<TMP_Asset> m_EmojiFallbackTextAssets;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private string m_defaultColorGradientPresetsPath;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private TMP_StyleSheet m_defaultStyleSheet;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private string m_StyleSheetsResourcePath;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private TextAsset m_leadingCharacters;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private TextAsset m_followingCharacters;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private LineBreakingTable m_linebreakingRules;

	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0xD0")]
	[SerializeField]
	private bool m_UseModernHangulLineBreakingRules;

	[Token(Token = "0x170000BC")]
	public static string version
	{
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x2D3FF00", Offset = "0x2D3E500", VA = "0x182D3FF00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BD")]
	public static TextWrappingModes textWrappingMode
	{
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x2D3FE50", Offset = "0x2D3E450", VA = "0x182D3FE50")]
		get
		{
			return default(TextWrappingModes);
		}
	}

	[Token(Token = "0x170000BE")]
	[Obsolete("The \"enableKerning\" property has been deprecated. Use the \"fontFeatures\" property to control what features are enabled by default on newly created text components.")]
	public static bool enableKerning
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x2D3F340", Offset = "0x2D3D940", VA = "0x182D3F340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BF")]
	public static List<OTL_FeatureTag> fontFeatures
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x2D3F5A0", Offset = "0x2D3DBA0", VA = "0x182D3F5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	public static bool enableExtraPadding
	{
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x2D3F2F0", Offset = "0x2D3D8F0", VA = "0x182D3F2F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C1")]
	public static bool enableTintAllSprites
	{
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x2D3F4A0", Offset = "0x2D3DAA0", VA = "0x182D3F4A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C2")]
	public static bool enableParseEscapeCharacters
	{
		[Token(Token = "0x600036B")]
		[Address(RVA = "0x2D3F400", Offset = "0x2D3DA00", VA = "0x182D3F400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C3")]
	public static bool enableRaycastTarget
	{
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x2D3F450", Offset = "0x2D3DA50", VA = "0x182D3F450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C4")]
	public static bool getFontFeaturesAtRuntime
	{
		[Token(Token = "0x600036D")]
		[Address(RVA = "0x2D3F5F0", Offset = "0x2D3DBF0", VA = "0x182D3F5F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C5")]
	public static int missingGlyphCharacter
	{
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x2D3FDA0", Offset = "0x2D3E3A0", VA = "0x182D3FDA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x2D402D0", Offset = "0x2D3E8D0", VA = "0x182D402D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C6")]
	public static bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x2D3EDE0", Offset = "0x2D3D3E0", VA = "0x182D3EDE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C7")]
	public static bool warningsDisabled
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x2D3FF30", Offset = "0x2D3E530", VA = "0x182D3FF30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	public static TMP_FontAsset defaultFontAsset
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x2D3EEE0", Offset = "0x2D3D4E0", VA = "0x182D3EEE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x2D3FF80", Offset = "0x2D3E580", VA = "0x182D3FF80")]
		set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	public static string defaultFontAssetPath
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x2D3EE90", Offset = "0x2D3D490", VA = "0x182D3EE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public static float defaultFontSize
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x2D3EF30", Offset = "0x2D3D530", VA = "0x182D3EF30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CB")]
	public static float defaultTextAutoSizingMinRatio
	{
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x2D3F110", Offset = "0x2D3D710", VA = "0x182D3F110")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CC")]
	public static float defaultTextAutoSizingMaxRatio
	{
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x2D3F0B0", Offset = "0x2D3D6B0", VA = "0x182D3F0B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CD")]
	public static Vector2 defaultTextMeshProTextContainerSize
	{
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x2D3F170", Offset = "0x2D3D770", VA = "0x182D3F170")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000CE")]
	public static Vector2 defaultTextMeshProUITextContainerSize
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x2D3F1D0", Offset = "0x2D3D7D0", VA = "0x182D3F1D0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000CF")]
	public static bool autoSizeTextContainer
	{
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x2D3ED90", Offset = "0x2D3D390", VA = "0x182D3ED90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public static bool isTextObjectScaleStatic
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x2D3F9E0", Offset = "0x2D3DFE0", VA = "0x182D3F9E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x2D40210", Offset = "0x2D3E810", VA = "0x182D40210")]
		set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public static List<TMP_FontAsset> fallbackFontAssets
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x2D3F4F0", Offset = "0x2D3DAF0", VA = "0x182D3F4F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x2D401A0", Offset = "0x2D3E7A0", VA = "0x182D401A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public static bool matchMaterialPreset
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x2D3FCF0", Offset = "0x2D3E2F0", VA = "0x182D3FCF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D3")]
	public static bool hideSubTextObjects
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x2D3F640", Offset = "0x2D3DC40", VA = "0x182D3F640")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D4")]
	public static TMP_SpriteAsset defaultSpriteAsset
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x2D3EFF0", Offset = "0x2D3D5F0", VA = "0x182D3EFF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x2D3FFF0", Offset = "0x2D3E5F0", VA = "0x182D3FFF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public static string defaultSpriteAssetPath
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x2D3EF90", Offset = "0x2D3D590", VA = "0x182D3EF90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D6")]
	public static bool enableEmojiSupport
	{
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x2D3F290", Offset = "0x2D3D890", VA = "0x182D3F290")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x2D40140", Offset = "0x2D3E740", VA = "0x182D40140")]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	public static uint missingCharacterSpriteUnicode
	{
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x2D3FD40", Offset = "0x2D3E340", VA = "0x182D3FD40")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x2D40270", Offset = "0x2D3E870", VA = "0x182D40270")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	public static List<TMP_Asset> emojiFallbackTextAssets
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x2D3F230", Offset = "0x2D3D830", VA = "0x182D3F230")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x2D400D0", Offset = "0x2D3E6D0", VA = "0x182D400D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	public static string defaultColorGradientPresetsPath
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x2D3EE30", Offset = "0x2D3D430", VA = "0x182D3EE30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	public static TMP_StyleSheet defaultStyleSheet
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x2D3F050", Offset = "0x2D3D650", VA = "0x182D3F050")]
		get
		{
			return null;
		}
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x2D40060", Offset = "0x2D3E660", VA = "0x182D40060")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public static string styleSheetsResourcePath
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x2D3FDF0", Offset = "0x2D3E3F0", VA = "0x182D3FDF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DC")]
	public static TextAsset leadingCharacters
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x2D3FA30", Offset = "0x2D3E030", VA = "0x182D3FA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	public static TextAsset followingCharacters
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x2D3F540", Offset = "0x2D3DB40", VA = "0x182D3F540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	public static LineBreakingTable linebreakingRules
	{
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x2D3FA90", Offset = "0x2D3E090", VA = "0x182D3FA90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DF")]
	public static bool useModernHangulLineBreakingRules
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x2D3FEA0", Offset = "0x2D3E4A0", VA = "0x182D3FEA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x2D40330", Offset = "0x2D3E930", VA = "0x182D40330")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	public static TMP_Settings instance
	{
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x2D3F690", Offset = "0x2D3DC90", VA = "0x182D3F690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	internal static bool isTMPSettingsNull
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x2D3F960", Offset = "0x2D3DF60", VA = "0x182D3F960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x2D3EBC0", Offset = "0x2D3D1C0", VA = "0x182D3EBC0")]
	internal void SetAssetVersion()
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x2D3E8B0", Offset = "0x2D3CEB0", VA = "0x182D3E8B0")]
	public static TMP_Settings LoadDefaultSettings()
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x2D3E6B0", Offset = "0x2D3CCB0", VA = "0x182D3E6B0")]
	public static TMP_Settings GetSettings()
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x2D3E600", Offset = "0x2D3CC00", VA = "0x182D3E600")]
	public static TMP_FontAsset GetFontAsset()
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x2D3E750", Offset = "0x2D3CD50", VA = "0x182D3E750")]
	public static TMP_SpriteAsset GetSpriteAsset()
	{
		return null;
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x2D3E800", Offset = "0x2D3CE00", VA = "0x182D3E800")]
	public static TMP_StyleSheet GetStyleSheet()
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x2D3E9F0", Offset = "0x2D3CFF0", VA = "0x182D3E9F0")]
	public static void LoadLinebreakingRules()
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x2D3E530", Offset = "0x2D3CB30", VA = "0x182D3E530")]
	private static HashSet<uint> GetCharacters(TextAsset file)
	{
		return null;
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x2D3ECA0", Offset = "0x2D3D2A0", VA = "0x182D3ECA0")]
	public TMP_Settings()
	{
	}
}
