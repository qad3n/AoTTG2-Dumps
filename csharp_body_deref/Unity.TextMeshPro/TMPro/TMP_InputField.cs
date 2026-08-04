// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_InputField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x2000055")]
[AddComponentMenu("UI/TextMeshPro - Input Field", 11)]
public class TMP_InputField : Selectable, IUpdateSelectedHandler, IEventSystemHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerClickHandler, ISubmitHandler, ICanvasElement, ILayoutElement, IScrollHandler
{
	[Token(Token = "0x2000056")]
	public enum ContentType
	{
		[Token(Token = "0x40002A2")]
		Standard,
		[Token(Token = "0x40002A3")]
		Autocorrected,
		[Token(Token = "0x40002A4")]
		IntegerNumber,
		[Token(Token = "0x40002A5")]
		DecimalNumber,
		[Token(Token = "0x40002A6")]
		Alphanumeric,
		[Token(Token = "0x40002A7")]
		Name,
		[Token(Token = "0x40002A8")]
		EmailAddress,
		[Token(Token = "0x40002A9")]
		Password,
		[Token(Token = "0x40002AA")]
		Pin,
		[Token(Token = "0x40002AB")]
		Custom
	}

	[Token(Token = "0x2000057")]
	public enum InputType
	{
		[Token(Token = "0x40002AD")]
		Standard,
		[Token(Token = "0x40002AE")]
		AutoCorrect,
		[Token(Token = "0x40002AF")]
		Password
	}

	[Token(Token = "0x2000058")]
	public enum CharacterValidation
	{
		[Token(Token = "0x40002B1")]
		None,
		[Token(Token = "0x40002B2")]
		Digit,
		[Token(Token = "0x40002B3")]
		Integer,
		[Token(Token = "0x40002B4")]
		Decimal,
		[Token(Token = "0x40002B5")]
		Alphanumeric,
		[Token(Token = "0x40002B6")]
		Name,
		[Token(Token = "0x40002B7")]
		Regex,
		[Token(Token = "0x40002B8")]
		EmailAddress,
		[Token(Token = "0x40002B9")]
		CustomValidator
	}

	[Token(Token = "0x2000059")]
	public enum LineType
	{
		[Token(Token = "0x40002BB")]
		SingleLine,
		[Token(Token = "0x40002BC")]
		MultiLineSubmit,
		[Token(Token = "0x40002BD")]
		MultiLineNewline
	}

	[Token(Token = "0x200005A")]
	public delegate char OnValidateInput(string text, int charIndex, char addedChar);

	[Serializable]
	[Token(Token = "0x200005B")]
	public class SubmitEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x4C83A50", Offset = "0x4C83A50", VA = "0x4C83A50")]
		public SubmitEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200005C")]
	public class OnChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x4C83A90", Offset = "0x4C83A90", VA = "0x4C83A90")]
		public OnChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200005D")]
	public class SelectionEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x4C83AD0", Offset = "0x4C83AD0", VA = "0x4C83AD0")]
		public SelectionEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200005E")]
	public class TextSelectionEvent : UnityEvent<string, int, int>
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x4C83B10", Offset = "0x4C83B10", VA = "0x4C83B10")]
		public TextSelectionEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200005F")]
	public class TouchScreenKeyboardEvent : UnityEvent<TouchScreenKeyboard.Status>
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x4C83B50", Offset = "0x4C83B50", VA = "0x4C83B50")]
		public TouchScreenKeyboardEvent()
		{
		}
	}

	[Token(Token = "0x2000060")]
	protected enum EditState
	{
		[Token(Token = "0x40002BF")]
		Continue,
		[Token(Token = "0x40002C0")]
		Finish
	}

	[Token(Token = "0x2000061")]
	[CompilerGenerated]
	private sealed class _003CCaretBlink_003Ed__276 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40002C1")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40002C2")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40002C3")]
		[FieldOffset(Offset = "0x20")]
		public TMP_InputField _003C_003E4__this;

		[Token(Token = "0x170000B6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000379")]
			[Address(RVA = "0x4C83D20", Offset = "0x4C83D20", VA = "0x4C83D20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600037B")]
			[Address(RVA = "0x4C83D70", Offset = "0x4C83D70", VA = "0x4C83D70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x4C83B90", Offset = "0x4C83B90", VA = "0x4C83B90")]
		[DebuggerHidden]
		public _003CCaretBlink_003Ed__276(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000377")]
		[Address(RVA = "0x4C83BB0", Offset = "0x4C83BB0", VA = "0x4C83BB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x4C83BC0", Offset = "0x4C83BC0", VA = "0x4C83BC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600037A")]
		[Address(RVA = "0x4C83D30", Offset = "0x4C83D30", VA = "0x4C83D30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000062")]
	[CompilerGenerated]
	private sealed class _003CMouseDragOutsideRect_003Ed__294 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40002C4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40002C5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40002C6")]
		[FieldOffset(Offset = "0x20")]
		public TMP_InputField _003C_003E4__this;

		[Token(Token = "0x40002C7")]
		[FieldOffset(Offset = "0x28")]
		public PointerEventData eventData;

		[Token(Token = "0x170000B8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600037F")]
			[Address(RVA = "0x4C84030", Offset = "0x4C84030", VA = "0x4C84030", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000381")]
			[Address(RVA = "0x4C84080", Offset = "0x4C84080", VA = "0x4C84080", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600037C")]
		[Address(RVA = "0x4C83D80", Offset = "0x4C83D80", VA = "0x4C83D80")]
		[DebuggerHidden]
		public _003CMouseDragOutsideRect_003Ed__294(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600037D")]
		[Address(RVA = "0x4C83DA0", Offset = "0x4C83DA0", VA = "0x4C83DA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600037E")]
		[Address(RVA = "0x4C83DB0", Offset = "0x4C83DB0", VA = "0x4C83DB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000380")]
		[Address(RVA = "0x4C84040", Offset = "0x4C84040", VA = "0x4C84040", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x100")]
	protected TouchScreenKeyboard m_SoftKeyboard;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] kSeparators;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x108")]
	protected RectTransform m_RectTransform;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	protected RectTransform m_TextViewport;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x118")]
	protected RectMask2D m_TextComponentRectMask;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x120")]
	protected RectMask2D m_TextViewportRectMask;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x128")]
	private Rect m_CachedViewportRect;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	protected TMP_Text m_TextComponent;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x140")]
	protected RectTransform m_TextComponentRectTransform;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	protected Graphic m_Placeholder;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x150")]
	[SerializeField]
	protected Scrollbar m_VerticalScrollbar;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x158")]
	[SerializeField]
	protected TMP_ScrollbarEventHandler m_VerticalScrollbarEventHandler;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x160")]
	private bool m_IsDrivenByLayoutComponents;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x168")]
	[SerializeField]
	private LayoutGroup m_LayoutGroup;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x170")]
	private IScrollHandler m_IScrollHandlerParent;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x178")]
	private float m_ScrollPosition;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x17C")]
	[SerializeField]
	protected float m_ScrollSensitivity;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x180")]
	[SerializeField]
	private ContentType m_ContentType;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x184")]
	[SerializeField]
	private InputType m_InputType;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x188")]
	[SerializeField]
	private char m_AsteriskChar;

	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x18C")]
	[SerializeField]
	private TouchScreenKeyboardType m_KeyboardType;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x190")]
	[SerializeField]
	private LineType m_LineType;

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x194")]
	[SerializeField]
	private bool m_HideMobileInput;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x195")]
	[SerializeField]
	private bool m_HideSoftKeyboard;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x198")]
	[SerializeField]
	private CharacterValidation m_CharacterValidation;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x1A0")]
	[SerializeField]
	private string m_RegexValue;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x1A8")]
	[SerializeField]
	private float m_GlobalPointSize;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x1AC")]
	[SerializeField]
	private int m_CharacterLimit;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x1B0")]
	[SerializeField]
	private SubmitEvent m_OnEndEdit;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x1B8")]
	[SerializeField]
	private SubmitEvent m_OnSubmit;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x1C0")]
	[SerializeField]
	private SelectionEvent m_OnSelect;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x1C8")]
	[SerializeField]
	private SelectionEvent m_OnDeselect;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x1D0")]
	[SerializeField]
	private TextSelectionEvent m_OnTextSelection;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x1D8")]
	[SerializeField]
	private TextSelectionEvent m_OnEndTextSelection;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x1E0")]
	[SerializeField]
	private OnChangeEvent m_OnValueChanged;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x1E8")]
	[SerializeField]
	private TouchScreenKeyboardEvent m_OnTouchScreenKeyboardStatusChanged;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x1F0")]
	[SerializeField]
	private OnValidateInput m_OnValidateInput;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x1F8")]
	[SerializeField]
	private Color m_CaretColor;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x208")]
	[SerializeField]
	private bool m_CustomCaretColor;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x20C")]
	[SerializeField]
	private Color m_SelectionColor;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x220")]
	[SerializeField]
	[TextArea(5, 10)]
	protected string m_Text;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x228")]
	[SerializeField]
	[Range(0f, 4f)]
	private float m_CaretBlinkRate;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x22C")]
	[SerializeField]
	[Range(1f, 5f)]
	private int m_CaretWidth;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x230")]
	[SerializeField]
	private bool m_ReadOnly;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x231")]
	[SerializeField]
	private bool m_RichText;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x234")]
	protected int m_StringPosition;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x238")]
	protected int m_StringSelectPosition;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x23C")]
	protected int m_CaretPosition;

	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x240")]
	protected int m_CaretSelectPosition;

	[Token(Token = "0x4000273")]
	[FieldOffset(Offset = "0x248")]
	private RectTransform caretRectTrans;

	[Token(Token = "0x4000274")]
	[FieldOffset(Offset = "0x250")]
	protected UIVertex[] m_CursorVerts;

	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x258")]
	private CanvasRenderer m_CachedInputRenderer;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x260")]
	private Vector2 m_LastPosition;

	[NonSerialized]
	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x268")]
	protected Mesh m_Mesh;

	[Token(Token = "0x4000278")]
	[FieldOffset(Offset = "0x270")]
	private bool m_AllowInput;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x271")]
	private bool m_ShouldActivateNextUpdate;

	[Token(Token = "0x400027A")]
	[FieldOffset(Offset = "0x272")]
	private bool m_UpdateDrag;

	[Token(Token = "0x400027B")]
	[FieldOffset(Offset = "0x273")]
	private bool m_DragPositionOutOfBounds;

	[Token(Token = "0x400027C")]
	private const float kHScrollSpeed = 0.05f;

	[Token(Token = "0x400027D")]
	private const float kVScrollSpeed = 0.1f;

	[Token(Token = "0x400027E")]
	[FieldOffset(Offset = "0x274")]
	protected bool m_CaretVisible;

	[Token(Token = "0x400027F")]
	[FieldOffset(Offset = "0x278")]
	private Coroutine m_BlinkCoroutine;

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x280")]
	private float m_BlinkStartTime;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x288")]
	private Coroutine m_DragCoroutine;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0x290")]
	private string m_OriginalText;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x298")]
	private bool m_WasCanceled;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x299")]
	private bool m_HasDoneFocusTransition;

	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x2A0")]
	private WaitForSecondsRealtime m_WaitForSecondsRealtime;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x2A8")]
	private bool m_PreventCallback;

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x2A9")]
	private bool m_TouchKeyboardAllowsInPlaceEditing;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x2AA")]
	private bool m_IsTextComponentUpdateRequired;

	[Token(Token = "0x4000289")]
	[FieldOffset(Offset = "0x2AB")]
	private bool m_isLastKeyBackspace;

	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x2AC")]
	private float m_PointerDownClickStartTime;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x2B0")]
	private float m_KeyDownStartTime;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x2B4")]
	private float m_DoubleClickDelay;

	[Token(Token = "0x400028D")]
	private const string kEmailSpecialCharacters = "!#$%&'*+-/=?^_`{|}~";

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x2B8")]
	private bool m_IsCompositionActive;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x2B9")]
	private bool m_ShouldUpdateIMEWindowPosition;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x2BC")]
	private int m_PreviousIMEInsertionLine;

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x2C0")]
	[SerializeField]
	protected TMP_FontAsset m_GlobalFontAsset;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x2C8")]
	[SerializeField]
	protected bool m_OnFocusSelectAll;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x2C9")]
	protected bool m_isSelectAll;

	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x2CA")]
	[SerializeField]
	protected bool m_ResetOnDeActivation;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x2CB")]
	private bool m_SelectionStillActive;

	[Token(Token = "0x4000296")]
	[FieldOffset(Offset = "0x2CC")]
	private bool m_ReleaseSelection;

	[Token(Token = "0x4000297")]
	[FieldOffset(Offset = "0x2D0")]
	private GameObject m_PreviouslySelectedObject;

	[Token(Token = "0x4000298")]
	[FieldOffset(Offset = "0x2D8")]
	[SerializeField]
	private bool m_RestoreOriginalTextOnEscape;

	[Token(Token = "0x4000299")]
	[FieldOffset(Offset = "0x2D9")]
	[SerializeField]
	protected bool m_isRichTextEditingAllowed;

	[Token(Token = "0x400029A")]
	[FieldOffset(Offset = "0x2DC")]
	[SerializeField]
	protected int m_LineLimit;

	[Token(Token = "0x400029B")]
	[FieldOffset(Offset = "0x2E0")]
	[SerializeField]
	protected TMP_InputValidator m_InputValidator;

	[Token(Token = "0x400029C")]
	[FieldOffset(Offset = "0x2E8")]
	private bool m_isSelected;

	[Token(Token = "0x400029D")]
	[FieldOffset(Offset = "0x2E9")]
	private bool m_IsStringPositionDirty;

	[Token(Token = "0x400029E")]
	[FieldOffset(Offset = "0x2EA")]
	private bool m_IsCaretPositionDirty;

	[Token(Token = "0x400029F")]
	[FieldOffset(Offset = "0x2EB")]
	private bool m_forceRectTransformAdjustment;

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x2F0")]
	private Event m_ProcessingEvent;

	[Token(Token = "0x17000075")]
	private BaseInput inputSystem
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x4C58900", Offset = "0x4C58900", VA = "0x4C58900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	private string compositionString
	{
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x4C58A00", Offset = "0x4C58A00", VA = "0x4C58A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	private int compositionLength
	{
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x4C58A80", Offset = "0x4C58A80", VA = "0x4C58A80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000078")]
	protected Mesh mesh
	{
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x4C58E80", Offset = "0x4C58E80", VA = "0x4C58E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public bool shouldHideMobileInput
	{
		[Token(Token = "0x6000291")]
		[Address(RVA = "0x4C58F20", Offset = "0x4C58F20", VA = "0x4C58F20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x4C58F80", Offset = "0x4C58F80", VA = "0x4C58F80")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public bool shouldHideSoftKeyboard
	{
		[Token(Token = "0x6000293")]
		[Address(RVA = "0x4C59030", Offset = "0x4C59030", VA = "0x4C59030")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000294")]
		[Address(RVA = "0x4C590F0", Offset = "0x4C590F0", VA = "0x4C590F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public string text
	{
		[Token(Token = "0x6000296")]
		[Address(RVA = "0x4C592D0", Offset = "0x4C592D0", VA = "0x4C592D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000297")]
		[Address(RVA = "0x4C592E0", Offset = "0x4C592E0", VA = "0x4C592E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public bool isFocused
	{
		[Token(Token = "0x600029A")]
		[Address(RVA = "0x4C59A50", Offset = "0x4C59A50", VA = "0x4C59A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007D")]
	public float caretBlinkRate
	{
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x4C59A60", Offset = "0x4C59A60", VA = "0x4C59A60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x4C59A70", Offset = "0x4C59A70", VA = "0x4C59A70")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public int caretWidth
	{
		[Token(Token = "0x600029D")]
		[Address(RVA = "0x4C59BA0", Offset = "0x4C59BA0", VA = "0x4C59BA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x4C59BB0", Offset = "0x4C59BB0", VA = "0x4C59BB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public RectTransform textViewport
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x4C59CB0", Offset = "0x4C59CB0", VA = "0x4C59CB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x4C46CE0", Offset = "0x4C46CE0", VA = "0x4C46CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x4C59CC0", Offset = "0x4C59CC0", VA = "0x4C59CC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x4C46D30", Offset = "0x4C46D30", VA = "0x4C46D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public Graphic placeholder
	{
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x4C59CD0", Offset = "0x4C59CD0", VA = "0x4C59CD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x4C46D90", Offset = "0x4C46D90", VA = "0x4C46D90")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public Scrollbar verticalScrollbar
	{
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x4C59CE0", Offset = "0x4C59CE0", VA = "0x4C59CE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x4C59CF0", Offset = "0x4C59CF0", VA = "0x4C59CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public float scrollSensitivity
	{
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x4C59EA0", Offset = "0x4C59EA0", VA = "0x4C59EA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x4C59EB0", Offset = "0x4C59EB0", VA = "0x4C59EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public Color caretColor
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x4C59F50", Offset = "0x4C59F50", VA = "0x4C59F50")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x4C59F90", Offset = "0x4C59F90", VA = "0x4C59F90")]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public bool customCaretColor
	{
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x4C5A010", Offset = "0x4C5A010", VA = "0x4C5A010")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x4C5A020", Offset = "0x4C5A020", VA = "0x4C5A020")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public Color selectionColor
	{
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x4C5A0A0", Offset = "0x4C5A0A0", VA = "0x4C5A0A0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x4C5A0C0", Offset = "0x4C5A0C0", VA = "0x4C5A0C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public SubmitEvent onEndEdit
	{
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x4C5A140", Offset = "0x4C5A140", VA = "0x4C5A140")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x4C5A150", Offset = "0x4C5A150", VA = "0x4C5A150")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public SubmitEvent onSubmit
	{
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x4C5A1A0", Offset = "0x4C5A1A0", VA = "0x4C5A1A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x4C5A1B0", Offset = "0x4C5A1B0", VA = "0x4C5A1B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public SelectionEvent onSelect
	{
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x4C5A200", Offset = "0x4C5A200", VA = "0x4C5A200")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x4C5A210", Offset = "0x4C5A210", VA = "0x4C5A210")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public SelectionEvent onDeselect
	{
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x4C5A260", Offset = "0x4C5A260", VA = "0x4C5A260")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x4C5A270", Offset = "0x4C5A270", VA = "0x4C5A270")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public TextSelectionEvent onTextSelection
	{
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x4C5A2C0", Offset = "0x4C5A2C0", VA = "0x4C5A2C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x4C5A2D0", Offset = "0x4C5A2D0", VA = "0x4C5A2D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public TextSelectionEvent onEndTextSelection
	{
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x4C5A320", Offset = "0x4C5A320", VA = "0x4C5A320")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x4C5A330", Offset = "0x4C5A330", VA = "0x4C5A330")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public OnChangeEvent onValueChanged
	{
		[Token(Token = "0x60002BB")]
		[Address(RVA = "0x4C5A380", Offset = "0x4C5A380", VA = "0x4C5A380")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002BC")]
		[Address(RVA = "0x4C5A390", Offset = "0x4C5A390", VA = "0x4C5A390")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public TouchScreenKeyboardEvent onTouchScreenKeyboardStatusChanged
	{
		[Token(Token = "0x60002BD")]
		[Address(RVA = "0x4C5A3E0", Offset = "0x4C5A3E0", VA = "0x4C5A3E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x4C5A3F0", Offset = "0x4C5A3F0", VA = "0x4C5A3F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public OnValidateInput onValidateInput
	{
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x4C5A440", Offset = "0x4C5A440", VA = "0x4C5A440")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x4C5A450", Offset = "0x4C5A450", VA = "0x4C5A450")]
		set
		{
		}
	}

	[Token(Token = "0x17000090")]
	public int characterLimit
	{
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x4C5A4A0", Offset = "0x4C5A4A0", VA = "0x4C5A4A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x4C5A4B0", Offset = "0x4C5A4B0", VA = "0x4C5A4B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	public float pointSize
	{
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x4C5A550", Offset = "0x4C5A550", VA = "0x4C5A550")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x4C5A560", Offset = "0x4C5A560", VA = "0x4C5A560")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x4C5A700", Offset = "0x4C5A700", VA = "0x4C5A700")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x4C46DE0", Offset = "0x4C46DE0", VA = "0x4C46DE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public bool onFocusSelectAll
	{
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x4C5A7F0", Offset = "0x4C5A7F0", VA = "0x4C5A7F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x4C5A800", Offset = "0x4C5A800", VA = "0x4C5A800")]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public bool resetOnDeActivation
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x4C5A810", Offset = "0x4C5A810", VA = "0x4C5A810")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x4C5A820", Offset = "0x4C5A820", VA = "0x4C5A820")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public bool restoreOriginalTextOnEscape
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x4C5A830", Offset = "0x4C5A830", VA = "0x4C5A830")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x4C5A840", Offset = "0x4C5A840", VA = "0x4C5A840")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public bool isRichTextEditingAllowed
	{
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x4C5A850", Offset = "0x4C5A850", VA = "0x4C5A850")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x4C5A860", Offset = "0x4C5A860", VA = "0x4C5A860")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public ContentType contentType
	{
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x4C5A870", Offset = "0x4C5A870", VA = "0x4C5A870")]
		get
		{
			return default(ContentType);
		}
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x4C5A880", Offset = "0x4C5A880", VA = "0x4C5A880")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public LineType lineType
	{
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x4C5AAA0", Offset = "0x4C5AAA0", VA = "0x4C5AAA0")]
		get
		{
			return default(LineType);
		}
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x4C5AAB0", Offset = "0x4C5AAB0", VA = "0x4C5AAB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public int lineLimit
	{
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x4C5ABC0", Offset = "0x4C5ABC0", VA = "0x4C5ABC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x4C5ABD0", Offset = "0x4C5ABD0", VA = "0x4C5ABD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public InputType inputType
	{
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x4C5AC30", Offset = "0x4C5AC30", VA = "0x4C5AC30")]
		get
		{
			return default(InputType);
		}
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x4C5AC40", Offset = "0x4C5AC40", VA = "0x4C5AC40")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60002D7")]
		[Address(RVA = "0x4C5ACD0", Offset = "0x4C5ACD0", VA = "0x4C5ACD0")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x4C5ACE0", Offset = "0x4C5ACE0", VA = "0x4C5ACE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public CharacterValidation characterValidation
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x4C5AD50", Offset = "0x4C5AD50", VA = "0x4C5AD50")]
		get
		{
			return default(CharacterValidation);
		}
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x4C5AD60", Offset = "0x4C5AD60", VA = "0x4C5AD60")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public TMP_InputValidator inputValidator
	{
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x4C5ADD0", Offset = "0x4C5ADD0", VA = "0x4C5ADD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x4C5ADE0", Offset = "0x4C5ADE0", VA = "0x4C5ADE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public bool readOnly
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x4C5AE70", Offset = "0x4C5AE70", VA = "0x4C5AE70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x4C5AE80", Offset = "0x4C5AE80", VA = "0x4C5AE80")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public bool richText
	{
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x4C5AE90", Offset = "0x4C5AE90", VA = "0x4C5AE90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x4C5AEA0", Offset = "0x4C5AEA0", VA = "0x4C5AEA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public bool multiLine
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x4C5AFC0", Offset = "0x4C5AFC0", VA = "0x4C5AFC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A1")]
	public char asteriskChar
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x4C5AFD0", Offset = "0x4C5AFD0", VA = "0x4C5AFD0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x4C5AFE0", Offset = "0x4C5AFE0", VA = "0x4C5AFE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public bool wasCanceled
	{
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x4C5B040", Offset = "0x4C5B040", VA = "0x4C5B040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A3")]
	protected int caretPositionInternal
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x4C5B0C0", Offset = "0x4C5B0C0", VA = "0x4C5B0C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x4C5B0F0", Offset = "0x4C5B0F0", VA = "0x4C5B0F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	protected int stringPositionInternal
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x4C5B130", Offset = "0x4C5B130", VA = "0x4C5B130")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x4C5B160", Offset = "0x4C5B160", VA = "0x4C5B160")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	protected int caretSelectPositionInternal
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x4C5B190", Offset = "0x4C5B190", VA = "0x4C5B190")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x4C5B1C0", Offset = "0x4C5B1C0", VA = "0x4C5B1C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	protected int stringSelectPositionInternal
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x4C5B200", Offset = "0x4C5B200", VA = "0x4C5B200")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x4C5B230", Offset = "0x4C5B230", VA = "0x4C5B230")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	private bool hasSelection
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x4C5B260", Offset = "0x4C5B260", VA = "0x4C5B260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A8")]
	public int caretPosition
	{
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x4C5B2C0", Offset = "0x4C5B2C0", VA = "0x4C5B2C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x4C5B2F0", Offset = "0x4C5B2F0", VA = "0x4C5B2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public int selectionAnchorPosition
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x4C5B4D0", Offset = "0x4C5B4D0", VA = "0x4C5B4D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x4C5B3D0", Offset = "0x4C5B3D0", VA = "0x4C5B3D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public int selectionFocusPosition
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x4C5B500", Offset = "0x4C5B500", VA = "0x4C5B500")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x4C5B450", Offset = "0x4C5B450", VA = "0x4C5B450")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int stringPosition
	{
		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x4C5B530", Offset = "0x4C5B530", VA = "0x4C5B530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002F7")]
		[Address(RVA = "0x4C5B560", Offset = "0x4C5B560", VA = "0x4C5B560")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public int selectionStringAnchorPosition
	{
		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x4C5B700", Offset = "0x4C5B700", VA = "0x4C5B700")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x4C5B620", Offset = "0x4C5B620", VA = "0x4C5B620")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int selectionStringFocusPosition
	{
		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x4C5B730", Offset = "0x4C5B730", VA = "0x4C5B730")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x4C5B690", Offset = "0x4C5B690", VA = "0x4C5B690")]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	private static string clipboard
	{
		[Token(Token = "0x6000308")]
		[Address(RVA = "0x4C5DAF0", Offset = "0x4C5DAF0", VA = "0x4C5DAF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x4C5DB00", Offset = "0x4C5DB00", VA = "0x4C5DB00")]
		set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public virtual float minWidth
	{
		[Token(Token = "0x6000362")]
		[Address(RVA = "0x4C68210", Offset = "0x4C68210", VA = "0x4C68210", Slot = "76")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B0")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x4C68220", Offset = "0x4C68220", VA = "0x4C68220", Slot = "77")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B1")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x4C683A0", Offset = "0x4C683A0", VA = "0x4C683A0", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B2")]
	public virtual float minHeight
	{
		[Token(Token = "0x6000365")]
		[Address(RVA = "0x4C683B0", Offset = "0x4C683B0", VA = "0x4C683B0", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B3")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x4C683C0", Offset = "0x4C683C0", VA = "0x4C683C0", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B4")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x4C68550", Offset = "0x4C68550", VA = "0x4C68550", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B5")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x4C68560", Offset = "0x4C68560", VA = "0x4C68560", Slot = "82")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x4C58AB0", Offset = "0x4C58AB0", VA = "0x4C58AB0")]
	protected TMP_InputField()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x4C59240", Offset = "0x4C59240", VA = "0x4C59240")]
	private bool isKeyboardUsingEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x4C59460", Offset = "0x4C59460", VA = "0x4C59460")]
	public void SetTextWithoutNotify(string input)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x4C592F0", Offset = "0x4C592F0", VA = "0x4C592F0")]
	private void SetText(string value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4C5B050", Offset = "0x4C5B050", VA = "0x4C5B050")]
	protected void ClampStringPos(ref int pos)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4C5B080", Offset = "0x4C5B080", VA = "0x4C5B080")]
	protected void ClampCaretPos(ref int pos)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x4C5B760", Offset = "0x4C5B760", VA = "0x4C5B760", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x4C5C630", Offset = "0x4C5C630", VA = "0x4C5C630", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x4C5CBC0", Offset = "0x4C5CBC0", VA = "0x4C5CBC0")]
	private void ON_TEXT_CHANGED(UnityEngine.Object obj)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x4C5CFE0", Offset = "0x4C5CFE0", VA = "0x4C5CFE0")]
	[IteratorStateMachine(typeof(_003CCaretBlink_003Ed__276))]
	private IEnumerator CaretBlink()
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4C5D050", Offset = "0x4C5D050", VA = "0x4C5D050")]
	private void SetCaretVisible()
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4C59AE0", Offset = "0x4C59AE0", VA = "0x4C59AE0")]
	private void SetCaretActive()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4C5D080", Offset = "0x4C5D080", VA = "0x4C5D080")]
	protected void OnFocus()
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x4C5D0D0", Offset = "0x4C5D0D0", VA = "0x4C5D0D0")]
	protected void SelectAll()
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x4C5D120", Offset = "0x4C5D120", VA = "0x4C5D120")]
	public void MoveTextEnd(bool shift)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x4C5D320", Offset = "0x4C5D320", VA = "0x4C5D320")]
	public void MoveTextStart(bool shift)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x4C5D560", Offset = "0x4C5D560", VA = "0x4C5D560")]
	public void MoveToEndOfLine(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x4C5D810", Offset = "0x4C5D810", VA = "0x4C5D810")]
	public void MoveToStartOfLine(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4C5DB10", Offset = "0x4C5DB10", VA = "0x4C5DB10")]
	private bool InPlaceEditing()
	{
		return default(bool);
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4C5DE10", Offset = "0x4C5DE10", VA = "0x4C5DE10")]
	private void UpdateStringPositionFromKeyboard()
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4C5E130", Offset = "0x4C5E130", VA = "0x4C5E130", Slot = "60")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4C5FB20", Offset = "0x4C5FB20", VA = "0x4C5FB20")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x4C5FD00", Offset = "0x4C5FD00", VA = "0x4C5FD00", Slot = "61")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x4C5FD20", Offset = "0x4C5FD20", VA = "0x4C5FD20", Slot = "62")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x4C60220", Offset = "0x4C60220", VA = "0x4C60220")]
	[IteratorStateMachine(typeof(_003CMouseDragOutsideRect_003Ed__294))]
	private IEnumerator MouseDragOutsideRect(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x4C602A0", Offset = "0x4C602A0", VA = "0x4C602A0", Slot = "63")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x4C602C0", Offset = "0x4C602C0", VA = "0x4C602C0", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x4C60DF0", Offset = "0x4C60DF0", VA = "0x4C60DF0")]
	protected EditState KeyPressed(Event evt)
	{
		return default(EditState);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4C631A0", Offset = "0x4C631A0", VA = "0x4C631A0", Slot = "64")]
	protected virtual bool IsValidChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x4C631B0", Offset = "0x4C631B0", VA = "0x4C631B0")]
	public void ProcessEvent(Event e)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4C631C0", Offset = "0x4C631C0", VA = "0x4C631C0", Slot = "65")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x4C63470", Offset = "0x4C63470", VA = "0x4C63470", Slot = "66")]
	public virtual void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x4C63670", Offset = "0x4C63670", VA = "0x4C63670")]
	private float GetScrollPositionRelativeToViewport()
	{
		return default(float);
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x4C61E40", Offset = "0x4C61E40", VA = "0x4C61E40")]
	private string GetSelectedString()
	{
		return null;
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4C63990", Offset = "0x4C63990", VA = "0x4C63990")]
	private int FindNextWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x4C62980", Offset = "0x4C62980", VA = "0x4C62980")]
	private void MoveRight(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x4C63A80", Offset = "0x4C63A80", VA = "0x4C63A80")]
	private int FindPrevWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x4C621E0", Offset = "0x4C621E0", VA = "0x4C621E0")]
	private void MoveLeft(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x4C63B50", Offset = "0x4C63B50", VA = "0x4C63B50")]
	private int LineUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x4C63D00", Offset = "0x4C63D00", VA = "0x4C63D00")]
	private int LineDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4C63E90", Offset = "0x4C63E90", VA = "0x4C63E90")]
	private int PageUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4C640F0", Offset = "0x4C640F0", VA = "0x4C640F0")]
	private int PageDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x4C63170", Offset = "0x4C63170", VA = "0x4C63170")]
	private void MoveDown(bool shift)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4C64350", Offset = "0x4C64350", VA = "0x4C64350")]
	private void MoveDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x4C63160", Offset = "0x4C63160", VA = "0x4C63160")]
	private void MoveUp(bool shift)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x4C646F0", Offset = "0x4C646F0", VA = "0x4C646F0")]
	private void MoveUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4C63180", Offset = "0x4C63180", VA = "0x4C63180")]
	private void MovePageUp(bool shift)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x4C64A60", Offset = "0x4C64A60", VA = "0x4C64A60")]
	private void MovePageUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x4C63190", Offset = "0x4C63190", VA = "0x4C63190")]
	private void MovePageDown(bool shift)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x4C64F90", Offset = "0x4C64F90", VA = "0x4C64F90")]
	private void MovePageDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x4C61F50", Offset = "0x4C61F50", VA = "0x4C61F50")]
	private void Delete()
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x4C61A00", Offset = "0x4C61A00", VA = "0x4C61A00")]
	private void DeleteKey()
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x4C61300", Offset = "0x4C61300", VA = "0x4C61300")]
	private void Backspace()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x4C654E0", Offset = "0x4C654E0", VA = "0x4C654E0", Slot = "67")]
	protected virtual void Append(string input)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x4C65570", Offset = "0x4C65570", VA = "0x4C65570", Slot = "68")]
	protected virtual void Append(char input)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x4C65870", Offset = "0x4C65870", VA = "0x4C65870")]
	private void Insert(char c)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x4C621A0", Offset = "0x4C621A0", VA = "0x4C621A0")]
	private void UpdateTouchKeyboardFromEditChanges()
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x4C5FAD0", Offset = "0x4C5FAD0", VA = "0x4C5FAD0")]
	private void SendOnValueChangedAndUpdateLabel()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x4C59A00", Offset = "0x4C59A00", VA = "0x4C59A00")]
	private void SendOnValueChanged()
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x4C659F0", Offset = "0x4C659F0", VA = "0x4C659F0")]
	protected void SendOnEndEdit()
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x4C63420", Offset = "0x4C63420", VA = "0x4C63420")]
	protected void SendOnSubmit()
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x4C65A40", Offset = "0x4C65A40", VA = "0x4C65A40")]
	protected void SendOnFocus()
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x4C65A90", Offset = "0x4C65A90", VA = "0x4C65A90")]
	protected void SendOnFocusLost()
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x4C65AE0", Offset = "0x4C65AE0", VA = "0x4C65AE0")]
	protected void SendOnTextSelection()
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x4C65BA0", Offset = "0x4C65BA0", VA = "0x4C65BA0")]
	protected void SendOnEndTextSelection()
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x4C5F230", Offset = "0x4C5F230", VA = "0x4C5F230")]
	protected void SendTouchScreenKeyboardStatusChanged()
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x4C59470", Offset = "0x4C59470", VA = "0x4C59470")]
	protected void UpdateLabel()
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4C5CF00", Offset = "0x4C5CF00", VA = "0x4C5CF00")]
	private void UpdateScrollbar()
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x4C65C60", Offset = "0x4C65C60", VA = "0x4C65C60")]
	private void OnScrollbarValueChange(float value)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x4C5C620", Offset = "0x4C5C620", VA = "0x4C5C620")]
	private void UpdateMaskRegions()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x4C637A0", Offset = "0x4C637A0", VA = "0x4C637A0")]
	private void AdjustTextPositionRelativeToViewport(float relativePosition)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x4C5CEA0", Offset = "0x4C5CEA0", VA = "0x4C5CEA0")]
	private int GetCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x4C65CA0", Offset = "0x4C65CA0", VA = "0x4C65CA0")]
	private int GetMinCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x4C65D10", Offset = "0x4C65D10", VA = "0x4C65D10")]
	private int GetMaxCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x4C5D2A0", Offset = "0x4C5D2A0", VA = "0x4C5D2A0")]
	private int GetStringIndexFromCaretPosition(int caretPosition)
	{
		return default(int);
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x4C65D70", Offset = "0x4C65D70", VA = "0x4C65D70")]
	public void ForceLabelUpdate()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4C59C40", Offset = "0x4C59C40", VA = "0x4C59C40")]
	private void MarkGeometryAsDirty()
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x4C65D80", Offset = "0x4C65D80", VA = "0x4C65D80", Slot = "69")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4C65E40", Offset = "0x4C65E40", VA = "0x4C65E40", Slot = "70")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4C65E50", Offset = "0x4C65E50", VA = "0x4C65E50", Slot = "71")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x4C65D90", Offset = "0x4C65D90", VA = "0x4C65D90")]
	private void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x4C5BFC0", Offset = "0x4C5BFC0", VA = "0x4C5BFC0")]
	private void AssignPositioningIfNeeded()
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4C65E60", Offset = "0x4C65E60", VA = "0x4C65E60")]
	private void OnFillVBO(Mesh vbo)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4C663E0", Offset = "0x4C663E0", VA = "0x4C663E0")]
	private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4C67710", Offset = "0x4C67710", VA = "0x4C67710")]
	private void CreateCursorVerts()
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x4C66CF0", Offset = "0x4C66CF0", VA = "0x4C66CF0")]
	private void GenerateHightlight(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x4C678D0", Offset = "0x4C678D0", VA = "0x4C678D0")]
	private void AdjustRectTransformRelativeToViewport(Vector2 startPosition, float height, bool isCharVisible)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4C5F2A0", Offset = "0x4C5F2A0", VA = "0x4C5F2A0")]
	protected char Validate(string text, int pos, char ch)
	{
		return default(char);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4C67EF0", Offset = "0x4C67EF0", VA = "0x4C67EF0")]
	public void ActivateInputField()
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x4C5EA30", Offset = "0x4C5EA30", VA = "0x4C5EA30")]
	private void ActivateInputFieldInternal()
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x4C68020", Offset = "0x4C68020", VA = "0x4C68020", Slot = "36")]
	public override void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x4C68080", Offset = "0x4C68080", VA = "0x4C68080", Slot = "72")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x4C680A0", Offset = "0x4C680A0", VA = "0x4C680A0")]
	public void OnControlClick()
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x4C5F180", Offset = "0x4C5F180", VA = "0x4C5F180")]
	public void ReleaseSelection()
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x4C5C990", Offset = "0x4C5C990", VA = "0x4C5C990")]
	public void DeactivateInputField(bool clearSelection = false)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x4C680B0", Offset = "0x4C680B0", VA = "0x4C680B0", Slot = "37")]
	public override void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x4C68120", Offset = "0x4C68120", VA = "0x4C68120", Slot = "73")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x4C5A9C0", Offset = "0x4C5A9C0", VA = "0x4C5A9C0")]
	private void EnforceContentType()
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x4C58DF0", Offset = "0x4C58DF0", VA = "0x4C58DF0")]
	private void SetTextComponentWrapMode()
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x4C5AF30", Offset = "0x4C5AF30", VA = "0x4C5AF30")]
	private void SetTextComponentRichTextMode()
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x4C5AB80", Offset = "0x4C5AB80", VA = "0x4C5AB80")]
	private void SetToCustomIfContentTypeIsNot(params ContentType[] allowedContentTypes)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x4C5ACB0", Offset = "0x4C5ACB0", VA = "0x4C5ACB0")]
	private void SetToCustom()
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x4C5AE50", Offset = "0x4C5AE50", VA = "0x4C5AE50")]
	private void SetToCustom(CharacterValidation characterValidation)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x4C681C0", Offset = "0x4C681C0", VA = "0x4C681C0", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x4C681F0", Offset = "0x4C681F0", VA = "0x4C681F0", Slot = "74")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x4C68200", Offset = "0x4C68200", VA = "0x4C68200", Slot = "75")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x4C5A610", Offset = "0x4C5A610", VA = "0x4C5A610")]
	public void SetGlobalPointSize(float pointSize)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x4C5A710", Offset = "0x4C5A710", VA = "0x4C5A710")]
	public void SetGlobalFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x4C68600", Offset = "0x4C68600", VA = "0x4C68600", Slot = "46")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
