// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EE9F10", Offset = "0x4EE9F10", VA = "0x4EE9F10")]
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
		[Address(RVA = "0x4EE8E30", Offset = "0x4EE8E30", VA = "0x4EE8E30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x4EE8E40", Offset = "0x4EE8E40", VA = "0x4EE8E40")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public FontAsset defaultFontAsset
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x4EE8E50", Offset = "0x4EE8E50", VA = "0x4EE8E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x4EE8E60", Offset = "0x4EE8E60", VA = "0x4EE8E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public string defaultFontAssetPath
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x4EE8E70", Offset = "0x4EE8E70", VA = "0x4EE8E70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x4EE8E80", Offset = "0x4EE8E80", VA = "0x4EE8E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public List<FontAsset> fallbackFontAssets
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x4EE8E90", Offset = "0x4EE8E90", VA = "0x4EE8E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x4EE8EA0", Offset = "0x4EE8EA0", VA = "0x4EE8EA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool matchMaterialPreset
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x4EE8EB0", Offset = "0x4EE8EB0", VA = "0x4EE8EB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x4EE8EC0", Offset = "0x4EE8EC0", VA = "0x4EE8EC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public int missingCharacterUnicode
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x4EE8ED0", Offset = "0x4EE8ED0", VA = "0x4EE8ED0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x4EE8EE0", Offset = "0x4EE8EE0", VA = "0x4EE8EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x4EE8EF0", Offset = "0x4EE8EF0", VA = "0x4EE8EF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x4EE8F00", Offset = "0x4EE8F00", VA = "0x4EE8F00")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public SpriteAsset defaultSpriteAsset
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x4EE8F10", Offset = "0x4EE8F10", VA = "0x4EE8F10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x4EE8F20", Offset = "0x4EE8F20", VA = "0x4EE8F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public string defaultSpriteAssetPath
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x4EE8F30", Offset = "0x4EE8F30", VA = "0x4EE8F30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x4EE8F40", Offset = "0x4EE8F40", VA = "0x4EE8F40")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public List<SpriteAsset> fallbackSpriteAssets
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x4EE8F50", Offset = "0x4EE8F50", VA = "0x4EE8F50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x4EE8F60", Offset = "0x4EE8F60", VA = "0x4EE8F60")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public uint missingSpriteCharacterUnicode
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x4EE8F70", Offset = "0x4EE8F70", VA = "0x4EE8F70")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x4EE8F80", Offset = "0x4EE8F80", VA = "0x4EE8F80")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public TextStyleSheet defaultStyleSheet
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x4EE8F90", Offset = "0x4EE8F90", VA = "0x4EE8F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x4EE8FA0", Offset = "0x4EE8FA0", VA = "0x4EE8FA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public string styleSheetsResourcePath
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x4EE8FB0", Offset = "0x4EE8FB0", VA = "0x4EE8FB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x4EE8FC0", Offset = "0x4EE8FC0", VA = "0x4EE8FC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public string defaultColorGradientPresetsPath
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x4EE8FD0", Offset = "0x4EE8FD0", VA = "0x4EE8FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x4EE8FE0", Offset = "0x4EE8FE0", VA = "0x4EE8FE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public UnicodeLineBreakingRules lineBreakingRules
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x4EE8FF0", Offset = "0x4EE8FF0", VA = "0x4EE8FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x4EE9460", Offset = "0x4EE9460", VA = "0x4EE9460")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool useModernHangulLineBreakingRules
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x4EE9480", Offset = "0x4EE9480", VA = "0x4EE9480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x4EE9490", Offset = "0x4EE9490", VA = "0x4EE9490")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public bool displayWarnings
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x4EE94A0", Offset = "0x4EE94A0", VA = "0x4EE94A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x4EE94B0", Offset = "0x4EE94B0", VA = "0x4EE94B0")]
		set
		{
		}
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4EE94C0", Offset = "0x4EE94C0", VA = "0x4EE94C0")]
	protected void InitializeFontReferenceLookup()
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4EE9770", Offset = "0x4EE9770", VA = "0x4EE9770")]
	protected FontAsset GetCachedFontAssetInternal(Font font)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x4EE99F0", Offset = "0x4EE99F0", VA = "0x4EE99F0")]
	internal FontAsset GetCachedFontAsset(Font font, Shader shader)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x4EE9F40", Offset = "0x4EE9F40", VA = "0x4EE9F40")]
	public TextSettings()
	{
	}
}
