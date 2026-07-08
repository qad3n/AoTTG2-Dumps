using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x200003F")]
[ExcludeFromPreset]
[ExcludeFromObjectFactory]
public class TextSettings : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x2000040")]
	private struct FontReferenceMap
	{
		[Token(Token = "0x4000354")]
		[FieldOffset(Offset = "0x0")]
		public Font font;

		[Token(Token = "0x4000355")]
		[FieldOffset(Offset = "0x8")]
		public FontAsset fontAsset;

		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x4BC25E0", Offset = "0x4BC25E0", VA = "0x4BC25E0")]
		public FontReferenceMap(Font font, FontAsset fontAsset)
		{
		}
	}

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x18")]
	internal string k_SystemFontName;

	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	protected string m_Version;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("m_defaultFontAsset")]
	[SerializeField]
	protected FontAsset m_DefaultFontAsset;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[FormerlySerializedAs("m_defaultFontAssetPath")]
	protected string m_DefaultFontAssetPath;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x38")]
	[FormerlySerializedAs("m_fallbackFontAssets")]
	[SerializeField]
	protected List<FontAsset> m_FallbackFontAssets;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x40")]
	[FormerlySerializedAs("m_matchMaterialPreset")]
	[SerializeField]
	protected bool m_MatchMaterialPreset;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x44")]
	[FormerlySerializedAs("m_missingGlyphCharacter")]
	[SerializeField]
	protected int m_MissingCharacterUnicode;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	protected bool m_ClearDynamicDataOnBuild;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[FormerlySerializedAs("m_defaultSpriteAsset")]
	protected SpriteAsset m_DefaultSpriteAsset;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	[FormerlySerializedAs("m_defaultSpriteAssetPath")]
	protected string m_DefaultSpriteAssetPath;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	protected List<SpriteAsset> m_FallbackSpriteAssets;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	protected uint m_MissingSpriteCharacterUnicode;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x70")]
	[FormerlySerializedAs("m_defaultStyleSheet")]
	[SerializeField]
	protected TextStyleSheet m_DefaultStyleSheet;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	protected string m_StyleSheetsResourcePath;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x80")]
	[FormerlySerializedAs("m_defaultColorGradientPresetsPath")]
	[SerializeField]
	protected string m_DefaultColorGradientPresetsPath;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	protected UnicodeLineBreakingRules m_UnicodeLineBreakingRules;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	private bool m_UseModernHangulLineBreakingRules;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x91")]
	[FormerlySerializedAs("m_warningsDisabled")]
	[SerializeField]
	protected bool m_DisplayWarnings;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x98")]
	internal Dictionary<int, FontAsset> m_FontLookup;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0xA0")]
	private List<FontReferenceMap> m_FontReferences;

	[Token(Token = "0x17000041")]
	public string version
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x4BC1500", Offset = "0x4BC1500", VA = "0x4BC1500")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x4BC1510", Offset = "0x4BC1510", VA = "0x4BC1510")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public FontAsset defaultFontAsset
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x4BC1520", Offset = "0x4BC1520", VA = "0x4BC1520")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x4BC1530", Offset = "0x4BC1530", VA = "0x4BC1530")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public string defaultFontAssetPath
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x4BC1540", Offset = "0x4BC1540", VA = "0x4BC1540")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x4BC1550", Offset = "0x4BC1550", VA = "0x4BC1550")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public List<FontAsset> fallbackFontAssets
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x4BC1560", Offset = "0x4BC1560", VA = "0x4BC1560")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x4BC1570", Offset = "0x4BC1570", VA = "0x4BC1570")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool matchMaterialPreset
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x4BC1580", Offset = "0x4BC1580", VA = "0x4BC1580")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x4BC1590", Offset = "0x4BC1590", VA = "0x4BC1590")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public int missingCharacterUnicode
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x4BC15A0", Offset = "0x4BC15A0", VA = "0x4BC15A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x4BC15B0", Offset = "0x4BC15B0", VA = "0x4BC15B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x4BC15C0", Offset = "0x4BC15C0", VA = "0x4BC15C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x4BC15D0", Offset = "0x4BC15D0", VA = "0x4BC15D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public SpriteAsset defaultSpriteAsset
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x4BC15E0", Offset = "0x4BC15E0", VA = "0x4BC15E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x4BC15F0", Offset = "0x4BC15F0", VA = "0x4BC15F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public string defaultSpriteAssetPath
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x4BC1600", Offset = "0x4BC1600", VA = "0x4BC1600")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x4BC1610", Offset = "0x4BC1610", VA = "0x4BC1610")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public List<SpriteAsset> fallbackSpriteAssets
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x4BC1620", Offset = "0x4BC1620", VA = "0x4BC1620")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x4BC1630", Offset = "0x4BC1630", VA = "0x4BC1630")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public uint missingSpriteCharacterUnicode
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x4BC1640", Offset = "0x4BC1640", VA = "0x4BC1640")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x4BC1650", Offset = "0x4BC1650", VA = "0x4BC1650")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public TextStyleSheet defaultStyleSheet
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x4BC1660", Offset = "0x4BC1660", VA = "0x4BC1660")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x4BC1670", Offset = "0x4BC1670", VA = "0x4BC1670")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public string styleSheetsResourcePath
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x4BC1680", Offset = "0x4BC1680", VA = "0x4BC1680")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x4BC1690", Offset = "0x4BC1690", VA = "0x4BC1690")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public string defaultColorGradientPresetsPath
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x4BC16A0", Offset = "0x4BC16A0", VA = "0x4BC16A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x4BC16B0", Offset = "0x4BC16B0", VA = "0x4BC16B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public UnicodeLineBreakingRules lineBreakingRules
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x4BC16C0", Offset = "0x4BC16C0", VA = "0x4BC16C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x4BC1B30", Offset = "0x4BC1B30", VA = "0x4BC1B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool useModernHangulLineBreakingRules
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x4BC1B50", Offset = "0x4BC1B50", VA = "0x4BC1B50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x4BC1B60", Offset = "0x4BC1B60", VA = "0x4BC1B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public bool displayWarnings
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x4BC1B70", Offset = "0x4BC1B70", VA = "0x4BC1B70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x4BC1B80", Offset = "0x4BC1B80", VA = "0x4BC1B80")]
		set
		{
		}
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4BC1B90", Offset = "0x4BC1B90", VA = "0x4BC1B90")]
	protected void InitializeFontReferenceLookup()
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4BC1E40", Offset = "0x4BC1E40", VA = "0x4BC1E40")]
	protected FontAsset GetCachedFontAssetInternal(Font font)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x4BC20C0", Offset = "0x4BC20C0", VA = "0x4BC20C0")]
	internal FontAsset GetCachedFontAsset(Font font, Shader shader)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x4BC2610", Offset = "0x4BC2610", VA = "0x4BC2610")]
	public TextSettings()
	{
	}
}
