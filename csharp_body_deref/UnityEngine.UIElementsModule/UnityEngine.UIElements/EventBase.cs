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

namespace UnityEngine.UIElements;

[Token(Token = "0x200017D")]
public abstract class EventBase : IDisposable
{
	[Token(Token = "0x200017E")]
	[Flags]
	internal enum EventPropagation
	{
		[Token(Token = "0x400064D")]
		None = 0,
		[Token(Token = "0x400064E")]
		Bubbles = 1,
		[Token(Token = "0x400064F")]
		TricklesDown = 2,
		[Token(Token = "0x4000650")]
		Cancellable = 4,
		[Token(Token = "0x4000651")]
		SkipDisabledElements = 8,
		[Token(Token = "0x4000652")]
		IgnoreCompositeRoots = 0x10,
		[Token(Token = "0x4000653")]
		BubblesOrTricklesDown = 3
	}

	[Token(Token = "0x200017F")]
	[Flags]
	private enum LifeCycleStatus
	{
		[Token(Token = "0x4000655")]
		None = 0,
		[Token(Token = "0x4000656")]
		PropagationStopped = 1,
		[Token(Token = "0x4000657")]
		ImmediatePropagationStopped = 2,
		[Token(Token = "0x4000658")]
		DefaultPrevented = 4,
		[Token(Token = "0x4000659")]
		Dispatching = 8,
		[Token(Token = "0x400065A")]
		Pooled = 0x10,
		[Token(Token = "0x400065B")]
		IMGUIEventIsValid = 0x20,
		[Token(Token = "0x400065C")]
		PropagateToIMGUI = 0x40,
		[Token(Token = "0x400065D")]
		Dispatched = 0x80,
		[Token(Token = "0x400065E")]
		Processed = 0x100,
		[Token(Token = "0x400065F")]
		ProcessedByFocusController = 0x200
	}

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x0")]
	private static long s_LastTypeId;

	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x8")]
	private static ulong s_NextEventId;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x50")]
	private IEventHandler m_CurrentTarget;

	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x58")]
	private Event m_ImguiEvent;

	[Token(Token = "0x170001C1")]
	public virtual long eventTypeId
	{
		[Token(Token = "0x6000A11")]
		[Address(RVA = "0x502C520", Offset = "0x502C520", VA = "0x502C520", Slot = "5")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001C2")]
	internal EventCategory eventCategory
	{
		[Token(Token = "0x6000A12")]
		[Address(RVA = "0x502C530", Offset = "0x502C530", VA = "0x502C530")]
		[CompilerGenerated]
		get
		{
			return default(EventCategory);
		}
	}

	[Token(Token = "0x170001C3")]
	public long timestamp
	{
		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x502C540", Offset = "0x502C540", VA = "0x502C540")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x502C550", Offset = "0x502C550", VA = "0x502C550")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001C4")]
	internal ulong eventId
	{
		[Token(Token = "0x6000A15")]
		[Address(RVA = "0x502C560", Offset = "0x502C560", VA = "0x502C560")]
		[CompilerGenerated]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x6000A16")]
		[Address(RVA = "0x502C570", Offset = "0x502C570", VA = "0x502C570")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001C5")]
	private ulong triggerEventId
	{
		[Token(Token = "0x6000A17")]
		[Address(RVA = "0x502C580", Offset = "0x502C580", VA = "0x502C580")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	internal EventPropagation propagation
	{
		[Token(Token = "0x6000A19")]
		[Address(RVA = "0x502C5A0", Offset = "0x502C5A0", VA = "0x502C5A0")]
		[CompilerGenerated]
		get
		{
			return default(EventPropagation);
		}
		[Token(Token = "0x6000A1A")]
		[Address(RVA = "0x502C5B0", Offset = "0x502C5B0", VA = "0x502C5B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C7")]
	private LifeCycleStatus lifeCycleStatus
	{
		[Token(Token = "0x6000A1B")]
		[Address(RVA = "0x502C5C0", Offset = "0x502C5C0", VA = "0x502C5C0")]
		[CompilerGenerated]
		get
		{
			return default(LifeCycleStatus);
		}
		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x502C5D0", Offset = "0x502C5D0", VA = "0x502C5D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C8")]
	public bool bubbles
	{
		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x502C6C0", Offset = "0x502C6C0", VA = "0x502C6C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C9")]
	public bool tricklesDown
	{
		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x502C6D0", Offset = "0x502C6D0", VA = "0x502C6D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CA")]
	internal bool skipDisabledElements
	{
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x502C6E0", Offset = "0x502C6E0", VA = "0x502C6E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x502C6F0", Offset = "0x502C6F0", VA = "0x502C6F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	internal bool ignoreCompositeRoots
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x502C710", Offset = "0x502C710", VA = "0x502C710")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x502C720", Offset = "0x502C720", VA = "0x502C720")]
		set
		{
		}
	}

	[Token(Token = "0x170001CC")]
	internal bool bubblesOrTricklesDown
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x502C740", Offset = "0x502C740", VA = "0x502C740")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CD")]
	internal VisualElement leafTarget
	{
		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x502C750", Offset = "0x502C750", VA = "0x502C750")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x502C760", Offset = "0x502C760", VA = "0x502C760")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001CE")]
	internal VisualElement elementTarget
	{
		[Token(Token = "0x6000A2B")]
		[Address(RVA = "0x502C770", Offset = "0x502C770", VA = "0x502C770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x502C780", Offset = "0x502C780", VA = "0x502C780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001CF")]
	public IEventHandler target
	{
		[Token(Token = "0x6000A2D")]
		[Address(RVA = "0x502C790", Offset = "0x502C790", VA = "0x502C790")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2E")]
		[Address(RVA = "0x502C7A0", Offset = "0x502C7A0", VA = "0x502C7A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	public bool isPropagationStopped
	{
		[Token(Token = "0x6000A2F")]
		[Address(RVA = "0x5029450", Offset = "0x5029450", VA = "0x5029450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A30")]
		[Address(RVA = "0x502C820", Offset = "0x502C820", VA = "0x502C820")]
		private set
		{
		}
	}

	[Token(Token = "0x170001D1")]
	public bool isImmediatePropagationStopped
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x502C840", Offset = "0x502C840", VA = "0x502C840")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x502C850", Offset = "0x502C850", VA = "0x502C850")]
		private set
		{
		}
	}

	[Token(Token = "0x170001D2")]
	public bool isDefaultPrevented
	{
		[Token(Token = "0x6000A35")]
		[Address(RVA = "0x502C880", Offset = "0x502C880", VA = "0x502C880")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A36")]
		[Address(RVA = "0x502C890", Offset = "0x502C890", VA = "0x502C890")]
		private set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	internal PropagationPhase propagationPhase
	{
		[Token(Token = "0x6000A38")]
		[Address(RVA = "0x502C8C0", Offset = "0x502C8C0", VA = "0x502C8C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D4")]
	public virtual IEventHandler currentTarget
	{
		[Token(Token = "0x6000A39")]
		[Address(RVA = "0x502C8D0", Offset = "0x502C8D0", VA = "0x502C8D0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A3A")]
		[Address(RVA = "0x502C8E0", Offset = "0x502C8E0", VA = "0x502C8E0", Slot = "12")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001D5")]
	public bool dispatch
	{
		[Token(Token = "0x6000A3B")]
		[Address(RVA = "0x502C9C0", Offset = "0x502C9C0", VA = "0x502C9C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A3C")]
		[Address(RVA = "0x502C9D0", Offset = "0x502C9D0", VA = "0x502C9D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001D6")]
	private bool dispatched
	{
		[Token(Token = "0x6000A3E")]
		[Address(RVA = "0x502CA10", Offset = "0x502CA10", VA = "0x502CA10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x502C9F0", Offset = "0x502C9F0", VA = "0x502C9F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	internal bool processed
	{
		[Token(Token = "0x6000A40")]
		[Address(RVA = "0x502CA20", Offset = "0x502CA20", VA = "0x502CA20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A41")]
		[Address(RVA = "0x502C640", Offset = "0x502C640", VA = "0x502C640")]
		private set
		{
		}
	}

	[Token(Token = "0x170001D8")]
	internal bool processedByFocusController
	{
		[Token(Token = "0x6000A42")]
		[Address(RVA = "0x502CA30", Offset = "0x502CA30", VA = "0x502CA30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A43")]
		[Address(RVA = "0x502CA40", Offset = "0x502CA40", VA = "0x502CA40")]
		set
		{
		}
	}

	[Token(Token = "0x170001D9")]
	internal bool propagateToIMGUI
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x502CA60", Offset = "0x502CA60", VA = "0x502CA60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A45")]
		[Address(RVA = "0x502CA70", Offset = "0x502CA70", VA = "0x502CA70")]
		set
		{
		}
	}

	[Token(Token = "0x170001DA")]
	private bool imguiEventIsValid
	{
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x502CA90", Offset = "0x502CA90", VA = "0x502CA90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A47")]
		[Address(RVA = "0x502CAA0", Offset = "0x502CAA0", VA = "0x502CAA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001DB")]
	public Event imguiEvent
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x5028E00", Offset = "0x5028E00", VA = "0x5028E00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x502CAC0", Offset = "0x502CAC0", VA = "0x502CAC0")]
		protected set
		{
		}
	}

	[Token(Token = "0x170001DC")]
	public Vector2 originalMousePosition
	{
		[Token(Token = "0x6000A4A")]
		[Address(RVA = "0x502CB70", Offset = "0x502CB70", VA = "0x502CB70")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000A4B")]
		[Address(RVA = "0x502CB80", Offset = "0x502CB80", VA = "0x502CB80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001DD")]
	protected bool pooled
	{
		[Token(Token = "0x6000A4F")]
		[Address(RVA = "0x502CD10", Offset = "0x502CD10", VA = "0x502CD10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x502CCB0", Offset = "0x502CCB0", VA = "0x502CCB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x502C4E0", Offset = "0x502C4E0", VA = "0x502C4E0")]
	protected static long RegisterEventType()
	{
		return default(long);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x502C590", Offset = "0x502C590", VA = "0x502C590")]
	internal void SetTriggerEventId(ulong id)
	{
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x502C5E0", Offset = "0x502C5E0", VA = "0x502C5E0", Slot = "6")]
	[Obsolete("Override PreDispatch(IPanel panel) instead.")]
	protected virtual void PreDispatch()
	{
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x502C5F0", Offset = "0x502C5F0", VA = "0x502C5F0", Slot = "7")]
	protected internal virtual void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x502C610", Offset = "0x502C610", VA = "0x502C610", Slot = "8")]
	[Obsolete("Override PostDispatch(IPanel panel) instead.")]
	protected virtual void PostDispatch()
	{
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x502C620", Offset = "0x502C620", VA = "0x502C620", Slot = "9")]
	protected internal virtual void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x502C660", Offset = "0x502C660", VA = "0x502C660", Slot = "10")]
	internal virtual void Dispatch([NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x501D290", Offset = "0x501D290", VA = "0x501D290")]
	public void StopPropagation()
	{
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x502C870", Offset = "0x502C870", VA = "0x502C870")]
	public void StopImmediatePropagation()
	{
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x502C8B0", Offset = "0x502C8B0", VA = "0x502C8B0")]
	public void PreventDefault()
	{
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x5028D80", Offset = "0x5028D80", VA = "0x5028D80")]
	internal void MarkReceivedByDispatcher()
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x502CB90", Offset = "0x502CB90", VA = "0x502CB90", Slot = "13")]
	protected virtual void Init()
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x502CBA0", Offset = "0x502CBA0", VA = "0x502CBA0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x502CCD0", Offset = "0x502CCD0", VA = "0x502CCD0")]
	internal EventBase(EventCategory category)
	{
	}

	[Token(Token = "0x6000A51")]
	internal abstract void Acquire();

	[Token(Token = "0x6000A52")]
	public abstract void Dispose();
}
[Token(Token = "0x2000180")]
[EventCategory(EventCategory.Default)]
public abstract class EventBase<T> : EventBase where T : EventBase<T>, new()
{
	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x0")]
	private static readonly long s_TypeId;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<T> s_Pool;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x0")]
	private int m_RefCount;

	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EventCategory EventCategory;

	[Token(Token = "0x170001DE")]
	public override long eventTypeId
	{
		[Token(Token = "0x6000A5C")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000A53")]
	internal static void SetCreateFunction(Func<T> createMethod)
	{
	}

	[Token(Token = "0x6000A54")]
	protected EventBase()
	{
	}

	[Token(Token = "0x6000A55")]
	public static long TypeId()
	{
		return default(long);
	}

	[Token(Token = "0x6000A56")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000A57")]
	public static T GetPooled()
	{
		return null;
	}

	[Token(Token = "0x6000A58")]
	internal static T GetPooled(EventBase e)
	{
		return null;
	}

	[Token(Token = "0x6000A59")]
	private static void ReleasePooled(T evt)
	{
	}

	[Token(Token = "0x6000A5A")]
	internal override void Acquire()
	{
	}

	[Token(Token = "0x6000A5B")]
	public sealed override void Dispose()
	{
	}
}
