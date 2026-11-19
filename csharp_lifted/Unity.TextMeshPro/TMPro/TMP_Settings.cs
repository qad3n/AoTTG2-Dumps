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
		[Address(RVA = "0x6737610", Offset = "0x6736610", VA = "0x6737610")]
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
		[Address(RVA = "0x6735720", Offset = "0x6734720", VA = "0x6735720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BD")]
	public static TextWrappingModes textWrappingMode
	{
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x67357B0", Offset = "0x67347B0", VA = "0x67357B0")]
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
		[Address(RVA = "0x6735B90", Offset = "0x6734B90", VA = "0x6735B90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BF")]
	public static List<OTL_FeatureTag> fontFeatures
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x6735C60", Offset = "0x6734C60", VA = "0x6735C60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	public static bool enableExtraPadding
	{
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x6735CD0", Offset = "0x6734CD0", VA = "0x6735CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C1")]
	public static bool enableTintAllSprites
	{
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x6735D40", Offset = "0x6734D40", VA = "0x6735D40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C2")]
	public static bool enableParseEscapeCharacters
	{
		[Token(Token = "0x600036B")]
		[Address(RVA = "0x6735DB0", Offset = "0x6734DB0", VA = "0x6735DB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C3")]
	public static bool enableRaycastTarget
	{
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x6735E20", Offset = "0x6734E20", VA = "0x6735E20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C4")]
	public static bool getFontFeaturesAtRuntime
	{
		[Token(Token = "0x600036D")]
		[Address(RVA = "0x6735E90", Offset = "0x6734E90", VA = "0x6735E90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C5")]
	public static int missingGlyphCharacter
	{
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x6735F00", Offset = "0x6734F00", VA = "0x6735F00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x6735F70", Offset = "0x6734F70", VA = "0x6735F70")]
		set
		{
		}
	}

	[Token(Token = "0x170000C6")]
	public static bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x6735FE0", Offset = "0x6734FE0", VA = "0x6735FE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C7")]
	public static bool warningsDisabled
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x6736050", Offset = "0x6735050", VA = "0x6736050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	public static TMP_FontAsset defaultFontAsset
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x67360C0", Offset = "0x67350C0", VA = "0x67360C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x6736130", Offset = "0x6735130", VA = "0x6736130")]
		set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	public static string defaultFontAssetPath
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x67361B0", Offset = "0x67351B0", VA = "0x67361B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public static float defaultFontSize
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x6736220", Offset = "0x6735220", VA = "0x6736220")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CB")]
	public static float defaultTextAutoSizingMinRatio
	{
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x6736290", Offset = "0x6735290", VA = "0x6736290")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CC")]
	public static float defaultTextAutoSizingMaxRatio
	{
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x6736300", Offset = "0x6735300", VA = "0x6736300")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CD")]
	public static Vector2 defaultTextMeshProTextContainerSize
	{
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x6736370", Offset = "0x6735370", VA = "0x6736370")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000CE")]
	public static Vector2 defaultTextMeshProUITextContainerSize
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x67363E0", Offset = "0x67353E0", VA = "0x67363E0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000CF")]
	public static bool autoSizeTextContainer
	{
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x6736450", Offset = "0x6735450", VA = "0x6736450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public static bool isTextObjectScaleStatic
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x67364C0", Offset = "0x67354C0", VA = "0x67364C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x6736530", Offset = "0x6735530", VA = "0x6736530")]
		set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public static List<TMP_FontAsset> fallbackFontAssets
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x67365A0", Offset = "0x67355A0", VA = "0x67365A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x6736610", Offset = "0x6735610", VA = "0x6736610")]
		set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public static bool matchMaterialPreset
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x6736690", Offset = "0x6735690", VA = "0x6736690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D3")]
	public static bool hideSubTextObjects
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x6736700", Offset = "0x6735700", VA = "0x6736700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D4")]
	public static TMP_SpriteAsset defaultSpriteAsset
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x6736770", Offset = "0x6735770", VA = "0x6736770")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x67367E0", Offset = "0x67357E0", VA = "0x67367E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public static string defaultSpriteAssetPath
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x6736860", Offset = "0x6735860", VA = "0x6736860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D6")]
	public static bool enableEmojiSupport
	{
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x67368D0", Offset = "0x67358D0", VA = "0x67368D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x6736940", Offset = "0x6735940", VA = "0x6736940")]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	public static uint missingCharacterSpriteUnicode
	{
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x67369B0", Offset = "0x67359B0", VA = "0x67369B0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x6736A20", Offset = "0x6735A20", VA = "0x6736A20")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	public static List<TMP_Asset> emojiFallbackTextAssets
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x6736A90", Offset = "0x6735A90", VA = "0x6736A90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x6736B00", Offset = "0x6735B00", VA = "0x6736B00")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	public static string defaultColorGradientPresetsPath
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x6736B80", Offset = "0x6735B80", VA = "0x6736B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	public static TMP_StyleSheet defaultStyleSheet
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x6736BF0", Offset = "0x6735BF0", VA = "0x6736BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x6736C60", Offset = "0x6735C60", VA = "0x6736C60")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public static string styleSheetsResourcePath
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x6736CE0", Offset = "0x6735CE0", VA = "0x6736CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DC")]
	public static TextAsset leadingCharacters
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x6736D50", Offset = "0x6735D50", VA = "0x6736D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	public static TextAsset followingCharacters
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x6736DC0", Offset = "0x6735DC0", VA = "0x6736DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	public static LineBreakingTable linebreakingRules
	{
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x6736E30", Offset = "0x6735E30", VA = "0x6736E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DF")]
	public static bool useModernHangulLineBreakingRules
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x67370C0", Offset = "0x67360C0", VA = "0x67370C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x6737130", Offset = "0x6736130", VA = "0x6737130")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	public static TMP_Settings instance
	{
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x6735820", Offset = "0x6734820", VA = "0x6735820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	internal static bool isTMPSettingsNull
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x67371A0", Offset = "0x67361A0", VA = "0x67371A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x6735750", Offset = "0x6734750", VA = "0x6735750")]
	internal void SetAssetVersion()
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x6737220", Offset = "0x6736220", VA = "0x6737220")]
	public static TMP_Settings LoadDefaultSettings()
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x6737350", Offset = "0x6736350", VA = "0x6737350")]
	public static TMP_Settings GetSettings()
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x6737400", Offset = "0x6736400", VA = "0x6737400")]
	public static TMP_FontAsset GetFontAsset()
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x67374B0", Offset = "0x67364B0", VA = "0x67374B0")]
	public static TMP_SpriteAsset GetSpriteAsset()
	{
		return null;
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x6737560", Offset = "0x6736560", VA = "0x6737560")]
	public static TMP_StyleSheet GetStyleSheet()
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x6736EF0", Offset = "0x6735EF0", VA = "0x6736EF0")]
	public static void LoadLinebreakingRules()
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x6737620", Offset = "0x6736620", VA = "0x6737620")]
	private static HashSet<uint> GetCharacters(TextAsset file)
	{
		return null;
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x6737700", Offset = "0x6736700", VA = "0x6737700")]
	public TMP_Settings()
	{
	}
}
