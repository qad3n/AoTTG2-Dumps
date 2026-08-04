// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.InputField
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
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Token(Token = "0x200002E")]
[AddComponentMenu("UI/Legacy/Input Field", 103)]
public class InputField : Selectable, IUpdateSelectedHandler, IEventSystemHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerClickHandler, ISubmitHandler, ICanvasElement, ILayoutElement
{
	[Token(Token = "0x200002F")]
	public enum ContentType
	{
		[Token(Token = "0x4000103")]
		Standard,
		[Token(Token = "0x4000104")]
		Autocorrected,
		[Token(Token = "0x4000105")]
		IntegerNumber,
		[Token(Token = "0x4000106")]
		DecimalNumber,
		[Token(Token = "0x4000107")]
		Alphanumeric,
		[Token(Token = "0x4000108")]
		Name,
		[Token(Token = "0x4000109")]
		EmailAddress,
		[Token(Token = "0x400010A")]
		Password,
		[Token(Token = "0x400010B")]
		Pin,
		[Token(Token = "0x400010C")]
		Custom
	}

	[Token(Token = "0x2000030")]
	public enum InputType
	{
		[Token(Token = "0x400010E")]
		Standard,
		[Token(Token = "0x400010F")]
		AutoCorrect,
		[Token(Token = "0x4000110")]
		Password
	}

	[Token(Token = "0x2000031")]
	public enum CharacterValidation
	{
		[Token(Token = "0x4000112")]
		None,
		[Token(Token = "0x4000113")]
		Integer,
		[Token(Token = "0x4000114")]
		Decimal,
		[Token(Token = "0x4000115")]
		Alphanumeric,
		[Token(Token = "0x4000116")]
		Name,
		[Token(Token = "0x4000117")]
		EmailAddress
	}

	[Token(Token = "0x2000032")]
	public enum LineType
	{
		[Token(Token = "0x4000119")]
		SingleLine,
		[Token(Token = "0x400011A")]
		MultiLineSubmit,
		[Token(Token = "0x400011B")]
		MultiLineNewline
	}

	[Token(Token = "0x2000033")]
	public delegate char OnValidateInput(string text, int charIndex, char addedChar);

	[Serializable]
	[Token(Token = "0x2000034")]
	public class SubmitEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x50BF6E0", Offset = "0x50BF6E0", VA = "0x50BF6E0")]
		public SubmitEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000035")]
	public class EndEditEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x50BF720", Offset = "0x50BF720", VA = "0x50BF720")]
		public EndEditEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000036")]
	public class OnChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000236")]
		[Address(RVA = "0x50BF760", Offset = "0x50BF760", VA = "0x50BF760")]
		public OnChangeEvent()
		{
		}
	}

	[Token(Token = "0x2000037")]
	protected enum EditState
	{
		[Token(Token = "0x400011D")]
		Continue,
		[Token(Token = "0x400011E")]
		Finish
	}

	[Token(Token = "0x2000038")]
	[CompilerGenerated]
	private sealed class _003CCaretBlink_003Ed__170 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400011F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000120")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000121")]
		[FieldOffset(Offset = "0x20")]
		public InputField _003C_003E4__this;

		[Token(Token = "0x17000094")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600023A")]
			[Address(RVA = "0x50CBF20", Offset = "0x50CBF20", VA = "0x50CBF20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000095")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600023C")]
			[Address(RVA = "0x50CBF70", Offset = "0x50CBF70", VA = "0x50CBF70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000237")]
		[Address(RVA = "0x50C2150", Offset = "0x50C2150", VA = "0x50C2150")]
		[DebuggerHidden]
		public _003CCaretBlink_003Ed__170(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000238")]
		[Address(RVA = "0x50CBD60", Offset = "0x50CBD60", VA = "0x50CBD60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x50CBD70", Offset = "0x50CBD70", VA = "0x50CBD70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x50CBF30", Offset = "0x50CBF30", VA = "0x50CBF30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000039")]
	[CompilerGenerated]
	private sealed class _003CMouseDragOutsideRect_003Ed__194 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000122")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000123")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000124")]
		[FieldOffset(Offset = "0x20")]
		public PointerEventData eventData;

		[Token(Token = "0x4000125")]
		[FieldOffset(Offset = "0x28")]
		public InputField _003C_003E4__this;

		[Token(Token = "0x17000096")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000240")]
			[Address(RVA = "0x50CC250", Offset = "0x50CC250", VA = "0x50CC250", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000097")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000242")]
			[Address(RVA = "0x50CC2A0", Offset = "0x50CC2A0", VA = "0x50CC2A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x50C5400", Offset = "0x50C5400", VA = "0x50C5400")]
		[DebuggerHidden]
		public _003CMouseDragOutsideRect_003Ed__194(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x50CBF80", Offset = "0x50CBF80", VA = "0x50CBF80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x50CBF90", Offset = "0x50CBF90", VA = "0x50CBF90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x50CC260", Offset = "0x50CC260", VA = "0x50CC260", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x100")]
	protected TouchScreenKeyboard m_Keyboard;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] kSeparators;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x8")]
	private static bool s_IsQuestDevice;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	[FormerlySerializedAs("text")]
	protected Text m_TextComponent;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	protected Graphic m_Placeholder;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private ContentType m_ContentType;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x11C")]
	[FormerlySerializedAs("inputType")]
	[SerializeField]
	private InputType m_InputType;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x120")]
	[FormerlySerializedAs("asteriskChar")]
	[SerializeField]
	private char m_AsteriskChar;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x124")]
	[FormerlySerializedAs("keyboardType")]
	[SerializeField]
	private TouchScreenKeyboardType m_KeyboardType;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	private LineType m_LineType;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x12C")]
	[FormerlySerializedAs("hideMobileInput")]
	[SerializeField]
	private bool m_HideMobileInput;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x130")]
	[FormerlySerializedAs("validation")]
	[SerializeField]
	private CharacterValidation m_CharacterValidation;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x134")]
	[FormerlySerializedAs("characterLimit")]
	[SerializeField]
	private int m_CharacterLimit;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x138")]
	[FormerlySerializedAs("onSubmit")]
	[FormerlySerializedAs("m_OnSubmit")]
	[FormerlySerializedAs("m_EndEdit")]
	[FormerlySerializedAs("m_OnEndEdit")]
	[SerializeField]
	private SubmitEvent m_OnSubmit;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	private EndEditEvent m_OnDidEndEdit;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x148")]
	[FormerlySerializedAs("onValueChange")]
	[FormerlySerializedAs("m_OnValueChange")]
	[SerializeField]
	private OnChangeEvent m_OnValueChanged;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x150")]
	[FormerlySerializedAs("onValidateInput")]
	[SerializeField]
	private OnValidateInput m_OnValidateInput;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x158")]
	[FormerlySerializedAs("selectionColor")]
	[SerializeField]
	private Color m_CaretColor;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x168")]
	[SerializeField]
	private bool m_CustomCaretColor;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x16C")]
	[SerializeField]
	private Color m_SelectionColor;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x180")]
	[SerializeField]
	[Multiline]
	[FormerlySerializedAs("mValue")]
	protected string m_Text;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x188")]
	[SerializeField]
	[Range(0f, 4f)]
	private float m_CaretBlinkRate;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x18C")]
	[SerializeField]
	[Range(1f, 5f)]
	private int m_CaretWidth;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x190")]
	[SerializeField]
	private bool m_ReadOnly;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x191")]
	[SerializeField]
	private bool m_ShouldActivateOnSelect;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x194")]
	protected int m_CaretPosition;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x198")]
	protected int m_CaretSelectPosition;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x1A0")]
	private RectTransform caretRectTrans;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x1A8")]
	protected UIVertex[] m_CursorVerts;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x1B0")]
	private TextGenerator m_InputTextCache;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x1B8")]
	private CanvasRenderer m_CachedInputRenderer;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x1C0")]
	private bool m_PreventFontCallback;

	[NonSerialized]
	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x1C8")]
	protected Mesh m_Mesh;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x1D0")]
	private bool m_AllowInput;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x1D1")]
	private bool m_ShouldActivateNextUpdate;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x1D2")]
	private bool m_UpdateDrag;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x1D3")]
	private bool m_DragPositionOutOfBounds;

	[Token(Token = "0x40000F0")]
	private const float kHScrollSpeed = 0.05f;

	[Token(Token = "0x40000F1")]
	private const float kVScrollSpeed = 0.1f;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x1D4")]
	protected bool m_CaretVisible;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x1D8")]
	private Coroutine m_BlinkCoroutine;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x1E0")]
	private float m_BlinkStartTime;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x1E4")]
	protected int m_DrawStart;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x1E8")]
	protected int m_DrawEnd;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x1F0")]
	private Coroutine m_DragCoroutine;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x1F8")]
	private string m_OriginalText;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x200")]
	private bool m_WasCanceled;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x201")]
	private bool m_HasDoneFocusTransition;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x208")]
	private WaitForSecondsRealtime m_WaitForSecondsRealtime;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x210")]
	private bool m_TouchKeyboardAllowsInPlaceEditing;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x211")]
	private bool m_IsCompositionActive;

	[Token(Token = "0x40000FE")]
	private const string kEmailSpecialCharacters = "!#$%&'*+-/=?^_`{|}~";

	[Token(Token = "0x40000FF")]
	private const string kOculusQuestDeviceModel = "Oculus Quest";

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x218")]
	private Event m_ProcessingEvent;

	[Token(Token = "0x4000101")]
	private const int k_MaxTextLength = 16382;

	[Token(Token = "0x17000067")]
	private BaseInput input
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x50BF320", Offset = "0x50BF320", VA = "0x50BF320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	private string compositionString
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x50BF420", Offset = "0x50BF420", VA = "0x50BF420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	protected Mesh mesh
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x50BF830", Offset = "0x50BF830", VA = "0x50BF830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006A")]
	protected TextGenerator cachedInputTextGenerator
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x50BF8D0", Offset = "0x50BF8D0", VA = "0x50BF8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006B")]
	public bool shouldHideMobileInput
	{
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x50BF9A0", Offset = "0x50BF9A0", VA = "0x50BF9A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x50BF950", Offset = "0x50BF950", VA = "0x50BF950")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public virtual bool shouldActivateOnSelect
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x50BFA10", Offset = "0x50BFA10", VA = "0x50BFA10", Slot = "60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x50BFA00", Offset = "0x50BFA00", VA = "0x50BFA00", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public string text
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x50BFA70", Offset = "0x50BFA70", VA = "0x50BFA70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x50BFA80", Offset = "0x50BFA80", VA = "0x50BFA80")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public bool isFocused
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x50C0690", Offset = "0x50C0690", VA = "0x50C0690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006F")]
	public float caretBlinkRate
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x50C06A0", Offset = "0x50C06A0", VA = "0x50C06A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x50C06B0", Offset = "0x50C06B0", VA = "0x50C06B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public int caretWidth
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x50C07F0", Offset = "0x50C07F0", VA = "0x50C07F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x50C0800", Offset = "0x50C0800", VA = "0x50C0800")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public Text textComponent
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x50C0900", Offset = "0x50C0900", VA = "0x50C0900")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x50C0910", Offset = "0x50C0910", VA = "0x50C0910")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public Graphic placeholder
	{
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x50C0BC0", Offset = "0x50C0BC0", VA = "0x50C0BC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x50C0BD0", Offset = "0x50C0BD0", VA = "0x50C0BD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public Color caretColor
	{
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x50C0C20", Offset = "0x50C0C20", VA = "0x50C0C20")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x50C0C60", Offset = "0x50C0C60", VA = "0x50C0C60")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public bool customCaretColor
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x50C0CE0", Offset = "0x50C0CE0", VA = "0x50C0CE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x50C0CF0", Offset = "0x50C0CF0", VA = "0x50C0CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public Color selectionColor
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x50C0D70", Offset = "0x50C0D70", VA = "0x50C0D70")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x50C0D90", Offset = "0x50C0D90", VA = "0x50C0D90")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public EndEditEvent onEndEdit
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x50C0E10", Offset = "0x50C0E10", VA = "0x50C0E10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x50C0E20", Offset = "0x50C0E20", VA = "0x50C0E20")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public SubmitEvent onSubmit
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x50C0E70", Offset = "0x50C0E70", VA = "0x50C0E70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x50C0E80", Offset = "0x50C0E80", VA = "0x50C0E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	[Obsolete("onValueChange has been renamed to onValueChanged")]
	public OnChangeEvent onValueChange
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x50C0ED0", Offset = "0x50C0ED0", VA = "0x50C0ED0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x50C0EE0", Offset = "0x50C0EE0", VA = "0x50C0EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public OnChangeEvent onValueChanged
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x50C0F80", Offset = "0x50C0F80", VA = "0x50C0F80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x50C0F30", Offset = "0x50C0F30", VA = "0x50C0F30")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public OnValidateInput onValidateInput
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x50C0F90", Offset = "0x50C0F90", VA = "0x50C0F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x50C0FA0", Offset = "0x50C0FA0", VA = "0x50C0FA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public int characterLimit
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x50C0FF0", Offset = "0x50C0FF0", VA = "0x50C0FF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x50C1000", Offset = "0x50C1000", VA = "0x50C1000")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public ContentType contentType
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x50C10A0", Offset = "0x50C10A0", VA = "0x50C10A0")]
		get
		{
			return default(ContentType);
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x50C10B0", Offset = "0x50C10B0", VA = "0x50C10B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public LineType lineType
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x50C12E0", Offset = "0x50C12E0", VA = "0x50C12E0")]
		get
		{
			return default(LineType);
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x50C12F0", Offset = "0x50C12F0", VA = "0x50C12F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public InputType inputType
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x50C1400", Offset = "0x50C1400", VA = "0x50C1400")]
		get
		{
			return default(InputType);
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x50C1410", Offset = "0x50C1410", VA = "0x50C1410")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public TouchScreenKeyboard touchScreenKeyboard
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x50C14A0", Offset = "0x50C14A0", VA = "0x50C14A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x50C14B0", Offset = "0x50C14B0", VA = "0x50C14B0")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x50C14C0", Offset = "0x50C14C0", VA = "0x50C14C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public CharacterValidation characterValidation
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x50C1530", Offset = "0x50C1530", VA = "0x50C1530")]
		get
		{
			return default(CharacterValidation);
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x50C1540", Offset = "0x50C1540", VA = "0x50C1540")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public bool readOnly
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x50C15B0", Offset = "0x50C15B0", VA = "0x50C15B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x50C15C0", Offset = "0x50C15C0", VA = "0x50C15C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public bool multiLine
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x50C15D0", Offset = "0x50C15D0", VA = "0x50C15D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000084")]
	public char asteriskChar
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x50C15E0", Offset = "0x50C15E0", VA = "0x50C15E0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x50C15F0", Offset = "0x50C15F0", VA = "0x50C15F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public bool wasCanceled
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x50C1650", Offset = "0x50C1650", VA = "0x50C1650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000086")]
	protected int caretPositionInternal
	{
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x50C1690", Offset = "0x50C1690", VA = "0x50C1690")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x50C16B0", Offset = "0x50C16B0", VA = "0x50C16B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	protected int caretSelectPositionInternal
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x50C16E0", Offset = "0x50C16E0", VA = "0x50C16E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x50C1700", Offset = "0x50C1700", VA = "0x50C1700")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	private bool hasSelection
	{
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x50C1730", Offset = "0x50C1730", VA = "0x50C1730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000089")]
	public int caretPosition
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x50C1770", Offset = "0x50C1770", VA = "0x50C1770")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x50C1790", Offset = "0x50C1790", VA = "0x50C1790")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public int selectionAnchorPosition
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x50C1910", Offset = "0x50C1910", VA = "0x50C1910")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x50C1850", Offset = "0x50C1850", VA = "0x50C1850")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public int selectionFocusPosition
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x50C1930", Offset = "0x50C1930", VA = "0x50C1930")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x50C18B0", Offset = "0x50C18B0", VA = "0x50C18B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	private static string clipboard
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x50C2460", Offset = "0x50C2460", VA = "0x50C2460")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x50C2470", Offset = "0x50C2470", VA = "0x50C2470")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public virtual float minWidth
	{
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x50CB6F0", Offset = "0x50CB6F0", VA = "0x50CB6F0", Slot = "75")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700008E")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x50CB700", Offset = "0x50CB700", VA = "0x50CB700", Slot = "76")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700008F")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x50CB950", Offset = "0x50CB950", VA = "0x50CB950", Slot = "77")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000090")]
	public virtual float minHeight
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x50CB960", Offset = "0x50CB960", VA = "0x50CB960", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000091")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x50CB970", Offset = "0x50CB970", VA = "0x50CB970", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000092")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x50CBBC0", Offset = "0x50CBBC0", VA = "0x50CBBC0", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000093")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x50CBBD0", Offset = "0x50CBBD0", VA = "0x50CBBD0", Slot = "81")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x50BF4A0", Offset = "0x50BF4A0", VA = "0x50BF4A0")]
	protected InputField()
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x50BFEE0", Offset = "0x50BFEE0", VA = "0x50BFEE0")]
	public void SetTextWithoutNotify(string input)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x50BFA90", Offset = "0x50BFA90", VA = "0x50BFA90")]
	private void SetText(string value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x50C1660", Offset = "0x50C1660", VA = "0x50C1660")]
	protected void ClampPos(ref int pos)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x50C1950", Offset = "0x50C1950", VA = "0x50C1950", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x50C1BE0", Offset = "0x50C1BE0", VA = "0x50C1BE0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x50C2090", Offset = "0x50C2090", VA = "0x50C2090", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x50C20E0", Offset = "0x50C20E0", VA = "0x50C20E0")]
	[IteratorStateMachine(typeof(_003CCaretBlink_003Ed__170))]
	private IEnumerator CaretBlink()
	{
		return null;
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x50C2170", Offset = "0x50C2170", VA = "0x50C2170")]
	private void SetCaretVisible()
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x50C0720", Offset = "0x50C0720", VA = "0x50C0720")]
	private void SetCaretActive()
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x50C21A0", Offset = "0x50C21A0", VA = "0x50C21A0")]
	private void UpdateCaretMaterial()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x50C22B0", Offset = "0x50C22B0", VA = "0x50C22B0")]
	protected void OnFocus()
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x50C22F0", Offset = "0x50C22F0", VA = "0x50C22F0")]
	protected void SelectAll()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x50C2330", Offset = "0x50C2330", VA = "0x50C2330")]
	public void MoveTextEnd(bool shift)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x50C23C0", Offset = "0x50C23C0", VA = "0x50C23C0")]
	public void MoveTextStart(bool shift)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x50C2480", Offset = "0x50C2480", VA = "0x50C2480")]
	private bool TouchScreenKeyboardShouldBeUsed()
	{
		return default(bool);
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x50C2540", Offset = "0x50C2540", VA = "0x50C2540")]
	private bool InPlaceEditing()
	{
		return default(bool);
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x50C2560", Offset = "0x50C2560", VA = "0x50C2560")]
	private bool InPlaceEditingChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x50C2600", Offset = "0x50C2600", VA = "0x50C2600")]
	private RangeInt GetInternalSelection()
	{
		return default(RangeInt);
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x50C26F0", Offset = "0x50C26F0", VA = "0x50C26F0")]
	private void UpdateKeyboardCaret()
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x50C27D0", Offset = "0x50C27D0", VA = "0x50C27D0")]
	private void UpdateCaretFromKeyboard()
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x50C2930", Offset = "0x50C2930", VA = "0x50C2930", Slot = "61")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x50C4510", Offset = "0x50C4510", VA = "0x50C4510")]
	[Obsolete("This function is no longer used. Please use RectTransformUtility.ScreenPointToLocalPointInRectangle() instead.")]
	public Vector2 ScreenToLocal(Vector2 screen)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x50C4960", Offset = "0x50C4960", VA = "0x50C4960")]
	private int GetUnclampedCharacterLineFromPosition(Vector2 pos, TextGenerator generator)
	{
		return default(int);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x50C4B90", Offset = "0x50C4B90", VA = "0x50C4B90")]
	protected int GetCharacterIndexFromPosition(Vector2 pos)
	{
		return default(int);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x50C4F90", Offset = "0x50C4F90", VA = "0x50C4F90")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x50C5060", Offset = "0x50C5060", VA = "0x50C5060", Slot = "62")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x50C5080", Offset = "0x50C5080", VA = "0x50C5080", Slot = "63")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x50C5370", Offset = "0x50C5370", VA = "0x50C5370")]
	[IteratorStateMachine(typeof(_003CMouseDragOutsideRect_003Ed__194))]
	private IEnumerator MouseDragOutsideRect(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x50C5420", Offset = "0x50C5420", VA = "0x50C5420", Slot = "64")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x50C5440", Offset = "0x50C5440", VA = "0x50C5440", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x50C5650", Offset = "0x50C5650", VA = "0x50C5650")]
	protected EditState KeyPressed(Event evt)
	{
		return default(EditState);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x50C67E0", Offset = "0x50C67E0", VA = "0x50C67E0")]
	private bool IsValidChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x50C6840", Offset = "0x50C6840", VA = "0x50C6840")]
	public void ProcessEvent(Event e)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x50C6850", Offset = "0x50C6850", VA = "0x50C6850", Slot = "65")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x50C6080", Offset = "0x50C6080", VA = "0x50C6080")]
	private string GetSelectedString()
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x50C6AE0", Offset = "0x50C6AE0", VA = "0x50C6AE0")]
	private int FindtNextWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x50C6620", Offset = "0x50C6620", VA = "0x50C6620")]
	private void MoveRight(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x50C6BC0", Offset = "0x50C6BC0", VA = "0x50C6BC0")]
	private int FindtPrevWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x50C6480", Offset = "0x50C6480", VA = "0x50C6480")]
	private void MoveLeft(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x50C6C70", Offset = "0x50C6C70", VA = "0x50C6C70")]
	private int DetermineCharacterLine(int charPos, TextGenerator generator)
	{
		return default(int);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x50C6DA0", Offset = "0x50C6DA0", VA = "0x50C6DA0")]
	private int LineUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x50C7340", Offset = "0x50C7340", VA = "0x50C7340")]
	private int LineDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x50C67D0", Offset = "0x50C67D0", VA = "0x50C67D0")]
	private void MoveDown(bool shift)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x50C78A0", Offset = "0x50C78A0", VA = "0x50C78A0")]
	private void MoveDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x50C67C0", Offset = "0x50C67C0", VA = "0x50C67C0")]
	private void MoveUp(bool shift)
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x50C7A50", Offset = "0x50C7A50", VA = "0x50C7A50")]
	private void MoveUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x50C6150", Offset = "0x50C6150", VA = "0x50C6150")]
	private void Delete()
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x50C5E60", Offset = "0x50C5E60", VA = "0x50C5E60")]
	private void ForwardSpace()
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x50C5B70", Offset = "0x50C5B70", VA = "0x50C5B70")]
	private void Backspace()
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x50C7BF0", Offset = "0x50C7BF0", VA = "0x50C7BF0")]
	private void Insert(char c)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x50C6430", Offset = "0x50C6430", VA = "0x50C6430")]
	private void UpdateTouchKeyboardFromEditChanges()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x50C44A0", Offset = "0x50C44A0", VA = "0x50C44A0")]
	private void SendOnValueChangedAndUpdateLabel()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x50BFFA0", Offset = "0x50BFFA0", VA = "0x50BFFA0")]
	private void SendOnValueChanged()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x50C7DB0", Offset = "0x50C7DB0", VA = "0x50C7DB0")]
	protected void SendOnEndEdit()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x50C3D00", Offset = "0x50C3D00", VA = "0x50C3D00")]
	protected void SendOnSubmit()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x50C7E20", Offset = "0x50C7E20", VA = "0x50C7E20", Slot = "66")]
	protected virtual void Append(string input)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x50C7EC0", Offset = "0x50C7EC0", VA = "0x50C7EC0", Slot = "67")]
	protected virtual void Append(char input)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x50C0010", Offset = "0x50C0010", VA = "0x50C0010")]
	protected void UpdateLabel()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x50C94E0", Offset = "0x50C94E0", VA = "0x50C94E0")]
	private bool IsSelectionVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x50C9580", Offset = "0x50C9580", VA = "0x50C9580")]
	private static int GetLineStartPosition(TextGenerator gen, int line)
	{
		return default(int);
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x50C4E30", Offset = "0x50C4E30", VA = "0x50C4E30")]
	private static int GetLineEndPosition(TextGenerator gen, int line)
	{
		return default(int);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x50C8220", Offset = "0x50C8220", VA = "0x50C8220")]
	private void SetDrawRangeToContainCaretPosition(int caretPos)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x50C96E0", Offset = "0x50C96E0", VA = "0x50C96E0")]
	public void ForceLabelUpdate()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x50C0890", Offset = "0x50C0890", VA = "0x50C0890")]
	private void MarkGeometryAsDirty()
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x50C96F0", Offset = "0x50C96F0", VA = "0x50C96F0", Slot = "68")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x50C9C10", Offset = "0x50C9C10", VA = "0x50C9C10", Slot = "69")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x50C9C20", Offset = "0x50C9C20", VA = "0x50C9C20", Slot = "70")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x50C9700", Offset = "0x50C9700", VA = "0x50C9700")]
	private void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x50C36A0", Offset = "0x50C36A0", VA = "0x50C36A0")]
	private void AssignPositioningIfNeeded()
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x50C9C30", Offset = "0x50C9C30", VA = "0x50C9C30")]
	private void OnFillVBO(Mesh vbo)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x50C9F20", Offset = "0x50C9F20", VA = "0x50C9F20")]
	private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x50CB2E0", Offset = "0x50CB2E0", VA = "0x50CB2E0")]
	private void CreateCursorVerts()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x50CA7D0", Offset = "0x50CA7D0", VA = "0x50CA7D0")]
	private void GenerateHighlight(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x50C3D70", Offset = "0x50C3D70", VA = "0x50C3D70")]
	protected char Validate(string text, int pos, char ch)
	{
		return default(char);
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x50CB4A0", Offset = "0x50CB4A0", VA = "0x50CB4A0")]
	public void ActivateInputField()
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x50C3210", Offset = "0x50C3210", VA = "0x50C3210")]
	private void ActivateInputFieldInternal()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x50CB5D0", Offset = "0x50CB5D0", VA = "0x50CB5D0", Slot = "36")]
	public override void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x50CB600", Offset = "0x50CB600", VA = "0x50CB600", Slot = "71")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x50C1E50", Offset = "0x50C1E50", VA = "0x50C1E50")]
	public void DeactivateInputField()
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x50CB620", Offset = "0x50CB620", VA = "0x50CB620", Slot = "37")]
	public override void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x50CB650", Offset = "0x50CB650", VA = "0x50CB650", Slot = "72")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x50C11F0", Offset = "0x50C11F0", VA = "0x50C11F0")]
	private void EnforceContentType()
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x50BF7A0", Offset = "0x50BF7A0", VA = "0x50BF7A0")]
	private void EnforceTextHOverflow()
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x50C13C0", Offset = "0x50C13C0", VA = "0x50C13C0")]
	private void SetToCustomIfContentTypeIsNot(params ContentType[] allowedContentTypes)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x50C1480", Offset = "0x50C1480", VA = "0x50C1480")]
	private void SetToCustom()
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x50CB6A0", Offset = "0x50CB6A0", VA = "0x50CB6A0", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x50CB6D0", Offset = "0x50CB6D0", VA = "0x50CB6D0", Slot = "73")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x50CB6E0", Offset = "0x50CB6E0", VA = "0x50CB6E0", Slot = "74")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x50CBC80", Offset = "0x50CBC80", VA = "0x50CBC80", Slot = "46")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
