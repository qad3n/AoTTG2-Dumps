using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x200007D")]
public abstract class TMP_Text : MaskableGraphic
{
	[Token(Token = "0x200007E")]
	protected struct CharacterSubstitution
	{
		[Token(Token = "0x40004B1")]
		[FieldOffset(Offset = "0x0")]
		public int index;

		[Token(Token = "0x40004B2")]
		[FieldOffset(Offset = "0x4")]
		public uint unicode;

		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x49469D0", Offset = "0x49469D0", VA = "0x49469D0")]
		public CharacterSubstitution(int index, uint unicode)
		{
		}
	}

	[Token(Token = "0x200007F")]
	internal enum TextInputSources
	{
		[Token(Token = "0x40004B4")]
		TextInputBox,
		[Token(Token = "0x40004B5")]
		SetText,
		[Token(Token = "0x40004B6")]
		SetTextArray,
		[Token(Token = "0x40004B7")]
		TextString
	}

	[Token(Token = "0x2000080")]
	[DebuggerDisplay("Unicode ({unicode})  '{(char)unicode}'")]
	internal struct UnicodeChar
	{
		[Token(Token = "0x40004B8")]
		[FieldOffset(Offset = "0x0")]
		public int unicode;

		[Token(Token = "0x40004B9")]
		[FieldOffset(Offset = "0x4")]
		public int stringIndex;

		[Token(Token = "0x40004BA")]
		[FieldOffset(Offset = "0x8")]
		public int length;
	}

	[Token(Token = "0x2000081")]
	protected struct SpecialCharacter
	{
		[Token(Token = "0x40004BB")]
		[FieldOffset(Offset = "0x0")]
		public TMP_Character character;

		[Token(Token = "0x40004BC")]
		[FieldOffset(Offset = "0x8")]
		public TMP_FontAsset fontAsset;

		[Token(Token = "0x40004BD")]
		[FieldOffset(Offset = "0x10")]
		public Material material;

		[Token(Token = "0x40004BE")]
		[FieldOffset(Offset = "0x18")]
		public int materialIndex;

		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x49469E0", Offset = "0x49469E0", VA = "0x49469E0")]
		public SpecialCharacter(TMP_Character character, int materialIndex)
		{
		}
	}

	[Token(Token = "0x2000082")]
	private struct TextBackingContainer
	{
		[Token(Token = "0x40004BF")]
		[FieldOffset(Offset = "0x0")]
		private uint[] m_Array;

		[Token(Token = "0x40004C0")]
		[FieldOffset(Offset = "0x8")]
		private int m_Count;

		[Token(Token = "0x17000143")]
		public int Capacity
		{
			[Token(Token = "0x60004E2")]
			[Address(RVA = "0x4946B10", Offset = "0x4946B10", VA = "0x4946B10")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000144")]
		public int Count
		{
			[Token(Token = "0x60004E3")]
			[Address(RVA = "0x4946B30", Offset = "0x4946B30", VA = "0x4946B30")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60004E4")]
			[Address(RVA = "0x4946B40", Offset = "0x4946B40", VA = "0x4946B40")]
			set
			{
			}
		}

		[Token(Token = "0x17000145")]
		public uint this[int index]
		{
			[Token(Token = "0x60004E5")]
			[Address(RVA = "0x4946B50", Offset = "0x4946B50", VA = "0x4946B50")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x60004E6")]
			[Address(RVA = "0x4946B80", Offset = "0x4946B80", VA = "0x4946B80")]
			set
			{
			}
		}

		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x4946C50", Offset = "0x4946C50", VA = "0x4946C50")]
		public TextBackingContainer(int size)
		{
		}

		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x4946C00", Offset = "0x4946C00", VA = "0x4946C00")]
		public void Resize(int size)
		{
		}
	}

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	[TextArea(5, 10)]
	protected string m_text;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0xE0")]
	private bool m_IsTextBackingStringDirty;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	protected ITextPreprocessor m_TextPreprocessor;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	protected bool m_isRightToLeft;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	protected TMP_FontAsset m_fontAsset;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x100")]
	protected TMP_FontAsset m_currentFontAsset;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x108")]
	protected bool m_isSDFShader;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	protected Material m_sharedMaterial;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x118")]
	protected Material m_currentMaterial;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x0")]
	protected static MaterialReference[] m_materialReferences;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x8")]
	protected static Dictionary<int, int> m_materialReferenceIndexLookup;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x10")]
	protected static TMP_TextProcessingStack<MaterialReference> m_materialReferenceStack;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x120")]
	protected int m_currentMaterialIndex;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	protected Material[] m_fontSharedMaterials;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x130")]
	[SerializeField]
	protected Material m_fontMaterial;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	protected Material[] m_fontMaterials;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x140")]
	protected bool m_isMaterialDirty;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x144")]
	[SerializeField]
	protected Color32 m_fontColor32;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	protected Color m_fontColor;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x68")]
	protected static Color32 s_colorWhite;

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x158")]
	protected Color32 m_underlineColor;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x15C")]
	protected Color32 m_strikethroughColor;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x160")]
	[SerializeField]
	protected bool m_enableVertexGradient;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x164")]
	[SerializeField]
	protected ColorMode m_colorMode;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x168")]
	[SerializeField]
	protected VertexGradient m_fontColorGradient;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x1A8")]
	[SerializeField]
	protected TMP_ColorGradient m_fontColorGradientPreset;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x1B0")]
	[SerializeField]
	protected TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x1B8")]
	[SerializeField]
	protected bool m_tintAllSprites;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x1B9")]
	protected bool m_tintSprite;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x1BC")]
	protected Color32 m_spriteColor;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x1C0")]
	[SerializeField]
	protected TMP_StyleSheet m_StyleSheet;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x1C8")]
	internal TMP_Style m_TextStyle;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x1D0")]
	[SerializeField]
	protected int m_TextStyleHashCode;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x1D4")]
	[SerializeField]
	protected bool m_overrideHtmlColors;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x1D8")]
	[SerializeField]
	protected Color32 m_faceColor;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x1DC")]
	protected Color32 m_outlineColor;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x1E0")]
	protected float m_outlineWidth;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x1E4")]
	[SerializeField]
	protected float m_fontSize;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x1E8")]
	protected float m_currentFontSize;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x1EC")]
	[SerializeField]
	protected float m_fontSizeBase;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x1F0")]
	protected TMP_TextProcessingStack<float> m_sizeStack;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x210")]
	[SerializeField]
	protected FontWeight m_fontWeight;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x214")]
	protected FontWeight m_FontWeightInternal;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x218")]
	protected TMP_TextProcessingStack<FontWeight> m_FontWeightStack;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x238")]
	[SerializeField]
	protected bool m_enableAutoSizing;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x23C")]
	protected float m_maxFontSize;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x240")]
	protected float m_minFontSize;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x244")]
	protected int m_AutoSizeIterationCount;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x248")]
	protected int m_AutoSizeMaxIterationCount;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x24C")]
	protected bool m_IsAutoSizePointSizeSet;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x250")]
	[SerializeField]
	protected float m_fontSizeMin;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x254")]
	[SerializeField]
	protected float m_fontSizeMax;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x258")]
	[SerializeField]
	protected FontStyles m_fontStyle;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x25C")]
	protected FontStyles m_FontStyleInternal;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x260")]
	protected TMP_FontStyleStack m_fontStyleStack;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x26A")]
	protected bool m_isUsingBold;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x26C")]
	[SerializeField]
	protected HorizontalAlignmentOptions m_HorizontalAlignment;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x270")]
	[SerializeField]
	protected VerticalAlignmentOptions m_VerticalAlignment;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x274")]
	[SerializeField]
	[FormerlySerializedAs("m_lineJustification")]
	protected TextAlignmentOptions m_textAlignment;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x278")]
	protected HorizontalAlignmentOptions m_lineJustification;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x280")]
	protected TMP_TextProcessingStack<HorizontalAlignmentOptions> m_lineJustificationStack;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x2A0")]
	protected Vector3[] m_textContainerLocalCorners;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x2A8")]
	[SerializeField]
	protected float m_characterSpacing;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x2AC")]
	protected float m_cSpacing;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x2B0")]
	protected float m_monoSpacing;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x2B4")]
	[SerializeField]
	protected float m_wordSpacing;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x2B8")]
	[SerializeField]
	protected float m_lineSpacing;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x2BC")]
	protected float m_lineSpacingDelta;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x2C0")]
	protected float m_lineHeight;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x2C4")]
	protected bool m_IsDrivenLineSpacing;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x2C8")]
	[SerializeField]
	protected float m_lineSpacingMax;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x2CC")]
	[SerializeField]
	protected float m_paragraphSpacing;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0x2D0")]
	[SerializeField]
	protected float m_charWidthMaxAdj;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x2D4")]
	protected float m_charWidthAdjDelta;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x2D8")]
	[SerializeField]
	protected bool m_enableWordWrapping;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x2D9")]
	protected bool m_isCharacterWrappingEnabled;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x2DA")]
	protected bool m_isNonBreakingSpace;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x2DB")]
	protected bool m_isIgnoringAlignment;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x2DC")]
	[SerializeField]
	protected float m_wordWrappingRatios;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x2E0")]
	[SerializeField]
	protected TextOverflowModes m_overflowMode;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x2E4")]
	protected int m_firstOverflowCharacterIndex;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x2E8")]
	[SerializeField]
	protected TMP_Text m_linkedTextComponent;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x2F0")]
	[SerializeField]
	internal TMP_Text parentLinkedComponent;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x2F8")]
	protected bool m_isTextTruncated;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x2F9")]
	[SerializeField]
	protected bool m_enableKerning;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x2FC")]
	protected float m_GlyphHorizontalAdvanceAdjustment;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x300")]
	[SerializeField]
	protected bool m_enableExtraPadding;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x301")]
	[SerializeField]
	protected bool checkPaddingRequired;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x302")]
	[SerializeField]
	protected bool m_isRichText;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x303")]
	[SerializeField]
	protected bool m_parseCtrlCharacters;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x304")]
	protected bool m_isOverlay;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x305")]
	[SerializeField]
	protected bool m_isOrthographic;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x306")]
	[SerializeField]
	protected bool m_isCullingEnabled;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x307")]
	protected bool m_isMaskingEnabled;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x308")]
	protected bool isMaskUpdateRequired;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x309")]
	protected bool m_ignoreCulling;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x30C")]
	[SerializeField]
	protected TextureMappingOptions m_horizontalMapping;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x310")]
	[SerializeField]
	protected TextureMappingOptions m_verticalMapping;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x314")]
	[SerializeField]
	protected float m_uvLineOffset;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x318")]
	protected TextRenderFlags m_renderMode;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x31C")]
	[SerializeField]
	protected VertexSortingOrder m_geometrySortingOrder;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x320")]
	[SerializeField]
	protected bool m_IsTextObjectScaleStatic;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x321")]
	[SerializeField]
	protected bool m_VertexBufferAutoSizeReduction;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x324")]
	protected int m_firstVisibleCharacter;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x328")]
	protected int m_maxVisibleCharacters;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x32C")]
	protected int m_maxVisibleWords;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x330")]
	protected int m_maxVisibleLines;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x334")]
	[SerializeField]
	protected bool m_useMaxVisibleDescender;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x338")]
	[SerializeField]
	protected int m_pageToDisplay;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x33C")]
	protected bool m_isNewPage;

	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x340")]
	[SerializeField]
	protected Vector4 m_margin;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x350")]
	protected float m_marginLeft;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x354")]
	protected float m_marginRight;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x358")]
	protected float m_marginWidth;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x35C")]
	protected float m_marginHeight;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x360")]
	protected float m_width;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x368")]
	protected TMP_TextInfo m_textInfo;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x370")]
	protected bool m_havePropertiesChanged;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x371")]
	[SerializeField]
	protected bool m_isUsingLegacyAnimationComponent;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x378")]
	protected Transform m_transform;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x380")]
	protected RectTransform m_rectTransform;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x388")]
	protected Vector2 m_PreviousRectTransformSize;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x390")]
	protected Vector2 m_PreviousPivotPosition;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x399")]
	protected bool m_autoSizeTextContainer;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x3A0")]
	protected Mesh m_mesh;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x3A8")]
	[SerializeField]
	protected bool m_isVolumetricText;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x3B8")]
	protected TMP_SpriteAnimator m_spriteAnimator;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x3C0")]
	protected float m_flexibleHeight;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x3C4")]
	protected float m_flexibleWidth;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x3C8")]
	protected float m_minWidth;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x3CC")]
	protected float m_minHeight;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x3D0")]
	protected float m_maxWidth;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x3D4")]
	protected float m_maxHeight;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x3D8")]
	protected LayoutElement m_LayoutElement;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x3E0")]
	protected float m_preferredWidth;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x3E4")]
	protected float m_renderedWidth;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x3E8")]
	protected bool m_isPreferredWidthDirty;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x3EC")]
	protected float m_preferredHeight;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x3F0")]
	protected float m_renderedHeight;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x3F4")]
	protected bool m_isPreferredHeightDirty;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x3F5")]
	protected bool m_isCalculatingPreferredValues;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x3F8")]
	protected int m_layoutPriority;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x3FC")]
	protected bool m_isLayoutDirty;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x3FD")]
	protected bool m_isAwake;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x3FE")]
	internal bool m_isWaitingOnResourceLoad;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x400")]
	internal TextInputSources m_inputSource;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x404")]
	protected float m_fontScaleMultiplier;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x80")]
	private static char[] m_htmlTag;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x88")]
	private static RichTextTagAttribute[] m_xmlAttribute;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x90")]
	private static float[] m_attributeParameterValues;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x408")]
	protected float tag_LineIndent;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x40C")]
	protected float tag_Indent;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x410")]
	protected TMP_TextProcessingStack<float> m_indentStack;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x430")]
	protected bool tag_NoParsing;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x431")]
	protected bool m_isParsingText;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x434")]
	protected Matrix4x4 m_FXMatrix;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x474")]
	protected bool m_isFXMatrixSet;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x478")]
	internal UnicodeChar[] m_TextProcessingArray;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x480")]
	internal int m_InternalTextProcessingArraySize;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x488")]
	private TMP_CharacterInfo[] m_internalCharacterInfo;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x490")]
	protected int m_totalCharacterCount;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x98")]
	protected static WordWrapState m_SavedWordWrapState;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x410")]
	protected static WordWrapState m_SavedLineState;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x788")]
	protected static WordWrapState m_SavedEllipsisState;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0xB00")]
	protected static WordWrapState m_SavedLastValidState;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0xE78")]
	protected static WordWrapState m_SavedSoftLineBreakState;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x11F0")]
	internal static TMP_TextProcessingStack<WordWrapState> m_EllipsisInsertionCandidateStack;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x494")]
	protected int m_characterCount;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x498")]
	protected int m_firstCharacterOfLine;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x49C")]
	protected int m_firstVisibleCharacterOfLine;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x4A0")]
	protected int m_lastCharacterOfLine;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x4A4")]
	protected int m_lastVisibleCharacterOfLine;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x4A8")]
	protected int m_lineNumber;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x4AC")]
	protected int m_lineVisibleCharacterCount;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x4B0")]
	protected int m_pageNumber;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x4B4")]
	protected float m_PageAscender;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x4B8")]
	protected float m_maxTextAscender;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x4BC")]
	protected float m_maxCapHeight;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x4C0")]
	protected float m_ElementAscender;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x4C4")]
	protected float m_ElementDescender;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x4C8")]
	protected float m_maxLineAscender;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x4CC")]
	protected float m_maxLineDescender;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x4D0")]
	protected float m_startOfLineAscender;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x4D4")]
	protected float m_startOfLineDescender;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x4D8")]
	protected float m_lineOffset;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x4DC")]
	protected Extents m_meshExtents;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x4EC")]
	protected Color32 m_htmlColor;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x4F0")]
	protected TMP_TextProcessingStack<Color32> m_colorStack;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x510")]
	protected TMP_TextProcessingStack<Color32> m_underlineColorStack;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x530")]
	protected TMP_TextProcessingStack<Color32> m_strikethroughColorStack;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x550")]
	protected TMP_TextProcessingStack<HighlightState> m_HighlightStateStack;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x580")]
	protected TMP_ColorGradient m_colorGradientPreset;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x588")]
	protected TMP_TextProcessingStack<TMP_ColorGradient> m_colorGradientStack;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x5B0")]
	protected bool m_colorGradientPresetIsTinted;

	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x5B4")]
	protected float m_tabSpacing;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x5B8")]
	protected float m_spacing;

	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x5C0")]
	protected TMP_TextProcessingStack<int>[] m_TextStyleStacks;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x5C8")]
	protected int m_TextStyleStackDepth;

	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x5D0")]
	protected TMP_TextProcessingStack<int> m_ItalicAngleStack;

	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x5F0")]
	protected int m_ItalicAngle;

	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x5F8")]
	protected TMP_TextProcessingStack<int> m_actionStack;

	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x618")]
	protected float m_padding;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x61C")]
	protected float m_baselineOffset;

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x620")]
	protected TMP_TextProcessingStack<float> m_baselineOffsetStack;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x640")]
	protected float m_xAdvance;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x644")]
	protected TMP_TextElementType m_textElementType;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x648")]
	protected TMP_TextElement m_cached_TextElement;

	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x650")]
	protected SpecialCharacter m_Ellipsis;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x670")]
	protected SpecialCharacter m_Underline;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x690")]
	protected TMP_SpriteAsset m_defaultSpriteAsset;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x698")]
	protected TMP_SpriteAsset m_currentSpriteAsset;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x6A0")]
	protected int m_spriteCount;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x6A4")]
	protected int m_spriteIndex;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x6A8")]
	protected int m_spriteAnimationID;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x1588")]
	private static ProfilerMarker k_ParseTextMarker;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x1590")]
	private static ProfilerMarker k_InsertNewLineMarker;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x6AC")]
	protected bool m_ignoreActiveState;

	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x6B0")]
	private TextBackingContainer m_TextBackingArray;

	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x6C0")]
	private readonly decimal[] k_Power;

	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x1598")]
	protected static Vector2 k_LargePositiveVector2;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x15A0")]
	protected static Vector2 k_LargeNegativeVector2;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x15A8")]
	protected static float k_LargePositiveFloat;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x15AC")]
	protected static float k_LargeNegativeFloat;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x15B0")]
	protected static int k_LargePositiveInt;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x15B4")]
	protected static int k_LargeNegativeInt;

	[Token(Token = "0x170000E9")]
	public virtual string text
	{
		[Token(Token = "0x60003B4")]
		[Address(RVA = "0x491B090", Offset = "0x491B090", VA = "0x491B090", Slot = "65")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x491B190", Offset = "0x491B190", VA = "0x491B190", Slot = "66")]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public ITextPreprocessor textPreprocessor
	{
		[Token(Token = "0x60003B6")]
		[Address(RVA = "0x491B240", Offset = "0x491B240", VA = "0x491B240")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x491B250", Offset = "0x491B250", VA = "0x491B250")]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public bool isRightToLeftText
	{
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x491B270", Offset = "0x491B270", VA = "0x491B270")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x491B280", Offset = "0x491B280", VA = "0x491B280")]
		set
		{
		}
	}

	[Token(Token = "0x170000EC")]
	public TMP_FontAsset font
	{
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x491B2D0", Offset = "0x491B2D0", VA = "0x491B2D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x491B2E0", Offset = "0x491B2E0", VA = "0x491B2E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	public virtual Material fontSharedMaterial
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x491B3A0", Offset = "0x491B3A0", VA = "0x491B3A0", Slot = "67")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x491B3B0", Offset = "0x491B3B0", VA = "0x491B3B0", Slot = "68")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public virtual Material[] fontSharedMaterials
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x491B460", Offset = "0x491B460", VA = "0x491B460", Slot = "69")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x491B480", Offset = "0x491B480", VA = "0x491B480", Slot = "70")]
		set
		{
		}
	}

	[Token(Token = "0x170000EF")]
	public Material fontMaterial
	{
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x491B4D0", Offset = "0x491B4D0", VA = "0x491B4D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x491B4F0", Offset = "0x491B4F0", VA = "0x491B4F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F0")]
	public virtual Material[] fontMaterials
	{
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x491B5F0", Offset = "0x491B5F0", VA = "0x491B5F0", Slot = "71")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x491B610", Offset = "0x491B610", VA = "0x491B610", Slot = "72")]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	public override Color color
	{
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x491B660", Offset = "0x491B660", VA = "0x491B660", Slot = "22")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x491B680", Offset = "0x491B680", VA = "0x491B680", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	public float alpha
	{
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x491B6F0", Offset = "0x491B6F0", VA = "0x491B6F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x491B700", Offset = "0x491B700", VA = "0x491B700")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public bool enableVertexGradient
	{
		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x491B740", Offset = "0x491B740", VA = "0x491B740")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003C9")]
		[Address(RVA = "0x491B750", Offset = "0x491B750", VA = "0x491B750")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public VertexGradient colorGradient
	{
		[Token(Token = "0x60003CA")]
		[Address(RVA = "0x491B780", Offset = "0x491B780", VA = "0x491B780")]
		get
		{
			return default(VertexGradient);
		}
		[Token(Token = "0x60003CB")]
		[Address(RVA = "0x491B7B0", Offset = "0x491B7B0", VA = "0x491B7B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public TMP_ColorGradient colorGradientPreset
	{
		[Token(Token = "0x60003CC")]
		[Address(RVA = "0x491B800", Offset = "0x491B800", VA = "0x491B800")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x491B810", Offset = "0x491B810", VA = "0x491B810")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x491B850", Offset = "0x491B850", VA = "0x491B850")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x491B860", Offset = "0x491B860", VA = "0x491B860")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public bool tintAllSprites
	{
		[Token(Token = "0x60003D0")]
		[Address(RVA = "0x491B8B0", Offset = "0x491B8B0", VA = "0x491B8B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x491B8C0", Offset = "0x491B8C0", VA = "0x491B8C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	public TMP_StyleSheet styleSheet
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x491B8F0", Offset = "0x491B8F0", VA = "0x491B8F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x491B900", Offset = "0x491B900", VA = "0x491B900")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public TMP_Style textStyle
	{
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x491B950", Offset = "0x491B950", VA = "0x491B950")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x491BAB0", Offset = "0x491BAB0", VA = "0x491BAB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public bool overrideColorTags
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x491BB20", Offset = "0x491BB20", VA = "0x491BB20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x491BB30", Offset = "0x491BB30", VA = "0x491BB30")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public Color32 faceColor
	{
		[Token(Token = "0x60003D8")]
		[Address(RVA = "0x491BB60", Offset = "0x491BB60", VA = "0x491BB60")]
		get
		{
			return default(Color32);
		}
		[Token(Token = "0x60003D9")]
		[Address(RVA = "0x491BC20", Offset = "0x491BC20", VA = "0x491BC20")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public Color32 outlineColor
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x491BCA0", Offset = "0x491BCA0", VA = "0x491BCA0")]
		get
		{
			return default(Color32);
		}
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x491BD60", Offset = "0x491BD60", VA = "0x491BD60")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	public float outlineWidth
	{
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x491BDC0", Offset = "0x491BDC0", VA = "0x491BDC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x491BE80", Offset = "0x491BE80", VA = "0x491BE80")]
		set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	public float fontSize
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x491BEF0", Offset = "0x491BEF0", VA = "0x491BEF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x491BF00", Offset = "0x491BF00", VA = "0x491BF00")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public FontWeight fontWeight
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x491BF60", Offset = "0x491BF60", VA = "0x491BF60")]
		get
		{
			return default(FontWeight);
		}
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x491BF70", Offset = "0x491BF70", VA = "0x491BF70")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x491BFC0", Offset = "0x491BFC0", VA = "0x491BFC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000101")]
	public bool enableAutoSizing
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x491C1D0", Offset = "0x491C1D0", VA = "0x491C1D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x491C1E0", Offset = "0x491C1E0", VA = "0x491C1E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	public float fontSizeMin
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x491C220", Offset = "0x491C220", VA = "0x491C220")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x491C230", Offset = "0x491C230", VA = "0x491C230")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public float fontSizeMax
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x491C280", Offset = "0x491C280", VA = "0x491C280")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x491C290", Offset = "0x491C290", VA = "0x491C290")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	public FontStyles fontStyle
	{
		[Token(Token = "0x60003E9")]
		[Address(RVA = "0x491C2E0", Offset = "0x491C2E0", VA = "0x491C2E0")]
		get
		{
			return default(FontStyles);
		}
		[Token(Token = "0x60003EA")]
		[Address(RVA = "0x491C2F0", Offset = "0x491C2F0", VA = "0x491C2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public bool isUsingBold
	{
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x491C340", Offset = "0x491C340", VA = "0x491C340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000106")]
	public HorizontalAlignmentOptions horizontalAlignment
	{
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x491C350", Offset = "0x491C350", VA = "0x491C350")]
		get
		{
			return default(HorizontalAlignmentOptions);
		}
		[Token(Token = "0x60003ED")]
		[Address(RVA = "0x491C360", Offset = "0x491C360", VA = "0x491C360")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public VerticalAlignmentOptions verticalAlignment
	{
		[Token(Token = "0x60003EE")]
		[Address(RVA = "0x491C390", Offset = "0x491C390", VA = "0x491C390")]
		get
		{
			return default(VerticalAlignmentOptions);
		}
		[Token(Token = "0x60003EF")]
		[Address(RVA = "0x491C3A0", Offset = "0x491C3A0", VA = "0x491C3A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x491C3D0", Offset = "0x491C3D0", VA = "0x491C3D0")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x491C3E0", Offset = "0x491C3E0", VA = "0x491C3E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	public float characterSpacing
	{
		[Token(Token = "0x60003F2")]
		[Address(RVA = "0x491C430", Offset = "0x491C430", VA = "0x491C430")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x491C440", Offset = "0x491C440", VA = "0x491C440")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	public float wordSpacing
	{
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x491C490", Offset = "0x491C490", VA = "0x491C490")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x491C4A0", Offset = "0x491C4A0", VA = "0x491C4A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public float lineSpacing
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x491C4F0", Offset = "0x491C4F0", VA = "0x491C4F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x491C500", Offset = "0x491C500", VA = "0x491C500")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public float lineSpacingAdjustment
	{
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x491C550", Offset = "0x491C550", VA = "0x491C550")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x491C560", Offset = "0x491C560", VA = "0x491C560")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public float paragraphSpacing
	{
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x491C5B0", Offset = "0x491C5B0", VA = "0x491C5B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x491C5C0", Offset = "0x491C5C0", VA = "0x491C5C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	public float characterWidthAdjustment
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x491C610", Offset = "0x491C610", VA = "0x491C610")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x491C620", Offset = "0x491C620", VA = "0x491C620")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	public bool enableWordWrapping
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x491C670", Offset = "0x491C670", VA = "0x491C670")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x491C680", Offset = "0x491C680", VA = "0x491C680")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public float wordWrappingRatios
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x491C6D0", Offset = "0x491C6D0", VA = "0x491C6D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x491C6E0", Offset = "0x491C6E0", VA = "0x491C6E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public TextOverflowModes overflowMode
	{
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x491C730", Offset = "0x491C730", VA = "0x491C730")]
		get
		{
			return default(TextOverflowModes);
		}
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x491C740", Offset = "0x491C740", VA = "0x491C740")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public bool isTextOverflowing
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x491C790", Offset = "0x491C790", VA = "0x491C790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000113")]
	public int firstOverflowCharacterIndex
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x491C7A0", Offset = "0x491C7A0", VA = "0x491C7A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000114")]
	public TMP_Text linkedTextComponent
	{
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x491C7B0", Offset = "0x491C7B0", VA = "0x491C7B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x491C7C0", Offset = "0x491C7C0", VA = "0x491C7C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public bool isTextTruncated
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x491CAD0", Offset = "0x491CAD0", VA = "0x491CAD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000116")]
	public bool enableKerning
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x491CAE0", Offset = "0x491CAE0", VA = "0x491CAE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x491CAF0", Offset = "0x491CAF0", VA = "0x491CAF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public bool extraPadding
	{
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x491CB40", Offset = "0x491CB40", VA = "0x491CB40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x491CB50", Offset = "0x491CB50", VA = "0x491CB50")]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	public bool richText
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x491CBA0", Offset = "0x491CBA0", VA = "0x491CBA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x491CBB0", Offset = "0x491CBB0", VA = "0x491CBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public bool parseCtrlCharacters
	{
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x491CC00", Offset = "0x491CC00", VA = "0x491CC00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x491CC10", Offset = "0x491CC10", VA = "0x491CC10")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public bool isOverlay
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x491CC60", Offset = "0x491CC60", VA = "0x491CC60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x491CC70", Offset = "0x491CC70", VA = "0x491CC70")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public bool isOrthographic
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x491CCC0", Offset = "0x491CCC0", VA = "0x491CCC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x491CCD0", Offset = "0x491CCD0", VA = "0x491CCD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public bool enableCulling
	{
		[Token(Token = "0x6000415")]
		[Address(RVA = "0x491CD00", Offset = "0x491CD00", VA = "0x491CD00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000416")]
		[Address(RVA = "0x491CD10", Offset = "0x491CD10", VA = "0x491CD10")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	public bool ignoreVisibility
	{
		[Token(Token = "0x6000417")]
		[Address(RVA = "0x491CD40", Offset = "0x491CD40", VA = "0x491CD40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x491CD50", Offset = "0x491CD50", VA = "0x491CD50")]
		set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	public TextureMappingOptions horizontalMapping
	{
		[Token(Token = "0x6000419")]
		[Address(RVA = "0x491CD70", Offset = "0x491CD70", VA = "0x491CD70")]
		get
		{
			return default(TextureMappingOptions);
		}
		[Token(Token = "0x600041A")]
		[Address(RVA = "0x491CD80", Offset = "0x491CD80", VA = "0x491CD80")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public TextureMappingOptions verticalMapping
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x491CDB0", Offset = "0x491CDB0", VA = "0x491CDB0")]
		get
		{
			return default(TextureMappingOptions);
		}
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x491CDC0", Offset = "0x491CDC0", VA = "0x491CDC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public float mappingUvLineOffset
	{
		[Token(Token = "0x600041D")]
		[Address(RVA = "0x491CDF0", Offset = "0x491CDF0", VA = "0x491CDF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x491CE00", Offset = "0x491CE00", VA = "0x491CE00")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public TextRenderFlags renderMode
	{
		[Token(Token = "0x600041F")]
		[Address(RVA = "0x491CE40", Offset = "0x491CE40", VA = "0x491CE40")]
		get
		{
			return default(TextRenderFlags);
		}
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x491CE50", Offset = "0x491CE50", VA = "0x491CE50")]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	public VertexSortingOrder geometrySortingOrder
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x491CE70", Offset = "0x491CE70", VA = "0x491CE70")]
		get
		{
			return default(VertexSortingOrder);
		}
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x491CE80", Offset = "0x491CE80", VA = "0x491CE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public bool isTextObjectScaleStatic
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x491CEA0", Offset = "0x491CEA0", VA = "0x491CEA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x491CEB0", Offset = "0x491CEB0", VA = "0x491CEB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public bool vertexBufferAutoSizeReduction
	{
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x491CF10", Offset = "0x491CF10", VA = "0x491CF10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000426")]
		[Address(RVA = "0x491CF20", Offset = "0x491CF20", VA = "0x491CF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public int firstVisibleCharacter
	{
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x491CF50", Offset = "0x491CF50", VA = "0x491CF50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x491CF60", Offset = "0x491CF60", VA = "0x491CF60")]
		set
		{
		}
	}

	[Token(Token = "0x17000126")]
	public int maxVisibleCharacters
	{
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x491CF90", Offset = "0x491CF90", VA = "0x491CF90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x491CFA0", Offset = "0x491CFA0", VA = "0x491CFA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public int maxVisibleWords
	{
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x491CFD0", Offset = "0x491CFD0", VA = "0x491CFD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x491CFE0", Offset = "0x491CFE0", VA = "0x491CFE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public int maxVisibleLines
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x491D010", Offset = "0x491D010", VA = "0x491D010")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x491D020", Offset = "0x491D020", VA = "0x491D020")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public bool useMaxVisibleDescender
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x491D050", Offset = "0x491D050", VA = "0x491D050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x491D060", Offset = "0x491D060", VA = "0x491D060")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public int pageToDisplay
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0x491D090", Offset = "0x491D090", VA = "0x491D090")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x491D0A0", Offset = "0x491D0A0", VA = "0x491D0A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public virtual Vector4 margin
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x491D0D0", Offset = "0x491D0D0", VA = "0x491D0D0", Slot = "73")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x491D0F0", Offset = "0x491D0F0", VA = "0x491D0F0", Slot = "74")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public TMP_TextInfo textInfo
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x491D170", Offset = "0x491D170", VA = "0x491D170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	public bool havePropertiesChanged
	{
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x491D180", Offset = "0x491D180", VA = "0x491D180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x491D190", Offset = "0x491D190", VA = "0x491D190")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public bool isUsingLegacyAnimationComponent
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x491D1C0", Offset = "0x491D1C0", VA = "0x491D1C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x491D1D0", Offset = "0x491D1D0", VA = "0x491D1D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public new Transform transform
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x491D1E0", Offset = "0x491D1E0", VA = "0x491D1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000130")]
	public new RectTransform rectTransform
	{
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x491D280", Offset = "0x491D280", VA = "0x491D280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public virtual bool autoSizeTextContainer
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x491D320", Offset = "0x491D320", VA = "0x491D320", Slot = "75")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x491D330", Offset = "0x491D330", VA = "0x491D330", Slot = "76")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public virtual Mesh mesh
	{
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x491D340", Offset = "0x491D340", VA = "0x491D340", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000133")]
	public bool isVolumetricText
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x491D350", Offset = "0x491D350", VA = "0x491D350")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x491D360", Offset = "0x491D360", VA = "0x491D360")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public Bounds bounds
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x491D3C0", Offset = "0x491D3C0", VA = "0x491D3C0")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x17000135")]
	public Bounds textBounds
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x491D470", Offset = "0x491D470", VA = "0x491D470")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x17000136")]
	protected TMP_SpriteAnimator spriteAnimator
	{
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x491DC00", Offset = "0x491DC00", VA = "0x491DC00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public float flexibleHeight
	{
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x491DD10", Offset = "0x491DD10", VA = "0x491DD10", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000138")]
	public float flexibleWidth
	{
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x491DD20", Offset = "0x491DD20", VA = "0x491DD20", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000139")]
	public float minWidth
	{
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x491DD30", Offset = "0x491DD30", VA = "0x491DD30", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013A")]
	public float minHeight
	{
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x491DD40", Offset = "0x491DD40", VA = "0x491DD40", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013B")]
	public float maxWidth
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x491DD50", Offset = "0x491DD50", VA = "0x491DD50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013C")]
	public float maxHeight
	{
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x491DD60", Offset = "0x491DD60", VA = "0x491DD60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013D")]
	protected LayoutElement layoutElement
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x491DD70", Offset = "0x491DD70", VA = "0x491DD70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013E")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x491DE10", Offset = "0x491DE10", VA = "0x491DE10", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013F")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x491DF90", Offset = "0x491DF90", VA = "0x491DF90", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000140")]
	public virtual float renderedWidth
	{
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x491E1A0", Offset = "0x491E1A0", VA = "0x491E1A0", Slot = "86")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000141")]
	public virtual float renderedHeight
	{
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x491E1E0", Offset = "0x491E1E0", VA = "0x491E1E0", Slot = "87")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000142")]
	public int layoutPriority
	{
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x491E240", Offset = "0x491E240", VA = "0x491E240", Slot = "88")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Func<int, string, TMP_FontAsset> OnFontAssetRequest
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x491D6A0", Offset = "0x491D6A0", VA = "0x491D6A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x491D7A0", Offset = "0x491D7A0", VA = "0x491D7A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event Func<int, string, TMP_SpriteAsset> OnSpriteAssetRequest
	{
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x491D8A0", Offset = "0x491D8A0", VA = "0x491D8A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x491D9A0", Offset = "0x491D9A0", VA = "0x491D9A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public virtual event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x491DAA0", Offset = "0x491DAA0", VA = "0x491DAA0", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x491DB50", Offset = "0x491DB50", VA = "0x491DB50", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x491E250", Offset = "0x491E250", VA = "0x491E250", Slot = "89")]
	protected virtual void LoadFontAsset()
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x491E260", Offset = "0x491E260", VA = "0x491E260", Slot = "90")]
	protected virtual void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x491E270", Offset = "0x491E270", VA = "0x491E270", Slot = "91")]
	protected virtual Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x491E280", Offset = "0x491E280", VA = "0x491E280", Slot = "92")]
	protected virtual void SetFontBaseMaterial(Material mat)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x491E290", Offset = "0x491E290", VA = "0x491E290", Slot = "93")]
	protected virtual Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x491E2A0", Offset = "0x491E2A0", VA = "0x491E2A0", Slot = "94")]
	protected virtual void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x491E2B0", Offset = "0x491E2B0", VA = "0x491E2B0", Slot = "95")]
	protected virtual Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x491E2C0", Offset = "0x491E2C0", VA = "0x491E2C0", Slot = "96")]
	protected virtual Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x491E370", Offset = "0x491E370", VA = "0x491E370")]
	protected void SetVertexColorGradient(TMP_ColorGradient gradient)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x491E420", Offset = "0x491E420", VA = "0x491E420")]
	protected void SetTextSortingOrder(VertexSortingOrder order)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x491E430", Offset = "0x491E430", VA = "0x491E430")]
	protected void SetTextSortingOrder(int[] order)
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x491E440", Offset = "0x491E440", VA = "0x491E440", Slot = "97")]
	protected virtual void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x491E450", Offset = "0x491E450", VA = "0x491E450", Slot = "98")]
	protected virtual void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x491E460", Offset = "0x491E460", VA = "0x491E460", Slot = "99")]
	protected virtual void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x491E470", Offset = "0x491E470", VA = "0x491E470", Slot = "100")]
	protected virtual void SetShaderDepth()
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x491E480", Offset = "0x491E480", VA = "0x491E480", Slot = "101")]
	protected virtual void SetCulling()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x491E490", Offset = "0x491E490", VA = "0x491E490", Slot = "102")]
	internal virtual void UpdateCulling()
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x491E4A0", Offset = "0x491E4A0", VA = "0x491E4A0", Slot = "103")]
	protected virtual float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x491E5C0", Offset = "0x491E5C0", VA = "0x491E5C0", Slot = "104")]
	protected virtual float GetPaddingForMaterial(Material mat)
	{
		return default(float);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x491E6B0", Offset = "0x491E6B0", VA = "0x491E6B0", Slot = "105")]
	protected virtual Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x491E6C0", Offset = "0x491E6C0", VA = "0x491E6C0", Slot = "106")]
	public virtual void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x491E6D0", Offset = "0x491E6D0", VA = "0x491E6D0", Slot = "107")]
	public virtual void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x491E6E0", Offset = "0x491E6E0", VA = "0x491E6E0", Slot = "108")]
	public virtual void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x491E6F0", Offset = "0x491E6F0", VA = "0x491E6F0", Slot = "109")]
	public virtual void UpdateVertexData()
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x491E700", Offset = "0x491E700", VA = "0x491E700", Slot = "110")]
	public virtual void SetVertices(Vector3[] vertices)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x491E710", Offset = "0x491E710", VA = "0x491E710", Slot = "111")]
	public virtual void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x491E720", Offset = "0x491E720", VA = "0x491E720", Slot = "47")]
	public override void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x491E780", Offset = "0x491E780", VA = "0x491E780", Slot = "49")]
	public override void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x491E7D0", Offset = "0x491E7D0", VA = "0x491E7D0", Slot = "112")]
	protected virtual void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x491E7E0", Offset = "0x491E7E0", VA = "0x491E7E0", Slot = "113")]
	protected virtual void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x491E7F0", Offset = "0x491E7F0", VA = "0x491E7F0")]
	protected void ParseInputText()
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x491E910", Offset = "0x491E910", VA = "0x491E910")]
	private void PopulateTextBackingArray(string sourceText)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x491F710", Offset = "0x491F710", VA = "0x491F710")]
	private void PopulateTextBackingArray(string sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x491F800", Offset = "0x491F800", VA = "0x491F800")]
	private void PopulateTextBackingArray(StringBuilder sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x491F900", Offset = "0x491F900", VA = "0x491F900")]
	private void PopulateTextBackingArray(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x491E930", Offset = "0x491E930", VA = "0x491E930")]
	private void PopulateTextProcessingArray()
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x4920E30", Offset = "0x4920E30", VA = "0x4920E30")]
	private void SetTextInternal(string sourceText)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x4920E80", Offset = "0x4920E80", VA = "0x4920E80")]
	public void SetText(string sourceText, bool syncTextInputBox = true)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x4920F10", Offset = "0x4920F10", VA = "0x4920F10")]
	public void SetText(string sourceText, float arg0)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x4921210", Offset = "0x4921210", VA = "0x4921210")]
	public void SetText(string sourceText, float arg0, float arg1)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x4921230", Offset = "0x4921230", VA = "0x4921230")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2)
	{
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x4921250", Offset = "0x4921250", VA = "0x4921250")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x4921270", Offset = "0x4921270", VA = "0x4921270")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x4921280", Offset = "0x4921280", VA = "0x4921280")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x4921290", Offset = "0x4921290", VA = "0x4921290")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x4920F30", Offset = "0x4920F30", VA = "0x4920F30")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4921600", Offset = "0x4921600", VA = "0x4921600")]
	public void SetText(StringBuilder sourceText)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4921680", Offset = "0x4921680", VA = "0x4921680")]
	private void SetText(StringBuilder sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x49216E0", Offset = "0x49216E0", VA = "0x49216E0")]
	public void SetText(char[] sourceText)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x49217B0", Offset = "0x49217B0", VA = "0x49217B0")]
	public void SetText(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4921810", Offset = "0x4921810", VA = "0x4921810")]
	public void SetCharArray(char[] sourceText)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4921750", Offset = "0x4921750", VA = "0x4921750")]
	public void SetCharArray(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x491B9D0", Offset = "0x491B9D0", VA = "0x491B9D0")]
	private TMP_Style GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x49200E0", Offset = "0x49200E0", VA = "0x49200E0")]
	private bool ReplaceOpeningStyleTag(ref TextBackingContainer sourceText, int srcIndex, out int srcOffset, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4921C50", Offset = "0x4921C50", VA = "0x4921C50")]
	private bool ReplaceOpeningStyleTag(ref int[] sourceText, int srcIndex, out int srcOffset, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4920580", Offset = "0x4920580", VA = "0x4920580")]
	private void ReplaceClosingStyleTag(ref TextBackingContainer sourceText, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x49220F0", Offset = "0x49220F0", VA = "0x49220F0")]
	private void ReplaceClosingStyleTag(ref int[] sourceText, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x491FA00", Offset = "0x491FA00", VA = "0x491FA00")]
	private bool InsertOpeningStyleTag(TMP_Style style, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x49209F0", Offset = "0x49209F0", VA = "0x49209F0")]
	private void InsertClosingStyleTag(ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4921B60", Offset = "0x4921B60", VA = "0x4921B60")]
	private int GetMarkupTagHashCode(int[] tagDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4920010", Offset = "0x4920010", VA = "0x4920010")]
	private int GetMarkupTagHashCode(TextBackingContainer tagDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4922560", Offset = "0x4922560", VA = "0x4922560")]
	private int GetStyleHashCode(ref int[] text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4921880", Offset = "0x4921880", VA = "0x4921880")]
	private int GetStyleHashCode(ref TextBackingContainer text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000495")]
	private void ResizeInternalArray<T>(ref T[] array)
	{
	}

	[Token(Token = "0x6000496")]
	private void ResizeInternalArray<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x49212A0", Offset = "0x49212A0", VA = "0x49212A0")]
	private void AddFloatToInternalTextBackingArray(float value, int padding, int precision, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4922640", Offset = "0x4922640", VA = "0x4922640")]
	private void AddIntegerToInternalTextBackingArray(double number, int padding, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x491B0B0", Offset = "0x491B0B0", VA = "0x491B0B0")]
	private string InternalTextBackingArrayToString()
	{
		return null;
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4922740", Offset = "0x4922740", VA = "0x4922740", Slot = "114")]
	internal virtual int SetArraySizes(UnicodeChar[] unicodeChars)
	{
		return default(int);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4922750", Offset = "0x4922750", VA = "0x4922750")]
	public Vector2 GetPreferredValues()
	{
		return default(Vector2);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x49227A0", Offset = "0x49227A0", VA = "0x49227A0")]
	public Vector2 GetPreferredValues(float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4922A20", Offset = "0x4922A20", VA = "0x4922A20")]
	public Vector2 GetPreferredValues(string text)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4922BF0", Offset = "0x4922BF0", VA = "0x4922BF0")]
	public Vector2 GetPreferredValues(string text, float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x491DE30", Offset = "0x491DE30", VA = "0x491DE30")]
	protected float GetPreferredWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x49228F0", Offset = "0x49228F0", VA = "0x49228F0")]
	private float GetPreferredWidth(Vector2 margin)
	{
		return default(float);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x491DFB0", Offset = "0x491DFB0", VA = "0x491DFB0")]
	protected float GetPreferredHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4922960", Offset = "0x4922960", VA = "0x4922960")]
	private float GetPreferredHeight(Vector2 margin)
	{
		return default(float);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4922D90", Offset = "0x4922D90", VA = "0x4922D90")]
	public Vector2 GetRenderedValues()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4922DB0", Offset = "0x4922DB0", VA = "0x4922DB0")]
	public Vector2 GetRenderedValues(bool onlyVisibleCharacters)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x491E1C0", Offset = "0x491E1C0", VA = "0x491E1C0")]
	private float GetRenderedWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x49230D0", Offset = "0x49230D0", VA = "0x49230D0")]
	protected float GetRenderedWidth(bool onlyVisibleCharacters)
	{
		return default(float);
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x491E210", Offset = "0x491E210", VA = "0x491E210")]
	private float GetRenderedHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x49230F0", Offset = "0x49230F0", VA = "0x49230F0")]
	protected float GetRenderedHeight(bool onlyVisibleCharacters)
	{
		return default(float);
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4923120", Offset = "0x4923120", VA = "0x4923120", Slot = "115")]
	protected virtual Vector2 CalculatePreferredValues(ref float fontSize, Vector2 marginSize, bool isTextAutoSizingEnabled, bool isWordWrappingEnabled)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x492E2E0", Offset = "0x492E2E0", VA = "0x492E2E0", Slot = "116")]
	protected virtual Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x492E300", Offset = "0x492E300", VA = "0x492E300", Slot = "117")]
	internal virtual Rect GetCanvasSpaceClippingRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x491D4C0", Offset = "0x491D4C0", VA = "0x491D4C0")]
	protected Bounds GetTextBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4922DD0", Offset = "0x4922DD0", VA = "0x4922DD0")]
	protected Bounds GetTextBounds(bool onlyVisibleCharacters)
	{
		return default(Bounds);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x492E310", Offset = "0x492E310", VA = "0x492E310")]
	protected void AdjustLineOffset(int startIndex, int endIndex, float offset)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x492E5D0", Offset = "0x492E5D0", VA = "0x492E5D0")]
	protected void ResizeLineExtents(int size)
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x492E880", Offset = "0x492E880", VA = "0x492E880", Slot = "118")]
	public virtual TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x492E890", Offset = "0x492E890", VA = "0x492E890", Slot = "119")]
	public virtual void ComputeMarginSize()
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x492E8A0", Offset = "0x492E8A0", VA = "0x492E8A0")]
	protected void InsertNewLine(int i, float baseScale, float currentElementScale, float currentEmScale, float glyphAdjustment, float boldSpacingAdjustment, float characterSpacingAdjustment, float width, float lineGap, ref bool isMaxVisibleDescenderSet, ref float maxVisibleDescender)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x492DD80", Offset = "0x492DD80", VA = "0x492DD80")]
	protected void SaveWordWrappingState(ref WordWrapState state, int index, int count)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x492D7D0", Offset = "0x492D7D0", VA = "0x492D7D0")]
	protected int RestoreWordWrappingState(ref WordWrapState state)
	{
		return default(int);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x492EF00", Offset = "0x492EF00", VA = "0x492EF00", Slot = "120")]
	protected virtual void SaveGlyphVertexInfo(float padding, float style_padding, Color32 vertexColor)
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x492FDF0", Offset = "0x492FDF0", VA = "0x492FDF0", Slot = "121")]
	protected virtual void SaveSpriteVertexInfo(Color32 vertexColor)
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4930730", Offset = "0x4930730", VA = "0x4930730", Slot = "122")]
	protected virtual void FillCharacterVertexBuffers(int i, int index_X4)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4930E70", Offset = "0x4930E70", VA = "0x4930E70", Slot = "123")]
	protected virtual void FillCharacterVertexBuffers(int i, int index_X4, bool isVolumetric)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x49319C0", Offset = "0x49319C0", VA = "0x49319C0", Slot = "124")]
	protected virtual void FillSpriteVertexBuffers(int i, int index_X4)
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4932100", Offset = "0x4932100", VA = "0x4932100", Slot = "125")]
	protected virtual void DrawUnderlineMesh(Vector3 start, Vector3 end, ref int index, float startScale, float endScale, float maxScale, float sdfScale, Color32 underlineColor)
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x49331A0", Offset = "0x49331A0", VA = "0x49331A0", Slot = "126")]
	protected virtual void DrawTextHighlight(Vector3 start, Vector3 end, ref int index, Color32 highlightColor)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x4933710", Offset = "0x4933710", VA = "0x4933710")]
	protected void LoadDefaultSettings()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x4933990", Offset = "0x4933990", VA = "0x4933990")]
	protected void GetSpecialCharacters(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x49339C0", Offset = "0x49339C0", VA = "0x49339C0")]
	protected void GetEllipsisSpecialCharacter(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x4933010", Offset = "0x4933010", VA = "0x4933010")]
	protected void GetUnderlineSpecialCharacter(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x4933C50", Offset = "0x4933C50", VA = "0x4933C50")]
	protected void ReplaceTagWithCharacter(int[] chars, int insertionIndex, int tagLength, char c)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x4933CB0", Offset = "0x4933CB0", VA = "0x4933CB0")]
	protected TMP_FontAsset GetFontAssetForWeight(int fontWeight)
	{
		return null;
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x4933D30", Offset = "0x4933D30", VA = "0x4933D30")]
	internal TMP_TextElement GetTextElement(uint unicode, TMP_FontAsset fontAsset, FontStyles fontStyle, FontWeight fontWeight, out bool isUsingAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x4934180", Offset = "0x4934180", VA = "0x4934180", Slot = "127")]
	protected virtual void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x4934190", Offset = "0x4934190", VA = "0x4934190", Slot = "128")]
	protected virtual void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x49341A0", Offset = "0x49341A0", VA = "0x49341A0", Slot = "129")]
	public virtual void ClearMesh()
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x49341B0", Offset = "0x49341B0", VA = "0x49341B0", Slot = "130")]
	public virtual void ClearMesh(bool uploadGeometry)
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x49341C0", Offset = "0x49341C0", VA = "0x49341C0", Slot = "131")]
	public virtual string GetParsedText()
	{
		return null;
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x491CA00", Offset = "0x491CA00", VA = "0x491CA00")]
	internal bool IsSelfOrLinkedAncestor(TMP_Text targetTextComponent)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x491C8D0", Offset = "0x491C8D0", VA = "0x491C8D0")]
	internal void ReleaseLinkedTextComponent(TMP_Text targetTextComponent)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x4933160", Offset = "0x4933160", VA = "0x4933160")]
	protected Vector2 PackUV(float x, float y, float scale)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x49342B0", Offset = "0x49342B0", VA = "0x49342B0")]
	protected float PackUV(float x, float y)
	{
		return default(float);
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x49342F0", Offset = "0x49342F0", VA = "0x49342F0", Slot = "132")]
	internal virtual void InternalUpdate()
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x4934300", Offset = "0x4934300", VA = "0x4934300")]
	protected int HexToInt(char hex)
	{
		return default(int);
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x4934320", Offset = "0x4934320", VA = "0x4934320")]
	protected int GetUTF16(string text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4921970", Offset = "0x4921970", VA = "0x4921970")]
	protected int GetUTF16(int[] text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x49343C0", Offset = "0x49343C0", VA = "0x49343C0")]
	internal int GetUTF16(uint[] text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x4934460", Offset = "0x4934460", VA = "0x4934460")]
	protected int GetUTF16(StringBuilder text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x491FE40", Offset = "0x491FE40", VA = "0x491FE40")]
	private int GetUTF16(TextBackingContainer text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x4934500", Offset = "0x4934500", VA = "0x4934500")]
	protected int GetUTF32(string text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x4921A10", Offset = "0x4921A10", VA = "0x4921A10")]
	protected int GetUTF32(int[] text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x4934630", Offset = "0x4934630", VA = "0x4934630")]
	internal int GetUTF32(uint[] text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x4934780", Offset = "0x4934780", VA = "0x4934780")]
	protected int GetUTF32(StringBuilder text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x491FEE0", Offset = "0x491FEE0", VA = "0x491FEE0")]
	private int GetUTF32(TextBackingContainer text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x49348B0", Offset = "0x49348B0", VA = "0x49348B0")]
	protected Color32 HexCharsToColor(char[] hexChars, int tagCount)
	{
		return default(Color32);
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4934DC0", Offset = "0x4934DC0", VA = "0x4934DC0")]
	protected Color32 HexCharsToColor(char[] hexChars, int startIndex, int length)
	{
		return default(Color32);
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x4935060", Offset = "0x4935060", VA = "0x4935060")]
	private int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters)
	{
		return default(int);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x49352A0", Offset = "0x49352A0", VA = "0x49352A0")]
	protected float ConvertToFloat(char[] chars, int startIndex, int length)
	{
		return default(float);
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x4935100", Offset = "0x4935100", VA = "0x4935100")]
	protected float ConvertToFloat(char[] chars, int startIndex, int length, out int lastIndex)
	{
		return default(float);
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x4926630", Offset = "0x4926630", VA = "0x4926630")]
	internal bool ValidateHtmlTag(UnicodeChar[] chars, int startIndex, out int endIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x49352C0", Offset = "0x49352C0", VA = "0x49352C0")]
	protected TMP_Text()
	{
	}
}
