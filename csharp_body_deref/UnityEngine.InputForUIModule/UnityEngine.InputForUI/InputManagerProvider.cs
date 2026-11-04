// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.InputManagerProvider
// Update status: NEW in this game update
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
			[Address(RVA = "0x2FB9C50", Offset = "0x2FB8250", VA = "0x182FB9C50")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000034")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x2FB9C20", Offset = "0x2FB8220", VA = "0x182FB9C20", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x2FB9BD0", Offset = "0x2FB81D0", VA = "0x182FB9BD0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x2FB9C10", Offset = "0x2FB8210", VA = "0x182FB9C10", Slot = "6")]
		public void Reset()
		{
		}

		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x2FB9B70", Offset = "0x2FB8170", VA = "0x182FB9B70")]
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
		[Address(RVA = "0x2FB9F40", Offset = "0x2FB8540", VA = "0x182FB9F40")]
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
			[Address(RVA = "0x2FC14C0", Offset = "0x2FBFAC0", VA = "0x182FC14C0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003C")]
		public bool touchSupported
		{
			[Token(Token = "0x60000C5")]
			[Address(RVA = "0x2FC1530", Offset = "0x2FBFB30", VA = "0x182FC1530", Slot = "9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700003D")]
		public int touchCount
		{
			[Token(Token = "0x60000C6")]
			[Address(RVA = "0x2FC1520", Offset = "0x2FBFB20", VA = "0x182FC1520", Slot = "10")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700003E")]
		public bool mousePresent
		{
			[Token(Token = "0x60000C8")]
			[Address(RVA = "0x2FC1500", Offset = "0x2FBFB00", VA = "0x182FC1500", Slot = "12")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700003F")]
		public Vector3 mousePosition
		{
			[Token(Token = "0x60000CC")]
			[Address(RVA = "0x2FC14D0", Offset = "0x2FBFAD0", VA = "0x182FC14D0", Slot = "16")]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x17000040")]
		public Vector2 mouseScrollDelta
		{
			[Token(Token = "0x60000CD")]
			[Address(RVA = "0x2FC1510", Offset = "0x2FBFB10", VA = "0x182FC1510", Slot = "17")]
			get
			{
				return default(Vector2);
			}
		}

		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x2FC13F0", Offset = "0x2FBF9F0", VA = "0x182FC13F0", Slot = "5")]
		public bool GetKey(KeyCode key)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x2FC13E0", Offset = "0x2FBF9E0", VA = "0x182FC13E0", Slot = "6")]
		public bool GetButtonDown(string button)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x2FC13D0", Offset = "0x2FBF9D0", VA = "0x182FC13D0", Slot = "7")]
		public float GetAxisRaw(string axis)
		{
			return default(float);
		}

		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x2FC1400", Offset = "0x2FBFA00", VA = "0x182FC1400", Slot = "8")]
		public PenData GetLastPenContactEvent()
		{
			return default(PenData);
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x2FC1470", Offset = "0x2FBFA70", VA = "0x182FC1470", Slot = "11")]
		public Touch GetTouch(int index)
		{
			return default(Touch);
		}

		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x2FC1460", Offset = "0x2FBFA60", VA = "0x182FC1460", Slot = "13")]
		public bool GetMouseButton(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x2FC1440", Offset = "0x2FBFA40", VA = "0x182FC1440", Slot = "14")]
		public bool GetMouseButtonDown(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x2FC1450", Offset = "0x2FBFA50", VA = "0x182FC1450", Slot = "15")]
		public bool GetMouseButtonUp(int button)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
			[Address(RVA = "0x2FC3130", Offset = "0x2FC1730", VA = "0x182FC3130", Slot = "4")]
			get
			{
				return default(RationalTime);
			}
		}

		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x2FC13B0", Offset = "0x2FBF9B0", VA = "0x182FC13B0")]
		get
		{
			return default(EventModifiers);
		}
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2FC10B0", Offset = "0x2FBF6B0", VA = "0x182FC10B0")]
	public InputManagerProvider()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2FBFB10", Offset = "0x2FBE110", VA = "0x182FBFB10", Slot = "4")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void Shutdown()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2FC0B50", Offset = "0x2FBF150", VA = "0x182FC0B50", Slot = "6")]
	public void Update()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2FBED80", Offset = "0x2FBD380", VA = "0x182FBED80")]
	private bool CheckTouchEvents(DiscreteTime currentTime)
	{
		return default(bool);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2FBF4F0", Offset = "0x2FBDAF0", VA = "0x182FBF4F0")]
	private void DetectPen()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2FC0570", Offset = "0x2FBEB70", VA = "0x182FC0570")]
	private static PointerEvent.Button PenStatusToButton(PenStatus status)
	{
		return default(PointerEvent.Button);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2FBE830", Offset = "0x2FBCE30", VA = "0x182FBE830")]
	private bool CheckPenEvent(DiscreteTime currentTime, in PenData currentPenData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2FBDC10", Offset = "0x2FBC210", VA = "0x182FBDC10")]
	private void CheckMouseEvents(DiscreteTime currentTime, bool muted = false)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2FBE3B0", Offset = "0x2FBC9B0", VA = "0x182FBE3B0")]
	private void CheckMouseScroll(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2FC0310", Offset = "0x2FBE910", VA = "0x182FC0310")]
	private void NextPreviousNavigation(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2FC07F0", Offset = "0x2FBEDF0", VA = "0x182FC07F0")]
	private void SubmitCancelNavigation(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2FBF5B0", Offset = "0x2FBDBB0", VA = "0x182FBF5B0")]
	private void DirectionNavigation(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2FBD950", Offset = "0x2FBBF50", VA = "0x182FBD950")]
	private void CheckIfIMEChanged(DiscreteTime currentTime)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2FC0530", Offset = "0x2FBEB30", VA = "0x182FC0530", Slot = "7")]
	public void OnFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2FBFA20", Offset = "0x2FBE020", VA = "0x182FBFA20")]
	private EventSource GetEventSourceFromPressedKey()
	{
		return default(EventSource);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2FBFE30", Offset = "0x2FBE430", VA = "0x182FBFE30")]
	private bool InputManagerJoystickWasPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2FBFEB0", Offset = "0x2FBE4B0", VA = "0x182FBFEB0")]
	private bool InputManagerKeyboardWasPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2FBFC60", Offset = "0x2FBE260", VA = "0x182FBFC60")]
	private float InputManagerGetAxisRawOrDefault(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2FBFD40", Offset = "0x2FBE340", VA = "0x182FBFD40")]
	private bool InputManagerGetButtonDownOrDefault(string axisName)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2FC0590", Offset = "0x2FBEB90", VA = "0x182FC0590")]
	private (Vector2, bool) ReadCurrentNavigationMoveVector()
	{
		return default((Vector2, bool));
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2FC0AC0", Offset = "0x2FBF0C0", VA = "0x182FC0AC0")]
	private IMECompositionEvent ToIMECompositionEvent(DiscreteTime currentTime, string compositionString)
	{
		return default(IMECompositionEvent);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0xB5B520", Offset = "0xB59B20", VA = "0x180B5B520")]
	internal static float TiltToAzimuth(Vector2 tilt)
	{
		return default(float);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0xB57C90", Offset = "0xB56290", VA = "0x180B57C90")]
	internal static Vector2 AzimuthAndAlitutudeToTilt(float altitude, float azimuth)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0xB5B4C0", Offset = "0xB59AC0", VA = "0x180B5B4C0")]
	internal static float TiltToAltitude(Vector2 tilt)
	{
		return default(float);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x2FBFF30", Offset = "0x2FBE530", VA = "0x182FBFF30")]
	private static Vector2 MultiDisplayBottomLeftToPanelPosition(Vector2 position, out int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x2FC0190", Offset = "0x2FBE790", VA = "0x182FC0190")]
	private static Vector2 MultiDisplayToLocalScreenPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2FC0700", Offset = "0x2FBED00", VA = "0x182FC0700")]
	private static Vector2 ScreenBottomLeftToPanelPosition(Vector2 position, int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x2FC06D0", Offset = "0x2FBECD0", VA = "0x182FC06D0")]
	private static Vector2 ScreenBottomLeftToPanelDelta(Vector2 delta)
	{
		return default(Vector2);
	}
}
