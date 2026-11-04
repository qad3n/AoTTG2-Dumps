// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextElement
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Properties;
using UnityEngine.Bindings;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004A2")]
public class TextElement : BindableElement, INotifyValueChanged<string>, ITextEdition, IExperimentalFeatures, ITextSelection
{
	[Token(Token = "0x20004A3")]
	public readonly struct GlyphsEnumerable
	{
		[Token(Token = "0x4000FD5")]
		[FieldOffset(Offset = "0x0")]
		public readonly int Count;

		[Token(Token = "0x4000FD6")]
		[FieldOffset(Offset = "0x8")]
		private readonly List<NativeSlice<Vertex>> m_Vertices;

		[Token(Token = "0x4000FD7")]
		[FieldOffset(Offset = "0x10")]
		private readonly TextElement m_TextElement;

		[Token(Token = "0x600245F")]
		[Address(RVA = "0x312A5C0", Offset = "0x3128BC0", VA = "0x18312A5C0")]
		internal GlyphsEnumerable(TextElement te, List<NativeSlice<Vertex>> vertices)
		{
		}

		[Token(Token = "0x6002460")]
		[Address(RVA = "0x312A610", Offset = "0x3128C10", VA = "0x18312A610")]
		internal GlyphsEnumerable(TextElement te, List<NativeSlice<Vertex>> vertices, Span<UnityEngine.TextCore.Text.ATGMeshInfo> meshInfos)
		{
		}

		[Token(Token = "0x6002461")]
		[Address(RVA = "0x312A4F0", Offset = "0x3128AF0", VA = "0x18312A4F0")]
		private static int ComputeCount(List<NativeSlice<Vertex>> verts)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20004A4")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<TextElement, UxmlTraits>
	{
		[Token(Token = "0x6002462")]
		[Address(RVA = "0x313B3C0", Offset = "0x31399C0", VA = "0x18313B3C0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20004A5")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x4000FD8")]
		[FieldOffset(Offset = "0x90")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x4000FD9")]
		[FieldOffset(Offset = "0x98")]
		private UxmlBoolAttributeDescription m_EnableRichText;

		[Token(Token = "0x4000FDA")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlBoolAttributeDescription m_EmojiFallbackSupport;

		[Token(Token = "0x4000FDB")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlBoolAttributeDescription m_ParseEscapeSequences;

		[Token(Token = "0x4000FDC")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlBoolAttributeDescription m_Selectable;

		[Token(Token = "0x4000FDD")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlBoolAttributeDescription m_SelectWordByDoubleClick;

		[Token(Token = "0x4000FDE")]
		[FieldOffset(Offset = "0xC0")]
		private UxmlBoolAttributeDescription m_SelectLineByTripleClick;

		[Token(Token = "0x4000FDF")]
		[FieldOffset(Offset = "0xC8")]
		private UxmlBoolAttributeDescription m_DisplayTooltipWhenElided;

		[Token(Token = "0x6002463")]
		[Address(RVA = "0x313BA20", Offset = "0x313A020", VA = "0x18313BA20", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6002464")]
		[Address(RVA = "0x313BFA0", Offset = "0x313A5A0", VA = "0x18313BFA0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000F8D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId displayTooltipWhenElidedProperty;

	[Token(Token = "0x4000F8E")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId emojiFallbackSupportProperty;

	[Token(Token = "0x4000F8F")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId enableRichTextProperty;

	[Token(Token = "0x4000F90")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId isElidedProperty;

	[Token(Token = "0x4000F91")]
	[FieldOffset(Offset = "0x260")]
	internal static readonly BindingId parseEscapeSequencesProperty;

	[Token(Token = "0x4000F92")]
	[FieldOffset(Offset = "0x2F8")]
	internal static readonly BindingId textProperty;

	[Token(Token = "0x4000F93")]
	[FieldOffset(Offset = "0x390")]
	internal static readonly BindingId valueProperty;

	[Token(Token = "0x4000F94")]
	[FieldOffset(Offset = "0x428")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000F95")]
	[FieldOffset(Offset = "0x430")]
	public static readonly string selectableUssClassName;

	[Token(Token = "0x4000F98")]
	[FieldOffset(Offset = "0x2E8")]
	private string m_Text;

	[Token(Token = "0x4000F99")]
	[FieldOffset(Offset = "0x2F0")]
	private bool m_EnableRichText;

	[Token(Token = "0x4000F9A")]
	[FieldOffset(Offset = "0x2F1")]
	private bool m_EmojiFallbackSupport;

	[Token(Token = "0x4000F9B")]
	[FieldOffset(Offset = "0x2F2")]
	private bool m_ParseEscapeSequences;

	[Token(Token = "0x4000F9C")]
	[FieldOffset(Offset = "0x2F3")]
	private bool m_DisplayTooltipWhenElided;

	[Token(Token = "0x4000F9E")]
	[FieldOffset(Offset = "0x438")]
	internal static readonly string k_EllipsisText;

	[Token(Token = "0x4000F9F")]
	[FieldOffset(Offset = "0x2F8")]
	internal string elidedText;

	[Token(Token = "0x4000FA0")]
	[FieldOffset(Offset = "0x300")]
	private bool m_WasElided;

	[Token(Token = "0x4000FA1")]
	[FieldOffset(Offset = "0x440")]
	internal static readonly BindingId autoCorrectionProperty;

	[Token(Token = "0x4000FA2")]
	[FieldOffset(Offset = "0x4D8")]
	internal static readonly BindingId hideSoftKeyboardProperty;

	[Token(Token = "0x4000FA3")]
	[FieldOffset(Offset = "0x570")]
	internal static readonly BindingId hideMobileInputProperty;

	[Token(Token = "0x4000FA4")]
	[FieldOffset(Offset = "0x608")]
	internal static readonly BindingId keyboardTypeProperty;

	[Token(Token = "0x4000FA5")]
	[FieldOffset(Offset = "0x6A0")]
	internal static readonly BindingId isReadOnlyProperty;

	[Token(Token = "0x4000FA6")]
	[FieldOffset(Offset = "0x738")]
	internal static readonly BindingId isPasswordProperty;

	[Token(Token = "0x4000FA7")]
	[FieldOffset(Offset = "0x7D0")]
	internal static readonly BindingId maxLengthProperty;

	[Token(Token = "0x4000FA8")]
	[FieldOffset(Offset = "0x868")]
	internal static readonly BindingId maskCharProperty;

	[Token(Token = "0x4000FAA")]
	[FieldOffset(Offset = "0x310")]
	internal bool isInputField;

	[Token(Token = "0x4000FAB")]
	[FieldOffset(Offset = "0x311")]
	private bool m_Multiline;

	[Token(Token = "0x4000FAC")]
	[FieldOffset(Offset = "0x318")]
	internal TouchScreenKeyboard m_TouchScreenKeyboard;

	[Token(Token = "0x4000FAD")]
	[FieldOffset(Offset = "0x320")]
	internal Action<bool> onIsReadOnlyChanged;

	[Token(Token = "0x4000FAE")]
	[FieldOffset(Offset = "0x328")]
	internal TouchScreenKeyboardType m_KeyboardType;

	[Token(Token = "0x4000FAF")]
	[FieldOffset(Offset = "0x32C")]
	private bool m_HideSoftKeyboard;

	[Token(Token = "0x4000FB0")]
	[FieldOffset(Offset = "0x32D")]
	private bool m_HideMobileInput;

	[Token(Token = "0x4000FB1")]
	[FieldOffset(Offset = "0x32E")]
	private bool m_IsReadOnly;

	[Token(Token = "0x4000FB2")]
	[FieldOffset(Offset = "0x330")]
	private int m_MaxLength;

	[Token(Token = "0x4000FB3")]
	[FieldOffset(Offset = "0x338")]
	private string m_PlaceholderText;

	[Token(Token = "0x4000FBC")]
	private const string ZeroWidthSpace = "\u200b";

	[Token(Token = "0x4000FBD")]
	[FieldOffset(Offset = "0x380")]
	private string m_RenderedText;

	[Token(Token = "0x4000FBE")]
	[FieldOffset(Offset = "0x388")]
	private string m_OriginalText;

	[Token(Token = "0x4000FBF")]
	[FieldOffset(Offset = "0x390")]
	private char m_MaskChar;

	[Token(Token = "0x4000FC0")]
	[FieldOffset(Offset = "0x392")]
	private bool m_IsPassword;

	[Token(Token = "0x4000FC1")]
	[FieldOffset(Offset = "0x393")]
	private bool m_HidePlaceholderTextOnFocus;

	[Token(Token = "0x4000FC2")]
	[FieldOffset(Offset = "0x394")]
	private bool m_AutoCorrection;

	[Token(Token = "0x4000FC3")]
	[FieldOffset(Offset = "0x900")]
	internal static readonly BindingId isSelectableProperty;

	[Token(Token = "0x4000FC4")]
	[FieldOffset(Offset = "0x998")]
	internal static readonly BindingId cursorIndexProperty;

	[Token(Token = "0x4000FC5")]
	[FieldOffset(Offset = "0xA30")]
	internal static readonly BindingId selectIndexProperty;

	[Token(Token = "0x4000FC6")]
	[FieldOffset(Offset = "0xAC8")]
	internal static readonly BindingId doubleClickSelectsWordProperty;

	[Token(Token = "0x4000FC7")]
	[FieldOffset(Offset = "0xB60")]
	internal static readonly BindingId tripleClickSelectsLineProperty;

	[Token(Token = "0x4000FC8")]
	[FieldOffset(Offset = "0xBF8")]
	internal static readonly BindingId cursorPositionProperty;

	[Token(Token = "0x4000FC9")]
	[FieldOffset(Offset = "0xC90")]
	internal static readonly BindingId selectAllOnFocusProperty;

	[Token(Token = "0x4000FCA")]
	[FieldOffset(Offset = "0xD28")]
	internal static readonly BindingId selectAllOnMouseUpProperty;

	[Token(Token = "0x4000FCB")]
	[FieldOffset(Offset = "0xDC0")]
	internal static readonly BindingId selectionProperty;

	[Token(Token = "0x4000FCC")]
	[FieldOffset(Offset = "0x398")]
	private TextSelectingManipulator m_SelectingManipulator;

	[Token(Token = "0x4000FCD")]
	[FieldOffset(Offset = "0x3A0")]
	private bool m_IsSelectable;

	[Token(Token = "0x4000FCE")]
	[FieldOffset(Offset = "0x3A1")]
	private bool m_DoubleClickSelectsWord;

	[Token(Token = "0x4000FCF")]
	[FieldOffset(Offset = "0x3A2")]
	private bool m_TripleClickSelectsLine;

	[Token(Token = "0x4000FD0")]
	[FieldOffset(Offset = "0x3A3")]
	private bool m_SelectAllOnFocus;

	[Token(Token = "0x4000FD1")]
	[FieldOffset(Offset = "0x3A4")]
	private bool m_SelectAllOnMouseUp;

	[Token(Token = "0x4000FD2")]
	[FieldOffset(Offset = "0x3A8")]
	private Color m_SelectionColor;

	[Token(Token = "0x4000FD3")]
	[FieldOffset(Offset = "0x3B8")]
	private Color m_CursorColor;

	[Token(Token = "0x4000FD4")]
	[FieldOffset(Offset = "0x3C8")]
	private float m_CursorWidth;

	[Token(Token = "0x1700094F")]
	public Action<GlyphsEnumerable> PostProcessTextVertices
	{
		[Token(Token = "0x60023BD")]
		[Address(RVA = "0x312F010", Offset = "0x312D610", VA = "0x18312F010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000950")]
	internal UITKTextHandle uitkTextHandle
	{
		[Token(Token = "0x60023BE")]
		[Address(RVA = "0x2D076E0", Offset = "0x2D05CE0", VA = "0x182D076E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60023BF")]
		[Address(RVA = "0x312ECB0", Offset = "0x312D2B0", VA = "0x18312ECB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000951")]
	[CreateProperty]
	public virtual string text
	{
		[Token(Token = "0x60023C3")]
		[Address(RVA = "0x3136F70", Offset = "0x3135570", VA = "0x183136F70", Slot = "211")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023C4")]
		[Address(RVA = "0x3137850", Offset = "0x3135E50", VA = "0x183137850", Slot = "212")]
		set
		{
		}
	}

	[Token(Token = "0x17000952")]
	[CreateProperty]
	public bool enableRichText
	{
		[Token(Token = "0x60023C5")]
		[Address(RVA = "0x31364E0", Offset = "0x3134AE0", VA = "0x1831364E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023C6")]
		[Address(RVA = "0x31372A0", Offset = "0x31358A0", VA = "0x1831372A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000953")]
	[CreateProperty]
	public bool emojiFallbackSupport
	{
		[Token(Token = "0x60023C7")]
		[Address(RVA = "0x31364D0", Offset = "0x3134AD0", VA = "0x1831364D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023C8")]
		[Address(RVA = "0x3137210", Offset = "0x3135810", VA = "0x183137210")]
		set
		{
		}
	}

	[Token(Token = "0x17000954")]
	[CreateProperty]
	public bool parseEscapeSequences
	{
		[Token(Token = "0x60023C9")]
		[Address(RVA = "0x3136940", Offset = "0x3134F40", VA = "0x183136940")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023CA")]
		[Address(RVA = "0x31376A0", Offset = "0x3135CA0", VA = "0x1831376A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000955")]
	[CreateProperty]
	public bool displayTooltipWhenElided
	{
		[Token(Token = "0x60023CB")]
		[Address(RVA = "0x3136400", Offset = "0x3134A00", VA = "0x183136400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023CC")]
		[Address(RVA = "0x3137100", Offset = "0x3135700", VA = "0x183137100")]
		set
		{
		}
	}

	[Token(Token = "0x17000956")]
	[CreateProperty(ReadOnly = true)]
	public bool isElided
	{
		[Token(Token = "0x60023CD")]
		[Address(RVA = "0x3136610", Offset = "0x3134C10", VA = "0x183136610")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023CE")]
		[Address(RVA = "0x31373F0", Offset = "0x31359F0", VA = "0x1831373F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000957")]
	internal bool hasFocus
	{
		[Token(Token = "0x60023D6")]
		[Address(RVA = "0x31364F0", Offset = "0x3134AF0", VA = "0x1831364F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000958")]
	private string UnityEngine_002EUIElements_002EINotifyValueChanged_003CSystem_002EString_003E_002Evalue
	{
		[Token(Token = "0x60023D9")]
		[Address(RVA = "0x3132FE0", Offset = "0x31315E0", VA = "0x183132FE0", Slot = "143")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023DA")]
		[Address(RVA = "0x3133010", Offset = "0x3131610", VA = "0x183133010", Slot = "144")]
		set
		{
		}
	}

	[Token(Token = "0x17000959")]
	[CreateProperty]
	private string value
	{
		[Token(Token = "0x60023DB")]
		[Address(RVA = "0x3137000", Offset = "0x3135600", VA = "0x183137000")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023DC")]
		[Address(RVA = "0x3137900", Offset = "0x3135F00", VA = "0x183137900")]
		set
		{
		}
	}

	[Token(Token = "0x1700095A")]
	internal ITextEdition edition
	{
		[Token(Token = "0x60023DF")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700095B")]
	internal TextEditingManipulator editingManipulator
	{
		[Token(Token = "0x60023E0")]
		[Address(RVA = "0x3136460", Offset = "0x3134A60", VA = "0x183136460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60023E1")]
		[Address(RVA = "0x31371F0", Offset = "0x31357F0", VA = "0x1831371F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700095C")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002Emultiline
	{
		[Token(Token = "0x60023E2")]
		[Address(RVA = "0x31335D0", Offset = "0x3131BD0", VA = "0x1831335D0", Slot = "146")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023E3")]
		[Address(RVA = "0x3133D00", Offset = "0x3132300", VA = "0x183133D00", Slot = "147")]
		set
		{
		}
	}

	[Token(Token = "0x1700095D")]
	private TouchScreenKeyboard UnityEngine_002EUIElements_002EITextEdition_002EtouchScreenKeyboard
	{
		[Token(Token = "0x60023E4")]
		[Address(RVA = "0x100AE90", Offset = "0x1009490", VA = "0x18100AE90", Slot = "184")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700095E")]
	private TouchScreenKeyboardType UnityEngine_002EUIElements_002EITextEdition_002EkeyboardType
	{
		[Token(Token = "0x60023E5")]
		[Address(RVA = "0x31335A0", Offset = "0x3131BA0", VA = "0x1831335A0", Slot = "185")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60023E6")]
		[Address(RVA = "0x3133AF0", Offset = "0x31320F0", VA = "0x183133AF0", Slot = "186")]
		set
		{
		}
	}

	[Token(Token = "0x1700095F")]
	[CreateProperty]
	private TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60023E7")]
		[Address(RVA = "0x3136710", Offset = "0x3134D10", VA = "0x183136710")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60023E8")]
		[Address(RVA = "0x3137520", Offset = "0x3135B20", VA = "0x183137520")]
		set
		{
		}
	}

	[Token(Token = "0x17000960")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EhideSoftKeyboard
	{
		[Token(Token = "0x60023E9")]
		[Address(RVA = "0x3133540", Offset = "0x3131B40", VA = "0x183133540", Slot = "180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023EA")]
		[Address(RVA = "0x3133750", Offset = "0x3131D50", VA = "0x183133750", Slot = "181")]
		set
		{
		}
	}

	[Token(Token = "0x17000961")]
	[CreateProperty]
	private bool hideSoftKeyboard
	{
		[Token(Token = "0x60023EB")]
		[Address(RVA = "0x31365C0", Offset = "0x3134BC0", VA = "0x1831365C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023EC")]
		[Address(RVA = "0x3137390", Offset = "0x3135990", VA = "0x183137390")]
		set
		{
		}
	}

	[Token(Token = "0x17000962")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EhideMobileInput
	{
		[Token(Token = "0x60023ED")]
		[Address(RVA = "0x31334F0", Offset = "0x3131AF0", VA = "0x1831334F0", Slot = "182")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023EE")]
		[Address(RVA = "0x31336B0", Offset = "0x3131CB0", VA = "0x1831336B0", Slot = "183")]
		set
		{
		}
	}

	[Token(Token = "0x17000963")]
	[CreateProperty]
	private bool hideMobileInput
	{
		[Token(Token = "0x60023EF")]
		[Address(RVA = "0x3136570", Offset = "0x3134B70", VA = "0x183136570")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023F0")]
		[Address(RVA = "0x3137330", Offset = "0x3135930", VA = "0x183137330")]
		set
		{
		}
	}

	[Token(Token = "0x17000964")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EisReadOnly
	{
		[Token(Token = "0x60023F1")]
		[Address(RVA = "0x3133570", Offset = "0x3131B70", VA = "0x183133570", Slot = "148")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023F2")]
		[Address(RVA = "0x3133870", Offset = "0x3131E70", VA = "0x183133870", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x17000965")]
	[CreateProperty]
	private bool isReadOnly
	{
		[Token(Token = "0x60023F3")]
		[Address(RVA = "0x3136670", Offset = "0x3134C70", VA = "0x183136670")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023F4")]
		[Address(RVA = "0x3137460", Offset = "0x3135A60", VA = "0x183137460")]
		set
		{
		}
	}

	[Token(Token = "0x17000966")]
	private int UnityEngine_002EUIElements_002EITextEdition_002EmaxLength
	{
		[Token(Token = "0x60023FE")]
		[Address(RVA = "0x31335C0", Offset = "0x3131BC0", VA = "0x1831335C0", Slot = "150")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60023FF")]
		[Address(RVA = "0x3133C30", Offset = "0x3132230", VA = "0x183133C30", Slot = "151")]
		set
		{
		}
	}

	[Token(Token = "0x17000967")]
	[CreateProperty]
	private int maxLength
	{
		[Token(Token = "0x6002400")]
		[Address(RVA = "0x3136820", Offset = "0x3134E20", VA = "0x183136820")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002401")]
		[Address(RVA = "0x3137640", Offset = "0x3135C40", VA = "0x183137640")]
		set
		{
		}
	}

	[Token(Token = "0x17000968")]
	private string UnityEngine_002EUIElements_002EITextEdition_002Eplaceholder
	{
		[Token(Token = "0x6002402")]
		[Address(RVA = "0x31335E0", Offset = "0x3131BE0", VA = "0x1831335E0", Slot = "152")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002403")]
		[Address(RVA = "0x3133D80", Offset = "0x3132380", VA = "0x183133D80", Slot = "153")]
		set
		{
		}
	}

	[Token(Token = "0x17000969")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EisDelayed
	{
		[Token(Token = "0x6002404")]
		[Address(RVA = "0x3133550", Offset = "0x3131B50", VA = "0x183133550", Slot = "154")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002405")]
		[Address(RVA = "0x31337D0", Offset = "0x3131DD0", VA = "0x1831337D0", Slot = "155")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096A")]
	private Func<char, bool> UnityEngine_002EUIElements_002EITextEdition_002EAcceptCharacter
	{
		[Token(Token = "0x6002408")]
		[Address(RVA = "0x1000630", Offset = "0xFFEC30", VA = "0x181000630", Slot = "158")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002409")]
		[Address(RVA = "0x31335F0", Offset = "0x3131BF0", VA = "0x1831335F0", Slot = "159")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096B")]
	private Action<bool> UnityEngine_002EUIElements_002EITextEdition_002EUpdateScrollOffset
	{
		[Token(Token = "0x600240A")]
		[Address(RVA = "0x1000620", Offset = "0xFFEC20", VA = "0x181000620", Slot = "160")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600240B")]
		[Address(RVA = "0x3133610", Offset = "0x3131C10", VA = "0x183133610", Slot = "161")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096C")]
	private Action UnityEngine_002EUIElements_002EITextEdition_002EUpdateValueFromText
	{
		[Token(Token = "0x600240C")]
		[Address(RVA = "0xDC2AF0", Offset = "0xDC10F0", VA = "0x180DC2AF0", Slot = "162")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600240D")]
		[Address(RVA = "0x12AE860", Offset = "0x12ACE60", VA = "0x1812AE860", Slot = "163")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096D")]
	private Action UnityEngine_002EUIElements_002EITextEdition_002EUpdateTextFromValue
	{
		[Token(Token = "0x600240E")]
		[Address(RVA = "0xDC2B00", Offset = "0xDC1100", VA = "0x180DC2B00", Slot = "164")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600240F")]
		[Address(RVA = "0x12AE880", Offset = "0x12ACE80", VA = "0x1812AE880", Slot = "165")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096E")]
	private Action UnityEngine_002EUIElements_002EITextEdition_002EMoveFocusToCompositeRoot
	{
		[Token(Token = "0x6002410")]
		[Address(RVA = "0x12ADF90", Offset = "0x12AC590", VA = "0x1812ADF90", Slot = "166")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002411")]
		[Address(RVA = "0x12AFE40", Offset = "0x12AE440", VA = "0x1812AFE40", Slot = "167")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096F")]
	internal Action OnPlaceholderChanged
	{
		[Token(Token = "0x6002412")]
		[Address(RVA = "0x12ADB10", Offset = "0x12AC110", VA = "0x1812ADB10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002413")]
		[Address(RVA = "0x12AE840", Offset = "0x12ACE40", VA = "0x1812AE840")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000970")]
	private Func<string> UnityEngine_002EUIElements_002EITextEdition_002EGetDefaultValueType
	{
		[Token(Token = "0x6002414")]
		[Address(RVA = "0x12ADCB0", Offset = "0x12AC2B0", VA = "0x1812ADCB0", Slot = "168")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002415")]
		[Address(RVA = "0x12AF1A0", Offset = "0x12AD7A0", VA = "0x1812AF1A0", Slot = "169")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000971")]
	private char UnityEngine_002EUIElements_002EITextEdition_002EmaskChar
	{
		[Token(Token = "0x6002418")]
		[Address(RVA = "0x31335B0", Offset = "0x3131BB0", VA = "0x1831335B0", Slot = "172")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6002419")]
		[Address(RVA = "0x3133B70", Offset = "0x3132170", VA = "0x183133B70", Slot = "173")]
		set
		{
		}
	}

	[Token(Token = "0x17000972")]
	[CreateProperty]
	private char maskChar
	{
		[Token(Token = "0x600241A")]
		[Address(RVA = "0x3136760", Offset = "0x3134D60", VA = "0x183136760")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600241B")]
		[Address(RVA = "0x3137580", Offset = "0x3135B80", VA = "0x183137580")]
		set
		{
		}
	}

	[Token(Token = "0x17000973")]
	private char effectiveMaskChar
	{
		[Token(Token = "0x600241C")]
		[Address(RVA = "0x3136470", Offset = "0x3134A70", VA = "0x183136470")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000974")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EisPassword
	{
		[Token(Token = "0x600241D")]
		[Address(RVA = "0x3133560", Offset = "0x3131B60", VA = "0x183133560", Slot = "174")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600241E")]
		[Address(RVA = "0x31337E0", Offset = "0x3131DE0", VA = "0x1831337E0", Slot = "175")]
		set
		{
		}
	}

	[Token(Token = "0x17000975")]
	[CreateProperty]
	private bool isPassword
	{
		[Token(Token = "0x600241F")]
		[Address(RVA = "0x3136620", Offset = "0x3134C20", VA = "0x183136620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002420")]
		[Address(RVA = "0x3137400", Offset = "0x3135A00", VA = "0x183137400")]
		set
		{
		}
	}

	[Token(Token = "0x17000976")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EhidePlaceholderOnFocus
	{
		[Token(Token = "0x6002421")]
		[Address(RVA = "0x3133530", Offset = "0x3131B30", VA = "0x183133530", Slot = "176")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002422")]
		[Address(RVA = "0x3133740", Offset = "0x3131D40", VA = "0x183133740", Slot = "177")]
		set
		{
		}
	}

	[Token(Token = "0x17000977")]
	internal bool needsPlaceholderIfTextIsEmpty
	{
		[Token(Token = "0x6002423")]
		[Address(RVA = "0x3136870", Offset = "0x3134E70", VA = "0x183136870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000978")]
	internal bool showPlaceholderText
	{
		[Token(Token = "0x6002424")]
		[Address(RVA = "0x3136E90", Offset = "0x3135490", VA = "0x183136E90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000979")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EautoCorrection
	{
		[Token(Token = "0x6002425")]
		[Address(RVA = "0x31334E0", Offset = "0x3131AE0", VA = "0x1831334E0", Slot = "178")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002426")]
		[Address(RVA = "0x3133630", Offset = "0x3131C30", VA = "0x183133630", Slot = "179")]
		set
		{
		}
	}

	[Token(Token = "0x1700097A")]
	[CreateProperty]
	private bool autoCorrection
	{
		[Token(Token = "0x6002427")]
		[Address(RVA = "0x3136310", Offset = "0x3134910", VA = "0x183136310")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002428")]
		[Address(RVA = "0x3137040", Offset = "0x3135640", VA = "0x183137040")]
		set
		{
		}
	}

	[Token(Token = "0x1700097B")]
	internal UnityEngine.TextCore.Text.RenderedText renderedText
	{
		[Token(Token = "0x6002429")]
		[Address(RVA = "0x3136A80", Offset = "0x3135080", VA = "0x183136A80")]
		get
		{
			return default(UnityEngine.TextCore.Text.RenderedText);
		}
	}

	[Token(Token = "0x1700097C")]
	internal string renderedTextString
	{
		[Token(Token = "0x600242A")]
		[Address(RVA = "0x3136950", Offset = "0x3134F50", VA = "0x183136950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700097D")]
	internal string originalText
	{
		[Token(Token = "0x600242C")]
		[Address(RVA = "0x3136930", Offset = "0x3134F30", VA = "0x183136930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700097E")]
	[CreateProperty(ReadOnly = true)]
	public ITextSelection selection
	{
		[Token(Token = "0x600242D")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700097F")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EisSelectable
	{
		[Token(Token = "0x600242E")]
		[Address(RVA = "0x3134240", Offset = "0x3132840", VA = "0x183134240", Slot = "187")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600242F")]
		[Address(RVA = "0x31345B0", Offset = "0x3132BB0", VA = "0x1831345B0", Slot = "188")]
		set
		{
		}
	}

	[Token(Token = "0x17000980")]
	[CreateProperty]
	internal bool isSelectable
	{
		[Token(Token = "0x6002430")]
		[Address(RVA = "0x31366C0", Offset = "0x3134CC0", VA = "0x1831366C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002431")]
		[Address(RVA = "0x31374C0", Offset = "0x3135AC0", VA = "0x1831374C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000981")]
	private int UnityEngine_002EUIElements_002EITextSelection_002EcursorIndex
	{
		[Token(Token = "0x6002432")]
		[Address(RVA = "0x3134090", Offset = "0x3132690", VA = "0x183134090", Slot = "193")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002433")]
		[Address(RVA = "0x3134430", Offset = "0x3132A30", VA = "0x183134430", Slot = "194")]
		set
		{
		}
	}

	[Token(Token = "0x17000982")]
	[CreateProperty]
	private int cursorIndex
	{
		[Token(Token = "0x6002434")]
		[Address(RVA = "0x3136360", Offset = "0x3134960", VA = "0x183136360")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002435")]
		[Address(RVA = "0x31370A0", Offset = "0x31356A0", VA = "0x1831370A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000983")]
	private int UnityEngine_002EUIElements_002EITextSelection_002EselectIndex
	{
		[Token(Token = "0x6002436")]
		[Address(RVA = "0x3134330", Offset = "0x3132930", VA = "0x183134330", Slot = "197")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002437")]
		[Address(RVA = "0x3134770", Offset = "0x3132D70", VA = "0x183134770", Slot = "198")]
		set
		{
		}
	}

	[Token(Token = "0x17000984")]
	[CreateProperty]
	private int selectIndex
	{
		[Token(Token = "0x6002438")]
		[Address(RVA = "0x3136DC0", Offset = "0x31353C0", VA = "0x183136DC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002439")]
		[Address(RVA = "0x31377F0", Offset = "0x3135DF0", VA = "0x1831377F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000985")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EdoubleClickSelectsWord
	{
		[Token(Token = "0x600243D")]
		[Address(RVA = "0x3134230", Offset = "0x3132830", VA = "0x183134230", Slot = "195")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600243E")]
		[Address(RVA = "0x3134530", Offset = "0x3132B30", VA = "0x183134530", Slot = "196")]
		set
		{
		}
	}

	[Token(Token = "0x17000986")]
	[CreateProperty]
	internal bool doubleClickSelectsWord
	{
		[Token(Token = "0x600243F")]
		[Address(RVA = "0x3136410", Offset = "0x3134A10", VA = "0x183136410")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002440")]
		[Address(RVA = "0x3137190", Offset = "0x3135790", VA = "0x183137190")]
		set
		{
		}
	}

	[Token(Token = "0x17000987")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EtripleClickSelectsLine
	{
		[Token(Token = "0x6002441")]
		[Address(RVA = "0x31343B0", Offset = "0x31329B0", VA = "0x1831343B0", Slot = "199")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002442")]
		[Address(RVA = "0x31348E0", Offset = "0x3132EE0", VA = "0x1831348E0", Slot = "200")]
		set
		{
		}
	}

	[Token(Token = "0x17000988")]
	[CreateProperty]
	internal bool tripleClickSelectsLine
	{
		[Token(Token = "0x6002443")]
		[Address(RVA = "0x3136FB0", Offset = "0x31355B0", VA = "0x183136FB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002444")]
		[Address(RVA = "0x31378A0", Offset = "0x3135EA0", VA = "0x1831378A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000989")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EselectAllOnFocus
	{
		[Token(Token = "0x6002445")]
		[Address(RVA = "0x3134310", Offset = "0x3132910", VA = "0x183134310", Slot = "204")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002446")]
		[Address(RVA = "0x3134670", Offset = "0x3132C70", VA = "0x183134670", Slot = "205")]
		set
		{
		}
	}

	[Token(Token = "0x1700098A")]
	[CreateProperty]
	private bool selectAllOnFocus
	{
		[Token(Token = "0x6002447")]
		[Address(RVA = "0x3136D20", Offset = "0x3135320", VA = "0x183136D20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002448")]
		[Address(RVA = "0x3137730", Offset = "0x3135D30", VA = "0x183137730")]
		set
		{
		}
	}

	[Token(Token = "0x1700098B")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EselectAllOnMouseUp
	{
		[Token(Token = "0x6002449")]
		[Address(RVA = "0x3134320", Offset = "0x3132920", VA = "0x183134320", Slot = "206")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600244A")]
		[Address(RVA = "0x31346F0", Offset = "0x3132CF0", VA = "0x1831346F0", Slot = "207")]
		set
		{
		}
	}

	[Token(Token = "0x1700098C")]
	[CreateProperty]
	private bool selectAllOnMouseUp
	{
		[Token(Token = "0x600244B")]
		[Address(RVA = "0x3136D70", Offset = "0x3135370", VA = "0x183136D70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600244C")]
		[Address(RVA = "0x3137790", Offset = "0x3135D90", VA = "0x183137790")]
		set
		{
		}
	}

	[Token(Token = "0x1700098D")]
	private Vector2 UnityEngine_002EUIElements_002EITextSelection_002EcursorPosition
	{
		[Token(Token = "0x600244D")]
		[Address(RVA = "0x3134100", Offset = "0x3132700", VA = "0x183134100", Slot = "208")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700098E")]
	[CreateProperty(ReadOnly = true)]
	private Vector2 cursorPosition
	{
		[Token(Token = "0x600244E")]
		[Address(RVA = "0x31363B0", Offset = "0x31349B0", VA = "0x1831363B0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700098F")]
	private float UnityEngine_002EUIElements_002EITextSelection_002ElineHeightAtCursorPosition
	{
		[Token(Token = "0x600244F")]
		[Address(RVA = "0x3134280", Offset = "0x3132880", VA = "0x183134280", Slot = "209")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000990")]
	private Color UnityEngine_002EUIElements_002EITextSelection_002EselectionColor
	{
		[Token(Token = "0x6002450")]
		[Address(RVA = "0x31343A0", Offset = "0x31329A0", VA = "0x1831343A0", Slot = "191")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6002451")]
		[Address(RVA = "0x3134870", Offset = "0x3132E70", VA = "0x183134870", Slot = "192")]
		set
		{
		}
	}

	[Token(Token = "0x17000991")]
	internal Color selectionColor
	{
		[Token(Token = "0x6002452")]
		[Address(RVA = "0x31343A0", Offset = "0x31329A0", VA = "0x1831343A0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6002453")]
		[Address(RVA = "0x3134870", Offset = "0x3132E70", VA = "0x183134870")]
		set
		{
		}
	}

	[Token(Token = "0x17000992")]
	private Color UnityEngine_002EUIElements_002EITextSelection_002EcursorColor
	{
		[Token(Token = "0x6002454")]
		[Address(RVA = "0x3134080", Offset = "0x3132680", VA = "0x183134080", Slot = "189")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6002455")]
		[Address(RVA = "0x31343C0", Offset = "0x31329C0", VA = "0x1831343C0", Slot = "190")]
		set
		{
		}
	}

	[Token(Token = "0x17000993")]
	internal Color cursorColor
	{
		[Token(Token = "0x6002456")]
		[Address(RVA = "0x3134080", Offset = "0x3132680", VA = "0x183134080")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6002457")]
		[Address(RVA = "0x31343C0", Offset = "0x31329C0", VA = "0x1831343C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000994")]
	private float UnityEngine_002EUIElements_002EITextSelection_002EcursorWidth
	{
		[Token(Token = "0x6002458")]
		[Address(RVA = "0x3134220", Offset = "0x3132820", VA = "0x183134220", Slot = "210")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000995")]
	internal TextSelectingManipulator selectingManipulator
	{
		[Token(Token = "0x6002459")]
		[Address(RVA = "0x3136E10", Offset = "0x3135410", VA = "0x183136E10")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60023BB")]
	[Address(RVA = "0x3135F50", Offset = "0x3134550", VA = "0x183135F50")]
	public TextElement()
	{
	}

	[Token(Token = "0x60023BC")]
	[Address(RVA = "0x1CCFC40", Offset = "0x1CCE240", VA = "0x181CCFC40")]
	private string GetDefaultValueType()
	{
		return null;
	}

	[Token(Token = "0x60023C0")]
	[Address(RVA = "0x3132050", Offset = "0x3130650", VA = "0x183132050", Slot = "8")]
	[EventInterest(new Type[]
	{
		typeof(ContextualMenuPopulateEvent),
		typeof(KeyDownEvent),
		typeof(KeyUpEvent),
		typeof(ValidateCommandEvent),
		typeof(ExecuteCommandEvent),
		typeof(FocusEvent),
		typeof(BlurEvent),
		typeof(FocusInEvent),
		typeof(FocusOutEvent),
		typeof(PointerDownEvent),
		typeof(PointerUpEvent),
		typeof(PointerMoveEvent),
		typeof(NavigationMoveEvent),
		typeof(NavigationSubmitEvent),
		typeof(NavigationCancelEvent),
		typeof(IMEEvent),
		typeof(GeometryChangedEvent),
		typeof(AttachToPanelEvent),
		typeof(DetachFromPanelEvent)
	})]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x60023C1")]
	[Address(RVA = "0x31323C0", Offset = "0x31309C0", VA = "0x1831323C0")]
	private void OnAttachToPanel(AttachToPanelEvent attachEvent)
	{
	}

	[Token(Token = "0x60023C2")]
	[Address(RVA = "0x31324A0", Offset = "0x3130AA0", VA = "0x1831324A0")]
	private void OnDetachFromPanel(DetachFromPanelEvent detachEvent)
	{
	}

	[Token(Token = "0x60023CF")]
	[Address(RVA = "0x3132A00", Offset = "0x3131000", VA = "0x183132A00")]
	internal static void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60023D0")]
	[Address(RVA = "0x31327E0", Offset = "0x3130DE0", VA = "0x1831327E0")]
	internal void OnGenerateTextOver(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60023D1")]
	[Address(RVA = "0x31325C0", Offset = "0x3130BC0", VA = "0x1831325C0")]
	internal void OnGenerateTextOverNative(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60023D2")]
	[Address(RVA = "0x31318E0", Offset = "0x312FEE0", VA = "0x1831318E0")]
	internal string ElideText(string drawText, string ellipsisText, float width, TextOverflowPosition textOverflowPosition)
	{
		return null;
	}

	[Token(Token = "0x60023D3")]
	[Address(RVA = "0x3134960", Offset = "0x3132F60", VA = "0x183134960")]
	private void UpdateTooltip()
	{
	}

	[Token(Token = "0x60023D4")]
	[Address(RVA = "0x31349D0", Offset = "0x3132FD0", VA = "0x1831349D0")]
	private void UpdateVisibleText()
	{
	}

	[Token(Token = "0x60023D5")]
	[Address(RVA = "0x3132D30", Offset = "0x3131330", VA = "0x183132D30")]
	private bool ShouldElide()
	{
		return default(bool);
	}

	[Token(Token = "0x60023D7")]
	[Address(RVA = "0x3132390", Offset = "0x3130990", VA = "0x183132390")]
	public Vector2 MeasureTextSize(string textToMeasure, float width, MeasureMode widthMode, float height, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60023D8")]
	[Address(RVA = "0x3130200", Offset = "0x312E800", VA = "0x183130200", Slot = "137")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60023DD")]
	[Address(RVA = "0x312FC80", Offset = "0x312E280", VA = "0x18312FC80")]
	internal static bool AnySizeAutoOrNone(ComputedStyle computedStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x60023DE")]
	[Address(RVA = "0x3132D80", Offset = "0x3131380", VA = "0x183132D80", Slot = "145")]
	private void UnityEngine_002EUIElements_002EINotifyValueChanged_003CSystem_002EString_003E_002ESetValueWithoutNotify(string newValue)
	{
	}

	[Token(Token = "0x60023F5")]
	[Address(RVA = "0x3132C20", Offset = "0x3131220", VA = "0x183132C20")]
	private void ProcessMenuCommand(string command)
	{
	}

	[Token(Token = "0x60023F6")]
	[Address(RVA = "0x31301C0", Offset = "0x312E7C0", VA = "0x1831301C0")]
	private void Cut(DropdownMenuAction a)
	{
	}

	[Token(Token = "0x60023F7")]
	[Address(RVA = "0x31300F0", Offset = "0x312E6F0", VA = "0x1831300F0")]
	private void Copy(DropdownMenuAction a)
	{
	}

	[Token(Token = "0x60023F8")]
	[Address(RVA = "0x3132BE0", Offset = "0x31311E0", VA = "0x183132BE0")]
	private void Paste(DropdownMenuAction a)
	{
	}

	[Token(Token = "0x60023F9")]
	[Address(RVA = "0x312FD20", Offset = "0x312E320", VA = "0x18312FD20")]
	private void BuildContextualMenu(ContextualMenuPopulateEvent evt)
	{
	}

	[Token(Token = "0x60023FA")]
	[Address(RVA = "0x3130130", Offset = "0x312E730", VA = "0x183130130")]
	private DropdownMenuAction.Status CutActionStatus(DropdownMenuAction a)
	{
		return default(DropdownMenuAction.Status);
	}

	[Token(Token = "0x60023FB")]
	[Address(RVA = "0x3130060", Offset = "0x312E660", VA = "0x183130060")]
	private DropdownMenuAction.Status CopyActionStatus(DropdownMenuAction a)
	{
		return default(DropdownMenuAction.Status);
	}

	[Token(Token = "0x60023FC")]
	[Address(RVA = "0x3132B70", Offset = "0x3131170", VA = "0x183132B70")]
	private DropdownMenuAction.Status PasteActionStatus(DropdownMenuAction a)
	{
		return default(DropdownMenuAction.Status);
	}

	[Token(Token = "0x60023FD")]
	[Address(RVA = "0x3131450", Offset = "0x312FA50", VA = "0x183131450")]
	private void EditionHandleEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6002406")]
	[Address(RVA = "0x31332C0", Offset = "0x31318C0", VA = "0x1831332C0", Slot = "156")]
	private void UnityEngine_002EUIElements_002EITextEdition_002ESaveValueAndText()
	{
	}

	[Token(Token = "0x6002407")]
	[Address(RVA = "0x31332A0", Offset = "0x31318A0", VA = "0x1831332A0", Slot = "157")]
	private void UnityEngine_002EUIElements_002EITextEdition_002ERestoreValueAndText()
	{
	}

	[Token(Token = "0x6002416")]
	[Address(RVA = "0x3133300", Offset = "0x3131900", VA = "0x183133300", Slot = "170")]
	private void UnityEngine_002EUIElements_002EITextEdition_002EUpdateText(string value)
	{
	}

	[Token(Token = "0x6002417")]
	[Address(RVA = "0x3133220", Offset = "0x3131820", VA = "0x183133220", Slot = "171")]
	private string UnityEngine_002EUIElements_002EITextEdition_002ECullString(string s)
	{
		return null;
	}

	[Token(Token = "0x600242B")]
	[Address(RVA = "0xB5FB80", Offset = "0xB5E180", VA = "0x180B5FB80")]
	private void SetRenderedText(string value)
	{
	}

	[Token(Token = "0x600243A")]
	[Address(RVA = "0x3133FA0", Offset = "0x31325A0", VA = "0x183133FA0", Slot = "202")]
	private void UnityEngine_002EUIElements_002EITextSelection_002ESelectAll()
	{
	}

	[Token(Token = "0x600243B")]
	[Address(RVA = "0x3134010", Offset = "0x3132610", VA = "0x183134010", Slot = "203")]
	private void UnityEngine_002EUIElements_002EITextSelection_002ESelectNone()
	{
	}

	[Token(Token = "0x600243C")]
	[Address(RVA = "0x3133F30", Offset = "0x3132530", VA = "0x183133F30", Slot = "201")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EHasSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x600245A")]
	[Address(RVA = "0x3130630", Offset = "0x312EC30", VA = "0x183130630")]
	private void DrawHighlighting(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600245B")]
	[Address(RVA = "0x3130F10", Offset = "0x312F510", VA = "0x183130F10")]
	private void DrawNativeHighlighting(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600245C")]
	[Address(RVA = "0x31302F0", Offset = "0x312E8F0", VA = "0x1831302F0")]
	internal void DrawCaret(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600245D")]
	[Address(RVA = "0x3131D90", Offset = "0x3130390", VA = "0x183131D90")]
	private int GetLastCharacterAt(int lineIndex)
	{
		return default(int);
	}
}
