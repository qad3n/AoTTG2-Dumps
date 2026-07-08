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
		[Address(RVA = "0x4D04BF0", Offset = "0x4D04BF0", VA = "0x4D04BF0", Slot = "5")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001C2")]
	internal EventCategory eventCategory
	{
		[Token(Token = "0x6000A12")]
		[Address(RVA = "0x4D04C00", Offset = "0x4D04C00", VA = "0x4D04C00")]
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
		[Address(RVA = "0x4D04C10", Offset = "0x4D04C10", VA = "0x4D04C10")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x4D04C20", Offset = "0x4D04C20", VA = "0x4D04C20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001C4")]
	internal ulong eventId
	{
		[Token(Token = "0x6000A15")]
		[Address(RVA = "0x4D04C30", Offset = "0x4D04C30", VA = "0x4D04C30")]
		[CompilerGenerated]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x6000A16")]
		[Address(RVA = "0x4D04C40", Offset = "0x4D04C40", VA = "0x4D04C40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001C5")]
	private ulong triggerEventId
	{
		[Token(Token = "0x6000A17")]
		[Address(RVA = "0x4D04C50", Offset = "0x4D04C50", VA = "0x4D04C50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	internal EventPropagation propagation
	{
		[Token(Token = "0x6000A19")]
		[Address(RVA = "0x4D04C70", Offset = "0x4D04C70", VA = "0x4D04C70")]
		[CompilerGenerated]
		get
		{
			return default(EventPropagation);
		}
		[Token(Token = "0x6000A1A")]
		[Address(RVA = "0x4D04C80", Offset = "0x4D04C80", VA = "0x4D04C80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C7")]
	private LifeCycleStatus lifeCycleStatus
	{
		[Token(Token = "0x6000A1B")]
		[Address(RVA = "0x4D04C90", Offset = "0x4D04C90", VA = "0x4D04C90")]
		[CompilerGenerated]
		get
		{
			return default(LifeCycleStatus);
		}
		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x4D04CA0", Offset = "0x4D04CA0", VA = "0x4D04CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C8")]
	public bool bubbles
	{
		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x4D04D90", Offset = "0x4D04D90", VA = "0x4D04D90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C9")]
	public bool tricklesDown
	{
		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x4D04DA0", Offset = "0x4D04DA0", VA = "0x4D04DA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CA")]
	internal bool skipDisabledElements
	{
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x4D04DB0", Offset = "0x4D04DB0", VA = "0x4D04DB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x4D04DC0", Offset = "0x4D04DC0", VA = "0x4D04DC0")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	internal bool ignoreCompositeRoots
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x4D04DE0", Offset = "0x4D04DE0", VA = "0x4D04DE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x4D04DF0", Offset = "0x4D04DF0", VA = "0x4D04DF0")]
		set
		{
		}
	}

	[Token(Token = "0x170001CC")]
	internal bool bubblesOrTricklesDown
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x4D04E10", Offset = "0x4D04E10", VA = "0x4D04E10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CD")]
	internal VisualElement leafTarget
	{
		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x4D04E20", Offset = "0x4D04E20", VA = "0x4D04E20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x4D04E30", Offset = "0x4D04E30", VA = "0x4D04E30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001CE")]
	internal VisualElement elementTarget
	{
		[Token(Token = "0x6000A2B")]
		[Address(RVA = "0x4D04E40", Offset = "0x4D04E40", VA = "0x4D04E40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x4D04E50", Offset = "0x4D04E50", VA = "0x4D04E50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001CF")]
	public IEventHandler target
	{
		[Token(Token = "0x6000A2D")]
		[Address(RVA = "0x4D04E60", Offset = "0x4D04E60", VA = "0x4D04E60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2E")]
		[Address(RVA = "0x4D04E70", Offset = "0x4D04E70", VA = "0x4D04E70")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	public bool isPropagationStopped
	{
		[Token(Token = "0x6000A2F")]
		[Address(RVA = "0x4D01B20", Offset = "0x4D01B20", VA = "0x4D01B20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A30")]
		[Address(RVA = "0x4D04EF0", Offset = "0x4D04EF0", VA = "0x4D04EF0")]
		private set
		{
		}
	}

	[Token(Token = "0x170001D1")]
	public bool isImmediatePropagationStopped
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x4D04F10", Offset = "0x4D04F10", VA = "0x4D04F10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x4D04F20", Offset = "0x4D04F20", VA = "0x4D04F20")]
		private set
		{
		}
	}

	[Token(Token = "0x170001D2")]
	public bool isDefaultPrevented
	{
		[Token(Token = "0x6000A35")]
		[Address(RVA = "0x4D04F50", Offset = "0x4D04F50", VA = "0x4D04F50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A36")]
		[Address(RVA = "0x4D04F60", Offset = "0x4D04F60", VA = "0x4D04F60")]
		private set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	internal PropagationPhase propagationPhase
	{
		[Token(Token = "0x6000A38")]
		[Address(RVA = "0x4D04F90", Offset = "0x4D04F90", VA = "0x4D04F90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D4")]
	public virtual IEventHandler currentTarget
	{
		[Token(Token = "0x6000A39")]
		[Address(RVA = "0x4D04FA0", Offset = "0x4D04FA0", VA = "0x4D04FA0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A3A")]
		[Address(RVA = "0x4D04FB0", Offset = "0x4D04FB0", VA = "0x4D04FB0", Slot = "12")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001D5")]
	public bool dispatch
	{
		[Token(Token = "0x6000A3B")]
		[Address(RVA = "0x4D05090", Offset = "0x4D05090", VA = "0x4D05090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A3C")]
		[Address(RVA = "0x4D050A0", Offset = "0x4D050A0", VA = "0x4D050A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001D6")]
	private bool dispatched
	{
		[Token(Token = "0x6000A3E")]
		[Address(RVA = "0x4D050E0", Offset = "0x4D050E0", VA = "0x4D050E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x4D050C0", Offset = "0x4D050C0", VA = "0x4D050C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	internal bool processed
	{
		[Token(Token = "0x6000A40")]
		[Address(RVA = "0x4D050F0", Offset = "0x4D050F0", VA = "0x4D050F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A41")]
		[Address(RVA = "0x4D04D10", Offset = "0x4D04D10", VA = "0x4D04D10")]
		private set
		{
		}
	}

	[Token(Token = "0x170001D8")]
	internal bool processedByFocusController
	{
		[Token(Token = "0x6000A42")]
		[Address(RVA = "0x4D05100", Offset = "0x4D05100", VA = "0x4D05100")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A43")]
		[Address(RVA = "0x4D05110", Offset = "0x4D05110", VA = "0x4D05110")]
		set
		{
		}
	}

	[Token(Token = "0x170001D9")]
	internal bool propagateToIMGUI
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x4D05130", Offset = "0x4D05130", VA = "0x4D05130")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A45")]
		[Address(RVA = "0x4D05140", Offset = "0x4D05140", VA = "0x4D05140")]
		set
		{
		}
	}

	[Token(Token = "0x170001DA")]
	private bool imguiEventIsValid
	{
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x4D05160", Offset = "0x4D05160", VA = "0x4D05160")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A47")]
		[Address(RVA = "0x4D05170", Offset = "0x4D05170", VA = "0x4D05170")]
		set
		{
		}
	}

	[Token(Token = "0x170001DB")]
	public Event imguiEvent
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x4D014D0", Offset = "0x4D014D0", VA = "0x4D014D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x4D05190", Offset = "0x4D05190", VA = "0x4D05190")]
		protected set
		{
		}
	}

	[Token(Token = "0x170001DC")]
	public Vector2 originalMousePosition
	{
		[Token(Token = "0x6000A4A")]
		[Address(RVA = "0x4D05240", Offset = "0x4D05240", VA = "0x4D05240")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000A4B")]
		[Address(RVA = "0x4D05250", Offset = "0x4D05250", VA = "0x4D05250")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001DD")]
	protected bool pooled
	{
		[Token(Token = "0x6000A4F")]
		[Address(RVA = "0x4D053E0", Offset = "0x4D053E0", VA = "0x4D053E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x4D05380", Offset = "0x4D05380", VA = "0x4D05380")]
		set
		{
		}
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x4D04BB0", Offset = "0x4D04BB0", VA = "0x4D04BB0")]
	protected static long RegisterEventType()
	{
		return default(long);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x4D04C60", Offset = "0x4D04C60", VA = "0x4D04C60")]
	internal void SetTriggerEventId(ulong id)
	{
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x4D04CB0", Offset = "0x4D04CB0", VA = "0x4D04CB0", Slot = "6")]
	[Obsolete("Override PreDispatch(IPanel panel) instead.")]
	protected virtual void PreDispatch()
	{
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x4D04CC0", Offset = "0x4D04CC0", VA = "0x4D04CC0", Slot = "7")]
	protected internal virtual void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x4D04CE0", Offset = "0x4D04CE0", VA = "0x4D04CE0", Slot = "8")]
	[Obsolete("Override PostDispatch(IPanel panel) instead.")]
	protected virtual void PostDispatch()
	{
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x4D04CF0", Offset = "0x4D04CF0", VA = "0x4D04CF0", Slot = "9")]
	protected internal virtual void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x4D04D30", Offset = "0x4D04D30", VA = "0x4D04D30", Slot = "10")]
	internal virtual void Dispatch([NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x4CF5960", Offset = "0x4CF5960", VA = "0x4CF5960")]
	public void StopPropagation()
	{
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x4D04F40", Offset = "0x4D04F40", VA = "0x4D04F40")]
	public void StopImmediatePropagation()
	{
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x4D04F80", Offset = "0x4D04F80", VA = "0x4D04F80")]
	public void PreventDefault()
	{
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x4D01450", Offset = "0x4D01450", VA = "0x4D01450")]
	internal void MarkReceivedByDispatcher()
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x4D05260", Offset = "0x4D05260", VA = "0x4D05260", Slot = "13")]
	protected virtual void Init()
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x4D05270", Offset = "0x4D05270", VA = "0x4D05270")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x4D053A0", Offset = "0x4D053A0", VA = "0x4D053A0")]
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
