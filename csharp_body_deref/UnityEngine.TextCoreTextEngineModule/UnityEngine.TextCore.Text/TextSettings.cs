// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Serialization;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x200003D")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/Native/TextSettings.h")]
[ExcludeFromObjectFactory]
[ExcludeFromPreset]
public class TextSettings : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x200003E")]
	internal struct FontReferenceMap
	{
		[Token(Token = "0x40001CC")]
		[FieldOffset(Offset = "0x0")]
		public Font font;

		[Token(Token = "0x40001CD")]
		[FieldOffset(Offset = "0x8")]
		public FontAsset fontAsset;

		[Token(Token = "0x60001D2")]
		[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
		public FontReferenceMap(Font font, FontAsset fontAsset)
		{
		}
	}

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	protected string m_Version;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("m_defaultFontAsset")]
	[SerializeField]
	protected FontAsset m_DefaultFontAsset;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("m_defaultFontAssetPath")]
	[SerializeField]
	protected string m_DefaultFontAssetPath;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x30")]
	[FormerlySerializedAs("m_fallbackFontAssets")]
	[SerializeField]
	protected List<FontAsset> m_FallbackFontAssets;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private List<FontAsset> m_FallbackOSFontAssets;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x0")]
	private static FontAsset s_RuntimeDefault;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x40")]
	[FormerlySerializedAs("m_matchMaterialPreset")]
	[SerializeField]
	protected bool m_MatchMaterialPreset;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	[FormerlySerializedAs("m_missingGlyphCharacter")]
	protected int m_MissingCharacterUnicode;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	protected bool m_ClearDynamicDataOnBuild;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x49")]
	[SerializeField]
	private bool m_EnableEmojiSupport;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private List<TextAsset> m_EmojiFallbackTextAssets;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	[FormerlySerializedAs("m_defaultSpriteAsset")]
	protected SpriteAsset m_DefaultSpriteAsset;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x60")]
	[FormerlySerializedAs("m_defaultSpriteAssetPath")]
	[SerializeField]
	protected string m_DefaultSpriteAssetPath;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	protected List<SpriteAsset> m_FallbackSpriteAssets;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	protected uint m_MissingSpriteCharacterUnicode;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	[FormerlySerializedAs("m_defaultStyleSheet")]
	protected TextStyleSheet m_DefaultStyleSheet;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x80")]
	private string m_StyleSheetsResourcePath;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x88")]
	[FormerlySerializedAs("m_defaultColorGradientPresetsPath")]
	[SerializeField]
	protected string m_DefaultColorGradientPresetsPath;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	protected UnicodeLineBreakingRules m_UnicodeLineBreakingRules;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x98")]
	[FormerlySerializedAs("m_warningsDisabled")]
	[SerializeField]
	protected bool m_DisplayWarnings;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0xA0")]
	internal Dictionary<int, FontAsset> m_FontLookup;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	internal List<FontReferenceMap> m_FontReferences;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0xB0")]
	private IntPtr m_NativeTextSettings;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0xB8")]
	private bool m_IsNativeTextSettingsDirty;

	[Token(Token = "0x17000042")]
	public string version
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public FontAsset defaultFontAsset
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public string defaultFontAssetPath
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public List<FontAsset> fallbackFontAssets
	{
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x3055A90", Offset = "0x3054090", VA = "0x183055A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	internal List<FontAsset> fallbackOSFontAssets
	{
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x30558E0", Offset = "0x3053EE0", VA = "0x1830558E0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	internal bool isFallbackOSFontAssetsInitialized
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0xC82080", Offset = "0xC80680", VA = "0x180C82080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public bool matchMaterialPreset
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0xA374F0", Offset = "0xA35AF0", VA = "0x180A374F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public int missingCharacterUnicode
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x58AA10", Offset = "0x589010", VA = "0x18058AA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public bool enableEmojiSupport
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x30558D0", Offset = "0x3053ED0", VA = "0x1830558D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x58AA20", Offset = "0x589020", VA = "0x18058AA20")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public List<TextAsset> emojiFallbackTextAssets
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x3055A60", Offset = "0x3054060", VA = "0x183055A60")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public SpriteAsset defaultSpriteAsset
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public string defaultSpriteAssetPath
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	[Obsolete("The Fallback Sprite Assets list is now obsolete. Use the emojiFallbackTextAssets instead.", true)]
	public List<SpriteAsset> fallbackSpriteAssets
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	internal static SpriteAsset s_GlobalSpriteAsset
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x3055A20", Offset = "0x3054020", VA = "0x183055A20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x3055AC0", Offset = "0x30540C0", VA = "0x183055AC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public uint missingSpriteCharacterUnicode
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x58A8F0", Offset = "0x588EF0", VA = "0x18058A8F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public TextStyleSheet defaultStyleSheet
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	[Obsolete("styleSheetsResourcePath is no longer used and will be removed in a future version.", false)]
	public string styleSheetsResourcePath
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public string defaultColorGradientPresetsPath
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0xB5BE30", Offset = "0xB5A430", VA = "0x180B5BE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public UnicodeLineBreakingRules lineBreakingRules
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x3055970", Offset = "0x3053F70", VA = "0x183055970")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0xA4D750", Offset = "0xA4BD50", VA = "0x180A4D750")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public bool displayWarnings
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0xA4D590", Offset = "0xA4BB90", VA = "0x180A4D590")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0xA4D740", Offset = "0xA4BD40", VA = "0x180A4D740")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	internal IntPtr nativeTextSettings
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x3055A00", Offset = "0x3054000", VA = "0x183055A00")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x3054C20", Offset = "0x3053220", VA = "0x183054C20")]
	private FontAsset GetDefaultFont()
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0xD0ECE0", Offset = "0xD0D2E0", VA = "0x180D0ECE0", Slot = "4")]
	internal virtual List<FontAsset> GetFallbackFontAssets(bool isRaster, int textPixelSize = -1)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x30552C0", Offset = "0x30538C0", VA = "0x1830552C0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3055240", Offset = "0x3053840", VA = "0x183055240")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3054FF0", Offset = "0x30535F0", VA = "0x183054FF0")]
	protected void InitializeFontReferenceLookup()
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3054960", Offset = "0x3052F60", VA = "0x183054960")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal FontAsset GetCachedFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3054F90", Offset = "0x3053590", VA = "0x183054F90")]
	private List<FontAsset> GetOSFontAssetList()
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3054840", Offset = "0x3052E40", VA = "0x183054840")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSettings::Create")]
	private static IntPtr CreateNativeObject(IntPtr[] fallbacks, IntPtr managedObject)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3054910", Offset = "0x3052F10", VA = "0x183054910")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSettings::Destroy")]
	private static extern void DestroyNativeObject(IntPtr m_NativeTextSettings, IntPtr managedObject);

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x30554B0", Offset = "0x3053AB0", VA = "0x1830554B0")]
	private static void UpdateFallbacks(IntPtr ptr, IntPtr[] fallbacks)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x3054CF0", Offset = "0x30532F0", VA = "0x183054CF0")]
	private IntPtr[] GetGlobalFallbacks()
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x3055450", Offset = "0x3053A50", VA = "0x183055450")]
	internal void SetNativeTextSettingsDirty()
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x3055580", Offset = "0x3053B80", VA = "0x183055580")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void UpdateNativeTextSettings()
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x3055780", Offset = "0x3053D80", VA = "0x183055780")]
	public TextSettings()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x30547F0", Offset = "0x3052DF0", VA = "0x1830547F0")]
	private static extern IntPtr CreateNativeObject_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper fallbacks, IntPtr managedObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3055460", Offset = "0x3053A60", VA = "0x183055460")]
	private static extern void UpdateFallbacks_Injected(IntPtr ptr, ref UnityEngine.Bindings.ManagedSpanWrapper fallbacks);
}
