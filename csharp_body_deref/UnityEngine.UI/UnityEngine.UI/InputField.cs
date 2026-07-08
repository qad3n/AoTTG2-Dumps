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
		[Address(RVA = "0x4D97DB0", Offset = "0x4D97DB0", VA = "0x4D97DB0")]
		public SubmitEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000035")]
	public class EndEditEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x4D97DF0", Offset = "0x4D97DF0", VA = "0x4D97DF0")]
		public EndEditEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000036")]
	public class OnChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000236")]
		[Address(RVA = "0x4D97E30", Offset = "0x4D97E30", VA = "0x4D97E30")]
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
			[Address(RVA = "0x4DA45F0", Offset = "0x4DA45F0", VA = "0x4DA45F0", Slot = "4")]
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
			[Address(RVA = "0x4DA4640", Offset = "0x4DA4640", VA = "0x4DA4640", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000237")]
		[Address(RVA = "0x4D9A820", Offset = "0x4D9A820", VA = "0x4D9A820")]
		[DebuggerHidden]
		public _003CCaretBlink_003Ed__170(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000238")]
		[Address(RVA = "0x4DA4430", Offset = "0x4DA4430", VA = "0x4DA4430", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x4DA4440", Offset = "0x4DA4440", VA = "0x4DA4440", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x4DA4600", Offset = "0x4DA4600", VA = "0x4DA4600", Slot = "8")]
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
			[Address(RVA = "0x4DA4920", Offset = "0x4DA4920", VA = "0x4DA4920", Slot = "4")]
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
			[Address(RVA = "0x4DA4970", Offset = "0x4DA4970", VA = "0x4DA4970", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x4D9DAD0", Offset = "0x4D9DAD0", VA = "0x4D9DAD0")]
		[DebuggerHidden]
		public _003CMouseDragOutsideRect_003Ed__194(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x4DA4650", Offset = "0x4DA4650", VA = "0x4DA4650", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x4DA4660", Offset = "0x4DA4660", VA = "0x4DA4660", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x4DA4930", Offset = "0x4DA4930", VA = "0x4DA4930", Slot = "8")]
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
		[Address(RVA = "0x4D979F0", Offset = "0x4D979F0", VA = "0x4D979F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	private string compositionString
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x4D97AF0", Offset = "0x4D97AF0", VA = "0x4D97AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	protected Mesh mesh
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x4D97F00", Offset = "0x4D97F00", VA = "0x4D97F00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006A")]
	protected TextGenerator cachedInputTextGenerator
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x4D97FA0", Offset = "0x4D97FA0", VA = "0x4D97FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006B")]
	public bool shouldHideMobileInput
	{
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x4D98070", Offset = "0x4D98070", VA = "0x4D98070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x4D98020", Offset = "0x4D98020", VA = "0x4D98020")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public virtual bool shouldActivateOnSelect
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x4D980E0", Offset = "0x4D980E0", VA = "0x4D980E0", Slot = "60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x4D980D0", Offset = "0x4D980D0", VA = "0x4D980D0", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public string text
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x4D98140", Offset = "0x4D98140", VA = "0x4D98140")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x4D98150", Offset = "0x4D98150", VA = "0x4D98150")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public bool isFocused
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x4D98D60", Offset = "0x4D98D60", VA = "0x4D98D60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006F")]
	public float caretBlinkRate
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x4D98D70", Offset = "0x4D98D70", VA = "0x4D98D70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x4D98D80", Offset = "0x4D98D80", VA = "0x4D98D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public int caretWidth
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x4D98EC0", Offset = "0x4D98EC0", VA = "0x4D98EC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x4D98ED0", Offset = "0x4D98ED0", VA = "0x4D98ED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public Text textComponent
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x4D98FD0", Offset = "0x4D98FD0", VA = "0x4D98FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x4D98FE0", Offset = "0x4D98FE0", VA = "0x4D98FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public Graphic placeholder
	{
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x4D99290", Offset = "0x4D99290", VA = "0x4D99290")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x4D992A0", Offset = "0x4D992A0", VA = "0x4D992A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public Color caretColor
	{
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x4D992F0", Offset = "0x4D992F0", VA = "0x4D992F0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x4D99330", Offset = "0x4D99330", VA = "0x4D99330")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public bool customCaretColor
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x4D993B0", Offset = "0x4D993B0", VA = "0x4D993B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x4D993C0", Offset = "0x4D993C0", VA = "0x4D993C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public Color selectionColor
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x4D99440", Offset = "0x4D99440", VA = "0x4D99440")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x4D99460", Offset = "0x4D99460", VA = "0x4D99460")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public EndEditEvent onEndEdit
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x4D994E0", Offset = "0x4D994E0", VA = "0x4D994E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x4D994F0", Offset = "0x4D994F0", VA = "0x4D994F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public SubmitEvent onSubmit
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x4D99540", Offset = "0x4D99540", VA = "0x4D99540")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x4D99550", Offset = "0x4D99550", VA = "0x4D99550")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	[Obsolete("onValueChange has been renamed to onValueChanged")]
	public OnChangeEvent onValueChange
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x4D995A0", Offset = "0x4D995A0", VA = "0x4D995A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x4D995B0", Offset = "0x4D995B0", VA = "0x4D995B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public OnChangeEvent onValueChanged
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x4D99650", Offset = "0x4D99650", VA = "0x4D99650")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x4D99600", Offset = "0x4D99600", VA = "0x4D99600")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public OnValidateInput onValidateInput
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x4D99660", Offset = "0x4D99660", VA = "0x4D99660")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x4D99670", Offset = "0x4D99670", VA = "0x4D99670")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public int characterLimit
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x4D996C0", Offset = "0x4D996C0", VA = "0x4D996C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x4D996D0", Offset = "0x4D996D0", VA = "0x4D996D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public ContentType contentType
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x4D99770", Offset = "0x4D99770", VA = "0x4D99770")]
		get
		{
			return default(ContentType);
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x4D99780", Offset = "0x4D99780", VA = "0x4D99780")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public LineType lineType
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x4D999B0", Offset = "0x4D999B0", VA = "0x4D999B0")]
		get
		{
			return default(LineType);
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x4D999C0", Offset = "0x4D999C0", VA = "0x4D999C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public InputType inputType
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x4D99AD0", Offset = "0x4D99AD0", VA = "0x4D99AD0")]
		get
		{
			return default(InputType);
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x4D99AE0", Offset = "0x4D99AE0", VA = "0x4D99AE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public TouchScreenKeyboard touchScreenKeyboard
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x4D99B70", Offset = "0x4D99B70", VA = "0x4D99B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	public TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x4D99B80", Offset = "0x4D99B80", VA = "0x4D99B80")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x4D99B90", Offset = "0x4D99B90", VA = "0x4D99B90")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public CharacterValidation characterValidation
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x4D99C00", Offset = "0x4D99C00", VA = "0x4D99C00")]
		get
		{
			return default(CharacterValidation);
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x4D99C10", Offset = "0x4D99C10", VA = "0x4D99C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public bool readOnly
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x4D99C80", Offset = "0x4D99C80", VA = "0x4D99C80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x4D99C90", Offset = "0x4D99C90", VA = "0x4D99C90")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public bool multiLine
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x4D99CA0", Offset = "0x4D99CA0", VA = "0x4D99CA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000084")]
	public char asteriskChar
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x4D99CB0", Offset = "0x4D99CB0", VA = "0x4D99CB0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x4D99CC0", Offset = "0x4D99CC0", VA = "0x4D99CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public bool wasCanceled
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x4D99D20", Offset = "0x4D99D20", VA = "0x4D99D20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000086")]
	protected int caretPositionInternal
	{
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x4D99D60", Offset = "0x4D99D60", VA = "0x4D99D60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x4D99D80", Offset = "0x4D99D80", VA = "0x4D99D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	protected int caretSelectPositionInternal
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x4D99DB0", Offset = "0x4D99DB0", VA = "0x4D99DB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x4D99DD0", Offset = "0x4D99DD0", VA = "0x4D99DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	private bool hasSelection
	{
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x4D99E00", Offset = "0x4D99E00", VA = "0x4D99E00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000089")]
	public int caretPosition
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x4D99E40", Offset = "0x4D99E40", VA = "0x4D99E40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x4D99E60", Offset = "0x4D99E60", VA = "0x4D99E60")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public int selectionAnchorPosition
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x4D99FE0", Offset = "0x4D99FE0", VA = "0x4D99FE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x4D99F20", Offset = "0x4D99F20", VA = "0x4D99F20")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public int selectionFocusPosition
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x4D9A000", Offset = "0x4D9A000", VA = "0x4D9A000")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x4D99F80", Offset = "0x4D99F80", VA = "0x4D99F80")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	private static string clipboard
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x4D9AB30", Offset = "0x4D9AB30", VA = "0x4D9AB30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x4D9AB40", Offset = "0x4D9AB40", VA = "0x4D9AB40")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public virtual float minWidth
	{
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x4DA3DC0", Offset = "0x4DA3DC0", VA = "0x4DA3DC0", Slot = "75")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700008E")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x4DA3DD0", Offset = "0x4DA3DD0", VA = "0x4DA3DD0", Slot = "76")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700008F")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x4DA4020", Offset = "0x4DA4020", VA = "0x4DA4020", Slot = "77")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000090")]
	public virtual float minHeight
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x4DA4030", Offset = "0x4DA4030", VA = "0x4DA4030", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000091")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x4DA4040", Offset = "0x4DA4040", VA = "0x4DA4040", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000092")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x4DA4290", Offset = "0x4DA4290", VA = "0x4DA4290", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000093")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x4DA42A0", Offset = "0x4DA42A0", VA = "0x4DA42A0", Slot = "81")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4D97B70", Offset = "0x4D97B70", VA = "0x4D97B70")]
	protected InputField()
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4D985B0", Offset = "0x4D985B0", VA = "0x4D985B0")]
	public void SetTextWithoutNotify(string input)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4D98160", Offset = "0x4D98160", VA = "0x4D98160")]
	private void SetText(string value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4D99D30", Offset = "0x4D99D30", VA = "0x4D99D30")]
	protected void ClampPos(ref int pos)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4D9A020", Offset = "0x4D9A020", VA = "0x4D9A020", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4D9A2B0", Offset = "0x4D9A2B0", VA = "0x4D9A2B0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4D9A760", Offset = "0x4D9A760", VA = "0x4D9A760", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4D9A7B0", Offset = "0x4D9A7B0", VA = "0x4D9A7B0")]
	[IteratorStateMachine(typeof(_003CCaretBlink_003Ed__170))]
	private IEnumerator CaretBlink()
	{
		return null;
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4D9A840", Offset = "0x4D9A840", VA = "0x4D9A840")]
	private void SetCaretVisible()
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4D98DF0", Offset = "0x4D98DF0", VA = "0x4D98DF0")]
	private void SetCaretActive()
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4D9A870", Offset = "0x4D9A870", VA = "0x4D9A870")]
	private void UpdateCaretMaterial()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4D9A980", Offset = "0x4D9A980", VA = "0x4D9A980")]
	protected void OnFocus()
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4D9A9C0", Offset = "0x4D9A9C0", VA = "0x4D9A9C0")]
	protected void SelectAll()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4D9AA00", Offset = "0x4D9AA00", VA = "0x4D9AA00")]
	public void MoveTextEnd(bool shift)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4D9AA90", Offset = "0x4D9AA90", VA = "0x4D9AA90")]
	public void MoveTextStart(bool shift)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4D9AB50", Offset = "0x4D9AB50", VA = "0x4D9AB50")]
	private bool TouchScreenKeyboardShouldBeUsed()
	{
		return default(bool);
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4D9AC10", Offset = "0x4D9AC10", VA = "0x4D9AC10")]
	private bool InPlaceEditing()
	{
		return default(bool);
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4D9AC30", Offset = "0x4D9AC30", VA = "0x4D9AC30")]
	private bool InPlaceEditingChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4D9ACD0", Offset = "0x4D9ACD0", VA = "0x4D9ACD0")]
	private RangeInt GetInternalSelection()
	{
		return default(RangeInt);
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4D9ADC0", Offset = "0x4D9ADC0", VA = "0x4D9ADC0")]
	private void UpdateKeyboardCaret()
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4D9AEA0", Offset = "0x4D9AEA0", VA = "0x4D9AEA0")]
	private void UpdateCaretFromKeyboard()
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4D9B000", Offset = "0x4D9B000", VA = "0x4D9B000", Slot = "61")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4D9CBE0", Offset = "0x4D9CBE0", VA = "0x4D9CBE0")]
	[Obsolete("This function is no longer used. Please use RectTransformUtility.ScreenPointToLocalPointInRectangle() instead.")]
	public Vector2 ScreenToLocal(Vector2 screen)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4D9D030", Offset = "0x4D9D030", VA = "0x4D9D030")]
	private int GetUnclampedCharacterLineFromPosition(Vector2 pos, TextGenerator generator)
	{
		return default(int);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4D9D260", Offset = "0x4D9D260", VA = "0x4D9D260")]
	protected int GetCharacterIndexFromPosition(Vector2 pos)
	{
		return default(int);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4D9D660", Offset = "0x4D9D660", VA = "0x4D9D660")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4D9D730", Offset = "0x4D9D730", VA = "0x4D9D730", Slot = "62")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4D9D750", Offset = "0x4D9D750", VA = "0x4D9D750", Slot = "63")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4D9DA40", Offset = "0x4D9DA40", VA = "0x4D9DA40")]
	[IteratorStateMachine(typeof(_003CMouseDragOutsideRect_003Ed__194))]
	private IEnumerator MouseDragOutsideRect(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4D9DAF0", Offset = "0x4D9DAF0", VA = "0x4D9DAF0", Slot = "64")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4D9DB10", Offset = "0x4D9DB10", VA = "0x4D9DB10", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4D9DD20", Offset = "0x4D9DD20", VA = "0x4D9DD20")]
	protected EditState KeyPressed(Event evt)
	{
		return default(EditState);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4D9EEB0", Offset = "0x4D9EEB0", VA = "0x4D9EEB0")]
	private bool IsValidChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4D9EF10", Offset = "0x4D9EF10", VA = "0x4D9EF10")]
	public void ProcessEvent(Event e)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4D9EF20", Offset = "0x4D9EF20", VA = "0x4D9EF20", Slot = "65")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x4D9E750", Offset = "0x4D9E750", VA = "0x4D9E750")]
	private string GetSelectedString()
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4D9F1B0", Offset = "0x4D9F1B0", VA = "0x4D9F1B0")]
	private int FindtNextWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4D9ECF0", Offset = "0x4D9ECF0", VA = "0x4D9ECF0")]
	private void MoveRight(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4D9F290", Offset = "0x4D9F290", VA = "0x4D9F290")]
	private int FindtPrevWordBegin()
	{
		return default(int);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4D9EB50", Offset = "0x4D9EB50", VA = "0x4D9EB50")]
	private void MoveLeft(bool shift, bool ctrl)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x4D9F340", Offset = "0x4D9F340", VA = "0x4D9F340")]
	private int DetermineCharacterLine(int charPos, TextGenerator generator)
	{
		return default(int);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4D9F470", Offset = "0x4D9F470", VA = "0x4D9F470")]
	private int LineUpCharacterPosition(int originalPos, bool goToFirstChar)
	{
		return default(int);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4D9FA10", Offset = "0x4D9FA10", VA = "0x4D9FA10")]
	private int LineDownCharacterPosition(int originalPos, bool goToLastChar)
	{
		return default(int);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4D9EEA0", Offset = "0x4D9EEA0", VA = "0x4D9EEA0")]
	private void MoveDown(bool shift)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4D9FF70", Offset = "0x4D9FF70", VA = "0x4D9FF70")]
	private void MoveDown(bool shift, bool goToLastChar)
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4D9EE90", Offset = "0x4D9EE90", VA = "0x4D9EE90")]
	private void MoveUp(bool shift)
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x4DA0120", Offset = "0x4DA0120", VA = "0x4DA0120")]
	private void MoveUp(bool shift, bool goToFirstChar)
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x4D9E820", Offset = "0x4D9E820", VA = "0x4D9E820")]
	private void Delete()
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4D9E530", Offset = "0x4D9E530", VA = "0x4D9E530")]
	private void ForwardSpace()
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x4D9E240", Offset = "0x4D9E240", VA = "0x4D9E240")]
	private void Backspace()
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4DA02C0", Offset = "0x4DA02C0", VA = "0x4DA02C0")]
	private void Insert(char c)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x4D9EB00", Offset = "0x4D9EB00", VA = "0x4D9EB00")]
	private void UpdateTouchKeyboardFromEditChanges()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x4D9CB70", Offset = "0x4D9CB70", VA = "0x4D9CB70")]
	private void SendOnValueChangedAndUpdateLabel()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4D98670", Offset = "0x4D98670", VA = "0x4D98670")]
	private void SendOnValueChanged()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4DA0480", Offset = "0x4DA0480", VA = "0x4DA0480")]
	protected void SendOnEndEdit()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4D9C3D0", Offset = "0x4D9C3D0", VA = "0x4D9C3D0")]
	protected void SendOnSubmit()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4DA04F0", Offset = "0x4DA04F0", VA = "0x4DA04F0", Slot = "66")]
	protected virtual void Append(string input)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4DA0590", Offset = "0x4DA0590", VA = "0x4DA0590", Slot = "67")]
	protected virtual void Append(char input)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4D986E0", Offset = "0x4D986E0", VA = "0x4D986E0")]
	protected void UpdateLabel()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4DA1BB0", Offset = "0x4DA1BB0", VA = "0x4DA1BB0")]
	private bool IsSelectionVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4DA1C50", Offset = "0x4DA1C50", VA = "0x4DA1C50")]
	private static int GetLineStartPosition(TextGenerator gen, int line)
	{
		return default(int);
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4D9D500", Offset = "0x4D9D500", VA = "0x4D9D500")]
	private static int GetLineEndPosition(TextGenerator gen, int line)
	{
		return default(int);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4DA08F0", Offset = "0x4DA08F0", VA = "0x4DA08F0")]
	private void SetDrawRangeToContainCaretPosition(int caretPos)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4DA1DB0", Offset = "0x4DA1DB0", VA = "0x4DA1DB0")]
	public void ForceLabelUpdate()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4D98F60", Offset = "0x4D98F60", VA = "0x4D98F60")]
	private void MarkGeometryAsDirty()
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4DA1DC0", Offset = "0x4DA1DC0", VA = "0x4DA1DC0", Slot = "68")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4DA22E0", Offset = "0x4DA22E0", VA = "0x4DA22E0", Slot = "69")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4DA22F0", Offset = "0x4DA22F0", VA = "0x4DA22F0", Slot = "70")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4DA1DD0", Offset = "0x4DA1DD0", VA = "0x4DA1DD0")]
	private void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4D9BD70", Offset = "0x4D9BD70", VA = "0x4D9BD70")]
	private void AssignPositioningIfNeeded()
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4DA2300", Offset = "0x4DA2300", VA = "0x4DA2300")]
	private void OnFillVBO(Mesh vbo)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4DA25F0", Offset = "0x4DA25F0", VA = "0x4DA25F0")]
	private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4DA39B0", Offset = "0x4DA39B0", VA = "0x4DA39B0")]
	private void CreateCursorVerts()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4DA2EA0", Offset = "0x4DA2EA0", VA = "0x4DA2EA0")]
	private void GenerateHighlight(VertexHelper vbo, Vector2 roundingOffset)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4D9C440", Offset = "0x4D9C440", VA = "0x4D9C440")]
	protected char Validate(string text, int pos, char ch)
	{
		return default(char);
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4DA3B70", Offset = "0x4DA3B70", VA = "0x4DA3B70")]
	public void ActivateInputField()
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4D9B8E0", Offset = "0x4D9B8E0", VA = "0x4D9B8E0")]
	private void ActivateInputFieldInternal()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4DA3CA0", Offset = "0x4DA3CA0", VA = "0x4DA3CA0", Slot = "36")]
	public override void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4DA3CD0", Offset = "0x4DA3CD0", VA = "0x4DA3CD0", Slot = "71")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4D9A520", Offset = "0x4D9A520", VA = "0x4D9A520")]
	public void DeactivateInputField()
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4DA3CF0", Offset = "0x4DA3CF0", VA = "0x4DA3CF0", Slot = "37")]
	public override void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4DA3D20", Offset = "0x4DA3D20", VA = "0x4DA3D20", Slot = "72")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4D998C0", Offset = "0x4D998C0", VA = "0x4D998C0")]
	private void EnforceContentType()
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4D97E70", Offset = "0x4D97E70", VA = "0x4D97E70")]
	private void EnforceTextHOverflow()
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4D99A90", Offset = "0x4D99A90", VA = "0x4D99A90")]
	private void SetToCustomIfContentTypeIsNot(params ContentType[] allowedContentTypes)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4D99B50", Offset = "0x4D99B50", VA = "0x4D99B50")]
	private void SetToCustom()
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4DA3D70", Offset = "0x4DA3D70", VA = "0x4DA3D70", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4DA3DA0", Offset = "0x4DA3DA0", VA = "0x4DA3DA0", Slot = "73")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4DA3DB0", Offset = "0x4DA3DB0", VA = "0x4DA3DB0", Slot = "74")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4DA4350", Offset = "0x4DA4350", VA = "0x4DA4350", Slot = "46")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
