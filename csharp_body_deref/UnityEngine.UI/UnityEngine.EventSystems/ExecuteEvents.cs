using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000B7")]
public static class ExecuteEvents
{
	[Token(Token = "0x20000B8")]
	public delegate void EventFunction<T1>(T1 handler, BaseEventData eventData);

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EventFunction<IPointerMoveHandler> s_PointerMoveHandler;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x8")]
	private static readonly EventFunction<IPointerEnterHandler> s_PointerEnterHandler;

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x10")]
	private static readonly EventFunction<IPointerExitHandler> s_PointerExitHandler;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x18")]
	private static readonly EventFunction<IPointerDownHandler> s_PointerDownHandler;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x20")]
	private static readonly EventFunction<IPointerUpHandler> s_PointerUpHandler;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x28")]
	private static readonly EventFunction<IPointerClickHandler> s_PointerClickHandler;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x30")]
	private static readonly EventFunction<IInitializePotentialDragHandler> s_InitializePotentialDragHandler;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x38")]
	private static readonly EventFunction<IBeginDragHandler> s_BeginDragHandler;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x40")]
	private static readonly EventFunction<IDragHandler> s_DragHandler;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x48")]
	private static readonly EventFunction<IEndDragHandler> s_EndDragHandler;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x50")]
	private static readonly EventFunction<IDropHandler> s_DropHandler;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x58")]
	private static readonly EventFunction<IScrollHandler> s_ScrollHandler;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x60")]
	private static readonly EventFunction<IUpdateSelectedHandler> s_UpdateSelectedHandler;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x68")]
	private static readonly EventFunction<ISelectHandler> s_SelectHandler;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x70")]
	private static readonly EventFunction<IDeselectHandler> s_DeselectHandler;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x78")]
	private static readonly EventFunction<IMoveHandler> s_MoveHandler;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x80")]
	private static readonly EventFunction<ISubmitHandler> s_SubmitHandler;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x88")]
	private static readonly EventFunction<ICancelHandler> s_CancelHandler;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x90")]
	private static readonly List<Transform> s_InternalTransformList;

	[Token(Token = "0x170001C3")]
	public static EventFunction<IPointerMoveHandler> pointerMoveHandler
	{
		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x4DD24B0", Offset = "0x4DD24B0", VA = "0x4DD24B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	public static EventFunction<IPointerEnterHandler> pointerEnterHandler
	{
		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x4DD2520", Offset = "0x4DD2520", VA = "0x4DD2520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C5")]
	public static EventFunction<IPointerExitHandler> pointerExitHandler
	{
		[Token(Token = "0x60006A4")]
		[Address(RVA = "0x4DD2590", Offset = "0x4DD2590", VA = "0x4DD2590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	public static EventFunction<IPointerDownHandler> pointerDownHandler
	{
		[Token(Token = "0x60006A5")]
		[Address(RVA = "0x4DD2600", Offset = "0x4DD2600", VA = "0x4DD2600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C7")]
	public static EventFunction<IPointerUpHandler> pointerUpHandler
	{
		[Token(Token = "0x60006A6")]
		[Address(RVA = "0x4DD2670", Offset = "0x4DD2670", VA = "0x4DD2670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	public static EventFunction<IPointerClickHandler> pointerClickHandler
	{
		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x4DD26E0", Offset = "0x4DD26E0", VA = "0x4DD26E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	public static EventFunction<IInitializePotentialDragHandler> initializePotentialDrag
	{
		[Token(Token = "0x60006A8")]
		[Address(RVA = "0x4DD2750", Offset = "0x4DD2750", VA = "0x4DD2750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CA")]
	public static EventFunction<IBeginDragHandler> beginDragHandler
	{
		[Token(Token = "0x60006A9")]
		[Address(RVA = "0x4DD27C0", Offset = "0x4DD27C0", VA = "0x4DD27C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CB")]
	public static EventFunction<IDragHandler> dragHandler
	{
		[Token(Token = "0x60006AA")]
		[Address(RVA = "0x4DD2830", Offset = "0x4DD2830", VA = "0x4DD2830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	public static EventFunction<IEndDragHandler> endDragHandler
	{
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x4DD28A0", Offset = "0x4DD28A0", VA = "0x4DD28A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	public static EventFunction<IDropHandler> dropHandler
	{
		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x4DD2910", Offset = "0x4DD2910", VA = "0x4DD2910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	public static EventFunction<IScrollHandler> scrollHandler
	{
		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x4DD2980", Offset = "0x4DD2980", VA = "0x4DD2980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	public static EventFunction<IUpdateSelectedHandler> updateSelectedHandler
	{
		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x4DD29F0", Offset = "0x4DD29F0", VA = "0x4DD29F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D0")]
	public static EventFunction<ISelectHandler> selectHandler
	{
		[Token(Token = "0x60006AF")]
		[Address(RVA = "0x4DD2A60", Offset = "0x4DD2A60", VA = "0x4DD2A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D1")]
	public static EventFunction<IDeselectHandler> deselectHandler
	{
		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x4DD2AD0", Offset = "0x4DD2AD0", VA = "0x4DD2AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D2")]
	public static EventFunction<IMoveHandler> moveHandler
	{
		[Token(Token = "0x60006B1")]
		[Address(RVA = "0x4DD2B40", Offset = "0x4DD2B40", VA = "0x4DD2B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D3")]
	public static EventFunction<ISubmitHandler> submitHandler
	{
		[Token(Token = "0x60006B2")]
		[Address(RVA = "0x4DD2BB0", Offset = "0x4DD2BB0", VA = "0x4DD2BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	public static EventFunction<ICancelHandler> cancelHandler
	{
		[Token(Token = "0x60006B3")]
		[Address(RVA = "0x4DD2C20", Offset = "0x4DD2C20", VA = "0x4DD2C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600068F")]
	public static T ValidateEventData<T>(BaseEventData data) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x4DD1510", Offset = "0x4DD1510", VA = "0x4DD1510")]
	private static void Execute(IPointerMoveHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x4DD1600", Offset = "0x4DD1600", VA = "0x4DD1600")]
	private static void Execute(IPointerEnterHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x4DD16F0", Offset = "0x4DD16F0", VA = "0x4DD16F0")]
	private static void Execute(IPointerExitHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x4DD17E0", Offset = "0x4DD17E0", VA = "0x4DD17E0")]
	private static void Execute(IPointerDownHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x4DD18D0", Offset = "0x4DD18D0", VA = "0x4DD18D0")]
	private static void Execute(IPointerUpHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x4DD19C0", Offset = "0x4DD19C0", VA = "0x4DD19C0")]
	private static void Execute(IPointerClickHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x4DD1AB0", Offset = "0x4DD1AB0", VA = "0x4DD1AB0")]
	private static void Execute(IInitializePotentialDragHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x4DD1BA0", Offset = "0x4DD1BA0", VA = "0x4DD1BA0")]
	private static void Execute(IBeginDragHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x4DD1C90", Offset = "0x4DD1C90", VA = "0x4DD1C90")]
	private static void Execute(IDragHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x4DD1D80", Offset = "0x4DD1D80", VA = "0x4DD1D80")]
	private static void Execute(IEndDragHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x4DD1E70", Offset = "0x4DD1E70", VA = "0x4DD1E70")]
	private static void Execute(IDropHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x4DD1F60", Offset = "0x4DD1F60", VA = "0x4DD1F60")]
	private static void Execute(IScrollHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x4DD2050", Offset = "0x4DD2050", VA = "0x4DD2050")]
	private static void Execute(IUpdateSelectedHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x4DD2100", Offset = "0x4DD2100", VA = "0x4DD2100")]
	private static void Execute(ISelectHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x4DD21B0", Offset = "0x4DD21B0", VA = "0x4DD21B0")]
	private static void Execute(IDeselectHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x4DD2260", Offset = "0x4DD2260", VA = "0x4DD2260")]
	private static void Execute(IMoveHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x4DD2350", Offset = "0x4DD2350", VA = "0x4DD2350")]
	private static void Execute(ISubmitHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x4DD2400", Offset = "0x4DD2400", VA = "0x4DD2400")]
	private static void Execute(ICancelHandler handler, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x4DD2C90", Offset = "0x4DD2C90", VA = "0x4DD2C90")]
	private static void GetEventChain(GameObject root, IList<Transform> eventChain)
	{
	}

	[Token(Token = "0x60006B5")]
	public static bool Execute<T>(GameObject target, BaseEventData eventData, EventFunction<T> functor) where T : IEventSystemHandler
	{
		return default(bool);
	}

	[Token(Token = "0x60006B6")]
	public static GameObject ExecuteHierarchy<T>(GameObject root, BaseEventData eventData, EventFunction<T> callbackFunction) where T : IEventSystemHandler
	{
		return null;
	}

	[Token(Token = "0x60006B7")]
	private static bool ShouldSendToComponent<T>(Component component) where T : IEventSystemHandler
	{
		return default(bool);
	}

	[Token(Token = "0x60006B8")]
	private static void GetEventList<T>(GameObject go, IList<IEventSystemHandler> results) where T : IEventSystemHandler
	{
	}

	[Token(Token = "0x60006B9")]
	public static bool CanHandleEvent<T>(GameObject go) where T : IEventSystemHandler
	{
		return default(bool);
	}

	[Token(Token = "0x60006BA")]
	public static GameObject GetEventHandler<T>(GameObject root) where T : IEventSystemHandler
	{
		return null;
	}
}
