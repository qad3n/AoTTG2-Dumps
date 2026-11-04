// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.InputField
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
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Token(Token = "0x200002C")]
[AddComponentMenu("UI (Canvas)/Legacy/Input Field", 103)]
[UnityEngine.UGUIHelpURL("InputField")]
public class InputField : Selectable, IUpdateSelectedHandler, IEventSystemHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerClickHandler, ISubmitHandler, ICanvasElement, ILayoutElement
{
	[Token(Token = "0x200002D")]
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

	[Token(Token = "0x200002E")]
	public enum InputType
	{
		[Token(Token = "0x400010E")]
		Standard,
		[Token(Token = "0x400010F")]
		AutoCorrect,
		[Token(Token = "0x4000110")]
		Password
	}

	[Token(Token = "0x200002F")]
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

	[Token(Token = "0x2000030")]
	public enum LineType
	{
		[Token(Token = "0x4000119")]
		SingleLine,
		[Token(Token = "0x400011A")]
		MultiLineSubmit,
		[Token(Token = "0x400011B")]
		MultiLineNewline
	}

	[Token(Token = "0x2000031")]
	public delegate char OnValidateInput(string text, int charIndex, char addedChar);

	[Serializable]
	[Token(Token = "0x2000032")]
	public class SubmitEvent : UnityEvent<string>
	{
		[Token(Token = "0x600023D")]
		[Address(RVA = "0x32D8A80", Offset = "0x32D7080", VA = "0x1832D8A80")]
		public SubmitEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000033")]
	public class EndEditEvent : UnityEvent<string>
	{
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x32C4080", Offset = "0x32C2680", VA = "0x1832C4080")]
		public EndEditEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000034")]
	public class OnChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x600023F")]
		[Address(RVA = "0x32D8A40", Offset = "0x32D7040", VA = "0x1832D8A40")]
		public OnChangeEvent()
		{
		}
	}

	[Token(Token = "0x2000035")]
	protected enum EditState
	{
		[Token(Token = "0x400011D")]
		Continue,
		[Token(Token = "0x400011E")]
		Finish
	}

	[Token(Token = "0x2000036")]
	[CompilerGenerated]
	private sealed class _003CCaretBlink_003Ed__173 : IEnumerator<object>, IEnumerator, IDisposable
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

		[Token(Token = "0x17000095")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000243")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000096")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000245")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000240")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CCaretBlink_003Ed__173(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000242")]
		[Address(RVA = "0x32D8AC0", Offset = "0x32D70C0", VA = "0x1832D8AC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x32D8C10", Offset = "0x32D7210", VA = "0x1832D8C10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000037")]
	[CompilerGenerated]
	private sealed class _003CMouseDragOutsideRect_003Ed__201 : IEnumerator<object>, IEnumerator, IDisposable
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

		[Token(Token = "0x17000097")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000249")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000098")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600024B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CMouseDragOutsideRect_003Ed__201(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000247")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000248")]
		[Address(RVA = "0x32D8D20", Offset = "0x32D7320", VA = "0x1832D8D20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600024A")]
		[Address(RVA = "0x32D91C0", Offset = "0x32D77C0", VA = "0x1832D91C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x100")]
	protected TouchScreenKeyboard m_Keyboard;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] kSeparators;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x8")]
	private static bool s_IsQuestDevice;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	[FormerlySerializedAs("text")]
	protected Text m_TextComponent;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	protected Graphic m_Placeholder;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private ContentType m_ContentType;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x11C")]
	[FormerlySerializedAs("inputType")]
	[SerializeField]
	private InputType m_InputType;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x120")]
	[FormerlySerializedAs("asteriskChar")]
	[SerializeField]
	private char m_AsteriskChar;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x124")]
	[FormerlySerializedAs("keyboardType")]
	[SerializeField]
	private TouchScreenKeyboardType m_KeyboardType;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	private LineType m_LineType;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x12C")]
	[FormerlySerializedAs("hideMobileInput")]
	[SerializeField]
	private bool m_HideMobileInput;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x130")]
	[FormerlySerializedAs("validation")]
	[SerializeField]
	private CharacterValidation m_CharacterValidation;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x134")]
	[FormerlySerializedAs("characterLimit")]
	[SerializeField]
	private int m_CharacterLimit;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x138")]
	[FormerlySerializedAs("onSubmit")]
	[FormerlySerializedAs("m_OnSubmit")]
	[FormerlySerializedAs("m_EndEdit")]
	[FormerlySerializedAs("m_OnEndEdit")]
	[SerializeField]
	private SubmitEvent m_OnSubmit;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	private EndEditEvent m_OnDidEndEdit;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x148")]
	[FormerlySerializedAs("onValueChange")]
	[FormerlySerializedAs("m_OnValueChange")]
	[SerializeField]
	private OnChangeEvent m_OnValueChanged;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x150")]
	[FormerlySerializedAs("onValidateInput")]
	[SerializeField]
	private OnValidateInput m_OnValidateInput;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x158")]
	[FormerlySerializedAs("selectionColor")]
	[SerializeField]
	private Color m_CaretColor;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x168")]
	[SerializeField]
	private bool m_CustomCaretColor;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x16C")]
	[SerializeField]
	private Color m_SelectionColor;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x180")]
	[SerializeField]
	[Multiline]
	[FormerlySerializedAs("mValue")]
	protected string m_Text;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x188")]
	[SerializeField]
	[Range(0f, 4f)]
	private float m_CaretBlinkRate;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x18C")]
	[SerializeField]
	[Range(1f, 5f)]
	private int m_CaretWidth;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x190")]
	[SerializeField]
	private bool m_ReadOnly;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x191")]
	[SerializeField]
	private bool m_ShouldActivateOnSelect;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x194")]
	protected int m_CaretPosition;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x198")]
	protected int m_CaretSelectPosition;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x1A0")]
	private RectTransform caretRectTrans;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x1A8")]
	protected UIVertex[] m_CursorVerts;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x1B0")]
	private TextGenerator m_InputTextCache;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x1B8")]
	private CanvasRenderer m_CachedInputRenderer;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x1C0")]
	private bool m_PreventFontCallback;

	[NonSerialized]
	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x1C8")]
	protected Mesh m_Mesh;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x1D0")]
	private bool m_AllowInput;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x1D1")]
	private bool m_ShouldActivateNextUpdate;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x1D2")]
	private bool m_UpdateDrag;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x1D3")]
	private bool m_DragPositionOutOfBounds;

	[Token(Token = "0x40000ED")]
	private const float kHScrollSpeed = 0.05f;

	[Token(Token = "0x40000EE")]
	private const float kVScrollSpeed = 0.1f;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0xC")]
	private static readonly RangeInt k_KeyboardSelectionResetValue;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x1D4")]
	protected bool m_CaretVisible;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x1D8")]
	private Coroutine m_BlinkCoroutine;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x1E0")]
	private float m_BlinkStartTime;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x1E4")]
	protected int m_DrawStart;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x1E8")]
	protected int m_DrawEnd;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x1F0")]
	private Coroutine m_DragCoroutine;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x1F8")]
	private string m_OriginalText;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x200")]
	private bool m_WasCanceled;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x201")]
	private bool m_HasDoneFocusTransition;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x208")]
	private WaitForSecondsRealtime m_WaitForSecondsRealtime;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x210")]
	private bool m_TouchKeyboardAllowsInPlaceEditing;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x211")]
	private bool m_IsCompositionActive;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x212")]
	private bool m_UpdateCaretToKeyboardPending;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x214")]
	private RangeInt m_LastSyncedToKeyboard;

	[Token(Token = "0x40000FE")]
	private const string kEmailSpecialCharacters = "!#$%&'*+-/=?^_`{|}~";

	[Token(Token = "0x40000FF")]
	private const string kOculusQuestDeviceModel = "Oculus Quest";

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x220")]
	private Event m_ProcessingEvent;

	[Token(Token = "0x4000101")]
	private const int k_MaxTextLength = 16382;

	[Token(Token = "0x17000068")]
	private BaseInput input
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x32D0670", Offset = "0x32CEC70", VA = "0x1832D0670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	private string compositionString
	{
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x32D05B0", Offset = "0x32CEBB0", VA = "0x1832D05B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006A")]
	protected Mesh mesh
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x32D0790", Offset = "0x32CED90", VA = "0x1832D0790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006B")]
	protected TextGenerator cachedInputTextGenerator
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x32D0410", Offset = "0x32CEA10", VA = "0x1832D0410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006C")]
	public bool shouldHideMobileInput
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x32D0CA0", Offset = "0x32CF2A0", VA = "0x1832D0CA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x32D1950", Offset = "0x32CFF50", VA = "0x1832D1950")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public virtual bool shouldActivateOnSelect
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x32D0C40", Offset = "0x32CF240", VA = "0x1832D0C40", Slot = "60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x32D1940", Offset = "0x32CFF40", VA = "0x1832D1940", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public string text
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x2BFBE80", Offset = "0x2BFA480", VA = "0x182BFBE80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x32D1C40", Offset = "0x32D0240", VA = "0x1832D1C40")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool isFocused
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x32D0770", Offset = "0x32CED70", VA = "0x1832D0770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	public float caretBlinkRate
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x32D0490", Offset = "0x32CEA90", VA = "0x1832D0490")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x32D0D70", Offset = "0x32CF370", VA = "0x1832D0D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public int caretWidth
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x32D0560", Offset = "0x32CEB60", VA = "0x1832D0560")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x32D0FE0", Offset = "0x32CF5E0", VA = "0x1832D0FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public Text textComponent
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x32D19A0", Offset = "0x32CFFA0", VA = "0x1832D19A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public Graphic placeholder
	{
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x32D1780", Offset = "0x32CFD80", VA = "0x1832D1780")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public Color caretColor
	{
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x32D04A0", Offset = "0x32CEAA0", VA = "0x1832D04A0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x32D0DE0", Offset = "0x32CF3E0", VA = "0x1832D0DE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool customCaretColor
	{
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x32D0650", Offset = "0x32CEC50", VA = "0x1832D0650")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x32D1420", Offset = "0x32CFA20", VA = "0x1832D1420")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public Color selectionColor
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x32D0C30", Offset = "0x32CF230", VA = "0x1832D0C30")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x32D1850", Offset = "0x32CFE50", VA = "0x1832D1850")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public EndEditEvent onEndEdit
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x1D1FA50", Offset = "0x1D1E050", VA = "0x181D1FA50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x32D1640", Offset = "0x32CFC40", VA = "0x1832D1640")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public SubmitEvent onSubmit
	{
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0xA29AC0", Offset = "0xA280C0", VA = "0x180A29AC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x32D1690", Offset = "0x32CFC90", VA = "0x1832D1690")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	[Obsolete("onValueChange has been renamed to onValueChanged")]
	public OnChangeEvent onValueChange
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0xA29A50", Offset = "0xA28050", VA = "0x180A29A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x32D1730", Offset = "0x32CFD30", VA = "0x1832D1730")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public OnChangeEvent onValueChanged
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0xA29A50", Offset = "0xA28050", VA = "0x180A29A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x32D1730", Offset = "0x32CFD30", VA = "0x1832D1730")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public OnValidateInput onValidateInput
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x27E5890", Offset = "0x27E3E90", VA = "0x1827E5890")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x32D16E0", Offset = "0x32CFCE0", VA = "0x1832D16E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public int characterLimit
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x27E5560", Offset = "0x27E3B60", VA = "0x1827E5560")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x32D1070", Offset = "0x32CF670", VA = "0x1832D1070")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public ContentType contentType
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x1D1FB90", Offset = "0x1D1E190", VA = "0x181D1FB90")]
		get
		{
			return default(ContentType);
		}
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x32D11E0", Offset = "0x32CF7E0", VA = "0x1832D11E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public LineType lineType
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x306D0C0", Offset = "0x306B6C0", VA = "0x18306D0C0")]
		get
		{
			return default(LineType);
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x32D1560", Offset = "0x32CFB60", VA = "0x1832D1560")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public InputType inputType
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x1D1FB80", Offset = "0x1D1E180", VA = "0x181D1FB80")]
		get
		{
			return default(InputType);
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x32D1480", Offset = "0x32CFA80", VA = "0x1832D1480")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public TouchScreenKeyboard touchScreenKeyboard
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x32D0780", Offset = "0x32CED80", VA = "0x1832D0780")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x32D14F0", Offset = "0x32CFAF0", VA = "0x1832D14F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public CharacterValidation characterValidation
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x2CE6A30", Offset = "0x2CE5030", VA = "0x182CE6A30")]
		get
		{
			return default(CharacterValidation);
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x32D1120", Offset = "0x32CF720", VA = "0x1832D1120")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public bool readOnly
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x27E58D0", Offset = "0x27E3ED0", VA = "0x1827E58D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x27E5D40", Offset = "0x27E4340", VA = "0x1827E5D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public bool multiLine
	{
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x32D0840", Offset = "0x32CEE40", VA = "0x1832D0840")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000085")]
	public char asteriskChar
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x32D0400", Offset = "0x32CEA00", VA = "0x1832D0400")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x32D0D10", Offset = "0x32CF310", VA = "0x1832D0D10")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public bool wasCanceled
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x32D0D00", Offset = "0x32CF300", VA = "0x1832D0D00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000087")]
	protected int caretPositionInternal
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x32D0500", Offset = "0x32CEB00", VA = "0x1832D0500")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x32D0E50", Offset = "0x32CF450", VA = "0x1832D0E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	protected int caretSelectPositionInternal
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x32D0530", Offset = "0x32CEB30", VA = "0x1832D0530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x32D0F80", Offset = "0x32CF580", VA = "0x1832D0F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	private bool hasSelection
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x32D0660", Offset = "0x32CEC60", VA = "0x1832D0660")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008A")]
	public int caretPosition
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x32D0530", Offset = "0x32CEB30", VA = "0x1832D0530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x32D0EB0", Offset = "0x32CF4B0", VA = "0x1832D0EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public int selectionAnchorPosition
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x32D0500", Offset = "0x32CEB00", VA = "0x1832D0500")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x32D17D0", Offset = "0x32CFDD0", VA = "0x1832D17D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int selectionFocusPosition
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x32D0530", Offset = "0x32CEB30", VA = "0x1832D0530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x32D18C0", Offset = "0x32CFEC0", VA = "0x1832D18C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	private static string clipboard
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x32D0570", Offset = "0x32CEB70", VA = "0x1832D0570")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x32D1190", Offset = "0x32CF790", VA = "0x1832D1190")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public virtual float minWidth
	{
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x18B56E0", Offset = "0x18B3CE0", VA = "0x1818B56E0", Slot = "75")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700008F")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x32D0A60", Offset = "0x32CF060", VA = "0x1832D0A60", Slot = "76")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000090")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "77")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000091")]
	public virtual float minHeight
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000092")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x32D0860", Offset = "0x32CEE60", VA = "0x1832D0860", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000093")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000094")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x6000236")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "81")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x32D0150", Offset = "0x32CE750", VA = "0x1832D0150")]
	protected InputField()
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x32CE3D0", Offset = "0x32CC9D0", VA = "0x1832CE3D0")]
	public void SetTextWithoutNotify(string input)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x32CE3E0", Offset = "0x32CC9E0", VA = "0x1832CE3E0")]
	private void SetText(string value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x32C7530", Offset = "0x32C5B30", VA = "0x1832C7530")]
	protected void ClampPos(ref int pos)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x32CC9A0", Offset = "0x32CAFA0", VA = "0x1832CC9A0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x32CC440", Offset = "0x32CAA40", VA = "0x1832CC440", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x32CC3E0", Offset = "0x32CA9E0", VA = "0x1832CC3E0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x32C74C0", Offset = "0x32C5AC0", VA = "0x1832C74C0")]
	[IteratorStateMachine(typeof(_003CCaretBlink_003Ed__173))]
	private IEnumerator CaretBlink()
	{
		return null;
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x32CDB30", Offset = "0x32CC130", VA = "0x1832CDB30")]
	private void SetCaretVisible()
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x32CDA70", Offset = "0x32CC070", VA = "0x1832CDA70")]
	private void SetCaretActive()
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x32CEBF0", Offset = "0x32CD1F0", VA = "0x1832CEBF0")]
	private void UpdateCaretMaterial()
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x32CCDF0", Offset = "0x32CB3F0", VA = "0x1832CCDF0")]
	protected void OnFocus()
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x32CD840", Offset = "0x32CBE40", VA = "0x1832CD840")]
	protected void SelectAll()
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x32CBEF0", Offset = "0x32CA4F0", VA = "0x1832CBEF0")]
	public void MoveTextEnd(bool shift)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x32CC010", Offset = "0x32CA610", VA = "0x1832CC010")]
	public void MoveTextStart(bool shift)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x32CE8C0", Offset = "0x32CCEC0", VA = "0x1832CE8C0")]
	private bool TouchScreenKeyboardShouldBeUsed()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x32C9F50", Offset = "0x32C8550", VA = "0x1832C9F50")]
	private bool InPlaceEditing()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x32C9ED0", Offset = "0x32C84D0", VA = "0x1832C9ED0")]
	private bool InPlaceEditingChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x32C9850", Offset = "0x32C7E50", VA = "0x1832C9850")]
	private RangeInt GetInternalSelection()
	{
		return default(RangeInt);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x32D0050", Offset = "0x32CE650", VA = "0x1832D0050")]
	private static int VisualToRawPosition(int visualPos, int compositionRawStart, int compositionLength)
	{
		return default(int);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x32CD2F0", Offset = "0x32CB8F0", VA = "0x1832CD2F0")]
	private static int RawToVisualPosition(int rawPos, int compositionRawStart, int compositionLength)
	{
		return default(int);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x32CED00", Offset = "0x32CD300", VA = "0x1832CED00")]
	private void UpdateCaretToKeyboard()
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x32CB580", Offset = "0x32C9B80", VA = "0x1832CB580")]
	private void MarkCaretToKeyboardDirty()
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x32CF340", Offset = "0x32CD940", VA = "0x1832CF340")]
	private void UpdateKeyboardCaret()
	{
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x32CE970", Offset = "0x32CCF70", VA = "0x1832CE970")]
	private void UpdateCaretFromKeyboard()
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x32CAA70", Offset = "0x32C9070", VA = "0x1832CAA70", Slot = "61")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x32CD320", Offset = "0x32CB920", VA = "0x1832CD320")]
	[Obsolete("This function is no longer used. Please use RectTransformUtility.ScreenPointToLocalPointInRectangle() instead.")]
	public Vector2 ScreenToLocal(Vector2 screen)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x32C9C80", Offset = "0x32C8280", VA = "0x1832C9C80")]
	private int GetUnclampedCharacterLineFromPosition(Vector2 pos, TextGenerator generator)
	{
		return default(int);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x32C9610", Offset = "0x32C7C10", VA = "0x1832C9610")]
	protected int GetCharacterIndexFromPosition(Vector2 pos)
	{
		return default(int);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x32CB5E0", Offset = "0x32C9BE0", VA = "0x1832CB5E0")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x32CC340", Offset = "0x32CA940", VA = "0x1832CC340", Slot = "62")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x32CC6C0", Offset = "0x32CACC0", VA = "0x1832CC6C0", Slot = "63")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x32CB6C0", Offset = "0x32C9CC0", VA = "0x1832CB6C0")]
	[IteratorStateMachine(typeof(_003CMouseDragOutsideRect_003Ed__201))]
	private IEnumerator MouseDragOutsideRect(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x32CCC10", Offset = "0x32CB210", VA = "0x1832CCC10", Slot = "64")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x32CCE30", Offset = "0x32CB430", VA = "0x1832CCE30", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x32CA250", Offset = "0x32C8850", VA = "0x1832CA250")]
	protected EditState KeyPressed(Event evt)
	{
		return default(EditState);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x32CA1F0", Offset = "0x32C87F0", VA = "0x1832CA1F0")]
	private bool IsValidChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x32CD2E0", Offset = "0x32CB8E0", VA = "0x1832CD2E0")]
	public void ProcessEvent(Event e)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x32CD110", Offset = "0x32CB710", VA = "0x1832CD110", Slot = "65")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x32C9BB0", Offset = "0x32C81B0", VA = "0x1832C9BB0")]
	private string GetSelectedString()
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x32C8070", Offset = "0x32C6670", VA = "0x1832C8070")]
	private int FindtNextWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x32CBC30", Offset = "0x32CA230", VA = "0x1832CBC30")]
	private void MoveRight(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x32C8170", Offset = "0x32C6770", VA = "0x1832C8170")]
	private int FindtPrevWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x32CB980", Offset = "0x32C9F80", VA = "0x1832CB980")]
	private void MoveLeft(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x32C7C70", Offset = "0x32C6270", VA = "0x1832C7C70")]
	private int DetermineCharacterLine(int charPos, TextGenerator generator)
	{
		return default(int);
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x32CB370", Offset = "0x32C9970", VA = "0x1832CB370")]
	private int LineUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x32CB160", Offset = "0x32C9760", VA = "0x1832CB160")]
	private int LineDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x32CB970", Offset = "0x32C9F70", VA = "0x1832CB970")]
	private void MoveDown(bool shift)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x32CB750", Offset = "0x32C9D50", VA = "0x1832CB750")]
	private void MoveDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x32CC110", Offset = "0x32CA710", VA = "0x1832CC110")]
	private void MoveUp(bool shift)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x32CC120", Offset = "0x32CA720", VA = "0x1832CC120")]
	private void MoveUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x32C7990", Offset = "0x32C5F90", VA = "0x1832C7990")]
	private void Delete()
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x32C8270", Offset = "0x32C6870", VA = "0x1832C8270")]
	private void ForwardSpace()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x32C7330", Offset = "0x32C5930", VA = "0x1832C7330")]
	private void Backspace()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x32C9F80", Offset = "0x32C8580", VA = "0x1832C9F80")]
	private void Insert(char c)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x32CF8E0", Offset = "0x32CDEE0", VA = "0x1832CF8E0")]
	private void UpdateTouchKeyboardFromEditChanges()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x32CD9D0", Offset = "0x32CBFD0", VA = "0x1832CD9D0")]
	private void SendOnValueChangedAndUpdateLabel()
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x32CD9F0", Offset = "0x32CBFF0", VA = "0x1832CD9F0")]
	private void SendOnValueChanged()
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x32CD8D0", Offset = "0x32CBED0", VA = "0x1832CD8D0")]
	protected void SendOnEndEdit()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x32CD950", Offset = "0x32CBF50", VA = "0x1832CD950")]
	protected void SendOnSubmit()
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x32C6B00", Offset = "0x32C5100", VA = "0x1832C6B00", Slot = "66")]
	protected virtual void Append(string input)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x32C65E0", Offset = "0x32C4BE0", VA = "0x1832C65E0", Slot = "67")]
	protected virtual void Append(char input)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x32CF3D0", Offset = "0x32CD9D0", VA = "0x1832CF3D0")]
	protected void UpdateLabel()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x32CA120", Offset = "0x32C8720", VA = "0x1832CA120")]
	private bool IsSelectionVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x32C9A80", Offset = "0x32C8080", VA = "0x1832C9A80")]
	private static int GetLineStartPosition(TextGenerator gen, int line)
	{
		return default(int);
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x32C9950", Offset = "0x32C7F50", VA = "0x1832C9950")]
	private static int GetLineEndPosition(TextGenerator gen, int line)
	{
		return default(int);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x32CDB70", Offset = "0x32CC170", VA = "0x1832CDB70")]
	private void SetDrawRangeToContainCaretPosition(int caretPos)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x32C8260", Offset = "0x32C6860", VA = "0x1832C8260")]
	public void ForceLabelUpdate()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x32CB590", Offset = "0x32C9B90", VA = "0x1832CB590")]
	private void MarkGeometryAsDirty()
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x32CD310", Offset = "0x32CB910", VA = "0x1832CD310", Slot = "68")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "69")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "70")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x32CEE70", Offset = "0x32CD470", VA = "0x1832CEE70")]
	private void UpdateGeometry()
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x32C6BB0", Offset = "0x32C51B0", VA = "0x1832C6BB0")]
	private void AssignPositioningIfNeeded()
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x32CCC40", Offset = "0x32CB240", VA = "0x1832CCC40")]
	private void OnFillVBO(Mesh vbo)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x32C8390", Offset = "0x32C6990", VA = "0x1832C8390")]
	private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x32C7570", Offset = "0x32C5B70", VA = "0x1832C7570")]
	private void CreateCursorVerts()
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x32C8EA0", Offset = "0x32C74A0", VA = "0x1832C8EA0")]
	private void GenerateHighlight(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x32CF940", Offset = "0x32CDF40", VA = "0x1832CF940")]
	protected char Validate(string text, int pos, char ch)
	{
		return default(char);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x32C64A0", Offset = "0x32C4AA0", VA = "0x1832C64A0")]
	public void ActivateInputField()
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x32C6070", Offset = "0x32C4670", VA = "0x1832C6070")]
	private void ActivateInputFieldInternal()
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x32CD080", Offset = "0x32CB680", VA = "0x1832CD080", Slot = "36")]
	public override void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x32CCE00", Offset = "0x32CB400", VA = "0x1832CCE00", Slot = "71")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x32C7740", Offset = "0x32C5D40", VA = "0x1832C7740")]
	public void DeactivateInputField()
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x32CC370", Offset = "0x32CA970", VA = "0x1832CC370", Slot = "37")]
	public override void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x32CD0C0", Offset = "0x32CB6C0", VA = "0x1832CD0C0", Slot = "72")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x32C7DC0", Offset = "0x32C63C0", VA = "0x1832C7DC0")]
	private void EnforceContentType()
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x32C7FC0", Offset = "0x32C65C0", VA = "0x1832C7FC0")]
	private void EnforceTextHOverflow()
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x32CE830", Offset = "0x32CCE30", VA = "0x1832CE830")]
	private void SetToCustomIfContentTypeIsNot(params ContentType[] allowedContentTypes)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x32CE8A0", Offset = "0x32CCEA0", VA = "0x1832CE8A0")]
	private void SetToCustom()
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x32C7D80", Offset = "0x32C6380", VA = "0x1832C7D80", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "73")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "74")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x2D057F0", Offset = "0x2D03DF0", VA = "0x182D057F0", Slot = "46")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
