// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MouseEventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001A6")]
[EventCategory(EventCategory.Pointer)]
public abstract class MouseEventBase<T> : EventBase<T>, IMouseEvent, IMouseEventInternal where T : MouseEventBase<T>, new()
{
	[Token(Token = "0x17000204")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000B1D")]
		[CompilerGenerated]
		get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000B1E")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000205")]
	public Vector2 mousePosition
	{
		[Token(Token = "0x6000B1F")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000B20")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000206")]
	public Vector2 localMousePosition
	{
		[Token(Token = "0x6000B21")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000B22")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000207")]
	public Vector2 mouseDelta
	{
		[Token(Token = "0x6000B23")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000B24")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000208")]
	public int clickCount
	{
		[Token(Token = "0x6000B25")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B26")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000209")]
	public int button
	{
		[Token(Token = "0x6000B27")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B28")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700020A")]
	public int pressedButtons
	{
		[Token(Token = "0x6000B29")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B2A")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700020B")]
	public bool shiftKey
	{
		[Token(Token = "0x6000B2B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020C")]
	public bool ctrlKey
	{
		[Token(Token = "0x6000B2C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020D")]
	public bool commandKey
	{
		[Token(Token = "0x6000B2D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020E")]
	public bool altKey
	{
		[Token(Token = "0x6000B2E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020F")]
	private bool UnityEngine_002EUIElements_002EIMouseEventInternal_002EtriggeredByOS
	{
		[Token(Token = "0x6000B2F")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000210")]
	private IPointerEvent UnityEngine_002EUIElements_002EIMouseEventInternal_002EsourcePointerEvent
	{
		[Token(Token = "0x6000B31")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B32")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000211")]
	public override IEventHandler currentTarget
	{
		[Token(Token = "0x6000B35")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B36")]
		internal set
		{
		}
	}

	[Token(Token = "0x6000B33")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000B34")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000B37")]
	protected internal override void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000B38")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000B39")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000B3A")]
	public static T GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000B3B")]
	internal static T GetPooled(IMouseEvent triggerEvent, Vector2 mousePosition)
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	public static T GetPooled(IMouseEvent triggerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	protected static T GetPooled(IPointerEvent pointerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	protected MouseEventBase()
	{
	}
}
