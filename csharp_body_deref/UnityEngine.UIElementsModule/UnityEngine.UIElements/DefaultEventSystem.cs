// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DefaultEventSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200013B")]
internal class DefaultEventSystem
{
	[Token(Token = "0x200013C")]
	public enum UpdateMode
	{
		[Token(Token = "0x40005A9")]
		Always,
		[Token(Token = "0x40005AA")]
		IgnoreIfAppNotFocused
	}

	[Token(Token = "0x200013D")]
	internal struct FocusBasedEventSequenceContext : IDisposable
	{
		[Token(Token = "0x40005AB")]
		[FieldOffset(Offset = "0x0")]
		private DefaultEventSystem es;

		[Token(Token = "0x60008D9")]
		[Address(RVA = "0x5019130", Offset = "0x5019130", VA = "0x5019130")]
		public FocusBasedEventSequenceContext(DefaultEventSystem es)
		{
		}

		[Token(Token = "0x60008DA")]
		[Address(RVA = "0x5019F10", Offset = "0x5019F10", VA = "0x5019F10", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200013E")]
	internal interface IInput
	{
		[Token(Token = "0x17000181")]
		int touchCount
		{
			[Token(Token = "0x60008DF")]
			get;
		}

		[Token(Token = "0x17000182")]
		bool mousePresent
		{
			[Token(Token = "0x60008E1")]
			get;
		}

		[Token(Token = "0x17000183")]
		Vector3 mousePosition
		{
			[Token(Token = "0x60008E4")]
			get;
		}

		[Token(Token = "0x17000184")]
		int mouseButtonCount
		{
			[Token(Token = "0x60008E5")]
			get;
		}

		[Token(Token = "0x17000185")]
		bool anyKey
		{
			[Token(Token = "0x60008E6")]
			get;
		}

		[Token(Token = "0x17000186")]
		float unscaledTime
		{
			[Token(Token = "0x60008E7")]
			get;
		}

		[Token(Token = "0x17000187")]
		float doubleClickTime
		{
			[Token(Token = "0x60008E8")]
			get;
		}

		[Token(Token = "0x60008DB")]
		bool GetButtonDown(string button);

		[Token(Token = "0x60008DC")]
		float GetAxisRaw(string axis);

		[Token(Token = "0x60008DD")]
		void ClearLastPenContactEvent();

		[Token(Token = "0x60008DE")]
		PenData GetLastPenContactEvent();

		[Token(Token = "0x60008E0")]
		Touch GetTouch(int index);

		[Token(Token = "0x60008E2")]
		bool GetMouseButtonDown(int button);

		[Token(Token = "0x60008E3")]
		bool GetMouseButtonUp(int button);
	}

	[Token(Token = "0x200013F")]
	private class Input : IInput
	{
		[Token(Token = "0x17000188")]
		public int touchCount
		{
			[Token(Token = "0x60008ED")]
			[Address(RVA = "0x5019FC0", Offset = "0x5019FC0", VA = "0x5019FC0", Slot = "8")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000189")]
		public bool mousePresent
		{
			[Token(Token = "0x60008EF")]
			[Address(RVA = "0x501A020", Offset = "0x501A020", VA = "0x501A020", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700018A")]
		public Vector3 mousePosition
		{
			[Token(Token = "0x60008F2")]
			[Address(RVA = "0x501A050", Offset = "0x501A050", VA = "0x501A050", Slot = "13")]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x1700018B")]
		public int mouseButtonCount
		{
			[Token(Token = "0x60008F3")]
			[Address(RVA = "0x501A060", Offset = "0x501A060", VA = "0x501A060", Slot = "14")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700018C")]
		public bool anyKey
		{
			[Token(Token = "0x60008F4")]
			[Address(RVA = "0x501A070", Offset = "0x501A070", VA = "0x501A070", Slot = "15")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700018D")]
		public float unscaledTime
		{
			[Token(Token = "0x60008F5")]
			[Address(RVA = "0x501A080", Offset = "0x501A080", VA = "0x501A080", Slot = "16")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700018E")]
		public float doubleClickTime
		{
			[Token(Token = "0x60008F6")]
			[Address(RVA = "0x501A090", Offset = "0x501A090", VA = "0x501A090", Slot = "17")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x5019F50", Offset = "0x5019F50", VA = "0x5019F50", Slot = "4")]
		public bool GetButtonDown(string button)
		{
			return default(bool);
		}

		[Token(Token = "0x60008EA")]
		[Address(RVA = "0x5019F60", Offset = "0x5019F60", VA = "0x5019F60", Slot = "5")]
		public float GetAxisRaw(string axis)
		{
			return default(float);
		}

		[Token(Token = "0x60008EB")]
		[Address(RVA = "0x5019F70", Offset = "0x5019F70", VA = "0x5019F70", Slot = "6")]
		public void ClearLastPenContactEvent()
		{
		}

		[Token(Token = "0x60008EC")]
		[Address(RVA = "0x5019F80", Offset = "0x5019F80", VA = "0x5019F80", Slot = "7")]
		public PenData GetLastPenContactEvent()
		{
			return default(PenData);
		}

		[Token(Token = "0x60008EE")]
		[Address(RVA = "0x5019FD0", Offset = "0x5019FD0", VA = "0x5019FD0", Slot = "9")]
		public Touch GetTouch(int index)
		{
			return default(Touch);
		}

		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x501A030", Offset = "0x501A030", VA = "0x501A030", Slot = "11")]
		public bool GetMouseButtonDown(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x501A040", Offset = "0x501A040", VA = "0x501A040", Slot = "12")]
		public bool GetMouseButtonUp(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x60008F7")]
		[Address(RVA = "0x5016DB0", Offset = "0x5016DB0", VA = "0x5016DB0")]
		public Input()
		{
		}
	}

	[Token(Token = "0x2000140")]
	private class NoInput : IInput
	{
		[Token(Token = "0x1700018F")]
		public int touchCount
		{
			[Token(Token = "0x60008FA")]
			[Address(RVA = "0x501A0D0", Offset = "0x501A0D0", VA = "0x501A0D0", Slot = "8")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000190")]
		public bool mousePresent
		{
			[Token(Token = "0x60008FE")]
			[Address(RVA = "0x501A130", Offset = "0x501A130", VA = "0x501A130", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000191")]
		public Vector3 mousePosition
		{
			[Token(Token = "0x6000901")]
			[Address(RVA = "0x501A160", Offset = "0x501A160", VA = "0x501A160", Slot = "13")]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x17000192")]
		public int mouseButtonCount
		{
			[Token(Token = "0x6000902")]
			[Address(RVA = "0x501A170", Offset = "0x501A170", VA = "0x501A170", Slot = "14")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000193")]
		public bool anyKey
		{
			[Token(Token = "0x6000903")]
			[Address(RVA = "0x501A180", Offset = "0x501A180", VA = "0x501A180", Slot = "15")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000194")]
		public float unscaledTime
		{
			[Token(Token = "0x6000904")]
			[Address(RVA = "0x501A190", Offset = "0x501A190", VA = "0x501A190", Slot = "16")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000195")]
		public float doubleClickTime
		{
			[Token(Token = "0x6000905")]
			[Address(RVA = "0x501A1A0", Offset = "0x501A1A0", VA = "0x501A1A0", Slot = "17")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x60008F8")]
		[Address(RVA = "0x501A0B0", Offset = "0x501A0B0", VA = "0x501A0B0", Slot = "4")]
		public bool GetButtonDown(string button)
		{
			return default(bool);
		}

		[Token(Token = "0x60008F9")]
		[Address(RVA = "0x501A0C0", Offset = "0x501A0C0", VA = "0x501A0C0", Slot = "5")]
		public float GetAxisRaw(string axis)
		{
			return default(float);
		}

		[Token(Token = "0x60008FB")]
		[Address(RVA = "0x501A0E0", Offset = "0x501A0E0", VA = "0x501A0E0", Slot = "9")]
		public Touch GetTouch(int index)
		{
			return default(Touch);
		}

		[Token(Token = "0x60008FC")]
		[Address(RVA = "0x501A100", Offset = "0x501A100", VA = "0x501A100", Slot = "6")]
		public void ClearLastPenContactEvent()
		{
		}

		[Token(Token = "0x60008FD")]
		[Address(RVA = "0x501A110", Offset = "0x501A110", VA = "0x501A110", Slot = "7")]
		public PenData GetLastPenContactEvent()
		{
			return default(PenData);
		}

		[Token(Token = "0x60008FF")]
		[Address(RVA = "0x501A140", Offset = "0x501A140", VA = "0x501A140", Slot = "11")]
		public bool GetMouseButtonDown(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x6000900")]
		[Address(RVA = "0x501A150", Offset = "0x501A150", VA = "0x501A150", Slot = "12")]
		public bool GetMouseButtonUp(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x6000906")]
		[Address(RVA = "0x5016DC0", Offset = "0x5016DC0", VA = "0x5016DC0")]
		public NoInput()
		{
		}
	}

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x0")]
	internal static Func<bool> IsEditorRemoteConnected;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x10")]
	private IInput m_Input;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x18")]
	private readonly string m_HorizontalAxis;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x20")]
	private readonly string m_VerticalAxis;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x28")]
	private readonly string m_SubmitButton;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x30")]
	private readonly string m_CancelButton;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x38")]
	private readonly float m_InputActionsPerSecond;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x3C")]
	private readonly float m_RepeatDelay;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x40")]
	private bool m_SendingTouchEvents;

	[Token(Token = "0x400059A")]
	[FieldOffset(Offset = "0x41")]
	private bool m_SendingPenEvent;

	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x48")]
	private Event m_Event;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x50")]
	private BaseRuntimePanel m_FocusedPanel;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x58")]
	private BaseRuntimePanel m_PreviousFocusedPanel;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x60")]
	private Focusable m_PreviousFocusedElement;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x68")]
	private EventModifiers m_CurrentModifiers;

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x6C")]
	private int m_LastMousePressButton;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x70")]
	private float m_NextMousePressTime;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x74")]
	private int m_LastMouseClickCount;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x78")]
	private Vector2 m_LastMousePosition;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x80")]
	private bool m_MouseProcessedAtLeastOnce;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x84")]
	private int m_ConsecutiveMoveCount;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x88")]
	private Vector2 m_LastMoveVector;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x90")]
	private float m_PrevActionTime;

	[Token(Token = "0x1700017E")]
	private bool isAppFocused
	{
		[Token(Token = "0x60008C2")]
		[Address(RVA = "0x5016B60", Offset = "0x5016B60", VA = "0x5016B60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017F")]
	internal IInput input
	{
		[Token(Token = "0x60008C3")]
		[Address(RVA = "0x5016BC0", Offset = "0x5016BC0", VA = "0x5016BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000180")]
	public BaseRuntimePanel focusedPanel
	{
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x5016DF0", Offset = "0x5016DF0", VA = "0x5016DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x5016E00", Offset = "0x5016E00", VA = "0x5016E00")]
		set
		{
		}
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x5016C00", Offset = "0x5016C00", VA = "0x5016C00")]
	private IInput GetDefaultInput()
	{
		return null;
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x5016DD0", Offset = "0x5016DD0", VA = "0x5016DD0")]
	private bool ShouldIgnoreEventsOnAppNotFocused()
	{
		return default(bool);
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x5016E50", Offset = "0x5016E50", VA = "0x5016E50")]
	public void Update(UpdateMode updateMode = UpdateMode.Always)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x50184D0", Offset = "0x50184D0", VA = "0x50184D0")]
	internal FocusBasedEventSequenceContext FocusBasedEventSequence()
	{
		return default(FocusBasedEventSequenceContext);
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x50184F0", Offset = "0x50184F0", VA = "0x50184F0")]
	private void SendIMGUIEvents()
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x5017940", Offset = "0x5017940", VA = "0x5017940")]
	private void ProcessMouseEvents()
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x5018CF0", Offset = "0x5018CF0", VA = "0x5018CF0")]
	private void SendInputEvents()
	{
	}

	[Token(Token = "0x60008CD")]
	internal void SendFocusBasedEvent<TArg>(Func<TArg, EventBase> evtFactory, TArg arg)
	{
	}

	[Token(Token = "0x60008CE")]
	private void SendPositionBasedEvent<TArg>(Vector3 mousePosition, Vector3 delta, int pointerId, int? targetDisplay, Func<Vector3, Vector3, TArg, EventBase> evtFactory, TArg arg, bool deselectIfNoTarget = false)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x5019740", Offset = "0x5019740", VA = "0x5019740")]
	private void UpdateFocusedPanel(BaseRuntimePanel runtimePanel)
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x5019800", Offset = "0x5019800", VA = "0x5019800")]
	private static EventBase MakeTouchEvent(Touch touch, EventModifiers modifiers)
	{
		return null;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x50198F0", Offset = "0x50198F0", VA = "0x50198F0")]
	private static EventBase MakePenEvent(PenData pen, EventModifiers modifiers)
	{
		return null;
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x5017390", Offset = "0x5017390", VA = "0x5017390")]
	private bool ProcessTouchEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x5017000", Offset = "0x5017000", VA = "0x5017000")]
	private bool ProcessPenEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x5019960", Offset = "0x5019960", VA = "0x5019960")]
	private Vector2 GetRawMoveVector()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x5019360", Offset = "0x5019360", VA = "0x5019360")]
	private bool ShouldSendMoveFromInput()
	{
		return default(bool);
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x50191A0", Offset = "0x50191A0", VA = "0x50191A0")]
	private void ProcessTabEvent(Event e, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x5019D10", Offset = "0x5019D10", VA = "0x5019D10")]
	public DefaultEventSystem()
	{
	}
}
