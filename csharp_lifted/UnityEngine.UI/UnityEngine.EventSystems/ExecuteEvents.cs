// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.ExecuteEvents
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000B8")]
public static class ExecuteEvents
{
	[Token(Token = "0x20000B9")]
	public delegate void EventFunction<T1>(T1 handler, BaseEventData eventData);

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EventFunction<IPointerMoveHandler> s_PointerMoveHandler;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x8")]
	private static readonly EventFunction<IPointerEnterHandler> s_PointerEnterHandler;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x10")]
	private static readonly EventFunction<IPointerExitHandler> s_PointerExitHandler;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x18")]
	private static readonly EventFunction<IPointerDownHandler> s_PointerDownHandler;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x20")]
	private static readonly EventFunction<IPointerUpHandler> s_PointerUpHandler;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x28")]
	private static readonly EventFunction<IPointerClickHandler> s_PointerClickHandler;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x30")]
	private static readonly EventFunction<IInitializePotentialDragHandler> s_InitializePotentialDragHandler;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x38")]
	private static readonly EventFunction<IBeginDragHandler> s_BeginDragHandler;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x40")]
	private static readonly EventFunction<IDragHandler> s_DragHandler;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0x48")]
	private static readonly EventFunction<IEndDragHandler> s_EndDragHandler;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x50")]
	private static readonly EventFunction<IDropHandler> s_DropHandler;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0x58")]
	private static readonly EventFunction<IScrollHandler> s_ScrollHandler;

	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x60")]
	private static readonly EventFunction<IUpdateSelectedHandler> s_UpdateSelectedHandler;

	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0x68")]
	private static readonly EventFunction<ISelectHandler> s_SelectHandler;

	[Token(Token = "0x4000331")]
	[FieldOffset(Offset = "0x70")]
	private static readonly EventFunction<IDeselectHandler> s_DeselectHandler;

	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0x78")]
	private static readonly EventFunction<IMoveHandler> s_MoveHandler;

	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0x80")]
	private static readonly EventFunction<ISubmitHandler> s_SubmitHandler;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0x88")]
	private static readonly EventFunction<ICancelHandler> s_CancelHandler;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0x90")]
	private static readonly List<Transform> s_InternalTransformList;

	[Token(Token = "0x170001D2")]
	public static EventFunction<IPointerMoveHandler> pointerMoveHandler
	{
		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x6D0C320", Offset = "0x6D0B320", VA = "0x6D0C320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D3")]
	public static EventFunction<IPointerEnterHandler> pointerEnterHandler
	{
		[Token(Token = "0x60006E4")]
		[Address(RVA = "0x6D0C390", Offset = "0x6D0B390", VA = "0x6D0C390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	public static EventFunction<IPointerExitHandler> pointerExitHandler
	{
		[Token(Token = "0x60006E5")]
		[Address(RVA = "0x6D0C400", Offset = "0x6D0B400", VA = "0x6D0C400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D5")]
	public static EventFunction<IPointerDownHandler> pointerDownHandler
	{
		[Token(Token = "0x60006E6")]
		[Address(RVA = "0x6D0C470", Offset = "0x6D0B470", VA = "0x6D0C470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public static EventFunction<IPointerUpHandler> pointerUpHandler
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x6D0C4E0", Offset = "0x6D0B4E0", VA = "0x6D0C4E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D7")]
	public static EventFunction<IPointerClickHandler> pointerClickHandler
	{
		[Token(Token = "0x60006E8")]
		[Address(RVA = "0x6D0C550", Offset = "0x6D0B550", VA = "0x6D0C550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D8")]
	public static EventFunction<IInitializePotentialDragHandler> initializePotentialDrag
	{
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x6D0C5C0", Offset = "0x6D0B5C0", VA = "0x6D0C5C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	public static EventFunction<IBeginDragHandler> beginDragHandler
	{
		[Token(Token = "0x60006EA")]
		[Address(RVA = "0x6D0C630", Offset = "0x6D0B630", VA = "0x6D0C630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DA")]
	public static EventFunction<IDragHandler> dragHandler
	{
		[Token(Token = "0x60006EB")]
		[Address(RVA = "0x6D0C6A0", Offset = "0x6D0B6A0", VA = "0x6D0C6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DB")]
	public static EventFunction<IEndDragHandler> endDragHandler
	{
		[Token(Token = "0x60006EC")]
		[Address(RVA = "0x6D0C710", Offset = "0x6D0B710", VA = "0x6D0C710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public static EventFunction<IDropHandler> dropHandler
	{
		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x6D0C780", Offset = "0x6D0B780", VA = "0x6D0C780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	public static EventFunction<IScrollHandler> scrollHandler
	{
		[Token(Token = "0x60006EE")]
		[Address(RVA = "0x6D0C7F0", Offset = "0x6D0B7F0", VA = "0x6D0C7F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DE")]
	public static EventFunction<IUpdateSelectedHandler> updateSelectedHandler
	{
		[Token(Token = "0x60006EF")]
		[Address(RVA = "0x6D0C860", Offset = "0x6D0B860", VA = "0x6D0C860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	public static EventFunction<ISelectHandler> selectHandler
	{
		[Token(Token = "0x60006F0")]
		[Address(RVA = "0x6D0C8D0", Offset = "0x6D0B8D0", VA = "0x6D0C8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E0")]
	public static EventFunction<IDeselectHandler> deselectHandler
	{
		[Token(Token = "0x60006F1")]
		[Address(RVA = "0x6D0C940", Offset = "0x6D0B940", VA = "0x6D0C940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E1")]
	public static EventFunction<IMoveHandler> moveHandler
	{
		[Token(Token = "0x60006F2")]
		[Address(RVA = "0x6D0C9B0", Offset = "0x6D0B9B0", VA = "0x6D0C9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E2")]
	public static EventFunction<ISubmitHandler> submitHandler
	{
		[Token(Token = "0x60006F3")]
		[Address(RVA = "0x6D0CA20", Offset = "0x6D0BA20", VA = "0x6D0CA20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	public static EventFunction<ICancelHandler> cancelHandler
	{
		[Token(Token = "0x60006F4")]
		[Address(RVA = "0x6D0CA90", Offset = "0x6D0BA90", VA = "0x6D0CA90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006D0")]
	public static T ValidateEventData<T>(BaseEventData data) where T : class
	{
		return null;
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x6D0B380", Offset = "0x6D0A380", VA = "0x6D0B380")]
	private static void Execute(IPointerMoveHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x6D0B470", Offset = "0x6D0A470", VA = "0x6D0B470")]
	private static void Execute(IPointerEnterHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x6D0B560", Offset = "0x6D0A560", VA = "0x6D0B560")]
	private static void Execute(IPointerExitHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x6D0B650", Offset = "0x6D0A650", VA = "0x6D0B650")]
	private static void Execute(IPointerDownHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x6D0B740", Offset = "0x6D0A740", VA = "0x6D0B740")]
	private static void Execute(IPointerUpHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x6D0B830", Offset = "0x6D0A830", VA = "0x6D0B830")]
	private static void Execute(IPointerClickHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x6D0B920", Offset = "0x6D0A920", VA = "0x6D0B920")]
	private static void Execute(IInitializePotentialDragHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x6D0BA10", Offset = "0x6D0AA10", VA = "0x6D0BA10")]
	private static void Execute(IBeginDragHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x6D0BB00", Offset = "0x6D0AB00", VA = "0x6D0BB00")]
	private static void Execute(IDragHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x6D0BBF0", Offset = "0x6D0ABF0", VA = "0x6D0BBF0")]
	private static void Execute(IEndDragHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x6D0BCE0", Offset = "0x6D0ACE0", VA = "0x6D0BCE0")]
	private static void Execute(IDropHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x6D0BDD0", Offset = "0x6D0ADD0", VA = "0x6D0BDD0")]
	private static void Execute(IScrollHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x6D0BEC0", Offset = "0x6D0AEC0", VA = "0x6D0BEC0")]
	private static void Execute(IUpdateSelectedHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x6D0BF70", Offset = "0x6D0AF70", VA = "0x6D0BF70")]
	private static void Execute(ISelectHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x6D0C020", Offset = "0x6D0B020", VA = "0x6D0C020")]
	private static void Execute(IDeselectHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x6D0C0D0", Offset = "0x6D0B0D0", VA = "0x6D0C0D0")]
	private static void Execute(IMoveHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x6D0C1C0", Offset = "0x6D0B1C0", VA = "0x6D0C1C0")]
	private static void Execute(ISubmitHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x6D0C270", Offset = "0x6D0B270", VA = "0x6D0C270")]
	private static void Execute(ICancelHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x6D0CB00", Offset = "0x6D0BB00", VA = "0x6D0CB00")]
	private static void GetEventChain(GameObject root, IList<Transform> eventChain)
	{
	}

	[Token(Token = "0x60006F6")]
	public static bool Execute<T>(GameObject target, BaseEventData eventData, EventFunction<T> functor) where T : IEventSystemHandler
	{
		return default(bool);
	}

	[Token(Token = "0x60006F7")]
	public static GameObject ExecuteHierarchy<T>(GameObject root, BaseEventData eventData, EventFunction<T> callbackFunction) where T : IEventSystemHandler
	{
		return null;
	}

	[Token(Token = "0x60006F8")]
	private static bool ShouldSendToComponent<T>(Component component) where T : IEventSystemHandler
	{
		return default(bool);
	}

	[Token(Token = "0x60006F9")]
	private static void GetEventList<T>(GameObject go, IList<IEventSystemHandler> results) where T : IEventSystemHandler
	{
	}

	[Token(Token = "0x60006FA")]
	public static bool CanHandleEvent<T>(GameObject go) where T : IEventSystemHandler
	{
		return default(bool);
	}

	[Token(Token = "0x60006FB")]
	public static GameObject GetEventHandler<T>(GameObject root) where T : IEventSystemHandler
	{
		return null;
	}
}
