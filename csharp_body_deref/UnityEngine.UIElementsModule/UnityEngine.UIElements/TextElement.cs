using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003EE")]
public class TextElement : BindableElement, INotifyValueChanged<string>, ITextEdition, IExperimentalFeatures, ITextSelection
{
	[Token(Token = "0x20003EF")]
	public new class UxmlFactory : UxmlFactory<TextElement, UxmlTraits>
	{
		[Token(Token = "0x600197C")]
		[Address(RVA = "0x4C36B70", Offset = "0x4C36B70", VA = "0x4C36B70")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20003F0")]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x4000C25")]
		[FieldOffset(Offset = "0x78")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x4000C26")]
		[FieldOffset(Offset = "0x80")]
		private UxmlBoolAttributeDescription m_EnableRichText;

		[Token(Token = "0x4000C27")]
		[FieldOffset(Offset = "0x88")]
		private UxmlBoolAttributeDescription m_ParseEscapeSequences;

		[Token(Token = "0x4000C28")]
		[FieldOffset(Offset = "0x90")]
		private UxmlBoolAttributeDescription m_Selectable;

		[Token(Token = "0x4000C29")]
		[FieldOffset(Offset = "0x98")]
		private UxmlBoolAttributeDescription m_SelectWordByDoubleClick;

		[Token(Token = "0x4000C2A")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlBoolAttributeDescription m_SelectLineByTripleClick;

		[Token(Token = "0x4000C2B")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlBoolAttributeDescription m_DisplayTooltipWhenElided;

		[Token(Token = "0x600197D")]
		[Address(RVA = "0x4C36BB0", Offset = "0x4C36BB0", VA = "0x4C36BB0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600197E")]
		[Address(RVA = "0x4C371C0", Offset = "0x4C371C0", VA = "0x4C371C0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000BE3")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty textProperty;

	[Token(Token = "0x4000BE4")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty enableRichTextProperty;

	[Token(Token = "0x4000BE5")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty parseEscapeSequencesProperty;

	[Token(Token = "0x4000BE6")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty isElidedProperty;

	[Token(Token = "0x4000BE7")]
	[FieldOffset(Offset = "0x280")]
	internal static readonly DataBindingProperty displayTooltipWhenElidedProperty;

	[Token(Token = "0x4000BE8")]
	[FieldOffset(Offset = "0x320")]
	internal static readonly DataBindingProperty valueProperty;

	[Token(Token = "0x4000BE9")]
	[FieldOffset(Offset = "0x3C0")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000BEB")]
	[FieldOffset(Offset = "0x3F0")]
	private string m_Text;

	[Token(Token = "0x4000BEC")]
	[FieldOffset(Offset = "0x3F8")]
	private bool m_EnableRichText;

	[Token(Token = "0x4000BED")]
	[FieldOffset(Offset = "0x3F9")]
	private bool m_ParseEscapeSequences;

	[Token(Token = "0x4000BEE")]
	[FieldOffset(Offset = "0x3FA")]
	private bool m_DisplayTooltipWhenElided;

	[Token(Token = "0x4000BF0")]
	[FieldOffset(Offset = "0x3C8")]
	internal static readonly string k_EllipsisText;

	[Token(Token = "0x4000BF1")]
	[FieldOffset(Offset = "0x400")]
	internal string elidedText;

	[Token(Token = "0x4000BF2")]
	[FieldOffset(Offset = "0x408")]
	private bool m_WasElided;

	[Token(Token = "0x4000BF3")]
	[FieldOffset(Offset = "0x3D0")]
	internal static readonly DataBindingProperty autoCorrectionProperty;

	[Token(Token = "0x4000BF4")]
	[FieldOffset(Offset = "0x470")]
	internal static readonly DataBindingProperty hideMobileInputProperty;

	[Token(Token = "0x4000BF5")]
	[FieldOffset(Offset = "0x510")]
	internal static readonly DataBindingProperty keyboardTypeProperty;

	[Token(Token = "0x4000BF6")]
	[FieldOffset(Offset = "0x5B0")]
	internal static readonly DataBindingProperty isReadOnlyProperty;

	[Token(Token = "0x4000BF7")]
	[FieldOffset(Offset = "0x650")]
	internal static readonly DataBindingProperty isPasswordProperty;

	[Token(Token = "0x4000BF8")]
	[FieldOffset(Offset = "0x6F0")]
	internal static readonly DataBindingProperty maxLengthProperty;

	[Token(Token = "0x4000BF9")]
	[FieldOffset(Offset = "0x790")]
	internal static readonly DataBindingProperty maskCharProperty;

	[Token(Token = "0x4000BFA")]
	[FieldOffset(Offset = "0x410")]
	internal TextEditingManipulator editingManipulator;

	[Token(Token = "0x4000BFB")]
	[FieldOffset(Offset = "0x418")]
	private bool m_Multiline;

	[Token(Token = "0x4000BFC")]
	[FieldOffset(Offset = "0x420")]
	internal TouchScreenKeyboard m_TouchScreenKeyboard;

	[Token(Token = "0x4000BFD")]
	[FieldOffset(Offset = "0x428")]
	internal Action<bool> onIsReadOnlyChanged;

	[Token(Token = "0x4000BFE")]
	[FieldOffset(Offset = "0x430")]
	internal TouchScreenKeyboardType m_KeyboardType;

	[Token(Token = "0x4000BFF")]
	[FieldOffset(Offset = "0x434")]
	private bool m_HideMobileInput;

	[Token(Token = "0x4000C00")]
	[FieldOffset(Offset = "0x435")]
	private bool m_IsReadOnly;

	[Token(Token = "0x4000C01")]
	[FieldOffset(Offset = "0x438")]
	private int m_MaxLength;

	[Token(Token = "0x4000C02")]
	[FieldOffset(Offset = "0x440")]
	private string m_PlaceholderText;

	[Token(Token = "0x4000C0B")]
	[FieldOffset(Offset = "0x488")]
	private string m_RenderedText;

	[Token(Token = "0x4000C0C")]
	[FieldOffset(Offset = "0x490")]
	private string m_OriginalText;

	[Token(Token = "0x4000C0D")]
	[FieldOffset(Offset = "0x498")]
	private char m_MaskChar;

	[Token(Token = "0x4000C0E")]
	[FieldOffset(Offset = "0x49A")]
	private bool m_IsPassword;

	[Token(Token = "0x4000C0F")]
	[FieldOffset(Offset = "0x49B")]
	private bool m_HidePlaceholderTextOnFocus;

	[Token(Token = "0x4000C10")]
	[FieldOffset(Offset = "0x49C")]
	private bool m_AutoCorrection;

	[Token(Token = "0x4000C11")]
	[FieldOffset(Offset = "0x830")]
	internal static readonly DataBindingProperty isSelectableProperty;

	[Token(Token = "0x4000C12")]
	[FieldOffset(Offset = "0x8D0")]
	internal static readonly DataBindingProperty cursorIndexProperty;

	[Token(Token = "0x4000C13")]
	[FieldOffset(Offset = "0x970")]
	internal static readonly DataBindingProperty selectIndexProperty;

	[Token(Token = "0x4000C14")]
	[FieldOffset(Offset = "0xA10")]
	internal static readonly DataBindingProperty doubleClickSelectsWordProperty;

	[Token(Token = "0x4000C15")]
	[FieldOffset(Offset = "0xAB0")]
	internal static readonly DataBindingProperty tripleClickSelectsLineProperty;

	[Token(Token = "0x4000C16")]
	[FieldOffset(Offset = "0xB50")]
	internal static readonly DataBindingProperty cursorPositionProperty;

	[Token(Token = "0x4000C17")]
	[FieldOffset(Offset = "0xBF0")]
	internal static readonly DataBindingProperty selectionColorProperty;

	[Token(Token = "0x4000C18")]
	[FieldOffset(Offset = "0xC90")]
	internal static readonly DataBindingProperty cursorColorProperty;

	[Token(Token = "0x4000C19")]
	[FieldOffset(Offset = "0xD30")]
	internal static readonly DataBindingProperty selectAllOnFocusProperty;

	[Token(Token = "0x4000C1A")]
	[FieldOffset(Offset = "0xDD0")]
	internal static readonly DataBindingProperty selectAllOnMouseUpProperty;

	[Token(Token = "0x4000C1B")]
	[FieldOffset(Offset = "0xE70")]
	internal static readonly DataBindingProperty selectionProperty;

	[Token(Token = "0x4000C1C")]
	[FieldOffset(Offset = "0x4A0")]
	private TextSelectingManipulator m_SelectingManipulator;

	[Token(Token = "0x4000C1D")]
	[FieldOffset(Offset = "0x4A8")]
	private bool m_IsSelectable;

	[Token(Token = "0x4000C1E")]
	[FieldOffset(Offset = "0x4A9")]
	private bool m_DoubleClickSelectsWord;

	[Token(Token = "0x4000C1F")]
	[FieldOffset(Offset = "0x4AA")]
	private bool m_TripleClickSelectsLine;

	[Token(Token = "0x4000C20")]
	[FieldOffset(Offset = "0x4AB")]
	private bool m_SelectAllOnFocus;

	[Token(Token = "0x4000C21")]
	[FieldOffset(Offset = "0x4AC")]
	private bool m_SelectAllOnMouseUp;

	[Token(Token = "0x4000C22")]
	[FieldOffset(Offset = "0x4B0")]
	private Color m_SelectionColor;

	[Token(Token = "0x4000C23")]
	[FieldOffset(Offset = "0x4C0")]
	private Color m_CursorColor;

	[Token(Token = "0x4000C24")]
	[FieldOffset(Offset = "0x4D0")]
	private float m_CursorWidth;

	[Token(Token = "0x1700069C")]
	internal bool selectable
	{
		[Token(Token = "0x60018E8")]
		[Address(RVA = "0x4C2E4A0", Offset = "0x4C2E4A0", VA = "0x4C2E4A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700069D")]
	internal UITKTextHandle uitkTextHandle
	{
		[Token(Token = "0x60018EA")]
		[Address(RVA = "0x4C2E820", Offset = "0x4C2E820", VA = "0x4C2E820")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60018EB")]
		[Address(RVA = "0x4C2E830", Offset = "0x4C2E830", VA = "0x4C2E830")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700069E")]
	[CreateProperty]
	public virtual string text
	{
		[Token(Token = "0x60018ED")]
		[Address(RVA = "0x4C2E9D0", Offset = "0x4C2E9D0", VA = "0x4C2E9D0", Slot = "166")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018EE")]
		[Address(RVA = "0x4C2EA60", Offset = "0x4C2EA60", VA = "0x4C2EA60", Slot = "167")]
		set
		{
		}
	}

	[Token(Token = "0x1700069F")]
	[CreateProperty]
	public bool enableRichText
	{
		[Token(Token = "0x60018EF")]
		[Address(RVA = "0x4C2EB00", Offset = "0x4C2EB00", VA = "0x4C2EB00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018F0")]
		[Address(RVA = "0x4C2EB10", Offset = "0x4C2EB10", VA = "0x4C2EB10")]
		set
		{
		}
	}

	[Token(Token = "0x170006A0")]
	[CreateProperty]
	public bool parseEscapeSequences
	{
		[Token(Token = "0x60018F1")]
		[Address(RVA = "0x4C2EBC0", Offset = "0x4C2EBC0", VA = "0x4C2EBC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018F2")]
		[Address(RVA = "0x4C2EBD0", Offset = "0x4C2EBD0", VA = "0x4C2EBD0")]
		set
		{
		}
	}

	[Token(Token = "0x170006A1")]
	[CreateProperty]
	public bool displayTooltipWhenElided
	{
		[Token(Token = "0x60018F3")]
		[Address(RVA = "0x4C2EC80", Offset = "0x4C2EC80", VA = "0x4C2EC80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018F4")]
		[Address(RVA = "0x4C2EC90", Offset = "0x4C2EC90", VA = "0x4C2EC90")]
		set
		{
		}
	}

	[Token(Token = "0x170006A2")]
	[CreateProperty(ReadOnly = true)]
	public bool isElided
	{
		[Token(Token = "0x60018F5")]
		[Address(RVA = "0x4C2ED40", Offset = "0x4C2ED40", VA = "0x4C2ED40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018F6")]
		[Address(RVA = "0x4C2ED50", Offset = "0x4C2ED50", VA = "0x4C2ED50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170006A3")]
	internal bool hasFocus
	{
		[Token(Token = "0x60018FD")]
		[Address(RVA = "0x4C29B50", Offset = "0x4C29B50", VA = "0x4C29B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A4")]
	private string UnityEngine_002EUIElements_002EINotifyValueChanged_003CSystem_002EString_003E_002Evalue
	{
		[Token(Token = "0x6001900")]
		[Address(RVA = "0x4C31360", Offset = "0x4C31360", VA = "0x4C31360", Slot = "100")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001901")]
		[Address(RVA = "0x4C31390", Offset = "0x4C31390", VA = "0x4C31390", Slot = "101")]
		set
		{
		}
	}

	[Token(Token = "0x170006A5")]
	[CreateProperty]
	private string value
	{
		[Token(Token = "0x6001902")]
		[Address(RVA = "0x4C31760", Offset = "0x4C31760", VA = "0x4C31760")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001903")]
		[Address(RVA = "0x4C317F0", Offset = "0x4C317F0", VA = "0x4C317F0")]
		set
		{
		}
	}

	[Token(Token = "0x170006A6")]
	internal ITextEdition edition
	{
		[Token(Token = "0x6001905")]
		[Address(RVA = "0x4C290C0", Offset = "0x4C290C0", VA = "0x4C290C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A7")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002Emultiline
	{
		[Token(Token = "0x6001906")]
		[Address(RVA = "0x4C31A60", Offset = "0x4C31A60", VA = "0x4C31A60", Slot = "103")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001907")]
		[Address(RVA = "0x4C31A70", Offset = "0x4C31A70", VA = "0x4C31A70", Slot = "104")]
		set
		{
		}
	}

	[Token(Token = "0x170006A8")]
	private TouchScreenKeyboardType UnityEngine_002EUIElements_002EITextEdition_002EkeyboardType
	{
		[Token(Token = "0x6001908")]
		[Address(RVA = "0x4C31B50", Offset = "0x4C31B50", VA = "0x4C31B50", Slot = "140")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x6001909")]
		[Address(RVA = "0x4C31B60", Offset = "0x4C31B60", VA = "0x4C31B60", Slot = "141")]
		set
		{
		}
	}

	[Token(Token = "0x170006A9")]
	[CreateProperty]
	private TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x600190A")]
		[Address(RVA = "0x4C31C00", Offset = "0x4C31C00", VA = "0x4C31C00")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x600190B")]
		[Address(RVA = "0x4C31CA0", Offset = "0x4C31CA0", VA = "0x4C31CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170006AA")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EhideMobileInput
	{
		[Token(Token = "0x600190C")]
		[Address(RVA = "0x4C31D40", Offset = "0x4C31D40", VA = "0x4C31D40", Slot = "138")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600190D")]
		[Address(RVA = "0x4C31DD0", Offset = "0x4C31DD0", VA = "0x4C31DD0", Slot = "139")]
		set
		{
		}
	}

	[Token(Token = "0x170006AB")]
	[CreateProperty]
	private bool hideMobileInput
	{
		[Token(Token = "0x600190E")]
		[Address(RVA = "0x4C31EB0", Offset = "0x4C31EB0", VA = "0x4C31EB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600190F")]
		[Address(RVA = "0x4C31F50", Offset = "0x4C31F50", VA = "0x4C31F50")]
		set
		{
		}
	}

	[Token(Token = "0x170006AC")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EisReadOnly
	{
		[Token(Token = "0x6001910")]
		[Address(RVA = "0x4C31FF0", Offset = "0x4C31FF0", VA = "0x4C31FF0", Slot = "105")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001911")]
		[Address(RVA = "0x4C32010", Offset = "0x4C32010", VA = "0x4C32010", Slot = "106")]
		set
		{
		}
	}

	[Token(Token = "0x170006AD")]
	[CreateProperty]
	private bool isReadOnly
	{
		[Token(Token = "0x6001912")]
		[Address(RVA = "0x4C32110", Offset = "0x4C32110", VA = "0x4C32110")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001913")]
		[Address(RVA = "0x4C321B0", Offset = "0x4C321B0", VA = "0x4C321B0")]
		set
		{
		}
	}

	[Token(Token = "0x170006AE")]
	private int UnityEngine_002EUIElements_002EITextEdition_002EmaxLength
	{
		[Token(Token = "0x600191D")]
		[Address(RVA = "0x4C32F30", Offset = "0x4C32F30", VA = "0x4C32F30", Slot = "107")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600191E")]
		[Address(RVA = "0x4C32F40", Offset = "0x4C32F40", VA = "0x4C32F40", Slot = "108")]
		set
		{
		}
	}

	[Token(Token = "0x170006AF")]
	[CreateProperty]
	private int maxLength
	{
		[Token(Token = "0x600191F")]
		[Address(RVA = "0x4C33080", Offset = "0x4C33080", VA = "0x4C33080")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001920")]
		[Address(RVA = "0x4C33120", Offset = "0x4C33120", VA = "0x4C33120")]
		set
		{
		}
	}

	[Token(Token = "0x170006B0")]
	private string UnityEngine_002EUIElements_002EITextEdition_002Eplaceholder
	{
		[Token(Token = "0x6001921")]
		[Address(RVA = "0x4C331C0", Offset = "0x4C331C0", VA = "0x4C331C0", Slot = "109")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001922")]
		[Address(RVA = "0x4C331D0", Offset = "0x4C331D0", VA = "0x4C331D0", Slot = "110")]
		set
		{
		}
	}

	[Token(Token = "0x170006B1")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EisDelayed
	{
		[Token(Token = "0x6001923")]
		[Address(RVA = "0x4C33330", Offset = "0x4C33330", VA = "0x4C33330", Slot = "111")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001924")]
		[Address(RVA = "0x4C33340", Offset = "0x4C33340", VA = "0x4C33340", Slot = "112")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006B2")]
	private Func<char, bool> UnityEngine_002EUIElements_002EITextEdition_002EAcceptCharacter
	{
		[Token(Token = "0x6001928")]
		[Address(RVA = "0x4C333E0", Offset = "0x4C333E0", VA = "0x4C333E0", Slot = "116")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001929")]
		[Address(RVA = "0x4C333F0", Offset = "0x4C333F0", VA = "0x4C333F0", Slot = "117")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006B3")]
	private Action<bool> UnityEngine_002EUIElements_002EITextEdition_002EUpdateScrollOffset
	{
		[Token(Token = "0x600192A")]
		[Address(RVA = "0x4C33410", Offset = "0x4C33410", VA = "0x4C33410", Slot = "118")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600192B")]
		[Address(RVA = "0x4C33420", Offset = "0x4C33420", VA = "0x4C33420", Slot = "119")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006B4")]
	private Action UnityEngine_002EUIElements_002EITextEdition_002EUpdateValueFromText
	{
		[Token(Token = "0x600192C")]
		[Address(RVA = "0x4C33440", Offset = "0x4C33440", VA = "0x4C33440", Slot = "120")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600192D")]
		[Address(RVA = "0x4C33450", Offset = "0x4C33450", VA = "0x4C33450", Slot = "121")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006B5")]
	private Action UnityEngine_002EUIElements_002EITextEdition_002EUpdateTextFromValue
	{
		[Token(Token = "0x600192E")]
		[Address(RVA = "0x4C33470", Offset = "0x4C33470", VA = "0x4C33470", Slot = "122")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600192F")]
		[Address(RVA = "0x4C33480", Offset = "0x4C33480", VA = "0x4C33480", Slot = "123")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006B6")]
	private Action UnityEngine_002EUIElements_002EITextEdition_002EMoveFocusToCompositeRoot
	{
		[Token(Token = "0x6001930")]
		[Address(RVA = "0x4C334A0", Offset = "0x4C334A0", VA = "0x4C334A0", Slot = "124")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001931")]
		[Address(RVA = "0x4C334B0", Offset = "0x4C334B0", VA = "0x4C334B0", Slot = "125")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006B7")]
	internal Action OnPlaceholderChanged
	{
		[Token(Token = "0x6001932")]
		[Address(RVA = "0x4C334D0", Offset = "0x4C334D0", VA = "0x4C334D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001933")]
		[Address(RVA = "0x4C334E0", Offset = "0x4C334E0", VA = "0x4C334E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006B8")]
	private Func<string> UnityEngine_002EUIElements_002EITextEdition_002EGetDefaultValueType
	{
		[Token(Token = "0x6001934")]
		[Address(RVA = "0x4C33500", Offset = "0x4C33500", VA = "0x4C33500", Slot = "126")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001935")]
		[Address(RVA = "0x4C33510", Offset = "0x4C33510", VA = "0x4C33510", Slot = "127")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006B9")]
	private char UnityEngine_002EUIElements_002EITextEdition_002EmaskChar
	{
		[Token(Token = "0x6001938")]
		[Address(RVA = "0x4C33910", Offset = "0x4C33910", VA = "0x4C33910", Slot = "130")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6001939")]
		[Address(RVA = "0x4C33920", Offset = "0x4C33920", VA = "0x4C33920", Slot = "131")]
		set
		{
		}
	}

	[Token(Token = "0x170006BA")]
	[CreateProperty]
	private char maskChar
	{
		[Token(Token = "0x600193A")]
		[Address(RVA = "0x4C33A40", Offset = "0x4C33A40", VA = "0x4C33A40")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600193B")]
		[Address(RVA = "0x4C33AE0", Offset = "0x4C33AE0", VA = "0x4C33AE0")]
		set
		{
		}
	}

	[Token(Token = "0x170006BB")]
	private char effectiveMaskChar
	{
		[Token(Token = "0x600193C")]
		[Address(RVA = "0x4C33B80", Offset = "0x4C33B80", VA = "0x4C33B80")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170006BC")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EisPassword
	{
		[Token(Token = "0x600193D")]
		[Address(RVA = "0x4C33C30", Offset = "0x4C33C30", VA = "0x4C33C30", Slot = "132")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600193E")]
		[Address(RVA = "0x4C33C40", Offset = "0x4C33C40", VA = "0x4C33C40", Slot = "133")]
		set
		{
		}
	}

	[Token(Token = "0x170006BD")]
	[CreateProperty]
	private bool isPassword
	{
		[Token(Token = "0x600193F")]
		[Address(RVA = "0x4C33CF0", Offset = "0x4C33CF0", VA = "0x4C33CF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001940")]
		[Address(RVA = "0x4C33D90", Offset = "0x4C33D90", VA = "0x4C33D90")]
		set
		{
		}
	}

	[Token(Token = "0x170006BE")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EhidePlaceholderOnFocus
	{
		[Token(Token = "0x6001941")]
		[Address(RVA = "0x4C33E30", Offset = "0x4C33E30", VA = "0x4C33E30", Slot = "134")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001942")]
		[Address(RVA = "0x4C33E40", Offset = "0x4C33E40", VA = "0x4C33E40", Slot = "135")]
		set
		{
		}
	}

	[Token(Token = "0x170006BF")]
	internal bool showPlaceholderText
	{
		[Token(Token = "0x6001943")]
		[Address(RVA = "0x4C2DAC0", Offset = "0x4C2DAC0", VA = "0x4C2DAC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C0")]
	private bool UnityEngine_002EUIElements_002EITextEdition_002EautoCorrection
	{
		[Token(Token = "0x6001944")]
		[Address(RVA = "0x4C33E50", Offset = "0x4C33E50", VA = "0x4C33E50", Slot = "136")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001945")]
		[Address(RVA = "0x4C33E60", Offset = "0x4C33E60", VA = "0x4C33E60", Slot = "137")]
		set
		{
		}
	}

	[Token(Token = "0x170006C1")]
	[CreateProperty]
	private bool autoCorrection
	{
		[Token(Token = "0x6001946")]
		[Address(RVA = "0x4C33F10", Offset = "0x4C33F10", VA = "0x4C33F10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001947")]
		[Address(RVA = "0x4C33FB0", Offset = "0x4C33FB0", VA = "0x4C33FB0")]
		set
		{
		}
	}

	[Token(Token = "0x170006C2")]
	internal string renderedText
	{
		[Token(Token = "0x6001948")]
		[Address(RVA = "0x4C2D890", Offset = "0x4C2D890", VA = "0x4C2D890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001949")]
		[Address(RVA = "0x4C31A00", Offset = "0x4C31A00", VA = "0x4C31A00")]
		set
		{
		}
	}

	[Token(Token = "0x170006C3")]
	internal string originalText
	{
		[Token(Token = "0x600194A")]
		[Address(RVA = "0x4C34050", Offset = "0x4C34050", VA = "0x4C34050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C4")]
	[CreateProperty(ReadOnly = true)]
	public ITextSelection selection
	{
		[Token(Token = "0x600194B")]
		[Address(RVA = "0x4C2ACB0", Offset = "0x4C2ACB0", VA = "0x4C2ACB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C5")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EisSelectable
	{
		[Token(Token = "0x600194C")]
		[Address(RVA = "0x4C34060", Offset = "0x4C34060", VA = "0x4C34060", Slot = "142")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600194D")]
		[Address(RVA = "0x4C34080", Offset = "0x4C34080", VA = "0x4C34080", Slot = "143")]
		set
		{
		}
	}

	[Token(Token = "0x170006C6")]
	[CreateProperty]
	private bool isSelectable
	{
		[Token(Token = "0x600194E")]
		[Address(RVA = "0x4C34130", Offset = "0x4C34130", VA = "0x4C34130")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600194F")]
		[Address(RVA = "0x4C341C0", Offset = "0x4C341C0", VA = "0x4C341C0")]
		set
		{
		}
	}

	[Token(Token = "0x170006C7")]
	private int UnityEngine_002EUIElements_002EITextSelection_002EcursorIndex
	{
		[Token(Token = "0x6001950")]
		[Address(RVA = "0x4C34260", Offset = "0x4C34260", VA = "0x4C34260", Slot = "148")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001951")]
		[Address(RVA = "0x4C34390", Offset = "0x4C34390", VA = "0x4C34390", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x170006C8")]
	[CreateProperty]
	private int cursorIndex
	{
		[Token(Token = "0x6001952")]
		[Address(RVA = "0x4C345F0", Offset = "0x4C345F0", VA = "0x4C345F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001953")]
		[Address(RVA = "0x4C34690", Offset = "0x4C34690", VA = "0x4C34690")]
		set
		{
		}
	}

	[Token(Token = "0x170006C9")]
	private int UnityEngine_002EUIElements_002EITextSelection_002EselectIndex
	{
		[Token(Token = "0x6001954")]
		[Address(RVA = "0x4C34730", Offset = "0x4C34730", VA = "0x4C34730", Slot = "152")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001955")]
		[Address(RVA = "0x4C34860", Offset = "0x4C34860", VA = "0x4C34860", Slot = "153")]
		set
		{
		}
	}

	[Token(Token = "0x170006CA")]
	[CreateProperty]
	private int selectIndex
	{
		[Token(Token = "0x6001956")]
		[Address(RVA = "0x4C34AC0", Offset = "0x4C34AC0", VA = "0x4C34AC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001957")]
		[Address(RVA = "0x4C34B60", Offset = "0x4C34B60", VA = "0x4C34B60")]
		set
		{
		}
	}

	[Token(Token = "0x170006CB")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EdoubleClickSelectsWord
	{
		[Token(Token = "0x600195B")]
		[Address(RVA = "0x4C34F90", Offset = "0x4C34F90", VA = "0x4C34F90", Slot = "150")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600195C")]
		[Address(RVA = "0x4C34FA0", Offset = "0x4C34FA0", VA = "0x4C34FA0", Slot = "151")]
		set
		{
		}
	}

	[Token(Token = "0x170006CC")]
	[CreateProperty]
	private bool doubleClickSelectsWord
	{
		[Token(Token = "0x600195D")]
		[Address(RVA = "0x4C35050", Offset = "0x4C35050", VA = "0x4C35050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600195E")]
		[Address(RVA = "0x4C350F0", Offset = "0x4C350F0", VA = "0x4C350F0")]
		set
		{
		}
	}

	[Token(Token = "0x170006CD")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EtripleClickSelectsLine
	{
		[Token(Token = "0x600195F")]
		[Address(RVA = "0x4C35190", Offset = "0x4C35190", VA = "0x4C35190", Slot = "154")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001960")]
		[Address(RVA = "0x4C351A0", Offset = "0x4C351A0", VA = "0x4C351A0", Slot = "155")]
		set
		{
		}
	}

	[Token(Token = "0x170006CE")]
	[CreateProperty]
	private bool tripleClickSelectsLine
	{
		[Token(Token = "0x6001961")]
		[Address(RVA = "0x4C35250", Offset = "0x4C35250", VA = "0x4C35250")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001962")]
		[Address(RVA = "0x4C352F0", Offset = "0x4C352F0", VA = "0x4C352F0")]
		set
		{
		}
	}

	[Token(Token = "0x170006CF")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EselectAllOnFocus
	{
		[Token(Token = "0x6001963")]
		[Address(RVA = "0x4C35390", Offset = "0x4C35390", VA = "0x4C35390", Slot = "159")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001964")]
		[Address(RVA = "0x4C353A0", Offset = "0x4C353A0", VA = "0x4C353A0", Slot = "160")]
		set
		{
		}
	}

	[Token(Token = "0x170006D0")]
	[CreateProperty]
	private bool selectAllOnFocus
	{
		[Token(Token = "0x6001965")]
		[Address(RVA = "0x4C35450", Offset = "0x4C35450", VA = "0x4C35450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001966")]
		[Address(RVA = "0x4C354F0", Offset = "0x4C354F0", VA = "0x4C354F0")]
		set
		{
		}
	}

	[Token(Token = "0x170006D1")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EselectAllOnMouseUp
	{
		[Token(Token = "0x6001967")]
		[Address(RVA = "0x4C35590", Offset = "0x4C35590", VA = "0x4C35590", Slot = "161")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001968")]
		[Address(RVA = "0x4C355A0", Offset = "0x4C355A0", VA = "0x4C355A0", Slot = "162")]
		set
		{
		}
	}

	[Token(Token = "0x170006D2")]
	[CreateProperty]
	private bool selectAllOnMouseUp
	{
		[Token(Token = "0x6001969")]
		[Address(RVA = "0x4C35650", Offset = "0x4C35650", VA = "0x4C35650")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600196A")]
		[Address(RVA = "0x4C356F0", Offset = "0x4C356F0", VA = "0x4C356F0")]
		set
		{
		}
	}

	[Token(Token = "0x170006D3")]
	private Vector2 UnityEngine_002EUIElements_002EITextSelection_002EcursorPosition
	{
		[Token(Token = "0x600196B")]
		[Address(RVA = "0x4C35790", Offset = "0x4C35790", VA = "0x4C35790", Slot = "163")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170006D4")]
	[CreateProperty(ReadOnly = true)]
	private Vector2 cursorPosition
	{
		[Token(Token = "0x600196C")]
		[Address(RVA = "0x4C35890", Offset = "0x4C35890", VA = "0x4C35890")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170006D5")]
	private float UnityEngine_002EUIElements_002EITextSelection_002ElineHeightAtCursorPosition
	{
		[Token(Token = "0x600196D")]
		[Address(RVA = "0x4C35930", Offset = "0x4C35930", VA = "0x4C35930", Slot = "164")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006D6")]
	private Color UnityEngine_002EUIElements_002EITextSelection_002EselectionColor
	{
		[Token(Token = "0x600196E")]
		[Address(RVA = "0x4C35A00", Offset = "0x4C35A00", VA = "0x4C35A00", Slot = "146")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600196F")]
		[Address(RVA = "0x4C35A20", Offset = "0x4C35A20", VA = "0x4C35A20", Slot = "147")]
		set
		{
		}
	}

	[Token(Token = "0x170006D7")]
	[CreateProperty]
	private Color selectionColor
	{
		[Token(Token = "0x6001970")]
		[Address(RVA = "0x4C35B10", Offset = "0x4C35B10", VA = "0x4C35B10")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6001971")]
		[Address(RVA = "0x4C35BB0", Offset = "0x4C35BB0", VA = "0x4C35BB0")]
		set
		{
		}
	}

	[Token(Token = "0x170006D8")]
	private Color UnityEngine_002EUIElements_002EITextSelection_002EcursorColor
	{
		[Token(Token = "0x6001972")]
		[Address(RVA = "0x4C35C70", Offset = "0x4C35C70", VA = "0x4C35C70", Slot = "144")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6001973")]
		[Address(RVA = "0x4C35C90", Offset = "0x4C35C90", VA = "0x4C35C90", Slot = "145")]
		set
		{
		}
	}

	[Token(Token = "0x170006D9")]
	[CreateProperty]
	private Color cursorColor
	{
		[Token(Token = "0x6001974")]
		[Address(RVA = "0x4C35D80", Offset = "0x4C35D80", VA = "0x4C35D80")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6001975")]
		[Address(RVA = "0x4C35E20", Offset = "0x4C35E20", VA = "0x4C35E20")]
		set
		{
		}
	}

	[Token(Token = "0x170006DA")]
	private float UnityEngine_002EUIElements_002EITextSelection_002EcursorWidth
	{
		[Token(Token = "0x6001976")]
		[Address(RVA = "0x4C35EE0", Offset = "0x4C35EE0", VA = "0x4C35EE0", Slot = "165")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006DB")]
	internal TextSelectingManipulator selectingManipulator
	{
		[Token(Token = "0x6001977")]
		[Address(RVA = "0x4C28CA0", Offset = "0x4C28CA0", VA = "0x4C28CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x4C2E540", Offset = "0x4C2E540", VA = "0x4C2E540")]
	public TextElement()
	{
	}

	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x4C2E850", Offset = "0x4C2E850", VA = "0x4C2E850")]
	private void OnGeometryChanged(GeometryChangedEvent e)
	{
	}

	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x4C2ED60", Offset = "0x4C2ED60", VA = "0x4C2ED60")]
	internal void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x4C2F150", Offset = "0x4C2F150", VA = "0x4C2F150")]
	internal void DrawText(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x4C30E30", Offset = "0x4C30E30", VA = "0x4C30E30")]
	internal string ElideText(string drawText, string ellipsisText, float width, TextOverflowPosition textOverflowPosition)
	{
		return null;
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x4C2F300", Offset = "0x4C2F300", VA = "0x4C2F300")]
	private void UpdateTooltip()
	{
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x4C2E860", Offset = "0x4C2E860", VA = "0x4C2E860")]
	private void UpdateVisibleText()
	{
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x4C2F2B0", Offset = "0x4C2F2B0", VA = "0x4C2F2B0")]
	private bool ShouldElide()
	{
		return default(bool);
	}

	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x4C31300", Offset = "0x4C31300", VA = "0x4C31300")]
	public Vector2 MeasureTextSize(string textToMeasure, float width, MeasureMode widthMode, float height, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x4C31310", Offset = "0x4C31310", VA = "0x4C31310", Slot = "96")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x4C31890", Offset = "0x4C31890", VA = "0x4C31890", Slot = "102")]
	private void UnityEngine_002EUIElements_002EINotifyValueChanged_003CSystem_002EString_003E_002ESetValueWithoutNotify(string newValue)
	{
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x4C32250", Offset = "0x4C32250", VA = "0x4C32250")]
	private void ProcessMenuCommand(string command)
	{
	}

	[Token(Token = "0x6001915")]
	[Address(RVA = "0x4C32410", Offset = "0x4C32410", VA = "0x4C32410")]
	private void Cut(DropdownMenuAction a)
	{
	}

	[Token(Token = "0x6001916")]
	[Address(RVA = "0x4C32450", Offset = "0x4C32450", VA = "0x4C32450")]
	private void Copy(DropdownMenuAction a)
	{
	}

	[Token(Token = "0x6001917")]
	[Address(RVA = "0x4C32490", Offset = "0x4C32490", VA = "0x4C32490")]
	private void Paste(DropdownMenuAction a)
	{
	}

	[Token(Token = "0x6001918")]
	[Address(RVA = "0x4C324D0", Offset = "0x4C324D0", VA = "0x4C324D0")]
	private void BuildContextualMenu(ContextualMenuPopulateEvent evt)
	{
	}

	[Token(Token = "0x6001919")]
	[Address(RVA = "0x4C32840", Offset = "0x4C32840", VA = "0x4C32840")]
	private DropdownMenuAction.Status CutActionStatus(DropdownMenuAction a)
	{
		return default(DropdownMenuAction.Status);
	}

	[Token(Token = "0x600191A")]
	[Address(RVA = "0x4C32980", Offset = "0x4C32980", VA = "0x4C32980")]
	private DropdownMenuAction.Status CopyActionStatus(DropdownMenuAction a)
	{
		return default(DropdownMenuAction.Status);
	}

	[Token(Token = "0x600191B")]
	[Address(RVA = "0x4C32AD0", Offset = "0x4C32AD0", VA = "0x4C32AD0")]
	private DropdownMenuAction.Status PasteActionStatus(DropdownMenuAction a)
	{
		return default(DropdownMenuAction.Status);
	}

	[Token(Token = "0x600191C")]
	[Address(RVA = "0x4C32B30", Offset = "0x4C32B30", VA = "0x4C32B30", Slot = "9")]
	[EventInterest(new Type[]
	{
		typeof(ContextualMenuPopulateEvent),
		typeof(FocusInEvent),
		typeof(FocusOutEvent),
		typeof(KeyDownEvent),
		typeof(KeyUpEvent),
		typeof(FocusEvent),
		typeof(BlurEvent),
		typeof(ValidateCommandEvent),
		typeof(ExecuteCommandEvent),
		typeof(PointerDownEvent),
		typeof(PointerUpEvent),
		typeof(PointerMoveEvent),
		typeof(NavigationMoveEvent),
		typeof(NavigationSubmitEvent),
		typeof(NavigationCancelEvent)
	})]
	protected override void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x6001925")]
	[Address(RVA = "0x4C33350", Offset = "0x4C33350", VA = "0x4C33350", Slot = "113")]
	private void UnityEngine_002EUIElements_002EITextEdition_002EResetValueAndText()
	{
	}

	[Token(Token = "0x6001926")]
	[Address(RVA = "0x4C33390", Offset = "0x4C33390", VA = "0x4C33390", Slot = "114")]
	private void UnityEngine_002EUIElements_002EITextEdition_002ESaveValueAndText()
	{
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x4C333C0", Offset = "0x4C333C0", VA = "0x4C333C0", Slot = "115")]
	private void UnityEngine_002EUIElements_002EITextEdition_002ERestoreValueAndText()
	{
	}

	[Token(Token = "0x6001936")]
	[Address(RVA = "0x4C33530", Offset = "0x4C33530", VA = "0x4C33530", Slot = "128")]
	private void UnityEngine_002EUIElements_002EITextEdition_002EUpdateText(string value)
	{
	}

	[Token(Token = "0x6001937")]
	[Address(RVA = "0x4C33830", Offset = "0x4C33830", VA = "0x4C33830", Slot = "129")]
	private string UnityEngine_002EUIElements_002EITextEdition_002ECullString(string s)
	{
		return null;
	}

	[Token(Token = "0x6001958")]
	[Address(RVA = "0x4C34C00", Offset = "0x4C34C00", VA = "0x4C34C00", Slot = "157")]
	private void UnityEngine_002EUIElements_002EITextSelection_002ESelectAll()
	{
	}

	[Token(Token = "0x6001959")]
	[Address(RVA = "0x4C34D30", Offset = "0x4C34D30", VA = "0x4C34D30", Slot = "158")]
	private void UnityEngine_002EUIElements_002EITextSelection_002ESelectNone()
	{
	}

	[Token(Token = "0x600195A")]
	[Address(RVA = "0x4C34E60", Offset = "0x4C34E60", VA = "0x4C34E60", Slot = "156")]
	private bool UnityEngine_002EUIElements_002EITextSelection_002EHasSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x6001978")]
	[Address(RVA = "0x4C2F360", Offset = "0x4C2F360", VA = "0x4C2F360")]
	private void DrawHighlighting(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x4C30660", Offset = "0x4C30660", VA = "0x4C30660")]
	internal void DrawCaret(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600197A")]
	[Address(RVA = "0x4C35EF0", Offset = "0x4C35EF0", VA = "0x4C35EF0")]
	private int GetLastCharacterAt(int lineIndex)
	{
		return default(int);
	}
}
