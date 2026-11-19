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
		[Address(RVA = "0x6CCECC0", Offset = "0x6CCDCC0", VA = "0x6CCECC0")]
		public SubmitEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000033")]
	public class EndEditEvent : UnityEvent<string>
	{
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x6CCED00", Offset = "0x6CCDD00", VA = "0x6CCED00")]
		public EndEditEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000034")]
	public class OnChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x600023F")]
		[Address(RVA = "0x6CCED40", Offset = "0x6CCDD40", VA = "0x6CCED40")]
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
			[Address(RVA = "0x6CDBDC0", Offset = "0x6CDADC0", VA = "0x6CDBDC0", Slot = "4")]
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
			[Address(RVA = "0x6CDBE10", Offset = "0x6CDAE10", VA = "0x6CDBE10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000240")]
		[Address(RVA = "0x6CD1C20", Offset = "0x6CD0C20", VA = "0x6CD1C20")]
		[DebuggerHidden]
		public _003CCaretBlink_003Ed__173(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x6CDBC30", Offset = "0x6CDAC30", VA = "0x6CDBC30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000242")]
		[Address(RVA = "0x6CDBC40", Offset = "0x6CDAC40", VA = "0x6CDBC40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x6CDBDD0", Offset = "0x6CDADD0", VA = "0x6CDBDD0", Slot = "8")]
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
			[Address(RVA = "0x6CDC290", Offset = "0x6CDB290", VA = "0x6CDC290", Slot = "4")]
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
			[Address(RVA = "0x6CDC2E0", Offset = "0x6CDB2E0", VA = "0x6CDC2E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x6CD50E0", Offset = "0x6CD40E0", VA = "0x6CD50E0")]
		[DebuggerHidden]
		public _003CMouseDragOutsideRect_003Ed__201(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000247")]
		[Address(RVA = "0x6CDBE20", Offset = "0x6CDAE20", VA = "0x6CDBE20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000248")]
		[Address(RVA = "0x6CDBE30", Offset = "0x6CDAE30", VA = "0x6CDBE30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600024A")]
		[Address(RVA = "0x6CDC2A0", Offset = "0x6CDB2A0", VA = "0x6CDC2A0", Slot = "8")]
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
		[Address(RVA = "0x6CCE8C0", Offset = "0x6CCD8C0", VA = "0x6CCE8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	private string compositionString
	{
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x6CCE9C0", Offset = "0x6CCD9C0", VA = "0x6CCE9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006A")]
	protected Mesh mesh
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x6CCEE10", Offset = "0x6CCDE10", VA = "0x6CCEE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006B")]
	protected TextGenerator cachedInputTextGenerator
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x6CCEEB0", Offset = "0x6CCDEB0", VA = "0x6CCEEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006C")]
	public bool shouldHideMobileInput
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x6CCEF80", Offset = "0x6CCDF80", VA = "0x6CCEF80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x6CCEF30", Offset = "0x6CCDF30", VA = "0x6CCEF30")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public virtual bool shouldActivateOnSelect
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x6CCEFF0", Offset = "0x6CCDFF0", VA = "0x6CCEFF0", Slot = "60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x6CCEFE0", Offset = "0x6CCDFE0", VA = "0x6CCEFE0", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public string text
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x6CCF050", Offset = "0x6CCE050", VA = "0x6CCF050")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x6CCF060", Offset = "0x6CCE060", VA = "0x6CCF060")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool isFocused
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x6CCFBC0", Offset = "0x6CCEBC0", VA = "0x6CCFBC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	public float caretBlinkRate
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x6CCFBD0", Offset = "0x6CCEBD0", VA = "0x6CCFBD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x6CCFBE0", Offset = "0x6CCEBE0", VA = "0x6CCFBE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public int caretWidth
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x6CCFD10", Offset = "0x6CCED10", VA = "0x6CCFD10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x6CCFD20", Offset = "0x6CCED20", VA = "0x6CCFD20")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public Text textComponent
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x6CCFE20", Offset = "0x6CCEE20", VA = "0x6CCFE20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x6CCFE30", Offset = "0x6CCEE30", VA = "0x6CCFE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public Graphic placeholder
	{
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x6CD00E0", Offset = "0x6CCF0E0", VA = "0x6CD00E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x6CD00F0", Offset = "0x6CCF0F0", VA = "0x6CD00F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public Color caretColor
	{
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x6CD0140", Offset = "0x6CCF140", VA = "0x6CD0140")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x6CD0180", Offset = "0x6CCF180", VA = "0x6CD0180")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool customCaretColor
	{
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x6CD0200", Offset = "0x6CCF200", VA = "0x6CD0200")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x6CD0210", Offset = "0x6CCF210", VA = "0x6CD0210")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public Color selectionColor
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x6CD0290", Offset = "0x6CCF290", VA = "0x6CD0290")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x6CD02B0", Offset = "0x6CCF2B0", VA = "0x6CD02B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public EndEditEvent onEndEdit
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x6CD0330", Offset = "0x6CCF330", VA = "0x6CD0330")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x6CD0340", Offset = "0x6CCF340", VA = "0x6CD0340")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public SubmitEvent onSubmit
	{
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x6CD0390", Offset = "0x6CCF390", VA = "0x6CD0390")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x6CD03A0", Offset = "0x6CCF3A0", VA = "0x6CD03A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	[Obsolete("onValueChange has been renamed to onValueChanged")]
	public OnChangeEvent onValueChange
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x6CD03F0", Offset = "0x6CCF3F0", VA = "0x6CD03F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x6CD0400", Offset = "0x6CCF400", VA = "0x6CD0400")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public OnChangeEvent onValueChanged
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x6CD04A0", Offset = "0x6CCF4A0", VA = "0x6CD04A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x6CD0450", Offset = "0x6CCF450", VA = "0x6CD0450")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public OnValidateInput onValidateInput
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x6CD04B0", Offset = "0x6CCF4B0", VA = "0x6CD04B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x6CD04C0", Offset = "0x6CCF4C0", VA = "0x6CD04C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public int characterLimit
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x6CD0510", Offset = "0x6CCF510", VA = "0x6CD0510")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x6CD0520", Offset = "0x6CCF520", VA = "0x6CD0520")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public ContentType contentType
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x6CD05C0", Offset = "0x6CCF5C0", VA = "0x6CD05C0")]
		get
		{
			return default(ContentType);
		}
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x6CD05D0", Offset = "0x6CCF5D0", VA = "0x6CD05D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public LineType lineType
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x6CD0820", Offset = "0x6CCF820", VA = "0x6CD0820")]
		get
		{
			return default(LineType);
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x6CD0830", Offset = "0x6CCF830", VA = "0x6CD0830")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public InputType inputType
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x6CD0A60", Offset = "0x6CCFA60", VA = "0x6CD0A60")]
		get
		{
			return default(InputType);
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x6CD0A70", Offset = "0x6CCFA70", VA = "0x6CD0A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public TouchScreenKeyboard touchScreenKeyboard
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x6CD0D50", Offset = "0x6CCFD50", VA = "0x6CD0D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x6CD0D60", Offset = "0x6CCFD60", VA = "0x6CD0D60")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x6CD0D70", Offset = "0x6CCFD70", VA = "0x6CD0D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public CharacterValidation characterValidation
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x6CD0F00", Offset = "0x6CCFF00", VA = "0x6CD0F00")]
		get
		{
			return default(CharacterValidation);
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x6CD0F10", Offset = "0x6CCFF10", VA = "0x6CD0F10")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public bool readOnly
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x6CD10A0", Offset = "0x6CD00A0", VA = "0x6CD10A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x6CD10B0", Offset = "0x6CD00B0", VA = "0x6CD10B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public bool multiLine
	{
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x6CD10C0", Offset = "0x6CD00C0", VA = "0x6CD10C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000085")]
	public char asteriskChar
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x6CD10D0", Offset = "0x6CD00D0", VA = "0x6CD10D0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x6CD10E0", Offset = "0x6CD00E0", VA = "0x6CD10E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public bool wasCanceled
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x6CD1140", Offset = "0x6CD0140", VA = "0x6CD1140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000087")]
	protected int caretPositionInternal
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x6CD1180", Offset = "0x6CD0180", VA = "0x6CD1180")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x6CD11A0", Offset = "0x6CD01A0", VA = "0x6CD11A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	protected int caretSelectPositionInternal
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x6CD11F0", Offset = "0x6CD01F0", VA = "0x6CD11F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x6CD1210", Offset = "0x6CD0210", VA = "0x6CD1210")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	private bool hasSelection
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x6CD1250", Offset = "0x6CD0250", VA = "0x6CD1250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008A")]
	public int caretPosition
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x6CD1260", Offset = "0x6CD0260", VA = "0x6CD1260")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x6CD1280", Offset = "0x6CD0280", VA = "0x6CD1280")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public int selectionAnchorPosition
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x6CD13E0", Offset = "0x6CD03E0", VA = "0x6CD13E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x6CD1320", Offset = "0x6CD0320", VA = "0x6CD1320")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int selectionFocusPosition
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x6CD1400", Offset = "0x6CD0400", VA = "0x6CD1400")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x6CD1380", Offset = "0x6CD0380", VA = "0x6CD1380")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	private static string clipboard
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x6CD1F80", Offset = "0x6CD0F80", VA = "0x6CD1F80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x6CD1FE0", Offset = "0x6CD0FE0", VA = "0x6CD1FE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public virtual float minWidth
	{
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x6CDB680", Offset = "0x6CDA680", VA = "0x6CDB680", Slot = "75")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700008F")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x6CDB690", Offset = "0x6CDA690", VA = "0x6CDB690", Slot = "76")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000090")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x6CDB850", Offset = "0x6CDA850", VA = "0x6CDB850", Slot = "77")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000091")]
	public virtual float minHeight
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x6CDB860", Offset = "0x6CDA860", VA = "0x6CDB860", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000092")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x6CDB870", Offset = "0x6CDA870", VA = "0x6CDB870", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000093")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x6CDBA60", Offset = "0x6CDAA60", VA = "0x6CDBA60", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000094")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x6000236")]
		[Address(RVA = "0x6CDBA70", Offset = "0x6CDAA70", VA = "0x6CDBA70", Slot = "81")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x6CCEA40", Offset = "0x6CCDA40", VA = "0x6CCEA40")]
	protected InputField()
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x6CCF4B0", Offset = "0x6CCE4B0", VA = "0x6CCF4B0")]
	public void SetTextWithoutNotify(string input)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x6CCF070", Offset = "0x6CCE070", VA = "0x6CCF070")]
	private void SetText(string value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x6CD1150", Offset = "0x6CD0150", VA = "0x6CD1150")]
	protected void ClampPos(ref int pos)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x6CD1420", Offset = "0x6CD0420", VA = "0x6CD1420", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x6CD16B0", Offset = "0x6CD06B0", VA = "0x6CD16B0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x6CD1B60", Offset = "0x6CD0B60", VA = "0x6CD1B60", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x6CD1BB0", Offset = "0x6CD0BB0", VA = "0x6CD1BB0")]
	[IteratorStateMachine(typeof(_003CCaretBlink_003Ed__173))]
	private IEnumerator CaretBlink()
	{
		return null;
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x6CD1C40", Offset = "0x6CD0C40", VA = "0x6CD1C40")]
	private void SetCaretVisible()
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x6CCFC50", Offset = "0x6CCEC50", VA = "0x6CCFC50")]
	private void SetCaretActive()
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x6CD1C70", Offset = "0x6CD0C70", VA = "0x6CD1C70")]
	private void UpdateCaretMaterial()
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x6CD1D80", Offset = "0x6CD0D80", VA = "0x6CD1D80")]
	protected void OnFocus()
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x6CD1DE0", Offset = "0x6CD0DE0", VA = "0x6CD1DE0")]
	protected void SelectAll()
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x6CD1E40", Offset = "0x6CD0E40", VA = "0x6CD1E40")]
	public void MoveTextEnd(bool shift)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x6CD1ED0", Offset = "0x6CD0ED0", VA = "0x6CD1ED0")]
	public void MoveTextStart(bool shift)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x6CD2050", Offset = "0x6CD1050", VA = "0x6CD2050")]
	private bool TouchScreenKeyboardShouldBeUsed()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x6CD2110", Offset = "0x6CD1110", VA = "0x6CD2110")]
	private bool InPlaceEditing()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x6CD2130", Offset = "0x6CD1130", VA = "0x6CD2130")]
	private bool InPlaceEditingChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x6CD21D0", Offset = "0x6CD11D0", VA = "0x6CD21D0")]
	private RangeInt GetInternalSelection()
	{
		return default(RangeInt);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x6CD22F0", Offset = "0x6CD12F0", VA = "0x6CD22F0")]
	private static int VisualToRawPosition(int visualPos, int compositionRawStart, int compositionLength)
	{
		return default(int);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x6CD2310", Offset = "0x6CD1310", VA = "0x6CD2310")]
	private static int RawToVisualPosition(int rawPos, int compositionRawStart, int compositionLength)
	{
		return default(int);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x6CD2320", Offset = "0x6CD1320", VA = "0x6CD2320")]
	private void UpdateCaretToKeyboard()
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x6CD11E0", Offset = "0x6CD01E0", VA = "0x6CD11E0")]
	private void MarkCaretToKeyboardDirty()
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x6CD24A0", Offset = "0x6CD14A0", VA = "0x6CD24A0")]
	private void UpdateKeyboardCaret()
	{
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x6CD2540", Offset = "0x6CD1540", VA = "0x6CD2540")]
	private void UpdateCaretFromKeyboard()
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x6CD2810", Offset = "0x6CD1810", VA = "0x6CD2810", Slot = "61")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x6CD4180", Offset = "0x6CD3180", VA = "0x6CD4180")]
	[Obsolete("This function is no longer used. Please use RectTransformUtility.ScreenPointToLocalPointInRectangle() instead.")]
	public Vector2 ScreenToLocal(Vector2 screen)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x6CD45A0", Offset = "0x6CD35A0", VA = "0x6CD45A0")]
	private int GetUnclampedCharacterLineFromPosition(Vector2 pos, TextGenerator generator)
	{
		return default(int);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x6CD47D0", Offset = "0x6CD37D0", VA = "0x6CD47D0")]
	protected int GetCharacterIndexFromPosition(Vector2 pos)
	{
		return default(int);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x6CD4BE0", Offset = "0x6CD3BE0", VA = "0x6CD4BE0")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x6CD4CB0", Offset = "0x6CD3CB0", VA = "0x6CD4CB0", Slot = "62")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x6CD4CD0", Offset = "0x6CD3CD0", VA = "0x6CD4CD0", Slot = "63")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x6CD5060", Offset = "0x6CD4060", VA = "0x6CD5060")]
	[IteratorStateMachine(typeof(_003CMouseDragOutsideRect_003Ed__201))]
	private IEnumerator MouseDragOutsideRect(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x6CD5100", Offset = "0x6CD4100", VA = "0x6CD5100", Slot = "64")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x6CD5120", Offset = "0x6CD4120", VA = "0x6CD5120", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x6CD5410", Offset = "0x6CD4410", VA = "0x6CD5410")]
	protected EditState KeyPressed(Event evt)
	{
		return default(EditState);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x6CD6780", Offset = "0x6CD5780", VA = "0x6CD6780")]
	private bool IsValidChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x6CD67D0", Offset = "0x6CD57D0", VA = "0x6CD67D0")]
	public void ProcessEvent(Event e)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x6CD67E0", Offset = "0x6CD57E0", VA = "0x6CD67E0", Slot = "65")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x6CD5FD0", Offset = "0x6CD4FD0", VA = "0x6CD5FD0")]
	private string GetSelectedString()
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x6CD6A70", Offset = "0x6CD5A70", VA = "0x6CD6A70")]
	private int FindtNextWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x6CD6580", Offset = "0x6CD5580", VA = "0x6CD6580")]
	private void MoveRight(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x6CD6B40", Offset = "0x6CD5B40", VA = "0x6CD6B40")]
	private int FindtPrevWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x6CD63A0", Offset = "0x6CD53A0", VA = "0x6CD63A0")]
	private void MoveLeft(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x6CD6BF0", Offset = "0x6CD5BF0", VA = "0x6CD6BF0")]
	private int DetermineCharacterLine(int charPos, TextGenerator generator)
	{
		return default(int);
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x6CD6D10", Offset = "0x6CD5D10", VA = "0x6CD6D10")]
	private int LineUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x6CD72B0", Offset = "0x6CD62B0", VA = "0x6CD72B0")]
	private int LineDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x6CD6770", Offset = "0x6CD5770", VA = "0x6CD6770")]
	private void MoveDown(bool shift)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x6CD7800", Offset = "0x6CD6800", VA = "0x6CD7800")]
	private void MoveDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x6CD6760", Offset = "0x6CD5760", VA = "0x6CD6760")]
	private void MoveUp(bool shift)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x6CD79D0", Offset = "0x6CD69D0", VA = "0x6CD79D0")]
	private void MoveUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x6CD6080", Offset = "0x6CD5080", VA = "0x6CD6080")]
	private void Delete()
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x6CD5DF0", Offset = "0x6CD4DF0", VA = "0x6CD5DF0")]
	private void ForwardSpace()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x6CD5B70", Offset = "0x6CD4B70", VA = "0x6CD5B70")]
	private void Backspace()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x6CD7BC0", Offset = "0x6CD6BC0", VA = "0x6CD7BC0")]
	private void Insert(char c)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x6CD6350", Offset = "0x6CD5350", VA = "0x6CD6350")]
	private void UpdateTouchKeyboardFromEditChanges()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x6CD4110", Offset = "0x6CD3110", VA = "0x6CD4110")]
	private void SendOnValueChangedAndUpdateLabel()
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x6CCF570", Offset = "0x6CCE570", VA = "0x6CCF570")]
	private void SendOnValueChanged()
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x6CD7D90", Offset = "0x6CD6D90", VA = "0x6CD7D90")]
	protected void SendOnEndEdit()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x6CD39D0", Offset = "0x6CD29D0", VA = "0x6CD39D0")]
	protected void SendOnSubmit()
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x6CD7E00", Offset = "0x6CD6E00", VA = "0x6CD7E00", Slot = "66")]
	protected virtual void Append(string input)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x6CD7EA0", Offset = "0x6CD6EA0", VA = "0x6CD7EA0", Slot = "67")]
	protected virtual void Append(char input)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x6CCF5E0", Offset = "0x6CCE5E0", VA = "0x6CCF5E0")]
	protected void UpdateLabel()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x6CD94B0", Offset = "0x6CD84B0", VA = "0x6CD94B0")]
	private bool IsSelectionVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x6CD9550", Offset = "0x6CD8550", VA = "0x6CD9550")]
	private static int GetLineStartPosition(TextGenerator gen, int line)
	{
		return default(int);
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x6CD4A80", Offset = "0x6CD3A80", VA = "0x6CD4A80")]
	private static int GetLineEndPosition(TextGenerator gen, int line)
	{
		return default(int);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x6CD8170", Offset = "0x6CD7170", VA = "0x6CD8170")]
	private void SetDrawRangeToContainCaretPosition(int caretPos)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x6CD96B0", Offset = "0x6CD86B0", VA = "0x6CD96B0")]
	public void ForceLabelUpdate()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x6CCFDB0", Offset = "0x6CCEDB0", VA = "0x6CCFDB0")]
	private void MarkGeometryAsDirty()
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x6CD96C0", Offset = "0x6CD86C0", VA = "0x6CD96C0", Slot = "68")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x6CD9BD0", Offset = "0x6CD8BD0", VA = "0x6CD9BD0", Slot = "69")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x6CD9BE0", Offset = "0x6CD8BE0", VA = "0x6CD9BE0", Slot = "70")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x6CD96D0", Offset = "0x6CD86D0", VA = "0x6CD96D0")]
	private void UpdateGeometry()
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x6CD3390", Offset = "0x6CD2390", VA = "0x6CD3390")]
	private void AssignPositioningIfNeeded()
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x6CD9BF0", Offset = "0x6CD8BF0", VA = "0x6CD9BF0")]
	private void OnFillVBO(Mesh vbo)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x6CD9DF0", Offset = "0x6CD8DF0", VA = "0x6CD9DF0")]
	private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x6CDB270", Offset = "0x6CDA270", VA = "0x6CDB270")]
	private void CreateCursorVerts()
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x6CDA720", Offset = "0x6CD9720", VA = "0x6CDA720")]
	private void GenerateHighlight(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x6CD3A40", Offset = "0x6CD2A40", VA = "0x6CD3A40")]
	protected char Validate(string text, int pos, char ch)
	{
		return default(char);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x6CDB3F0", Offset = "0x6CDA3F0", VA = "0x6CDB3F0")]
	public void ActivateInputField()
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x6CD2F10", Offset = "0x6CD1F10", VA = "0x6CD2F10")]
	private void ActivateInputFieldInternal()
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x6CDB520", Offset = "0x6CDA520", VA = "0x6CDB520", Slot = "36")]
	public override void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x6CDB550", Offset = "0x6CDA550", VA = "0x6CDB550", Slot = "71")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x6CD1920", Offset = "0x6CD0920", VA = "0x6CD1920")]
	public void DeactivateInputField()
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x6CDB570", Offset = "0x6CDA570", VA = "0x6CDB570", Slot = "37")]
	public override void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x6CDB5D0", Offset = "0x6CDA5D0", VA = "0x6CDB5D0", Slot = "72")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x6CD0720", Offset = "0x6CCF720", VA = "0x6CD0720")]
	private void EnforceContentType()
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x6CCED80", Offset = "0x6CCDD80", VA = "0x6CCED80")]
	private void EnforceTextHOverflow()
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x6CD08D0", Offset = "0x6CCF8D0", VA = "0x6CD08D0")]
	private void SetToCustomIfContentTypeIsNot(params ContentType[] allowedContentTypes)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x6CD0C00", Offset = "0x6CCFC00", VA = "0x6CD0C00")]
	private void SetToCustom()
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x6CDB620", Offset = "0x6CDA620", VA = "0x6CDB620", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x6CDB660", Offset = "0x6CDA660", VA = "0x6CDB660", Slot = "73")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x6CDB670", Offset = "0x6CDA670", VA = "0x6CDB670", Slot = "74")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x6CDBB50", Offset = "0x6CDAB50", VA = "0x6CDBB50", Slot = "46")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
