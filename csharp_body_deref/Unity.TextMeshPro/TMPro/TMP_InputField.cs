// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_InputField
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2D371E0", Offset = "0x2D357E0", VA = "0x182D371E0")]
		public SubmitEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000050")]
	public class OnChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x2D33930", Offset = "0x2D31F30", VA = "0x182D33930")]
		public OnChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000051")]
	public class SelectionEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000300")]
		[Address(RVA = "0x2D33A90", Offset = "0x2D32090", VA = "0x182D33A90")]
		public SelectionEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000052")]
	public class TextSelectionEvent : UnityEvent<string, int, int>
	{
		[Token(Token = "0x6000301")]
		[Address(RVA = "0x2D47B60", Offset = "0x2D46160", VA = "0x182D47B60")]
		public TextSelectionEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000053")]
	public class TouchScreenKeyboardEvent : UnityEvent<TouchScreenKeyboard.Status>
	{
		[Token(Token = "0x6000302")]
		[Address(RVA = "0x2D47BA0", Offset = "0x2D461A0", VA = "0x182D47BA0")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000303")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CCaretBlink_003Ed__293(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000304")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000305")]
		[Address(RVA = "0x2D47BE0", Offset = "0x2D461E0", VA = "0x182D47BE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000307")]
		[Address(RVA = "0x2D47D40", Offset = "0x2D46340", VA = "0x182D47D40", Slot = "8")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000309")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CMouseDragOutsideRect_003Ed__314(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600030A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600030B")]
		[Address(RVA = "0x2D48AA0", Offset = "0x2D470A0", VA = "0x182D48AA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600030D")]
		[Address(RVA = "0x2D48DE0", Offset = "0x2D473E0", VA = "0x182D48DE0", Slot = "8")]
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
		[Address(RVA = "0x2D075D0", Offset = "0x2D05BD0", VA = "0x182D075D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	private string compositionString
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x2D07490", Offset = "0x2D05A90", VA = "0x182D07490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000072")]
	private int compositionLength
	{
		[Token(Token = "0x6000208")]
		[Address(RVA = "0x2D07460", Offset = "0x2D05A60", VA = "0x182D07460")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	protected Mesh mesh
	{
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x2D07730", Offset = "0x2D05D30", VA = "0x182D07730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public virtual bool shouldActivateOnSelect
	{
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x2D07C20", Offset = "0x2D06220", VA = "0x182D07C20", Slot = "62")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600020B")]
		[Address(RVA = "0x2D09220", Offset = "0x2D07820", VA = "0x182D09220", Slot = "61")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool shouldHideMobileInput
	{
		[Token(Token = "0x600020D")]
		[Address(RVA = "0x2D07C80", Offset = "0x2D06280", VA = "0x182D07C80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600020E")]
		[Address(RVA = "0x2D09230", Offset = "0x2D07830", VA = "0x182D09230")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool shouldHideSoftKeyboard
	{
		[Token(Token = "0x600020F")]
		[Address(RVA = "0x2D07CF0", Offset = "0x2D062F0", VA = "0x182D07CF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000210")]
		[Address(RVA = "0x2D092D0", Offset = "0x2D078D0", VA = "0x182D092D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public string text
	{
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x2D07D80", Offset = "0x2D06380", VA = "0x182D07D80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x2D095B0", Offset = "0x2D07BB0", VA = "0x182D095B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public bool isFocused
	{
		[Token(Token = "0x6000217")]
		[Address(RVA = "0x2D076F0", Offset = "0x2D05CF0", VA = "0x182D076F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000079")]
	public float caretBlinkRate
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x2D07310", Offset = "0x2D05910", VA = "0x182D07310")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000219")]
		[Address(RVA = "0x2D07F90", Offset = "0x2D06590", VA = "0x182D07F90")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public int caretWidth
	{
		[Token(Token = "0x600021A")]
		[Address(RVA = "0x2D07400", Offset = "0x2D05A00", VA = "0x182D07400")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600021B")]
		[Address(RVA = "0x2D081B0", Offset = "0x2D067B0", VA = "0x182D081B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public RectTransform textViewport
	{
		[Token(Token = "0x600021C")]
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600021D")]
		[Address(RVA = "0x2D09560", Offset = "0x2D07B60", VA = "0x182D09560")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x600021E")]
		[Address(RVA = "0x2CE6A00", Offset = "0x2CE5000", VA = "0x182CE6A00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600021F")]
		[Address(RVA = "0x2D09500", Offset = "0x2D07B00", VA = "0x182D09500")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public Graphic placeholder
	{
		[Token(Token = "0x6000220")]
		[Address(RVA = "0xA29AC0", Offset = "0xA280C0", VA = "0x180A29AC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x2D08D20", Offset = "0x2D07320", VA = "0x182D08D20")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public Scrollbar verticalScrollbar
	{
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x1D1FA50", Offset = "0x1D1E050", VA = "0x181D1FA50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x2D095C0", Offset = "0x2D07BC0", VA = "0x182D095C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public float scrollSensitivity
	{
		[Token(Token = "0x6000224")]
		[Address(RVA = "0x2BFBFB0", Offset = "0x2BFA5B0", VA = "0x182BFBFB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x2D08FA0", Offset = "0x2D075A0", VA = "0x182D08FA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public Color caretColor
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x2D07320", Offset = "0x2D05920", VA = "0x182D07320")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x2D08000", Offset = "0x2D06600", VA = "0x182D08000")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public bool customCaretColor
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x2D07530", Offset = "0x2D05B30", VA = "0x182D07530")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x2D085F0", Offset = "0x2D06BF0", VA = "0x182D085F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public Color selectionColor
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x2D07B90", Offset = "0x2D06190", VA = "0x182D07B90")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x2D09090", Offset = "0x2D07690", VA = "0x182D09090")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public SubmitEvent onEndEdit
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x2D07800", Offset = "0x2D05E00", VA = "0x182D07800")]
		get
		{
			return null;
		}
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x2D08A90", Offset = "0x2D07090", VA = "0x182D08A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public SubmitEvent onSubmit
	{
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x2C32E30", Offset = "0x2C31430", VA = "0x182C32E30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x2D08B90", Offset = "0x2D07190", VA = "0x182D08B90")]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public SelectionEvent onSelect
	{
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x2D07820", Offset = "0x2D05E20", VA = "0x182D07820")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x2D08B40", Offset = "0x2D07140", VA = "0x182D08B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public SelectionEvent onDeselect
	{
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x2602C20", Offset = "0x2601220", VA = "0x182602C20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x2D08A40", Offset = "0x2D07040", VA = "0x182D08A40")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public TextSelectionEvent onTextSelection
	{
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x2D07830", Offset = "0x2D05E30", VA = "0x182D07830")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x2D08BE0", Offset = "0x2D071E0", VA = "0x182D08BE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public TextSelectionEvent onEndTextSelection
	{
		[Token(Token = "0x6000236")]
		[Address(RVA = "0x2CF3D00", Offset = "0x2CF2300", VA = "0x182CF3D00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000237")]
		[Address(RVA = "0x2D08AE0", Offset = "0x2D070E0", VA = "0x182D08AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public OnChangeEvent onValueChanged
	{
		[Token(Token = "0x6000238")]
		[Address(RVA = "0x2D07860", Offset = "0x2D05E60", VA = "0x182D07860")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000239")]
		[Address(RVA = "0x2D08CD0", Offset = "0x2D072D0", VA = "0x182D08CD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public TouchScreenKeyboardEvent onTouchScreenKeyboardStatusChanged
	{
		[Token(Token = "0x600023A")]
		[Address(RVA = "0x2D07840", Offset = "0x2D05E40", VA = "0x182D07840")]
		get
		{
			return null;
		}
		[Token(Token = "0x600023B")]
		[Address(RVA = "0x2D08C30", Offset = "0x2D07230", VA = "0x182D08C30")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public OnValidateInput onValidateInput
	{
		[Token(Token = "0x600023C")]
		[Address(RVA = "0x2D07850", Offset = "0x2D05E50", VA = "0x182D07850")]
		get
		{
			return null;
		}
		[Token(Token = "0x600023D")]
		[Address(RVA = "0x2D08C80", Offset = "0x2D07280", VA = "0x182D08C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int characterLimit
	{
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x2AF5970", Offset = "0x2AF3F70", VA = "0x182AF5970")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600023F")]
		[Address(RVA = "0x2D08240", Offset = "0x2D06840", VA = "0x182D08240")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public float pointSize
	{
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x2AF7E10", Offset = "0x2AF6410", VA = "0x182AF7E10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x2D08D70", Offset = "0x2D07370", VA = "0x182D08D70")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x2D07550", Offset = "0x2D05B50", VA = "0x182D07550")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x2D08650", Offset = "0x2D06C50", VA = "0x182D08650")]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public bool onFocusSelectAll
	{
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x2D07810", Offset = "0x2D05E10", VA = "0x182D07810")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x2D08B30", Offset = "0x2D07130", VA = "0x182D08B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000090")]
	public bool resetOnDeActivation
	{
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x2D07B60", Offset = "0x2D06160", VA = "0x182D07B60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x2D08EF0", Offset = "0x2D074F0", VA = "0x182D08EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	public bool keepTextSelectionVisible
	{
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x2D07700", Offset = "0x2D05D00", VA = "0x182D07700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000249")]
		[Address(RVA = "0x2D08870", Offset = "0x2D06E70", VA = "0x182D08870")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	public bool restoreOriginalTextOnEscape
	{
		[Token(Token = "0x600024A")]
		[Address(RVA = "0x2D07B70", Offset = "0x2D06170", VA = "0x182D07B70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x2D08F00", Offset = "0x2D07500", VA = "0x182D08F00")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public bool isRichTextEditingAllowed
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x2B08220", Offset = "0x2B06820", VA = "0x182B08220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x2AFF200", Offset = "0x2AFD800", VA = "0x182AFF200")]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public ContentType contentType
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x2146130", Offset = "0x2144730", VA = "0x182146130")]
		get
		{
			return default(ContentType);
		}
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x2D083B0", Offset = "0x2D069B0", VA = "0x182D083B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public LineType lineType
	{
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x2D07720", Offset = "0x2D05D20", VA = "0x182D07720")]
		get
		{
			return default(LineType);
		}
		[Token(Token = "0x6000251")]
		[Address(RVA = "0x2D08960", Offset = "0x2D06F60", VA = "0x182D08960")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public int lineLimit
	{
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x2D07710", Offset = "0x2D05D10", VA = "0x182D07710")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x2D088F0", Offset = "0x2D06EF0", VA = "0x182D088F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public InputType inputType
	{
		[Token(Token = "0x6000254")]
		[Address(RVA = "0x2D076D0", Offset = "0x2D05CD0", VA = "0x182D076D0")]
		get
		{
			return default(InputType);
		}
		[Token(Token = "0x6000255")]
		[Address(RVA = "0x2D08790", Offset = "0x2D06D90", VA = "0x182D08790")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public TouchScreenKeyboard touchScreenKeyboard
	{
		[Token(Token = "0x6000256")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000099")]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x6000257")]
		[Address(RVA = "0x2C4F980", Offset = "0x2C4DF80", VA = "0x182C4F980")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x6000258")]
		[Address(RVA = "0x2D08880", Offset = "0x2D06E80", VA = "0x182D08880")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public CharacterValidation characterValidation
	{
		[Token(Token = "0x6000259")]
		[Address(RVA = "0x2D07410", Offset = "0x2D05A10", VA = "0x182D07410")]
		get
		{
			return default(CharacterValidation);
		}
		[Token(Token = "0x600025A")]
		[Address(RVA = "0x2D082F0", Offset = "0x2D068F0", VA = "0x182D082F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	public TMP_InputValidator inputValidator
	{
		[Token(Token = "0x600025B")]
		[Address(RVA = "0x2D076E0", Offset = "0x2D05CE0", VA = "0x182D076E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600025C")]
		[Address(RVA = "0x2D08800", Offset = "0x2D06E00", VA = "0x182D08800")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public bool readOnly
	{
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x2D07B50", Offset = "0x2D06150", VA = "0x182D07B50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x2D08EE0", Offset = "0x2D074E0", VA = "0x182D08EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public bool richText
	{
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x2D07B80", Offset = "0x2D06180", VA = "0x182D07B80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x2D08F10", Offset = "0x2D07510", VA = "0x182D08F10")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public bool multiLine
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x2D077E0", Offset = "0x2D05DE0", VA = "0x182D077E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009F")]
	public char asteriskChar
	{
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x2D07300", Offset = "0x2D05900", VA = "0x182D07300")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x2D07F30", Offset = "0x2D06530", VA = "0x182D07F30")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public bool wasCanceled
	{
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x2D07D90", Offset = "0x2D06390", VA = "0x182D07D90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A1")]
	protected int caretPositionInternal
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x2D07380", Offset = "0x2D05980", VA = "0x182D07380")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x2D08070", Offset = "0x2D06670", VA = "0x182D08070")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	protected int stringPositionInternal
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x2D07BA0", Offset = "0x2D061A0", VA = "0x182D07BA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x2D09420", Offset = "0x2D07A20", VA = "0x182D09420")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	protected int caretSelectPositionInternal
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x2D073C0", Offset = "0x2D059C0", VA = "0x182D073C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x2D08190", Offset = "0x2D06790", VA = "0x182D08190")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	protected int stringSelectPositionInternal
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x2D07BE0", Offset = "0x2D061E0", VA = "0x182D07BE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x2D094E0", Offset = "0x2D07AE0", VA = "0x182D094E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	private bool hasSelection
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x2D07560", Offset = "0x2D05B60", VA = "0x182D07560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	public int caretPosition
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x2D073C0", Offset = "0x2D059C0", VA = "0x182D073C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x2D08090", Offset = "0x2D06690", VA = "0x182D08090")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int selectionAnchorPosition
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x2D07380", Offset = "0x2D05980", VA = "0x182D07380")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x2D09030", Offset = "0x2D07630", VA = "0x182D09030")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public int selectionFocusPosition
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x2D073C0", Offset = "0x2D059C0", VA = "0x182D073C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x2D09100", Offset = "0x2D07700", VA = "0x182D09100")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public int stringPosition
	{
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x2D07BE0", Offset = "0x2D061E0", VA = "0x182D07BE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x2D09440", Offset = "0x2D07A40", VA = "0x182D09440")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public int selectionStringAnchorPosition
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x2D07BA0", Offset = "0x2D061A0", VA = "0x182D07BA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x2D09160", Offset = "0x2D07760", VA = "0x182D09160")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int selectionStringFocusPosition
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x2D07BE0", Offset = "0x2D061E0", VA = "0x182D07BE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x2D091C0", Offset = "0x2D077C0", VA = "0x182D091C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	private static string clipboard
	{
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x2D07420", Offset = "0x2D05A20", VA = "0x182D07420")]
		get
		{
			return null;
		}
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x2D08360", Offset = "0x2D06960", VA = "0x182D08360")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000AE")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x2D079E0", Offset = "0x2D05FE0", VA = "0x182D079E0", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000AF")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B0")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B1")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x2D07870", Offset = "0x2D05E70", VA = "0x182D07870", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B2")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B3")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "86")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x2D06F90", Offset = "0x2D05590", VA = "0x182D06F90")]
	protected TMP_InputField()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x2D07DA0", Offset = "0x2D063A0", VA = "0x182D07DA0")]
	private bool isKeyboardUsingEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x2D07EA0", Offset = "0x2D064A0", VA = "0x182D07EA0")]
	private bool isUWP()
	{
		return default(bool);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x2D05530", Offset = "0x2D03B30", VA = "0x182D05530")]
	public void SetTextWithoutNotify(string input)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x2D05540", Offset = "0x2D03B40", VA = "0x182D05540")]
	private void SetText(string value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x2CF9F20", Offset = "0x2CF8520", VA = "0x182CF9F20")]
	protected void ClampStringPos(ref int pos)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x2CF9EA0", Offset = "0x2CF84A0", VA = "0x182CF9EA0")]
	protected void ClampCaretPos(ref int pos)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x2CF9E90", Offset = "0x2CF8490", VA = "0x182CF9E90")]
	private int ClampArrayIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x2D022E0", Offset = "0x2D008E0", VA = "0x182D022E0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x2D01AD0", Offset = "0x2D000D0", VA = "0x182D01AD0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x2D01750", Offset = "0x2CFFD50", VA = "0x182D01750")]
	private void ON_TEXT_CHANGED(UnityEngine.Object obj)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x2CF9E20", Offset = "0x2CF8420", VA = "0x182CF9E20")]
	[IteratorStateMachine(typeof(_003CCaretBlink_003Ed__293))]
	private IEnumerator CaretBlink()
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x2D051D0", Offset = "0x2D037D0", VA = "0x182D051D0")]
	private void SetCaretVisible()
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x2D05100", Offset = "0x2D03700", VA = "0x182D05100")]
	private void SetCaretActive()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x2D02EB0", Offset = "0x2D014B0", VA = "0x182D02EB0")]
	protected void OnFocus()
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x2D04B20", Offset = "0x2D03120", VA = "0x182D04B20")]
	protected void SelectAll()
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x2D00E80", Offset = "0x2CFF480", VA = "0x182D00E80")]
	public void MoveTextEnd(bool shift)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x2D00FC0", Offset = "0x2CFF5C0", VA = "0x182D00FC0")]
	public void MoveTextStart(bool shift)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x2D010C0", Offset = "0x2CFF6C0", VA = "0x182D010C0")]
	public void MoveToEndOfLine(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x2D012B0", Offset = "0x2CFF8B0", VA = "0x182D012B0")]
	public void MoveToStartOfLine(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x2CFD6B0", Offset = "0x2CFBCB0", VA = "0x182CFD6B0")]
	private bool InPlaceEditing()
	{
		return default(bool);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x2CFD630", Offset = "0x2CFBC30", VA = "0x182CFD630")]
	private bool InPlaceEditingChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x2D05750", Offset = "0x2D03D50", VA = "0x182D05750")]
	private bool TouchScreenKeyboardShouldBeUsed()
	{
		return default(bool);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x2D05A50", Offset = "0x2D04050", VA = "0x182D05A50")]
	private void UpdateKeyboardStringPosition()
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x2D06330", Offset = "0x2D04930", VA = "0x182D06330")]
	private void UpdateStringPositionFromKeyboard()
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x2CFDE70", Offset = "0x2CFC470", VA = "0x182CFDE70", Slot = "63")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x2CFF0F0", Offset = "0x2CFD6F0", VA = "0x182CFF0F0")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x2D01950", Offset = "0x2CFFF50", VA = "0x182D01950", Slot = "64")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x2D01E40", Offset = "0x2D00440", VA = "0x182D01E40", Slot = "65")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x2CFF1E0", Offset = "0x2CFD7E0", VA = "0x182CFF1E0")]
	[IteratorStateMachine(typeof(_003CMouseDragOutsideRect_003Ed__314))]
	private IEnumerator MouseDragOutsideRect(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x2D02B80", Offset = "0x2D01180", VA = "0x182D02B80", Slot = "66")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x2D02F20", Offset = "0x2D01520", VA = "0x182D02F20", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x2CFD9A0", Offset = "0x2CFBFA0", VA = "0x182CFD9A0")]
	protected EditState KeyPressed(Event evt)
	{
		return default(EditState);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x2CFD980", Offset = "0x2CFBF80", VA = "0x182CFD980", Slot = "67")]
	protected virtual bool IsValidChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x2D04980", Offset = "0x2D02F80", VA = "0x182D04980")]
	public void ProcessEvent(Event e)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x2D03CD0", Offset = "0x2D022D0", VA = "0x182D03CD0", Slot = "68")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x2D03900", Offset = "0x2D01F00", VA = "0x182D03900", Slot = "69")]
	public virtual void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x2CFD270", Offset = "0x2CFB870", VA = "0x182CFD270")]
	private float GetScrollPositionRelativeToViewport()
	{
		return default(float);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x2CFD450", Offset = "0x2CFBA50", VA = "0x182CFD450")]
	private string GetSelectedString()
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x2CFAFD0", Offset = "0x2CF95D0", VA = "0x182CFAFD0")]
	private int FindNextWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x2D00590", Offset = "0x2CFEB90", VA = "0x182D00590")]
	private void MoveRight(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x2CFB0F0", Offset = "0x2CF96F0", VA = "0x182CFB0F0")]
	private int FindPrevWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x2CFF510", Offset = "0x2CFDB10", VA = "0x182CFF510")]
	private void MoveLeft(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x2CFECD0", Offset = "0x2CFD2D0", VA = "0x182CFECD0")]
	private int LineUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x2CFE8D0", Offset = "0x2CFCED0", VA = "0x182CFE8D0")]
	private int LineDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x2D04470", Offset = "0x2D02A70", VA = "0x182D04470")]
	private int PageUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x2D03EE0", Offset = "0x2D024E0", VA = "0x182D03EE0")]
	private int PageDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x2CFF500", Offset = "0x2CFDB00", VA = "0x182CFF500")]
	private void MoveDown(bool shift)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x2CFF270", Offset = "0x2CFD870", VA = "0x182CFF270")]
	private void MoveDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x2D014E0", Offset = "0x2CFFAE0", VA = "0x182D014E0")]
	private void MoveUp(bool shift)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x2D014F0", Offset = "0x2CFFAF0", VA = "0x182D014F0")]
	private void MoveUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x2D00580", Offset = "0x2CFEB80", VA = "0x182D00580")]
	private void MovePageUp(bool shift)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x2D00130", Offset = "0x2CFE730", VA = "0x182D00130")]
	private void MovePageUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x2D00120", Offset = "0x2CFE720", VA = "0x182D00120")]
	private void MovePageDown(bool shift)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x2CFFCB0", Offset = "0x2CFE2B0", VA = "0x182CFFCB0")]
	private void MovePageDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x2CFA9E0", Offset = "0x2CF8FE0", VA = "0x182CFA9E0")]
	private void Delete()
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x2CFA460", Offset = "0x2CF8A60", VA = "0x182CFA460")]
	private void DeleteKey()
	{
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x2CF9610", Offset = "0x2CF7C10", VA = "0x182CF9610")]
	private void Backspace()
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x2CFD8B0", Offset = "0x2CFBEB0", VA = "0x182CFD8B0")]
	private static bool IsLigature(TMP_CharacterInfo characterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x2CFCC60", Offset = "0x2CFB260", VA = "0x182CFCC60")]
	private static uint GetCodePointBefore(string text, int position, int start, out int length)
	{
		return default(uint);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x2CFCB50", Offset = "0x2CFB150", VA = "0x182CFCB50")]
	private static uint GetCodePointAt(string text, int position, int end, out int length)
	{
		return default(uint);
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x2CFCFF0", Offset = "0x2CFB5F0", VA = "0x182CFCFF0")]
	private static int GetLastLigatureComponentLength(string text, int start, int end)
	{
		return default(int);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x2CFCD80", Offset = "0x2CFB380", VA = "0x182CFCD80")]
	private static int GetFirstLigatureComponentLength(string text, int start, int end)
	{
		return default(int);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x2CF87E0", Offset = "0x2CF6DE0", VA = "0x182CF87E0", Slot = "70")]
	protected virtual void Append(string input)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x2CF8890", Offset = "0x2CF6E90", VA = "0x182CF8890", Slot = "71")]
	protected virtual void Append(char input)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x2CFD730", Offset = "0x2CFBD30", VA = "0x182CFD730")]
	private void Insert(char c)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x2D065D0", Offset = "0x2D04BD0", VA = "0x182D065D0")]
	private void UpdateTouchKeyboardFromEditChanges()
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x2D04FD0", Offset = "0x2D035D0", VA = "0x182D04FD0")]
	private void SendOnValueChangedAndUpdateLabel()
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x2D05030", Offset = "0x2D03630", VA = "0x182D05030")]
	private void SendOnValueChanged()
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x2D04C60", Offset = "0x2D03260", VA = "0x182D04C60")]
	protected void SendOnEndEdit()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x2D04E80", Offset = "0x2D03480", VA = "0x182D04E80")]
	protected void SendOnSubmit()
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x2D04E20", Offset = "0x2D03420", VA = "0x182D04E20")]
	protected void SendOnFocus()
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x2D04DC0", Offset = "0x2D033C0", VA = "0x182D04DC0")]
	protected void SendOnFocusLost()
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x2D04EE0", Offset = "0x2D034E0", VA = "0x182D04EE0")]
	protected void SendOnTextSelection()
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x2D04CC0", Offset = "0x2D032C0", VA = "0x182D04CC0")]
	protected void SendOnEndTextSelection()
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x2D05090", Offset = "0x2D03690", VA = "0x182D05090")]
	protected void SendTouchScreenKeyboardStatusChanged()
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x2D05C20", Offset = "0x2D04220", VA = "0x182D05C20")]
	protected void UpdateLabel()
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x2D061B0", Offset = "0x2D047B0", VA = "0x182D061B0")]
	private void UpdateScrollbar()
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x2D03B50", Offset = "0x2D02150", VA = "0x182D03B50")]
	private void OnScrollbarValueChange(float value)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void UpdateMaskRegions()
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x2CF8570", Offset = "0x2CF6B70", VA = "0x182CF8570")]
	private void AdjustTextPositionRelativeToViewport(float relativePosition)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x2CFCAC0", Offset = "0x2CFB0C0", VA = "0x182CFCAC0")]
	private int GetCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x2CFD190", Offset = "0x2CFB790", VA = "0x182CFD190")]
	private int GetMinCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x2CFCAC0", Offset = "0x2CFB0C0", VA = "0x182CFCAC0")]
	private int GetMaxCaretPositionFromStringIndex(int stringIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x2CFD580", Offset = "0x2CFBB80", VA = "0x182CFD580")]
	private int GetStringIndexFromCaretPosition(int caretPosition)
	{
		return default(int);
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x2D062C0", Offset = "0x2D048C0", VA = "0x182D062C0")]
	private void UpdateStringIndexFromCaretPosition()
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x2D05800", Offset = "0x2D03E00", VA = "0x182D05800")]
	private void UpdateCaretPositionFromStringIndex()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x2CFB1F0", Offset = "0x2CF97F0", VA = "0x182CFB1F0")]
	public void ForceLabelUpdate()
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x2CFF0A0", Offset = "0x2CFD6A0", VA = "0x182CFF0A0")]
	private void MarkGeometryAsDirty()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x2D04990", Offset = "0x2D02F90", VA = "0x182D04990", Slot = "72")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "73")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "74")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x2D05990", Offset = "0x2D03F90", VA = "0x182D05990")]
	private void UpdateGeometry()
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x2CF8E90", Offset = "0x2CF7490", VA = "0x182CF8E90")]
	private void AssignPositioningIfNeeded()
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x2D02BB0", Offset = "0x2D011B0", VA = "0x182D02BB0")]
	private void OnFillVBO(Mesh vbo)
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x2CFB200", Offset = "0x2CF9800", VA = "0x182CFB200")]
	private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x2CFA030", Offset = "0x2CF8630", VA = "0x182CFA030")]
	private void CreateCursorVerts()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x2CFBF60", Offset = "0x2CFA560", VA = "0x182CFBF60")]
	private void GenerateHighlight(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x2CF7D90", Offset = "0x2CF6390", VA = "0x182CF7D90")]
	private void AdjustRectTransformRelativeToViewport(Vector2 startPosition, float height, bool isCharVisible)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x2D06620", Offset = "0x2D04C20", VA = "0x182D06620")]
	protected char Validate(string text, int pos, char ch)
	{
		return default(char);
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x2CF7C50", Offset = "0x2CF6250", VA = "0x182CF7C50")]
	public void ActivateInputField()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x2CF7770", Offset = "0x2CF5D70", VA = "0x182CF7770")]
	private void ActivateInputFieldInternal()
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x2D03B90", Offset = "0x2D02190", VA = "0x182D03B90", Slot = "36")]
	public override void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x2D02EF0", Offset = "0x2D014F0", VA = "0x182D02EF0", Slot = "75")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void OnControlClick()
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x2D04A60", Offset = "0x2D03060", VA = "0x182D04A60")]
	public void ReleaseSelection()
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x2CFA200", Offset = "0x2CF8800", VA = "0x182CFA200")]
	public void DeactivateInputField(bool clearSelection = false)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x2D01A10", Offset = "0x2D00010", VA = "0x182D01A10", Slot = "37")]
	public override void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x2D03C10", Offset = "0x2D02210", VA = "0x182D03C10", Slot = "76")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x2D01980", Offset = "0x2CFFF80", VA = "0x182D01980", Slot = "77")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x2D02ED0", Offset = "0x2D014D0", VA = "0x182D02ED0", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x2CFADD0", Offset = "0x2CF93D0", VA = "0x182CFADD0")]
	private void EnforceContentType()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x2D05480", Offset = "0x2D03A80", VA = "0x182D05480")]
	private void SetTextComponentWrapMode()
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x2D053F0", Offset = "0x2D039F0", VA = "0x182D053F0")]
	private void SetTextComponentRichTextMode()
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x2D056C0", Offset = "0x2D03CC0", VA = "0x182D056C0")]
	private void SetToCustomIfContentTypeIsNot(params ContentType[] allowedContentTypes)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x2D05730", Offset = "0x2D03D30", VA = "0x182D05730")]
	private void SetToCustom()
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x2D05730", Offset = "0x2D03D30", VA = "0x182D05730")]
	private void SetToCustom(CharacterValidation characterValidation)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x2CFAD90", Offset = "0x2CF9390", VA = "0x182CFAD90", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "78")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "79")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x2D05300", Offset = "0x2D03900", VA = "0x182D05300")]
	public void SetGlobalPointSize(float pointSize)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x2D05210", Offset = "0x2D03810", VA = "0x182D05210")]
	public void SetGlobalFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x2D057F0", Offset = "0x2D03DF0", VA = "0x182D057F0", Slot = "47")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
