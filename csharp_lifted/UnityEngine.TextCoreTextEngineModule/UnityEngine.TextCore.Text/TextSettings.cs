// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextSettings
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A42820", Offset = "0x6A41820", VA = "0x6A42820")]
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
		[Address(RVA = "0x6A41B70", Offset = "0x6A40B70", VA = "0x6A41B70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x6A41B80", Offset = "0x6A40B80", VA = "0x6A41B80")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public FontAsset defaultFontAsset
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x6A41B90", Offset = "0x6A40B90", VA = "0x6A41B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x6A41BA0", Offset = "0x6A40BA0", VA = "0x6A41BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public string defaultFontAssetPath
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x6A41BB0", Offset = "0x6A40BB0", VA = "0x6A41BB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x6A41BC0", Offset = "0x6A40BC0", VA = "0x6A41BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public List<FontAsset> fallbackFontAssets
	{
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x6A41BD0", Offset = "0x6A40BD0", VA = "0x6A41BD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x6A41BE0", Offset = "0x6A40BE0", VA = "0x6A41BE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	internal List<FontAsset> fallbackOSFontAssets
	{
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x6A41C00", Offset = "0x6A40C00", VA = "0x6A41C00")]
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
		[Address(RVA = "0x6A41CE0", Offset = "0x6A40CE0", VA = "0x6A41CE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public bool matchMaterialPreset
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x6A42050", Offset = "0x6A41050", VA = "0x6A42050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x6A42060", Offset = "0x6A41060", VA = "0x6A42060")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public int missingCharacterUnicode
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x6A42070", Offset = "0x6A41070", VA = "0x6A42070")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x6A42080", Offset = "0x6A41080", VA = "0x6A42080")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x6A42090", Offset = "0x6A41090", VA = "0x6A42090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x6A420A0", Offset = "0x6A410A0", VA = "0x6A420A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public bool enableEmojiSupport
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x6A420B0", Offset = "0x6A410B0", VA = "0x6A420B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x6A420C0", Offset = "0x6A410C0", VA = "0x6A420C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public List<TextAsset> emojiFallbackTextAssets
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x6A420D0", Offset = "0x6A410D0", VA = "0x6A420D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x6A420E0", Offset = "0x6A410E0", VA = "0x6A420E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public SpriteAsset defaultSpriteAsset
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x6A42100", Offset = "0x6A41100", VA = "0x6A42100")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x6A42110", Offset = "0x6A41110", VA = "0x6A42110")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public string defaultSpriteAssetPath
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x6A42120", Offset = "0x6A41120", VA = "0x6A42120")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x6A42130", Offset = "0x6A41130", VA = "0x6A42130")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	[Obsolete("The Fallback Sprite Assets list is now obsolete. Use the emojiFallbackTextAssets instead.", true)]
	public List<SpriteAsset> fallbackSpriteAssets
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x6A42140", Offset = "0x6A41140", VA = "0x6A42140")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x6A42150", Offset = "0x6A41150", VA = "0x6A42150")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	internal static SpriteAsset s_GlobalSpriteAsset
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x6A421B0", Offset = "0x6A411B0", VA = "0x6A421B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x6A42160", Offset = "0x6A41160", VA = "0x6A42160")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public uint missingSpriteCharacterUnicode
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x6A421F0", Offset = "0x6A411F0", VA = "0x6A421F0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x6A42200", Offset = "0x6A41200", VA = "0x6A42200")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public TextStyleSheet defaultStyleSheet
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x6A42210", Offset = "0x6A41210", VA = "0x6A42210")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x6A42220", Offset = "0x6A41220", VA = "0x6A42220")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	[Obsolete("styleSheetsResourcePath is no longer used and will be removed in a future version.", false)]
	public string styleSheetsResourcePath
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x6A42230", Offset = "0x6A41230", VA = "0x6A42230")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x6A42240", Offset = "0x6A41240", VA = "0x6A42240")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public string defaultColorGradientPresetsPath
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x6A42250", Offset = "0x6A41250", VA = "0x6A42250")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x6A42260", Offset = "0x6A41260", VA = "0x6A42260")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public UnicodeLineBreakingRules lineBreakingRules
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x6A42280", Offset = "0x6A41280", VA = "0x6A42280")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x6A42310", Offset = "0x6A41310", VA = "0x6A42310")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public bool displayWarnings
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x6A42330", Offset = "0x6A41330", VA = "0x6A42330")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x6A42340", Offset = "0x6A41340", VA = "0x6A42340")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	internal IntPtr nativeTextSettings
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x6A42A70", Offset = "0x6A41A70", VA = "0x6A42A70")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x6A41CF0", Offset = "0x6A40CF0", VA = "0x6A41CF0")]
	private FontAsset GetDefaultFont()
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x6A42040", Offset = "0x6A41040", VA = "0x6A42040", Slot = "4")]
	internal virtual List<FontAsset> GetFallbackFontAssets(bool isRaster, int textPixelSize = -1)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x6A42350", Offset = "0x6A41350", VA = "0x6A42350")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x6A424F0", Offset = "0x6A414F0", VA = "0x6A424F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x6A425A0", Offset = "0x6A415A0", VA = "0x6A425A0")]
	protected void InitializeFontReferenceLookup()
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x6A41DA0", Offset = "0x6A40DA0", VA = "0x6A41DA0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal FontAsset GetCachedFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x6A41C90", Offset = "0x6A40C90", VA = "0x6A41C90")]
	private List<FontAsset> GetOSFontAssetList()
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x6A42850", Offset = "0x6A41850", VA = "0x6A42850")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSettings::Create")]
	private static IntPtr CreateNativeObject(IntPtr[] fallbacks, IntPtr managedObject)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x6A42560", Offset = "0x6A41560", VA = "0x6A42560")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSettings::Destroy")]
	private static extern void DestroyNativeObject(IntPtr m_NativeTextSettings, IntPtr managedObject);

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x6A42960", Offset = "0x6A41960", VA = "0x6A42960")]
	private static void UpdateFallbacks(IntPtr ptr, IntPtr[] fallbacks)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x6A42B90", Offset = "0x6A41B90", VA = "0x6A42B90")]
	private IntPtr[] GetGlobalFallbacks()
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x6A42E60", Offset = "0x6A41E60", VA = "0x6A42E60")]
	internal void SetNativeTextSettingsDirty()
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x6A42B00", Offset = "0x6A41B00", VA = "0x6A42B00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void UpdateNativeTextSettings()
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x6A42E70", Offset = "0x6A41E70", VA = "0x6A42E70")]
	public TextSettings()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x6A42920", Offset = "0x6A41920", VA = "0x6A42920")]
	private static extern IntPtr CreateNativeObject_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper fallbacks, IntPtr managedObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x6A42A30", Offset = "0x6A41A30", VA = "0x6A42A30")]
	private static extern void UpdateFallbacks_Injected(IntPtr ptr, ref UnityEngine.Bindings.ManagedSpanWrapper fallbacks);
}
