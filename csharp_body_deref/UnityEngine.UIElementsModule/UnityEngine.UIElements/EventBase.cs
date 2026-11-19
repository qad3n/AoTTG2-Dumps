// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001C1")]
public abstract class EventBase : IDisposable
{
	[Token(Token = "0x20001C2")]
	[Flags]
	internal enum EventPropagation
	{
		[Token(Token = "0x4000783")]
		None = 0,
		[Token(Token = "0x4000784")]
		Bubbles = 1,
		[Token(Token = "0x4000785")]
		TricklesDown = 2,
		[Token(Token = "0x4000786")]
		IgnoreDisabledElements = 4,
		[Token(Token = "0x4000787")]
		BubblesOrTricklesDown = Bubbles | TricklesDown
	}

	[Token(Token = "0x20001C3")]
	[Flags]
	private enum LifeCycleStatus
	{
		[Token(Token = "0x4000789")]
		None = 0,
		[Token(Token = "0x400078A")]
		PropagationStopped = 1,
		[Token(Token = "0x400078B")]
		ImmediatePropagationStopped = 2,
		[Token(Token = "0x400078C")]
		Dispatching = 4,
		[Token(Token = "0x400078D")]
		Pooled = 8,
		[Token(Token = "0x400078E")]
		IMGUIEventIsValid = 0x10,
		[Token(Token = "0x400078F")]
		PropagateToIMGUI = 0x20,
		[Token(Token = "0x4000790")]
		Dispatched = 0x40,
		[Token(Token = "0x4000791")]
		Processed = 0x80,
		[Token(Token = "0x4000792")]
		ProcessedByFocusController = 0x100
	}

	[Token(Token = "0x4000775")]
	[FieldOffset(Offset = "0x0")]
	private static long s_LastTypeId;

	[Token(Token = "0x4000777")]
	[FieldOffset(Offset = "0x8")]
	private static ulong s_NextEventId;

	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x48")]
	private IEventHandler m_CurrentTarget;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x50")]
	private Event m_ImguiEvent;

	[Token(Token = "0x17000246")]
	public virtual long eventTypeId
	{
		[Token(Token = "0x6000C16")]
		[Address(RVA = "0x6C60A60", Offset = "0x6C5FA60", VA = "0x6C60A60", Slot = "5")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000247")]
	internal int eventCategories
	{
		[Token(Token = "0x6000C17")]
		[Address(RVA = "0x6C60A70", Offset = "0x6C5FA70", VA = "0x6C60A70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000248")]
	public long timestamp
	{
		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x6C60A80", Offset = "0x6C5FA80", VA = "0x6C60A80")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x6C60A90", Offset = "0x6C5FA90", VA = "0x6C60A90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000249")]
	internal ulong eventId
	{
		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x6C60AA0", Offset = "0x6C5FAA0", VA = "0x6C60AA0")]
		[CompilerGenerated]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x6C60AB0", Offset = "0x6C5FAB0", VA = "0x6C60AB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700024A")]
	private ulong triggerEventId
	{
		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x6C60AC0", Offset = "0x6C5FAC0", VA = "0x6C60AC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	internal EventPropagation propagation
	{
		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x6C60AE0", Offset = "0x6C5FAE0", VA = "0x6C60AE0")]
		[CompilerGenerated]
		get
		{
			return default(EventPropagation);
		}
		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x6C60AF0", Offset = "0x6C5FAF0", VA = "0x6C60AF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	private LifeCycleStatus lifeCycleStatus
	{
		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x6C60B00", Offset = "0x6C5FB00", VA = "0x6C60B00")]
		[CompilerGenerated]
		get
		{
			return default(LifeCycleStatus);
		}
		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x6C60B10", Offset = "0x6C5FB10", VA = "0x6C60B10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	public bool bubbles
	{
		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x6C60BE0", Offset = "0x6C5FBE0", VA = "0x6C60BE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x6C60BF0", Offset = "0x6C5FBF0", VA = "0x6C60BF0")]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public bool tricklesDown
	{
		[Token(Token = "0x6000C29")]
		[Address(RVA = "0x6C60C00", Offset = "0x6C5FC00", VA = "0x6C60C00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C2A")]
		[Address(RVA = "0x6C60C10", Offset = "0x6C5FC10", VA = "0x6C60C10")]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024F")]
	public bool ignoreDisabledElements
	{
		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x6C60C20", Offset = "0x6C5FC20", VA = "0x6C60C20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x6C60C30", Offset = "0x6C5FC30", VA = "0x6C60C30")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000250")]
	internal bool bubblesOrTricklesDown
	{
		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x6C60C40", Offset = "0x6C5FC40", VA = "0x6C60C40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000251")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElement elementTarget
	{
		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x6C60C50", Offset = "0x6C5FC50", VA = "0x6C60C50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C2F")]
		[Address(RVA = "0x6C60C60", Offset = "0x6C5FC60", VA = "0x6C60C60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public IEventHandler target
	{
		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x6C60C70", Offset = "0x6C5FC70", VA = "0x6C60C70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C31")]
		[Address(RVA = "0x6C60C80", Offset = "0x6C5FC80", VA = "0x6C60C80")]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool isPropagationStopped
	{
		[Token(Token = "0x6000C32")]
		[Address(RVA = "0x6C5E4A0", Offset = "0x6C5D4A0", VA = "0x6C5E4A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C33")]
		[Address(RVA = "0x6C60D00", Offset = "0x6C5FD00", VA = "0x6C60D00")]
		private set
		{
		}
	}

	[Token(Token = "0x17000254")]
	public bool isImmediatePropagationStopped
	{
		[Token(Token = "0x6000C35")]
		[Address(RVA = "0x6C60D20", Offset = "0x6C5FD20", VA = "0x6C60D20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C36")]
		[Address(RVA = "0x6C60D30", Offset = "0x6C5FD30", VA = "0x6C60D30")]
		private set
		{
		}
	}

	[Token(Token = "0x17000255")]
	internal PropagationPhase propagationPhase
	{
		[Token(Token = "0x6000C38")]
		[Address(RVA = "0x6C60D50", Offset = "0x6C5FD50", VA = "0x6C60D50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	public virtual IEventHandler currentTarget
	{
		[Token(Token = "0x6000C39")]
		[Address(RVA = "0x6C60D60", Offset = "0x6C5FD60", VA = "0x6C60D60", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C3A")]
		[Address(RVA = "0x6C60D70", Offset = "0x6C5FD70", VA = "0x6C60D70", Slot = "12")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000257")]
	public bool dispatch
	{
		[Token(Token = "0x6000C3B")]
		[Address(RVA = "0x6C60E60", Offset = "0x6C5FE60", VA = "0x6C60E60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C3C")]
		[Address(RVA = "0x6C60E70", Offset = "0x6C5FE70", VA = "0x6C60E70")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000258")]
	private bool dispatched
	{
		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x6C60EA0", Offset = "0x6C5FEA0", VA = "0x6C60EA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C3F")]
		[Address(RVA = "0x6C60E90", Offset = "0x6C5FE90", VA = "0x6C60E90")]
		set
		{
		}
	}

	[Token(Token = "0x17000259")]
	internal bool processed
	{
		[Token(Token = "0x6000C40")]
		[Address(RVA = "0x6C60EB0", Offset = "0x6C5FEB0", VA = "0x6C60EB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C41")]
		[Address(RVA = "0x6C60B60", Offset = "0x6C5FB60", VA = "0x6C60B60")]
		private set
		{
		}
	}

	[Token(Token = "0x1700025A")]
	internal bool processedByFocusController
	{
		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x6C60EC0", Offset = "0x6C5FEC0", VA = "0x6C60EC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C43")]
		[Address(RVA = "0x6C60ED0", Offset = "0x6C5FED0", VA = "0x6C60ED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700025B")]
	internal bool propagateToIMGUI
	{
		[Token(Token = "0x6000C44")]
		[Address(RVA = "0x6C60EF0", Offset = "0x6C5FEF0", VA = "0x6C60EF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C45")]
		[Address(RVA = "0x6C60F00", Offset = "0x6C5FF00", VA = "0x6C60F00")]
		set
		{
		}
	}

	[Token(Token = "0x1700025C")]
	private bool imguiEventIsValid
	{
		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x6C60F10", Offset = "0x6C5FF10", VA = "0x6C60F10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x6C60F20", Offset = "0x6C5FF20", VA = "0x6C60F20")]
		set
		{
		}
	}

	[Token(Token = "0x1700025D")]
	public Event imguiEvent
	{
		[Token(Token = "0x6000C48")]
		[Address(RVA = "0x6C5D9B0", Offset = "0x6C5C9B0", VA = "0x6C5D9B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C49")]
		[Address(RVA = "0x6C60F30", Offset = "0x6C5FF30", VA = "0x6C60F30")]
		protected set
		{
		}
	}

	[Token(Token = "0x1700025E")]
	public Vector2 originalMousePosition
	{
		[Token(Token = "0x6000C4A")]
		[Address(RVA = "0x6C60FE0", Offset = "0x6C5FFE0", VA = "0x6C60FE0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000C4B")]
		[Address(RVA = "0x6C60FF0", Offset = "0x6C5FFF0", VA = "0x6C60FF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700025F")]
	protected bool pooled
	{
		[Token(Token = "0x6000C50")]
		[Address(RVA = "0x6C61160", Offset = "0x6C60160", VA = "0x6C61160")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C51")]
		[Address(RVA = "0x6C610E0", Offset = "0x6C600E0", VA = "0x6C610E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x6C60A20", Offset = "0x6C5FA20", VA = "0x6C60A20")]
	protected static long RegisterEventType()
	{
		return default(long);
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x6C60AD0", Offset = "0x6C5FAD0", VA = "0x6C60AD0")]
	internal void SetTriggerEventId(ulong id)
	{
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x6C60B20", Offset = "0x6C5FB20", VA = "0x6C60B20", Slot = "6")]
	[Obsolete("Override PreDispatch(IPanel panel) instead.")]
	protected virtual void PreDispatch()
	{
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x6C5E7C0", Offset = "0x6C5D7C0", VA = "0x6C5E7C0", Slot = "7")]
	protected internal virtual void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x6C60B30", Offset = "0x6C5FB30", VA = "0x6C60B30", Slot = "8")]
	[Obsolete("Override PostDispatch(IPanel panel) instead.")]
	protected virtual void PostDispatch()
	{
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x6C60B40", Offset = "0x6C5FB40", VA = "0x6C60B40", Slot = "9")]
	protected internal virtual void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x6C60B80", Offset = "0x6C5FB80", VA = "0x6C60B80", Slot = "10")]
	internal virtual void Dispatch([NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x6C60D10", Offset = "0x6C5FD10", VA = "0x6C60D10")]
	public void StopPropagation()
	{
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x6C60D40", Offset = "0x6C5FD40", VA = "0x6C60D40")]
	public void StopImmediatePropagation()
	{
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x6C5D940", Offset = "0x6C5C940", VA = "0x6C5D940")]
	internal void MarkReceivedByDispatcher()
	{
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x6C61000", Offset = "0x6C60000", VA = "0x6C61000", Slot = "13")]
	protected virtual void Init()
	{
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x6C61010", Offset = "0x6C60010", VA = "0x6C61010")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x6C610F0", Offset = "0x6C600F0", VA = "0x6C610F0")]
	protected EventBase()
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x6C61120", Offset = "0x6C60120", VA = "0x6C61120")]
	internal EventBase(EventCategory category)
	{
	}

	[Token(Token = "0x6000C52")]
	internal abstract void Acquire();

	[Token(Token = "0x6000C53")]
	public abstract void Dispose();

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x6C61170", Offset = "0x6C60170", VA = "0x6C61170")]
	internal void AssignTimeStamp(long time)
	{
	}
}
[Token(Token = "0x20001C4")]
[EventCategory(EventCategory.Default)]
public abstract class EventBase<T> : EventBase where T : EventBase<T>, new()
{
	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0x0")]
	private static readonly long s_TypeId;

	[Token(Token = "0x4000794")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<T> s_Pool;

	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0x0")]
	private int m_RefCount;

	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EventCategory EventCategory;

	[Token(Token = "0x17000260")]
	public override long eventTypeId
	{
		[Token(Token = "0x6000C5E")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000C55")]
	protected internal static void SetCreateFunction(Func<T> createMethod)
	{
	}

	[Token(Token = "0x6000C56")]
	protected EventBase()
	{
	}

	[Token(Token = "0x6000C57")]
	public static long TypeId()
	{
		return default(long);
	}

	[Token(Token = "0x6000C58")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000C59")]
	public static T GetPooled()
	{
		return null;
	}

	[Token(Token = "0x6000C5A")]
	internal static T GetPooled(EventBase e)
	{
		return null;
	}

	[Token(Token = "0x6000C5B")]
	private static void ReleasePooled(T evt)
	{
	}

	[Token(Token = "0x6000C5C")]
	internal override void Acquire()
	{
	}

	[Token(Token = "0x6000C5D")]
	public sealed override void Dispose()
	{
	}
}
