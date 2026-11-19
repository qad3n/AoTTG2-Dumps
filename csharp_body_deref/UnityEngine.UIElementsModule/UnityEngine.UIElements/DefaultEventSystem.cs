// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DefaultEventSystem
// Update status: unchanged since the previous dump
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
	private class InputForUIProcessor
	{
		[Token(Token = "0x40008B5")]
		[FieldOffset(Offset = "0x10")]
		private readonly DefaultEventSystem m_EventSystem;

		[Token(Token = "0x40008B6")]
		[FieldOffset(Offset = "0x18")]
		private DiscreteTime m_LastPointerTimestamp;

		[Token(Token = "0x40008B7")]
		[FieldOffset(Offset = "0x20")]
		private DiscreteTime m_NextPointerTimestamp;

		[Token(Token = "0x40008B8")]
		[FieldOffset(Offset = "0x28")]
		private readonly Queue<UnityEngine.InputForUI.Event> m_EventList;

		[Token(Token = "0x6000FD8")]
		[Address(RVA = "0x6C7B210", Offset = "0x6C7A210", VA = "0x6C7B210")]
		public InputForUIProcessor(DefaultEventSystem eventSystem)
		{
		}

		[Token(Token = "0x6000FD9")]
		[Address(RVA = "0x6C7B2E0", Offset = "0x6C7A2E0", VA = "0x6C7B2E0")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000FDA")]
		[Address(RVA = "0x6C7B370", Offset = "0x6C7A370", VA = "0x6C7B370")]
		public bool OnEvent(in UnityEngine.InputForUI.Event ev)
		{
			return default(bool);
		}

		[Token(Token = "0x6000FDB")]
		[Address(RVA = "0x6C7B3E0", Offset = "0x6C7A3E0", VA = "0x6C7B3E0")]
		public void ProcessInputForUIEvents()
		{
		}

		[Token(Token = "0x6000FDC")]
		[Address(RVA = "0x6C7DA40", Offset = "0x6C7CA40", VA = "0x6C7DA40")]
		private EventModifiers GetModifiers(UnityEngine.InputForUI.EventModifiers eventModifiers)
		{
			return default(EventModifiers);
		}

		[Token(Token = "0x6000FDD")]
		[Address(RVA = "0x6C7BB10", Offset = "0x6C7AB10", VA = "0x6C7BB10")]
		private void ProcessPointerEvent(UnityEngine.InputForUI.PointerEvent pointerEvent)
		{
		}

		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x6C7D3B0", Offset = "0x6C7C3B0", VA = "0x6C7D3B0")]
		private void ProcessNavigationEvent(UnityEngine.InputForUI.NavigationEvent navigationEvent)
		{
		}

		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x6C7CBE0", Offset = "0x6C7BBE0", VA = "0x6C7CBE0")]
		private void ProcessKeyEvent(UnityEngine.InputForUI.KeyEvent keyEvent)
		{
		}

		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x6C7CFA0", Offset = "0x6C7BFA0", VA = "0x6C7CFA0")]
		private void ProcessTextInputEvent(UnityEngine.InputForUI.TextInputEvent textInputEvent)
		{
		}

		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x6C7D330", Offset = "0x6C7C330", VA = "0x6C7D330")]
		private void ProcessCommandEvent(UnityEngine.InputForUI.CommandEvent commandEvent)
		{
		}

		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x6C7D1E0", Offset = "0x6C7C1E0", VA = "0x6C7D1E0")]
		private void ProcessIMECompositionEvent(UnityEngine.InputForUI.IMECompositionEvent compositionEvent)
		{
		}
	}

	[Token(Token = "0x200025F")]
	internal class LegacyInputProcessor
	{
		[Token(Token = "0x2000260")]
		internal interface IInput
		{
			[Token(Token = "0x1700031B")]
			int touchCount
			{
				[Token(Token = "0x6001006")]
				get;
			}

			[Token(Token = "0x1700031C")]
			bool mousePresent
			{
				[Token(Token = "0x6001008")]
				get;
			}

			[Token(Token = "0x1700031D")]
			Vector3 mousePosition
			{
				[Token(Token = "0x600100B")]
				get;
			}

			[Token(Token = "0x1700031E")]
			int mouseButtonCount
			{
				[Token(Token = "0x600100C")]
				get;
			}

			[Token(Token = "0x1700031F")]
			bool anyKey
			{
				[Token(Token = "0x600100D")]
				get;
			}

			[Token(Token = "0x17000320")]
			float unscaledTime
			{
				[Token(Token = "0x600100E")]
				get;
			}

			[Token(Token = "0x17000321")]
			float doubleClickTime
			{
				[Token(Token = "0x600100F")]
				get;
			}

			[Token(Token = "0x6001002")]
			bool GetButtonDown(string button);

			[Token(Token = "0x6001003")]
			float GetAxisRaw(string axis);

			[Token(Token = "0x6001004")]
			void ClearLastPenContactEvent();

			[Token(Token = "0x6001005")]
			PenData GetLastPenContactEvent();

			[Token(Token = "0x6001007")]
			Touch GetTouch(int index);

			[Token(Token = "0x6001009")]
			bool GetMouseButtonDown(int button);

			[Token(Token = "0x600100A")]
			bool GetMouseButtonUp(int button);
		}

		[Token(Token = "0x2000261")]
		private class Input : IInput
		{
			[Token(Token = "0x17000322")]
			public int touchCount
			{
				[Token(Token = "0x6001014")]
				[Address(RVA = "0x6C814B0", Offset = "0x6C804B0", VA = "0x6C814B0", Slot = "8")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x17000323")]
			public bool mousePresent
			{
				[Token(Token = "0x6001016")]
				[Address(RVA = "0x6C81510", Offset = "0x6C80510", VA = "0x6C81510", Slot = "10")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x17000324")]
			public Vector3 mousePosition
			{
				[Token(Token = "0x6001019")]
				[Address(RVA = "0x6C81540", Offset = "0x6C80540", VA = "0x6C81540", Slot = "13")]
				get
				{
					return default(Vector3);
				}
			}

			[Token(Token = "0x17000325")]
			public int mouseButtonCount
			{
				[Token(Token = "0x600101A")]
				[Address(RVA = "0x6C81550", Offset = "0x6C80550", VA = "0x6C81550", Slot = "14")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x17000326")]
			public bool anyKey
			{
				[Token(Token = "0x600101B")]
				[Address(RVA = "0x6C81560", Offset = "0x6C80560", VA = "0x6C81560", Slot = "15")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x17000327")]
			public float unscaledTime
			{
				[Token(Token = "0x600101C")]
				[Address(RVA = "0x6C81570", Offset = "0x6C80570", VA = "0x6C81570", Slot = "16")]
				get
				{
					return default(float);
				}
			}

			[Token(Token = "0x17000328")]
			public float doubleClickTime
			{
				[Token(Token = "0x600101D")]
				[Address(RVA = "0x6C81580", Offset = "0x6C80580", VA = "0x6C81580", Slot = "17")]
				get
				{
					return default(float);
				}
			}

			[Token(Token = "0x6001010")]
			[Address(RVA = "0x6C81440", Offset = "0x6C80440", VA = "0x6C81440", Slot = "4")]
			public bool GetButtonDown(string button)
			{
				return default(bool);
			}

			[Token(Token = "0x6001011")]
			[Address(RVA = "0x6C81450", Offset = "0x6C80450", VA = "0x6C81450", Slot = "5")]
			public float GetAxisRaw(string axis)
			{
				return default(float);
			}

			[Token(Token = "0x6001012")]
			[Address(RVA = "0x6C81460", Offset = "0x6C80460", VA = "0x6C81460", Slot = "6")]
			public void ClearLastPenContactEvent()
			{
			}

			[Token(Token = "0x6001013")]
			[Address(RVA = "0x6C81470", Offset = "0x6C80470", VA = "0x6C81470", Slot = "7")]
			public PenData GetLastPenContactEvent()
			{
				return default(PenData);
			}

			[Token(Token = "0x6001015")]
			[Address(RVA = "0x6C814C0", Offset = "0x6C804C0", VA = "0x6C814C0", Slot = "9")]
			public Touch GetTouch(int index)
			{
				return default(Touch);
			}

			[Token(Token = "0x6001017")]
			[Address(RVA = "0x6C81520", Offset = "0x6C80520", VA = "0x6C81520", Slot = "11")]
			public bool GetMouseButtonDown(int button)
			{
				return default(bool);
			}

			[Token(Token = "0x6001018")]
			[Address(RVA = "0x6C81530", Offset = "0x6C80530", VA = "0x6C81530", Slot = "12")]
			public bool GetMouseButtonUp(int button)
			{
				return default(bool);
			}

			[Token(Token = "0x600101E")]
			[Address(RVA = "0x6C7E510", Offset = "0x6C7D510", VA = "0x6C7E510")]
			public Input()
			{
			}
		}

		[Token(Token = "0x2000262")]
		private class NoInput : IInput
		{
			[Token(Token = "0x17000329")]
			public int touchCount
			{
				[Token(Token = "0x6001021")]
				[Address(RVA = "0x6C815C0", Offset = "0x6C805C0", VA = "0x6C815C0", Slot = "8")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x1700032A")]
			public bool mousePresent
			{
				[Token(Token = "0x6001025")]
				[Address(RVA = "0x6C81620", Offset = "0x6C80620", VA = "0x6C81620", Slot = "10")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700032B")]
			public Vector3 mousePosition
			{
				[Token(Token = "0x6001028")]
				[Address(RVA = "0x6C81650", Offset = "0x6C80650", VA = "0x6C81650", Slot = "13")]
				get
				{
					return default(Vector3);
				}
			}

			[Token(Token = "0x1700032C")]
			public int mouseButtonCount
			{
				[Token(Token = "0x6001029")]
				[Address(RVA = "0x6C81660", Offset = "0x6C80660", VA = "0x6C81660", Slot = "14")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x1700032D")]
			public bool anyKey
			{
				[Token(Token = "0x600102A")]
				[Address(RVA = "0x6C81670", Offset = "0x6C80670", VA = "0x6C81670", Slot = "15")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700032E")]
			public float unscaledTime
			{
				[Token(Token = "0x600102B")]
				[Address(RVA = "0x6C81680", Offset = "0x6C80680", VA = "0x6C81680", Slot = "16")]
				get
				{
					return default(float);
				}
			}

			[Token(Token = "0x1700032F")]
			public float doubleClickTime
			{
				[Token(Token = "0x600102C")]
				[Address(RVA = "0x6C81690", Offset = "0x6C80690", VA = "0x6C81690", Slot = "17")]
				get
				{
					return default(float);
				}
			}

			[Token(Token = "0x600101F")]
			[Address(RVA = "0x6C815A0", Offset = "0x6C805A0", VA = "0x6C815A0", Slot = "4")]
			public bool GetButtonDown(string button)
			{
				return default(bool);
			}

			[Token(Token = "0x6001020")]
			[Address(RVA = "0x6C815B0", Offset = "0x6C805B0", VA = "0x6C815B0", Slot = "5")]
			public float GetAxisRaw(string axis)
			{
				return default(float);
			}

			[Token(Token = "0x6001022")]
			[Address(RVA = "0x6C815D0", Offset = "0x6C805D0", VA = "0x6C815D0", Slot = "9")]
			public Touch GetTouch(int index)
			{
				return default(Touch);
			}

			[Token(Token = "0x6001023")]
			[Address(RVA = "0x6C815F0", Offset = "0x6C805F0", VA = "0x6C815F0", Slot = "6")]
			public void ClearLastPenContactEvent()
			{
			}

			[Token(Token = "0x6001024")]
			[Address(RVA = "0x6C81600", Offset = "0x6C80600", VA = "0x6C81600", Slot = "7")]
			public PenData GetLastPenContactEvent()
			{
				return default(PenData);
			}

			[Token(Token = "0x6001026")]
			[Address(RVA = "0x6C81630", Offset = "0x6C80630", VA = "0x6C81630", Slot = "11")]
			public bool GetMouseButtonDown(int button)
			{
				return default(bool);
			}

			[Token(Token = "0x6001027")]
			[Address(RVA = "0x6C81640", Offset = "0x6C80640", VA = "0x6C81640", Slot = "12")]
			public bool GetMouseButtonUp(int button)
			{
				return default(bool);
			}

			[Token(Token = "0x600102D")]
			[Address(RVA = "0x6C7E520", Offset = "0x6C7D520", VA = "0x6C7E520")]
			public NoInput()
			{
			}
		}

		[Token(Token = "0x40008C6")]
		[FieldOffset(Offset = "0x10")]
		private bool m_SendingTouchEvents;

		[Token(Token = "0x40008C7")]
		[FieldOffset(Offset = "0x11")]
		private bool m_SendingPenEvent;

		[Token(Token = "0x40008C8")]
		[FieldOffset(Offset = "0x14")]
		private EventModifiers m_CurrentModifiers;

		[Token(Token = "0x40008C9")]
		[FieldOffset(Offset = "0x18")]
		private int m_LastMousePressButton;

		[Token(Token = "0x40008CA")]
		[FieldOffset(Offset = "0x1C")]
		private float m_NextMousePressTime;

		[Token(Token = "0x40008CB")]
		[FieldOffset(Offset = "0x20")]
		private int m_LastMouseClickCount;

		[Token(Token = "0x40008CC")]
		[FieldOffset(Offset = "0x24")]
		private Vector2 m_LastMousePosition;

		[Token(Token = "0x40008CD")]
		[FieldOffset(Offset = "0x2C")]
		private bool m_MouseProcessedAtLeastOnce;

		[Token(Token = "0x40008CE")]
		[FieldOffset(Offset = "0x30")]
		private Dictionary<int, int> m_TouchFingerIdToFingerIndex;

		[Token(Token = "0x40008CF")]
		[FieldOffset(Offset = "0x38")]
		private int m_TouchNextFingerIndex;

		[Token(Token = "0x40008D0")]
		[FieldOffset(Offset = "0x40")]
		private IInput m_Input;

		[Token(Token = "0x40008D1")]
		[FieldOffset(Offset = "0x48")]
		private readonly Event m_Event;

		[Token(Token = "0x40008D2")]
		[FieldOffset(Offset = "0x50")]
		private readonly DefaultEventSystem m_EventSystem;

		[Token(Token = "0x40008D3")]
		[FieldOffset(Offset = "0x58")]
		private int m_ConsecutiveMoveCount;

		[Token(Token = "0x40008D4")]
		[FieldOffset(Offset = "0x5C")]
		private Vector2 m_LastMoveVector;

		[Token(Token = "0x40008D5")]
		[FieldOffset(Offset = "0x64")]
		private float m_PrevActionTime;

		[Token(Token = "0x40008D6")]
		[FieldOffset(Offset = "0x68")]
		private bool m_IsMoveFromKeyboard;

		[Token(Token = "0x17000319")]
		private EventModifiers m_CurrentPointerModifiers
		{
			[Token(Token = "0x6000FF3")]
			[Address(RVA = "0x6C7E210", Offset = "0x6C7D210", VA = "0x6C7E210")]
			get
			{
				return default(EventModifiers);
			}
		}

		[Token(Token = "0x1700031A")]
		public IInput input
		{
			[Token(Token = "0x6000FF4")]
			[Address(RVA = "0x6C7E220", Offset = "0x6C7D220", VA = "0x6C7E220")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000FF5")]
		[Address(RVA = "0x6C7E400", Offset = "0x6C7D400", VA = "0x6C7E400")]
		public LegacyInputProcessor(DefaultEventSystem eventSystem)
		{
		}

		[Token(Token = "0x6000FF6")]
		[Address(RVA = "0x6C7E260", Offset = "0x6C7D260", VA = "0x6C7E260")]
		public IInput GetDefaultInput()
		{
			return null;
		}

		[Token(Token = "0x6000FF7")]
		[Address(RVA = "0x6C7E530", Offset = "0x6C7D530", VA = "0x6C7E530")]
		public void ProcessLegacyInputEvents()
		{
		}

		[Token(Token = "0x6000FF8")]
		[Address(RVA = "0x6C7FCB0", Offset = "0x6C7ECB0", VA = "0x6C7FCB0")]
		private void SendIMGUIEvents()
		{
		}

		[Token(Token = "0x6000FF9")]
		[Address(RVA = "0x6C7F0F0", Offset = "0x6C7E0F0", VA = "0x6C7F0F0")]
		private void ProcessMouseEvents()
		{
		}

		[Token(Token = "0x6000FFA")]
		[Address(RVA = "0x6C80470", Offset = "0x6C7F470", VA = "0x6C80470")]
		private void SendInputEvents()
		{
		}

		[Token(Token = "0x6000FFB")]
		[Address(RVA = "0x6C7E9C0", Offset = "0x6C7D9C0", VA = "0x6C7E9C0")]
		private bool ProcessTouchEvents()
		{
			return default(bool);
		}

		[Token(Token = "0x6000FFC")]
		[Address(RVA = "0x6C7E640", Offset = "0x6C7D640", VA = "0x6C7E640")]
		private bool ProcessPenEvents()
		{
			return default(bool);
		}

		[Token(Token = "0x6000FFD")]
		[Address(RVA = "0x6C80F40", Offset = "0x6C7FF40", VA = "0x6C80F40")]
		private Vector2 GetRawMoveVector()
		{
			return default(Vector2);
		}

		[Token(Token = "0x6000FFE")]
		[Address(RVA = "0x6C80AC0", Offset = "0x6C7FAC0", VA = "0x6C80AC0")]
		private bool ShouldSendMoveFromInput()
		{
			return default(bool);
		}

		[Token(Token = "0x6000FFF")]
		[Address(RVA = "0x6C808F0", Offset = "0x6C7F8F0", VA = "0x6C808F0")]
		private void ProcessTabEvent(Event e, EventModifiers modifiers)
		{
		}

		[Token(Token = "0x6001000")]
		[Address(RVA = "0x6C812F0", Offset = "0x6C802F0", VA = "0x6C812F0")]
		private static EventBase MakeTouchEvent(Touch touch, int pointerId, EventModifiers modifiers, int targetDisplay)
		{
			return null;
		}

		[Token(Token = "0x6001001")]
		[Address(RVA = "0x6C813D0", Offset = "0x6C803D0", VA = "0x6C813D0")]
		private static EventBase MakePenEvent(PenData pen, EventModifiers modifiers, int targetDisplay)
		{
			return null;
		}
	}

	[Token(Token = "0x2000264")]
	public enum UpdateMode
	{
		[Token(Token = "0x40008E5")]
		Always,
		[Token(Token = "0x40008E6")]
		IgnoreIfAppNotFocused
	}

	[Token(Token = "0x2000265")]
	internal struct FocusBasedEventSequenceContext : IDisposable
	{
		[Token(Token = "0x40008E7")]
		[FieldOffset(Offset = "0x0")]
		private DefaultEventSystem es;

		[Token(Token = "0x600103C")]
		[Address(RVA = "0x6C81F10", Offset = "0x6C80F10", VA = "0x6C81F10")]
		public FocusBasedEventSequenceContext(DefaultEventSystem es)
		{
		}

		[Token(Token = "0x600103D")]
		[Address(RVA = "0x6C7DA00", Offset = "0x6C7CA00", VA = "0x6C7DA00", Slot = "4")]
		public void Dispose()
		{
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
		[Address(RVA = "0x6C77AC0", Offset = "0x6C76AC0", VA = "0x6C77AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000314")]
	public RuntimePanel focusedPanel
	{
		[Token(Token = "0x6000FBE")]
		[Address(RVA = "0x6C77B40", Offset = "0x6C76B40", VA = "0x6C77B40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FBF")]
		[Address(RVA = "0x6C77B50", Offset = "0x6C76B50", VA = "0x6C77B50")]
		set
		{
		}
	}

	[Token(Token = "0x17000315")]
	internal LegacyInputProcessor legacyInputProcessor
	{
		[Token(Token = "0x6000FC1")]
		[Address(RVA = "0x6C77E10", Offset = "0x6C76E10", VA = "0x6C77E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000316")]
	private InputForUIProcessor inputForUIProcessor
	{
		[Token(Token = "0x6000FC2")]
		[Address(RVA = "0x6C77DA0", Offset = "0x6C76DA0", VA = "0x6C77DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000317")]
	internal bool isInputReady
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x6C78610", Offset = "0x6C77610", VA = "0x6C78610")]
		set
		{
		}
	}

	[Token(Token = "0x17000318")]
	public IScreenRaycaster raycaster
	{
		[Token(Token = "0x6000FCC")]
		[Address(RVA = "0x6C78960", Offset = "0x6C77960", VA = "0x6C78960")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FCD")]
		[Address(RVA = "0x6C789D0", Offset = "0x6C779D0", VA = "0x6C789D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x6C77B20", Offset = "0x6C76B20", VA = "0x6C77B20")]
	private bool ShouldIgnoreEventsOnAppNotFocused()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x6C77BA0", Offset = "0x6C76BA0", VA = "0x6C77BA0")]
	public void Update(UpdateMode updateMode = UpdateMode.Always)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x6C788F0", Offset = "0x6C778F0", VA = "0x6C788F0")]
	internal FocusBasedEventSequenceContext FocusBasedEventSequence()
	{
		return default(FocusBasedEventSequenceContext);
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x6C787F0", Offset = "0x6C777F0", VA = "0x6C787F0")]
	private void RemoveInputProcessor()
	{
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x6C78630", Offset = "0x6C77630", VA = "0x6C78630")]
	private void InitInputProcessor()
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x6C78910", Offset = "0x6C77910", VA = "0x6C78910")]
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
	[Address(RVA = "0x6C789E0", Offset = "0x6C779E0", VA = "0x6C789E0")]
	internal void FindTargetAtPosition(Vector2 mousePosition, Vector2 delta, int pointerId, int? targetDisplay, out VisualElement target, out RuntimePanel targetPanel, out Vector3 targetPanelPosition, out VisualElement elementUnderPointer, out Camera camera)
	{
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x6C79760", Offset = "0x6C78760", VA = "0x6C79760")]
	internal void FindTargetAtRay(Ray worldRay, float maxDistance, int pointerId, out VisualElement target, out RuntimePanel targetPanel, out Vector3 targetPanelPosition, out VisualElement elementUnderPointer)
	{
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x6C795E0", Offset = "0x6C785E0", VA = "0x6C795E0")]
	private Vector3 GetPanelPosition(VisualElement pickedElement, UIDocument document, Ray worldRay)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x6C79D60", Offset = "0x6C78D60", VA = "0x6C79D60")]
	private void UpdateFocusedPanel(RuntimePanel runtimePanel)
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x6C77E80", Offset = "0x6C76E80", VA = "0x6C77E80")]
	private void UpdateWorldSpacePointers()
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x6C79E50", Offset = "0x6C78E50", VA = "0x6C79E50")]
	private void Log(object o)
	{
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x6C7A2F0", Offset = "0x6C792F0", VA = "0x6C7A2F0")]
	private void LogWarning(object o)
	{
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x6C79F00", Offset = "0x6C78F00", VA = "0x6C79F00")]
	private void LogToGameScreen(string s)
	{
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x6C7A3A0", Offset = "0x6C793A0", VA = "0x6C7A3A0")]
	public DefaultEventSystem()
	{
	}
}
