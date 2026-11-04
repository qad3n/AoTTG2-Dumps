// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MouseEventBase
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001ED")]
[EventCategory(EventCategory.Pointer)]
public abstract class MouseEventBase<T> : EventBase<T>, IMouseEvent, IMouseEventInternal, IPointerOrMouseEvent where T : MouseEventBase<T>, new()
{
	[Token(Token = "0x17000281")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000D38")]
		[CompilerGenerated]
		get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000D39")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000282")]
	public Vector2 mousePosition
	{
		[Token(Token = "0x6000D3A")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000D3B")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000283")]
	public Vector2 localMousePosition
	{
		[Token(Token = "0x6000D3C")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000D3D")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000284")]
	public Vector2 mouseDelta
	{
		[Token(Token = "0x6000D3E")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000D3F")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000285")]
	public int clickCount
	{
		[Token(Token = "0x6000D40")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D41")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000286")]
	public int button
	{
		[Token(Token = "0x6000D42")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D43")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000287")]
	public int pressedButtons
	{
		[Token(Token = "0x6000D44")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D45")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000288")]
	public bool ctrlKey
	{
		[Token(Token = "0x6000D46")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000289")]
	public bool commandKey
	{
		[Token(Token = "0x6000D47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028A")]
	internal IPointerEvent sourcePointerEvent
	{
		[Token(Token = "0x6000D48")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D49")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700028B")]
	internal bool recomputeTopElementUnderMouse
	{
		[Token(Token = "0x6000D4A")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D4B")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700028C")]
	internal Ray? panelRay
	{
		[Token(Token = "0x6000D4C")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D4D")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700028D")]
	private IPointerEvent UnityEngine_002EUIElements_002EIMouseEventInternal_002EsourcePointerEvent
	{
		[Token(Token = "0x6000D4E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028E")]
	private Vector3 UnityEngine_002EUIElements_002EIPointerOrMouseEvent_002Eposition
	{
		[Token(Token = "0x6000D4F")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700028F")]
	private Vector3 UnityEngine_002EUIElements_002EIPointerOrMouseEvent_002EdeltaPosition
	{
		[Token(Token = "0x6000D50")]
		set
		{
		}
	}

	[Token(Token = "0x17000290")]
	private Ray? UnityEngine_002EUIElements_002EIPointerOrMouseEvent_002EpanelRay
	{
		[Token(Token = "0x6000D51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000291")]
	public override IEventHandler currentTarget
	{
		[Token(Token = "0x6000D54")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D55")]
		internal set
		{
		}
	}

	[Token(Token = "0x6000D52")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000D53")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000D56")]
	protected internal override void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000D57")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000D58")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000D59")]
	public static T GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D5A")]
	internal static T GetPooled(IMouseEvent triggerEvent, Vector2 mousePosition)
	{
		return null;
	}

	[Token(Token = "0x6000D5B")]
	public static T GetPooled(IMouseEvent triggerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D5C")]
	protected static T GetPooled(IPointerEvent pointerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D5D")]
	protected MouseEventBase()
	{
	}
}
