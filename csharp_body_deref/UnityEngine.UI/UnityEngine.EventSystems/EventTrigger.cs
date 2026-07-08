using System;
using System.Collections.Generic;
using System.ComponentModel;
using Il2CppDummyDll;
using UnityEngine.Events;
using UnityEngine.Serialization;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000B3")]
[AddComponentMenu("Event/Event Trigger")]
public class EventTrigger : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler, IInitializePotentialDragHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IDropHandler, IScrollHandler, IUpdateSelectedHandler, ISelectHandler, IDeselectHandler, IMoveHandler, ISubmitHandler, ICancelHandler
{
	[Serializable]
	[Token(Token = "0x20000B4")]
	public class TriggerEvent : UnityEvent<BaseEventData>
	{
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x4DD1440", Offset = "0x4DD1440", VA = "0x4DD1440")]
		public TriggerEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20000B5")]
	public class Entry
	{
		[Token(Token = "0x40002EE")]
		[FieldOffset(Offset = "0x10")]
		public EventTriggerType eventID;

		[Token(Token = "0x40002EF")]
		[FieldOffset(Offset = "0x18")]
		public TriggerEvent callback;

		[Token(Token = "0x600068E")]
		[Address(RVA = "0x4DD1480", Offset = "0x4DD1480", VA = "0x4DD1480")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("delegates")]
	[SerializeField]
	private List<Entry> m_Delegates;

	[Token(Token = "0x170001C1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Please use triggers instead (UnityUpgradable) -> triggers", true)]
	public List<Entry> delegates
	{
		[Token(Token = "0x6000676")]
		[Address(RVA = "0x4DD1040", Offset = "0x4DD1040", VA = "0x4DD1040")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x4DD1160", Offset = "0x4DD1160", VA = "0x4DD1160")]
		set
		{
		}
	}

	[Token(Token = "0x170001C2")]
	public List<Entry> triggers
	{
		[Token(Token = "0x6000679")]
		[Address(RVA = "0x4DD10D0", Offset = "0x4DD10D0", VA = "0x4DD10D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600067A")]
		[Address(RVA = "0x4DD1180", Offset = "0x4DD1180", VA = "0x4DD1180")]
		set
		{
		}
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4DD1170", Offset = "0x4DD1170", VA = "0x4DD1170")]
	protected EventTrigger()
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x4DD1190", Offset = "0x4DD1190", VA = "0x4DD1190")]
	private void Execute(EventTriggerType id, BaseEventData eventData)
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x4DD1330", Offset = "0x4DD1330", VA = "0x4DD1330", Slot = "21")]
	public virtual void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x4DD1340", Offset = "0x4DD1340", VA = "0x4DD1340", Slot = "22")]
	public virtual void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x4DD1350", Offset = "0x4DD1350", VA = "0x4DD1350", Slot = "23")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x4DD1360", Offset = "0x4DD1360", VA = "0x4DD1360", Slot = "24")]
	public virtual void OnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x4DD1370", Offset = "0x4DD1370", VA = "0x4DD1370", Slot = "25")]
	public virtual void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x4DD1380", Offset = "0x4DD1380", VA = "0x4DD1380", Slot = "26")]
	public virtual void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x4DD1390", Offset = "0x4DD1390", VA = "0x4DD1390", Slot = "27")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x4DD13A0", Offset = "0x4DD13A0", VA = "0x4DD13A0", Slot = "28")]
	public virtual void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x4DD13B0", Offset = "0x4DD13B0", VA = "0x4DD13B0", Slot = "29")]
	public virtual void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x4DD13C0", Offset = "0x4DD13C0", VA = "0x4DD13C0", Slot = "30")]
	public virtual void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x4DD13D0", Offset = "0x4DD13D0", VA = "0x4DD13D0", Slot = "31")]
	public virtual void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4DD13E0", Offset = "0x4DD13E0", VA = "0x4DD13E0", Slot = "32")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x4DD13F0", Offset = "0x4DD13F0", VA = "0x4DD13F0", Slot = "33")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x4DD1400", Offset = "0x4DD1400", VA = "0x4DD1400", Slot = "34")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x4DD1410", Offset = "0x4DD1410", VA = "0x4DD1410", Slot = "35")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x4DD1420", Offset = "0x4DD1420", VA = "0x4DD1420", Slot = "36")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x4DD1430", Offset = "0x4DD1430", VA = "0x4DD1430", Slot = "37")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}
}
