using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001D8")]
[EventCategory(EventCategory.Pointer)]
public abstract class PointerEventBase<T> : EventBase<T>, IPointerEvent, IPointerEventInternal where T : PointerEventBase<T>, new()
{
	[Token(Token = "0x40006E1")]
	[FieldOffset(Offset = "0x0")]
	private bool m_AltitudeNeedsConversion;

	[Token(Token = "0x40006E2")]
	[FieldOffset(Offset = "0x0")]
	private bool m_AzimuthNeedsConversion;

	[Token(Token = "0x40006E3")]
	[FieldOffset(Offset = "0x0")]
	private float m_AltitudeAngle;

	[Token(Token = "0x40006E4")]
	[FieldOffset(Offset = "0x0")]
	private float m_AzimuthAngle;

	[Token(Token = "0x40006E5")]
	[FieldOffset(Offset = "0x0")]
	private bool m_TiltNeeded;

	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0x0")]
	private Vector2 m_Tilt;

	[Token(Token = "0x1700023C")]
	public int pointerId
	{
		[Token(Token = "0x6000C1C")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000C1D")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	public string pointerType
	{
		[Token(Token = "0x6000C1E")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C1F")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700023E")]
	public bool isPrimary
	{
		[Token(Token = "0x6000C20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C21")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700023F")]
	public int button
	{
		[Token(Token = "0x6000C22")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000C23")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000240")]
	public int pressedButtons
	{
		[Token(Token = "0x6000C24")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000C25")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000241")]
	public Vector3 position
	{
		[Token(Token = "0x6000C26")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C27")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000242")]
	public Vector3 localPosition
	{
		[Token(Token = "0x6000C28")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C29")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000243")]
	public Vector3 deltaPosition
	{
		[Token(Token = "0x6000C2A")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C2B")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000244")]
	public float deltaTime
	{
		[Token(Token = "0x6000C2C")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000C2D")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000245")]
	public int clickCount
	{
		[Token(Token = "0x6000C2E")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000C2F")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000246")]
	public float pressure
	{
		[Token(Token = "0x6000C30")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000C31")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000247")]
	public float tangentialPressure
	{
		[Token(Token = "0x6000C32")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000C33")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000248")]
	public float altitudeAngle
	{
		[Token(Token = "0x6000C34")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000C35")]
		protected set
		{
		}
	}

	[Token(Token = "0x17000249")]
	public float azimuthAngle
	{
		[Token(Token = "0x6000C36")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000C37")]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024A")]
	public float twist
	{
		[Token(Token = "0x6000C38")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000C39")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	public Vector2 tilt
	{
		[Token(Token = "0x6000C3A")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000C3B")]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	public PenStatus penStatus
	{
		[Token(Token = "0x6000C3C")]
		[CompilerGenerated]
		get
		{
			return default(PenStatus);
		}
		[Token(Token = "0x6000C3D")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	public Vector2 radius
	{
		[Token(Token = "0x6000C3E")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000C3F")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public Vector2 radiusVariance
	{
		[Token(Token = "0x6000C40")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000C41")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024F")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000C42")]
		[CompilerGenerated]
		get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000C43")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000250")]
	public bool shiftKey
	{
		[Token(Token = "0x6000C44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000251")]
	public bool ctrlKey
	{
		[Token(Token = "0x6000C45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000252")]
	public bool commandKey
	{
		[Token(Token = "0x6000C46")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000253")]
	public bool altKey
	{
		[Token(Token = "0x6000C47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000254")]
	public bool actionKey
	{
		[Token(Token = "0x6000C48")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000255")]
	private bool UnityEngine_002EUIElements_002EIPointerEventInternal_002EtriggeredByOS
	{
		[Token(Token = "0x6000C49")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C4A")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	public override IEventHandler currentTarget
	{
		[Token(Token = "0x6000C4D")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C4E")]
		internal set
		{
		}
	}

	[Token(Token = "0x6000C4B")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000C4C")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000C4F")]
	private static bool IsMouse(Event systemEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C50")]
	private static bool IsTouch(Event systemEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C51")]
	private static float TiltToAzimuth(Vector2 tilt)
	{
		return default(float);
	}

	[Token(Token = "0x6000C52")]
	private static Vector2 AzimuthAndAlitutudeToTilt(float altitude, float azimuth)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000C53")]
	private static float TiltToAltitude(Vector2 tilt)
	{
		return default(float);
	}

	[Token(Token = "0x6000C54")]
	public static T GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	internal static T GetPooled(EventType eventType, Vector3 mousePosition, Vector2 delta, int button, int clickCount, EventModifiers modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000C56")]
	public static T GetPooled(Touch touch, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	public static T GetPooled(PenData pen, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000C58")]
	internal static T GetPooled(IPointerEvent triggerEvent, Vector2 position, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000C59")]
	public static T GetPooled(IPointerEvent triggerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000C5A")]
	protected internal override void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000C5B")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000C5C")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000C5D")]
	protected PointerEventBase()
	{
	}
}
