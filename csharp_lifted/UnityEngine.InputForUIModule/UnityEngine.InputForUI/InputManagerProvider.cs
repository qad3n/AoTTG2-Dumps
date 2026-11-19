// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.InputManagerProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.IntegerTime;

namespace UnityEngine.InputForUI;

[Token(Token = "0x2000024")]
internal class InputManagerProvider : IEventProviderImpl
{
	[Token(Token = "0x2000025")]
	private struct ButtonEventsIterator : IEnumerator
	{
		[Token(Token = "0x40000CA")]
		[FieldOffset(Offset = "0x0")]
		private uint _mask;

		[Token(Token = "0x40000CB")]
		[FieldOffset(Offset = "0x4")]
		private int _bit;

		[Token(Token = "0x17000033")]
		public bool Current
		{
			[Token(Token = "0x60000AC")]
			[Address(RVA = "0x69BCA30", Offset = "0x69BBA30", VA = "0x69BCA30")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000034")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x69BD730", Offset = "0x69BC730", VA = "0x69BD730", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x69BCB50", Offset = "0x69BBB50", VA = "0x69BCB50", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x69BD720", Offset = "0x69BC720", VA = "0x69BD720", Slot = "6")]
		public void Reset()
		{
		}

		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x69BCA00", Offset = "0x69BBA00", VA = "0x69BCA00")]
		public static ButtonEventsIterator FromState(bool previous, bool down, bool up, bool current)
		{
			return default(ButtonEventsIterator);
		}
	}

	[Token(Token = "0x2000026")]
	public struct Configuration
	{
		[Token(Token = "0x40000CC")]
		[FieldOffset(Offset = "0x0")]
		public string HorizontalAxis;

		[Token(Token = "0x40000CD")]
		[FieldOffset(Offset = "0x8")]
		public string VerticalAxis;

		[Token(Token = "0x40000CE")]
		[FieldOffset(Offset = "0x10")]
		public string SubmitButton;

		[Token(Token = "0x40000CF")]
		[FieldOffset(Offset = "0x18")]
		public string CancelButton;

		[Token(Token = "0x40000D0")]
		[FieldOffset(Offset = "0x20")]
		public string NavigateNextButton;

		[Token(Token = "0x40000D1")]
		[FieldOffset(Offset = "0x28")]
		public string NavigatePreviousButton;

		[Token(Token = "0x40000D2")]
		[FieldOffset(Offset = "0x30")]
		public float InputActionsPerSecond;

		[Token(Token = "0x40000D3")]
		[FieldOffset(Offset = "0x34")]
		public float RepeatDelay;

		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x69B9540", Offset = "0x69B8540", VA = "0x69B9540")]
		public static Configuration GetDefaultConfiguration()
		{
			return default(Configuration);
		}
	}

	[Token(Token = "0x2000027")]
	internal interface IInput
	{
		[Token(Token = "0x17000035")]
		string compositionString
		{
			[Token(Token = "0x60000B2")]
			get;
		}

		[Token(Token = "0x17000036")]
		bool touchSupported
		{
			[Token(Token = "0x60000B7")]
			get;
		}

		[Token(Token = "0x17000037")]
		int touchCount
		{
			[Token(Token = "0x60000B8")]
			get;
		}

		[Token(Token = "0x17000038")]
		bool mousePresent
		{
			[Token(Token = "0x60000BA")]
			get;
		}

		[Token(Token = "0x17000039")]
		Vector3 mousePosition
		{
			[Token(Token = "0x60000BE")]
			get;
		}

		[Token(Token = "0x1700003A")]
		Vector2 mouseScrollDelta
		{
			[Token(Token = "0x60000BF")]
			get;
		}

		[Token(Token = "0x60000B3")]
		bool GetKey(KeyCode keyCode);

		[Token(Token = "0x60000B4")]
		bool GetButtonDown(string button);

		[Token(Token = "0x60000B5")]
		float GetAxisRaw(string axis);

		[Token(Token = "0x60000B6")]
		PenData GetLastPenContactEvent();

		[Token(Token = "0x60000B9")]
		Touch GetTouch(int index);

		[Token(Token = "0x60000BB")]
		bool GetMouseButton(int button);

		[Token(Token = "0x60000BC")]
		bool GetMouseButtonDown(int button);

		[Token(Token = "0x60000BD")]
		bool GetMouseButtonUp(int button);
	}

	[Token(Token = "0x2000028")]
	private class Input : IInput
	{
		[Token(Token = "0x1700003B")]
		public string compositionString
		{
			[Token(Token = "0x60000C0")]
			[Address(RVA = "0x69BD760", Offset = "0x69BC760", VA = "0x69BD760", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003C")]
		public bool touchSupported
		{
			[Token(Token = "0x60000C5")]
			[Address(RVA = "0x69BD7E0", Offset = "0x69BC7E0", VA = "0x69BD7E0", Slot = "9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700003D")]
		public int touchCount
		{
			[Token(Token = "0x60000C6")]
			[Address(RVA = "0x69BD7F0", Offset = "0x69BC7F0", VA = "0x69BD7F0", Slot = "10")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700003E")]
		public bool mousePresent
		{
			[Token(Token = "0x60000C8")]
			[Address(RVA = "0x69BD850", Offset = "0x69BC850", VA = "0x69BD850", Slot = "12")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700003F")]
		public Vector3 mousePosition
		{
			[Token(Token = "0x60000CC")]
			[Address(RVA = "0x69BD890", Offset = "0x69BC890", VA = "0x69BD890", Slot = "16")]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x17000040")]
		public Vector2 mouseScrollDelta
		{
			[Token(Token = "0x60000CD")]
			[Address(RVA = "0x69BD8A0", Offset = "0x69BC8A0", VA = "0x69BD8A0", Slot = "17")]
			get
			{
				return default(Vector2);
			}
		}

		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x69BD770", Offset = "0x69BC770", VA = "0x69BD770", Slot = "5")]
		public bool GetKey(KeyCode key)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x69BD780", Offset = "0x69BC780", VA = "0x69BD780", Slot = "6")]
		public bool GetButtonDown(string button)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x69BD790", Offset = "0x69BC790", VA = "0x69BD790", Slot = "7")]
		public float GetAxisRaw(string axis)
		{
			return default(float);
		}

		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x69BD7A0", Offset = "0x69BC7A0", VA = "0x69BD7A0", Slot = "8")]
		public PenData GetLastPenContactEvent()
		{
			return default(PenData);
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x69BD800", Offset = "0x69BC800", VA = "0x69BD800", Slot = "11")]
		public Touch GetTouch(int index)
		{
			return default(Touch);
		}

		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x69BD860", Offset = "0x69BC860", VA = "0x69BD860", Slot = "13")]
		public bool GetMouseButton(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x69BD870", Offset = "0x69BC870", VA = "0x69BD870", Slot = "14")]
		public bool GetMouseButtonDown(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x69BD880", Offset = "0x69BC880", VA = "0x69BD880", Slot = "15")]
		public bool GetMouseButtonUp(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x69B9690", Offset = "0x69B8690", VA = "0x69B9690")]
		public Input()
		{
		}
	}

	[Token(Token = "0x2000029")]
	internal interface ITime
	{
		[Token(Token = "0x17000041")]
		RationalTime timeAsRational
		{
			[Token(Token = "0x60000CF")]
			get;
		}
	}

	[Token(Token = "0x200002A")]
	private class Time : ITime
	{
		[Token(Token = "0x17000042")]
		public RationalTime timeAsRational
		{
			[Token(Token = "0x60000D0")]
			[Address(RVA = "0x69BD8B0", Offset = "0x69BC8B0", VA = "0x69BD8B0", Slot = "4")]
			get
			{
				return default(RationalTime);
			}
		}

		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x69B96A0", Offset = "0x69B86A0", VA = "0x69B96A0")]
		public Time()
		{
		}
	}

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x10")]
	private InputEventPartialProvider _inputEventPartialProvider;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x18")]
	private string _compositionString;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x20")]
	private Configuration _configuration;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x58")]
	private IInput _input;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x60")]
	private ITime _time;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x68")]
	private NavigationEventRepeatHelper _navigationEventRepeatHelper;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x70")]
	private PointerState _mouseState;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x98")]
	private bool _isPenPresent;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x99")]
	private bool _seenAtLeastOnePenPosition;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x9C")]
	private Vector2 _lastSeenPenPositionForDetection;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0xA8")]
	private PointerState _penState;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0xD0")]
	private PenData _lastPenData;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0xF8")]
	private Dictionary<int, int> _touchFingerIdToFingerIndex;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x100")]
	private int _touchNextFingerIndex;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x108")]
	private PointerState _touchState;

	[Token(Token = "0x17000032")]
	private EventModifiers _eventModifiers
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x69B9520", Offset = "0x69B8520", VA = "0x69B9520")]
		get
		{
			return default(EventModifiers);
		}
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x69B8110", Offset = "0x69B7110", VA = "0x69B8110")]
	public InputManagerProvider()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x69B97F0", Offset = "0x69B87F0", VA = "0x69B97F0", Slot = "4")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x69B99F0", Offset = "0x69B89F0", VA = "0x69B99F0", Slot = "5")]
	public void Shutdown()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x69B9A00", Offset = "0x69B8A00", VA = "0x69B9A00", Slot = "6")]
	public void Update()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x69B9F20", Offset = "0x69B8F20", VA = "0x69B9F20")]
	private bool CheckTouchEvents(DiscreteTime currentTime)
	{
		return default(bool);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x69B9E10", Offset = "0x69B8E10", VA = "0x69B9E10")]
	private void DetectPen()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x69BC970", Offset = "0x69BB970", VA = "0x69BC970")]
	private static PointerEvent.Button PenStatusToButton(PenStatus status)
	{
		return default(PointerEvent.Button);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x69BA820", Offset = "0x69B9820", VA = "0x69BA820")]
	private bool CheckPenEvent(DiscreteTime currentTime, in PenData currentPenData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x69BADB0", Offset = "0x69B9DB0", VA = "0x69BADB0")]
	private void CheckMouseEvents(DiscreteTime currentTime, bool muted = false)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x69BB7A0", Offset = "0x69BA7A0", VA = "0x69BB7A0")]
	private void CheckMouseScroll(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x69BC390", Offset = "0x69BB390", VA = "0x69BC390")]
	private void NextPreviousNavigation(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x69BC160", Offset = "0x69BB160", VA = "0x69BC160")]
	private void SubmitCancelNavigation(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x69BBE00", Offset = "0x69BAE00", VA = "0x69BBE00")]
	private void DirectionNavigation(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x69BBB80", Offset = "0x69BAB80", VA = "0x69BBB80")]
	private void CheckIfIMEChanged(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x69BD1C0", Offset = "0x69BC1C0", VA = "0x69BD1C0", Slot = "7")]
	public void OnFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x69BCCC0", Offset = "0x69BBCC0", VA = "0x69BCCC0")]
	private EventSource GetEventSourceFromPressedKey()
	{
		return default(EventSource);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x69BD2E0", Offset = "0x69BC2E0", VA = "0x69BD2E0")]
	private bool InputManagerJoystickWasPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x69BD1E0", Offset = "0x69BC1E0", VA = "0x69BD1E0")]
	private bool InputManagerKeyboardWasPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x69BD3E0", Offset = "0x69BC3E0", VA = "0x69BD3E0")]
	private float InputManagerGetAxisRawOrDefault(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x69BCB80", Offset = "0x69BBB80", VA = "0x69BCB80")]
	private bool InputManagerGetButtonDownOrDefault(string axisName)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x69BCEA0", Offset = "0x69BBEA0", VA = "0x69BCEA0")]
	private (Vector2, bool) ReadCurrentNavigationMoveVector()
	{
		return default((Vector2, bool));
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x69BD130", Offset = "0x69BC130", VA = "0x69BD130")]
	private IMECompositionEvent ToIMECompositionEvent(DiscreteTime currentTime, string compositionString)
	{
		return default(IMECompositionEvent);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x69B5B10", Offset = "0x69B4B10", VA = "0x69B5B10")]
	internal static float TiltToAzimuth(Vector2 tilt)
	{
		return default(float);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x69BC8C0", Offset = "0x69BB8C0", VA = "0x69BC8C0")]
	internal static Vector2 AzimuthAndAlitutudeToTilt(float altitude, float azimuth)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x69B5C30", Offset = "0x69B4C30", VA = "0x69B5C30")]
	internal static float TiltToAltitude(Vector2 tilt)
	{
		return default(float);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x69BC510", Offset = "0x69BB510", VA = "0x69BC510")]
	private static Vector2 MultiDisplayBottomLeftToPanelPosition(Vector2 position, out int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x69BD520", Offset = "0x69BC520", VA = "0x69BD520")]
	private static Vector2 MultiDisplayToLocalScreenPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x69BD650", Offset = "0x69BC650", VA = "0x69BD650")]
	private static Vector2 ScreenBottomLeftToPanelPosition(Vector2 position, int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x69BC690", Offset = "0x69BB690", VA = "0x69BC690")]
	private static Vector2 ScreenBottomLeftToPanelDelta(Vector2 delta)
	{
		return default(Vector2);
	}
}
