// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextElement
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B3E000", Offset = "0x6B3D000", VA = "0x6B3E000")]
		internal GlyphsEnumerable(TextElement te, List<NativeSlice<Vertex>> vertices)
		{
		}

		[Token(Token = "0x6002460")]
		[Address(RVA = "0x6B317F0", Offset = "0x6B307F0", VA = "0x6B317F0")]
		internal GlyphsEnumerable(TextElement te, List<NativeSlice<Vertex>> vertices, Span<UnityEngine.TextCore.Text.ATGMeshInfo> meshInfos)
		{
		}

		[Token(Token = "0x6002461")]
		[Address(RVA = "0x6B3E040", Offset = "0x6B3D040", VA = "0x6B3E040")]
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
		[Address(RVA = "0x6B3E100", Offset = "0x6B3D100", VA = "0x6B3E100")]
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
		[Address(RVA = "0x6B3E140", Offset = "0x6B3D140", VA = "0x6B3E140", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6002464")]
		[Address(RVA = "0x6B3E7E0", Offset = "0x6B3D7E0", VA = "0x6B3E7E0")]
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
		[Address(RVA = "0x6B35D50", Offset = "0x6B34D50", VA = "0x6B35D50")]
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
		[Address(RVA = "0x6B35D60", Offset = "0x6B34D60", VA = "0x6B35D60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60023BF")]
		[Address(RVA = "0x6B35D70", Offset = "0x6B34D70", VA = "0x6B35D70")]
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
		[Address(RVA = "0x6B36920", Offset = "0x6B35920", VA = "0x6B36920", Slot = "211")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023C4")]
		[Address(RVA = "0x6B369B0", Offset = "0x6B359B0", VA = "0x6B369B0", Slot = "212")]
		set
		{
		}
	}

	[Token(Token = "0x17000952")]
	[CreateProperty]
	public bool enableRichText
	{
		[Token(Token = "0x60023C5")]
		[Address(RVA = "0x6B36A50", Offset = "0x6B35A50", VA = "0x6B36A50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023C6")]
		[Address(RVA = "0x6B36A60", Offset = "0x6B35A60", VA = "0x6B36A60")]
		set
		{
		}
	}

	[Token(Token = "0x17000953")]
	[CreateProperty]
	public bool emojiFallbackSupport
	{
		[Token(Token = "0x60023C7")]
		[Address(RVA = "0x6B36AF0", Offset = "0x6B35AF0", VA = "0x6B36AF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023C8")]
		[Address(RVA = "0x6B36B00", Offset = "0x6B35B00", VA = "0x6B36B00")]
		set
		{
		}
	}

	[Token(Token = "0x17000954")]
	[CreateProperty]
	public bool parseEscapeSequences
	{
		[Token(Token = "0x60023C9")]
		[Address(RVA = "0x6B36B90", Offset = "0x6B35B90", VA = "0x6B36B90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023CA")]
		[Address(RVA = "0x6B36BA0", Offset = "0x6B35BA0", VA = "0x6B36BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000955")]
	[CreateProperty]
	public bool displayTooltipWhenElided
	{
		[Token(Token = "0x60023CB")]
		[Address(RVA = "0x6B36C30", Offset = "0x6B35C30", VA = "0x6B36C30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023CC")]
		[Address(RVA = "0x6B36C40", Offset = "0x6B35C40", VA = "0x6B36C40")]
		set
		{
		}
	}

	[Token(Token = "0x17000956")]
	[CreateProperty(ReadOnly = true)]
	public bool isElided
	{
		[Token(Token = "0x60023CD")]
		[Address(RVA = "0x6B36CD0", Offset = "0x6B35CD0", VA = "0x6B36CD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023CE")]
		[Address(RVA = "0x6B36CE0", Offset = "0x6B35CE0", VA = "0x6B36CE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000957")]
	internal bool hasFocus
	{
		[Token(Token = "0x60023D6")]
		[Address(RVA = "0x6B38F30", Offset = "0x6B37F30", VA = "0x6B38F30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000958")]
	private string UnityEngine_002EUIElements_002EINotifyValueChanged_003CSystem_002EString_003E_002Evalue
	{
		[Token(Token = "0x60023D9")]
		[Address(RVA = "0x6B39030", Offset = "0x6B38030", VA = "0x6B39030", Slot = "143")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023DA")]
		[Address(RVA = "0x6B39060", Offset = "0x6B38060", VA = "0x6B39060", Slot = "144")]
		set
		{
		}
	}

	[Token(Token = "0x17000959")]
	[CreateProperty]
	private string value
	{
		[Token(Token = "0x60023DB")]
		[Address(RVA = "0x6B39390", Offset = "0x6B38390", VA = "0x6B39390")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023DC")]
		[Address(RVA = "0x6B39420", Offset = "0x6B38420", VA = "0x6B39420")]
		set
		{
		}
	}

	[Token(Token = "0x1700095A")]
	internal ITextEdition edition
	{
		[Token(Token = "0x60023DF")]
		[Address(RVA = "0x6B2F4E0", Offset = "0x6B2E4E0", VA = "0x6B2F4E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700095B")]
	internal TextEditingManipulator editingManipulator
	{
		[Token(Token = "0x60023E0")]
		[Address(RVA = "0x6B39740", Offset = "0x6B38740", VA = "0x6B39740")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60023E1")]
		[Address(RVA = "0x6B39750", Offset = "0x6B38750", VA = "0x6B39750")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700095C")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002Emultiline
	{
		[Token(Token = "0x60023E2")]
		[Address(RVA = "0x6B39770", Offset = "0x6B38770", VA = "0x6B39770", Slot = "146")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023E3")]
		[Address(RVA = "0x6B39780", Offset = "0x6B38780", VA = "0x6B39780", Slot = "147")]
		set
		{
		}
	}

	[Token(Token = "0x1700095D")]
	private TouchScreenKeyboard UnityEngine_002EUIElements_002EITextEdition_002EtouchScreenKeyboard
	{
		[Token(Token = "0x60023E4")]
		[Address(RVA = "0x6B39860", Offset = "0x6B38860", VA = "0x6B39860", Slot = "184")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700095E")]
	private TouchScreenKeyboardType UnityEngine_002EUIElements_002EITextEdition_002EkeyboardType
	{
		[Token(Token = "0x60023E5")]
		[Address(RVA = "0x6B39870", Offset = "0x6B38870", VA = "0x6B39870", Slot = "185")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60023E6")]
		[Address(RVA = "0x6B39880", Offset = "0x6B38880", VA = "0x6B39880", Slot = "186")]
		set
		{
		}
	}

	[Token(Token = "0x1700095F")]
	[CreateProperty]
	private TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60023E7")]
		[Address(RVA = "0x6B39900", Offset = "0x6B38900", VA = "0x6B39900")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60023E8")]
		[Address(RVA = "0x6B399A0", Offset = "0x6B389A0", VA = "0x6B399A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000960")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EhideSoftKeyboard
	{
		[Token(Token = "0x60023E9")]
		[Address(RVA = "0x6B39A40", Offset = "0x6B38A40", VA = "0x6B39A40", Slot = "180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023EA")]
		[Address(RVA = "0x6B39A50", Offset = "0x6B38A50", VA = "0x6B39A50", Slot = "181")]
		set
		{
		}
	}

	[Token(Token = "0x17000961")]
	[CreateProperty]
	private bool hideSoftKeyboard
	{
		[Token(Token = "0x60023EB")]
		[Address(RVA = "0x6B39AD0", Offset = "0x6B38AD0", VA = "0x6B39AD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023EC")]
		[Address(RVA = "0x6B39B70", Offset = "0x6B38B70", VA = "0x6B39B70")]
		set
		{
		}
	}

	[Token(Token = "0x17000962")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EhideMobileInput
	{
		[Token(Token = "0x60023ED")]
		[Address(RVA = "0x6B39C10", Offset = "0x6B38C10", VA = "0x6B39C10", Slot = "182")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023EE")]
		[Address(RVA = "0x6B39C50", Offset = "0x6B38C50", VA = "0x6B39C50", Slot = "183")]
		set
		{
		}
	}

	[Token(Token = "0x17000963")]
	[CreateProperty]
	private bool hideMobileInput
	{
		[Token(Token = "0x60023EF")]
		[Address(RVA = "0x6B39CD0", Offset = "0x6B38CD0", VA = "0x6B39CD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023F0")]
		[Address(RVA = "0x6B39D70", Offset = "0x6B38D70", VA = "0x6B39D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000964")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EisReadOnly
	{
		[Token(Token = "0x60023F1")]
		[Address(RVA = "0x6B39E10", Offset = "0x6B38E10", VA = "0x6B39E10", Slot = "148")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023F2")]
		[Address(RVA = "0x6B39E30", Offset = "0x6B38E30", VA = "0x6B39E30", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x17000965")]
	[CreateProperty]
	private bool isReadOnly
	{
		[Token(Token = "0x60023F3")]
		[Address(RVA = "0x6B39F40", Offset = "0x6B38F40", VA = "0x6B39F40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60023F4")]
		[Address(RVA = "0x6B39FE0", Offset = "0x6B38FE0", VA = "0x6B39FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000966")]
	private int UnityEngine_002EUIElements_002EITextEdition_002EmaxLength
	{
		[Token(Token = "0x60023FE")]
		[Address(RVA = "0x6B3A910", Offset = "0x6B39910", VA = "0x6B3A910", Slot = "150")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60023FF")]
		[Address(RVA = "0x6B3A920", Offset = "0x6B39920", VA = "0x6B3A920", Slot = "151")]
		set
		{
		}
	}

	[Token(Token = "0x17000967")]
	[CreateProperty]
	private int maxLength
	{
		[Token(Token = "0x6002400")]
		[Address(RVA = "0x6B3AA40", Offset = "0x6B39A40", VA = "0x6B3AA40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002401")]
		[Address(RVA = "0x6B3AAE0", Offset = "0x6B39AE0", VA = "0x6B3AAE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000968")]
	private string UnityEngine_002EUIElements_002EITextEdition_002Eplaceholder
	{
		[Token(Token = "0x6002402")]
		[Address(RVA = "0x6B3AB80", Offset = "0x6B39B80", VA = "0x6B3AB80", Slot = "152")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002403")]
		[Address(RVA = "0x6B3AB90", Offset = "0x6B39B90", VA = "0x6B3AB90", Slot = "153")]
		set
		{
		}
	}

	[Token(Token = "0x17000969")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EisDelayed
	{
		[Token(Token = "0x6002404")]
		[Address(RVA = "0x6B3AD20", Offset = "0x6B39D20", VA = "0x6B3AD20", Slot = "154")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002405")]
		[Address(RVA = "0x6B3AD30", Offset = "0x6B39D30", VA = "0x6B3AD30", Slot = "155")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096A")]
	private Func<char, bool> UnityEngine_002EUIElements_002EITextEdition_002EAcceptCharacter
	{
		[Token(Token = "0x6002408")]
		[Address(RVA = "0x6B3AD90", Offset = "0x6B39D90", VA = "0x6B3AD90", Slot = "158")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002409")]
		[Address(RVA = "0x6B3ADA0", Offset = "0x6B39DA0", VA = "0x6B3ADA0", Slot = "159")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096B")]
	private Action<bool> UnityEngine_002EUIElements_002EITextEdition_002EUpdateScrollOffset
	{
		[Token(Token = "0x600240A")]
		[Address(RVA = "0x6B3ADC0", Offset = "0x6B39DC0", VA = "0x6B3ADC0", Slot = "160")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600240B")]
		[Address(RVA = "0x6B3ADD0", Offset = "0x6B39DD0", VA = "0x6B3ADD0", Slot = "161")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096C")]
	private Action UnityEngine_002EUIElements_002EITextEdition_002EUpdateValueFromText
	{
		[Token(Token = "0x600240C")]
		[Address(RVA = "0x6B3ADF0", Offset = "0x6B39DF0", VA = "0x6B3ADF0", Slot = "162")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600240D")]
		[Address(RVA = "0x6B3AE00", Offset = "0x6B39E00", VA = "0x6B3AE00", Slot = "163")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096D")]
	private Action UnityEngine_002EUIElements_002EITextEdition_002EUpdateTextFromValue
	{
		[Token(Token = "0x600240E")]
		[Address(RVA = "0x6B3AE20", Offset = "0x6B39E20", VA = "0x6B3AE20", Slot = "164")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600240F")]
		[Address(RVA = "0x6B3AE30", Offset = "0x6B39E30", VA = "0x6B3AE30", Slot = "165")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096E")]
	private Action UnityEngine_002EUIElements_002EITextEdition_002EMoveFocusToCompositeRoot
	{
		[Token(Token = "0x6002410")]
		[Address(RVA = "0x6B3AE50", Offset = "0x6B39E50", VA = "0x6B3AE50", Slot = "166")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002411")]
		[Address(RVA = "0x6B3AE60", Offset = "0x6B39E60", VA = "0x6B3AE60", Slot = "167")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700096F")]
	internal Action OnPlaceholderChanged
	{
		[Token(Token = "0x6002412")]
		[Address(RVA = "0x6B3AE80", Offset = "0x6B39E80", VA = "0x6B3AE80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002413")]
		[Address(RVA = "0x6B3AE90", Offset = "0x6B39E90", VA = "0x6B3AE90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000970")]
	private Func<string> UnityEngine_002EUIElements_002EITextEdition_002EGetDefaultValueType
	{
		[Token(Token = "0x6002414")]
		[Address(RVA = "0x6B3AEB0", Offset = "0x6B39EB0", VA = "0x6B3AEB0", Slot = "168")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002415")]
		[Address(RVA = "0x6B3AEC0", Offset = "0x6B39EC0", VA = "0x6B3AEC0", Slot = "169")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000971")]
	private char UnityEngine_002EUIElements_002EITextEdition_002EmaskChar
	{
		[Token(Token = "0x6002418")]
		[Address(RVA = "0x6B3B260", Offset = "0x6B3A260", VA = "0x6B3B260", Slot = "172")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6002419")]
		[Address(RVA = "0x6B3B270", Offset = "0x6B3A270", VA = "0x6B3B270", Slot = "173")]
		set
		{
		}
	}

	[Token(Token = "0x17000972")]
	[CreateProperty]
	private char maskChar
	{
		[Token(Token = "0x600241A")]
		[Address(RVA = "0x6B3B370", Offset = "0x6B3A370", VA = "0x6B3B370")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600241B")]
		[Address(RVA = "0x6B3B410", Offset = "0x6B3A410", VA = "0x6B3B410")]
		set
		{
		}
	}

	[Token(Token = "0x17000973")]
	private char effectiveMaskChar
	{
		[Token(Token = "0x600241C")]
		[Address(RVA = "0x6B3B4B0", Offset = "0x6B3A4B0", VA = "0x6B3B4B0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000974")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EisPassword
	{
		[Token(Token = "0x600241D")]
		[Address(RVA = "0x6B3B560", Offset = "0x6B3A560", VA = "0x6B3B560", Slot = "174")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600241E")]
		[Address(RVA = "0x6B3B570", Offset = "0x6B3A570", VA = "0x6B3B570", Slot = "175")]
		set
		{
		}
	}

	[Token(Token = "0x17000975")]
	[CreateProperty]
	private bool isPassword
	{
		[Token(Token = "0x600241F")]
		[Address(RVA = "0x6B3B600", Offset = "0x6B3A600", VA = "0x6B3B600")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002420")]
		[Address(RVA = "0x6B3B6A0", Offset = "0x6B3A6A0", VA = "0x6B3B6A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000976")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EhidePlaceholderOnFocus
	{
		[Token(Token = "0x6002421")]
		[Address(RVA = "0x6B3B740", Offset = "0x6B3A740", VA = "0x6B3B740", Slot = "176")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002422")]
		[Address(RVA = "0x6B3B750", Offset = "0x6B3A750", VA = "0x6B3B750", Slot = "177")]
		set
		{
		}
	}

	[Token(Token = "0x17000977")]
	internal bool needsPlaceholderIfTextIsEmpty
	{
		[Token(Token = "0x6002423")]
		[Address(RVA = "0x6B3B760", Offset = "0x6B3A760", VA = "0x6B3B760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000978")]
	internal bool showPlaceholderText
	{
		[Token(Token = "0x6002424")]
		[Address(RVA = "0x6B2F4B0", Offset = "0x6B2E4B0", VA = "0x6B2F4B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000979")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EautoCorrection
	{
		[Token(Token = "0x6002425")]
		[Address(RVA = "0x6B3B850", Offset = "0x6B3A850", VA = "0x6B3B850", Slot = "178")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002426")]
		[Address(RVA = "0x6B3B860", Offset = "0x6B3A860", VA = "0x6B3B860", Slot = "179")]
		set
		{
		}
	}

	[Token(Token = "0x1700097A")]
	[CreateProperty]
	private bool autoCorrection
	{
		[Token(Token = "0x6002427")]
		[Address(RVA = "0x6B3B8E0", Offset = "0x6B3A8E0", VA = "0x6B3B8E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002428")]
		[Address(RVA = "0x6B3B980", Offset = "0x6B3A980", VA = "0x6B3B980")]
		set
		{
		}
	}

	[Token(Token = "0x1700097B")]
	internal UnityEngine.TextCore.Text.RenderedText renderedText
	{
		[Token(Token = "0x6002429")]
		[Address(RVA = "0x6B2EF90", Offset = "0x6B2DF90", VA = "0x6B2EF90")]
		get
		{
			return default(UnityEngine.TextCore.Text.RenderedText);
		}
	}

	[Token(Token = "0x1700097C")]
	internal string renderedTextString
	{
		[Token(Token = "0x600242A")]
		[Address(RVA = "0x6B2D560", Offset = "0x6B2C560", VA = "0x6B2D560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700097D")]
	internal string originalText
	{
		[Token(Token = "0x600242C")]
		[Address(RVA = "0x6B3BAB0", Offset = "0x6B3AAB0", VA = "0x6B3BAB0")]
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
		[Address(RVA = "0x6B36300", Offset = "0x6B35300", VA = "0x6B36300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700097F")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EisSelectable
	{
		[Token(Token = "0x600242E")]
		[Address(RVA = "0x6B3BAC0", Offset = "0x6B3AAC0", VA = "0x6B3BAC0", Slot = "187")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600242F")]
		[Address(RVA = "0x6B3BAE0", Offset = "0x6B3AAE0", VA = "0x6B3BAE0", Slot = "188")]
		set
		{
		}
	}

	[Token(Token = "0x17000980")]
	[CreateProperty]
	internal bool isSelectable
	{
		[Token(Token = "0x6002430")]
		[Address(RVA = "0x6B3BA20", Offset = "0x6B3AA20", VA = "0x6B3BA20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002431")]
		[Address(RVA = "0x6B3BBA0", Offset = "0x6B3ABA0", VA = "0x6B3BBA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000981")]
	private int UnityEngine_002EUIElements_002EITextSelection_002EcursorIndex
	{
		[Token(Token = "0x6002432")]
		[Address(RVA = "0x6B3BC40", Offset = "0x6B3AC40", VA = "0x6B3BC40", Slot = "193")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002433")]
		[Address(RVA = "0x6B3BD70", Offset = "0x6B3AD70", VA = "0x6B3BD70", Slot = "194")]
		set
		{
		}
	}

	[Token(Token = "0x17000982")]
	[CreateProperty]
	private int cursorIndex
	{
		[Token(Token = "0x6002434")]
		[Address(RVA = "0x6B3BFD0", Offset = "0x6B3AFD0", VA = "0x6B3BFD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002435")]
		[Address(RVA = "0x6B3C070", Offset = "0x6B3B070", VA = "0x6B3C070")]
		set
		{
		}
	}

	[Token(Token = "0x17000983")]
	private int UnityEngine_002EUIElements_002EITextSelection_002EselectIndex
	{
		[Token(Token = "0x6002436")]
		[Address(RVA = "0x6B3C110", Offset = "0x6B3B110", VA = "0x6B3C110", Slot = "197")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002437")]
		[Address(RVA = "0x6B3C240", Offset = "0x6B3B240", VA = "0x6B3C240", Slot = "198")]
		set
		{
		}
	}

	[Token(Token = "0x17000984")]
	[CreateProperty]
	private int selectIndex
	{
		[Token(Token = "0x6002438")]
		[Address(RVA = "0x6B3C4A0", Offset = "0x6B3B4A0", VA = "0x6B3C4A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002439")]
		[Address(RVA = "0x6B3C540", Offset = "0x6B3B540", VA = "0x6B3C540")]
		set
		{
		}
	}

	[Token(Token = "0x17000985")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EdoubleClickSelectsWord
	{
		[Token(Token = "0x600243D")]
		[Address(RVA = "0x6B3C960", Offset = "0x6B3B960", VA = "0x6B3C960", Slot = "195")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600243E")]
		[Address(RVA = "0x6B3C970", Offset = "0x6B3B970", VA = "0x6B3C970", Slot = "196")]
		set
		{
		}
	}

	[Token(Token = "0x17000986")]
	[CreateProperty]
	internal bool doubleClickSelectsWord
	{
		[Token(Token = "0x600243F")]
		[Address(RVA = "0x6B3C9F0", Offset = "0x6B3B9F0", VA = "0x6B3C9F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002440")]
		[Address(RVA = "0x6B3CA90", Offset = "0x6B3BA90", VA = "0x6B3CA90")]
		set
		{
		}
	}

	[Token(Token = "0x17000987")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EtripleClickSelectsLine
	{
		[Token(Token = "0x6002441")]
		[Address(RVA = "0x6B3CB30", Offset = "0x6B3BB30", VA = "0x6B3CB30", Slot = "199")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002442")]
		[Address(RVA = "0x6B3CB40", Offset = "0x6B3BB40", VA = "0x6B3CB40", Slot = "200")]
		set
		{
		}
	}

	[Token(Token = "0x17000988")]
	[CreateProperty]
	internal bool tripleClickSelectsLine
	{
		[Token(Token = "0x6002443")]
		[Address(RVA = "0x6B3CBC0", Offset = "0x6B3BBC0", VA = "0x6B3CBC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002444")]
		[Address(RVA = "0x6B3CC60", Offset = "0x6B3BC60", VA = "0x6B3CC60")]
		set
		{
		}
	}

	[Token(Token = "0x17000989")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EselectAllOnFocus
	{
		[Token(Token = "0x6002445")]
		[Address(RVA = "0x6B3CD00", Offset = "0x6B3BD00", VA = "0x6B3CD00", Slot = "204")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002446")]
		[Address(RVA = "0x6B3CD10", Offset = "0x6B3BD10", VA = "0x6B3CD10", Slot = "205")]
		set
		{
		}
	}

	[Token(Token = "0x1700098A")]
	[CreateProperty]
	private bool selectAllOnFocus
	{
		[Token(Token = "0x6002447")]
		[Address(RVA = "0x6B3CD90", Offset = "0x6B3BD90", VA = "0x6B3CD90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002448")]
		[Address(RVA = "0x6B3CE30", Offset = "0x6B3BE30", VA = "0x6B3CE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700098B")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EselectAllOnMouseUp
	{
		[Token(Token = "0x6002449")]
		[Address(RVA = "0x6B3CED0", Offset = "0x6B3BED0", VA = "0x6B3CED0", Slot = "206")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600244A")]
		[Address(RVA = "0x6B3CEE0", Offset = "0x6B3BEE0", VA = "0x6B3CEE0", Slot = "207")]
		set
		{
		}
	}

	[Token(Token = "0x1700098C")]
	[CreateProperty]
	private bool selectAllOnMouseUp
	{
		[Token(Token = "0x600244B")]
		[Address(RVA = "0x6B3CF60", Offset = "0x6B3BF60", VA = "0x6B3CF60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600244C")]
		[Address(RVA = "0x6B3D000", Offset = "0x6B3C000", VA = "0x6B3D000")]
		set
		{
		}
	}

	[Token(Token = "0x1700098D")]
	private Vector2 UnityEngine_002EUIElements_002EITextSelection_002EcursorPosition
	{
		[Token(Token = "0x600244D")]
		[Address(RVA = "0x6B3D0A0", Offset = "0x6B3C0A0", VA = "0x6B3D0A0", Slot = "208")]
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
		[Address(RVA = "0x6B3D1D0", Offset = "0x6B3C1D0", VA = "0x6B3D1D0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700098F")]
	private float UnityEngine_002EUIElements_002EITextSelection_002ElineHeightAtCursorPosition
	{
		[Token(Token = "0x600244F")]
		[Address(RVA = "0x6B3D270", Offset = "0x6B3C270", VA = "0x6B3D270", Slot = "209")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000990")]
	private Color UnityEngine_002EUIElements_002EITextSelection_002EselectionColor
	{
		[Token(Token = "0x6002450")]
		[Address(RVA = "0x6B3D340", Offset = "0x6B3C340", VA = "0x6B3D340", Slot = "191")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6002451")]
		[Address(RVA = "0x6B3D360", Offset = "0x6B3C360", VA = "0x6B3D360", Slot = "192")]
		set
		{
		}
	}

	[Token(Token = "0x17000991")]
	internal Color selectionColor
	{
		[Token(Token = "0x6002452")]
		[Address(RVA = "0x6B3D3C0", Offset = "0x6B3C3C0", VA = "0x6B3D3C0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6002453")]
		[Address(RVA = "0x6B3D3E0", Offset = "0x6B3C3E0", VA = "0x6B3D3E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000992")]
	private Color UnityEngine_002EUIElements_002EITextSelection_002EcursorColor
	{
		[Token(Token = "0x6002454")]
		[Address(RVA = "0x6B3D440", Offset = "0x6B3C440", VA = "0x6B3D440", Slot = "189")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6002455")]
		[Address(RVA = "0x6B3D460", Offset = "0x6B3C460", VA = "0x6B3D460", Slot = "190")]
		set
		{
		}
	}

	[Token(Token = "0x17000993")]
	internal Color cursorColor
	{
		[Token(Token = "0x6002456")]
		[Address(RVA = "0x6B3D4C0", Offset = "0x6B3C4C0", VA = "0x6B3D4C0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6002457")]
		[Address(RVA = "0x6B3D4E0", Offset = "0x6B3C4E0", VA = "0x6B3D4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000994")]
	private float UnityEngine_002EUIElements_002EITextSelection_002EcursorWidth
	{
		[Token(Token = "0x6002458")]
		[Address(RVA = "0x6B3D540", Offset = "0x6B3C540", VA = "0x6B3D540", Slot = "210")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000995")]
	internal TextSelectingManipulator selectingManipulator
	{
		[Token(Token = "0x6002459")]
		[Address(RVA = "0x6B34E00", Offset = "0x6B33E00", VA = "0x6B34E00")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60023BB")]
	[Address(RVA = "0x6B35A40", Offset = "0x6B34A40", VA = "0x6B35A40")]
	public TextElement()
	{
	}

	[Token(Token = "0x60023BC")]
	[Address(RVA = "0x6B35D30", Offset = "0x6B34D30", VA = "0x6B35D30")]
	private string GetDefaultValueType()
	{
		return null;
	}

	[Token(Token = "0x60023C0")]
	[Address(RVA = "0x6B35D90", Offset = "0x6B34D90", VA = "0x6B35D90", Slot = "8")]
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
	[Address(RVA = "0x6B360F0", Offset = "0x6B350F0", VA = "0x6B360F0")]
	private void OnAttachToPanel(AttachToPanelEvent attachEvent)
	{
	}

	[Token(Token = "0x60023C2")]
	[Address(RVA = "0x6B361D0", Offset = "0x6B351D0", VA = "0x6B361D0")]
	private void OnDetachFromPanel(DetachFromPanelEvent detachEvent)
	{
	}

	[Token(Token = "0x60023CF")]
	[Address(RVA = "0x6B36CF0", Offset = "0x6B35CF0", VA = "0x6B36CF0")]
	internal static void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60023D0")]
	[Address(RVA = "0x6B36E40", Offset = "0x6B35E40", VA = "0x6B36E40")]
	internal void OnGenerateTextOver(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60023D1")]
	[Address(RVA = "0x6B31990", Offset = "0x6B30990", VA = "0x6B31990")]
	internal void OnGenerateTextOverNative(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60023D2")]
	[Address(RVA = "0x6B38A30", Offset = "0x6B37A30", VA = "0x6B38A30")]
	internal string ElideText(string drawText, string ellipsisText, float width, TextOverflowPosition textOverflowPosition)
	{
		return null;
	}

	[Token(Token = "0x60023D3")]
	[Address(RVA = "0x6B383C0", Offset = "0x6B373C0", VA = "0x6B383C0")]
	private void UpdateTooltip()
	{
	}

	[Token(Token = "0x60023D4")]
	[Address(RVA = "0x6B35F50", Offset = "0x6B34F50", VA = "0x6B35F50")]
	private void UpdateVisibleText()
	{
	}

	[Token(Token = "0x60023D5")]
	[Address(RVA = "0x6B38370", Offset = "0x6B37370", VA = "0x6B38370")]
	private bool ShouldElide()
	{
		return default(bool);
	}

	[Token(Token = "0x60023D7")]
	[Address(RVA = "0x6B38F20", Offset = "0x6B37F20", VA = "0x6B38F20")]
	public Vector2 MeasureTextSize(string textToMeasure, float width, MeasureMode widthMode, float height, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60023D8")]
	[Address(RVA = "0x6B38F80", Offset = "0x6B37F80", VA = "0x6B38F80", Slot = "137")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60023DD")]
	[Address(RVA = "0x6B2FF40", Offset = "0x6B2EF40", VA = "0x6B2FF40")]
	internal static bool AnySizeAutoOrNone(ComputedStyle computedStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x60023DE")]
	[Address(RVA = "0x6B394C0", Offset = "0x6B384C0", VA = "0x6B394C0", Slot = "145")]
	private void UnityEngine_002EUIElements_002EINotifyValueChanged_003CSystem_002EString_003E_002ESetValueWithoutNotify(string newValue)
	{
	}

	[Token(Token = "0x60023F5")]
	[Address(RVA = "0x6B3A080", Offset = "0x6B39080", VA = "0x6B3A080")]
	private void ProcessMenuCommand(string command)
	{
	}

	[Token(Token = "0x60023F6")]
	[Address(RVA = "0x6B3A200", Offset = "0x6B39200", VA = "0x6B3A200")]
	private void Cut(DropdownMenuAction a)
	{
	}

	[Token(Token = "0x60023F7")]
	[Address(RVA = "0x6B3A240", Offset = "0x6B39240", VA = "0x6B3A240")]
	private void Copy(DropdownMenuAction a)
	{
	}

	[Token(Token = "0x60023F8")]
	[Address(RVA = "0x6B3A280", Offset = "0x6B39280", VA = "0x6B3A280")]
	private void Paste(DropdownMenuAction a)
	{
	}

	[Token(Token = "0x60023F9")]
	[Address(RVA = "0x6B3A2C0", Offset = "0x6B392C0", VA = "0x6B3A2C0")]
	private void BuildContextualMenu(ContextualMenuPopulateEvent evt)
	{
	}

	[Token(Token = "0x60023FA")]
	[Address(RVA = "0x6B3A630", Offset = "0x6B39630", VA = "0x6B3A630")]
	private DropdownMenuAction.Status CutActionStatus(DropdownMenuAction a)
	{
		return default(DropdownMenuAction.Status);
	}

	[Token(Token = "0x60023FB")]
	[Address(RVA = "0x6B3A780", Offset = "0x6B39780", VA = "0x6B3A780")]
	private DropdownMenuAction.Status CopyActionStatus(DropdownMenuAction a)
	{
		return default(DropdownMenuAction.Status);
	}

	[Token(Token = "0x60023FC")]
	[Address(RVA = "0x6B3A8C0", Offset = "0x6B398C0", VA = "0x6B3A8C0")]
	private DropdownMenuAction.Status PasteActionStatus(DropdownMenuAction a)
	{
		return default(DropdownMenuAction.Status);
	}

	[Token(Token = "0x60023FD")]
	[Address(RVA = "0x6B36310", Offset = "0x6B35310", VA = "0x6B36310")]
	private void EditionHandleEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6002406")]
	[Address(RVA = "0x6B3AD40", Offset = "0x6B39D40", VA = "0x6B3AD40", Slot = "156")]
	private void UnityEngine_002EUIElements_002EITextEdition_002ESaveValueAndText()
	{
	}

	[Token(Token = "0x6002407")]
	[Address(RVA = "0x6B3AD70", Offset = "0x6B39D70", VA = "0x6B3AD70", Slot = "157")]
	private void UnityEngine_002EUIElements_002EITextEdition_002ERestoreValueAndText()
	{
	}

	[Token(Token = "0x6002416")]
	[Address(RVA = "0x6B3AEE0", Offset = "0x6B39EE0", VA = "0x6B3AEE0", Slot = "170")]
	private void UnityEngine_002EUIElements_002EITextEdition_002EUpdateText(string value)
	{
	}

	[Token(Token = "0x6002417")]
	[Address(RVA = "0x6B3B180", Offset = "0x6B3A180", VA = "0x6B3B180", Slot = "171")]
	private string UnityEngine_002EUIElements_002EITextEdition_002ECullString(string s)
	{
		return null;
	}

	[Token(Token = "0x600242B")]
	[Address(RVA = "0x6B39720", Offset = "0x6B38720", VA = "0x6B39720")]
	private void SetRenderedText(string value)
	{
	}

	[Token(Token = "0x600243A")]
	[Address(RVA = "0x6B3C5E0", Offset = "0x6B3B5E0", VA = "0x6B3C5E0", Slot = "202")]
	private void UnityEngine_002EUIElements_002EITextSelection_002ESelectAll()
	{
	}

	[Token(Token = "0x600243B")]
	[Address(RVA = "0x6B3C710", Offset = "0x6B3B710", VA = "0x6B3C710", Slot = "203")]
	private void UnityEngine_002EUIElements_002EITextSelection_002ESelectNone()
	{
	}

	[Token(Token = "0x600243C")]
	[Address(RVA = "0x6B3C840", Offset = "0x6B3B840", VA = "0x6B3C840", Slot = "201")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EHasSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x600245A")]
	[Address(RVA = "0x6B37210", Offset = "0x6B36210", VA = "0x6B37210")]
	private void DrawHighlighting(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600245B")]
	[Address(RVA = "0x6B38420", Offset = "0x6B37420", VA = "0x6B38420")]
	private void DrawNativeHighlighting(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600245C")]
	[Address(RVA = "0x6B37F50", Offset = "0x6B36F50", VA = "0x6B37F50")]
	internal void DrawCaret(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600245D")]
	[Address(RVA = "0x6B3D550", Offset = "0x6B3C550", VA = "0x6B3D550")]
	private int GetLastCharacterAt(int lineIndex)
	{
		return default(int);
	}
}
