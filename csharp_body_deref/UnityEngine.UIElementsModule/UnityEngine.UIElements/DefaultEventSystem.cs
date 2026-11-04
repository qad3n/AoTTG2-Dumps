// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DefaultEventSystem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.IntegerTime;
using UnityEngine.InputForUI;

namespace UnityEngine.UIElements;

[Token(Token = "0x200025B")]
internal class DefaultEventSystem
{
	[Token(Token = "0x200025C")]
	public enum UpdateMode
	{
		[Token(Token = "0x40008B6")]
		Always,
		[Token(Token = "0x40008B7")]
		IgnoreIfAppNotFocused
	}

	[Token(Token = "0x200025D")]
	internal struct FocusBasedEventSequenceContext : IDisposable
	{
		[Token(Token = "0x40008B8")]
		[FieldOffset(Offset = "0x0")]
		private DefaultEventSystem es;

		[Token(Token = "0x6000FD8")]
		[Address(RVA = "0x3273C90", Offset = "0x3272290", VA = "0x183273C90")]
		public FocusBasedEventSequenceContext(DefaultEventSystem es)
		{
		}

		[Token(Token = "0x6000FD9")]
		[Address(RVA = "0x3273C40", Offset = "0x3272240", VA = "0x183273C40", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200025E")]
	private class InputForUIProcessor
	{
		[Token(Token = "0x40008B9")]
		[FieldOffset(Offset = "0x10")]
		private readonly DefaultEventSystem m_EventSystem;

		[Token(Token = "0x40008BA")]
		[FieldOffset(Offset = "0x18")]
		private DiscreteTime m_LastPointerTimestamp;

		[Token(Token = "0x40008BB")]
		[FieldOffset(Offset = "0x20")]
		private DiscreteTime m_NextPointerTimestamp;

		[Token(Token = "0x40008BC")]
		[FieldOffset(Offset = "0x28")]
		private readonly Queue<UnityEngine.InputForUI.Event> m_EventList;

		[Token(Token = "0x6000FDA")]
		[Address(RVA = "0x327C840", Offset = "0x327AE40", VA = "0x18327C840")]
		public InputForUIProcessor(DefaultEventSystem eventSystem)
		{
		}

		[Token(Token = "0x6000FDB")]
		[Address(RVA = "0x327C6D0", Offset = "0x327ACD0", VA = "0x18327C6D0")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000FDC")]
		[Address(RVA = "0x3279F40", Offset = "0x3278540", VA = "0x183279F40")]
		public bool OnEvent(in UnityEngine.InputForUI.Event ev)
		{
			return default(bool);
		}

		[Token(Token = "0x6000FDD")]
		[Address(RVA = "0x327A1F0", Offset = "0x32787F0", VA = "0x18327A1F0")]
		public void ProcessInputForUIEvents()
		{
		}

		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x3279E90", Offset = "0x3278490", VA = "0x183279E90")]
		private EventModifiers GetModifiers(UnityEngine.InputForUI.EventModifiers eventModifiers)
		{
			return default(EventModifiers);
		}

		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x327B200", Offset = "0x3279800", VA = "0x18327B200")]
		private void ProcessPointerEvent(UnityEngine.InputForUI.PointerEvent pointerEvent)
		{
		}

		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x327AB80", Offset = "0x3279180", VA = "0x18327AB80")]
		private void ProcessNavigationEvent(UnityEngine.InputForUI.NavigationEvent navigationEvent)
		{
		}

		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x327A870", Offset = "0x3278E70", VA = "0x18327A870")]
		private void ProcessKeyEvent(UnityEngine.InputForUI.KeyEvent keyEvent)
		{
		}

		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x327C4F0", Offset = "0x327AAF0", VA = "0x18327C4F0")]
		private void ProcessTextInputEvent(UnityEngine.InputForUI.TextInputEvent textInputEvent)
		{
		}

		[Token(Token = "0x6000FE3")]
		[Address(RVA = "0x327A010", Offset = "0x3278610", VA = "0x18327A010")]
		private void ProcessCommandEvent(UnityEngine.InputForUI.CommandEvent commandEvent)
		{
		}

		[Token(Token = "0x6000FE4")]
		[Address(RVA = "0x327A0A0", Offset = "0x32786A0", VA = "0x18327A0A0")]
		private void ProcessIMECompositionEvent(UnityEngine.InputForUI.IMECompositionEvent compositionEvent)
		{
		}
	}

	[Token(Token = "0x2000261")]
	internal class LegacyInputProcessor
	{
		[Token(Token = "0x2000262")]
		internal interface IInput
		{
			[Token(Token = "0x1700031B")]
			int touchCount
			{
				[Token(Token = "0x6001008")]
				get;
			}

			[Token(Token = "0x1700031C")]
			bool mousePresent
			{
				[Token(Token = "0x600100A")]
				get;
			}

			[Token(Token = "0x1700031D")]
			Vector3 mousePosition
			{
				[Token(Token = "0x600100D")]
				get;
			}

			[Token(Token = "0x1700031E")]
			int mouseButtonCount
			{
				[Token(Token = "0x600100E")]
				get;
			}

			[Token(Token = "0x1700031F")]
			bool anyKey
			{
				[Token(Token = "0x600100F")]
				get;
			}

			[Token(Token = "0x17000320")]
			float unscaledTime
			{
				[Token(Token = "0x6001010")]
				get;
			}

			[Token(Token = "0x17000321")]
			float doubleClickTime
			{
				[Token(Token = "0x6001011")]
				get;
			}

			[Token(Token = "0x6001004")]
			bool GetButtonDown(string button);

			[Token(Token = "0x6001005")]
			float GetAxisRaw(string axis);

			[Token(Token = "0x6001006")]
			void ClearLastPenContactEvent();

			[Token(Token = "0x6001007")]
			PenData GetLastPenContactEvent();

			[Token(Token = "0x6001009")]
			Touch GetTouch(int index);

			[Token(Token = "0x600100B")]
			bool GetMouseButtonDown(int button);

			[Token(Token = "0x600100C")]
			bool GetMouseButtonUp(int button);
		}

		[Token(Token = "0x2000263")]
		private class Input : IInput
		{
			[Token(Token = "0x17000322")]
			public int touchCount
			{
				[Token(Token = "0x6001016")]
				[Address(RVA = "0x2FC1520", Offset = "0x2FBFB20", VA = "0x182FC1520", Slot = "8")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x17000323")]
			public bool mousePresent
			{
				[Token(Token = "0x6001018")]
				[Address(RVA = "0x2FC1500", Offset = "0x2FBFB00", VA = "0x182FC1500", Slot = "10")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x17000324")]
			public Vector3 mousePosition
			{
				[Token(Token = "0x600101B")]
				[Address(RVA = "0x2FC14D0", Offset = "0x2FBFAD0", VA = "0x182FC14D0", Slot = "13")]
				get
				{
					return default(Vector3);
				}
			}

			[Token(Token = "0x17000325")]
			public int mouseButtonCount
			{
				[Token(Token = "0x600101C")]
				[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "14")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x17000326")]
			public bool anyKey
			{
				[Token(Token = "0x600101D")]
				[Address(RVA = "0x327C950", Offset = "0x327AF50", VA = "0x18327C950", Slot = "15")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x17000327")]
			public float unscaledTime
			{
				[Token(Token = "0x600101E")]
				[Address(RVA = "0x327C980", Offset = "0x327AF80", VA = "0x18327C980", Slot = "16")]
				get
				{
					return default(float);
				}
			}

			[Token(Token = "0x17000328")]
			public float doubleClickTime
			{
				[Token(Token = "0x600101F")]
				[Address(RVA = "0x327C960", Offset = "0x327AF60", VA = "0x18327C960", Slot = "17")]
				get
				{
					return default(float);
				}
			}

			[Token(Token = "0x6001012")]
			[Address(RVA = "0x2FC13E0", Offset = "0x2FBF9E0", VA = "0x182FC13E0", Slot = "4")]
			public bool GetButtonDown(string button)
			{
				return default(bool);
			}

			[Token(Token = "0x6001013")]
			[Address(RVA = "0x327C940", Offset = "0x327AF40", VA = "0x18327C940", Slot = "5")]
			public float GetAxisRaw(string axis)
			{
				return default(float);
			}

			[Token(Token = "0x6001014")]
			[Address(RVA = "0x327C930", Offset = "0x327AF30", VA = "0x18327C930", Slot = "6")]
			public void ClearLastPenContactEvent()
			{
			}

			[Token(Token = "0x6001015")]
			[Address(RVA = "0x2FC1400", Offset = "0x2FBFA00", VA = "0x182FC1400", Slot = "7")]
			public PenData GetLastPenContactEvent()
			{
				return default(PenData);
			}

			[Token(Token = "0x6001017")]
			[Address(RVA = "0x2FC1470", Offset = "0x2FBFA70", VA = "0x182FC1470", Slot = "9")]
			public Touch GetTouch(int index)
			{
				return default(Touch);
			}

			[Token(Token = "0x6001019")]
			[Address(RVA = "0x2FC1440", Offset = "0x2FBFA40", VA = "0x182FC1440", Slot = "11")]
			public bool GetMouseButtonDown(int button)
			{
				return default(bool);
			}

			[Token(Token = "0x600101A")]
			[Address(RVA = "0x2FC1450", Offset = "0x2FBFA50", VA = "0x182FC1450", Slot = "12")]
			public bool GetMouseButtonUp(int button)
			{
				return default(bool);
			}

			[Token(Token = "0x6001020")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public Input()
			{
			}
		}

		[Token(Token = "0x2000264")]
		private class NoInput : IInput
		{
			[Token(Token = "0x17000329")]
			public int touchCount
			{
				[Token(Token = "0x6001023")]
				[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "8")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x1700032A")]
			public bool mousePresent
			{
				[Token(Token = "0x6001027")]
				[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700032B")]
			public Vector3 mousePosition
			{
				[Token(Token = "0x600102A")]
				[Address(RVA = "0xB62B70", Offset = "0xB61170", VA = "0x180B62B70", Slot = "13")]
				get
				{
					return default(Vector3);
				}
			}

			[Token(Token = "0x1700032C")]
			public int mouseButtonCount
			{
				[Token(Token = "0x600102B")]
				[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x1700032D")]
			public bool anyKey
			{
				[Token(Token = "0x600102C")]
				[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "15")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700032E")]
			public float unscaledTime
			{
				[Token(Token = "0x600102D")]
				[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "16")]
				get
				{
					return default(float);
				}
			}

			[Token(Token = "0x1700032F")]
			public float doubleClickTime
			{
				[Token(Token = "0x600102E")]
				[Address(RVA = "0x20A7610", Offset = "0x20A5C10", VA = "0x1820A7610", Slot = "17")]
				get
				{
					return default(float);
				}
			}

			[Token(Token = "0x6001021")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
			public bool GetButtonDown(string button)
			{
				return default(bool);
			}

			[Token(Token = "0x6001022")]
			[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "5")]
			public float GetAxisRaw(string axis)
			{
				return default(float);
			}

			[Token(Token = "0x6001024")]
			[Address(RVA = "0x3280E80", Offset = "0x327F480", VA = "0x183280E80", Slot = "9")]
			public Touch GetTouch(int index)
			{
				return default(Touch);
			}

			[Token(Token = "0x6001025")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
			public void ClearLastPenContactEvent()
			{
			}

			[Token(Token = "0x6001026")]
			[Address(RVA = "0xB64860", Offset = "0xB62E60", VA = "0x180B64860", Slot = "7")]
			public PenData GetLastPenContactEvent()
			{
				return default(PenData);
			}

			[Token(Token = "0x6001028")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
			public bool GetMouseButtonDown(int button)
			{
				return default(bool);
			}

			[Token(Token = "0x6001029")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
			public bool GetMouseButtonUp(int button)
			{
				return default(bool);
			}

			[Token(Token = "0x600102F")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public NoInput()
			{
			}
		}

		[Token(Token = "0x40008CA")]
		[FieldOffset(Offset = "0x10")]
		private bool m_SendingTouchEvents;

		[Token(Token = "0x40008CB")]
		[FieldOffset(Offset = "0x11")]
		private bool m_SendingPenEvent;

		[Token(Token = "0x40008CC")]
		[FieldOffset(Offset = "0x14")]
		private EventModifiers m_CurrentModifiers;

		[Token(Token = "0x40008CD")]
		[FieldOffset(Offset = "0x18")]
		private int m_LastMousePressButton;

		[Token(Token = "0x40008CE")]
		[FieldOffset(Offset = "0x1C")]
		private float m_NextMousePressTime;

		[Token(Token = "0x40008CF")]
		[FieldOffset(Offset = "0x20")]
		private int m_LastMouseClickCount;

		[Token(Token = "0x40008D0")]
		[FieldOffset(Offset = "0x24")]
		private Vector2 m_LastMousePosition;

		[Token(Token = "0x40008D1")]
		[FieldOffset(Offset = "0x2C")]
		private bool m_MouseProcessedAtLeastOnce;

		[Token(Token = "0x40008D2")]
		[FieldOffset(Offset = "0x30")]
		private Dictionary<int, int> m_TouchFingerIdToFingerIndex;

		[Token(Token = "0x40008D3")]
		[FieldOffset(Offset = "0x38")]
		private int m_TouchNextFingerIndex;

		[Token(Token = "0x40008D4")]
		[FieldOffset(Offset = "0x40")]
		private IInput m_Input;

		[Token(Token = "0x40008D5")]
		[FieldOffset(Offset = "0x48")]
		private readonly Event m_Event;

		[Token(Token = "0x40008D6")]
		[FieldOffset(Offset = "0x50")]
		private readonly DefaultEventSystem m_EventSystem;

		[Token(Token = "0x40008D7")]
		[FieldOffset(Offset = "0x58")]
		private int m_ConsecutiveMoveCount;

		[Token(Token = "0x40008D8")]
		[FieldOffset(Offset = "0x5C")]
		private Vector2 m_LastMoveVector;

		[Token(Token = "0x40008D9")]
		[FieldOffset(Offset = "0x64")]
		private float m_PrevActionTime;

		[Token(Token = "0x40008DA")]
		[FieldOffset(Offset = "0x68")]
		private bool m_IsMoveFromKeyboard;

		[Token(Token = "0x17000319")]
		private EventModifiers m_CurrentPointerModifiers
		{
			[Token(Token = "0x6000FF5")]
			[Address(RVA = "0x327F780", Offset = "0x327DD80", VA = "0x18327F780")]
			get
			{
				return default(EventModifiers);
			}
		}

		[Token(Token = "0x1700031A")]
		public IInput input
		{
			[Token(Token = "0x6000FF6")]
			[Address(RVA = "0x327F740", Offset = "0x327DD40", VA = "0x18327F740")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000FF7")]
		[Address(RVA = "0x327F620", Offset = "0x327DC20", VA = "0x18327F620")]
		public LegacyInputProcessor(DefaultEventSystem eventSystem)
		{
		}

		[Token(Token = "0x6000FF8")]
		[Address(RVA = "0x327C990", Offset = "0x327AF90", VA = "0x18327C990")]
		public IInput GetDefaultInput()
		{
			return null;
		}

		[Token(Token = "0x6000FF9")]
		[Address(RVA = "0x327CE50", Offset = "0x327B450", VA = "0x18327CE50")]
		public void ProcessLegacyInputEvents()
		{
		}

		[Token(Token = "0x6000FFA")]
		[Address(RVA = "0x327E730", Offset = "0x327CD30", VA = "0x18327E730")]
		private void SendIMGUIEvents()
		{
		}

		[Token(Token = "0x6000FFB")]
		[Address(RVA = "0x327CF50", Offset = "0x327B550", VA = "0x18327CF50")]
		private void ProcessMouseEvents()
		{
		}

		[Token(Token = "0x6000FFC")]
		[Address(RVA = "0x327EFB0", Offset = "0x327D5B0", VA = "0x18327EFB0")]
		private void SendInputEvents()
		{
		}

		[Token(Token = "0x6000FFD")]
		[Address(RVA = "0x327E020", Offset = "0x327C620", VA = "0x18327E020")]
		private bool ProcessTouchEvents()
		{
			return default(bool);
		}

		[Token(Token = "0x6000FFE")]
		[Address(RVA = "0x327DA50", Offset = "0x327C050", VA = "0x18327DA50")]
		private bool ProcessPenEvents()
		{
			return default(bool);
		}

		[Token(Token = "0x6000FFF")]
		[Address(RVA = "0x327CA80", Offset = "0x327B080", VA = "0x18327CA80")]
		private Vector2 GetRawMoveVector()
		{
			return default(Vector2);
		}

		[Token(Token = "0x6001000")]
		[Address(RVA = "0x327F340", Offset = "0x327D940", VA = "0x18327F340")]
		private bool ShouldSendMoveFromInput()
		{
			return default(bool);
		}

		[Token(Token = "0x6001001")]
		[Address(RVA = "0x327DE40", Offset = "0x327C440", VA = "0x18327DE40")]
		private void ProcessTabEvent(Event e, EventModifiers modifiers)
		{
		}

		[Token(Token = "0x6001002")]
		[Address(RVA = "0x327CD50", Offset = "0x327B350", VA = "0x18327CD50")]
		private static EventBase MakeTouchEvent(Touch touch, int pointerId, EventModifiers modifiers, int targetDisplay)
		{
			return null;
		}

		[Token(Token = "0x6001003")]
		[Address(RVA = "0x327CC80", Offset = "0x327B280", VA = "0x18327CC80")]
		private static EventBase MakePenEvent(PenData pen, EventModifiers modifiers, int targetDisplay)
		{
			return null;
		}
	}

	[Token(Token = "0x40008A1")]
	[FieldOffset(Offset = "0x0")]
	internal static Func<bool> IsEditorRemoteConnected;

	[Token(Token = "0x40008A2")]
	[FieldOffset(Offset = "0x10")]
	private RuntimePanel m_FocusedPanel;

	[Token(Token = "0x40008A3")]
	[FieldOffset(Offset = "0x18")]
	private RuntimePanel m_PreviousFocusedPanel;

	[Token(Token = "0x40008A4")]
	[FieldOffset(Offset = "0x20")]
	private Focusable m_PreviousFocusedElement;

	[Token(Token = "0x40008A5")]
	[FieldOffset(Offset = "0x28")]
	private int m_UpdateFrameCount;

	[Token(Token = "0x40008A6")]
	[FieldOffset(Offset = "0x30")]
	private LegacyInputProcessor m_LegacyInputProcessor;

	[Token(Token = "0x40008A7")]
	[FieldOffset(Offset = "0x38")]
	private InputForUIProcessor m_InputForUIProcessor;

	[Token(Token = "0x40008A8")]
	[FieldOffset(Offset = "0x40")]
	private bool m_IsInputReady;

	[Token(Token = "0x40008A9")]
	[FieldOffset(Offset = "0x41")]
	private bool m_UseInputForUI;

	[Token(Token = "0x40008AA")]
	[FieldOffset(Offset = "0x42")]
	private bool m_IsInputForUIActive;

	[Token(Token = "0x40008AB")]
	[FieldOffset(Offset = "0x48")]
	private IScreenRaycaster m_Raycaster;

	[Token(Token = "0x40008AC")]
	[FieldOffset(Offset = "0x50")]
	private readonly PhysicsDocumentPicker m_WorldSpacePicker;

	[Token(Token = "0x40008AD")]
	[FieldOffset(Offset = "0x58")]
	private readonly ScreenOverlayPanelPicker m_ScreenOverlayPicker;

	[Token(Token = "0x40008AE")]
	[FieldOffset(Offset = "0x60")]
	public float worldSpaceMaxDistance;

	[Token(Token = "0x40008AF")]
	[FieldOffset(Offset = "0x64")]
	public int worldSpaceLayers;

	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector3 s_InvalidPanelCoordinates;

	[Token(Token = "0x40008B1")]
	[FieldOffset(Offset = "0x68")]
	internal bool verbose;

	[Token(Token = "0x40008B2")]
	[FieldOffset(Offset = "0x69")]
	internal bool logToGameScreen;

	[Token(Token = "0x40008B3")]
	[FieldOffset(Offset = "0x70")]
	private Label m_LogLabel;

	[Token(Token = "0x40008B4")]
	[FieldOffset(Offset = "0x78")]
	private List<string> m_LogLines;

	[Token(Token = "0x17000313")]
	private bool isAppFocused
	{
		[Token(Token = "0x6000FBC")]
		[Address(RVA = "0x32599F0", Offset = "0x3257FF0", VA = "0x1832599F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000314")]
	public RuntimePanel focusedPanel
	{
		[Token(Token = "0x6000FBE")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FBF")]
		[Address(RVA = "0x3258EA0", Offset = "0x32574A0", VA = "0x183258EA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000315")]
	internal LegacyInputProcessor legacyInputProcessor
	{
		[Token(Token = "0x6000FC1")]
		[Address(RVA = "0x3259A30", Offset = "0x3258030", VA = "0x183259A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000316")]
	private InputForUIProcessor inputForUIProcessor
	{
		[Token(Token = "0x6000FC2")]
		[Address(RVA = "0x3259980", Offset = "0x3257F80", VA = "0x183259980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000317")]
	internal bool isInputReady
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x3259B10", Offset = "0x3258110", VA = "0x183259B10")]
		set
		{
		}
	}

	[Token(Token = "0x17000318")]
	public IScreenRaycaster raycaster
	{
		[Token(Token = "0x6000FCC")]
		[Address(RVA = "0x3259AA0", Offset = "0x32580A0", VA = "0x183259AA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FCD")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x3258FC0", Offset = "0x32575C0", VA = "0x183258FC0")]
	private bool ShouldIgnoreEventsOnAppNotFocused()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x3259640", Offset = "0x3257C40", VA = "0x183259640")]
	public void Update(UpdateMode updateMode = UpdateMode.Always)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x32585B0", Offset = "0x3256BB0", VA = "0x1832585B0")]
	internal FocusBasedEventSequenceContext FocusBasedEventSequence()
	{
		return default(FocusBasedEventSequenceContext);
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x3258F00", Offset = "0x3257500", VA = "0x183258F00")]
	private void RemoveInputProcessor()
	{
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x3258770", Offset = "0x3256D70", VA = "0x183258770")]
	private void InitInputProcessor()
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x3258EA0", Offset = "0x32574A0", VA = "0x183258EA0")]
	internal void OnFocusEvent(RuntimePanel panel, FocusEvent evt)
	{
	}

	[Token(Token = "0x6000FC8")]
	internal void SendFocusBasedEvent<TArg>(Func<TArg, EventBase> evtFactory, TArg arg)
	{
	}

	[Token(Token = "0x6000FC9")]
	internal void SendPositionBasedEvent<TArg>(Vector3 mousePosition, Vector3 delta, int pointerId, int? targetDisplay, Func<Vector3, Vector3, TArg, EventBase> evtFactory, TArg arg, bool deselectIfNoTarget = false)
	{
	}

	[Token(Token = "0x6000FCA")]
	internal void SendPositionBasedEvent<TArg>(Vector3 mousePosition, Vector3 delta, int pointerId, int? targetDisplay, Func<Vector3, TArg, EventBase> evtFactory, TArg arg, bool deselectIfNoTarget = false)
	{
	}

	[Token(Token = "0x6000FCB")]
	internal void SendRayBasedEvent<TArg>(Ray worldRay, float maxDistance, int pointerId, Func<Vector3, TArg, EventBase> evtFactory, TArg arg, bool deselectIfNoTarget = false)
	{
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x3257630", Offset = "0x3255C30", VA = "0x183257630")]
	internal void FindTargetAtPosition(Vector2 mousePosition, Vector2 delta, int pointerId, int? targetDisplay, out VisualElement target, out RuntimePanel targetPanel, out Vector3 targetPanelPosition, out VisualElement elementUnderPointer, out Camera camera)
	{
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x3258060", Offset = "0x3256660", VA = "0x183258060")]
	internal void FindTargetAtRay(Ray worldRay, float maxDistance, int pointerId, out VisualElement target, out RuntimePanel targetPanel, out Vector3 targetPanelPosition, out VisualElement elementUnderPointer)
	{
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x32585E0", Offset = "0x3256BE0", VA = "0x1832585E0")]
	private Vector3 GetPanelPosition(VisualElement pickedElement, UIDocument document, Ray worldRay)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x3258FE0", Offset = "0x32575E0", VA = "0x183258FE0")]
	private void UpdateFocusedPanel(RuntimePanel runtimePanel)
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x32590C0", Offset = "0x32576C0", VA = "0x1832590C0")]
	private void UpdateWorldSpacePointers()
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x3258E00", Offset = "0x3257400", VA = "0x183258E00")]
	private void Log(object o)
	{
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x3258D40", Offset = "0x3257340", VA = "0x183258D40")]
	private void LogWarning(object o)
	{
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x32588D0", Offset = "0x3256ED0", VA = "0x1832588D0")]
	private void LogToGameScreen(string s)
	{
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x3259870", Offset = "0x3257E70", VA = "0x183259870")]
	public DefaultEventSystem()
	{
	}
}
