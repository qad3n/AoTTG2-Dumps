// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextInputBaseField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000F1")]
public abstract class TextInputBaseField<TValueType> : BaseField<TValueType>, IDelayedField
{
	[Token(Token = "0x20000F2")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseFieldTraits<string, UxmlStringAttributeDescription>
	{
		[Token(Token = "0x400041C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlIntAttributeDescription m_MaxLength;

		[Token(Token = "0x400041D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Password;

		[Token(Token = "0x400041E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_MaskCharacter;

		[Token(Token = "0x400041F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_PlaceholderText;

		[Token(Token = "0x4000420")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_HidePlaceholderOnFocus;

		[Token(Token = "0x4000421")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_IsReadOnly;

		[Token(Token = "0x4000422")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_IsDelayed;

		[Token(Token = "0x4000423")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlEnumAttributeDescription<ScrollerVisibility> m_VerticalScrollerVisibility;

		[Token(Token = "0x4000424")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_SelectAllOnMouseUp;

		[Token(Token = "0x4000425")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_SelectAllOnFocus;

		[Token(Token = "0x4000426")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_SelectWordByDoubleClick;

		[Token(Token = "0x4000427")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_SelectLineByTripleClick;

		[Token(Token = "0x4000428")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_EmojiFallbackSupport;

		[Token(Token = "0x4000429")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_HideMobileInput;

		[Token(Token = "0x400042A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlEnumAttributeDescription<TouchScreenKeyboardType> m_KeyboardType;

		[Token(Token = "0x400042B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_AutoCorrection;

		[Token(Token = "0x60006EE")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60006EF")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000F3")]
	protected internal abstract class TextInputBase : VisualElement
	{
		[Token(Token = "0x400042D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ScrollView scrollView;

		[Token(Token = "0x400042E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal VisualElement multilineContainer;

		[Token(Token = "0x400042F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerComponentsModifierName;

		[Token(Token = "0x4000430")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerTextElementUssClassName;

		[Token(Token = "0x4000431")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static readonly string innerTextElementWithScrollViewUssClassName;

		[Token(Token = "0x4000432")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string horizontalVariantInnerTextElementUssClassName;

		[Token(Token = "0x4000433")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string verticalVariantInnerTextElementUssClassName;

		[Token(Token = "0x4000434")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string verticalHorizontalVariantInnerTextElementUssClassName;

		[Token(Token = "0x4000435")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerScrollviewUssClassName;

		[Token(Token = "0x4000436")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerViewportUssClassName;

		[Token(Token = "0x4000437")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string innerContentContainerUssClassName;

		[Token(Token = "0x4000439")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Vector2 scrollOffset;

		[Token(Token = "0x400043A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool m_ScrollViewWasClamped;

		[Token(Token = "0x400043B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Vector2 lastCursorPos;

		[Token(Token = "0x400043C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ScrollerVisibility verticalScrollerVisibility;

		[Token(Token = "0x1700013C")]
		internal TextElement textElement
		{
			[Token(Token = "0x60006F0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006F1")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700013D")]
		public ITextSelection textSelection
		{
			[Token(Token = "0x60006F3")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700013E")]
		public ITextEdition textEdition
		{
			[Token(Token = "0x60006F4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700013F")]
		internal bool isDragging
		{
			[Token(Token = "0x60006F5")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000140")]
		public string text
		{
			[Token(Token = "0x60006F6")]
			get
			{
				return null;
			}
			[Token(Token = "0x60006F7")]
			set
			{
			}
		}

		[Token(Token = "0x17000141")]
		internal string originalText
		{
			[Token(Token = "0x60006F8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006F2")]
		internal TextInputBase()
		{
		}

		[Token(Token = "0x60006F9")]
		protected virtual TValueType StringToValue(string str)
		{
			return (TValueType)null;
		}

		[Token(Token = "0x60006FA")]
		internal void UpdateValueFromText()
		{
		}

		[Token(Token = "0x60006FB")]
		internal void UpdateTextFromValue()
		{
		}

		[Token(Token = "0x60006FC")]
		internal void MoveFocusToCompositeRoot()
		{
		}

		[Token(Token = "0x60006FD")]
		private void MakeSureScrollViewDoesNotLeakEvents(ChangeEvent<float> evt)
		{
		}

		[Token(Token = "0x60006FE")]
		internal void SetSingleLine()
		{
		}

		[Token(Token = "0x60006FF")]
		internal void SetMultiline()
		{
		}

		[Token(Token = "0x6000700")]
		private void ScrollViewOnGeometryChangedEvent(GeometryChangedEvent e)
		{
		}

		[Token(Token = "0x6000701")]
		private void TextElementOnGeometryChangedEvent(GeometryChangedEvent e)
		{
		}

		[Token(Token = "0x6000702")]
		internal void OnInputCustomStyleResolved(CustomStyleResolvedEvent e)
		{
		}

		[Token(Token = "0x6000703")]
		private string GetDefaultValueType()
		{
			return null;
		}

		[Token(Token = "0x6000704")]
		internal virtual bool AcceptCharacter(char c)
		{
			return default(bool);
		}

		[Token(Token = "0x6000705")]
		internal void UpdateScrollOffset(bool isBackspace = false)
		{
		}

		[Token(Token = "0x6000706")]
		internal void UpdateScrollOffset(bool isBackspace, bool widthChanged)
		{
		}

		[Token(Token = "0x6000707")]
		private Vector2 GetScrollOffset(float xOffset, float yOffset, float contentViewportWidth, bool isBackspace, bool widthChanged)
		{
			return default(Vector2);
		}

		[Token(Token = "0x6000708")]
		internal void SetScrollViewMode()
		{
		}

		[Token(Token = "0x6000709")]
		private void SetMultilineContainerStyle()
		{
		}

		[Token(Token = "0x600070A")]
		private void RemoveSingleLineComponents()
		{
		}

		[Token(Token = "0x600070B")]
		private void RemoveMultilineComponents()
		{
		}

		[Token(Token = "0x600070C")]
		internal bool SetVerticalScrollerVisibility(ScrollerVisibility sv)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x40003F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId autoCorrectionProperty;

	[Token(Token = "0x40003FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId hideMobileInputProperty;

	[Token(Token = "0x40003FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId hideSoftKeyboardProperty;

	[Token(Token = "0x40003FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId hidePlaceholderOnFocusProperty;

	[Token(Token = "0x40003FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId keyboardTypeProperty;

	[Token(Token = "0x40003FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId isReadOnlyProperty;

	[Token(Token = "0x40003FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId isPasswordFieldProperty;

	[Token(Token = "0x4000400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId textSelectionProperty;

	[Token(Token = "0x4000401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId textEditionProperty;

	[Token(Token = "0x4000402")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId placeholderTextProperty;

	[Token(Token = "0x4000403")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId cursorIndexProperty;

	[Token(Token = "0x4000404")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId cursorPositionProperty;

	[Token(Token = "0x4000405")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId selectIndexProperty;

	[Token(Token = "0x4000406")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId selectAllOnFocusProperty;

	[Token(Token = "0x4000407")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId selectAllOnMouseUpProperty;

	[Token(Token = "0x4000408")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId maxLengthProperty;

	[Token(Token = "0x4000409")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId doubleClickSelectsWordProperty;

	[Token(Token = "0x400040A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId tripleClickSelectsLineProperty;

	[Token(Token = "0x400040B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId emojiFallbackSupportProperty;

	[Token(Token = "0x400040C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId isDelayedProperty;

	[Token(Token = "0x400040D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId maskCharProperty;

	[Token(Token = "0x400040E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId verticalScrollerVisibilityProperty;

	[Token(Token = "0x400040F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<Color> s_SelectionColorProperty;

	[Token(Token = "0x4000410")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<Color> s_CursorColorProperty;

	[Token(Token = "0x4000411")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000412")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000413")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x4000414")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly string multilineContainerClassName;

	[Token(Token = "0x4000415")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string singleLineInputUssClassName;

	[Token(Token = "0x4000416")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string multilineInputUssClassName;

	[Token(Token = "0x4000417")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string placeholderUssClassName;

	[Token(Token = "0x4000418")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly string multilineInputWithScrollViewUssClassName;

	[Token(Token = "0x4000419")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string textInputUssName;

	[Token(Token = "0x400041A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TextInputBase m_TextInputBase;

	[Token(Token = "0x400041B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal bool m_UpdateTextFromValue;

	[Token(Token = "0x1700011E")]
	internal bool password
	{
		[Token(Token = "0x60006AF")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	internal bool readOnly
	{
		[Token(Token = "0x60006B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	[CreateProperty]
	internal string placeholderText
	{
		[Token(Token = "0x60006B1")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006B2")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	[CreateProperty]
	internal bool hidePlaceholderOnFocus
	{
		[Token(Token = "0x60006B3")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006B4")]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	protected internal TextInputBase textInputBase
	{
		[Token(Token = "0x60006B6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000123")]
	[CreateProperty(ReadOnly = true)]
	public ITextSelection textSelection
	{
		[Token(Token = "0x60006B7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000124")]
	[CreateProperty(ReadOnly = true)]
	public ITextEdition textEdition
	{
		[Token(Token = "0x60006B8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000125")]
	protected Action<bool> onIsReadOnlyChanged
	{
		[Token(Token = "0x60006B9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006BA")]
		set
		{
		}
	}

	[Token(Token = "0x17000126")]
	[CreateProperty]
	public bool isReadOnly
	{
		[Token(Token = "0x60006BB")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006BC")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	[CreateProperty]
	public bool isPasswordField
	{
		[Token(Token = "0x60006BD")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006BE")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	[CreateProperty]
	public bool autoCorrection
	{
		[Token(Token = "0x60006BF")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	[CreateProperty]
	public bool hideSoftKeyboard
	{
		[Token(Token = "0x60006C1")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006C2")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	[CreateProperty]
	public bool hideMobileInput
	{
		[Token(Token = "0x60006C3")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006C4")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	[CreateProperty]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60006C5")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60006C6")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	[CreateProperty]
	public int maxLength
	{
		[Token(Token = "0x60006C7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006C8")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	[CreateProperty]
	public bool isDelayed
	{
		[Token(Token = "0x60006C9")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006CA")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	[CreateProperty]
	public char maskChar
	{
		[Token(Token = "0x60006CB")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60006CC")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	[Obsolete("cursorColor is deprecated. Please use the corresponding USS property (--unity-cursor-color) instead.")]
	public Color selectionColor
	{
		[Token(Token = "0x60006CD")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000130")]
	[Obsolete("cursorColor is deprecated. Please use the corresponding USS property (--unity-cursor-color) instead.")]
	public Color cursorColor
	{
		[Token(Token = "0x60006CE")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000131")]
	[CreateProperty]
	public int cursorIndex
	{
		[Token(Token = "0x60006CF")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	[CreateProperty(ReadOnly = true)]
	public Vector2 cursorPosition
	{
		[Token(Token = "0x60006D1")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000133")]
	[CreateProperty]
	public int selectIndex
	{
		[Token(Token = "0x60006D2")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006D3")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	[CreateProperty]
	public bool selectAllOnFocus
	{
		[Token(Token = "0x60006D4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006D5")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	[CreateProperty]
	public bool selectAllOnMouseUp
	{
		[Token(Token = "0x60006D6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006D7")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	[CreateProperty]
	public bool doubleClickSelectsWord
	{
		[Token(Token = "0x60006D8")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006D9")]
		set
		{
		}
	}

	[Token(Token = "0x17000137")]
	[CreateProperty]
	public bool tripleClickSelectsLine
	{
		[Token(Token = "0x60006DA")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006DB")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	public string text
	{
		[Token(Token = "0x60006DC")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006DD")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000139")]
	[CreateProperty]
	public bool emojiFallbackSupport
	{
		[Token(Token = "0x60006DE")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006DF")]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	[CreateProperty]
	public ScrollerVisibility verticalScrollerVisibility
	{
		[Token(Token = "0x60006E0")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x60006E1")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	private protected override bool canSwitchToMixedValue
	{
		[Token(Token = "0x60006E6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60006B5")]
	protected TextInputBaseField(string label, int maxLength, char maskChar, TextInputBase textInputBase)
	{
	}

	[Token(Token = "0x60006E2")]
	[EventInterest(new Type[]
	{
		typeof(NavigationSubmitEvent),
		typeof(FocusInEvent),
		typeof(FocusEvent),
		typeof(FocusOutEvent),
		typeof(BlurEvent)
	})]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x60006E3")]
	public override void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x60006E4")]
	protected abstract string ValueToString(TValueType value);

	[Token(Token = "0x60006E5")]
	protected abstract TValueType StringToValue(string str);

	[Token(Token = "0x60006E7")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x60006E8")]
	internal void OnPlaceholderChanged()
	{
	}

	[Token(Token = "0x60006E9")]
	internal void UpdatePlaceholderClassList([Optional] ChangeEvent<TValueType> evt)
	{
	}

	[Token(Token = "0x60006EA")]
	internal virtual void UpdateValueFromText()
	{
	}

	[Token(Token = "0x60006EB")]
	internal virtual void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x60006EC")]
	private void OnFieldCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}
}
