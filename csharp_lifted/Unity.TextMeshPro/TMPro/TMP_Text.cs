// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Text
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x67403B0", Offset = "0x673F3B0", VA = "0x67403B0")]
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
		[Address(RVA = "0x67403C0", Offset = "0x673F3C0", VA = "0x67403C0")]
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
			[Address(RVA = "0x6740500", Offset = "0x673F500", VA = "0x6740500")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016A")]
		public int Capacity
		{
			[Token(Token = "0x6000582")]
			[Address(RVA = "0x6740510", Offset = "0x673F510", VA = "0x6740510")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700016B")]
		public int Count
		{
			[Token(Token = "0x6000583")]
			[Address(RVA = "0x6740530", Offset = "0x673F530", VA = "0x6740530")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000584")]
			[Address(RVA = "0x6740540", Offset = "0x673F540", VA = "0x6740540")]
			set
			{
			}
		}

		[Token(Token = "0x1700016C")]
		public uint this[int index]
		{
			[Token(Token = "0x6000585")]
			[Address(RVA = "0x6740550", Offset = "0x673F550", VA = "0x6740550")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x6000586")]
			[Address(RVA = "0x6740580", Offset = "0x673F580", VA = "0x6740580")]
			set
			{
			}
		}

		[Token(Token = "0x6000587")]
		[Address(RVA = "0x6740670", Offset = "0x673F670", VA = "0x6740670")]
		public TextBackingContainer(int size)
		{
		}

		[Token(Token = "0x6000588")]
		[Address(RVA = "0x6740610", Offset = "0x673F610", VA = "0x6740610")]
		public void Resize(int size)
		{
		}
	}

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	[TextArea(5, 10)]
	protected string m_text;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0xE0")]
	private bool m_IsTextBackingStringDirty;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	protected ITextPreprocessor m_TextPreprocessor;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	protected bool m_isRightToLeft;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	protected TMP_FontAsset m_fontAsset;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x100")]
	protected TMP_FontAsset m_currentFontAsset;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x108")]
	protected bool m_isSDFShader;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	protected Material m_sharedMaterial;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x118")]
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
	[FieldOffset(Offset = "0x120")]
	protected int m_currentMaterialIndex;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	protected Material[] m_fontSharedMaterials;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x130")]
	[SerializeField]
	protected Material m_fontMaterial;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	protected Material[] m_fontMaterials;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x140")]
	protected bool m_isMaterialDirty;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x144")]
	[SerializeField]
	protected Color32 m_fontColor32;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	protected Color m_fontColor;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x68")]
	protected static Color32 s_colorWhite;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x158")]
	protected Color32 m_underlineColor;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x15C")]
	protected Color32 m_strikethroughColor;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x160")]
	internal HighlightState m_HighlightState;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x174")]
	internal bool m_ConvertToLinearSpace;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x175")]
	[SerializeField]
	protected bool m_enableVertexGradient;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x178")]
	[SerializeField]
	protected ColorMode m_colorMode;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x17C")]
	[SerializeField]
	protected VertexGradient m_fontColorGradient;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x1C0")]
	[SerializeField]
	protected TMP_ColorGradient m_fontColorGradientPreset;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x1C8")]
	[SerializeField]
	protected TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x1D0")]
	[SerializeField]
	protected bool m_tintAllSprites;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x1D1")]
	protected bool m_tintSprite;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x1D4")]
	protected Color32 m_spriteColor;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x1D8")]
	[SerializeField]
	protected TMP_StyleSheet m_StyleSheet;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x1E0")]
	internal TMP_Style m_TextStyle;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x1E8")]
	[SerializeField]
	protected int m_TextStyleHashCode;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x1EC")]
	[SerializeField]
	protected bool m_overrideHtmlColors;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x1F0")]
	[SerializeField]
	protected Color32 m_faceColor;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x1F4")]
	protected Color32 m_outlineColor;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x1F8")]
	protected float m_outlineWidth;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x1FC")]
	protected Vector3 m_currentEnvMapRotation;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x208")]
	protected bool m_hasEnvMapProperty;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x20C")]
	[SerializeField]
	protected float m_fontSize;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x210")]
	protected float m_currentFontSize;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x214")]
	[SerializeField]
	protected float m_fontSizeBase;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x218")]
	protected TMP_TextProcessingStack<float> m_sizeStack;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x238")]
	[SerializeField]
	protected FontWeight m_fontWeight;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x23C")]
	protected FontWeight m_FontWeightInternal;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x240")]
	protected TMP_TextProcessingStack<FontWeight> m_FontWeightStack;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x260")]
	[SerializeField]
	protected bool m_enableAutoSizing;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x264")]
	protected float m_maxFontSize;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x268")]
	protected float m_minFontSize;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x26C")]
	protected int m_AutoSizeIterationCount;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x270")]
	protected int m_AutoSizeMaxIterationCount;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x274")]
	protected bool m_IsAutoSizePointSizeSet;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x278")]
	[SerializeField]
	protected float m_fontSizeMin;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x27C")]
	[SerializeField]
	protected float m_fontSizeMax;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x280")]
	[SerializeField]
	protected FontStyles m_fontStyle;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x284")]
	protected FontStyles m_FontStyleInternal;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x288")]
	protected TMP_FontStyleStack m_fontStyleStack;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x292")]
	protected bool m_isUsingBold;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x294")]
	[SerializeField]
	protected HorizontalAlignmentOptions m_HorizontalAlignment;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x298")]
	[SerializeField]
	protected VerticalAlignmentOptions m_VerticalAlignment;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x29C")]
	[SerializeField]
	[FormerlySerializedAs("m_lineJustification")]
	protected TextAlignmentOptions m_textAlignment;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x2A0")]
	protected HorizontalAlignmentOptions m_lineJustification;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x2A8")]
	protected TMP_TextProcessingStack<HorizontalAlignmentOptions> m_lineJustificationStack;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x2C8")]
	protected Vector3[] m_textContainerLocalCorners;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x2D0")]
	[SerializeField]
	protected float m_characterSpacing;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x2D4")]
	protected float m_cSpacing;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x2D8")]
	protected float m_monoSpacing;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x2DC")]
	protected bool m_duoSpace;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x2E0")]
	[SerializeField]
	private protected float m_characterHorizontalScale;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x2E4")]
	[SerializeField]
	protected float m_wordSpacing;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x2E8")]
	[SerializeField]
	protected float m_lineSpacing;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x2EC")]
	protected float m_lineSpacingDelta;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x2F0")]
	protected float m_lineHeight;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x2F4")]
	protected bool m_IsDrivenLineSpacing;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x2F8")]
	[SerializeField]
	protected float m_lineSpacingMax;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x2FC")]
	[SerializeField]
	protected float m_paragraphSpacing;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x300")]
	[SerializeField]
	protected float m_charWidthMaxAdj;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x304")]
	protected float m_charWidthAdjDelta;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x308")]
	[SerializeField]
	[FormerlySerializedAs("m_enableWordWrapping")]
	protected TextWrappingModes m_TextWrappingMode;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x30C")]
	protected bool m_isCharacterWrappingEnabled;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x30D")]
	protected bool m_isNonBreakingSpace;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x30E")]
	protected bool m_isIgnoringAlignment;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x310")]
	[SerializeField]
	protected float m_wordWrappingRatios;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x314")]
	[SerializeField]
	protected TextOverflowModes m_overflowMode;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x318")]
	protected int m_firstOverflowCharacterIndex;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x320")]
	[SerializeField]
	protected TMP_Text m_linkedTextComponent;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x328")]
	[SerializeField]
	internal TMP_Text parentLinkedComponent;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x330")]
	protected bool m_isTextTruncated;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x331")]
	[SerializeField]
	protected bool m_enableKerning;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x334")]
	protected int m_LastBaseGlyphIndex;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x338")]
	[SerializeField]
	protected List<OTL_FeatureTag> m_ActiveFontFeatures;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x340")]
	[SerializeField]
	protected bool m_enableExtraPadding;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x341")]
	[SerializeField]
	protected bool checkPaddingRequired;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x342")]
	[SerializeField]
	protected bool m_isRichText;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x343")]
	[SerializeField]
	private bool m_EmojiFallbackSupport;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x344")]
	[SerializeField]
	protected bool m_parseCtrlCharacters;

	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x345")]
	protected bool m_isOverlay;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x346")]
	[SerializeField]
	protected bool m_isOrthographic;

	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x347")]
	[SerializeField]
	protected bool m_isCullingEnabled;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x348")]
	protected bool m_isMaskingEnabled;

	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x349")]
	protected bool isMaskUpdateRequired;

	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x34A")]
	protected bool m_ignoreCulling;

	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x34C")]
	[SerializeField]
	protected TextureMappingOptions m_horizontalMapping;

	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x350")]
	[SerializeField]
	protected TextureMappingOptions m_verticalMapping;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x354")]
	[SerializeField]
	protected float m_uvLineOffset;

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x358")]
	protected TextRenderFlags m_renderMode;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x35C")]
	[SerializeField]
	protected VertexSortingOrder m_geometrySortingOrder;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x360")]
	[SerializeField]
	protected bool m_IsTextObjectScaleStatic;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x361")]
	[SerializeField]
	protected bool m_VertexBufferAutoSizeReduction;

	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x364")]
	protected int m_firstVisibleCharacter;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x368")]
	protected int m_maxVisibleCharacters;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x36C")]
	protected int m_maxVisibleWords;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x370")]
	protected int m_maxVisibleLines;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x374")]
	[SerializeField]
	protected bool m_useMaxVisibleDescender;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x378")]
	[SerializeField]
	protected int m_pageToDisplay;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x37C")]
	protected bool m_isNewPage;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x380")]
	[SerializeField]
	protected Vector4 m_margin;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x390")]
	protected float m_marginLeft;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x394")]
	protected float m_marginRight;

	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x398")]
	protected float m_marginWidth;

	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x39C")]
	protected float m_marginHeight;

	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x3A0")]
	protected float m_width;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x3A8")]
	protected TMP_TextInfo m_textInfo;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x3B0")]
	protected bool m_havePropertiesChanged;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x3B1")]
	[SerializeField]
	protected bool m_isUsingLegacyAnimationComponent;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x3B8")]
	protected Transform m_transform;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x3C0")]
	protected RectTransform m_rectTransform;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x3C8")]
	protected Vector2 m_PreviousRectTransformSize;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x3D0")]
	protected Vector2 m_PreviousPivotPosition;

	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x3D9")]
	protected bool m_autoSizeTextContainer;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x3E0")]
	protected Mesh m_mesh;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x3E8")]
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
	[FieldOffset(Offset = "0x3F0")]
	[CompilerGenerated]
	private Action<TMP_TextInfo> m_OnPreRenderText;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x3F8")]
	protected TMP_SpriteAnimator m_spriteAnimator;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x400")]
	protected float m_flexibleHeight;

	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x404")]
	protected float m_flexibleWidth;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x408")]
	protected float m_minWidth;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x40C")]
	protected float m_minHeight;

	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x410")]
	protected float m_maxWidth;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x414")]
	protected float m_maxHeight;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x418")]
	protected LayoutElement m_LayoutElement;

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x420")]
	protected float m_preferredWidth;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x424")]
	protected float m_RenderedWidth;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x428")]
	protected bool m_isPreferredWidthDirty;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x42C")]
	protected float m_preferredHeight;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x430")]
	protected float m_RenderedHeight;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x434")]
	protected bool m_isPreferredHeightDirty;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x435")]
	protected bool m_isCalculatingPreferredValues;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x438")]
	protected int m_layoutPriority;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x43C")]
	protected bool m_isLayoutDirty;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x43D")]
	protected bool m_isAwake;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x43E")]
	internal bool m_isWaitingOnResourceLoad;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x440")]
	internal TextInputSources m_inputSource;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x444")]
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
	[FieldOffset(Offset = "0x448")]
	protected float tag_LineIndent;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x44C")]
	protected float tag_Indent;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x450")]
	protected TMP_TextProcessingStack<float> m_indentStack;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x470")]
	protected bool tag_NoParsing;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x471")]
	protected bool m_isTextLayoutPhase;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x474")]
	protected Quaternion m_FXRotation;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x484")]
	protected Vector3 m_FXScale;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x490")]
	internal TextProcessingElement[] m_TextProcessingArray;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x498")]
	internal int m_InternalTextProcessingArraySize;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x4A0")]
	private TMP_CharacterInfo[] m_internalCharacterInfo;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x4A8")]
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
	[FieldOffset(Offset = "0x4AC")]
	protected int m_characterCount;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x4B0")]
	protected int m_firstCharacterOfLine;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x4B4")]
	protected int m_firstVisibleCharacterOfLine;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x4B8")]
	protected int m_lastCharacterOfLine;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x4BC")]
	protected int m_lastVisibleCharacterOfLine;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x4C0")]
	protected int m_lineNumber;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x4C4")]
	protected int m_lineVisibleCharacterCount;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x4C8")]
	protected int m_lineVisibleSpaceCount;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x4CC")]
	protected int m_pageNumber;

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x4D0")]
	protected float m_PageAscender;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x4D4")]
	protected float m_maxTextAscender;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x4D8")]
	protected float m_maxCapHeight;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x4DC")]
	protected float m_ElementAscender;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x4E0")]
	protected float m_ElementDescender;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x4E4")]
	protected float m_maxLineAscender;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x4E8")]
	protected float m_maxLineDescender;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x4EC")]
	protected float m_startOfLineAscender;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x4F0")]
	protected float m_startOfLineDescender;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x4F4")]
	protected float m_lineOffset;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x4F8")]
	protected Extents m_meshExtents;

	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x508")]
	protected Color32 m_htmlColor;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x510")]
	protected TMP_TextProcessingStack<Color32> m_colorStack;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x530")]
	protected TMP_TextProcessingStack<Color32> m_underlineColorStack;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x550")]
	protected TMP_TextProcessingStack<Color32> m_strikethroughColorStack;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x570")]
	protected TMP_TextProcessingStack<HighlightState> m_HighlightStateStack;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x5A0")]
	protected TMP_ColorGradient m_colorGradientPreset;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x5A8")]
	protected TMP_TextProcessingStack<TMP_ColorGradient> m_colorGradientStack;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x5D0")]
	protected bool m_colorGradientPresetIsTinted;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x5D4")]
	protected float m_tabSpacing;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x5D8")]
	protected float m_spacing;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x5E0")]
	protected TMP_TextProcessingStack<int>[] m_TextStyleStacks;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x5E8")]
	protected int m_TextStyleStackDepth;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x5F0")]
	protected TMP_TextProcessingStack<int> m_ItalicAngleStack;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x610")]
	protected int m_ItalicAngle;

	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x618")]
	protected TMP_TextProcessingStack<int> m_actionStack;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x638")]
	protected float m_padding;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x63C")]
	protected float m_baselineOffset;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x640")]
	protected TMP_TextProcessingStack<float> m_baselineOffsetStack;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x660")]
	protected float m_xAdvance;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x664")]
	protected TMP_TextElementType m_textElementType;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x668")]
	protected TMP_TextElement m_cached_TextElement;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x670")]
	protected SpecialCharacter m_Ellipsis;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x690")]
	protected SpecialCharacter m_Underline;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x6B0")]
	protected TMP_SpriteAsset m_defaultSpriteAsset;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x6B8")]
	protected TMP_SpriteAsset m_currentSpriteAsset;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x6C0")]
	protected int m_spriteCount;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x6C4")]
	protected int m_spriteIndex;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x6C8")]
	protected int m_spriteAnimationID;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x1710")]
	private static ProfilerMarker k_ParseTextMarker;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x1718")]
	private static ProfilerMarker k_InsertNewLineMarker;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x6CC")]
	protected bool m_ignoreActiveState;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x6D0")]
	private TextBackingContainer m_TextBackingArray;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x6E0")]
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
		[Address(RVA = "0x6707EC0", Offset = "0x6706EC0", VA = "0x6707EC0", Slot = "65")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x6707FB0", Offset = "0x6706FB0", VA = "0x6707FB0", Slot = "66")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public ITextPreprocessor textPreprocessor
	{
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x6708060", Offset = "0x6707060", VA = "0x6708060")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x6708070", Offset = "0x6707070", VA = "0x6708070")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public bool isRightToLeftText
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x6708090", Offset = "0x6707090", VA = "0x6708090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x67080A0", Offset = "0x67070A0", VA = "0x67080A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	public TMP_FontAsset font
	{
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x67080F0", Offset = "0x67070F0", VA = "0x67080F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x6708100", Offset = "0x6707100", VA = "0x6708100")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	public virtual Material fontSharedMaterial
	{
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x67081C0", Offset = "0x67071C0", VA = "0x67081C0", Slot = "67")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x67081D0", Offset = "0x67071D0", VA = "0x67081D0", Slot = "68")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public virtual Material[] fontSharedMaterials
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x6708280", Offset = "0x6707280", VA = "0x6708280", Slot = "69")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x67082A0", Offset = "0x67072A0", VA = "0x67082A0", Slot = "70")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public Material fontMaterial
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x67082F0", Offset = "0x67072F0", VA = "0x67082F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x6708310", Offset = "0x6707310", VA = "0x6708310")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public virtual Material[] fontMaterials
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x6708410", Offset = "0x6707410", VA = "0x6708410", Slot = "71")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x6708430", Offset = "0x6707430", VA = "0x6708430", Slot = "72")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public override Color color
	{
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x6708480", Offset = "0x6707480", VA = "0x6708480", Slot = "22")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x67084A0", Offset = "0x67074A0", VA = "0x67084A0", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public float alpha
	{
		[Token(Token = "0x6000456")]
		[Address(RVA = "0x6708510", Offset = "0x6707510", VA = "0x6708510")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x6708520", Offset = "0x6707520", VA = "0x6708520")]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public bool enableVertexGradient
	{
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x6708560", Offset = "0x6707560", VA = "0x6708560")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000459")]
		[Address(RVA = "0x6708570", Offset = "0x6707570", VA = "0x6708570")]
		set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public VertexGradient colorGradient
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x67085A0", Offset = "0x67075A0", VA = "0x67085A0")]
		get
		{
			return default(VertexGradient);
		}
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x67085D0", Offset = "0x67075D0", VA = "0x67085D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public TMP_ColorGradient colorGradientPreset
	{
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x6708620", Offset = "0x6707620", VA = "0x6708620")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x6708630", Offset = "0x6707630", VA = "0x6708630")]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x6708670", Offset = "0x6707670", VA = "0x6708670")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045F")]
		[Address(RVA = "0x6708680", Offset = "0x6707680", VA = "0x6708680")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public bool tintAllSprites
	{
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x67086D0", Offset = "0x67076D0", VA = "0x67086D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x67086E0", Offset = "0x67076E0", VA = "0x67086E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public TMP_StyleSheet styleSheet
	{
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x6708710", Offset = "0x6707710", VA = "0x6708710")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x6708720", Offset = "0x6707720", VA = "0x6708720")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public TMP_Style textStyle
	{
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x6708770", Offset = "0x6707770", VA = "0x6708770")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x6708910", Offset = "0x6707910", VA = "0x6708910")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public bool overrideColorTags
	{
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x6708980", Offset = "0x6707980", VA = "0x6708980")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000467")]
		[Address(RVA = "0x6708990", Offset = "0x6707990", VA = "0x6708990")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	public Color32 faceColor
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x67089C0", Offset = "0x67079C0", VA = "0x67089C0")]
		get
		{
			return default(Color32);
		}
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x6708A80", Offset = "0x6707A80", VA = "0x6708A80")]
		set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	public Color32 outlineColor
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x6708B00", Offset = "0x6707B00", VA = "0x6708B00")]
		get
		{
			return default(Color32);
		}
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x6708BC0", Offset = "0x6707BC0", VA = "0x6708BC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public float outlineWidth
	{
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x6708C20", Offset = "0x6707C20", VA = "0x6708C20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x6708CE0", Offset = "0x6707CE0", VA = "0x6708CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public float fontSize
	{
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x6708D50", Offset = "0x6707D50", VA = "0x6708D50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x6708D60", Offset = "0x6707D60", VA = "0x6708D60")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public FontWeight fontWeight
	{
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x6708DC0", Offset = "0x6707DC0", VA = "0x6708DC0")]
		get
		{
			return default(FontWeight);
		}
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x6708DD0", Offset = "0x6707DD0", VA = "0x6708DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x6708E20", Offset = "0x6707E20", VA = "0x6708E20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000123")]
	public bool enableAutoSizing
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x6708FF0", Offset = "0x6707FF0", VA = "0x6708FF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x6709000", Offset = "0x6708000", VA = "0x6709000")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public float fontSizeMin
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x6709040", Offset = "0x6708040", VA = "0x6709040")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x6709050", Offset = "0x6708050", VA = "0x6709050")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public float fontSizeMax
	{
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x67090A0", Offset = "0x67080A0", VA = "0x67090A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x67090B0", Offset = "0x67080B0", VA = "0x67090B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000126")]
	public FontStyles fontStyle
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x6709100", Offset = "0x6708100", VA = "0x6709100")]
		get
		{
			return default(FontStyles);
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x6709110", Offset = "0x6708110", VA = "0x6709110")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public bool isUsingBold
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x6709160", Offset = "0x6708160", VA = "0x6709160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000128")]
	public HorizontalAlignmentOptions horizontalAlignment
	{
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x6709170", Offset = "0x6708170", VA = "0x6709170")]
		get
		{
			return default(HorizontalAlignmentOptions);
		}
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x6709180", Offset = "0x6708180", VA = "0x6709180")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public VerticalAlignmentOptions verticalAlignment
	{
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x67091B0", Offset = "0x67081B0", VA = "0x67091B0")]
		get
		{
			return default(VerticalAlignmentOptions);
		}
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x67091C0", Offset = "0x67081C0", VA = "0x67091C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x67091F0", Offset = "0x67081F0", VA = "0x67091F0")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x6709200", Offset = "0x6708200", VA = "0x6709200")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public float characterSpacing
	{
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x6709250", Offset = "0x6708250", VA = "0x6709250")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000483")]
		[Address(RVA = "0x6709260", Offset = "0x6708260", VA = "0x6709260")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public float characterHorizontalScale
	{
		[Token(Token = "0x6000484")]
		[Address(RVA = "0x67092B0", Offset = "0x67082B0", VA = "0x67092B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000485")]
		[Address(RVA = "0x67092C0", Offset = "0x67082C0", VA = "0x67092C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	public float wordSpacing
	{
		[Token(Token = "0x6000486")]
		[Address(RVA = "0x6709310", Offset = "0x6708310", VA = "0x6709310")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000487")]
		[Address(RVA = "0x6709320", Offset = "0x6708320", VA = "0x6709320")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public float lineSpacing
	{
		[Token(Token = "0x6000488")]
		[Address(RVA = "0x6709370", Offset = "0x6708370", VA = "0x6709370")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000489")]
		[Address(RVA = "0x6709380", Offset = "0x6708380", VA = "0x6709380")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public float lineSpacingAdjustment
	{
		[Token(Token = "0x600048A")]
		[Address(RVA = "0x67093D0", Offset = "0x67083D0", VA = "0x67093D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600048B")]
		[Address(RVA = "0x67093E0", Offset = "0x67083E0", VA = "0x67093E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public float paragraphSpacing
	{
		[Token(Token = "0x600048C")]
		[Address(RVA = "0x6709430", Offset = "0x6708430", VA = "0x6709430")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600048D")]
		[Address(RVA = "0x6709440", Offset = "0x6708440", VA = "0x6709440")]
		set
		{
		}
	}

	[Token(Token = "0x17000131")]
	public float characterWidthAdjustment
	{
		[Token(Token = "0x600048E")]
		[Address(RVA = "0x6709490", Offset = "0x6708490", VA = "0x6709490")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600048F")]
		[Address(RVA = "0x67094A0", Offset = "0x67084A0", VA = "0x67094A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public TextWrappingModes textWrappingMode
	{
		[Token(Token = "0x6000490")]
		[Address(RVA = "0x67094F0", Offset = "0x67084F0", VA = "0x67094F0")]
		get
		{
			return default(TextWrappingModes);
		}
		[Token(Token = "0x6000491")]
		[Address(RVA = "0x6709500", Offset = "0x6708500", VA = "0x6709500")]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	[Obsolete("The enabledWordWrapping property is now obsolete. Please use the textWrappingMode property instead.")]
	public bool enableWordWrapping
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x6709550", Offset = "0x6708550", VA = "0x6709550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000493")]
		[Address(RVA = "0x6709560", Offset = "0x6708560", VA = "0x6709560")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public float wordWrappingRatios
	{
		[Token(Token = "0x6000494")]
		[Address(RVA = "0x67095B0", Offset = "0x67085B0", VA = "0x67095B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x67095C0", Offset = "0x67085C0", VA = "0x67095C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public TextOverflowModes overflowMode
	{
		[Token(Token = "0x6000496")]
		[Address(RVA = "0x6709610", Offset = "0x6708610", VA = "0x6709610")]
		get
		{
			return default(TextOverflowModes);
		}
		[Token(Token = "0x6000497")]
		[Address(RVA = "0x6709620", Offset = "0x6708620", VA = "0x6709620")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public bool isTextOverflowing
	{
		[Token(Token = "0x6000498")]
		[Address(RVA = "0x6709670", Offset = "0x6708670", VA = "0x6709670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public int firstOverflowCharacterIndex
	{
		[Token(Token = "0x6000499")]
		[Address(RVA = "0x6709680", Offset = "0x6708680", VA = "0x6709680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000138")]
	public TMP_Text linkedTextComponent
	{
		[Token(Token = "0x600049A")]
		[Address(RVA = "0x6709690", Offset = "0x6708690", VA = "0x6709690")]
		get
		{
			return null;
		}
		[Token(Token = "0x600049B")]
		[Address(RVA = "0x67096A0", Offset = "0x67086A0", VA = "0x67096A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public bool isTextTruncated
	{
		[Token(Token = "0x600049C")]
		[Address(RVA = "0x67099B0", Offset = "0x67089B0", VA = "0x67099B0")]
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
		[Address(RVA = "0x67099C0", Offset = "0x67089C0", VA = "0x67099C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600049E")]
		[Address(RVA = "0x6709A10", Offset = "0x6708A10", VA = "0x6709A10")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public List<OTL_FeatureTag> fontFeatures
	{
		[Token(Token = "0x600049F")]
		[Address(RVA = "0x6709B50", Offset = "0x6708B50", VA = "0x6709B50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x6709B60", Offset = "0x6708B60", VA = "0x6709B60")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public bool extraPadding
	{
		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x6709BB0", Offset = "0x6708BB0", VA = "0x6709BB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x6709BC0", Offset = "0x6708BC0", VA = "0x6709BC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public bool richText
	{
		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x6709C10", Offset = "0x6708C10", VA = "0x6709C10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x6709C20", Offset = "0x6708C20", VA = "0x6709C20")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public bool emojiFallbackSupport
	{
		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x6709C70", Offset = "0x6708C70", VA = "0x6709C70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004A6")]
		[Address(RVA = "0x6709C80", Offset = "0x6708C80", VA = "0x6709C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public bool parseCtrlCharacters
	{
		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x6709CD0", Offset = "0x6708CD0", VA = "0x6709CD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x6709CE0", Offset = "0x6708CE0", VA = "0x6709CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public bool isOverlay
	{
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x6709D30", Offset = "0x6708D30", VA = "0x6709D30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AA")]
		[Address(RVA = "0x6709D40", Offset = "0x6708D40", VA = "0x6709D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public bool isOrthographic
	{
		[Token(Token = "0x60004AB")]
		[Address(RVA = "0x6709D90", Offset = "0x6708D90", VA = "0x6709D90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AC")]
		[Address(RVA = "0x6709DA0", Offset = "0x6708DA0", VA = "0x6709DA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public bool enableCulling
	{
		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x6709DD0", Offset = "0x6708DD0", VA = "0x6709DD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AE")]
		[Address(RVA = "0x6709DE0", Offset = "0x6708DE0", VA = "0x6709DE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public bool ignoreVisibility
	{
		[Token(Token = "0x60004AF")]
		[Address(RVA = "0x6709E10", Offset = "0x6708E10", VA = "0x6709E10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x6709E20", Offset = "0x6708E20", VA = "0x6709E20")]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public TextureMappingOptions horizontalMapping
	{
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x6709E40", Offset = "0x6708E40", VA = "0x6709E40")]
		get
		{
			return default(TextureMappingOptions);
		}
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x6709E50", Offset = "0x6708E50", VA = "0x6709E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public TextureMappingOptions verticalMapping
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x6709E80", Offset = "0x6708E80", VA = "0x6709E80")]
		get
		{
			return default(TextureMappingOptions);
		}
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x6709E90", Offset = "0x6708E90", VA = "0x6709E90")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public float mappingUvLineOffset
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x6709EC0", Offset = "0x6708EC0", VA = "0x6709EC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x6709ED0", Offset = "0x6708ED0", VA = "0x6709ED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public TextRenderFlags renderMode
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x6709F10", Offset = "0x6708F10", VA = "0x6709F10")]
		get
		{
			return default(TextRenderFlags);
		}
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x6709F20", Offset = "0x6708F20", VA = "0x6709F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public VertexSortingOrder geometrySortingOrder
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x6709F40", Offset = "0x6708F40", VA = "0x6709F40")]
		get
		{
			return default(VertexSortingOrder);
		}
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x6709F50", Offset = "0x6708F50", VA = "0x6709F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public bool isTextObjectScaleStatic
	{
		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x6709F70", Offset = "0x6708F70", VA = "0x6709F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x6709F80", Offset = "0x6708F80", VA = "0x6709F80")]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public bool vertexBufferAutoSizeReduction
	{
		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x670A010", Offset = "0x6709010", VA = "0x670A010")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x670A020", Offset = "0x6709020", VA = "0x670A020")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public int firstVisibleCharacter
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x670A050", Offset = "0x6709050", VA = "0x670A050")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x670A060", Offset = "0x6709060", VA = "0x670A060")]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public int maxVisibleCharacters
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x670A090", Offset = "0x6709090", VA = "0x670A090")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x670A0A0", Offset = "0x67090A0", VA = "0x670A0A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014D")]
	public int maxVisibleWords
	{
		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x670A0D0", Offset = "0x67090D0", VA = "0x670A0D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x670A0E0", Offset = "0x67090E0", VA = "0x670A0E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014E")]
	public int maxVisibleLines
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x670A110", Offset = "0x6709110", VA = "0x670A110")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x670A120", Offset = "0x6709120", VA = "0x670A120")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public bool useMaxVisibleDescender
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x670A150", Offset = "0x6709150", VA = "0x670A150")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x670A160", Offset = "0x6709160", VA = "0x670A160")]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public int pageToDisplay
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x670A190", Offset = "0x6709190", VA = "0x670A190")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x670A1A0", Offset = "0x67091A0", VA = "0x670A1A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public virtual Vector4 margin
	{
		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x670A1D0", Offset = "0x67091D0", VA = "0x670A1D0", Slot = "73")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x670A1F0", Offset = "0x67091F0", VA = "0x670A1F0", Slot = "74")]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public TMP_TextInfo textInfo
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x670A270", Offset = "0x6709270", VA = "0x670A270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000153")]
	public bool havePropertiesChanged
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x670A300", Offset = "0x6709300", VA = "0x670A300")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x670A310", Offset = "0x6709310", VA = "0x670A310")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public bool isUsingLegacyAnimationComponent
	{
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x670A340", Offset = "0x6709340", VA = "0x670A340")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x670A350", Offset = "0x6709350", VA = "0x670A350")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public new Transform transform
	{
		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x670A360", Offset = "0x6709360", VA = "0x670A360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000156")]
	public new RectTransform rectTransform
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x670A400", Offset = "0x6709400", VA = "0x670A400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000157")]
	public virtual bool autoSizeTextContainer
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x670A4A0", Offset = "0x67094A0", VA = "0x670A4A0", Slot = "75")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x670A4B0", Offset = "0x67094B0", VA = "0x670A4B0", Slot = "76")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public virtual Mesh mesh
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x670A4C0", Offset = "0x67094C0", VA = "0x670A4C0", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000159")]
	public bool isVolumetricText
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x670A4D0", Offset = "0x67094D0", VA = "0x670A4D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x670A4E0", Offset = "0x67094E0", VA = "0x670A4E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public Bounds bounds
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x670A540", Offset = "0x6709540", VA = "0x670A540")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700015B")]
	public Bounds textBounds
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x670A5F0", Offset = "0x67095F0", VA = "0x670A5F0")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700015C")]
	protected TMP_SpriteAnimator spriteAnimator
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x670AF20", Offset = "0x6709F20", VA = "0x670AF20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015D")]
	public float flexibleHeight
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x670B030", Offset = "0x670A030", VA = "0x670B030", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700015E")]
	public float flexibleWidth
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x670B040", Offset = "0x670A040", VA = "0x670B040", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700015F")]
	public float minWidth
	{
		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x670B050", Offset = "0x670A050", VA = "0x670B050", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000160")]
	public float minHeight
	{
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x670B060", Offset = "0x670A060", VA = "0x670B060", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000161")]
	public float maxWidth
	{
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x670B070", Offset = "0x670A070", VA = "0x670B070")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000162")]
	public float maxHeight
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x670B080", Offset = "0x670A080", VA = "0x670B080")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000163")]
	protected LayoutElement layoutElement
	{
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x670B090", Offset = "0x670A090", VA = "0x670B090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x670B130", Offset = "0x670A130", VA = "0x670B130", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000165")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x670B2D0", Offset = "0x670A2D0", VA = "0x670B2D0", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000166")]
	public virtual float renderedWidth
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x670B4C0", Offset = "0x670A4C0", VA = "0x670B4C0", Slot = "86")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000167")]
	public virtual float renderedHeight
	{
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x670B500", Offset = "0x670A500", VA = "0x670B500", Slot = "87")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000168")]
	public int layoutPriority
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x670B540", Offset = "0x670A540", VA = "0x670B540", Slot = "88")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Func<int, string, TMP_FontAsset> OnFontAssetRequest
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x670A840", Offset = "0x6709840", VA = "0x670A840")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x670A930", Offset = "0x6709930", VA = "0x670A930")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event Func<int, string, TMP_SpriteAsset> OnSpriteAssetRequest
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x670AA20", Offset = "0x6709A20", VA = "0x670AA20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x670AB10", Offset = "0x6709B10", VA = "0x670AB10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public static event MissingCharacterEventCallback OnMissingCharacter
	{
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x670AC00", Offset = "0x6709C00", VA = "0x670AC00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x670ACE0", Offset = "0x6709CE0", VA = "0x670ACE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public virtual event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x670ADC0", Offset = "0x6709DC0", VA = "0x670ADC0", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x670AE70", Offset = "0x6709E70", VA = "0x670AE70", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x670B550", Offset = "0x670A550", VA = "0x670B550", Slot = "89")]
	protected virtual void LoadFontAsset()
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x670B560", Offset = "0x670A560", VA = "0x670B560", Slot = "90")]
	protected virtual void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x670B570", Offset = "0x670A570", VA = "0x670B570", Slot = "91")]
	protected virtual Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x670B580", Offset = "0x670A580", VA = "0x670B580", Slot = "92")]
	protected virtual void SetFontBaseMaterial(Material mat)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x670B590", Offset = "0x670A590", VA = "0x670B590", Slot = "93")]
	protected virtual Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x670B5A0", Offset = "0x670A5A0", VA = "0x670B5A0", Slot = "94")]
	protected virtual void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x670B5B0", Offset = "0x670A5B0", VA = "0x670B5B0", Slot = "95")]
	protected virtual Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x670B5C0", Offset = "0x670A5C0", VA = "0x670B5C0", Slot = "96")]
	protected virtual Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x670B670", Offset = "0x670A670", VA = "0x670B670")]
	protected void SetVertexColorGradient(TMP_ColorGradient gradient)
	{
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x670B720", Offset = "0x670A720", VA = "0x670B720")]
	protected void SetTextSortingOrder(VertexSortingOrder order)
	{
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x670B730", Offset = "0x670A730", VA = "0x670B730")]
	protected void SetTextSortingOrder(int[] order)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x670B740", Offset = "0x670A740", VA = "0x670B740", Slot = "97")]
	protected virtual void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x670B750", Offset = "0x670A750", VA = "0x670B750", Slot = "98")]
	protected virtual void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x670B760", Offset = "0x670A760", VA = "0x670B760", Slot = "99")]
	protected virtual void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x670B770", Offset = "0x670A770", VA = "0x670B770", Slot = "100")]
	protected virtual void SetShaderDepth()
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x670B780", Offset = "0x670A780", VA = "0x670B780", Slot = "101")]
	protected virtual void SetCulling()
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x670B790", Offset = "0x670A790", VA = "0x670B790", Slot = "102")]
	internal virtual void UpdateCulling()
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x670B7A0", Offset = "0x670A7A0", VA = "0x670B7A0", Slot = "103")]
	protected virtual float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x670B8C0", Offset = "0x670A8C0", VA = "0x670B8C0", Slot = "104")]
	protected virtual float GetPaddingForMaterial(Material mat)
	{
		return default(float);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x670B9B0", Offset = "0x670A9B0", VA = "0x670B9B0", Slot = "105")]
	protected virtual Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x670B9C0", Offset = "0x670A9C0", VA = "0x670B9C0", Slot = "106")]
	public virtual void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x670B9D0", Offset = "0x670A9D0", VA = "0x670B9D0", Slot = "107")]
	public virtual void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x670B9E0", Offset = "0x670A9E0", VA = "0x670B9E0", Slot = "108")]
	public virtual void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x670B9F0", Offset = "0x670A9F0", VA = "0x670B9F0", Slot = "109")]
	public virtual void UpdateVertexData()
	{
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x670BA00", Offset = "0x670AA00", VA = "0x670BA00", Slot = "110")]
	public virtual void SetVertices(Vector3[] vertices)
	{
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x670BA10", Offset = "0x670AA10", VA = "0x670BA10", Slot = "111")]
	public virtual void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x670BA20", Offset = "0x670AA20", VA = "0x670BA20", Slot = "47")]
	public override void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x670BA80", Offset = "0x670AA80", VA = "0x670BA80", Slot = "49")]
	public override void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x670BAD0", Offset = "0x670AAD0", VA = "0x670BAD0", Slot = "112")]
	protected virtual void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x670BAE0", Offset = "0x670AAE0", VA = "0x670BAE0", Slot = "113")]
	protected virtual void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x670BAF0", Offset = "0x670AAF0", VA = "0x670BAF0")]
	protected void ParseInputText()
	{
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x670BC00", Offset = "0x670AC00", VA = "0x670BC00")]
	private void PopulateTextBackingArray(string sourceText)
	{
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x670CB10", Offset = "0x670BB10", VA = "0x670CB10")]
	private void PopulateTextBackingArray(string sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x670CBF0", Offset = "0x670BBF0", VA = "0x670CBF0")]
	private void PopulateTextBackingArray(StringBuilder sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x670CCF0", Offset = "0x670BCF0", VA = "0x670CCF0")]
	private void PopulateTextBackingArray(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x670BC20", Offset = "0x670AC20", VA = "0x670BC20")]
	private void PopulateTextProcessingArray()
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x670D750", Offset = "0x670C750", VA = "0x670D750")]
	private void SetTextInternal(string sourceText)
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x670D7A0", Offset = "0x670C7A0", VA = "0x670D7A0")]
	public void SetText(string sourceText)
	{
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x670D830", Offset = "0x670C830", VA = "0x670D830")]
	[Obsolete("Use the SetText(string) function instead.")]
	public void SetText(string sourceText, bool syncTextInputBox = true)
	{
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x670D8C0", Offset = "0x670C8C0", VA = "0x670D8C0")]
	public void SetText(string sourceText, float arg0)
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x670DB70", Offset = "0x670CB70", VA = "0x670DB70")]
	public void SetText(string sourceText, float arg0, float arg1)
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x670DB90", Offset = "0x670CB90", VA = "0x670DB90")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2)
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x670DBB0", Offset = "0x670CBB0", VA = "0x670DBB0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3)
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x670DBD0", Offset = "0x670CBD0", VA = "0x670DBD0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x670DBE0", Offset = "0x670CBE0", VA = "0x670DBE0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x670DBF0", Offset = "0x670CBF0", VA = "0x670DBF0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)
	{
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x670D8E0", Offset = "0x670C8E0", VA = "0x670D8E0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7)
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x670DF50", Offset = "0x670CF50", VA = "0x670DF50")]
	public void SetText(StringBuilder sourceText)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x670DFD0", Offset = "0x670CFD0", VA = "0x670DFD0")]
	private void SetText(StringBuilder sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x670E030", Offset = "0x670D030", VA = "0x670E030")]
	public void SetText(char[] sourceText)
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x670E100", Offset = "0x670D100", VA = "0x670E100")]
	public void SetText(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x670E160", Offset = "0x670D160", VA = "0x670E160")]
	public void SetCharArray(char[] sourceText)
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x670E0A0", Offset = "0x670D0A0", VA = "0x670E0A0")]
	public void SetCharArray(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x67087F0", Offset = "0x67077F0", VA = "0x67087F0")]
	private TMP_Style GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x670D3E0", Offset = "0x670C3E0", VA = "0x670D3E0")]
	private void InsertOpeningTextStyle(TMP_Style style, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x670D570", Offset = "0x670C570", VA = "0x670D570")]
	private void InsertClosingTextStyle(TMP_Style style, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x670E1D0", Offset = "0x670D1D0", VA = "0x670E1D0")]
	private void InsertTextStyleInTextProcessingArray(ref TextProcessingElement[] charBuffer, ref int writeIndex, uint[] styleDefinition)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x670D490", Offset = "0x670C490", VA = "0x670D490")]
	private bool ReplaceOpeningStyleTag(ref TextBackingContainer sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x670E950", Offset = "0x670D950", VA = "0x670E950")]
	private bool ReplaceOpeningStyleTag(ref uint[] sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x670D620", Offset = "0x670C620", VA = "0x670D620")]
	private void ReplaceClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x670CDF0", Offset = "0x670BDF0", VA = "0x670CDF0")]
	private void InsertOpeningStyleTag(TMP_Style style, ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x670D6C0", Offset = "0x670C6C0", VA = "0x670D6C0")]
	private void InsertClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x670E860", Offset = "0x670D860", VA = "0x670E860")]
	private int GetMarkupTagHashCode(uint[] styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x670D310", Offset = "0x670C310", VA = "0x670D310")]
	private int GetMarkupTagHashCode(TextBackingContainer styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x670EB20", Offset = "0x670DB20", VA = "0x670EB20")]
	private int GetStyleHashCode(ref uint[] text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x670EA30", Offset = "0x670DA30", VA = "0x670EA30")]
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
	[Address(RVA = "0x670DC00", Offset = "0x670CC00", VA = "0x670DC00")]
	private void AddFloatToInternalTextBackingArray(float value, int padding, int precision, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x670EC00", Offset = "0x670DC00", VA = "0x670EC00")]
	private void AddIntegerToInternalTextBackingArray(double number, int padding, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x6707EE0", Offset = "0x6706EE0", VA = "0x6707EE0")]
	private string InternalTextBackingArrayToString()
	{
		return null;
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x670ED00", Offset = "0x670DD00", VA = "0x670ED00", Slot = "114")]
	internal virtual int SetArraySizes(TextProcessingElement[] unicodeChars)
	{
		return default(int);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x670ED10", Offset = "0x670DD10", VA = "0x670ED10")]
	public Vector2 GetPreferredValues()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x670ED60", Offset = "0x670DD60", VA = "0x670ED60")]
	public Vector2 GetPreferredValues(float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x670EFF0", Offset = "0x670DFF0", VA = "0x670EFF0")]
	public Vector2 GetPreferredValues(string text)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x670F1C0", Offset = "0x670E1C0", VA = "0x670F1C0")]
	public Vector2 GetPreferredValues(string text, float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x670B150", Offset = "0x670A150", VA = "0x670B150")]
	protected float GetPreferredWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x670EEB0", Offset = "0x670DEB0", VA = "0x670EEB0")]
	private float GetPreferredWidth(Vector2 margin)
	{
		return default(float);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x670F350", Offset = "0x670E350", VA = "0x670F350")]
	private float GetPreferredWidth(Vector2 margin, TextWrappingModes wrapMode)
	{
		return default(float);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x670B2F0", Offset = "0x670A2F0", VA = "0x670B2F0")]
	protected float GetPreferredHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x670EF30", Offset = "0x670DF30", VA = "0x670EF30")]
	private float GetPreferredHeight(Vector2 margin)
	{
		return default(float);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x670F3C0", Offset = "0x670E3C0", VA = "0x670F3C0")]
	public Vector2 GetRenderedValues()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x670F3E0", Offset = "0x670E3E0", VA = "0x670F3E0")]
	public Vector2 GetRenderedValues(bool onlyVisibleCharacters)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x670B4E0", Offset = "0x670A4E0", VA = "0x670B4E0")]
	private float GetRenderedWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x670F630", Offset = "0x670E630", VA = "0x670F630")]
	protected float GetRenderedWidth(bool onlyVisibleCharacters)
	{
		return default(float);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x670B520", Offset = "0x670A520", VA = "0x670B520")]
	private float GetRenderedHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x670F650", Offset = "0x670E650", VA = "0x670F650")]
	protected float GetRenderedHeight(bool onlyVisibleCharacters)
	{
		return default(float);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x670F670", Offset = "0x670E670", VA = "0x670F670", Slot = "115")]
	protected virtual Vector2 CalculatePreferredValues(ref float fontSize, Vector2 marginSize, bool isTextAutoSizingEnabled, TextWrappingModes textWrapMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x671A100", Offset = "0x6719100", VA = "0x671A100", Slot = "116")]
	protected virtual Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x671A120", Offset = "0x6719120", VA = "0x671A120", Slot = "117")]
	internal virtual Rect GetCanvasSpaceClippingRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x670A640", Offset = "0x6709640", VA = "0x670A640")]
	protected Bounds GetTextBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x670F400", Offset = "0x670E400", VA = "0x670F400")]
	protected Bounds GetTextBounds(bool onlyVisibleCharacters)
	{
		return default(Bounds);
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x671A1D0", Offset = "0x67191D0", VA = "0x671A1D0")]
	protected void AdjustLineOffset(int startIndex, int endIndex, float offset)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x671A450", Offset = "0x6719450", VA = "0x671A450")]
	protected void ResizeLineExtents(int size)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x671A680", Offset = "0x6719680", VA = "0x671A680", Slot = "118")]
	public virtual TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x671A690", Offset = "0x6719690", VA = "0x671A690", Slot = "119")]
	public virtual void ComputeMarginSize()
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x671A6A0", Offset = "0x67196A0", VA = "0x671A6A0")]
	internal void InsertNewLine(int i, float baseScale, float currentElementScale, float currentEmScale, float boldSpacingAdjustment, float characterSpacingAdjustment, float width, float lineGap, ref bool isMaxVisibleDescenderSet, ref float maxVisibleDescender)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x6719B20", Offset = "0x6718B20", VA = "0x6719B20")]
	internal void SaveWordWrappingState(ref WordWrapState state, int index, int count)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x6719540", Offset = "0x6718540", VA = "0x6719540")]
	internal int RestoreWordWrappingState(ref WordWrapState state)
	{
		return default(int);
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x671ACE0", Offset = "0x6719CE0", VA = "0x671ACE0", Slot = "120")]
	protected virtual void SaveGlyphVertexInfo(float padding, float style_padding, Color32 vertexColor)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x671BD60", Offset = "0x671AD60", VA = "0x671BD60", Slot = "121")]
	protected virtual void SaveSpriteVertexInfo(Color32 vertexColor)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x671C690", Offset = "0x671B690", VA = "0x671C690", Slot = "122")]
	protected virtual void FillCharacterVertexBuffers(int i)
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x671CF70", Offset = "0x671BF70", VA = "0x671CF70", Slot = "123")]
	protected virtual void FillCharacterVertexBuffers(int i, bool isVolumetric)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x671DB80", Offset = "0x671CB80", VA = "0x671DB80", Slot = "124")]
	protected virtual void FillSpriteVertexBuffers(int i)
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x671E460", Offset = "0x671D460", VA = "0x671E460", Slot = "125")]
	protected virtual void DrawUnderlineMesh(Vector3 start, Vector3 end, ref int index, float startScale, float endScale, float maxScale, float sdfScale, Color32 underlineColor)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x671F4D0", Offset = "0x671E4D0", VA = "0x671F4D0", Slot = "126")]
	protected virtual void DrawTextHighlight(Vector3 start, Vector3 end, ref int index, Color32 highlightColor)
	{
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x671FB30", Offset = "0x671EB30", VA = "0x671FB30")]
	protected void LoadDefaultSettings()
	{
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x671FF30", Offset = "0x671EF30", VA = "0x671FF30")]
	protected void GetSpecialCharacters(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x671FF60", Offset = "0x671EF60", VA = "0x671FF60")]
	protected void GetEllipsisSpecialCharacter(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x671F410", Offset = "0x671E410", VA = "0x671F410")]
	protected void GetUnderlineSpecialCharacter(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x6720290", Offset = "0x671F290", VA = "0x6720290")]
	protected void ReplaceTagWithCharacter(int[] chars, int insertionIndex, int tagLength, char c)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x6720400", Offset = "0x671F400", VA = "0x6720400")]
	protected TMP_FontAsset GetFontAssetForWeight(int fontWeight)
	{
		return null;
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x67204B0", Offset = "0x671F4B0", VA = "0x67204B0")]
	internal TMP_TextElement GetTextElement(uint unicode, TMP_FontAsset fontAsset, FontStyles fontStyle, FontWeight fontWeight, out bool isUsingAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x6720BE0", Offset = "0x671FBE0", VA = "0x6720BE0", Slot = "127")]
	protected virtual void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x6720BF0", Offset = "0x671FBF0", VA = "0x6720BF0", Slot = "128")]
	protected virtual void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x6720C00", Offset = "0x671FC00", VA = "0x6720C00", Slot = "129")]
	public virtual void ClearMesh()
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x6720C10", Offset = "0x671FC10", VA = "0x6720C10", Slot = "130")]
	public virtual void ClearMesh(bool uploadGeometry)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x6720C20", Offset = "0x671FC20", VA = "0x6720C20", Slot = "131")]
	public virtual string GetParsedText()
	{
		return null;
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x67098E0", Offset = "0x67088E0", VA = "0x67098E0")]
	internal bool IsSelfOrLinkedAncestor(TMP_Text targetTextComponent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x67097B0", Offset = "0x67087B0", VA = "0x67097B0")]
	internal void ReleaseLinkedTextComponent(TMP_Text targetTextComponent)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x6720D20", Offset = "0x671FD20", VA = "0x6720D20")]
	protected void DoMissingGlyphCallback(int unicode, int stringIndex, TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x6720DE0", Offset = "0x671FDE0", VA = "0x6720DE0")]
	protected Vector2 PackUV(float x, float y, float scale)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x6720E10", Offset = "0x671FE10", VA = "0x6720E10")]
	protected float PackUV(float x, float y)
	{
		return default(float);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x6720E50", Offset = "0x671FE50", VA = "0x6720E50", Slot = "132")]
	internal virtual void InternalUpdate()
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x6720E60", Offset = "0x671FE60", VA = "0x6720E60")]
	protected uint HexToInt(char hex)
	{
		return default(uint);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x670CE90", Offset = "0x670BE90", VA = "0x670CE90")]
	private bool IsValidUTF16(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x670E640", Offset = "0x670D640", VA = "0x670E640")]
	private uint GetUTF16(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x670CF70", Offset = "0x670BF70", VA = "0x670CF70")]
	private uint GetUTF16(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x670D010", Offset = "0x670C010", VA = "0x670D010")]
	private bool IsValidUTF32(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x670E6F0", Offset = "0x670D6F0", VA = "0x670E6F0")]
	private uint GetUTF32(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x670D1E0", Offset = "0x670C1E0", VA = "0x670D1E0")]
	private uint GetUTF32(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x6720E80", Offset = "0x671FE80", VA = "0x6720E80")]
	protected Color32 HexCharsToColor(char[] hexChars, int tagCount)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x6721390", Offset = "0x6720390", VA = "0x6721390")]
	protected Color32 HexCharsToColor(char[] hexChars, int startIndex, int length)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x6721630", Offset = "0x6720630", VA = "0x6721630")]
	private int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters)
	{
		return default(int);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x6721830", Offset = "0x6720830", VA = "0x6721830")]
	protected float ConvertToFloat(char[] chars, int startIndex, int length)
	{
		return default(float);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x67216C0", Offset = "0x67206C0", VA = "0x67216C0")]
	protected float ConvertToFloat(char[] chars, int startIndex, int length, out int lastIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x6713160", Offset = "0x6712160", VA = "0x6713160")]
	internal bool ValidateHtmlTag(TextProcessingElement[] chars, int startIndex, out int endIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x6721840", Offset = "0x6720840", VA = "0x6721840")]
	protected TMP_Text()
	{
	}
}
