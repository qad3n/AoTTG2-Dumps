// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Text
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.TextCore;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000089")]
public abstract class TMP_Text : MaskableGraphic
{
	[Token(Token = "0x200008A")]
	public delegate void MissingCharacterEventCallback(int unicode, int stringIndex, string text, TMP_FontAsset fontAsset, TMP_Text textComponent);

	[Token(Token = "0x200008B")]
	protected struct CharacterSubstitution
	{
		[Token(Token = "0x400051F")]
		[FieldOffset(Offset = "0x0")]
		public int index;

		[Token(Token = "0x4000520")]
		[FieldOffset(Offset = "0x4")]
		public uint unicode;

		[Token(Token = "0x600057F")]
		[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
		public CharacterSubstitution(int index, uint unicode)
		{
		}
	}

	[Token(Token = "0x200008C")]
	internal enum TextInputSources
	{
		[Token(Token = "0x4000522")]
		TextInputBox,
		[Token(Token = "0x4000523")]
		SetText,
		[Token(Token = "0x4000524")]
		SetTextArray,
		[Token(Token = "0x4000525")]
		TextString
	}

	[Token(Token = "0x200008D")]
	[DebuggerDisplay("Unicode ({unicode})  '{(char)unicode}'")]
	internal struct TextProcessingElement
	{
		[Token(Token = "0x4000526")]
		[FieldOffset(Offset = "0x0")]
		public TextProcessingElementType elementType;

		[Token(Token = "0x4000527")]
		[FieldOffset(Offset = "0x4")]
		public uint unicode;

		[Token(Token = "0x4000528")]
		[FieldOffset(Offset = "0x8")]
		public int stringIndex;

		[Token(Token = "0x4000529")]
		[FieldOffset(Offset = "0xC")]
		public int length;
	}

	[Token(Token = "0x200008E")]
	protected struct SpecialCharacter
	{
		[Token(Token = "0x400052A")]
		[FieldOffset(Offset = "0x0")]
		public TMP_Character character;

		[Token(Token = "0x400052B")]
		[FieldOffset(Offset = "0x8")]
		public TMP_FontAsset fontAsset;

		[Token(Token = "0x400052C")]
		[FieldOffset(Offset = "0x10")]
		public Material material;

		[Token(Token = "0x400052D")]
		[FieldOffset(Offset = "0x18")]
		public int materialIndex;

		[Token(Token = "0x6000580")]
		[Address(RVA = "0x2D37080", Offset = "0x2D35680", VA = "0x182D37080")]
		public SpecialCharacter(TMP_Character character, int materialIndex)
		{
		}
	}

	[Token(Token = "0x200008F")]
	private struct TextBackingContainer
	{
		[Token(Token = "0x400052E")]
		[FieldOffset(Offset = "0x0")]
		private uint[] m_Array;

		[Token(Token = "0x400052F")]
		[FieldOffset(Offset = "0x8")]
		private int m_Index;

		[Token(Token = "0x17000169")]
		public uint[] Text
		{
			[Token(Token = "0x6000581")]
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016A")]
		public int Capacity
		{
			[Token(Token = "0x6000582")]
			[Address(RVA = "0x128C570", Offset = "0x128AB70", VA = "0x18128C570")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700016B")]
		public int Count
		{
			[Token(Token = "0x6000583")]
			[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000584")]
			[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
			set
			{
			}
		}

		[Token(Token = "0x1700016C")]
		public uint this[int index]
		{
			[Token(Token = "0x6000585")]
			[Address(RVA = "0x2D47AD0", Offset = "0x2D460D0", VA = "0x182D47AD0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x6000586")]
			[Address(RVA = "0x2D47B00", Offset = "0x2D46100", VA = "0x182D47B00")]
			set
			{
			}
		}

		[Token(Token = "0x6000587")]
		[Address(RVA = "0x2D47A70", Offset = "0x2D46070", VA = "0x182D47A70")]
		public TextBackingContainer(int size)
		{
		}

		[Token(Token = "0x6000588")]
		[Address(RVA = "0x2D47A00", Offset = "0x2D46000", VA = "0x182D47A00")]
		public void Resize(int size)
		{
		}
	}

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	[TextArea(5, 10)]
	protected string m_text;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0xE8")]
	private bool m_IsTextBackingStringDirty;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	protected ITextPreprocessor m_TextPreprocessor;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	protected bool m_isRightToLeft;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	protected TMP_FontAsset m_fontAsset;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x108")]
	protected TMP_FontAsset m_currentFontAsset;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x110")]
	protected bool m_isSDFShader;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	protected Material m_sharedMaterial;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x120")]
	protected Material m_currentMaterial;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x0")]
	protected static MaterialReference[] m_materialReferences;

	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x8")]
	protected static Dictionary<int, int> m_materialReferenceIndexLookup;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x10")]
	protected static TMP_TextProcessingStack<MaterialReference> m_materialReferenceStack;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x128")]
	protected int m_currentMaterialIndex;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x130")]
	[SerializeField]
	protected Material[] m_fontSharedMaterials;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	protected Material m_fontMaterial;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	protected Material[] m_fontMaterials;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x148")]
	protected bool m_isMaterialDirty;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x14C")]
	[SerializeField]
	protected Color32 m_fontColor32;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x150")]
	[SerializeField]
	protected Color m_fontColor;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x68")]
	protected static Color32 s_colorWhite;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x160")]
	protected Color32 m_underlineColor;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x164")]
	protected Color32 m_strikethroughColor;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x168")]
	internal HighlightState m_HighlightState;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x17C")]
	internal bool m_ConvertToLinearSpace;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x17D")]
	[SerializeField]
	protected bool m_enableVertexGradient;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x180")]
	[SerializeField]
	protected ColorMode m_colorMode;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x184")]
	[SerializeField]
	protected VertexGradient m_fontColorGradient;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x1C8")]
	[SerializeField]
	protected TMP_ColorGradient m_fontColorGradientPreset;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x1D0")]
	[SerializeField]
	protected TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x1D8")]
	[SerializeField]
	protected bool m_tintAllSprites;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x1D9")]
	protected bool m_tintSprite;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x1DC")]
	protected Color32 m_spriteColor;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x1E0")]
	[SerializeField]
	protected TMP_StyleSheet m_StyleSheet;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x1E8")]
	internal TMP_Style m_TextStyle;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x1F0")]
	[SerializeField]
	protected int m_TextStyleHashCode;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x1F4")]
	[SerializeField]
	protected bool m_overrideHtmlColors;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x1F8")]
	[SerializeField]
	protected Color32 m_faceColor;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x1FC")]
	protected Color32 m_outlineColor;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x200")]
	protected float m_outlineWidth;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x204")]
	protected Vector3 m_currentEnvMapRotation;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x210")]
	protected bool m_hasEnvMapProperty;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x214")]
	[SerializeField]
	protected float m_fontSize;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x218")]
	protected float m_currentFontSize;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x21C")]
	[SerializeField]
	protected float m_fontSizeBase;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x220")]
	protected TMP_TextProcessingStack<float> m_sizeStack;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x240")]
	[SerializeField]
	protected FontWeight m_fontWeight;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x244")]
	protected FontWeight m_FontWeightInternal;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x248")]
	protected TMP_TextProcessingStack<FontWeight> m_FontWeightStack;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x268")]
	[SerializeField]
	protected bool m_enableAutoSizing;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x26C")]
	protected float m_maxFontSize;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x270")]
	protected float m_minFontSize;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x274")]
	protected int m_AutoSizeIterationCount;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x278")]
	protected int m_AutoSizeMaxIterationCount;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x27C")]
	protected bool m_IsAutoSizePointSizeSet;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x280")]
	[SerializeField]
	protected float m_fontSizeMin;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x284")]
	[SerializeField]
	protected float m_fontSizeMax;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x288")]
	[SerializeField]
	protected FontStyles m_fontStyle;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x28C")]
	protected FontStyles m_FontStyleInternal;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x290")]
	protected TMP_FontStyleStack m_fontStyleStack;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x29A")]
	protected bool m_isUsingBold;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x29C")]
	[SerializeField]
	protected HorizontalAlignmentOptions m_HorizontalAlignment;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x2A0")]
	[SerializeField]
	protected VerticalAlignmentOptions m_VerticalAlignment;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x2A4")]
	[SerializeField]
	[FormerlySerializedAs("m_lineJustification")]
	protected TextAlignmentOptions m_textAlignment;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x2A8")]
	protected HorizontalAlignmentOptions m_lineJustification;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x2B0")]
	protected TMP_TextProcessingStack<HorizontalAlignmentOptions> m_lineJustificationStack;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x2D0")]
	protected Vector3[] m_textContainerLocalCorners;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x2D8")]
	[SerializeField]
	protected float m_characterSpacing;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x2DC")]
	protected float m_cSpacing;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x2E0")]
	protected float m_monoSpacing;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x2E4")]
	protected bool m_duoSpace;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x2E8")]
	[SerializeField]
	private protected float m_characterHorizontalScale;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x2EC")]
	[SerializeField]
	protected float m_wordSpacing;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x2F0")]
	[SerializeField]
	protected float m_lineSpacing;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x2F4")]
	protected float m_lineSpacingDelta;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x2F8")]
	protected float m_lineHeight;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x2FC")]
	protected bool m_IsDrivenLineSpacing;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x300")]
	[SerializeField]
	protected float m_lineSpacingMax;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x304")]
	[SerializeField]
	protected float m_paragraphSpacing;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x308")]
	[SerializeField]
	protected float m_charWidthMaxAdj;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x30C")]
	protected float m_charWidthAdjDelta;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x310")]
	[SerializeField]
	[FormerlySerializedAs("m_enableWordWrapping")]
	protected TextWrappingModes m_TextWrappingMode;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x314")]
	protected bool m_isCharacterWrappingEnabled;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x315")]
	protected bool m_isNonBreakingSpace;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x316")]
	protected bool m_isIgnoringAlignment;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x318")]
	[SerializeField]
	protected float m_wordWrappingRatios;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x31C")]
	[SerializeField]
	protected TextOverflowModes m_overflowMode;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x320")]
	protected int m_firstOverflowCharacterIndex;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x328")]
	[SerializeField]
	protected TMP_Text m_linkedTextComponent;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x330")]
	[SerializeField]
	internal TMP_Text parentLinkedComponent;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x338")]
	protected bool m_isTextTruncated;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x339")]
	[SerializeField]
	protected bool m_enableKerning;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x33C")]
	protected int m_LastBaseGlyphIndex;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x340")]
	[SerializeField]
	protected List<OTL_FeatureTag> m_ActiveFontFeatures;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x348")]
	[SerializeField]
	protected bool m_enableExtraPadding;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x349")]
	[SerializeField]
	protected bool checkPaddingRequired;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x34A")]
	[SerializeField]
	protected bool m_isRichText;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x34B")]
	[SerializeField]
	private bool m_EmojiFallbackSupport;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x34C")]
	[SerializeField]
	protected bool m_parseCtrlCharacters;

	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x34D")]
	protected bool m_isOverlay;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x34E")]
	[SerializeField]
	protected bool m_isOrthographic;

	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x34F")]
	[SerializeField]
	protected bool m_isCullingEnabled;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x350")]
	protected bool m_isMaskingEnabled;

	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x351")]
	protected bool isMaskUpdateRequired;

	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x352")]
	protected bool m_ignoreCulling;

	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x354")]
	[SerializeField]
	protected TextureMappingOptions m_horizontalMapping;

	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x358")]
	[SerializeField]
	protected TextureMappingOptions m_verticalMapping;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x35C")]
	[SerializeField]
	protected float m_uvLineOffset;

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x360")]
	protected TextRenderFlags m_renderMode;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x364")]
	[SerializeField]
	protected VertexSortingOrder m_geometrySortingOrder;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x368")]
	[SerializeField]
	protected bool m_IsTextObjectScaleStatic;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x369")]
	[SerializeField]
	protected bool m_VertexBufferAutoSizeReduction;

	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x36C")]
	protected int m_firstVisibleCharacter;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x370")]
	protected int m_maxVisibleCharacters;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x374")]
	protected int m_maxVisibleWords;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x378")]
	protected int m_maxVisibleLines;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x37C")]
	[SerializeField]
	protected bool m_useMaxVisibleDescender;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x380")]
	[SerializeField]
	protected int m_pageToDisplay;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x384")]
	protected bool m_isNewPage;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x388")]
	[SerializeField]
	protected Vector4 m_margin;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x398")]
	protected float m_marginLeft;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x39C")]
	protected float m_marginRight;

	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x3A0")]
	protected float m_marginWidth;

	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x3A4")]
	protected float m_marginHeight;

	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x3A8")]
	protected float m_width;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x3B0")]
	protected TMP_TextInfo m_textInfo;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x3B8")]
	protected bool m_havePropertiesChanged;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x3B9")]
	[SerializeField]
	protected bool m_isUsingLegacyAnimationComponent;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x3C0")]
	protected Transform m_transform;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x3C8")]
	protected RectTransform m_rectTransform;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x3D0")]
	protected Vector2 m_PreviousRectTransformSize;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x3D8")]
	protected Vector2 m_PreviousPivotPosition;

	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x3E1")]
	protected bool m_autoSizeTextContainer;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x3E8")]
	protected Mesh m_mesh;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x3F0")]
	[SerializeField]
	protected bool m_isVolumetricText;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x70")]
	[CompilerGenerated]
	private static Func<int, string, TMP_FontAsset> m_OnFontAssetRequest;

	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x78")]
	[CompilerGenerated]
	private static Func<int, string, TMP_SpriteAsset> m_OnSpriteAssetRequest;

	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x80")]
	[CompilerGenerated]
	private static MissingCharacterEventCallback m_OnMissingCharacter;

	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x3F8")]
	[CompilerGenerated]
	private Action<TMP_TextInfo> m_OnPreRenderText;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x400")]
	protected TMP_SpriteAnimator m_spriteAnimator;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x408")]
	protected float m_flexibleHeight;

	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x40C")]
	protected float m_flexibleWidth;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x410")]
	protected float m_minWidth;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x414")]
	protected float m_minHeight;

	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x418")]
	protected float m_maxWidth;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x41C")]
	protected float m_maxHeight;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x420")]
	protected LayoutElement m_LayoutElement;

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x428")]
	protected float m_preferredWidth;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x42C")]
	protected float m_RenderedWidth;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x430")]
	protected bool m_isPreferredWidthDirty;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x434")]
	protected float m_preferredHeight;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x438")]
	protected float m_RenderedHeight;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x43C")]
	protected bool m_isPreferredHeightDirty;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x43D")]
	protected bool m_isCalculatingPreferredValues;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x440")]
	protected int m_layoutPriority;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x444")]
	protected bool m_isLayoutDirty;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x445")]
	protected bool m_isAwake;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x446")]
	internal bool m_isWaitingOnResourceLoad;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x448")]
	internal TextInputSources m_inputSource;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x44C")]
	protected float m_fontScaleMultiplier;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0x88")]
	private static char[] m_htmlTag;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x90")]
	private static RichTextTagAttribute[] m_xmlAttribute;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x98")]
	private static float[] m_attributeParameterValues;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x450")]
	protected float tag_LineIndent;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x454")]
	protected float tag_Indent;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x458")]
	protected TMP_TextProcessingStack<float> m_indentStack;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x478")]
	protected bool tag_NoParsing;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x479")]
	protected bool m_isTextLayoutPhase;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x47C")]
	protected Quaternion m_FXRotation;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x48C")]
	protected Vector3 m_FXScale;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x498")]
	internal TextProcessingElement[] m_TextProcessingArray;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x4A0")]
	internal int m_InternalTextProcessingArraySize;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x4A8")]
	private TMP_CharacterInfo[] m_internalCharacterInfo;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x4B0")]
	protected int m_totalCharacterCount;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0xA0")]
	internal static WordWrapState m_SavedWordWrapState;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x458")]
	internal static WordWrapState m_SavedLineState;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x810")]
	internal static WordWrapState m_SavedEllipsisState;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0xBC8")]
	internal static WordWrapState m_SavedLastValidState;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0xF80")]
	internal static WordWrapState m_SavedSoftLineBreakState;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x1338")]
	internal static TMP_TextProcessingStack<WordWrapState> m_EllipsisInsertionCandidateStack;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x4B4")]
	protected int m_characterCount;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x4B8")]
	protected int m_firstCharacterOfLine;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x4BC")]
	protected int m_firstVisibleCharacterOfLine;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x4C0")]
	protected int m_lastCharacterOfLine;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x4C4")]
	protected int m_lastVisibleCharacterOfLine;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x4C8")]
	protected int m_lineNumber;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x4CC")]
	protected int m_lineVisibleCharacterCount;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x4D0")]
	protected int m_lineVisibleSpaceCount;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x4D4")]
	protected int m_pageNumber;

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x4D8")]
	protected float m_PageAscender;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x4DC")]
	protected float m_maxTextAscender;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x4E0")]
	protected float m_maxCapHeight;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x4E4")]
	protected float m_ElementAscender;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x4E8")]
	protected float m_ElementDescender;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x4EC")]
	protected float m_maxLineAscender;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x4F0")]
	protected float m_maxLineDescender;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x4F4")]
	protected float m_startOfLineAscender;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x4F8")]
	protected float m_startOfLineDescender;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x4FC")]
	protected float m_lineOffset;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x500")]
	protected Extents m_meshExtents;

	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x510")]
	protected Color32 m_htmlColor;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x518")]
	protected TMP_TextProcessingStack<Color32> m_colorStack;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x538")]
	protected TMP_TextProcessingStack<Color32> m_underlineColorStack;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x558")]
	protected TMP_TextProcessingStack<Color32> m_strikethroughColorStack;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x578")]
	protected TMP_TextProcessingStack<HighlightState> m_HighlightStateStack;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x5A8")]
	protected TMP_ColorGradient m_colorGradientPreset;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x5B0")]
	protected TMP_TextProcessingStack<TMP_ColorGradient> m_colorGradientStack;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x5D8")]
	protected bool m_colorGradientPresetIsTinted;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x5DC")]
	protected float m_tabSpacing;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x5E0")]
	protected float m_spacing;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x5E8")]
	protected TMP_TextProcessingStack<int>[] m_TextStyleStacks;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x5F0")]
	protected int m_TextStyleStackDepth;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x5F8")]
	protected TMP_TextProcessingStack<int> m_ItalicAngleStack;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x618")]
	protected int m_ItalicAngle;

	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x620")]
	protected TMP_TextProcessingStack<int> m_actionStack;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x640")]
	protected float m_padding;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x644")]
	protected float m_baselineOffset;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x648")]
	protected TMP_TextProcessingStack<float> m_baselineOffsetStack;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x668")]
	protected float m_xAdvance;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x66C")]
	protected TMP_TextElementType m_textElementType;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x670")]
	protected TMP_TextElement m_cached_TextElement;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x678")]
	protected SpecialCharacter m_Ellipsis;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x698")]
	protected SpecialCharacter m_Underline;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x6B8")]
	protected TMP_SpriteAsset m_defaultSpriteAsset;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x6C0")]
	protected TMP_SpriteAsset m_currentSpriteAsset;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x6C8")]
	protected int m_spriteCount;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x6CC")]
	protected int m_spriteIndex;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x6D0")]
	protected int m_spriteAnimationID;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x1710")]
	private static ProfilerMarker k_ParseTextMarker;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x1718")]
	private static ProfilerMarker k_InsertNewLineMarker;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x6D4")]
	protected bool m_ignoreActiveState;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x6D8")]
	private TextBackingContainer m_TextBackingArray;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x6E8")]
	private readonly decimal[] k_Power;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x1720")]
	protected static Vector2 k_LargePositiveVector2;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x1728")]
	protected static Vector2 k_LargeNegativeVector2;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x1730")]
	protected static float k_LargePositiveFloat;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x1734")]
	protected static float k_LargeNegativeFloat;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x1738")]
	protected static int k_LargePositiveInt;

	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x173C")]
	protected static int k_LargeNegativeInt;

	[Token(Token = "0x1700010B")]
	public virtual string text
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x2D24AA0", Offset = "0x2D230A0", VA = "0x182D24AA0", Slot = "65")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x2D265B0", Offset = "0x2D24BB0", VA = "0x182D265B0", Slot = "66")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public ITextPreprocessor textPreprocessor
	{
		[Token(Token = "0x6000446")]
		[Address(RVA = "0xB5B620", Offset = "0xB59C20", VA = "0x180B5B620")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000447")]
		[Address(RVA = "0xB5BC50", Offset = "0xB5A250", VA = "0x180B5BC50")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public bool isRightToLeftText
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x2D24130", Offset = "0x2D22730", VA = "0x182D24130")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x2D25D00", Offset = "0x2D24300", VA = "0x182D25D00")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	public TMP_FontAsset font
	{
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x2D25AF0", Offset = "0x2D240F0", VA = "0x182D25AF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	public virtual Material fontSharedMaterial
	{
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x1C54FF0", Offset = "0x1C535F0", VA = "0x181C54FF0", Slot = "67")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x2D25880", Offset = "0x2D23E80", VA = "0x182D25880", Slot = "68")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public virtual Material[] fontSharedMaterials
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x2D24050", Offset = "0x2D22650", VA = "0x182D24050", Slot = "69")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x2D25830", Offset = "0x2D23E30", VA = "0x182D25830", Slot = "70")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public Material fontMaterial
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x2D24010", Offset = "0x2D22610", VA = "0x182D24010")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x2D25730", Offset = "0x2D23D30", VA = "0x182D25730")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public virtual Material[] fontMaterials
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x2D24030", Offset = "0x2D22630", VA = "0x182D24030", Slot = "71")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x2D25830", Offset = "0x2D23E30", VA = "0x182D25830", Slot = "72")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public override Color color
	{
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x2D23E10", Offset = "0x2D22410", VA = "0x182D23E10", Slot = "22")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x2D252A0", Offset = "0x2D238A0", VA = "0x182D252A0", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public float alpha
	{
		[Token(Token = "0x6000456")]
		[Address(RVA = "0x2D23CD0", Offset = "0x2D222D0", VA = "0x182D23CD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x2D250B0", Offset = "0x2D236B0", VA = "0x182D250B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public bool enableVertexGradient
	{
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x2D23EA0", Offset = "0x2D224A0", VA = "0x182D23EA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000459")]
		[Address(RVA = "0x2D25550", Offset = "0x2D23B50", VA = "0x182D25550")]
		set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public VertexGradient colorGradient
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x2D23DE0", Offset = "0x2D223E0", VA = "0x182D23DE0")]
		get
		{
			return default(VertexGradient);
		}
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x2D25250", Offset = "0x2D23850", VA = "0x182D25250")]
		set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public TMP_ColorGradient colorGradientPreset
	{
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x2CF3D00", Offset = "0x2CF2300", VA = "0x182CF3D00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x2D25210", Offset = "0x2D23810", VA = "0x182D25210")]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x2D07860", Offset = "0x2D05E60", VA = "0x182D07860")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045F")]
		[Address(RVA = "0x2D26450", Offset = "0x2D24A50", VA = "0x182D26450")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public bool tintAllSprites
	{
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x2D24B90", Offset = "0x2D23190", VA = "0x182D24B90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x2D26660", Offset = "0x2D24C60", VA = "0x182D26660")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public TMP_StyleSheet styleSheet
	{
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x2D07850", Offset = "0x2D05E50", VA = "0x182D07850")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x2D264A0", Offset = "0x2D24AA0", VA = "0x182D264A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public TMP_Style textStyle
	{
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x2D24A20", Offset = "0x2D23020", VA = "0x182D24A20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x2D264F0", Offset = "0x2D24AF0", VA = "0x182D264F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public bool overrideColorTags
	{
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x2D244E0", Offset = "0x2D22AE0", VA = "0x182D244E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000467")]
		[Address(RVA = "0x2D262D0", Offset = "0x2D248D0", VA = "0x182D262D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	public Color32 faceColor
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x2D23EE0", Offset = "0x2D224E0", VA = "0x182D23EE0")]
		get
		{
			return default(Color32);
		}
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x2D25620", Offset = "0x2D23C20", VA = "0x182D25620")]
		set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	public Color32 outlineColor
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x2D24310", Offset = "0x2D22910", VA = "0x182D24310")]
		get
		{
			return default(Color32);
		}
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x2D261B0", Offset = "0x2D247B0", VA = "0x182D261B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public float outlineWidth
	{
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x2D24400", Offset = "0x2D22A00", VA = "0x182D24400")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x2D26220", Offset = "0x2D24820", VA = "0x182D26220")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public float fontSize
	{
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x2D24090", Offset = "0x2D22690", VA = "0x182D24090")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x2D259E0", Offset = "0x2D23FE0", VA = "0x182D259E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public FontWeight fontWeight
	{
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x2D240B0", Offset = "0x2D226B0", VA = "0x182D240B0")]
		get
		{
			return default(FontWeight);
		}
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x2D25AA0", Offset = "0x2D240A0", VA = "0x182D25AA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x2D24520", Offset = "0x2D22B20", VA = "0x182D24520")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000123")]
	public bool enableAutoSizing
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x2D23E30", Offset = "0x2D22430", VA = "0x182D23E30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x2D25370", Offset = "0x2D23970", VA = "0x182D25370")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public float fontSizeMin
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x2D24080", Offset = "0x2D22680", VA = "0x182D24080")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x2D25990", Offset = "0x2D23F90", VA = "0x182D25990")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public float fontSizeMax
	{
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x2D24070", Offset = "0x2D22670", VA = "0x182D24070")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x2D25940", Offset = "0x2D23F40", VA = "0x182D25940")]
		set
		{
		}
	}

	[Token(Token = "0x17000126")]
	public FontStyles fontStyle
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x2D240A0", Offset = "0x2D226A0", VA = "0x182D240A0")]
		get
		{
			return default(FontStyles);
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x2D25A50", Offset = "0x2D24050", VA = "0x182D25A50")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public bool isUsingBold
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x2D24170", Offset = "0x2D22770", VA = "0x182D24170")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000128")]
	public HorizontalAlignmentOptions horizontalAlignment
	{
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x2D240E0", Offset = "0x2D226E0", VA = "0x182D240E0")]
		get
		{
			return default(HorizontalAlignmentOptions);
		}
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x2D25C00", Offset = "0x2D24200", VA = "0x182D25C00")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public VerticalAlignmentOptions verticalAlignment
	{
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x2D24C60", Offset = "0x2D23260", VA = "0x182D24C60")]
		get
		{
			return default(VerticalAlignmentOptions);
		}
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x2D266E0", Offset = "0x2D24CE0", VA = "0x182D266E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x2D23CC0", Offset = "0x2D222C0", VA = "0x182D23CC0")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x2D25070", Offset = "0x2D23670", VA = "0x182D25070")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public float characterSpacing
	{
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x2D23DC0", Offset = "0x2D223C0", VA = "0x182D23DC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000483")]
		[Address(RVA = "0x2D25150", Offset = "0x2D23750", VA = "0x182D25150")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public float characterHorizontalScale
	{
		[Token(Token = "0x6000484")]
		[Address(RVA = "0x2D23DB0", Offset = "0x2D223B0", VA = "0x182D23DB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000485")]
		[Address(RVA = "0x2D250F0", Offset = "0x2D236F0", VA = "0x182D250F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	public float wordSpacing
	{
		[Token(Token = "0x6000486")]
		[Address(RVA = "0x2D24C80", Offset = "0x2D23280", VA = "0x182D24C80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000487")]
		[Address(RVA = "0x2D26740", Offset = "0x2D24D40", VA = "0x182D26740")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public float lineSpacing
	{
		[Token(Token = "0x6000488")]
		[Address(RVA = "0x2D24260", Offset = "0x2D22860", VA = "0x182D24260")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000489")]
		[Address(RVA = "0x2D25ED0", Offset = "0x2D244D0", VA = "0x182D25ED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public float lineSpacingAdjustment
	{
		[Token(Token = "0x600048A")]
		[Address(RVA = "0x2D24250", Offset = "0x2D22850", VA = "0x182D24250")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600048B")]
		[Address(RVA = "0x2D25E70", Offset = "0x2D24470", VA = "0x182D25E70")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public float paragraphSpacing
	{
		[Token(Token = "0x600048C")]
		[Address(RVA = "0x2D24500", Offset = "0x2D22B00", VA = "0x182D24500")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600048D")]
		[Address(RVA = "0x2D26330", Offset = "0x2D24930", VA = "0x182D26330")]
		set
		{
		}
	}

	[Token(Token = "0x17000131")]
	public float characterWidthAdjustment
	{
		[Token(Token = "0x600048E")]
		[Address(RVA = "0x2D23DD0", Offset = "0x2D223D0", VA = "0x182D23DD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600048F")]
		[Address(RVA = "0x2D251B0", Offset = "0x2D237B0", VA = "0x182D251B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public TextWrappingModes textWrappingMode
	{
		[Token(Token = "0x6000490")]
		[Address(RVA = "0x100AE70", Offset = "0x1009470", VA = "0x18100AE70")]
		get
		{
			return default(TextWrappingModes);
		}
		[Token(Token = "0x6000491")]
		[Address(RVA = "0x2D26560", Offset = "0x2D24B60", VA = "0x182D26560")]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	[Obsolete("The enabledWordWrapping property is now obsolete. Please use the textWrappingMode property instead.")]
	public bool enableWordWrapping
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x2D23EB0", Offset = "0x2D224B0", VA = "0x182D23EB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000493")]
		[Address(RVA = "0x2D25580", Offset = "0x2D23B80", VA = "0x182D25580")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public float wordWrappingRatios
	{
		[Token(Token = "0x6000494")]
		[Address(RVA = "0x2D24C90", Offset = "0x2D23290", VA = "0x182D24C90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x2D267A0", Offset = "0x2D24DA0", VA = "0x182D267A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public TextOverflowModes overflowMode
	{
		[Token(Token = "0x6000496")]
		[Address(RVA = "0x2D244D0", Offset = "0x2D22AD0", VA = "0x182D244D0")]
		get
		{
			return default(TextOverflowModes);
		}
		[Token(Token = "0x6000497")]
		[Address(RVA = "0x2D26280", Offset = "0x2D24880", VA = "0x182D26280")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public bool isTextOverflowing
	{
		[Token(Token = "0x6000498")]
		[Address(RVA = "0x2D24150", Offset = "0x2D22750", VA = "0x182D24150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public int firstOverflowCharacterIndex
	{
		[Token(Token = "0x6000499")]
		[Address(RVA = "0x100AE60", Offset = "0x1009460", VA = "0x18100AE60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000138")]
	public TMP_Text linkedTextComponent
	{
		[Token(Token = "0x600049A")]
		[Address(RVA = "0x100AEA0", Offset = "0x10094A0", VA = "0x18100AEA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600049B")]
		[Address(RVA = "0x2D25F30", Offset = "0x2D24530", VA = "0x182D25F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public bool isTextTruncated
	{
		[Token(Token = "0x600049C")]
		[Address(RVA = "0x2D24160", Offset = "0x2D22760", VA = "0x182D24160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	[Obsolete("The \"enableKerning\" property has been deprecated. Use the \"fontFeatures\" property to control what features are enabled on the text component.")]
	public bool enableKerning
	{
		[Token(Token = "0x600049D")]
		[Address(RVA = "0x2D23E50", Offset = "0x2D22450", VA = "0x182D23E50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600049E")]
		[Address(RVA = "0x2D25400", Offset = "0x2D23A00", VA = "0x182D25400")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public List<OTL_FeatureTag> fontFeatures
	{
		[Token(Token = "0x600049F")]
		[Address(RVA = "0x2D24000", Offset = "0x2D22600", VA = "0x182D24000")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x2D256D0", Offset = "0x2D23CD0", VA = "0x182D256D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public bool extraPadding
	{
		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x2D23ED0", Offset = "0x2D224D0", VA = "0x182D23ED0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x2D255D0", Offset = "0x2D23BD0", VA = "0x182D255D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public bool richText
	{
		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x2D24830", Offset = "0x2D22E30", VA = "0x182D24830")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x2D26400", Offset = "0x2D24A00", VA = "0x182D26400")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public bool emojiFallbackSupport
	{
		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x2D23E20", Offset = "0x2D22420", VA = "0x182D23E20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004A6")]
		[Address(RVA = "0x2D25320", Offset = "0x2D23920", VA = "0x182D25320")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public bool parseCtrlCharacters
	{
		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x2D24510", Offset = "0x2D22B10", VA = "0x182D24510")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x2D26390", Offset = "0x2D24990", VA = "0x182D26390")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public bool isOverlay
	{
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x2D24120", Offset = "0x2D22720", VA = "0x182D24120")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AA")]
		[Address(RVA = "0x2D25CB0", Offset = "0x2D242B0", VA = "0x182D25CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public bool isOrthographic
	{
		[Token(Token = "0x60004AB")]
		[Address(RVA = "0x2D24110", Offset = "0x2D22710", VA = "0x182D24110")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AC")]
		[Address(RVA = "0x2D25C80", Offset = "0x2D24280", VA = "0x182D25C80")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public bool enableCulling
	{
		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x2D23E40", Offset = "0x2D22440", VA = "0x182D23E40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AE")]
		[Address(RVA = "0x2D253C0", Offset = "0x2D239C0", VA = "0x182D253C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public bool ignoreVisibility
	{
		[Token(Token = "0x60004AF")]
		[Address(RVA = "0x2D24100", Offset = "0x2D22700", VA = "0x182D24100")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x2D25C60", Offset = "0x2D24260", VA = "0x182D25C60")]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public TextureMappingOptions horizontalMapping
	{
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x2D240F0", Offset = "0x2D226F0", VA = "0x182D240F0")]
		get
		{
			return default(TextureMappingOptions);
		}
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x2D25C30", Offset = "0x2D24230", VA = "0x182D25C30")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public TextureMappingOptions verticalMapping
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x2D24C70", Offset = "0x2D23270", VA = "0x182D24C70")]
		get
		{
			return default(TextureMappingOptions);
		}
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x2D26710", Offset = "0x2D24D10", VA = "0x182D26710")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public float mappingUvLineOffset
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x2D24270", Offset = "0x2D22870", VA = "0x182D24270")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x2D26040", Offset = "0x2D24640", VA = "0x182D26040")]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public TextRenderFlags renderMode
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x2D24820", Offset = "0x2D22E20", VA = "0x182D24820")]
		get
		{
			return default(TextRenderFlags);
		}
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x2D263E0", Offset = "0x2D249E0", VA = "0x182D263E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public VertexSortingOrder geometrySortingOrder
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x2D240C0", Offset = "0x2D226C0", VA = "0x182D240C0")]
		get
		{
			return default(VertexSortingOrder);
		}
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x2D25BC0", Offset = "0x2D241C0", VA = "0x182D25BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public bool isTextObjectScaleStatic
	{
		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x2D24140", Offset = "0x2D22740", VA = "0x182D24140")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x2D25D50", Offset = "0x2D24350", VA = "0x182D25D50")]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public bool vertexBufferAutoSizeReduction
	{
		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x2D24C50", Offset = "0x2D23250", VA = "0x182D24C50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x2D266C0", Offset = "0x2D24CC0", VA = "0x182D266C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public int firstVisibleCharacter
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x2D23FD0", Offset = "0x2D225D0", VA = "0x182D23FD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x2D256A0", Offset = "0x2D23CA0", VA = "0x182D256A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public int maxVisibleCharacters
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x2D242A0", Offset = "0x2D228A0", VA = "0x182D242A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x2D26120", Offset = "0x2D24720", VA = "0x182D26120")]
		set
		{
		}
	}

	[Token(Token = "0x1700014D")]
	public int maxVisibleWords
	{
		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x2D242C0", Offset = "0x2D228C0", VA = "0x182D242C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x2D26180", Offset = "0x2D24780", VA = "0x182D26180")]
		set
		{
		}
	}

	[Token(Token = "0x1700014E")]
	public int maxVisibleLines
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x2D242B0", Offset = "0x2D228B0", VA = "0x182D242B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x2D26150", Offset = "0x2D24750", VA = "0x182D26150")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public bool useMaxVisibleDescender
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x2D24C40", Offset = "0x2D23240", VA = "0x182D24C40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x2D26690", Offset = "0x2D24C90", VA = "0x182D26690")]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public int pageToDisplay
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x2D244F0", Offset = "0x2D22AF0", VA = "0x182D244F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x2D26300", Offset = "0x2D24900", VA = "0x182D26300")]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public virtual Vector4 margin
	{
		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x2D24280", Offset = "0x2D22880", VA = "0x182D24280", Slot = "73")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x2D26070", Offset = "0x2D24670", VA = "0x182D26070", Slot = "74")]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public TMP_TextInfo textInfo
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x2D249A0", Offset = "0x2D22FA0", VA = "0x182D249A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000153")]
	public bool havePropertiesChanged
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x2D240D0", Offset = "0x2D226D0", VA = "0x182D240D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x2D25BE0", Offset = "0x2D241E0", VA = "0x182D25BE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public bool isUsingLegacyAnimationComponent
	{
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x2D24180", Offset = "0x2D22780", VA = "0x182D24180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x2D25DF0", Offset = "0x2D243F0", VA = "0x182D25DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public new Transform transform
	{
		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x2D24BA0", Offset = "0x2D231A0", VA = "0x182D24BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000156")]
	public new RectTransform rectTransform
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x2D24780", Offset = "0x2D22D80", VA = "0x182D24780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000157")]
	public virtual bool autoSizeTextContainer
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x2D23CE0", Offset = "0x2D222E0", VA = "0x182D23CE0", Slot = "75")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x2D250E0", Offset = "0x2D236E0", VA = "0x182D250E0", Slot = "76")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public virtual Mesh mesh
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x2D242E0", Offset = "0x2D228E0", VA = "0x182D242E0", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000159")]
	public bool isVolumetricText
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x2D24190", Offset = "0x2D22790", VA = "0x182D24190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x2D25E00", Offset = "0x2D24400", VA = "0x182D25E00")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public Bounds bounds
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x2D23CF0", Offset = "0x2D222F0", VA = "0x182D23CF0")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700015B")]
	public Bounds textBounds
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x2D24950", Offset = "0x2D22F50", VA = "0x182D24950")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700015C")]
	protected TMP_SpriteAnimator spriteAnimator
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x2D24840", Offset = "0x2D22E40", VA = "0x182D24840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015D")]
	public float flexibleHeight
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x2D23FE0", Offset = "0x2D225E0", VA = "0x182D23FE0", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700015E")]
	public float flexibleWidth
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x2D23FF0", Offset = "0x2D225F0", VA = "0x182D23FF0", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700015F")]
	public float minWidth
	{
		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x2D24300", Offset = "0x2D22900", VA = "0x182D24300", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000160")]
	public float minHeight
	{
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x2D242F0", Offset = "0x2D228F0", VA = "0x182D242F0", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000161")]
	public float maxWidth
	{
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x2D242D0", Offset = "0x2D228D0", VA = "0x182D242D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000162")]
	public float maxHeight
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x2D24290", Offset = "0x2D22890", VA = "0x182D24290")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000163")]
	protected LayoutElement layoutElement
	{
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x2D241A0", Offset = "0x2D227A0", VA = "0x182D241A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x2D24760", Offset = "0x2D22D60", VA = "0x182D24760", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000165")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x2D24740", Offset = "0x2D22D40", VA = "0x182D24740", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000166")]
	public virtual float renderedWidth
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x2D12D60", Offset = "0x2D11360", VA = "0x182D12D60", Slot = "86")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000167")]
	public virtual float renderedHeight
	{
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x2D12CA0", Offset = "0x2D112A0", VA = "0x182D12CA0", Slot = "87")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000168")]
	public int layoutPriority
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x2D24240", Offset = "0x2D22840", VA = "0x182D24240", Slot = "88")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Func<int, string, TMP_FontAsset> OnFontAssetRequest
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x2D238F0", Offset = "0x2D21EF0", VA = "0x182D238F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x2D24CA0", Offset = "0x2D232A0", VA = "0x182D24CA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event Func<int, string, TMP_SpriteAsset> OnSpriteAssetRequest
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x2D23BB0", Offset = "0x2D221B0", VA = "0x182D23BB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x2D24F60", Offset = "0x2D23560", VA = "0x182D24F60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public static event MissingCharacterEventCallback OnMissingCharacter
	{
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x2D23A00", Offset = "0x2D22000", VA = "0x182D23A00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x2D24DB0", Offset = "0x2D233B0", VA = "0x182D24DB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public virtual event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x2D23B00", Offset = "0x2D22100", VA = "0x182D23B00", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x2D24EB0", Offset = "0x2D234B0", VA = "0x182D24EB0", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "89")]
	protected virtual void LoadFontAsset()
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "90")]
	protected virtual void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "91")]
	protected virtual Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "92")]
	protected virtual void SetFontBaseMaterial(Material mat)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "93")]
	protected virtual Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "94")]
	protected virtual void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "95")]
	protected virtual Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x2D0DF80", Offset = "0x2D0C580", VA = "0x182D0DF80", Slot = "96")]
	protected virtual Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x2D1BB30", Offset = "0x2D1A130", VA = "0x182D1BB30")]
	protected void SetVertexColorGradient(TMP_ColorGradient gradient)
	{
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	protected void SetTextSortingOrder(VertexSortingOrder order)
	{
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	protected void SetTextSortingOrder(int[] order)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "97")]
	protected virtual void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "98")]
	protected virtual void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "99")]
	protected virtual void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "100")]
	protected virtual void SetShaderDepth()
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "101")]
	protected virtual void SetCulling()
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "102")]
	internal virtual void UpdateCulling()
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x2D11ED0", Offset = "0x2D104D0", VA = "0x182D11ED0", Slot = "103")]
	protected virtual float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x2D12020", Offset = "0x2D10620", VA = "0x182D12020", Slot = "104")]
	protected virtual float GetPaddingForMaterial(Material mat)
	{
		return default(float);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "105")]
	protected virtual Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "106")]
	public virtual void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "107")]
	public virtual void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "108")]
	public virtual void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "109")]
	public virtual void UpdateVertexData()
	{
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "110")]
	public virtual void SetVertices(Vector3[] vertices)
	{
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "111")]
	public virtual void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x2D0E0B0", Offset = "0x2D0C6B0", VA = "0x182D0E0B0", Slot = "47")]
	public override void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x2D0E040", Offset = "0x2D0C640", VA = "0x182D0E040", Slot = "49")]
	public override void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "112")]
	protected virtual void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "113")]
	protected virtual void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x2D16590", Offset = "0x2D14B90", VA = "0x182D16590")]
	protected void ParseInputText()
	{
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x2D16A80", Offset = "0x2D15080", VA = "0x182D16A80")]
	private void PopulateTextBackingArray(string sourceText)
	{
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x2D16880", Offset = "0x2D14E80", VA = "0x182D16880")]
	private void PopulateTextBackingArray(string sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x2D16770", Offset = "0x2D14D70", VA = "0x182D16770")]
	private void PopulateTextBackingArray(StringBuilder sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x2D16980", Offset = "0x2D14F80", VA = "0x182D16980")]
	private void PopulateTextBackingArray(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x2D16B50", Offset = "0x2D15150", VA = "0x182D16B50")]
	private void PopulateTextProcessingArray()
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x2D1B120", Offset = "0x2D19720", VA = "0x182D1B120")]
	private void SetTextInternal(string sourceText)
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x2D1B670", Offset = "0x2D19C70", VA = "0x182D1B670")]
	public void SetText(string sourceText)
	{
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x2D1B670", Offset = "0x2D19C70", VA = "0x182D1B670")]
	[Obsolete("Use the SetText(string) function instead.")]
	public void SetText(string sourceText, bool syncTextInputBox = true)
	{
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x2D1B970", Offset = "0x2D19F70", VA = "0x182D1B970")]
	public void SetText(string sourceText, float arg0)
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x2D1B220", Offset = "0x2D19820", VA = "0x182D1B220")]
	public void SetText(string sourceText, float arg0, float arg1)
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x2D1B8D0", Offset = "0x2D19ED0", VA = "0x182D1B8D0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2)
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x2D1B920", Offset = "0x2D19F20", VA = "0x182D1B920")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3)
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x2D1B870", Offset = "0x2D19E70", VA = "0x182D1B870")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x2D1B7A0", Offset = "0x2D19DA0", VA = "0x182D1B7A0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x2D1B800", Offset = "0x2D19E00", VA = "0x182D1B800")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)
	{
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x2D1B3B0", Offset = "0x2D199B0", VA = "0x182D1B3B0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7)
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x2D1B260", Offset = "0x2D19860", VA = "0x182D1B260")]
	public void SetText(StringBuilder sourceText)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x2D1B9C0", Offset = "0x2D19FC0", VA = "0x182D1B9C0")]
	private void SetText(StringBuilder sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x2D1B0F0", Offset = "0x2D196F0", VA = "0x182D1B0F0")]
	public void SetText(char[] sourceText)
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x2D1B9B0", Offset = "0x2D19FB0", VA = "0x182D1B9B0")]
	public void SetText(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x2D1B0F0", Offset = "0x2D196F0", VA = "0x182D1B0F0")]
	public void SetCharArray(char[] sourceText)
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x2D1AF90", Offset = "0x2D19590", VA = "0x182D1AF90")]
	public void SetCharArray(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x2D12F80", Offset = "0x2D11580", VA = "0x182D12F80")]
	private TMP_Style GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x2D158D0", Offset = "0x2D13ED0", VA = "0x182D158D0")]
	private void InsertOpeningTextStyle(TMP_Style style, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x2D14DC0", Offset = "0x2D133C0", VA = "0x182D14DC0")]
	private void InsertClosingTextStyle(TMP_Style style, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x2D15980", Offset = "0x2D13F80", VA = "0x182D15980")]
	private void InsertTextStyleInTextProcessingArray(ref TextProcessingElement[] charBuffer, ref int writeIndex, uint[] styleDefinition)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x2D17E50", Offset = "0x2D16450", VA = "0x182D17E50")]
	private bool ReplaceOpeningStyleTag(ref TextBackingContainer sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x2D17CB0", Offset = "0x2D162B0", VA = "0x182D17CB0")]
	private bool ReplaceOpeningStyleTag(ref uint[] sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x2D17BF0", Offset = "0x2D161F0", VA = "0x182D17BF0")]
	private void ReplaceClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x2D15830", Offset = "0x2D13E30", VA = "0x182D15830")]
	private void InsertOpeningStyleTag(TMP_Style style, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x2D14D10", Offset = "0x2D13310", VA = "0x182D14D10")]
	private void InsertClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x2D11D40", Offset = "0x2D10340", VA = "0x182D11D40")]
	private int GetMarkupTagHashCode(uint[] styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x2D11E10", Offset = "0x2D10410", VA = "0x182D11E10")]
	private int GetMarkupTagHashCode(TextBackingContainer styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x2D12EB0", Offset = "0x2D114B0", VA = "0x182D12EB0")]
	private int GetStyleHashCode(ref uint[] text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x2D12DC0", Offset = "0x2D113C0", VA = "0x182D12DC0")]
	private int GetStyleHashCode(ref TextBackingContainer text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000532")]
	private void ResizeInternalArray<T>(ref T[] array)
	{
	}

	[Token(Token = "0x6000533")]
	private void ResizeInternalArray<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x2D09AE0", Offset = "0x2D080E0", VA = "0x182D09AE0")]
	private void AddFloatToInternalTextBackingArray(float value, int padding, int precision, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x2D09FC0", Offset = "0x2D085C0", VA = "0x182D09FC0")]
	private void AddIntegerToInternalTextBackingArray(double number, int padding, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x2D15DF0", Offset = "0x2D143F0", VA = "0x182D15DF0")]
	private string InternalTextBackingArrayToString()
	{
		return null;
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "114")]
	internal virtual int SetArraySizes(TextProcessingElement[] unicodeChars)
	{
		return default(int);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x2D12930", Offset = "0x2D10F30", VA = "0x182D12930")]
	public Vector2 GetPreferredValues()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x2D124F0", Offset = "0x2D10AF0", VA = "0x182D124F0")]
	public Vector2 GetPreferredValues(float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x2D12570", Offset = "0x2D10B70", VA = "0x182D12570")]
	public Vector2 GetPreferredValues(string text)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x2D12740", Offset = "0x2D10D40", VA = "0x182D12740")]
	public Vector2 GetPreferredValues(string text, float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x2D12990", Offset = "0x2D10F90", VA = "0x182D12990")]
	protected float GetPreferredWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x2D12B50", Offset = "0x2D11150", VA = "0x182D12B50")]
	private float GetPreferredWidth(Vector2 margin)
	{
		return default(float);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x2D12BF0", Offset = "0x2D111F0", VA = "0x182D12BF0")]
	private float GetPreferredWidth(Vector2 margin, TextWrappingModes wrapMode)
	{
		return default(float);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x2D122E0", Offset = "0x2D108E0", VA = "0x182D122E0")]
	protected float GetPreferredHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x2D12220", Offset = "0x2D10820", VA = "0x182D12220")]
	private float GetPreferredHeight(Vector2 margin)
	{
		return default(float);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x2D12D00", Offset = "0x2D11300", VA = "0x182D12D00")]
	public Vector2 GetRenderedValues()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x2D12CD0", Offset = "0x2D112D0", VA = "0x182D12CD0")]
	public Vector2 GetRenderedValues(bool onlyVisibleCharacters)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x2D12D60", Offset = "0x2D11360", VA = "0x182D12D60")]
	private float GetRenderedWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x2D12D30", Offset = "0x2D11330", VA = "0x182D12D30")]
	protected float GetRenderedWidth(bool onlyVisibleCharacters)
	{
		return default(float);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x2D12CA0", Offset = "0x2D112A0", VA = "0x182D12CA0")]
	private float GetRenderedHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x2D12C70", Offset = "0x2D11270", VA = "0x182D12C70")]
	protected float GetRenderedHeight(bool onlyVisibleCharacters)
	{
		return default(float);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x2D0A600", Offset = "0x2D08C00", VA = "0x182D0A600", Slot = "115")]
	protected virtual Vector2 CalculatePreferredValues(ref float fontSize, Vector2 marginSize, bool isTextAutoSizingEnabled, TextWrappingModes textWrapMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x8ED550", Offset = "0x8EBB50", VA = "0x1808ED550", Slot = "116")]
	protected virtual Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x2D118D0", Offset = "0x2D0FED0", VA = "0x182D118D0", Slot = "117")]
	internal virtual Rect GetCanvasSpaceClippingRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x2D133F0", Offset = "0x2D119F0", VA = "0x182D133F0")]
	protected Bounds GetTextBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x2D13090", Offset = "0x2D11690", VA = "0x182D13090")]
	protected Bounds GetTextBounds(bool onlyVisibleCharacters)
	{
		return default(Bounds);
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x2D0A150", Offset = "0x2D08750", VA = "0x182D0A150")]
	protected void AdjustLineOffset(int startIndex, int endIndex, float offset)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x2D18050", Offset = "0x2D16650", VA = "0x182D18050")]
	protected void ResizeLineExtents(int size)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "118")]
	public virtual TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "119")]
	public virtual void ComputeMarginSize()
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x2D14E70", Offset = "0x2D13470", VA = "0x182D14E70")]
	internal void InsertNewLine(int i, float baseScale, float currentElementScale, float currentEmScale, float boldSpacingAdjustment, float characterSpacingAdjustment, float width, float lineGap, ref bool isMaxVisibleDescenderSet, ref float maxVisibleDescender)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x2D1A9D0", Offset = "0x2D18FD0", VA = "0x182D1A9D0")]
	internal void SaveWordWrappingState(ref WordWrapState state, int index, int count)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x2D182B0", Offset = "0x2D168B0", VA = "0x182D182B0")]
	internal int RestoreWordWrappingState(ref WordWrapState state)
	{
		return default(int);
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x2D188E0", Offset = "0x2D16EE0", VA = "0x182D188E0", Slot = "120")]
	protected virtual void SaveGlyphVertexInfo(float padding, float style_padding, Color32 vertexColor)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x2D19DA0", Offset = "0x2D183A0", VA = "0x182D19DA0", Slot = "121")]
	protected virtual void SaveSpriteVertexInfo(Color32 vertexColor)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x2D105B0", Offset = "0x2D0EBB0", VA = "0x182D105B0", Slot = "122")]
	protected virtual void FillCharacterVertexBuffers(int i)
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x2D0F7B0", Offset = "0x2D0DDB0", VA = "0x182D0F7B0", Slot = "123")]
	protected virtual void FillCharacterVertexBuffers(int i, bool isVolumetric)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x2D10EE0", Offset = "0x2D0F4E0", VA = "0x182D10EE0", Slot = "124")]
	protected virtual void FillSpriteVertexBuffers(int i)
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x2D0E820", Offset = "0x2D0CE20", VA = "0x182D0E820", Slot = "125")]
	protected virtual void DrawUnderlineMesh(Vector3 start, Vector3 end, ref int index, float startScale, float endScale, float maxScale, float sdfScale, Color32 underlineColor)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x2D0E1E0", Offset = "0x2D0C7E0", VA = "0x182D0E1E0", Slot = "126")]
	protected virtual void DrawTextHighlight(Vector3 start, Vector3 end, ref int index, Color32 highlightColor)
	{
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x2D16070", Offset = "0x2D14670", VA = "0x182D16070")]
	protected void LoadDefaultSettings()
	{
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x2D12D90", Offset = "0x2D11390", VA = "0x182D12D90")]
	protected void GetSpecialCharacters(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x2D11960", Offset = "0x2D0FF60", VA = "0x182D11960")]
	protected void GetEllipsisSpecialCharacter(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x2D141E0", Offset = "0x2D127E0", VA = "0x182D141E0")]
	protected void GetUnderlineSpecialCharacter(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x2D17FF0", Offset = "0x2D165F0", VA = "0x182D17FF0")]
	protected void ReplaceTagWithCharacter(int[] chars, int insertionIndex, int tagLength, char c)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x2D11CA0", Offset = "0x2D102A0", VA = "0x182D11CA0")]
	protected TMP_FontAsset GetFontAssetForWeight(int fontWeight)
	{
		return null;
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x2D13710", Offset = "0x2D11D10", VA = "0x182D13710")]
	internal TMP_TextElement GetTextElement(uint unicode, TMP_FontAsset fontAsset, FontStyles fontStyle, FontWeight fontWeight, out bool isUsingAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "127")]
	protected virtual void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "128")]
	protected virtual void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "129")]
	public virtual void ClearMesh()
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "130")]
	public virtual void ClearMesh(bool uploadGeometry)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x2D12140", Offset = "0x2D10740", VA = "0x182D12140", Slot = "131")]
	public virtual string GetParsedText()
	{
		return null;
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x2D15EC0", Offset = "0x2D144C0", VA = "0x182D15EC0")]
	internal bool IsSelfOrLinkedAncestor(TMP_Text targetTextComponent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x2D17AC0", Offset = "0x2D160C0", VA = "0x182D17AC0")]
	internal void ReleaseLinkedTextComponent(TMP_Text targetTextComponent)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x2D0E140", Offset = "0x2D0C740", VA = "0x182D0E140")]
	protected void DoMissingGlyphCallback(int unicode, int stringIndex, TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x2D16550", Offset = "0x2D14B50", VA = "0x182D16550")]
	protected Vector2 PackUV(float x, float y, float scale)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x2D16510", Offset = "0x2D14B10", VA = "0x182D16510")]
	protected float PackUV(float x, float y)
	{
		return default(float);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "132")]
	internal virtual void InternalUpdate()
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x2D14BF0", Offset = "0x2D131F0", VA = "0x182D14BF0")]
	protected uint HexToInt(char hex)
	{
		return default(uint);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x2D15FB0", Offset = "0x2D145B0", VA = "0x182D15FB0")]
	private bool IsValidUTF16(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x2D13D80", Offset = "0x2D12380", VA = "0x182D13D80")]
	private uint GetUTF16(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x2D13E50", Offset = "0x2D12450", VA = "0x182D13E50")]
	private uint GetUTF16(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x2D16010", Offset = "0x2D14610", VA = "0x182D16010")]
	private bool IsValidUTF32(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x2D13F00", Offset = "0x2D12500", VA = "0x182D13F00")]
	private uint GetUTF32(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x2D14080", Offset = "0x2D12680", VA = "0x182D14080")]
	private uint GetUTF32(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x2D14580", Offset = "0x2D12B80", VA = "0x182D14580")]
	protected Color32 HexCharsToColor(char[] hexChars, int tagCount)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x2D142B0", Offset = "0x2D128B0", VA = "0x182D142B0")]
	protected Color32 HexCharsToColor(char[] hexChars, int startIndex, int length)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x2D11810", Offset = "0x2D0FE10", VA = "0x182D11810")]
	private int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters)
	{
		return default(int);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x2D0DF50", Offset = "0x2D0C550", VA = "0x182D0DF50")]
	protected float ConvertToFloat(char[] chars, int startIndex, int length)
	{
		return default(float);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x2D0DDD0", Offset = "0x2D0C3D0", VA = "0x182D0DDD0")]
	protected float ConvertToFloat(char[] chars, int startIndex, int length, out int lastIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x2D1BBE0", Offset = "0x2D1A1E0", VA = "0x182D1BBE0")]
	internal bool ValidateHtmlTag(TextProcessingElement[] chars, int startIndex, out int endIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x2D22B30", Offset = "0x2D21130", VA = "0x182D22B30")]
	protected TMP_Text()
	{
	}
}
