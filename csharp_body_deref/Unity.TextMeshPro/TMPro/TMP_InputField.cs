using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x200003F")]
[AddComponentMenu("UI/TextMeshPro - Input Field", 11)]
public class TMP_InputField : Selectable, IUpdateSelectedHandler, IEventSystemHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerClickHandler, ISubmitHandler, ICanvasElement, ILayoutElement, IScrollHandler
{
	[Token(Token = "0x2000040")]
	public enum ContentType
	{
		[Token(Token = "0x40001AE")]
		Standard,
		[Token(Token = "0x40001AF")]
		Autocorrected,
		[Token(Token = "0x40001B0")]
		IntegerNumber,
		[Token(Token = "0x40001B1")]
		DecimalNumber,
		[Token(Token = "0x40001B2")]
		Alphanumeric,
		[Token(Token = "0x40001B3")]
		Name,
		[Token(Token = "0x40001B4")]
		EmailAddress,
		[Token(Token = "0x40001B5")]
		Password,
		[Token(Token = "0x40001B6")]
		Pin,
		[Token(Token = "0x40001B7")]
		Custom
	}

	[Token(Token = "0x2000041")]
	public enum InputType
	{
		[Token(Token = "0x40001B9")]
		Standard,
		[Token(Token = "0x40001BA")]
		AutoCorrect,
		[Token(Token = "0x40001BB")]
		Password
	}

	[Token(Token = "0x2000042")]
	public enum CharacterValidation
	{
		[Token(Token = "0x40001BD")]
		None,
		[Token(Token = "0x40001BE")]
		Digit,
		[Token(Token = "0x40001BF")]
		Integer,
		[Token(Token = "0x40001C0")]
		Decimal,
		[Token(Token = "0x40001C1")]
		Alphanumeric,
		[Token(Token = "0x40001C2")]
		Name,
		[Token(Token = "0x40001C3")]
		Regex,
		[Token(Token = "0x40001C4")]
		EmailAddress,
		[Token(Token = "0x40001C5")]
		CustomValidator
	}

	[Token(Token = "0x2000043")]
	public enum LineType
	{
		[Token(Token = "0x40001C7")]
		SingleLine,
		[Token(Token = "0x40001C8")]
		MultiLineSubmit,
		[Token(Token = "0x40001C9")]
		MultiLineNewline
	}

	[Token(Token = "0x2000044")]
	public delegate char OnValidateInput(string text, int charIndex, char addedChar);

	[Serializable]
	[Token(Token = "0x2000045")]
	public class SubmitEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x49364D0", Offset = "0x49364D0", VA = "0x49364D0")]
		public SubmitEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000046")]
	public class OnChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x4936510", Offset = "0x4936510", VA = "0x4936510")]
		public OnChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000047")]
	public class SelectionEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x4936550", Offset = "0x4936550", VA = "0x4936550")]
		public SelectionEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000048")]
	public class TextSelectionEvent : UnityEvent<string, int, int>
	{
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x4936590", Offset = "0x4936590", VA = "0x4936590")]
		public TextSelectionEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000049")]
	public class TouchScreenKeyboardEvent : UnityEvent<TouchScreenKeyboard.Status>
	{
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x49365D0", Offset = "0x49365D0", VA = "0x49365D0")]
		public TouchScreenKeyboardEvent()
		{
		}
	}

	[Token(Token = "0x200004A")]
	protected enum EditState
	{
		[Token(Token = "0x40001CB")]
		Continue,
		[Token(Token = "0x40001CC")]
		Finish
	}

	[Token(Token = "0x200004B")]
	[CompilerGenerated]
	private sealed class _003CCaretBlink_003Ed__276 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001CD")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001CE")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001CF")]
		[FieldOffset(Offset = "0x20")]
		public TMP_InputField _003C_003E4__this;

		[Token(Token = "0x17000095")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000288")]
			[Address(RVA = "0x49367A0", Offset = "0x49367A0", VA = "0x49367A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000096")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600028A")]
			[Address(RVA = "0x49367F0", Offset = "0x49367F0", VA = "0x49367F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000285")]
		[Address(RVA = "0x4936610", Offset = "0x4936610", VA = "0x4936610")]
		[DebuggerHidden]
		public _003CCaretBlink_003Ed__276(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000286")]
		[Address(RVA = "0x4936630", Offset = "0x4936630", VA = "0x4936630", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000287")]
		[Address(RVA = "0x4936640", Offset = "0x4936640", VA = "0x4936640", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000289")]
		[Address(RVA = "0x49367B0", Offset = "0x49367B0", VA = "0x49367B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200004C")]
	[CompilerGenerated]
	private sealed class _003CMouseDragOutsideRect_003Ed__294 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001D0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001D1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001D2")]
		[FieldOffset(Offset = "0x20")]
		public TMP_InputField _003C_003E4__this;

		[Token(Token = "0x40001D3")]
		[FieldOffset(Offset = "0x28")]
		public PointerEventData eventData;

		[Token(Token = "0x17000097")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600028E")]
			[Address(RVA = "0x4936AB0", Offset = "0x4936AB0", VA = "0x4936AB0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000098")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000290")]
			[Address(RVA = "0x4936B00", Offset = "0x4936B00", VA = "0x4936B00", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600028B")]
		[Address(RVA = "0x4936800", Offset = "0x4936800", VA = "0x4936800")]
		[DebuggerHidden]
		public _003CMouseDragOutsideRect_003Ed__294(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600028C")]
		[Address(RVA = "0x4936820", Offset = "0x4936820", VA = "0x4936820", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600028D")]
		[Address(RVA = "0x4936830", Offset = "0x4936830", VA = "0x4936830", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600028F")]
		[Address(RVA = "0x4936AC0", Offset = "0x4936AC0", VA = "0x4936AC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x100")]
	protected TouchScreenKeyboard m_SoftKeyboard;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] kSeparators;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x108")]
	protected RectTransform m_RectTransform;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	protected RectTransform m_TextViewport;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x118")]
	protected RectMask2D m_TextComponentRectMask;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x120")]
	protected RectMask2D m_TextViewportRectMask;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x128")]
	private Rect m_CachedViewportRect;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	protected TMP_Text m_TextComponent;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x140")]
	protected RectTransform m_TextComponentRectTransform;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	protected Graphic m_Placeholder;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x150")]
	[SerializeField]
	protected Scrollbar m_VerticalScrollbar;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x158")]
	[SerializeField]
	protected TMP_ScrollbarEventHandler m_VerticalScrollbarEventHandler;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x160")]
	private bool m_IsDrivenByLayoutComponents;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x168")]
	[SerializeField]
	private LayoutGroup m_LayoutGroup;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x170")]
	private IScrollHandler m_IScrollHandlerParent;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x178")]
	private float m_ScrollPosition;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x17C")]
	[SerializeField]
	protected float m_ScrollSensitivity;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x180")]
	[SerializeField]
	private ContentType m_ContentType;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x184")]
	[SerializeField]
	private InputType m_InputType;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x188")]
	[SerializeField]
	private char m_AsteriskChar;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x18C")]
	[SerializeField]
	private TouchScreenKeyboardType m_KeyboardType;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x190")]
	[SerializeField]
	private LineType m_LineType;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x194")]
	[SerializeField]
	private bool m_HideMobileInput;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x195")]
	[SerializeField]
	private bool m_HideSoftKeyboard;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x198")]
	[SerializeField]
	private CharacterValidation m_CharacterValidation;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x1A0")]
	[SerializeField]
	private string m_RegexValue;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x1A8")]
	[SerializeField]
	private float m_GlobalPointSize;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x1AC")]
	[SerializeField]
	private int m_CharacterLimit;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x1B0")]
	[SerializeField]
	private SubmitEvent m_OnEndEdit;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x1B8")]
	[SerializeField]
	private SubmitEvent m_OnSubmit;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x1C0")]
	[SerializeField]
	private SelectionEvent m_OnSelect;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x1C8")]
	[SerializeField]
	private SelectionEvent m_OnDeselect;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x1D0")]
	[SerializeField]
	private TextSelectionEvent m_OnTextSelection;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x1D8")]
	[SerializeField]
	private TextSelectionEvent m_OnEndTextSelection;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x1E0")]
	[SerializeField]
	private OnChangeEvent m_OnValueChanged;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x1E8")]
	[SerializeField]
	private TouchScreenKeyboardEvent m_OnTouchScreenKeyboardStatusChanged;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x1F0")]
	[SerializeField]
	private OnValidateInput m_OnValidateInput;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x1F8")]
	[SerializeField]
	private Color m_CaretColor;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x208")]
	[SerializeField]
	private bool m_CustomCaretColor;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x20C")]
	[SerializeField]
	private Color m_SelectionColor;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x220")]
	[SerializeField]
	[TextArea(5, 10)]
	protected string m_Text;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x228")]
	[SerializeField]
	[Range(0f, 4f)]
	private float m_CaretBlinkRate;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x22C")]
	[SerializeField]
	[Range(1f, 5f)]
	private int m_CaretWidth;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x230")]
	[SerializeField]
	private bool m_ReadOnly;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x231")]
	[SerializeField]
	private bool m_RichText;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x234")]
	protected int m_StringPosition;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x238")]
	protected int m_StringSelectPosition;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x23C")]
	protected int m_CaretPosition;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x240")]
	protected int m_CaretSelectPosition;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x248")]
	private RectTransform caretRectTrans;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x250")]
	protected UIVertex[] m_CursorVerts;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x258")]
	private CanvasRenderer m_CachedInputRenderer;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x260")]
	private Vector2 m_LastPosition;

	[NonSerialized]
	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x268")]
	protected Mesh m_Mesh;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x270")]
	private bool m_AllowInput;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x271")]
	private bool m_ShouldActivateNextUpdate;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x272")]
	private bool m_UpdateDrag;

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x273")]
	private bool m_DragPositionOutOfBounds;

	[Token(Token = "0x4000188")]
	private const float kHScrollSpeed = 0.05f;

	[Token(Token = "0x4000189")]
	private const float kVScrollSpeed = 0.1f;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x274")]
	protected bool m_CaretVisible;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x278")]
	private Coroutine m_BlinkCoroutine;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x280")]
	private float m_BlinkStartTime;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x288")]
	private Coroutine m_DragCoroutine;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x290")]
	private string m_OriginalText;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x298")]
	private bool m_WasCanceled;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x299")]
	private bool m_HasDoneFocusTransition;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x2A0")]
	private WaitForSecondsRealtime m_WaitForSecondsRealtime;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x2A8")]
	private bool m_PreventCallback;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x2A9")]
	private bool m_TouchKeyboardAllowsInPlaceEditing;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x2AA")]
	private bool m_IsTextComponentUpdateRequired;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x2AB")]
	private bool m_isLastKeyBackspace;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x2AC")]
	private float m_PointerDownClickStartTime;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x2B0")]
	private float m_KeyDownStartTime;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x2B4")]
	private float m_DoubleClickDelay;

	[Token(Token = "0x4000199")]
	private const string kEmailSpecialCharacters = "!#$%&'*+-/=?^_`{|}~";

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x2B8")]
	private bool m_IsCompositionActive;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x2B9")]
	private bool m_ShouldUpdateIMEWindowPosition;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x2BC")]
	private int m_PreviousIMEInsertionLine;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x2C0")]
	[SerializeField]
	protected TMP_FontAsset m_GlobalFontAsset;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x2C8")]
	[SerializeField]
	protected bool m_OnFocusSelectAll;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x2C9")]
	protected bool m_isSelectAll;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x2CA")]
	[SerializeField]
	protected bool m_ResetOnDeActivation;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x2CB")]
	private bool m_SelectionStillActive;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x2CC")]
	private bool m_ReleaseSelection;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x2D0")]
	private GameObject m_PreviouslySelectedObject;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x2D8")]
	[SerializeField]
	private bool m_RestoreOriginalTextOnEscape;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x2D9")]
	[SerializeField]
	protected bool m_isRichTextEditingAllowed;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x2DC")]
	[SerializeField]
	protected int m_LineLimit;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x2E0")]
	[SerializeField]
	protected TMP_InputValidator m_InputValidator;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x2E8")]
	private bool m_isSelected;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x2E9")]
	private bool m_IsStringPositionDirty;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x2EA")]
	private bool m_IsCaretPositionDirty;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x2EB")]
	private bool m_forceRectTransformAdjustment;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x2F0")]
	private Event m_ProcessingEvent;

	[Token(Token = "0x17000054")]
	private BaseInput inputSystem
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x490B380", Offset = "0x490B380", VA = "0x490B380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	private string compositionString
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x490B480", Offset = "0x490B480", VA = "0x490B480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	private int compositionLength
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x490B500", Offset = "0x490B500", VA = "0x490B500")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000057")]
	protected Mesh mesh
	{
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x490B900", Offset = "0x490B900", VA = "0x490B900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	public bool shouldHideMobileInput
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x490B9A0", Offset = "0x490B9A0", VA = "0x490B9A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x490BA00", Offset = "0x490BA00", VA = "0x490BA00")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public bool shouldHideSoftKeyboard
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x490BAB0", Offset = "0x490BAB0", VA = "0x490BAB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x490BB70", Offset = "0x490BB70", VA = "0x490BB70")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public string text
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x490BD50", Offset = "0x490BD50", VA = "0x490BD50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x490BD60", Offset = "0x490BD60", VA = "0x490BD60")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public bool isFocused
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x490C4D0", Offset = "0x490C4D0", VA = "0x490C4D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005C")]
	public float caretBlinkRate
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x490C4E0", Offset = "0x490C4E0", VA = "0x490C4E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x490C4F0", Offset = "0x490C4F0", VA = "0x490C4F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public int caretWidth
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x490C620", Offset = "0x490C620", VA = "0x490C620")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x490C630", Offset = "0x490C630", VA = "0x490C630")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public RectTransform textViewport
	{
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x490C730", Offset = "0x490C730", VA = "0x490C730")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x48F9760", Offset = "0x48F9760", VA = "0x48F9760")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x490C740", Offset = "0x490C740", VA = "0x490C740")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x48F97B0", Offset = "0x48F97B0", VA = "0x48F97B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public Graphic placeholder
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x490C750", Offset = "0x490C750", VA = "0x490C750")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x48F9810", Offset = "0x48F9810", VA = "0x48F9810")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public Scrollbar verticalScrollbar
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x490C760", Offset = "0x490C760", VA = "0x490C760")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x490C770", Offset = "0x490C770", VA = "0x490C770")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public float scrollSensitivity
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x490C920", Offset = "0x490C920", VA = "0x490C920")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x490C930", Offset = "0x490C930", VA = "0x490C930")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public Color caretColor
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x490C9D0", Offset = "0x490C9D0", VA = "0x490C9D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x490CA10", Offset = "0x490CA10", VA = "0x490CA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public bool customCaretColor
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x490CA90", Offset = "0x490CA90", VA = "0x490CA90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x490CAA0", Offset = "0x490CAA0", VA = "0x490CAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public Color selectionColor
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x490CB20", Offset = "0x490CB20", VA = "0x490CB20")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x490CB40", Offset = "0x490CB40", VA = "0x490CB40")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public SubmitEvent onEndEdit
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x490CBC0", Offset = "0x490CBC0", VA = "0x490CBC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x490CBD0", Offset = "0x490CBD0", VA = "0x490CBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public SubmitEvent onSubmit
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x490CC20", Offset = "0x490CC20", VA = "0x490CC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x490CC30", Offset = "0x490CC30", VA = "0x490CC30")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public SelectionEvent onSelect
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x490CC80", Offset = "0x490CC80", VA = "0x490CC80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x490CC90", Offset = "0x490CC90", VA = "0x490CC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public SelectionEvent onDeselect
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x490CCE0", Offset = "0x490CCE0", VA = "0x490CCE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x490CCF0", Offset = "0x490CCF0", VA = "0x490CCF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public TextSelectionEvent onTextSelection
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x490CD40", Offset = "0x490CD40", VA = "0x490CD40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x490CD50", Offset = "0x490CD50", VA = "0x490CD50")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public TextSelectionEvent onEndTextSelection
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x490CDA0", Offset = "0x490CDA0", VA = "0x490CDA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x490CDB0", Offset = "0x490CDB0", VA = "0x490CDB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public OnChangeEvent onValueChanged
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x490CE00", Offset = "0x490CE00", VA = "0x490CE00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x490CE10", Offset = "0x490CE10", VA = "0x490CE10")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public TouchScreenKeyboardEvent onTouchScreenKeyboardStatusChanged
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x490CE60", Offset = "0x490CE60", VA = "0x490CE60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x490CE70", Offset = "0x490CE70", VA = "0x490CE70")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public OnValidateInput onValidateInput
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x490CEC0", Offset = "0x490CEC0", VA = "0x490CEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x490CED0", Offset = "0x490CED0", VA = "0x490CED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public int characterLimit
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x490CF20", Offset = "0x490CF20", VA = "0x490CF20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x490CF30", Offset = "0x490CF30", VA = "0x490CF30")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public float pointSize
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x490CFD0", Offset = "0x490CFD0", VA = "0x490CFD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x490CFE0", Offset = "0x490CFE0", VA = "0x490CFE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x490D180", Offset = "0x490D180", VA = "0x490D180")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x48F9860", Offset = "0x48F9860", VA = "0x48F9860")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public bool onFocusSelectAll
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x490D270", Offset = "0x490D270", VA = "0x490D270")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x490D280", Offset = "0x490D280", VA = "0x490D280")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public bool resetOnDeActivation
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x490D290", Offset = "0x490D290", VA = "0x490D290")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x490D2A0", Offset = "0x490D2A0", VA = "0x490D2A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public bool restoreOriginalTextOnEscape
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x490D2B0", Offset = "0x490D2B0", VA = "0x490D2B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x490D2C0", Offset = "0x490D2C0", VA = "0x490D2C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool isRichTextEditingAllowed
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x490D2D0", Offset = "0x490D2D0", VA = "0x490D2D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x490D2E0", Offset = "0x490D2E0", VA = "0x490D2E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public ContentType contentType
	{
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x490D2F0", Offset = "0x490D2F0", VA = "0x490D2F0")]
		get
		{
			return default(ContentType);
		}
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x490D300", Offset = "0x490D300", VA = "0x490D300")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public LineType lineType
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x490D520", Offset = "0x490D520", VA = "0x490D520")]
		get
		{
			return default(LineType);
		}
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x490D530", Offset = "0x490D530", VA = "0x490D530")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public int lineLimit
	{
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x490D640", Offset = "0x490D640", VA = "0x490D640")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x490D650", Offset = "0x490D650", VA = "0x490D650")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public InputType inputType
	{
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x490D6B0", Offset = "0x490D6B0", VA = "0x490D6B0")]
		get
		{
			return default(InputType);
		}
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x490D6C0", Offset = "0x490D6C0", VA = "0x490D6C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x490D750", Offset = "0x490D750", VA = "0x490D750")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x490D760", Offset = "0x490D760", VA = "0x490D760")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public CharacterValidation characterValidation
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x490D7D0", Offset = "0x490D7D0", VA = "0x490D7D0")]
		get
		{
			return default(CharacterValidation);
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x490D7E0", Offset = "0x490D7E0", VA = "0x490D7E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public TMP_InputValidator inputValidator
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x490D850", Offset = "0x490D850", VA = "0x490D850")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x490D860", Offset = "0x490D860", VA = "0x490D860")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public bool readOnly
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x490D8F0", Offset = "0x490D8F0", VA = "0x490D8F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x490D900", Offset = "0x490D900", VA = "0x490D900")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public bool richText
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x490D910", Offset = "0x490D910", VA = "0x490D910")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x490D920", Offset = "0x490D920", VA = "0x490D920")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public bool multiLine
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x490DA40", Offset = "0x490DA40", VA = "0x490DA40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000080")]
	public char asteriskChar
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x490DA50", Offset = "0x490DA50", VA = "0x490DA50")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x490DA60", Offset = "0x490DA60", VA = "0x490DA60")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public bool wasCanceled
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x490DAC0", Offset = "0x490DAC0", VA = "0x490DAC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000082")]
	protected int caretPositionInternal
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x490DB40", Offset = "0x490DB40", VA = "0x490DB40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x490DB70", Offset = "0x490DB70", VA = "0x490DB70")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	protected int stringPositionInternal
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x490DBB0", Offset = "0x490DBB0", VA = "0x490DBB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x490DBE0", Offset = "0x490DBE0", VA = "0x490DBE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	protected int caretSelectPositionInternal
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x490DC10", Offset = "0x490DC10", VA = "0x490DC10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x490DC40", Offset = "0x490DC40", VA = "0x490DC40")]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	protected int stringSelectPositionInternal
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x490DC80", Offset = "0x490DC80", VA = "0x490DC80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x490DCB0", Offset = "0x490DCB0", VA = "0x490DCB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	private bool hasSelection
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x490DCE0", Offset = "0x490DCE0", VA = "0x490DCE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000087")]
	public int caretPosition
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x490DD40", Offset = "0x490DD40", VA = "0x490DD40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x490DD70", Offset = "0x490DD70", VA = "0x490DD70")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public int selectionAnchorPosition
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x490DF50", Offset = "0x490DF50", VA = "0x490DF50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x490DE50", Offset = "0x490DE50", VA = "0x490DE50")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public int selectionFocusPosition
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x490DF80", Offset = "0x490DF80", VA = "0x490DF80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x490DED0", Offset = "0x490DED0", VA = "0x490DED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public int stringPosition
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x490DFB0", Offset = "0x490DFB0", VA = "0x490DFB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x490DFE0", Offset = "0x490DFE0", VA = "0x490DFE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public int selectionStringAnchorPosition
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x490E180", Offset = "0x490E180", VA = "0x490E180")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000208")]
		[Address(RVA = "0x490E0A0", Offset = "0x490E0A0", VA = "0x490E0A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int selectionStringFocusPosition
	{
		[Token(Token = "0x6000209")]
		[Address(RVA = "0x490E1B0", Offset = "0x490E1B0", VA = "0x490E1B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x490E110", Offset = "0x490E110", VA = "0x490E110")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	private static string clipboard
	{
		[Token(Token = "0x6000217")]
		[Address(RVA = "0x4910570", Offset = "0x4910570", VA = "0x4910570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x4910580", Offset = "0x4910580", VA = "0x4910580")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public virtual float minWidth
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x491AC90", Offset = "0x491AC90", VA = "0x491AC90", Slot = "76")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700008F")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x491ACA0", Offset = "0x491ACA0", VA = "0x491ACA0", Slot = "77")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000090")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x491AE20", Offset = "0x491AE20", VA = "0x491AE20", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000091")]
	public virtual float minHeight
	{
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x491AE30", Offset = "0x491AE30", VA = "0x491AE30", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000092")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x491AE40", Offset = "0x491AE40", VA = "0x491AE40", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000093")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x491AFD0", Offset = "0x491AFD0", VA = "0x491AFD0", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000094")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x491AFE0", Offset = "0x491AFE0", VA = "0x491AFE0", Slot = "82")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x490B530", Offset = "0x490B530", VA = "0x490B530")]
	protected TMP_InputField()
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x490BCC0", Offset = "0x490BCC0", VA = "0x490BCC0")]
	private bool isKeyboardUsingEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x490BEE0", Offset = "0x490BEE0", VA = "0x490BEE0")]
	public void SetTextWithoutNotify(string input)
	{
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x490BD70", Offset = "0x490BD70", VA = "0x490BD70")]
	private void SetText(string value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x490DAD0", Offset = "0x490DAD0", VA = "0x490DAD0")]
	protected void ClampStringPos(ref int pos)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x490DB00", Offset = "0x490DB00", VA = "0x490DB00")]
	protected void ClampCaretPos(ref int pos)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x490E1E0", Offset = "0x490E1E0", VA = "0x490E1E0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x490F0B0", Offset = "0x490F0B0", VA = "0x490F0B0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x490F640", Offset = "0x490F640", VA = "0x490F640")]
	private void ON_TEXT_CHANGED(UnityEngine.Object obj)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x490FA60", Offset = "0x490FA60", VA = "0x490FA60")]
	[IteratorStateMachine(typeof(_003CCaretBlink_003Ed__276))]
	private IEnumerator CaretBlink()
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x490FAD0", Offset = "0x490FAD0", VA = "0x490FAD0")]
	private void SetCaretVisible()
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x490C560", Offset = "0x490C560", VA = "0x490C560")]
	private void SetCaretActive()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x490FB00", Offset = "0x490FB00", VA = "0x490FB00")]
	protected void OnFocus()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x490FB50", Offset = "0x490FB50", VA = "0x490FB50")]
	protected void SelectAll()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x490FBA0", Offset = "0x490FBA0", VA = "0x490FBA0")]
	public void MoveTextEnd(bool shift)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x490FDA0", Offset = "0x490FDA0", VA = "0x490FDA0")]
	public void MoveTextStart(bool shift)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x490FFE0", Offset = "0x490FFE0", VA = "0x490FFE0")]
	public void MoveToEndOfLine(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4910290", Offset = "0x4910290", VA = "0x4910290")]
	public void MoveToStartOfLine(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4910590", Offset = "0x4910590", VA = "0x4910590")]
	private bool InPlaceEditing()
	{
		return default(bool);
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4910890", Offset = "0x4910890", VA = "0x4910890")]
	private void UpdateStringPositionFromKeyboard()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4910BB0", Offset = "0x4910BB0", VA = "0x4910BB0", Slot = "60")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x49125A0", Offset = "0x49125A0", VA = "0x49125A0")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4912780", Offset = "0x4912780", VA = "0x4912780", Slot = "61")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x49127A0", Offset = "0x49127A0", VA = "0x49127A0", Slot = "62")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4912CA0", Offset = "0x4912CA0", VA = "0x4912CA0")]
	[IteratorStateMachine(typeof(_003CMouseDragOutsideRect_003Ed__294))]
	private IEnumerator MouseDragOutsideRect(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4912D20", Offset = "0x4912D20", VA = "0x4912D20", Slot = "63")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4912D40", Offset = "0x4912D40", VA = "0x4912D40", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4913870", Offset = "0x4913870", VA = "0x4913870")]
	protected EditState KeyPressed(Event evt)
	{
		return default(EditState);
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4915C20", Offset = "0x4915C20", VA = "0x4915C20", Slot = "64")]
	protected virtual bool IsValidChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4915C30", Offset = "0x4915C30", VA = "0x4915C30")]
	public void ProcessEvent(Event e)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4915C40", Offset = "0x4915C40", VA = "0x4915C40", Slot = "65")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4915EF0", Offset = "0x4915EF0", VA = "0x4915EF0", Slot = "66")]
	public virtual void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x49160F0", Offset = "0x49160F0", VA = "0x49160F0")]
	private float GetScrollPositionRelativeToViewport()
	{
		return default(float);
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x49148C0", Offset = "0x49148C0", VA = "0x49148C0")]
	private string GetSelectedString()
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4916410", Offset = "0x4916410", VA = "0x4916410")]
	private int FindNextWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4915400", Offset = "0x4915400", VA = "0x4915400")]
	private void MoveRight(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4916500", Offset = "0x4916500", VA = "0x4916500")]
	private int FindPrevWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4914C60", Offset = "0x4914C60", VA = "0x4914C60")]
	private void MoveLeft(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x49165D0", Offset = "0x49165D0", VA = "0x49165D0")]
	private int LineUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4916780", Offset = "0x4916780", VA = "0x4916780")]
	private int LineDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4916910", Offset = "0x4916910", VA = "0x4916910")]
	private int PageUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4916B70", Offset = "0x4916B70", VA = "0x4916B70")]
	private int PageDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4915BF0", Offset = "0x4915BF0", VA = "0x4915BF0")]
	private void MoveDown(bool shift)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4916DD0", Offset = "0x4916DD0", VA = "0x4916DD0")]
	private void MoveDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4915BE0", Offset = "0x4915BE0", VA = "0x4915BE0")]
	private void MoveUp(bool shift)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4917170", Offset = "0x4917170", VA = "0x4917170")]
	private void MoveUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4915C00", Offset = "0x4915C00", VA = "0x4915C00")]
	private void MovePageUp(bool shift)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x49174E0", Offset = "0x49174E0", VA = "0x49174E0")]
	private void MovePageUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x4915C10", Offset = "0x4915C10", VA = "0x4915C10")]
	private void MovePageDown(bool shift)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4917A10", Offset = "0x4917A10", VA = "0x4917A10")]
	private void MovePageDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x49149D0", Offset = "0x49149D0", VA = "0x49149D0")]
	private void Delete()
	{
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x4914480", Offset = "0x4914480", VA = "0x4914480")]
	private void DeleteKey()
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x4913D80", Offset = "0x4913D80", VA = "0x4913D80")]
	private void Backspace()
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4917F60", Offset = "0x4917F60", VA = "0x4917F60", Slot = "67")]
	protected virtual void Append(string input)
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4917FF0", Offset = "0x4917FF0", VA = "0x4917FF0", Slot = "68")]
	protected virtual void Append(char input)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x49182F0", Offset = "0x49182F0", VA = "0x49182F0")]
	private void Insert(char c)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4914C20", Offset = "0x4914C20", VA = "0x4914C20")]
	private void UpdateTouchKeyboardFromEditChanges()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4912550", Offset = "0x4912550", VA = "0x4912550")]
	private void SendOnValueChangedAndUpdateLabel()
	{
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x490C480", Offset = "0x490C480", VA = "0x490C480")]
	private void SendOnValueChanged()
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4918470", Offset = "0x4918470", VA = "0x4918470")]
	protected void SendOnEndEdit()
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4915EA0", Offset = "0x4915EA0", VA = "0x4915EA0")]
	protected void SendOnSubmit()
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x49184C0", Offset = "0x49184C0", VA = "0x49184C0")]
	protected void SendOnFocus()
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4918510", Offset = "0x4918510", VA = "0x4918510")]
	protected void SendOnFocusLost()
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4918560", Offset = "0x4918560", VA = "0x4918560")]
	protected void SendOnTextSelection()
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4918620", Offset = "0x4918620", VA = "0x4918620")]
	protected void SendOnEndTextSelection()
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4911CB0", Offset = "0x4911CB0", VA = "0x4911CB0")]
	protected void SendTouchScreenKeyboardStatusChanged()
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x490BEF0", Offset = "0x490BEF0", VA = "0x490BEF0")]
	protected void UpdateLabel()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x490F980", Offset = "0x490F980", VA = "0x490F980")]
	private void UpdateScrollbar()
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x49186E0", Offset = "0x49186E0", VA = "0x49186E0")]
	private void OnScrollbarValueChange(float value)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x490F0A0", Offset = "0x490F0A0", VA = "0x490F0A0")]
	private void UpdateMaskRegions()
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4916220", Offset = "0x4916220", VA = "0x4916220")]
	private void AdjustTextPositionRelativeToViewport(float relativePosition)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x490F920", Offset = "0x490F920", VA = "0x490F920")]
	private int GetCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4918720", Offset = "0x4918720", VA = "0x4918720")]
	private int GetMinCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4918790", Offset = "0x4918790", VA = "0x4918790")]
	private int GetMaxCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x490FD20", Offset = "0x490FD20", VA = "0x490FD20")]
	private int GetStringIndexFromCaretPosition(int caretPosition)
	{
		return default(int);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x49187F0", Offset = "0x49187F0", VA = "0x49187F0")]
	public void ForceLabelUpdate()
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x490C6C0", Offset = "0x490C6C0", VA = "0x490C6C0")]
	private void MarkGeometryAsDirty()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4918800", Offset = "0x4918800", VA = "0x4918800", Slot = "69")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x49188C0", Offset = "0x49188C0", VA = "0x49188C0", Slot = "70")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x49188D0", Offset = "0x49188D0", VA = "0x49188D0", Slot = "71")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4918810", Offset = "0x4918810", VA = "0x4918810")]
	private void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x490EA40", Offset = "0x490EA40", VA = "0x490EA40")]
	private void AssignPositioningIfNeeded()
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x49188E0", Offset = "0x49188E0", VA = "0x49188E0")]
	private void OnFillVBO(Mesh vbo)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4918E60", Offset = "0x4918E60", VA = "0x4918E60")]
	private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x491A190", Offset = "0x491A190", VA = "0x491A190")]
	private void CreateCursorVerts()
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4919770", Offset = "0x4919770", VA = "0x4919770")]
	private void GenerateHightlight(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x491A350", Offset = "0x491A350", VA = "0x491A350")]
	private void AdjustRectTransformRelativeToViewport(Vector2 startPosition, float height, bool isCharVisible)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4911D20", Offset = "0x4911D20", VA = "0x4911D20")]
	protected char Validate(string text, int pos, char ch)
	{
		return default(char);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x491A970", Offset = "0x491A970", VA = "0x491A970")]
	public void ActivateInputField()
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x49114B0", Offset = "0x49114B0", VA = "0x49114B0")]
	private void ActivateInputFieldInternal()
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x491AAA0", Offset = "0x491AAA0", VA = "0x491AAA0", Slot = "36")]
	public override void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x491AB00", Offset = "0x491AB00", VA = "0x491AB00", Slot = "72")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x491AB20", Offset = "0x491AB20", VA = "0x491AB20")]
	public void OnControlClick()
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x4911C00", Offset = "0x4911C00", VA = "0x4911C00")]
	public void ReleaseSelection()
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x490F410", Offset = "0x490F410", VA = "0x490F410")]
	public void DeactivateInputField(bool clearSelection = false)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x491AB30", Offset = "0x491AB30", VA = "0x491AB30", Slot = "37")]
	public override void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x491ABA0", Offset = "0x491ABA0", VA = "0x491ABA0", Slot = "73")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x490D440", Offset = "0x490D440", VA = "0x490D440")]
	private void EnforceContentType()
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x490B870", Offset = "0x490B870", VA = "0x490B870")]
	private void SetTextComponentWrapMode()
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x490D9B0", Offset = "0x490D9B0", VA = "0x490D9B0")]
	private void SetTextComponentRichTextMode()
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x490D600", Offset = "0x490D600", VA = "0x490D600")]
	private void SetToCustomIfContentTypeIsNot(params ContentType[] allowedContentTypes)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x490D730", Offset = "0x490D730", VA = "0x490D730")]
	private void SetToCustom()
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x490D8D0", Offset = "0x490D8D0", VA = "0x490D8D0")]
	private void SetToCustom(CharacterValidation characterValidation)
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x491AC40", Offset = "0x491AC40", VA = "0x491AC40", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x491AC70", Offset = "0x491AC70", VA = "0x491AC70", Slot = "74")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x491AC80", Offset = "0x491AC80", VA = "0x491AC80", Slot = "75")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x490D090", Offset = "0x490D090", VA = "0x490D090")]
	public void SetGlobalPointSize(float pointSize)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x490D190", Offset = "0x490D190", VA = "0x490D190")]
	public void SetGlobalFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x491B080", Offset = "0x491B080", VA = "0x491B080", Slot = "46")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
