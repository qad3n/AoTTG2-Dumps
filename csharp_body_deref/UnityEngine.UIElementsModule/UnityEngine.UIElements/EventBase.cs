// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventBase
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x1A5F1F0", Offset = "0x1A5D7F0", VA = "0x181A5F1F0", Slot = "5")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000247")]
	internal int eventCategories
	{
		[Token(Token = "0x6000C17")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x111C9B0", Offset = "0x111AFB0", VA = "0x18111C9B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000249")]
	internal ulong eventId
	{
		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x1112310", Offset = "0x1110910", VA = "0x181112310")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700024A")]
	private ulong triggerEventId
	{
		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x325B9B0", Offset = "0x3259FB0", VA = "0x18325B9B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	internal EventPropagation propagation
	{
		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		[CompilerGenerated]
		get
		{
			return default(EventPropagation);
		}
		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	private LifeCycleStatus lifeCycleStatus
	{
		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		[CompilerGenerated]
		get
		{
			return default(LifeCycleStatus);
		}
		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	public bool bubbles
	{
		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x325BA80", Offset = "0x325A080", VA = "0x18325BA80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x1BA0C40", Offset = "0x1B9F240", VA = "0x181BA0C40")]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public bool tricklesDown
	{
		[Token(Token = "0x6000C29")]
		[Address(RVA = "0x325BB60", Offset = "0x325A160", VA = "0x18325BB60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C2A")]
		[Address(RVA = "0x1BA0C20", Offset = "0x1B9F220", VA = "0x181BA0C20")]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024F")]
	public bool ignoreDisabledElements
	{
		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x325BAB0", Offset = "0x325A0B0", VA = "0x18325BAB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x325BD20", Offset = "0x325A320", VA = "0x18325BD20")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000250")]
	internal bool bubblesOrTricklesDown
	{
		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x325BA70", Offset = "0x325A070", VA = "0x18325BA70")]
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
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C2F")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public IEventHandler target
	{
		[Token(Token = "0x6000C30")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C31")]
		[Address(RVA = "0x325BEE0", Offset = "0x325A4E0", VA = "0x18325BEE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool isPropagationStopped
	{
		[Token(Token = "0x6000C32")]
		[Address(RVA = "0x325BAF0", Offset = "0x325A0F0", VA = "0x18325BAF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C33")]
		[Address(RVA = "0x325BE40", Offset = "0x325A440", VA = "0x18325BE40")]
		private set
		{
		}
	}

	[Token(Token = "0x17000254")]
	public bool isImmediatePropagationStopped
	{
		[Token(Token = "0x6000C35")]
		[Address(RVA = "0x325BAE0", Offset = "0x325A0E0", VA = "0x18325BAE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C36")]
		[Address(RVA = "0x325BE20", Offset = "0x325A420", VA = "0x18325BE20")]
		private set
		{
		}
	}

	[Token(Token = "0x17000255")]
	internal PropagationPhase propagationPhase
	{
		[Token(Token = "0x6000C38")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	public virtual IEventHandler currentTarget
	{
		[Token(Token = "0x6000C39")]
		[Address(RVA = "0x2E8E8E0", Offset = "0x2E8CEE0", VA = "0x182E8E8E0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C3A")]
		[Address(RVA = "0x325BB70", Offset = "0x325A170", VA = "0x18325BB70", Slot = "12")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000257")]
	public bool dispatch
	{
		[Token(Token = "0x6000C3B")]
		[Address(RVA = "0x325BA90", Offset = "0x325A090", VA = "0x18325BA90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C3C")]
		[Address(RVA = "0x325BCE0", Offset = "0x325A2E0", VA = "0x18325BCE0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000258")]
	private bool dispatched
	{
		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x325BAA0", Offset = "0x325A0A0", VA = "0x18325BAA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C3F")]
		[Address(RVA = "0x325BD00", Offset = "0x325A300", VA = "0x18325BD00")]
		set
		{
		}
	}

	[Token(Token = "0x17000259")]
	internal bool processed
	{
		[Token(Token = "0x6000C40")]
		[Address(RVA = "0x325BB40", Offset = "0x325A140", VA = "0x18325BB40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C41")]
		[Address(RVA = "0x325BEA0", Offset = "0x325A4A0", VA = "0x18325BEA0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700025A")]
	internal bool processedByFocusController
	{
		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x325BB30", Offset = "0x325A130", VA = "0x18325BB30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C43")]
		[Address(RVA = "0x325BE80", Offset = "0x325A480", VA = "0x18325BE80")]
		set
		{
		}
	}

	[Token(Token = "0x1700025B")]
	internal bool propagateToIMGUI
	{
		[Token(Token = "0x6000C44")]
		[Address(RVA = "0x325BB50", Offset = "0x325A150", VA = "0x18325BB50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C45")]
		[Address(RVA = "0x325BEC0", Offset = "0x325A4C0", VA = "0x18325BEC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700025C")]
	private bool imguiEventIsValid
	{
		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x325BAC0", Offset = "0x325A0C0", VA = "0x18325BAC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x325BD40", Offset = "0x325A340", VA = "0x18325BD40")]
		set
		{
		}
	}

	[Token(Token = "0x1700025D")]
	public Event imguiEvent
	{
		[Token(Token = "0x6000C48")]
		[Address(RVA = "0x325BAD0", Offset = "0x325A0D0", VA = "0x18325BAD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C49")]
		[Address(RVA = "0x325BD60", Offset = "0x325A360", VA = "0x18325BD60")]
		protected set
		{
		}
	}

	[Token(Token = "0x1700025E")]
	public Vector2 originalMousePosition
	{
		[Token(Token = "0x6000C4A")]
		[Address(RVA = "0x325BB00", Offset = "0x325A100", VA = "0x18325BB00")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000C4B")]
		[Address(RVA = "0x1C442F0", Offset = "0x1C428F0", VA = "0x181C442F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700025F")]
	protected bool pooled
	{
		[Token(Token = "0x6000C50")]
		[Address(RVA = "0x325BB20", Offset = "0x325A120", VA = "0x18325BB20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C51")]
		[Address(RVA = "0x325BE60", Offset = "0x325A460", VA = "0x18325BE60")]
		set
		{
		}
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x325B960", Offset = "0x3259F60", VA = "0x18325B960")]
	protected static long RegisterEventType()
	{
		return default(long);
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x325B9B0", Offset = "0x3259FB0", VA = "0x18325B9B0")]
	internal void SetTriggerEventId(ulong id)
	{
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	[Obsolete("Override PreDispatch(IPanel panel) instead.")]
	protected virtual void PreDispatch()
	{
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x21B9E00", Offset = "0x21B8400", VA = "0x1821B9E00", Slot = "7")]
	protected internal virtual void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	[Obsolete("Override PostDispatch(IPanel panel) instead.")]
	protected virtual void PostDispatch()
	{
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x325B930", Offset = "0x3259F30", VA = "0x18325B930", Slot = "9")]
	protected internal virtual void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x325B770", Offset = "0x3259D70", VA = "0x18325B770", Slot = "10")]
	internal virtual void Dispatch([NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x325B9D0", Offset = "0x3259FD0", VA = "0x18325B9D0")]
	public void StopPropagation()
	{
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x325B9C0", Offset = "0x3259FC0", VA = "0x18325B9C0")]
	public void StopImmediatePropagation()
	{
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x325B8B0", Offset = "0x3259EB0", VA = "0x18325B8B0")]
	internal void MarkReceivedByDispatcher()
	{
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x325B7C0", Offset = "0x3259DC0", VA = "0x18325B7C0", Slot = "13")]
	protected virtual void Init()
	{
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x325B7D0", Offset = "0x3259DD0", VA = "0x18325B7D0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x325BA30", Offset = "0x325A030", VA = "0x18325BA30")]
	protected EventBase()
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x325B9E0", Offset = "0x3259FE0", VA = "0x18325B9E0")]
	internal EventBase(EventCategory category)
	{
	}

	[Token(Token = "0x6000C52")]
	internal abstract void Acquire();

	[Token(Token = "0x6000C53")]
	public abstract void Dispose();

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x111C9B0", Offset = "0x111AFB0", VA = "0x18111C9B0")]
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
