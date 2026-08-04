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
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000093")]
public abstract class TMP_Text : MaskableGraphic
{
	[Token(Token = "0x2000094")]
	protected struct CharacterSubstitution
	{
		[Token(Token = "0x40005A5")]
		[FieldOffset(Offset = "0x0")]
		public int index;

		[Token(Token = "0x40005A6")]
		[FieldOffset(Offset = "0x4")]
		public uint unicode;

		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x4C93F50", Offset = "0x4C93F50", VA = "0x4C93F50")]
		public CharacterSubstitution(int index, uint unicode)
		{
		}
	}

	[Token(Token = "0x2000095")]
	internal enum TextInputSources
	{
		[Token(Token = "0x40005A8")]
		TextInputBox,
		[Token(Token = "0x40005A9")]
		SetText,
		[Token(Token = "0x40005AA")]
		SetTextArray,
		[Token(Token = "0x40005AB")]
		TextString
	}

	[Token(Token = "0x2000096")]
	[DebuggerDisplay("Unicode ({unicode})  '{(char)unicode}'")]
	internal struct UnicodeChar
	{
		[Token(Token = "0x40005AC")]
		[FieldOffset(Offset = "0x0")]
		public int unicode;

		[Token(Token = "0x40005AD")]
		[FieldOffset(Offset = "0x4")]
		public int stringIndex;

		[Token(Token = "0x40005AE")]
		[FieldOffset(Offset = "0x8")]
		public int length;
	}

	[Token(Token = "0x2000097")]
	protected struct SpecialCharacter
	{
		[Token(Token = "0x40005AF")]
		[FieldOffset(Offset = "0x0")]
		public TMP_Character character;

		[Token(Token = "0x40005B0")]
		[FieldOffset(Offset = "0x8")]
		public TMP_FontAsset fontAsset;

		[Token(Token = "0x40005B1")]
		[FieldOffset(Offset = "0x10")]
		public Material material;

		[Token(Token = "0x40005B2")]
		[FieldOffset(Offset = "0x18")]
		public int materialIndex;

		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x4C93F60", Offset = "0x4C93F60", VA = "0x4C93F60")]
		public SpecialCharacter(TMP_Character character, int materialIndex)
		{
		}
	}

	[Token(Token = "0x2000098")]
	private struct TextBackingContainer
	{
		[Token(Token = "0x40005B3")]
		[FieldOffset(Offset = "0x0")]
		private uint[] m_Array;

		[Token(Token = "0x40005B4")]
		[FieldOffset(Offset = "0x8")]
		private int m_Count;

		[Token(Token = "0x17000164")]
		public int Capacity
		{
			[Token(Token = "0x60005D3")]
			[Address(RVA = "0x4C94090", Offset = "0x4C94090", VA = "0x4C94090")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000165")]
		public int Count
		{
			[Token(Token = "0x60005D4")]
			[Address(RVA = "0x4C940B0", Offset = "0x4C940B0", VA = "0x4C940B0")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005D5")]
			[Address(RVA = "0x4C940C0", Offset = "0x4C940C0", VA = "0x4C940C0")]
			set
			{
			}
		}

		[Token(Token = "0x17000166")]
		public uint this[int index]
		{
			[Token(Token = "0x60005D6")]
			[Address(RVA = "0x4C940D0", Offset = "0x4C940D0", VA = "0x4C940D0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x60005D7")]
			[Address(RVA = "0x4C94100", Offset = "0x4C94100", VA = "0x4C94100")]
			set
			{
			}
		}

		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x4C941D0", Offset = "0x4C941D0", VA = "0x4C941D0")]
		public TextBackingContainer(int size)
		{
		}

		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x4C94180", Offset = "0x4C94180", VA = "0x4C94180")]
		public void Resize(int size)
		{
		}
	}

	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	[TextArea(5, 10)]
	protected string m_text;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0xE0")]
	private bool m_IsTextBackingStringDirty;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	protected ITextPreprocessor m_TextPreprocessor;

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	protected bool m_isRightToLeft;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	protected TMP_FontAsset m_fontAsset;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x100")]
	protected TMP_FontAsset m_currentFontAsset;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x108")]
	protected bool m_isSDFShader;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	protected Material m_sharedMaterial;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x118")]
	protected Material m_currentMaterial;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x0")]
	protected static MaterialReference[] m_materialReferences;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x8")]
	protected static Dictionary<int, int> m_materialReferenceIndexLookup;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x10")]
	protected static TMP_TextProcessingStack<MaterialReference> m_materialReferenceStack;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x120")]
	protected int m_currentMaterialIndex;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	protected Material[] m_fontSharedMaterials;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x130")]
	[SerializeField]
	protected Material m_fontMaterial;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	protected Material[] m_fontMaterials;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0x140")]
	protected bool m_isMaterialDirty;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x144")]
	[SerializeField]
	protected Color32 m_fontColor32;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	protected Color m_fontColor;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x68")]
	protected static Color32 s_colorWhite;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x158")]
	protected Color32 m_underlineColor;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x15C")]
	protected Color32 m_strikethroughColor;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x160")]
	[SerializeField]
	protected bool m_enableVertexGradient;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x164")]
	[SerializeField]
	protected ColorMode m_colorMode;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x168")]
	[SerializeField]
	protected VertexGradient m_fontColorGradient;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x1A8")]
	[SerializeField]
	protected TMP_ColorGradient m_fontColorGradientPreset;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x1B0")]
	[SerializeField]
	protected TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x1B8")]
	[SerializeField]
	protected bool m_tintAllSprites;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x1B9")]
	protected bool m_tintSprite;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x1BC")]
	protected Color32 m_spriteColor;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x1C0")]
	[SerializeField]
	protected TMP_StyleSheet m_StyleSheet;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x1C8")]
	internal TMP_Style m_TextStyle;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x1D0")]
	[SerializeField]
	protected int m_TextStyleHashCode;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x1D4")]
	[SerializeField]
	protected bool m_overrideHtmlColors;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x1D8")]
	[SerializeField]
	protected Color32 m_faceColor;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x1DC")]
	protected Color32 m_outlineColor;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x1E0")]
	protected float m_outlineWidth;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x1E4")]
	[SerializeField]
	protected float m_fontSize;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x1E8")]
	protected float m_currentFontSize;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x1EC")]
	[SerializeField]
	protected float m_fontSizeBase;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x1F0")]
	protected TMP_TextProcessingStack<float> m_sizeStack;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x210")]
	[SerializeField]
	protected FontWeight m_fontWeight;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x214")]
	protected FontWeight m_FontWeightInternal;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x218")]
	protected TMP_TextProcessingStack<FontWeight> m_FontWeightStack;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x238")]
	[SerializeField]
	protected bool m_enableAutoSizing;

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x23C")]
	protected float m_maxFontSize;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x240")]
	protected float m_minFontSize;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x244")]
	protected int m_AutoSizeIterationCount;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x248")]
	protected int m_AutoSizeMaxIterationCount;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x24C")]
	protected bool m_IsAutoSizePointSizeSet;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x250")]
	[SerializeField]
	protected float m_fontSizeMin;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x254")]
	[SerializeField]
	protected float m_fontSizeMax;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x258")]
	[SerializeField]
	protected FontStyles m_fontStyle;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x25C")]
	protected FontStyles m_FontStyleInternal;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x260")]
	protected TMP_FontStyleStack m_fontStyleStack;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x26A")]
	protected bool m_isUsingBold;

	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x26C")]
	[SerializeField]
	protected HorizontalAlignmentOptions m_HorizontalAlignment;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x270")]
	[SerializeField]
	protected VerticalAlignmentOptions m_VerticalAlignment;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x274")]
	[SerializeField]
	[FormerlySerializedAs("m_lineJustification")]
	protected TextAlignmentOptions m_textAlignment;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x278")]
	protected HorizontalAlignmentOptions m_lineJustification;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x280")]
	protected TMP_TextProcessingStack<HorizontalAlignmentOptions> m_lineJustificationStack;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x2A0")]
	protected Vector3[] m_textContainerLocalCorners;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x2A8")]
	[SerializeField]
	protected float m_characterSpacing;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x2AC")]
	protected float m_cSpacing;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x2B0")]
	protected float m_monoSpacing;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x2B4")]
	[SerializeField]
	protected float m_wordSpacing;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x2B8")]
	[SerializeField]
	protected float m_lineSpacing;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x2BC")]
	protected float m_lineSpacingDelta;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x2C0")]
	protected float m_lineHeight;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x2C4")]
	protected bool m_IsDrivenLineSpacing;

	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x2C8")]
	[SerializeField]
	protected float m_lineSpacingMax;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x2CC")]
	[SerializeField]
	protected float m_paragraphSpacing;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x2D0")]
	[SerializeField]
	protected float m_charWidthMaxAdj;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x2D4")]
	protected float m_charWidthAdjDelta;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x2D8")]
	[SerializeField]
	protected bool m_enableWordWrapping;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x2D9")]
	protected bool m_isCharacterWrappingEnabled;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x2DA")]
	protected bool m_isNonBreakingSpace;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x2DB")]
	protected bool m_isIgnoringAlignment;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x2DC")]
	[SerializeField]
	protected float m_wordWrappingRatios;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x2E0")]
	[SerializeField]
	protected TextOverflowModes m_overflowMode;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x2E4")]
	protected int m_firstOverflowCharacterIndex;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x2E8")]
	[SerializeField]
	protected TMP_Text m_linkedTextComponent;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x2F0")]
	[SerializeField]
	internal TMP_Text parentLinkedComponent;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x2F8")]
	protected bool m_isTextTruncated;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x2F9")]
	[SerializeField]
	protected bool m_enableKerning;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x2FC")]
	protected float m_GlyphHorizontalAdvanceAdjustment;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x300")]
	[SerializeField]
	protected bool m_enableExtraPadding;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x301")]
	[SerializeField]
	protected bool checkPaddingRequired;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x302")]
	[SerializeField]
	protected bool m_isRichText;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x303")]
	[SerializeField]
	protected bool m_parseCtrlCharacters;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x304")]
	protected bool m_isOverlay;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x305")]
	[SerializeField]
	protected bool m_isOrthographic;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x306")]
	[SerializeField]
	protected bool m_isCullingEnabled;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x307")]
	protected bool m_isMaskingEnabled;

	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x308")]
	protected bool isMaskUpdateRequired;

	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x309")]
	protected bool m_ignoreCulling;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x30C")]
	[SerializeField]
	protected TextureMappingOptions m_horizontalMapping;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x310")]
	[SerializeField]
	protected TextureMappingOptions m_verticalMapping;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x314")]
	[SerializeField]
	protected float m_uvLineOffset;

	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x318")]
	protected TextRenderFlags m_renderMode;

	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x31C")]
	[SerializeField]
	protected VertexSortingOrder m_geometrySortingOrder;

	[Token(Token = "0x4000525")]
	[FieldOffset(Offset = "0x320")]
	[SerializeField]
	protected bool m_IsTextObjectScaleStatic;

	[Token(Token = "0x4000526")]
	[FieldOffset(Offset = "0x321")]
	[SerializeField]
	protected bool m_VertexBufferAutoSizeReduction;

	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0x324")]
	protected int m_firstVisibleCharacter;

	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0x328")]
	protected int m_maxVisibleCharacters;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x32C")]
	protected int m_maxVisibleWords;

	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0x330")]
	protected int m_maxVisibleLines;

	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x334")]
	[SerializeField]
	protected bool m_useMaxVisibleDescender;

	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x338")]
	[SerializeField]
	protected int m_pageToDisplay;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0x33C")]
	protected bool m_isNewPage;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0x340")]
	[SerializeField]
	protected Vector4 m_margin;

	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0x350")]
	protected float m_marginLeft;

	[Token(Token = "0x4000530")]
	[FieldOffset(Offset = "0x354")]
	protected float m_marginRight;

	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0x358")]
	protected float m_marginWidth;

	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x35C")]
	protected float m_marginHeight;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x360")]
	protected float m_width;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0x368")]
	protected TMP_TextInfo m_textInfo;

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x370")]
	protected bool m_havePropertiesChanged;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x371")]
	[SerializeField]
	protected bool m_isUsingLegacyAnimationComponent;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x378")]
	protected Transform m_transform;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x380")]
	protected RectTransform m_rectTransform;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x388")]
	protected Vector2 m_PreviousRectTransformSize;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x390")]
	protected Vector2 m_PreviousPivotPosition;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x399")]
	protected bool m_autoSizeTextContainer;

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x3A0")]
	protected Mesh m_mesh;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0x3A8")]
	[SerializeField]
	protected bool m_isVolumetricText;

	[Token(Token = "0x4000542")]
	[FieldOffset(Offset = "0x3B8")]
	protected TMP_SpriteAnimator m_spriteAnimator;

	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x3C0")]
	protected float m_flexibleHeight;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x3C4")]
	protected float m_flexibleWidth;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x3C8")]
	protected float m_minWidth;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x3CC")]
	protected float m_minHeight;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x3D0")]
	protected float m_maxWidth;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x3D4")]
	protected float m_maxHeight;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0x3D8")]
	protected LayoutElement m_LayoutElement;

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x3E0")]
	protected float m_preferredWidth;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x3E4")]
	protected float m_renderedWidth;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x3E8")]
	protected bool m_isPreferredWidthDirty;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x3EC")]
	protected float m_preferredHeight;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x3F0")]
	protected float m_renderedHeight;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x3F4")]
	protected bool m_isPreferredHeightDirty;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x3F5")]
	protected bool m_isCalculatingPreferredValues;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x3F8")]
	protected int m_layoutPriority;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x3FC")]
	protected bool m_isLayoutDirty;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x3FD")]
	protected bool m_isAwake;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x3FE")]
	internal bool m_isWaitingOnResourceLoad;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x400")]
	internal TextInputSources m_inputSource;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x404")]
	protected float m_fontScaleMultiplier;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x80")]
	private static char[] m_htmlTag;

	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0x88")]
	private static RichTextTagAttribute[] m_xmlAttribute;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x90")]
	private static float[] m_attributeParameterValues;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x408")]
	protected float tag_LineIndent;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0x40C")]
	protected float tag_Indent;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0x410")]
	protected TMP_TextProcessingStack<float> m_indentStack;

	[Token(Token = "0x400055D")]
	[FieldOffset(Offset = "0x430")]
	protected bool tag_NoParsing;

	[Token(Token = "0x400055E")]
	[FieldOffset(Offset = "0x431")]
	protected bool m_isParsingText;

	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0x434")]
	protected Matrix4x4 m_FXMatrix;

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x474")]
	protected bool m_isFXMatrixSet;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x478")]
	internal UnicodeChar[] m_TextProcessingArray;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x480")]
	internal int m_InternalTextProcessingArraySize;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x488")]
	private TMP_CharacterInfo[] m_internalCharacterInfo;

	[Token(Token = "0x4000564")]
	[FieldOffset(Offset = "0x490")]
	protected int m_totalCharacterCount;

	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x98")]
	protected static WordWrapState m_SavedWordWrapState;

	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x410")]
	protected static WordWrapState m_SavedLineState;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x788")]
	protected static WordWrapState m_SavedEllipsisState;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0xB00")]
	protected static WordWrapState m_SavedLastValidState;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0xE78")]
	protected static WordWrapState m_SavedSoftLineBreakState;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x11F0")]
	internal static TMP_TextProcessingStack<WordWrapState> m_EllipsisInsertionCandidateStack;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x494")]
	protected int m_characterCount;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x498")]
	protected int m_firstCharacterOfLine;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x49C")]
	protected int m_firstVisibleCharacterOfLine;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x4A0")]
	protected int m_lastCharacterOfLine;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x4A4")]
	protected int m_lastVisibleCharacterOfLine;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x4A8")]
	protected int m_lineNumber;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x4AC")]
	protected int m_lineVisibleCharacterCount;

	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0x4B0")]
	protected int m_pageNumber;

	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0x4B4")]
	protected float m_PageAscender;

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0x4B8")]
	protected float m_maxTextAscender;

	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0x4BC")]
	protected float m_maxCapHeight;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x4C0")]
	protected float m_ElementAscender;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0x4C4")]
	protected float m_ElementDescender;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0x4C8")]
	protected float m_maxLineAscender;

	[Token(Token = "0x4000579")]
	[FieldOffset(Offset = "0x4CC")]
	protected float m_maxLineDescender;

	[Token(Token = "0x400057A")]
	[FieldOffset(Offset = "0x4D0")]
	protected float m_startOfLineAscender;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x4D4")]
	protected float m_startOfLineDescender;

	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0x4D8")]
	protected float m_lineOffset;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0x4DC")]
	protected Extents m_meshExtents;

	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0x4EC")]
	protected Color32 m_htmlColor;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x4F0")]
	protected TMP_TextProcessingStack<Color32> m_colorStack;

	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x510")]
	protected TMP_TextProcessingStack<Color32> m_underlineColorStack;

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x530")]
	protected TMP_TextProcessingStack<Color32> m_strikethroughColorStack;

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x550")]
	protected TMP_TextProcessingStack<HighlightState> m_HighlightStateStack;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x580")]
	protected TMP_ColorGradient m_colorGradientPreset;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x588")]
	protected TMP_TextProcessingStack<TMP_ColorGradient> m_colorGradientStack;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x5B0")]
	protected bool m_colorGradientPresetIsTinted;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x5B4")]
	protected float m_tabSpacing;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x5B8")]
	protected float m_spacing;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x5C0")]
	protected TMP_TextProcessingStack<int>[] m_TextStyleStacks;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x5C8")]
	protected int m_TextStyleStackDepth;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x5D0")]
	protected TMP_TextProcessingStack<int> m_ItalicAngleStack;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x5F0")]
	protected int m_ItalicAngle;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x5F8")]
	protected TMP_TextProcessingStack<int> m_actionStack;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x618")]
	protected float m_padding;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x61C")]
	protected float m_baselineOffset;

	[Token(Token = "0x400058F")]
	[FieldOffset(Offset = "0x620")]
	protected TMP_TextProcessingStack<float> m_baselineOffsetStack;

	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0x640")]
	protected float m_xAdvance;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x644")]
	protected TMP_TextElementType m_textElementType;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x648")]
	protected TMP_TextElement m_cached_TextElement;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x650")]
	protected SpecialCharacter m_Ellipsis;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x670")]
	protected SpecialCharacter m_Underline;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x690")]
	protected TMP_SpriteAsset m_defaultSpriteAsset;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x698")]
	protected TMP_SpriteAsset m_currentSpriteAsset;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x6A0")]
	protected int m_spriteCount;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x6A4")]
	protected int m_spriteIndex;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x6A8")]
	protected int m_spriteAnimationID;

	[Token(Token = "0x400059A")]
	[FieldOffset(Offset = "0x1588")]
	private static ProfilerMarker k_ParseTextMarker;

	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x1590")]
	private static ProfilerMarker k_InsertNewLineMarker;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x6AC")]
	protected bool m_ignoreActiveState;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x6B0")]
	private TextBackingContainer m_TextBackingArray;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x6C0")]
	private readonly decimal[] k_Power;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x1598")]
	protected static Vector2 k_LargePositiveVector2;

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x15A0")]
	protected static Vector2 k_LargeNegativeVector2;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x15A8")]
	protected static float k_LargePositiveFloat;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x15AC")]
	protected static float k_LargeNegativeFloat;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x15B0")]
	protected static int k_LargePositiveInt;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x15B4")]
	protected static int k_LargeNegativeInt;

	[Token(Token = "0x1700010A")]
	public virtual string text
	{
		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x4C68610", Offset = "0x4C68610", VA = "0x4C68610", Slot = "65")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A6")]
		[Address(RVA = "0x4C68710", Offset = "0x4C68710", VA = "0x4C68710", Slot = "66")]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public ITextPreprocessor textPreprocessor
	{
		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x4C687C0", Offset = "0x4C687C0", VA = "0x4C687C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x4C687D0", Offset = "0x4C687D0", VA = "0x4C687D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public bool isRightToLeftText
	{
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x4C687F0", Offset = "0x4C687F0", VA = "0x4C687F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AA")]
		[Address(RVA = "0x4C68800", Offset = "0x4C68800", VA = "0x4C68800")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public TMP_FontAsset font
	{
		[Token(Token = "0x60004AB")]
		[Address(RVA = "0x4C68850", Offset = "0x4C68850", VA = "0x4C68850")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004AC")]
		[Address(RVA = "0x4C68860", Offset = "0x4C68860", VA = "0x4C68860")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	public virtual Material fontSharedMaterial
	{
		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x4C68920", Offset = "0x4C68920", VA = "0x4C68920", Slot = "67")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004AE")]
		[Address(RVA = "0x4C68930", Offset = "0x4C68930", VA = "0x4C68930", Slot = "68")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	public virtual Material[] fontSharedMaterials
	{
		[Token(Token = "0x60004AF")]
		[Address(RVA = "0x4C689E0", Offset = "0x4C689E0", VA = "0x4C689E0", Slot = "69")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x4C68A00", Offset = "0x4C68A00", VA = "0x4C68A00", Slot = "70")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public Material fontMaterial
	{
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x4C68A50", Offset = "0x4C68A50", VA = "0x4C68A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x4C68A70", Offset = "0x4C68A70", VA = "0x4C68A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public virtual Material[] fontMaterials
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x4C68B70", Offset = "0x4C68B70", VA = "0x4C68B70", Slot = "71")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x4C68B90", Offset = "0x4C68B90", VA = "0x4C68B90", Slot = "72")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public override Color color
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x4C68BE0", Offset = "0x4C68BE0", VA = "0x4C68BE0", Slot = "22")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x4C68C00", Offset = "0x4C68C00", VA = "0x4C68C00", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public float alpha
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x4C68C70", Offset = "0x4C68C70", VA = "0x4C68C70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x4C68C80", Offset = "0x4C68C80", VA = "0x4C68C80")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public bool enableVertexGradient
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x4C68CC0", Offset = "0x4C68CC0", VA = "0x4C68CC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x4C68CD0", Offset = "0x4C68CD0", VA = "0x4C68CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public VertexGradient colorGradient
	{
		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x4C68D00", Offset = "0x4C68D00", VA = "0x4C68D00")]
		get
		{
			return default(VertexGradient);
		}
		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x4C68D30", Offset = "0x4C68D30", VA = "0x4C68D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public TMP_ColorGradient colorGradientPreset
	{
		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x4C68D80", Offset = "0x4C68D80", VA = "0x4C68D80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x4C68D90", Offset = "0x4C68D90", VA = "0x4C68D90")]
		set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x4C68DD0", Offset = "0x4C68DD0", VA = "0x4C68DD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x4C68DE0", Offset = "0x4C68DE0", VA = "0x4C68DE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	public bool tintAllSprites
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x4C68E30", Offset = "0x4C68E30", VA = "0x4C68E30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x4C68E40", Offset = "0x4C68E40", VA = "0x4C68E40")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public TMP_StyleSheet styleSheet
	{
		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x4C68E70", Offset = "0x4C68E70", VA = "0x4C68E70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x4C68E80", Offset = "0x4C68E80", VA = "0x4C68E80")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public TMP_Style textStyle
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x4C68ED0", Offset = "0x4C68ED0", VA = "0x4C68ED0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x4C69030", Offset = "0x4C69030", VA = "0x4C69030")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public bool overrideColorTags
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x4C690A0", Offset = "0x4C690A0", VA = "0x4C690A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x4C690B0", Offset = "0x4C690B0", VA = "0x4C690B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public Color32 faceColor
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x4C690E0", Offset = "0x4C690E0", VA = "0x4C690E0")]
		get
		{
			return default(Color32);
		}
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x4C691A0", Offset = "0x4C691A0", VA = "0x4C691A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	public Color32 outlineColor
	{
		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x4C69220", Offset = "0x4C69220", VA = "0x4C69220")]
		get
		{
			return default(Color32);
		}
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x4C692E0", Offset = "0x4C692E0", VA = "0x4C692E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	public float outlineWidth
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x4C69340", Offset = "0x4C69340", VA = "0x4C69340")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x4C69400", Offset = "0x4C69400", VA = "0x4C69400")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public float fontSize
	{
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x4C69470", Offset = "0x4C69470", VA = "0x4C69470")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x4C69480", Offset = "0x4C69480", VA = "0x4C69480")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public FontWeight fontWeight
	{
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x4C694E0", Offset = "0x4C694E0", VA = "0x4C694E0")]
		get
		{
			return default(FontWeight);
		}
		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x4C694F0", Offset = "0x4C694F0", VA = "0x4C694F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x4C69540", Offset = "0x4C69540", VA = "0x4C69540")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000122")]
	public bool enableAutoSizing
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x4C69750", Offset = "0x4C69750", VA = "0x4C69750")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x4C69760", Offset = "0x4C69760", VA = "0x4C69760")]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public float fontSizeMin
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x4C697A0", Offset = "0x4C697A0", VA = "0x4C697A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x4C697B0", Offset = "0x4C697B0", VA = "0x4C697B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public float fontSizeMax
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x4C69800", Offset = "0x4C69800", VA = "0x4C69800")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x4C69810", Offset = "0x4C69810", VA = "0x4C69810")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public FontStyles fontStyle
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x4C69860", Offset = "0x4C69860", VA = "0x4C69860")]
		get
		{
			return default(FontStyles);
		}
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x4C69870", Offset = "0x4C69870", VA = "0x4C69870")]
		set
		{
		}
	}

	[Token(Token = "0x17000126")]
	public bool isUsingBold
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x4C698C0", Offset = "0x4C698C0", VA = "0x4C698C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000127")]
	public HorizontalAlignmentOptions horizontalAlignment
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x4C698D0", Offset = "0x4C698D0", VA = "0x4C698D0")]
		get
		{
			return default(HorizontalAlignmentOptions);
		}
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x4C698E0", Offset = "0x4C698E0", VA = "0x4C698E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public VerticalAlignmentOptions verticalAlignment
	{
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x4C69910", Offset = "0x4C69910", VA = "0x4C69910")]
		get
		{
			return default(VerticalAlignmentOptions);
		}
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x4C69920", Offset = "0x4C69920", VA = "0x4C69920")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x4C69950", Offset = "0x4C69950", VA = "0x4C69950")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x4C69960", Offset = "0x4C69960", VA = "0x4C69960")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public float characterSpacing
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x4C699B0", Offset = "0x4C699B0", VA = "0x4C699B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x4C699C0", Offset = "0x4C699C0", VA = "0x4C699C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public float wordSpacing
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x4C69A10", Offset = "0x4C69A10", VA = "0x4C69A10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x4C69A20", Offset = "0x4C69A20", VA = "0x4C69A20")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public float lineSpacing
	{
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x4C69A70", Offset = "0x4C69A70", VA = "0x4C69A70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x4C69A80", Offset = "0x4C69A80", VA = "0x4C69A80")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	public float lineSpacingAdjustment
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x4C69AD0", Offset = "0x4C69AD0", VA = "0x4C69AD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x4C69AE0", Offset = "0x4C69AE0", VA = "0x4C69AE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public float paragraphSpacing
	{
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x4C69B30", Offset = "0x4C69B30", VA = "0x4C69B30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x4C69B40", Offset = "0x4C69B40", VA = "0x4C69B40")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public float characterWidthAdjustment
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x4C69B90", Offset = "0x4C69B90", VA = "0x4C69B90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x4C69BA0", Offset = "0x4C69BA0", VA = "0x4C69BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public bool enableWordWrapping
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x4C69BF0", Offset = "0x4C69BF0", VA = "0x4C69BF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004F0")]
		[Address(RVA = "0x4C69C00", Offset = "0x4C69C00", VA = "0x4C69C00")]
		set
		{
		}
	}

	[Token(Token = "0x17000131")]
	public float wordWrappingRatios
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x4C69C50", Offset = "0x4C69C50", VA = "0x4C69C50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004F2")]
		[Address(RVA = "0x4C69C60", Offset = "0x4C69C60", VA = "0x4C69C60")]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public TextOverflowModes overflowMode
	{
		[Token(Token = "0x60004F3")]
		[Address(RVA = "0x4C69CB0", Offset = "0x4C69CB0", VA = "0x4C69CB0")]
		get
		{
			return default(TextOverflowModes);
		}
		[Token(Token = "0x60004F4")]
		[Address(RVA = "0x4C69CC0", Offset = "0x4C69CC0", VA = "0x4C69CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public bool isTextOverflowing
	{
		[Token(Token = "0x60004F5")]
		[Address(RVA = "0x4C69D10", Offset = "0x4C69D10", VA = "0x4C69D10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000134")]
	public int firstOverflowCharacterIndex
	{
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x4C69D20", Offset = "0x4C69D20", VA = "0x4C69D20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000135")]
	public TMP_Text linkedTextComponent
	{
		[Token(Token = "0x60004F7")]
		[Address(RVA = "0x4C69D30", Offset = "0x4C69D30", VA = "0x4C69D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x4C69D40", Offset = "0x4C69D40", VA = "0x4C69D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public bool isTextTruncated
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x4C6A050", Offset = "0x4C6A050", VA = "0x4C6A050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public bool enableKerning
	{
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x4C6A060", Offset = "0x4C6A060", VA = "0x4C6A060")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x4C6A070", Offset = "0x4C6A070", VA = "0x4C6A070")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	public bool extraPadding
	{
		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x4C6A0C0", Offset = "0x4C6A0C0", VA = "0x4C6A0C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004FD")]
		[Address(RVA = "0x4C6A0D0", Offset = "0x4C6A0D0", VA = "0x4C6A0D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public bool richText
	{
		[Token(Token = "0x60004FE")]
		[Address(RVA = "0x4C6A120", Offset = "0x4C6A120", VA = "0x4C6A120")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004FF")]
		[Address(RVA = "0x4C6A130", Offset = "0x4C6A130", VA = "0x4C6A130")]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	public bool parseCtrlCharacters
	{
		[Token(Token = "0x6000500")]
		[Address(RVA = "0x4C6A180", Offset = "0x4C6A180", VA = "0x4C6A180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000501")]
		[Address(RVA = "0x4C6A190", Offset = "0x4C6A190", VA = "0x4C6A190")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public bool isOverlay
	{
		[Token(Token = "0x6000502")]
		[Address(RVA = "0x4C6A1E0", Offset = "0x4C6A1E0", VA = "0x4C6A1E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000503")]
		[Address(RVA = "0x4C6A1F0", Offset = "0x4C6A1F0", VA = "0x4C6A1F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public bool isOrthographic
	{
		[Token(Token = "0x6000504")]
		[Address(RVA = "0x4C6A240", Offset = "0x4C6A240", VA = "0x4C6A240")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000505")]
		[Address(RVA = "0x4C6A250", Offset = "0x4C6A250", VA = "0x4C6A250")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public bool enableCulling
	{
		[Token(Token = "0x6000506")]
		[Address(RVA = "0x4C6A280", Offset = "0x4C6A280", VA = "0x4C6A280")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000507")]
		[Address(RVA = "0x4C6A290", Offset = "0x4C6A290", VA = "0x4C6A290")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public bool ignoreVisibility
	{
		[Token(Token = "0x6000508")]
		[Address(RVA = "0x4C6A2C0", Offset = "0x4C6A2C0", VA = "0x4C6A2C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000509")]
		[Address(RVA = "0x4C6A2D0", Offset = "0x4C6A2D0", VA = "0x4C6A2D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public TextureMappingOptions horizontalMapping
	{
		[Token(Token = "0x600050A")]
		[Address(RVA = "0x4C6A2F0", Offset = "0x4C6A2F0", VA = "0x4C6A2F0")]
		get
		{
			return default(TextureMappingOptions);
		}
		[Token(Token = "0x600050B")]
		[Address(RVA = "0x4C6A300", Offset = "0x4C6A300", VA = "0x4C6A300")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public TextureMappingOptions verticalMapping
	{
		[Token(Token = "0x600050C")]
		[Address(RVA = "0x4C6A330", Offset = "0x4C6A330", VA = "0x4C6A330")]
		get
		{
			return default(TextureMappingOptions);
		}
		[Token(Token = "0x600050D")]
		[Address(RVA = "0x4C6A340", Offset = "0x4C6A340", VA = "0x4C6A340")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public float mappingUvLineOffset
	{
		[Token(Token = "0x600050E")]
		[Address(RVA = "0x4C6A370", Offset = "0x4C6A370", VA = "0x4C6A370")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600050F")]
		[Address(RVA = "0x4C6A380", Offset = "0x4C6A380", VA = "0x4C6A380")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public TextRenderFlags renderMode
	{
		[Token(Token = "0x6000510")]
		[Address(RVA = "0x4C6A3C0", Offset = "0x4C6A3C0", VA = "0x4C6A3C0")]
		get
		{
			return default(TextRenderFlags);
		}
		[Token(Token = "0x6000511")]
		[Address(RVA = "0x4C6A3D0", Offset = "0x4C6A3D0", VA = "0x4C6A3D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public VertexSortingOrder geometrySortingOrder
	{
		[Token(Token = "0x6000512")]
		[Address(RVA = "0x4C6A3F0", Offset = "0x4C6A3F0", VA = "0x4C6A3F0")]
		get
		{
			return default(VertexSortingOrder);
		}
		[Token(Token = "0x6000513")]
		[Address(RVA = "0x4C6A400", Offset = "0x4C6A400", VA = "0x4C6A400")]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public bool isTextObjectScaleStatic
	{
		[Token(Token = "0x6000514")]
		[Address(RVA = "0x4C6A420", Offset = "0x4C6A420", VA = "0x4C6A420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000515")]
		[Address(RVA = "0x4C6A430", Offset = "0x4C6A430", VA = "0x4C6A430")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public bool vertexBufferAutoSizeReduction
	{
		[Token(Token = "0x6000516")]
		[Address(RVA = "0x4C6A490", Offset = "0x4C6A490", VA = "0x4C6A490")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000517")]
		[Address(RVA = "0x4C6A4A0", Offset = "0x4C6A4A0", VA = "0x4C6A4A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public int firstVisibleCharacter
	{
		[Token(Token = "0x6000518")]
		[Address(RVA = "0x4C6A4D0", Offset = "0x4C6A4D0", VA = "0x4C6A4D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000519")]
		[Address(RVA = "0x4C6A4E0", Offset = "0x4C6A4E0", VA = "0x4C6A4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public int maxVisibleCharacters
	{
		[Token(Token = "0x600051A")]
		[Address(RVA = "0x4C6A510", Offset = "0x4C6A510", VA = "0x4C6A510")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600051B")]
		[Address(RVA = "0x4C6A520", Offset = "0x4C6A520", VA = "0x4C6A520")]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public int maxVisibleWords
	{
		[Token(Token = "0x600051C")]
		[Address(RVA = "0x4C6A550", Offset = "0x4C6A550", VA = "0x4C6A550")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600051D")]
		[Address(RVA = "0x4C6A560", Offset = "0x4C6A560", VA = "0x4C6A560")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public int maxVisibleLines
	{
		[Token(Token = "0x600051E")]
		[Address(RVA = "0x4C6A590", Offset = "0x4C6A590", VA = "0x4C6A590")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600051F")]
		[Address(RVA = "0x4C6A5A0", Offset = "0x4C6A5A0", VA = "0x4C6A5A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public bool useMaxVisibleDescender
	{
		[Token(Token = "0x6000520")]
		[Address(RVA = "0x4C6A5D0", Offset = "0x4C6A5D0", VA = "0x4C6A5D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000521")]
		[Address(RVA = "0x4C6A5E0", Offset = "0x4C6A5E0", VA = "0x4C6A5E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public int pageToDisplay
	{
		[Token(Token = "0x6000522")]
		[Address(RVA = "0x4C6A610", Offset = "0x4C6A610", VA = "0x4C6A610")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000523")]
		[Address(RVA = "0x4C6A620", Offset = "0x4C6A620", VA = "0x4C6A620")]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public virtual Vector4 margin
	{
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x4C6A650", Offset = "0x4C6A650", VA = "0x4C6A650", Slot = "73")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x6000525")]
		[Address(RVA = "0x4C6A670", Offset = "0x4C6A670", VA = "0x4C6A670", Slot = "74")]
		set
		{
		}
	}

	[Token(Token = "0x1700014D")]
	public TMP_TextInfo textInfo
	{
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x4C6A6F0", Offset = "0x4C6A6F0", VA = "0x4C6A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014E")]
	public bool havePropertiesChanged
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x4C6A700", Offset = "0x4C6A700", VA = "0x4C6A700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000528")]
		[Address(RVA = "0x4C6A710", Offset = "0x4C6A710", VA = "0x4C6A710")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public bool isUsingLegacyAnimationComponent
	{
		[Token(Token = "0x6000529")]
		[Address(RVA = "0x4C6A740", Offset = "0x4C6A740", VA = "0x4C6A740")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600052A")]
		[Address(RVA = "0x4C6A750", Offset = "0x4C6A750", VA = "0x4C6A750")]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public new Transform transform
	{
		[Token(Token = "0x600052B")]
		[Address(RVA = "0x4C6A760", Offset = "0x4C6A760", VA = "0x4C6A760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000151")]
	public new RectTransform rectTransform
	{
		[Token(Token = "0x600052C")]
		[Address(RVA = "0x4C6A800", Offset = "0x4C6A800", VA = "0x4C6A800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public virtual bool autoSizeTextContainer
	{
		[Token(Token = "0x600052D")]
		[Address(RVA = "0x4C6A8A0", Offset = "0x4C6A8A0", VA = "0x4C6A8A0", Slot = "75")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600052E")]
		[Address(RVA = "0x4C6A8B0", Offset = "0x4C6A8B0", VA = "0x4C6A8B0", Slot = "76")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public virtual Mesh mesh
	{
		[Token(Token = "0x600052F")]
		[Address(RVA = "0x4C6A8C0", Offset = "0x4C6A8C0", VA = "0x4C6A8C0", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000154")]
	public bool isVolumetricText
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x4C6A8D0", Offset = "0x4C6A8D0", VA = "0x4C6A8D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000531")]
		[Address(RVA = "0x4C6A8E0", Offset = "0x4C6A8E0", VA = "0x4C6A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public Bounds bounds
	{
		[Token(Token = "0x6000532")]
		[Address(RVA = "0x4C6A940", Offset = "0x4C6A940", VA = "0x4C6A940")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x17000156")]
	public Bounds textBounds
	{
		[Token(Token = "0x6000533")]
		[Address(RVA = "0x4C6A9F0", Offset = "0x4C6A9F0", VA = "0x4C6A9F0")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x17000157")]
	protected TMP_SpriteAnimator spriteAnimator
	{
		[Token(Token = "0x600053A")]
		[Address(RVA = "0x4C6B180", Offset = "0x4C6B180", VA = "0x4C6B180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000158")]
	public float flexibleHeight
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x4C6B290", Offset = "0x4C6B290", VA = "0x4C6B290", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000159")]
	public float flexibleWidth
	{
		[Token(Token = "0x600053C")]
		[Address(RVA = "0x4C6B2A0", Offset = "0x4C6B2A0", VA = "0x4C6B2A0", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700015A")]
	public float minWidth
	{
		[Token(Token = "0x600053D")]
		[Address(RVA = "0x4C6B2B0", Offset = "0x4C6B2B0", VA = "0x4C6B2B0", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700015B")]
	public float minHeight
	{
		[Token(Token = "0x600053E")]
		[Address(RVA = "0x4C6B2C0", Offset = "0x4C6B2C0", VA = "0x4C6B2C0", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700015C")]
	public float maxWidth
	{
		[Token(Token = "0x600053F")]
		[Address(RVA = "0x4C6B2D0", Offset = "0x4C6B2D0", VA = "0x4C6B2D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700015D")]
	public float maxHeight
	{
		[Token(Token = "0x6000540")]
		[Address(RVA = "0x4C6B2E0", Offset = "0x4C6B2E0", VA = "0x4C6B2E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700015E")]
	protected LayoutElement layoutElement
	{
		[Token(Token = "0x6000541")]
		[Address(RVA = "0x4C6B2F0", Offset = "0x4C6B2F0", VA = "0x4C6B2F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000542")]
		[Address(RVA = "0x4C6B390", Offset = "0x4C6B390", VA = "0x4C6B390", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000160")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x6000543")]
		[Address(RVA = "0x4C6B510", Offset = "0x4C6B510", VA = "0x4C6B510", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000161")]
	public virtual float renderedWidth
	{
		[Token(Token = "0x6000544")]
		[Address(RVA = "0x4C6B720", Offset = "0x4C6B720", VA = "0x4C6B720", Slot = "86")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000162")]
	public virtual float renderedHeight
	{
		[Token(Token = "0x6000545")]
		[Address(RVA = "0x4C6B760", Offset = "0x4C6B760", VA = "0x4C6B760", Slot = "87")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000163")]
	public int layoutPriority
	{
		[Token(Token = "0x6000546")]
		[Address(RVA = "0x4C6B7C0", Offset = "0x4C6B7C0", VA = "0x4C6B7C0", Slot = "88")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000003")]
	public static event Func<int, string, TMP_FontAsset> OnFontAssetRequest
	{
		[Token(Token = "0x6000534")]
		[Address(RVA = "0x4C6AC20", Offset = "0x4C6AC20", VA = "0x4C6AC20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000535")]
		[Address(RVA = "0x4C6AD20", Offset = "0x4C6AD20", VA = "0x4C6AD20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public static event Func<int, string, TMP_SpriteAsset> OnSpriteAssetRequest
	{
		[Token(Token = "0x6000536")]
		[Address(RVA = "0x4C6AE20", Offset = "0x4C6AE20", VA = "0x4C6AE20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x4C6AF20", Offset = "0x4C6AF20", VA = "0x4C6AF20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public virtual event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x6000538")]
		[Address(RVA = "0x4C6B020", Offset = "0x4C6B020", VA = "0x4C6B020", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x4C6B0D0", Offset = "0x4C6B0D0", VA = "0x4C6B0D0", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4C6B7D0", Offset = "0x4C6B7D0", VA = "0x4C6B7D0", Slot = "89")]
	protected virtual void LoadFontAsset()
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4C6B7E0", Offset = "0x4C6B7E0", VA = "0x4C6B7E0", Slot = "90")]
	protected virtual void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4C6B7F0", Offset = "0x4C6B7F0", VA = "0x4C6B7F0", Slot = "91")]
	protected virtual Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4C6B800", Offset = "0x4C6B800", VA = "0x4C6B800", Slot = "92")]
	protected virtual void SetFontBaseMaterial(Material mat)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4C6B810", Offset = "0x4C6B810", VA = "0x4C6B810", Slot = "93")]
	protected virtual Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x4C6B820", Offset = "0x4C6B820", VA = "0x4C6B820", Slot = "94")]
	protected virtual void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x4C6B830", Offset = "0x4C6B830", VA = "0x4C6B830", Slot = "95")]
	protected virtual Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x4C6B840", Offset = "0x4C6B840", VA = "0x4C6B840", Slot = "96")]
	protected virtual Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x4C6B8F0", Offset = "0x4C6B8F0", VA = "0x4C6B8F0")]
	protected void SetVertexColorGradient(TMP_ColorGradient gradient)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x4C6B9A0", Offset = "0x4C6B9A0", VA = "0x4C6B9A0")]
	protected void SetTextSortingOrder(VertexSortingOrder order)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x4C6B9B0", Offset = "0x4C6B9B0", VA = "0x4C6B9B0")]
	protected void SetTextSortingOrder(int[] order)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x4C6B9C0", Offset = "0x4C6B9C0", VA = "0x4C6B9C0", Slot = "97")]
	protected virtual void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x4C6B9D0", Offset = "0x4C6B9D0", VA = "0x4C6B9D0", Slot = "98")]
	protected virtual void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4C6B9E0", Offset = "0x4C6B9E0", VA = "0x4C6B9E0", Slot = "99")]
	protected virtual void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x4C6B9F0", Offset = "0x4C6B9F0", VA = "0x4C6B9F0", Slot = "100")]
	protected virtual void SetShaderDepth()
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x4C6BA00", Offset = "0x4C6BA00", VA = "0x4C6BA00", Slot = "101")]
	protected virtual void SetCulling()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x4C6BA10", Offset = "0x4C6BA10", VA = "0x4C6BA10", Slot = "102")]
	internal virtual void UpdateCulling()
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x4C6BA20", Offset = "0x4C6BA20", VA = "0x4C6BA20", Slot = "103")]
	protected virtual float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x4C6BB40", Offset = "0x4C6BB40", VA = "0x4C6BB40", Slot = "104")]
	protected virtual float GetPaddingForMaterial(Material mat)
	{
		return default(float);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x4C6BC30", Offset = "0x4C6BC30", VA = "0x4C6BC30", Slot = "105")]
	protected virtual Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x4C6BC40", Offset = "0x4C6BC40", VA = "0x4C6BC40", Slot = "106")]
	public virtual void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x4C6BC50", Offset = "0x4C6BC50", VA = "0x4C6BC50", Slot = "107")]
	public virtual void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x4C6BC60", Offset = "0x4C6BC60", VA = "0x4C6BC60", Slot = "108")]
	public virtual void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x4C6BC70", Offset = "0x4C6BC70", VA = "0x4C6BC70", Slot = "109")]
	public virtual void UpdateVertexData()
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x4C6BC80", Offset = "0x4C6BC80", VA = "0x4C6BC80", Slot = "110")]
	public virtual void SetVertices(Vector3[] vertices)
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x4C6BC90", Offset = "0x4C6BC90", VA = "0x4C6BC90", Slot = "111")]
	public virtual void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x4C6BCA0", Offset = "0x4C6BCA0", VA = "0x4C6BCA0", Slot = "47")]
	public override void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x4C6BD00", Offset = "0x4C6BD00", VA = "0x4C6BD00", Slot = "49")]
	public override void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x4C6BD50", Offset = "0x4C6BD50", VA = "0x4C6BD50", Slot = "112")]
	protected virtual void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x4C6BD60", Offset = "0x4C6BD60", VA = "0x4C6BD60", Slot = "113")]
	protected virtual void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x4C6BD70", Offset = "0x4C6BD70", VA = "0x4C6BD70")]
	protected void ParseInputText()
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x4C6BE90", Offset = "0x4C6BE90", VA = "0x4C6BE90")]
	private void PopulateTextBackingArray(string sourceText)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x4C6CC90", Offset = "0x4C6CC90", VA = "0x4C6CC90")]
	private void PopulateTextBackingArray(string sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x4C6CD80", Offset = "0x4C6CD80", VA = "0x4C6CD80")]
	private void PopulateTextBackingArray(StringBuilder sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x4C6CE80", Offset = "0x4C6CE80", VA = "0x4C6CE80")]
	private void PopulateTextBackingArray(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4C6BEB0", Offset = "0x4C6BEB0", VA = "0x4C6BEB0")]
	private void PopulateTextProcessingArray()
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4C6E3B0", Offset = "0x4C6E3B0", VA = "0x4C6E3B0")]
	private void SetTextInternal(string sourceText)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4C6E400", Offset = "0x4C6E400", VA = "0x4C6E400")]
	public void SetText(string sourceText, bool syncTextInputBox = true)
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4C6E490", Offset = "0x4C6E490", VA = "0x4C6E490")]
	public void SetText(string sourceText, float arg0)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4C6E790", Offset = "0x4C6E790", VA = "0x4C6E790")]
	public void SetText(string sourceText, float arg0, float arg1)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4C6E7B0", Offset = "0x4C6E7B0", VA = "0x4C6E7B0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2)
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4C6E7D0", Offset = "0x4C6E7D0", VA = "0x4C6E7D0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3)
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4C6E7F0", Offset = "0x4C6E7F0", VA = "0x4C6E7F0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4C6E800", Offset = "0x4C6E800", VA = "0x4C6E800")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4C6E810", Offset = "0x4C6E810", VA = "0x4C6E810")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4C6E4B0", Offset = "0x4C6E4B0", VA = "0x4C6E4B0")]
	public void SetText(string sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4C6EB80", Offset = "0x4C6EB80", VA = "0x4C6EB80")]
	public void SetText(StringBuilder sourceText)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4C6EC00", Offset = "0x4C6EC00", VA = "0x4C6EC00")]
	private void SetText(StringBuilder sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4C6EC60", Offset = "0x4C6EC60", VA = "0x4C6EC60")]
	public void SetText(char[] sourceText)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x4C6ED30", Offset = "0x4C6ED30", VA = "0x4C6ED30")]
	public void SetText(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x4C6ED90", Offset = "0x4C6ED90", VA = "0x4C6ED90")]
	public void SetCharArray(char[] sourceText)
	{
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x4C6ECD0", Offset = "0x4C6ECD0", VA = "0x4C6ECD0")]
	public void SetCharArray(char[] sourceText, int start, int length)
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x4C68F50", Offset = "0x4C68F50", VA = "0x4C68F50")]
	private TMP_Style GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x4C6D660", Offset = "0x4C6D660", VA = "0x4C6D660")]
	private bool ReplaceOpeningStyleTag(ref TextBackingContainer sourceText, int srcIndex, out int srcOffset, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x4C6F1D0", Offset = "0x4C6F1D0", VA = "0x4C6F1D0")]
	private bool ReplaceOpeningStyleTag(ref int[] sourceText, int srcIndex, out int srcOffset, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x4C6DB00", Offset = "0x4C6DB00", VA = "0x4C6DB00")]
	private void ReplaceClosingStyleTag(ref TextBackingContainer sourceText, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x4C6F670", Offset = "0x4C6F670", VA = "0x4C6F670")]
	private void ReplaceClosingStyleTag(ref int[] sourceText, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x4C6CF80", Offset = "0x4C6CF80", VA = "0x4C6CF80")]
	private bool InsertOpeningStyleTag(TMP_Style style, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x4C6DF70", Offset = "0x4C6DF70", VA = "0x4C6DF70")]
	private void InsertClosingStyleTag(ref UnicodeChar[] charBuffer, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x4C6F0E0", Offset = "0x4C6F0E0", VA = "0x4C6F0E0")]
	private int GetMarkupTagHashCode(int[] tagDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x4C6D590", Offset = "0x4C6D590", VA = "0x4C6D590")]
	private int GetMarkupTagHashCode(TextBackingContainer tagDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x4C6FAE0", Offset = "0x4C6FAE0", VA = "0x4C6FAE0")]
	private int GetStyleHashCode(ref int[] text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x4C6EE00", Offset = "0x4C6EE00", VA = "0x4C6EE00")]
	private int GetStyleHashCode(ref TextBackingContainer text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000586")]
	private void ResizeInternalArray<T>(ref T[] array)
	{
	}

	[Token(Token = "0x6000587")]
	private void ResizeInternalArray<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4C6E820", Offset = "0x4C6E820", VA = "0x4C6E820")]
	private void AddFloatToInternalTextBackingArray(float value, int padding, int precision, ref int writeIndex)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4C6FBC0", Offset = "0x4C6FBC0", VA = "0x4C6FBC0")]
	private void AddIntegerToInternalTextBackingArray(double number, int padding, ref int writeIndex)
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x4C68630", Offset = "0x4C68630", VA = "0x4C68630")]
	private string InternalTextBackingArrayToString()
	{
		return null;
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x4C6FCC0", Offset = "0x4C6FCC0", VA = "0x4C6FCC0", Slot = "114")]
	internal virtual int SetArraySizes(UnicodeChar[] unicodeChars)
	{
		return default(int);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4C6FCD0", Offset = "0x4C6FCD0", VA = "0x4C6FCD0")]
	public Vector2 GetPreferredValues()
	{
		return default(Vector2);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4C6FD20", Offset = "0x4C6FD20", VA = "0x4C6FD20")]
	public Vector2 GetPreferredValues(float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4C6FFA0", Offset = "0x4C6FFA0", VA = "0x4C6FFA0")]
	public Vector2 GetPreferredValues(string text)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4C70170", Offset = "0x4C70170", VA = "0x4C70170")]
	public Vector2 GetPreferredValues(string text, float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4C6B3B0", Offset = "0x4C6B3B0", VA = "0x4C6B3B0")]
	protected float GetPreferredWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4C6FE70", Offset = "0x4C6FE70", VA = "0x4C6FE70")]
	private float GetPreferredWidth(Vector2 margin)
	{
		return default(float);
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x4C6B530", Offset = "0x4C6B530", VA = "0x4C6B530")]
	protected float GetPreferredHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x4C6FEE0", Offset = "0x4C6FEE0", VA = "0x4C6FEE0")]
	private float GetPreferredHeight(Vector2 margin)
	{
		return default(float);
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x4C70310", Offset = "0x4C70310", VA = "0x4C70310")]
	public Vector2 GetRenderedValues()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x4C70330", Offset = "0x4C70330", VA = "0x4C70330")]
	public Vector2 GetRenderedValues(bool onlyVisibleCharacters)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4C6B740", Offset = "0x4C6B740", VA = "0x4C6B740")]
	private float GetRenderedWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x4C70650", Offset = "0x4C70650", VA = "0x4C70650")]
	protected float GetRenderedWidth(bool onlyVisibleCharacters)
	{
		return default(float);
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4C6B790", Offset = "0x4C6B790", VA = "0x4C6B790")]
	private float GetRenderedHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x4C70670", Offset = "0x4C70670", VA = "0x4C70670")]
	protected float GetRenderedHeight(bool onlyVisibleCharacters)
	{
		return default(float);
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x4C706A0", Offset = "0x4C706A0", VA = "0x4C706A0", Slot = "115")]
	protected virtual Vector2 CalculatePreferredValues(ref float fontSize, Vector2 marginSize, bool isTextAutoSizingEnabled, bool isWordWrappingEnabled)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x4C7B860", Offset = "0x4C7B860", VA = "0x4C7B860", Slot = "116")]
	protected virtual Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4C7B880", Offset = "0x4C7B880", VA = "0x4C7B880", Slot = "117")]
	internal virtual Rect GetCanvasSpaceClippingRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4C6AA40", Offset = "0x4C6AA40", VA = "0x4C6AA40")]
	protected Bounds GetTextBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x4C70350", Offset = "0x4C70350", VA = "0x4C70350")]
	protected Bounds GetTextBounds(bool onlyVisibleCharacters)
	{
		return default(Bounds);
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x4C7B890", Offset = "0x4C7B890", VA = "0x4C7B890")]
	protected void AdjustLineOffset(int startIndex, int endIndex, float offset)
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x4C7BB50", Offset = "0x4C7BB50", VA = "0x4C7BB50")]
	protected void ResizeLineExtents(int size)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4C7BE00", Offset = "0x4C7BE00", VA = "0x4C7BE00", Slot = "118")]
	public virtual TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x4C7BE10", Offset = "0x4C7BE10", VA = "0x4C7BE10", Slot = "119")]
	public virtual void ComputeMarginSize()
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x4C7BE20", Offset = "0x4C7BE20", VA = "0x4C7BE20")]
	protected void InsertNewLine(int i, float baseScale, float currentElementScale, float currentEmScale, float glyphAdjustment, float boldSpacingAdjustment, float characterSpacingAdjustment, float width, float lineGap, ref bool isMaxVisibleDescenderSet, ref float maxVisibleDescender)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x4C7B300", Offset = "0x4C7B300", VA = "0x4C7B300")]
	protected void SaveWordWrappingState(ref WordWrapState state, int index, int count)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4C7AD50", Offset = "0x4C7AD50", VA = "0x4C7AD50")]
	protected int RestoreWordWrappingState(ref WordWrapState state)
	{
		return default(int);
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4C7C480", Offset = "0x4C7C480", VA = "0x4C7C480", Slot = "120")]
	protected virtual void SaveGlyphVertexInfo(float padding, float style_padding, Color32 vertexColor)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4C7D370", Offset = "0x4C7D370", VA = "0x4C7D370", Slot = "121")]
	protected virtual void SaveSpriteVertexInfo(Color32 vertexColor)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4C7DCB0", Offset = "0x4C7DCB0", VA = "0x4C7DCB0", Slot = "122")]
	protected virtual void FillCharacterVertexBuffers(int i, int index_X4)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x4C7E3F0", Offset = "0x4C7E3F0", VA = "0x4C7E3F0", Slot = "123")]
	protected virtual void FillCharacterVertexBuffers(int i, int index_X4, bool isVolumetric)
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x4C7EF40", Offset = "0x4C7EF40", VA = "0x4C7EF40", Slot = "124")]
	protected virtual void FillSpriteVertexBuffers(int i, int index_X4)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x4C7F680", Offset = "0x4C7F680", VA = "0x4C7F680", Slot = "125")]
	protected virtual void DrawUnderlineMesh(Vector3 start, Vector3 end, ref int index, float startScale, float endScale, float maxScale, float sdfScale, Color32 underlineColor)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x4C80720", Offset = "0x4C80720", VA = "0x4C80720", Slot = "126")]
	protected virtual void DrawTextHighlight(Vector3 start, Vector3 end, ref int index, Color32 highlightColor)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x4C80C90", Offset = "0x4C80C90", VA = "0x4C80C90")]
	protected void LoadDefaultSettings()
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4C80F10", Offset = "0x4C80F10", VA = "0x4C80F10")]
	protected void GetSpecialCharacters(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x4C80F40", Offset = "0x4C80F40", VA = "0x4C80F40")]
	protected void GetEllipsisSpecialCharacter(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x4C80590", Offset = "0x4C80590", VA = "0x4C80590")]
	protected void GetUnderlineSpecialCharacter(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x4C811D0", Offset = "0x4C811D0", VA = "0x4C811D0")]
	protected void ReplaceTagWithCharacter(int[] chars, int insertionIndex, int tagLength, char c)
	{
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x4C81230", Offset = "0x4C81230", VA = "0x4C81230")]
	protected TMP_FontAsset GetFontAssetForWeight(int fontWeight)
	{
		return null;
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x4C812B0", Offset = "0x4C812B0", VA = "0x4C812B0")]
	internal TMP_TextElement GetTextElement(uint unicode, TMP_FontAsset fontAsset, FontStyles fontStyle, FontWeight fontWeight, out bool isUsingAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x4C81700", Offset = "0x4C81700", VA = "0x4C81700", Slot = "127")]
	protected virtual void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x4C81710", Offset = "0x4C81710", VA = "0x4C81710", Slot = "128")]
	protected virtual void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x4C81720", Offset = "0x4C81720", VA = "0x4C81720", Slot = "129")]
	public virtual void ClearMesh()
	{
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x4C81730", Offset = "0x4C81730", VA = "0x4C81730", Slot = "130")]
	public virtual void ClearMesh(bool uploadGeometry)
	{
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x4C81740", Offset = "0x4C81740", VA = "0x4C81740", Slot = "131")]
	public virtual string GetParsedText()
	{
		return null;
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x4C69F80", Offset = "0x4C69F80", VA = "0x4C69F80")]
	internal bool IsSelfOrLinkedAncestor(TMP_Text targetTextComponent)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x4C69E50", Offset = "0x4C69E50", VA = "0x4C69E50")]
	internal void ReleaseLinkedTextComponent(TMP_Text targetTextComponent)
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x4C806E0", Offset = "0x4C806E0", VA = "0x4C806E0")]
	protected Vector2 PackUV(float x, float y, float scale)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x4C81830", Offset = "0x4C81830", VA = "0x4C81830")]
	protected float PackUV(float x, float y)
	{
		return default(float);
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x4C81870", Offset = "0x4C81870", VA = "0x4C81870", Slot = "132")]
	internal virtual void InternalUpdate()
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4C81880", Offset = "0x4C81880", VA = "0x4C81880")]
	protected int HexToInt(char hex)
	{
		return default(int);
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x4C818A0", Offset = "0x4C818A0", VA = "0x4C818A0")]
	protected int GetUTF16(string text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x4C6EEF0", Offset = "0x4C6EEF0", VA = "0x4C6EEF0")]
	protected int GetUTF16(int[] text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x4C81940", Offset = "0x4C81940", VA = "0x4C81940")]
	internal int GetUTF16(uint[] text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x4C819E0", Offset = "0x4C819E0", VA = "0x4C819E0")]
	protected int GetUTF16(StringBuilder text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x4C6D3C0", Offset = "0x4C6D3C0", VA = "0x4C6D3C0")]
	private int GetUTF16(TextBackingContainer text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x4C81A80", Offset = "0x4C81A80", VA = "0x4C81A80")]
	protected int GetUTF32(string text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x4C6EF90", Offset = "0x4C6EF90", VA = "0x4C6EF90")]
	protected int GetUTF32(int[] text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x4C81BB0", Offset = "0x4C81BB0", VA = "0x4C81BB0")]
	internal int GetUTF32(uint[] text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x4C81D00", Offset = "0x4C81D00", VA = "0x4C81D00")]
	protected int GetUTF32(StringBuilder text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x4C6D460", Offset = "0x4C6D460", VA = "0x4C6D460")]
	private int GetUTF32(TextBackingContainer text, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x4C81E30", Offset = "0x4C81E30", VA = "0x4C81E30")]
	protected Color32 HexCharsToColor(char[] hexChars, int tagCount)
	{
		return default(Color32);
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4C82340", Offset = "0x4C82340", VA = "0x4C82340")]
	protected Color32 HexCharsToColor(char[] hexChars, int startIndex, int length)
	{
		return default(Color32);
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x4C825E0", Offset = "0x4C825E0", VA = "0x4C825E0")]
	private int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters)
	{
		return default(int);
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x4C82820", Offset = "0x4C82820", VA = "0x4C82820")]
	protected float ConvertToFloat(char[] chars, int startIndex, int length)
	{
		return default(float);
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x4C82680", Offset = "0x4C82680", VA = "0x4C82680")]
	protected float ConvertToFloat(char[] chars, int startIndex, int length, out int lastIndex)
	{
		return default(float);
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x4C73BB0", Offset = "0x4C73BB0", VA = "0x4C73BB0")]
	internal bool ValidateHtmlTag(UnicodeChar[] chars, int startIndex, out int endIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x4C82840", Offset = "0x4C82840", VA = "0x4C82840")]
	protected TMP_Text()
	{
	}
}
