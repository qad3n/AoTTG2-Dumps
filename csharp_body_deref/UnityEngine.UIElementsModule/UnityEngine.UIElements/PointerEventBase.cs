// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerEventBase
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.InputForUI;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000224")]
[EventCategory(EventCategory.Pointer)]
public abstract class PointerEventBase<T> : EventBase<T>, IPointerEvent, IPointerEventInternal, IPointerOrMouseEvent where T : PointerEventBase<T>, new()
{
	[Token(Token = "0x400082D")]
	private const float k_DefaultButtonPressure = 0.5f;

	[Token(Token = "0x400082E")]
	[FieldOffset(Offset = "0x0")]
	private bool m_AltitudeNeedsConversion;

	[Token(Token = "0x400082F")]
	[FieldOffset(Offset = "0x0")]
	private bool m_AzimuthNeedsConversion;

	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x0")]
	private float m_AltitudeAngle;

	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x0")]
	private float m_AzimuthAngle;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x0")]
	private bool m_TiltNeeded;

	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x0")]
	private Vector2 m_Tilt;

	[Token(Token = "0x170002C0")]
	public int pointerId
	{
		[Token(Token = "0x6000E4D")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E4E")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002C1")]
	public string pointerType
	{
		[Token(Token = "0x6000E4F")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E50")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002C2")]
	public bool isPrimary
	{
		[Token(Token = "0x6000E51")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E52")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002C3")]
	public int button
	{
		[Token(Token = "0x6000E53")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E54")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002C4")]
	public int pressedButtons
	{
		[Token(Token = "0x6000E55")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E56")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002C5")]
	public Vector3 position
	{
		[Token(Token = "0x6000E57")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000E58")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002C6")]
	public Vector3 localPosition
	{
		[Token(Token = "0x6000E59")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000E5A")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002C7")]
	public Vector3 deltaPosition
	{
		[Token(Token = "0x6000E5B")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000E5C")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002C8")]
	public float deltaTime
	{
		[Token(Token = "0x6000E5D")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E5E")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002C9")]
	public int clickCount
	{
		[Token(Token = "0x6000E5F")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E60")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002CA")]
	public float pressure
	{
		[Token(Token = "0x6000E61")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E62")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002CB")]
	public float tangentialPressure
	{
		[Token(Token = "0x6000E63")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E64")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002CC")]
	public float altitudeAngle
	{
		[Token(Token = "0x6000E65")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E66")]
		protected set
		{
		}
	}

	[Token(Token = "0x170002CD")]
	public float azimuthAngle
	{
		[Token(Token = "0x6000E67")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E68")]
		protected set
		{
		}
	}

	[Token(Token = "0x170002CE")]
	public float twist
	{
		[Token(Token = "0x6000E69")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E6A")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002CF")]
	public Vector2 tilt
	{
		[Token(Token = "0x6000E6B")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000E6C")]
		protected set
		{
		}
	}

	[Token(Token = "0x170002D0")]
	public PenStatus penStatus
	{
		[Token(Token = "0x6000E6D")]
		[CompilerGenerated]
		get
		{
			return default(PenStatus);
		}
		[Token(Token = "0x6000E6E")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002D1")]
	public Vector2 radius
	{
		[Token(Token = "0x6000E6F")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000E70")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002D2")]
	public Vector2 radiusVariance
	{
		[Token(Token = "0x6000E71")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000E72")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002D3")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000E73")]
		[CompilerGenerated]
		get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000E74")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002D4")]
	public bool shiftKey
	{
		[Token(Token = "0x6000E75")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D5")]
	public bool ctrlKey
	{
		[Token(Token = "0x6000E76")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D6")]
	public bool commandKey
	{
		[Token(Token = "0x6000E77")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D7")]
	public bool altKey
	{
		[Token(Token = "0x6000E78")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D8")]
	public bool actionKey
	{
		[Token(Token = "0x6000E79")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D9")]
	internal IMouseEvent compatibilityMouseEvent
	{
		[Token(Token = "0x6000E7A")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E7B")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002DA")]
	internal int displayIndex
	{
		[Token(Token = "0x6000E7C")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002DB")]
	internal bool recomputeTopElementUnderPointer
	{
		[Token(Token = "0x6000E7D")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E7E")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	internal Ray? panelRay
	{
		[Token(Token = "0x6000E7F")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002DD")]
	private IMouseEvent UnityEngine_002EUIElements_002EIPointerEventInternal_002EcompatibilityMouseEvent
	{
		[Token(Token = "0x6000E81")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DE")]
	private Vector3 UnityEngine_002EUIElements_002EIPointerOrMouseEvent_002EdeltaPosition
	{
		[Token(Token = "0x6000E82")]
		set
		{
		}
	}

	[Token(Token = "0x170002DF")]
	private Ray? UnityEngine_002EUIElements_002EIPointerOrMouseEvent_002EpanelRay
	{
		[Token(Token = "0x6000E83")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E0")]
	public override IEventHandler currentTarget
	{
		[Token(Token = "0x6000E86")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E87")]
		internal set
		{
		}
	}

	[Token(Token = "0x6000E84")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000E85")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000E88")]
	private static bool IsMouse(Event systemEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E89")]
	private static bool IsTouch(Event systemEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8A")]
	private static float TiltToAzimuth(Vector2 tilt)
	{
		return default(float);
	}

	[Token(Token = "0x6000E8B")]
	private static Vector2 AzimuthAndAlitutudeToTilt(float altitude, float azimuth)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000E8C")]
	private static float TiltToAltitude(Vector2 tilt)
	{
		return default(float);
	}

	[Token(Token = "0x6000E8D")]
	public static T GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000E8E")]
	internal static T GetPooled(EventType eventType, Vector3 mousePosition, Vector2 delta, int button, int clickCount, EventModifiers modifiers, int displayIndex)
	{
		return null;
	}

	[Token(Token = "0x6000E8F")]
	internal static T GetPooled(Touch touch, int pointerId, EventModifiers modifiers, int displayIndex)
	{
		return null;
	}

	[Token(Token = "0x6000E90")]
	internal static T GetPooled(PenData pen, EventModifiers modifiers, int displayIndex)
	{
		return null;
	}

	[Token(Token = "0x6000E91")]
	internal static T GetPooled(UnityEngine.InputForUI.PointerEvent pointerEvent, Vector3 position, int pointerId, float deltaTime)
	{
		return null;
	}

	[Token(Token = "0x6000E92")]
	internal static T GetPooled(IPointerEvent triggerEvent, Vector2 position, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000E93")]
	public static T GetPooled(IPointerEvent triggerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000E94")]
	internal virtual IMouseEvent GetPooledCompatibilityMouseEvent()
	{
		return null;
	}

	[Token(Token = "0x6000E95")]
	protected internal override void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000E96")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000E97")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000E98")]
	protected PointerEventBase()
	{
	}
}
