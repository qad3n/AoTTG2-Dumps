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

[Token(Token = "0x2000049")]
[AddComponentMenu("UI (Canvas)/TextMeshPro - Input Field", 11)]
[TMPro.TMPHelpURL("index")]
public class TMP_InputField : Selectable, IUpdateSelectedHandler, IEventSystemHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerClickHandler, ISubmitHandler, ICancelHandler, ICanvasElement, ILayoutElement, IScrollHandler
{
	[Token(Token = "0x200004A")]
	public enum ContentType
	{
		[Token(Token = "0x40001EC")]
		Standard,
		[Token(Token = "0x40001ED")]
		Autocorrected,
		[Token(Token = "0x40001EE")]
		IntegerNumber,
		[Token(Token = "0x40001EF")]
		DecimalNumber,
		[Token(Token = "0x40001F0")]
		Alphanumeric,
		[Token(Token = "0x40001F1")]
		Name,
		[Token(Token = "0x40001F2")]
		EmailAddress,
		[Token(Token = "0x40001F3")]
		Password,
		[Token(Token = "0x40001F4")]
		Pin,
		[Token(Token = "0x40001F5")]
		Custom
	}

	[Token(Token = "0x200004B")]
	public enum InputType
	{
		[Token(Token = "0x40001F7")]
		Standard,
		[Token(Token = "0x40001F8")]
		AutoCorrect,
		[Token(Token = "0x40001F9")]
		Password
	}

	[Token(Token = "0x200004C")]
	public enum CharacterValidation
	{
		[Token(Token = "0x40001FB")]
		None,
		[Token(Token = "0x40001FC")]
		Digit,
		[Token(Token = "0x40001FD")]
		Integer,
		[Token(Token = "0x40001FE")]
		Decimal,
		[Token(Token = "0x40001FF")]
		Alphanumeric,
		[Token(Token = "0x4000200")]
		Name,
		[Token(Token = "0x4000201")]
		Regex,
		[Token(Token = "0x4000202")]
		EmailAddress,
		[Token(Token = "0x4000203")]
		CustomValidator
	}

	[Token(Token = "0x200004D")]
	public enum LineType
	{
		[Token(Token = "0x4000205")]
		SingleLine,
		[Token(Token = "0x4000206")]
		MultiLineSubmit,
		[Token(Token = "0x4000207")]
		MultiLineNewline
	}

	[Token(Token = "0x200004E")]
	public delegate char OnValidateInput(string text, int charIndex, char addedChar);

	[Serializable]
	[Token(Token = "0x200004F")]
	public class SubmitEvent : UnityEvent<string>
	{
		[Token(Token = "0x60002FE")]
		[Address(RVA = "0x672D2B0", Offset = "0x672C2B0", VA = "0x672D2B0")]
		public SubmitEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000050")]
	public class OnChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x672D2F0", Offset = "0x672C2F0", VA = "0x672D2F0")]
		public OnChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000051")]
	public class SelectionEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000300")]
		[Address(RVA = "0x672D330", Offset = "0x672C330", VA = "0x672D330")]
		public SelectionEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000052")]
	public class TextSelectionEvent : UnityEvent<string, int, int>
	{
		[Token(Token = "0x6000301")]
		[Address(RVA = "0x672D370", Offset = "0x672C370", VA = "0x672D370")]
		public TextSelectionEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000053")]
	public class TouchScreenKeyboardEvent : UnityEvent<TouchScreenKeyboard.Status>
	{
		[Token(Token = "0x6000302")]
		[Address(RVA = "0x672D3B0", Offset = "0x672C3B0", VA = "0x672D3B0")]
		public TouchScreenKeyboardEvent()
		{
		}
	}

	[Token(Token = "0x2000054")]
	protected enum EditState
	{
		[Token(Token = "0x4000209")]
		Continue,
		[Token(Token = "0x400020A")]
		Finish
	}

	[Token(Token = "0x2000055")]
	[CompilerGenerated]
	private sealed class _003CCaretBlink_003Ed__293 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400020B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400020C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400020D")]
		[FieldOffset(Offset = "0x20")]
		public TMP_InputField _003C_003E4__this;

		[Token(Token = "0x170000B4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000306")]
			[Address(RVA = "0x672D570", Offset = "0x672C570", VA = "0x672D570", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000308")]
			[Address(RVA = "0x672D5C0", Offset = "0x672C5C0", VA = "0x672D5C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000303")]
		[Address(RVA = "0x672D3F0", Offset = "0x672C3F0", VA = "0x672D3F0")]
		[DebuggerHidden]
		public _003CCaretBlink_003Ed__293(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000304")]
		[Address(RVA = "0x672D410", Offset = "0x672C410", VA = "0x672D410", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000305")]
		[Address(RVA = "0x672D420", Offset = "0x672C420", VA = "0x672D420", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000307")]
		[Address(RVA = "0x672D580", Offset = "0x672C580", VA = "0x672D580", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000056")]
	[CompilerGenerated]
	private sealed class _003CMouseDragOutsideRect_003Ed__314 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400020E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400020F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000210")]
		[FieldOffset(Offset = "0x20")]
		public TMP_InputField _003C_003E4__this;

		[Token(Token = "0x4000211")]
		[FieldOffset(Offset = "0x28")]
		public PointerEventData eventData;

		[Token(Token = "0x170000B6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600030C")]
			[Address(RVA = "0x672D930", Offset = "0x672C930", VA = "0x672D930", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600030E")]
			[Address(RVA = "0x672D980", Offset = "0x672C980", VA = "0x672D980", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000309")]
		[Address(RVA = "0x672D5D0", Offset = "0x672C5D0", VA = "0x672D5D0")]
		[DebuggerHidden]
		public _003CMouseDragOutsideRect_003Ed__314(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600030A")]
		[Address(RVA = "0x672D5F0", Offset = "0x672C5F0", VA = "0x672D5F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600030B")]
		[Address(RVA = "0x672D600", Offset = "0x672C600", VA = "0x672D600", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600030D")]
		[Address(RVA = "0x672D940", Offset = "0x672C940", VA = "0x672D940", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x100")]
	protected TouchScreenKeyboard m_SoftKeyboard;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] kSeparators;

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x8")]
	private static bool s_IsQuestDevice;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x108")]
	protected RectTransform m_RectTransform;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	protected RectTransform m_TextViewport;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x118")]
	protected RectMask2D m_TextComponentRectMask;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x120")]
	protected RectMask2D m_TextViewportRectMask;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	protected TMP_Text m_TextComponent;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x130")]
	protected RectTransform m_TextComponentRectTransform;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	protected Graphic m_Placeholder;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	protected Scrollbar m_VerticalScrollbar;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	protected TMP_ScrollbarEventHandler m_VerticalScrollbarEventHandler;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x150")]
	private bool m_IsDrivenByLayoutComponents;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x158")]
	[SerializeField]
	private LayoutGroup m_LayoutGroup;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x160")]
	private IScrollHandler m_IScrollHandlerParent;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x168")]
	private float m_ScrollPosition;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x16C")]
	[SerializeField]
	protected float m_ScrollSensitivity;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x170")]
	[SerializeField]
	private ContentType m_ContentType;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x174")]
	[SerializeField]
	private InputType m_InputType;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x178")]
	[SerializeField]
	private char m_AsteriskChar;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x17C")]
	[SerializeField]
	private TouchScreenKeyboardType m_KeyboardType;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x180")]
	[SerializeField]
	private LineType m_LineType;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x184")]
	[SerializeField]
	private bool m_HideMobileInput;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x185")]
	[SerializeField]
	private bool m_HideSoftKeyboard;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x188")]
	[SerializeField]
	private CharacterValidation m_CharacterValidation;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x190")]
	[SerializeField]
	private string m_RegexValue;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x198")]
	[SerializeField]
	private float m_GlobalPointSize;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x19C")]
	[SerializeField]
	private int m_CharacterLimit;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x1A0")]
	[SerializeField]
	private SubmitEvent m_OnEndEdit;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x1A8")]
	[SerializeField]
	private SubmitEvent m_OnSubmit;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x1B0")]
	[SerializeField]
	private SelectionEvent m_OnSelect;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x1B8")]
	[SerializeField]
	private SelectionEvent m_OnDeselect;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x1C0")]
	[SerializeField]
	private TextSelectionEvent m_OnTextSelection;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x1C8")]
	[SerializeField]
	private TextSelectionEvent m_OnEndTextSelection;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x1D0")]
	[SerializeField]
	private OnChangeEvent m_OnValueChanged;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x1D8")]
	[SerializeField]
	private TouchScreenKeyboardEvent m_OnTouchScreenKeyboardStatusChanged;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x1E0")]
	[SerializeField]
	private OnValidateInput m_OnValidateInput;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x1E8")]
	[SerializeField]
	private Color m_CaretColor;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x1F8")]
	[SerializeField]
	private bool m_CustomCaretColor;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x1FC")]
	[SerializeField]
	private Color m_SelectionColor;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x210")]
	[SerializeField]
	[TextArea(5, 10)]
	protected string m_Text;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x218")]
	[SerializeField]
	[Range(0f, 4f)]
	private float m_CaretBlinkRate;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x21C")]
	[SerializeField]
	[Range(1f, 5f)]
	private int m_CaretWidth;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x220")]
	[SerializeField]
	private bool m_ReadOnly;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x221")]
	[SerializeField]
	private bool m_RichText;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x224")]
	protected int m_StringPosition;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x228")]
	protected int m_StringSelectPosition;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x22C")]
	protected int m_CaretPosition;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x230")]
	protected int m_CaretSelectPosition;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x238")]
	private RectTransform caretRectTrans;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x240")]
	protected UIVertex[] m_CursorVerts;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x248")]
	private CanvasRenderer m_CachedInputRenderer;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x250")]
	private Vector2 m_LastPosition;

	[NonSerialized]
	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x258")]
	protected Mesh m_Mesh;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x260")]
	private bool m_AllowInput;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x261")]
	private bool m_ShouldActivateNextUpdate;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x262")]
	private bool m_UpdateDrag;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x263")]
	private bool m_DragPositionOutOfBounds;

	[Token(Token = "0x40001BF")]
	private const float kHScrollSpeed = 0.05f;

	[Token(Token = "0x40001C0")]
	private const float kVScrollSpeed = 0.1f;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x264")]
	protected bool m_CaretVisible;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x268")]
	private Coroutine m_BlinkCoroutine;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x270")]
	private float m_BlinkStartTime;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x278")]
	private Coroutine m_DragCoroutine;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x280")]
	private string m_OriginalText;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x288")]
	private bool m_WasCanceled;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x289")]
	private bool m_HasDoneFocusTransition;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x290")]
	private WaitForSecondsRealtime m_WaitForSecondsRealtime;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x298")]
	private bool m_PreventCallback;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x299")]
	private bool m_TouchKeyboardAllowsInPlaceEditing;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x29A")]
	private bool m_IsTextComponentUpdateRequired;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x29B")]
	private bool m_HasTextBeenRemoved;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x29C")]
	private float m_PointerDownClickStartTime;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x2A0")]
	private float m_KeyDownStartTime;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x2A4")]
	private float m_DoubleClickDelay;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x2A8")]
	private bool m_IsApplePlatform;

	[Token(Token = "0x40001D1")]
	private const string kEmailSpecialCharacters = "!#$%&'*+-/=?^_`{|}~";

	[Token(Token = "0x40001D2")]
	private const string kOculusQuestDeviceModel = "Oculus Quest";

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x2A9")]
	private bool m_IsCompositionActive;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x2AA")]
	private bool m_ShouldUpdateIMEWindowPosition;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x2AC")]
	private int m_PreviousIMEInsertionLine;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x2B0")]
	[SerializeField]
	protected TMP_FontAsset m_GlobalFontAsset;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x2B8")]
	[SerializeField]
	protected bool m_OnFocusSelectAll;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x2B9")]
	protected bool m_isSelectAll;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x2BA")]
	[SerializeField]
	protected bool m_ResetOnDeActivation;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x2BB")]
	private bool m_SelectionStillActive;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x2BC")]
	private bool m_ReleaseSelection;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x2C0")]
	private KeyCode m_LastKeyCode;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x2C8")]
	private GameObject m_PreviouslySelectedObject;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x2D0")]
	[SerializeField]
	private bool m_KeepTextSelectionVisible;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x2D1")]
	[SerializeField]
	private bool m_RestoreOriginalTextOnEscape;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x2D2")]
	[SerializeField]
	protected bool m_isRichTextEditingAllowed;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x2D4")]
	[SerializeField]
	protected int m_LineLimit;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x2D8")]
	public bool isAlert;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x2E0")]
	[SerializeField]
	protected TMP_InputValidator m_InputValidator;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x2E8")]
	[SerializeField]
	private bool m_ShouldActivateOnSelect;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x2E9")]
	private bool m_isSelected;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x2EA")]
	private bool m_IsStringPositionDirty;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x2EB")]
	private bool m_IsCaretPositionDirty;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x2EC")]
	private bool m_forceRectTransformAdjustment;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x2ED")]
	private bool m_IsKeyboardBeingClosedInHoloLens;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x2F0")]
	private Event m_ProcessingEvent;

	[Token(Token = "0x17000070")]
	private BaseInput inputSystem
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x66F6C60", Offset = "0x66F5C60", VA = "0x66F6C60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	private string compositionString
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x66F6D60", Offset = "0x66F5D60", VA = "0x66F6D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000072")]
	private int compositionLength
	{
		[Token(Token = "0x6000208")]
		[Address(RVA = "0x66F6DE0", Offset = "0x66F5DE0", VA = "0x66F6DE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	protected Mesh mesh
	{
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x66F7200", Offset = "0x66F6200", VA = "0x66F7200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public virtual bool shouldActivateOnSelect
	{
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x66F72B0", Offset = "0x66F62B0", VA = "0x66F72B0", Slot = "62")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600020B")]
		[Address(RVA = "0x66F72A0", Offset = "0x66F62A0", VA = "0x66F72A0", Slot = "61")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool shouldHideMobileInput
	{
		[Token(Token = "0x600020D")]
		[Address(RVA = "0x66F7310", Offset = "0x66F6310", VA = "0x66F7310")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600020E")]
		[Address(RVA = "0x66F73A0", Offset = "0x66F63A0", VA = "0x66F73A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool shouldHideSoftKeyboard
	{
		[Token(Token = "0x600020F")]
		[Address(RVA = "0x66F7460", Offset = "0x66F6460", VA = "0x66F7460")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000210")]
		[Address(RVA = "0x66F7500", Offset = "0x66F6500", VA = "0x66F7500")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public string text
	{
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x66F7A30", Offset = "0x66F6A30", VA = "0x66F7A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x66F7A40", Offset = "0x66F6A40", VA = "0x66F7A40")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public bool isFocused
	{
		[Token(Token = "0x6000217")]
		[Address(RVA = "0x66F8180", Offset = "0x66F7180", VA = "0x66F8180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000079")]
	public float caretBlinkRate
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x66F8190", Offset = "0x66F7190", VA = "0x66F8190")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000219")]
		[Address(RVA = "0x66F81A0", Offset = "0x66F71A0", VA = "0x66F81A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public int caretWidth
	{
		[Token(Token = "0x600021A")]
		[Address(RVA = "0x66F82D0", Offset = "0x66F72D0", VA = "0x66F82D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600021B")]
		[Address(RVA = "0x66F82E0", Offset = "0x66F72E0", VA = "0x66F82E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public RectTransform textViewport
	{
		[Token(Token = "0x600021C")]
		[Address(RVA = "0x66F83E0", Offset = "0x66F73E0", VA = "0x66F83E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600021D")]
		[Address(RVA = "0x66F83F0", Offset = "0x66F73F0", VA = "0x66F83F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x600021E")]
		[Address(RVA = "0x66F8440", Offset = "0x66F7440", VA = "0x66F8440")]
		get
		{
			return null;
		}
		[Token(Token = "0x600021F")]
		[Address(RVA = "0x66F8450", Offset = "0x66F7450", VA = "0x66F8450")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public Graphic placeholder
	{
		[Token(Token = "0x6000220")]
		[Address(RVA = "0x66F84B0", Offset = "0x66F74B0", VA = "0x66F84B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x66F84C0", Offset = "0x66F74C0", VA = "0x66F84C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public Scrollbar verticalScrollbar
	{
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x66F8510", Offset = "0x66F7510", VA = "0x66F8510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x66F8520", Offset = "0x66F7520", VA = "0x66F8520")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public float scrollSensitivity
	{
		[Token(Token = "0x6000224")]
		[Address(RVA = "0x66F86D0", Offset = "0x66F76D0", VA = "0x66F86D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x66F86E0", Offset = "0x66F76E0", VA = "0x66F86E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public Color caretColor
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x66F8780", Offset = "0x66F7780", VA = "0x66F8780")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x66F87C0", Offset = "0x66F77C0", VA = "0x66F87C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public bool customCaretColor
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x66F8840", Offset = "0x66F7840", VA = "0x66F8840")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x66F8850", Offset = "0x66F7850", VA = "0x66F8850")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public Color selectionColor
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x66F88D0", Offset = "0x66F78D0", VA = "0x66F88D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x66F88F0", Offset = "0x66F78F0", VA = "0x66F88F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public SubmitEvent onEndEdit
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x66F8970", Offset = "0x66F7970", VA = "0x66F8970")]
		get
		{
			return null;
		}
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x66F8980", Offset = "0x66F7980", VA = "0x66F8980")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public SubmitEvent onSubmit
	{
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x66F89D0", Offset = "0x66F79D0", VA = "0x66F89D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x66F89E0", Offset = "0x66F79E0", VA = "0x66F89E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public SelectionEvent onSelect
	{
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x66F8A30", Offset = "0x66F7A30", VA = "0x66F8A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x66F8A40", Offset = "0x66F7A40", VA = "0x66F8A40")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public SelectionEvent onDeselect
	{
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x66F8A90", Offset = "0x66F7A90", VA = "0x66F8A90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x66F8AA0", Offset = "0x66F7AA0", VA = "0x66F8AA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public TextSelectionEvent onTextSelection
	{
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x66F8AF0", Offset = "0x66F7AF0", VA = "0x66F8AF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x66F8B00", Offset = "0x66F7B00", VA = "0x66F8B00")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public TextSelectionEvent onEndTextSelection
	{
		[Token(Token = "0x6000236")]
		[Address(RVA = "0x66F8B50", Offset = "0x66F7B50", VA = "0x66F8B50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000237")]
		[Address(RVA = "0x66F8B60", Offset = "0x66F7B60", VA = "0x66F8B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public OnChangeEvent onValueChanged
	{
		[Token(Token = "0x6000238")]
		[Address(RVA = "0x66F8BB0", Offset = "0x66F7BB0", VA = "0x66F8BB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000239")]
		[Address(RVA = "0x66F8BC0", Offset = "0x66F7BC0", VA = "0x66F8BC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public TouchScreenKeyboardEvent onTouchScreenKeyboardStatusChanged
	{
		[Token(Token = "0x600023A")]
		[Address(RVA = "0x66F8C10", Offset = "0x66F7C10", VA = "0x66F8C10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600023B")]
		[Address(RVA = "0x66F8C20", Offset = "0x66F7C20", VA = "0x66F8C20")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public OnValidateInput onValidateInput
	{
		[Token(Token = "0x600023C")]
		[Address(RVA = "0x66F8C70", Offset = "0x66F7C70", VA = "0x66F8C70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600023D")]
		[Address(RVA = "0x66F8C80", Offset = "0x66F7C80", VA = "0x66F8C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int characterLimit
	{
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x66F8CD0", Offset = "0x66F7CD0", VA = "0x66F8CD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600023F")]
		[Address(RVA = "0x66F8CE0", Offset = "0x66F7CE0", VA = "0x66F8CE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public float pointSize
	{
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x66F8D80", Offset = "0x66F7D80", VA = "0x66F8D80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x66F8D90", Offset = "0x66F7D90", VA = "0x66F8D90")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x66F8F30", Offset = "0x66F7F30", VA = "0x66F8F30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x66F8F40", Offset = "0x66F7F40", VA = "0x66F8F40")]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public bool onFocusSelectAll
	{
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x66F9090", Offset = "0x66F8090", VA = "0x66F9090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x66F90A0", Offset = "0x66F80A0", VA = "0x66F90A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000090")]
	public bool resetOnDeActivation
	{
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x66F90B0", Offset = "0x66F80B0", VA = "0x66F90B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x66F90C0", Offset = "0x66F80C0", VA = "0x66F90C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	public bool keepTextSelectionVisible
	{
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x66F90D0", Offset = "0x66F80D0", VA = "0x66F90D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000249")]
		[Address(RVA = "0x66F90E0", Offset = "0x66F80E0", VA = "0x66F90E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	public bool restoreOriginalTextOnEscape
	{
		[Token(Token = "0x600024A")]
		[Address(RVA = "0x66F90F0", Offset = "0x66F80F0", VA = "0x66F90F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x66F9100", Offset = "0x66F8100", VA = "0x66F9100")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public bool isRichTextEditingAllowed
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x66F9110", Offset = "0x66F8110", VA = "0x66F9110")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x66F9120", Offset = "0x66F8120", VA = "0x66F9120")]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public ContentType contentType
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x66F9130", Offset = "0x66F8130", VA = "0x66F9130")]
		get
		{
			return default(ContentType);
		}
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x66F9140", Offset = "0x66F8140", VA = "0x66F9140")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public LineType lineType
	{
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x66F9380", Offset = "0x66F8380", VA = "0x66F9380")]
		get
		{
			return default(LineType);
		}
		[Token(Token = "0x6000251")]
		[Address(RVA = "0x66F9390", Offset = "0x66F8390", VA = "0x66F9390")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public int lineLimit
	{
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x66F95B0", Offset = "0x66F85B0", VA = "0x66F95B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x66F95C0", Offset = "0x66F85C0", VA = "0x66F95C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public InputType inputType
	{
		[Token(Token = "0x6000254")]
		[Address(RVA = "0x66F9620", Offset = "0x66F8620", VA = "0x66F9620")]
		get
		{
			return default(InputType);
		}
		[Token(Token = "0x6000255")]
		[Address(RVA = "0x66F9630", Offset = "0x66F8630", VA = "0x66F9630")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public TouchScreenKeyboard touchScreenKeyboard
	{
		[Token(Token = "0x6000256")]
		[Address(RVA = "0x66F9900", Offset = "0x66F8900", VA = "0x66F9900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000099")]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x6000257")]
		[Address(RVA = "0x66F9910", Offset = "0x66F8910", VA = "0x66F9910")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x6000258")]
		[Address(RVA = "0x66F9920", Offset = "0x66F8920", VA = "0x66F9920")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public CharacterValidation characterValidation
	{
		[Token(Token = "0x6000259")]
		[Address(RVA = "0x66F9AA0", Offset = "0x66F8AA0", VA = "0x66F9AA0")]
		get
		{
			return default(CharacterValidation);
		}
		[Token(Token = "0x600025A")]
		[Address(RVA = "0x66F9AB0", Offset = "0x66F8AB0", VA = "0x66F9AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	public TMP_InputValidator inputValidator
	{
		[Token(Token = "0x600025B")]
		[Address(RVA = "0x66F9C30", Offset = "0x66F8C30", VA = "0x66F9C30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600025C")]
		[Address(RVA = "0x66F9C40", Offset = "0x66F8C40", VA = "0x66F9C40")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public bool readOnly
	{
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x66F9F20", Offset = "0x66F8F20", VA = "0x66F9F20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x66F9F30", Offset = "0x66F8F30", VA = "0x66F9F30")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public bool richText
	{
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x66F9F40", Offset = "0x66F8F40", VA = "0x66F9F40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x66F9F50", Offset = "0x66F8F50", VA = "0x66F9F50")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public bool multiLine
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x66FA070", Offset = "0x66F9070", VA = "0x66FA070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009F")]
	public char asteriskChar
	{
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x66FA080", Offset = "0x66F9080", VA = "0x66FA080")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x66FA090", Offset = "0x66F9090", VA = "0x66FA090")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public bool wasCanceled
	{
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x66FA0F0", Offset = "0x66F90F0", VA = "0x66FA0F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A1")]
	protected int caretPositionInternal
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x66FA250", Offset = "0x66F9250", VA = "0x66FA250")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x66FA280", Offset = "0x66F9280", VA = "0x66FA280")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	protected int stringPositionInternal
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x66FA2A0", Offset = "0x66F92A0", VA = "0x66FA2A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x66FA2D0", Offset = "0x66F92D0", VA = "0x66FA2D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	protected int caretSelectPositionInternal
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x66FA2F0", Offset = "0x66F92F0", VA = "0x66FA2F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x66FA320", Offset = "0x66F9320", VA = "0x66FA320")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	protected int stringSelectPositionInternal
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x66FA340", Offset = "0x66F9340", VA = "0x66FA340")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x66FA370", Offset = "0x66F9370", VA = "0x66FA370")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	private bool hasSelection
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x66FA390", Offset = "0x66F9390", VA = "0x66FA390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	public int caretPosition
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x66FA3F0", Offset = "0x66F93F0", VA = "0x66FA3F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x66FA420", Offset = "0x66F9420", VA = "0x66FA420")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int selectionAnchorPosition
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x66FA5F0", Offset = "0x66F95F0", VA = "0x66FA5F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x66FA500", Offset = "0x66F9500", VA = "0x66FA500")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public int selectionFocusPosition
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x66FA620", Offset = "0x66F9620", VA = "0x66FA620")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x66FA550", Offset = "0x66F9550", VA = "0x66FA550")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public int stringPosition
	{
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x66FA650", Offset = "0x66F9650", VA = "0x66FA650")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x66FA680", Offset = "0x66F9680", VA = "0x66FA680")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public int selectionStringAnchorPosition
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x66FA850", Offset = "0x66F9850", VA = "0x66FA850")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x66FA710", Offset = "0x66F9710", VA = "0x66FA710")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int selectionStringFocusPosition
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x66FA880", Offset = "0x66F9880", VA = "0x66FA880")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x66FA760", Offset = "0x66F9760", VA = "0x66FA760")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	private static string clipboard
	{
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x66FC7E0", Offset = "0x66FB7E0", VA = "0x66FC7E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x66FC840", Offset = "0x66FB840", VA = "0x66FC840")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x6707A80", Offset = "0x6706A80", VA = "0x6707A80", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000AE")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x6707A90", Offset = "0x6706A90", VA = "0x6707A90", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000AF")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x6707C00", Offset = "0x6706C00", VA = "0x6707C00", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B0")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x6707C10", Offset = "0x6706C10", VA = "0x6707C10", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B1")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x6707C20", Offset = "0x6706C20", VA = "0x6707C20", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B2")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x6707D90", Offset = "0x6706D90", VA = "0x6707D90", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B3")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x6707DA0", Offset = "0x6706DA0", VA = "0x6707DA0", Slot = "86")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x66F6E10", Offset = "0x66F5E10", VA = "0x66F6E10")]
	protected TMP_InputField()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x66F7660", Offset = "0x66F6660", VA = "0x66F7660")]
	private bool isKeyboardUsingEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x66F7990", Offset = "0x66F6990", VA = "0x66F7990")]
	private bool isUWP()
	{
		return default(bool);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x66F7BC0", Offset = "0x66F6BC0", VA = "0x66F7BC0")]
	public void SetTextWithoutNotify(string input)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x66F7A50", Offset = "0x66F6A50", VA = "0x66F7A50")]
	private void SetText(string value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x66FA100", Offset = "0x66F9100", VA = "0x66FA100")]
	protected void ClampStringPos(ref int pos)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x66FA1D0", Offset = "0x66F91D0", VA = "0x66FA1D0")]
	protected void ClampCaretPos(ref int pos)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x66FA240", Offset = "0x66F9240", VA = "0x66FA240")]
	private int ClampArrayIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x66FA8B0", Offset = "0x66F98B0", VA = "0x66FA8B0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x66FB7F0", Offset = "0x66FA7F0", VA = "0x66FB7F0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x66FBD90", Offset = "0x66FAD90", VA = "0x66FBD90")]
	private void ON_TEXT_CHANGED(UnityEngine.Object obj)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x66FBFC0", Offset = "0x66FAFC0", VA = "0x66FBFC0")]
	[IteratorStateMachine(typeof(_003CCaretBlink_003Ed__293))]
	private IEnumerator CaretBlink()
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x66FC030", Offset = "0x66FB030", VA = "0x66FC030")]
	private void SetCaretVisible()
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x66F8210", Offset = "0x66F7210", VA = "0x66F8210")]
	private void SetCaretActive()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x66FC060", Offset = "0x66FB060", VA = "0x66FC060")]
	protected void OnFocus()
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x66FC0C0", Offset = "0x66FB0C0", VA = "0x66FC0C0")]
	protected void SelectAll()
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x66FC110", Offset = "0x66FB110", VA = "0x66FC110")]
	public void MoveTextEnd(bool shift)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x66FC2C0", Offset = "0x66FB2C0", VA = "0x66FC2C0")]
	public void MoveTextStart(bool shift)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x66FC3C0", Offset = "0x66FB3C0", VA = "0x66FC3C0")]
	public void MoveToEndOfLine(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x66FC5B0", Offset = "0x66FB5B0", VA = "0x66FC5B0")]
	public void MoveToStartOfLine(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x66F7750", Offset = "0x66F6750", VA = "0x66F7750")]
	private bool InPlaceEditing()
	{
		return default(bool);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x66FC8B0", Offset = "0x66FB8B0", VA = "0x66FC8B0")]
	private bool InPlaceEditingChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x66FC950", Offset = "0x66FB950", VA = "0x66FC950")]
	private bool TouchScreenKeyboardShouldBeUsed()
	{
		return default(bool);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x66FCA10", Offset = "0x66FBA10", VA = "0x66FCA10")]
	private void UpdateKeyboardStringPosition()
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x66FCC10", Offset = "0x66FBC10", VA = "0x66FCC10")]
	private void UpdateStringPositionFromKeyboard()
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x66FCE60", Offset = "0x66FBE60", VA = "0x66FCE60", Slot = "63")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x66FE810", Offset = "0x66FD810", VA = "0x66FE810")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x66FE990", Offset = "0x66FD990", VA = "0x66FE990", Slot = "64")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x66FE9B0", Offset = "0x66FD9B0", VA = "0x66FE9B0", Slot = "65")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x66FEE00", Offset = "0x66FDE00", VA = "0x66FEE00")]
	[IteratorStateMachine(typeof(_003CMouseDragOutsideRect_003Ed__314))]
	private IEnumerator MouseDragOutsideRect(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x66FEE80", Offset = "0x66FDE80", VA = "0x66FEE80", Slot = "66")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x66FEEA0", Offset = "0x66FDEA0", VA = "0x66FEEA0", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x66FF8E0", Offset = "0x66FE8E0", VA = "0x66FF8E0")]
	protected EditState KeyPressed(Event evt)
	{
		return default(EditState);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x67020A0", Offset = "0x67010A0", VA = "0x67020A0", Slot = "67")]
	protected virtual bool IsValidChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x67020C0", Offset = "0x67010C0", VA = "0x67020C0")]
	public void ProcessEvent(Event e)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x67020D0", Offset = "0x67010D0", VA = "0x67020D0", Slot = "68")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x67023C0", Offset = "0x67013C0", VA = "0x67023C0", Slot = "69")]
	public virtual void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x6702610", Offset = "0x6701610", VA = "0x6702610")]
	private float GetScrollPositionRelativeToViewport()
	{
		return default(float);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x6700D40", Offset = "0x66FFD40", VA = "0x6700D40")]
	private string GetSelectedString()
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x6702A10", Offset = "0x6701A10", VA = "0x6702A10")]
	private int FindNextWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x67018D0", Offset = "0x67008D0", VA = "0x67018D0")]
	private void MoveRight(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x6702B00", Offset = "0x6701B00", VA = "0x6702B00")]
	private int FindPrevWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x6701200", Offset = "0x6700200", VA = "0x6701200")]
	private void MoveLeft(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x6702BE0", Offset = "0x6701BE0", VA = "0x6702BE0")]
	private int LineUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x6702E70", Offset = "0x6701E70", VA = "0x6702E70")]
	private int LineDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x6703130", Offset = "0x6702130", VA = "0x6703130")]
	private int PageUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x67034E0", Offset = "0x67024E0", VA = "0x67034E0")]
	private int PageDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x6702070", Offset = "0x6701070", VA = "0x6702070")]
	private void MoveDown(bool shift)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x6703910", Offset = "0x6702910", VA = "0x6703910")]
	private void MoveDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x6702060", Offset = "0x6701060", VA = "0x6702060")]
	private void MoveUp(bool shift)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x6703BA0", Offset = "0x6702BA0", VA = "0x6703BA0")]
	private void MoveUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x6702080", Offset = "0x6701080", VA = "0x6702080")]
	private void MovePageUp(bool shift)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x6703E00", Offset = "0x6702E00", VA = "0x6703E00")]
	private void MovePageUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x6702090", Offset = "0x6701090", VA = "0x6702090")]
	private void MovePageDown(bool shift)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x6704210", Offset = "0x6703210", VA = "0x6704210")]
	private void MovePageDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x6700E50", Offset = "0x66FFE50", VA = "0x6700E50")]
	private void Delete()
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x67006C0", Offset = "0x66FF6C0", VA = "0x67006C0")]
	private void DeleteKey()
	{
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x66FFF90", Offset = "0x66FEF90", VA = "0x66FFF90")]
	private void Backspace()
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x6704650", Offset = "0x6703650", VA = "0x6704650")]
	private static bool IsLigature(TMP_CharacterInfo characterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x6704850", Offset = "0x6703850", VA = "0x6704850")]
	private static uint GetCodePointBefore(string text, int position, int start, out int length)
	{
		return default(uint);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x6704960", Offset = "0x6703960", VA = "0x6704960")]
	private static uint GetCodePointAt(string text, int position, int end, out int length)
	{
		return default(uint);
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x6704780", Offset = "0x6703780", VA = "0x6704780")]
	private static int GetLastLigatureComponentLength(string text, int start, int end)
	{
		return default(int);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x6704670", Offset = "0x6703670", VA = "0x6704670")]
	private static int GetFirstLigatureComponentLength(string text, int start, int end)
	{
		return default(int);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x6704A70", Offset = "0x6703A70", VA = "0x6704A70", Slot = "70")]
	protected virtual void Append(string input)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x6704B00", Offset = "0x6703B00", VA = "0x6704B00", Slot = "71")]
	protected virtual void Append(char input)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x6705050", Offset = "0x6704050", VA = "0x6705050")]
	private void Insert(char c)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x67011C0", Offset = "0x67001C0", VA = "0x67011C0")]
	private void UpdateTouchKeyboardFromEditChanges()
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x66FE7C0", Offset = "0x66FD7C0", VA = "0x66FE7C0")]
	private void SendOnValueChangedAndUpdateLabel()
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x66F8130", Offset = "0x66F7130", VA = "0x66F8130")]
	private void SendOnValueChanged()
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x67051D0", Offset = "0x67041D0", VA = "0x67051D0")]
	protected void SendOnEndEdit()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x6702370", Offset = "0x6701370", VA = "0x6702370")]
	protected void SendOnSubmit()
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x6705220", Offset = "0x6704220", VA = "0x6705220")]
	protected void SendOnFocus()
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x6705270", Offset = "0x6704270", VA = "0x6705270")]
	protected void SendOnFocusLost()
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x67052C0", Offset = "0x67042C0", VA = "0x67052C0")]
	protected void SendOnTextSelection()
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x6705380", Offset = "0x6704380", VA = "0x6705380")]
	protected void SendOnEndTextSelection()
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x66FDF20", Offset = "0x66FCF20", VA = "0x66FDF20")]
	protected void SendTouchScreenKeyboardStatusChanged()
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x66F7BD0", Offset = "0x66F6BD0", VA = "0x66F7BD0")]
	protected void UpdateLabel()
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x66FBEB0", Offset = "0x66FAEB0", VA = "0x66FBEB0")]
	private void UpdateScrollbar()
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x6705440", Offset = "0x6704440", VA = "0x6705440")]
	private void OnScrollbarValueChange(float value)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x66FB7E0", Offset = "0x66FA7E0", VA = "0x66FB7E0")]
	private void UpdateMaskRegions()
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x67027E0", Offset = "0x67017E0", VA = "0x67027E0")]
	private void AdjustTextPositionRelativeToViewport(float relativePosition)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x66FCDC0", Offset = "0x66FBDC0", VA = "0x66FCDC0")]
	private int GetCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x6705480", Offset = "0x6704480", VA = "0x6705480")]
	private int GetMinCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x6705550", Offset = "0x6704550", VA = "0x6705550")]
	private int GetMaxCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x66FC230", Offset = "0x66FB230", VA = "0x66FC230")]
	private int GetStringIndexFromCaretPosition(int caretPosition)
	{
		return default(int);
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x66FA5A0", Offset = "0x66F95A0", VA = "0x66FA5A0")]
	private void UpdateStringIndexFromCaretPosition()
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x66FA7B0", Offset = "0x66F97B0", VA = "0x66FA7B0")]
	private void UpdateCaretPositionFromStringIndex()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x67055F0", Offset = "0x67045F0", VA = "0x67055F0")]
	public void ForceLabelUpdate()
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x66F8370", Offset = "0x66F7370", VA = "0x66F8370")]
	private void MarkGeometryAsDirty()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x6705600", Offset = "0x6704600", VA = "0x6705600", Slot = "72")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x67056C0", Offset = "0x67046C0", VA = "0x67056C0", Slot = "73")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x67056D0", Offset = "0x67046D0", VA = "0x67056D0", Slot = "74")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x6705610", Offset = "0x6704610", VA = "0x6705610")]
	private void UpdateGeometry()
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x66FB1A0", Offset = "0x66FA1A0", VA = "0x66FB1A0")]
	private void AssignPositioningIfNeeded()
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x67056E0", Offset = "0x67046E0", VA = "0x67056E0")]
	private void OnFillVBO(Mesh vbo)
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x67059C0", Offset = "0x67049C0", VA = "0x67059C0")]
	private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x6706D10", Offset = "0x6705D10", VA = "0x6706D10")]
	private void CreateCursorVerts()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x67062E0", Offset = "0x67052E0", VA = "0x67062E0")]
	private void GenerateHighlight(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x6706E90", Offset = "0x6705E90", VA = "0x6706E90")]
	private void AdjustRectTransformRelativeToViewport(Vector2 startPosition, float height, bool isCharVisible)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x66FDF80", Offset = "0x66FCF80", VA = "0x66FDF80")]
	protected char Validate(string text, int pos, char ch)
	{
		return default(char);
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x6707620", Offset = "0x6706620", VA = "0x6707620")]
	public void ActivateInputField()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x66FD7D0", Offset = "0x66FC7D0", VA = "0x66FD7D0")]
	private void ActivateInputFieldInternal()
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x6707750", Offset = "0x6706750", VA = "0x6707750", Slot = "36")]
	public override void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x67077C0", Offset = "0x67067C0", VA = "0x67077C0", Slot = "75")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x67077E0", Offset = "0x67067E0", VA = "0x67077E0")]
	public void OnControlClick()
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x66FDE70", Offset = "0x66FCE70", VA = "0x66FDE70")]
	public void ReleaseSelection()
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x66FBB50", Offset = "0x66FAB50", VA = "0x66FBB50")]
	public void DeactivateInputField(bool clearSelection = false)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x67077F0", Offset = "0x67067F0", VA = "0x67077F0", Slot = "37")]
	public override void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x67078A0", Offset = "0x67068A0", VA = "0x67078A0", Slot = "76")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x6707970", Offset = "0x6706970", VA = "0x6707970", Slot = "77")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x6707A00", Offset = "0x6706A00", VA = "0x6707A00", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x66F9290", Offset = "0x66F8290", VA = "0x66F9290")]
	private void EnforceContentType()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x66F7160", Offset = "0x66F6160", VA = "0x66F7160")]
	private void SetTextComponentWrapMode()
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x66F9FE0", Offset = "0x66F8FE0", VA = "0x66F9FE0")]
	private void SetTextComponentRichTextMode()
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x66F9430", Offset = "0x66F8430", VA = "0x66F9430")]
	private void SetToCustomIfContentTypeIsNot(params ContentType[] allowedContentTypes)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x66F97B0", Offset = "0x66F87B0", VA = "0x66F97B0")]
	private void SetToCustom()
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x66F9DD0", Offset = "0x66F8DD0", VA = "0x66F9DD0")]
	private void SetToCustom(CharacterValidation characterValidation)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x6707A20", Offset = "0x6706A20", VA = "0x6707A20", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x6707A60", Offset = "0x6706A60", VA = "0x6707A60", Slot = "78")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x6707A70", Offset = "0x6706A70", VA = "0x6707A70", Slot = "79")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x66F8E40", Offset = "0x66F7E40", VA = "0x66F8E40")]
	public void SetGlobalPointSize(float pointSize)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x66F8FB0", Offset = "0x66F7FB0", VA = "0x66F8FB0")]
	public void SetGlobalFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x6707E50", Offset = "0x6706E50", VA = "0x6707E50", Slot = "47")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
