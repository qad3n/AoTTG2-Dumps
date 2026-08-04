// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextInputBaseField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000B3")]
public abstract class TextInputBaseField<TValueType> : BaseField<TValueType>
{
	[Token(Token = "0x20000B4")]
	public new class UxmlTraits : BaseFieldTraits<string, UxmlStringAttributeDescription>
	{
		[Token(Token = "0x40002E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlIntAttributeDescription m_MaxLength;

		[Token(Token = "0x40002E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Password;

		[Token(Token = "0x40002E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_MaskCharacter;

		[Token(Token = "0x40002E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_PlaceholderText;

		[Token(Token = "0x40002E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_HidePlaceholderOnFocus;

		[Token(Token = "0x40002E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_IsReadOnly;

		[Token(Token = "0x40002E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_IsDelayed;

		[Token(Token = "0x40002E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlEnumAttributeDescription<ScrollerVisibility> m_VerticalScrollerVisibility;

		[Token(Token = "0x40002E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_SelectAllOnMouseUp;

		[Token(Token = "0x40002EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_SelectAllOnFocus;

		[Token(Token = "0x40002EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_SelectWordByDoubleClick;

		[Token(Token = "0x40002EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_SelectLineByTripleClick;

		[Token(Token = "0x40002ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_HideMobileInput;

		[Token(Token = "0x40002EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlEnumAttributeDescription<TouchScreenKeyboardType> m_KeyboardType;

		[Token(Token = "0x40002EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_AutoCorrection;

		[Token(Token = "0x60004F7")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60004F8")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000B5")]
	protected internal abstract class TextInputBase : VisualElement
	{
		[Token(Token = "0x40002F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ScrollView scrollView;

		[Token(Token = "0x40002F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal VisualElement multilineContainer;

		[Token(Token = "0x40002F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerComponentsModifierName;

		[Token(Token = "0x40002F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerTextElementUssClassName;

		[Token(Token = "0x40002F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static readonly string innerTextElementWithScrollViewUssClassName;

		[Token(Token = "0x40002F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string horizontalVariantInnerTextElementUssClassName;

		[Token(Token = "0x40002F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string verticalVariantInnerTextElementUssClassName;

		[Token(Token = "0x40002F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string verticalHorizontalVariantInnerTextElementUssClassName;

		[Token(Token = "0x40002F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerScrollviewUssClassName;

		[Token(Token = "0x40002FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerViewportUssClassName;

		[Token(Token = "0x40002FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerContentContainerUssClassName;

		[Token(Token = "0x40002FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Vector2 scrollOffset;

		[Token(Token = "0x40002FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool m_ScrollViewWasClamped;

		[Token(Token = "0x40002FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Vector2 lastCursorPos;

		[Token(Token = "0x4000300")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ScrollerVisibility verticalScrollerVisibility;

		[Token(Token = "0x170000CD")]
		internal TextElement textElement
		{
			[Token(Token = "0x60004F9")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60004FA")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170000CE")]
		public ITextSelection textSelection
		{
			[Token(Token = "0x60004FC")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000CF")]
		public ITextEdition textEdition
		{
			[Token(Token = "0x60004FD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D0")]
		internal bool isDragging
		{
			[Token(Token = "0x60004FE")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D1")]
		public string text
		{
			[Token(Token = "0x60004FF")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000500")]
			set
			{
			}
		}

		[Token(Token = "0x170000D2")]
		internal string originalText
		{
			[Token(Token = "0x6000501")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004FB")]
		internal TextInputBase()
		{
		}

		[Token(Token = "0x6000502")]
		protected virtual TValueType StringToValue(string str)
		{
			return (TValueType)null;
		}

		[Token(Token = "0x6000503")]
		internal void UpdateValueFromText()
		{
		}

		[Token(Token = "0x6000504")]
		internal void UpdateTextFromValue()
		{
		}

		[Token(Token = "0x6000505")]
		internal void MoveFocusToCompositeRoot()
		{
		}

		[Token(Token = "0x6000506")]
		private void MakeSureScrollViewDoesNotLeakEvents(ChangeEvent<float> evt)
		{
		}

		[Token(Token = "0x6000507")]
		internal void SetSingleLine()
		{
		}

		[Token(Token = "0x6000508")]
		internal void SetMultiline()
		{
		}

		[Token(Token = "0x6000509")]
		private void ScrollViewOnGeometryChangedEvent(GeometryChangedEvent e)
		{
		}

		[Token(Token = "0x600050A")]
		private void TextElementOnGeometryChangedEvent(GeometryChangedEvent e)
		{
		}

		[Token(Token = "0x600050B")]
		internal void OnInputCustomStyleResolved(CustomStyleResolvedEvent e)
		{
		}

		[Token(Token = "0x600050C")]
		private string GetDefaultValueType()
		{
			return null;
		}

		[Token(Token = "0x600050D")]
		internal virtual bool AcceptCharacter(char c)
		{
			return default(bool);
		}

		[Token(Token = "0x600050E")]
		internal void UpdateScrollOffset(bool isBackspace = false)
		{
		}

		[Token(Token = "0x600050F")]
		internal void UpdateScrollOffset(bool isBackspace, bool widthChanged)
		{
		}

		[Token(Token = "0x6000510")]
		private Vector2 GetScrollOffset(float xOffset, float yOffset, float contentViewportWidth, bool isBackspace, bool widthChanged)
		{
			return default(Vector2);
		}

		[Token(Token = "0x6000511")]
		internal void SetScrollViewMode()
		{
		}

		[Token(Token = "0x6000512")]
		private void SetMultilineContainerStyle()
		{
		}

		[Token(Token = "0x6000513")]
		private void RemoveSingleLineComponents()
		{
		}

		[Token(Token = "0x6000514")]
		private void RemoveMultilineComponents()
		{
		}

		[Token(Token = "0x6000515")]
		internal bool SetVerticalScrollerVisibility(ScrollerVisibility sv)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x40002C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty autoCorrectionProperty;

	[Token(Token = "0x40002C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty hideMobileInputProperty;

	[Token(Token = "0x40002C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty keyboardTypeProperty;

	[Token(Token = "0x40002C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty isReadOnlyProperty;

	[Token(Token = "0x40002C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty isPasswordFieldProperty;

	[Token(Token = "0x40002C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty textSelectionProperty;

	[Token(Token = "0x40002C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty textEditionProperty;

	[Token(Token = "0x40002C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty selectionColorProperty;

	[Token(Token = "0x40002C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty cursorColorProperty;

	[Token(Token = "0x40002C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty cursorIndexProperty;

	[Token(Token = "0x40002CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty cursorPositionProperty;

	[Token(Token = "0x40002CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty selectIndexProperty;

	[Token(Token = "0x40002CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty selectAllOnFocusProperty;

	[Token(Token = "0x40002CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty selectAllOnMouseUpProperty;

	[Token(Token = "0x40002CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty maxLengthProperty;

	[Token(Token = "0x40002CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty doubleClickSelectsWordProperty;

	[Token(Token = "0x40002D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty tripleClickSelectsLineProperty;

	[Token(Token = "0x40002D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty isDelayedProperty;

	[Token(Token = "0x40002D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty maskCharProperty;

	[Token(Token = "0x40002D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty verticalScrollerVisibilityProperty;

	[Token(Token = "0x40002D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<Color> s_SelectionColorProperty;

	[Token(Token = "0x40002D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<Color> s_CursorColorProperty;

	[Token(Token = "0x40002D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int m_VisualInputTabIndex;

	[Token(Token = "0x40002D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40002D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40002D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x40002DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly string multilineContainerClassName;

	[Token(Token = "0x40002DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string singleLineInputUssClassName;

	[Token(Token = "0x40002DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string multilineInputUssClassName;

	[Token(Token = "0x40002DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string placeholderUssClassName;

	[Token(Token = "0x40002DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly string multilineInputWithScrollViewUssClassName;

	[Token(Token = "0x40002DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string textInputUssName;

	[Token(Token = "0x40002E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TextInputBase m_TextInputBase;

	[Token(Token = "0x170000B2")]
	internal bool password
	{
		[Token(Token = "0x60004C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	internal bool readOnly
	{
		[Token(Token = "0x60004C1")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	internal string placeholderText
	{
		[Token(Token = "0x60004C2")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	internal bool hidePlaceholderOnFocus
	{
		[Token(Token = "0x60004C3")]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	protected internal TextInputBase textInputBase
	{
		[Token(Token = "0x60004C5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B7")]
	[CreateProperty(ReadOnly = true)]
	public ITextSelection textSelection
	{
		[Token(Token = "0x60004C6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B8")]
	[CreateProperty(ReadOnly = true)]
	public ITextEdition textEdition
	{
		[Token(Token = "0x60004C7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	protected Action<bool> onIsReadOnlyChanged
	{
		[Token(Token = "0x60004C8")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004C9")]
		set
		{
		}
	}

	[Token(Token = "0x170000BA")]
	[CreateProperty]
	public bool isReadOnly
	{
		[Token(Token = "0x60004CA")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004CB")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	[CreateProperty]
	public bool isPasswordField
	{
		[Token(Token = "0x60004CC")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004CD")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	[CreateProperty]
	public bool autoCorrection
	{
		[Token(Token = "0x60004CE")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004CF")]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	[CreateProperty]
	public bool hideMobileInput
	{
		[Token(Token = "0x60004D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D1")]
		set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	[CreateProperty]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60004D2")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60004D3")]
		set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	[CreateProperty]
	public int maxLength
	{
		[Token(Token = "0x60004D4")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004D5")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	[CreateProperty]
	public bool isDelayed
	{
		[Token(Token = "0x60004D6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D7")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	[CreateProperty]
	public char maskChar
	{
		[Token(Token = "0x60004D8")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60004D9")]
		set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	[CreateProperty(ReadOnly = true)]
	public Color selectionColor
	{
		[Token(Token = "0x60004DA")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170000C3")]
	[CreateProperty(ReadOnly = true)]
	public Color cursorColor
	{
		[Token(Token = "0x60004DB")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170000C4")]
	[CreateProperty]
	public int cursorIndex
	{
		[Token(Token = "0x60004DC")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004DD")]
		set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	[CreateProperty(ReadOnly = true)]
	public Vector2 cursorPosition
	{
		[Token(Token = "0x60004DE")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000C6")]
	[CreateProperty]
	public int selectIndex
	{
		[Token(Token = "0x60004DF")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C7")]
	[CreateProperty]
	public bool selectAllOnFocus
	{
		[Token(Token = "0x60004E1")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004E2")]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	[CreateProperty]
	public bool selectAllOnMouseUp
	{
		[Token(Token = "0x60004E3")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004E4")]
		set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	[CreateProperty]
	public bool doubleClickSelectsWord
	{
		[Token(Token = "0x60004E5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004E6")]
		set
		{
		}
	}

	[Token(Token = "0x170000CA")]
	[CreateProperty]
	public bool tripleClickSelectsLine
	{
		[Token(Token = "0x60004E7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004E8")]
		set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public string text
	{
		[Token(Token = "0x60004E9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004EA")]
		protected set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	[CreateProperty]
	public ScrollerVisibility verticalScrollerVisibility
	{
		[Token(Token = "0x60004EB")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x60004EC")]
		set
		{
		}
	}

	[Token(Token = "0x60004C4")]
	protected TextInputBaseField(string label, int maxLength, char maskChar, TextInputBase textInputBase)
	{
	}

	[Token(Token = "0x60004ED")]
	[EventInterest(new Type[]
	{
		typeof(NavigationSubmitEvent),
		typeof(FocusInEvent),
		typeof(FocusEvent),
		typeof(BlurEvent)
	})]
	protected override void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x60004EE")]
	protected abstract string ValueToString(TValueType value);

	[Token(Token = "0x60004EF")]
	protected abstract TValueType StringToValue(string str);

	[Token(Token = "0x60004F0")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x60004F1")]
	internal void OnPlaceholderChanged()
	{
	}

	[Token(Token = "0x60004F2")]
	internal void UpdatePlaceholderClassList([Optional] ChangeEvent<TValueType> evt)
	{
	}

	[Token(Token = "0x60004F3")]
	internal virtual void UpdateValueFromText()
	{
	}

	[Token(Token = "0x60004F4")]
	internal virtual void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x60004F5")]
	private void OnFieldCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}
}
