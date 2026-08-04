// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.EventTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50F8D90", Offset = "0x50F8D90", VA = "0x50F8D90")]
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
		[Address(RVA = "0x50F8DD0", Offset = "0x50F8DD0", VA = "0x50F8DD0")]
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
		[Address(RVA = "0x50F8990", Offset = "0x50F8990", VA = "0x50F8990")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x50F8AB0", Offset = "0x50F8AB0", VA = "0x50F8AB0")]
		set
		{
		}
	}

	[Token(Token = "0x170001C2")]
	public List<Entry> triggers
	{
		[Token(Token = "0x6000679")]
		[Address(RVA = "0x50F8A20", Offset = "0x50F8A20", VA = "0x50F8A20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600067A")]
		[Address(RVA = "0x50F8AD0", Offset = "0x50F8AD0", VA = "0x50F8AD0")]
		set
		{
		}
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x50F8AC0", Offset = "0x50F8AC0", VA = "0x50F8AC0")]
	protected EventTrigger()
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x50F8AE0", Offset = "0x50F8AE0", VA = "0x50F8AE0")]
	private void Execute(EventTriggerType id, BaseEventData eventData)
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x50F8C80", Offset = "0x50F8C80", VA = "0x50F8C80", Slot = "21")]
	public virtual void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x50F8C90", Offset = "0x50F8C90", VA = "0x50F8C90", Slot = "22")]
	public virtual void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x50F8CA0", Offset = "0x50F8CA0", VA = "0x50F8CA0", Slot = "23")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x50F8CB0", Offset = "0x50F8CB0", VA = "0x50F8CB0", Slot = "24")]
	public virtual void OnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x50F8CC0", Offset = "0x50F8CC0", VA = "0x50F8CC0", Slot = "25")]
	public virtual void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x50F8CD0", Offset = "0x50F8CD0", VA = "0x50F8CD0", Slot = "26")]
	public virtual void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x50F8CE0", Offset = "0x50F8CE0", VA = "0x50F8CE0", Slot = "27")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x50F8CF0", Offset = "0x50F8CF0", VA = "0x50F8CF0", Slot = "28")]
	public virtual void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x50F8D00", Offset = "0x50F8D00", VA = "0x50F8D00", Slot = "29")]
	public virtual void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x50F8D10", Offset = "0x50F8D10", VA = "0x50F8D10", Slot = "30")]
	public virtual void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x50F8D20", Offset = "0x50F8D20", VA = "0x50F8D20", Slot = "31")]
	public virtual void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x50F8D30", Offset = "0x50F8D30", VA = "0x50F8D30", Slot = "32")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x50F8D40", Offset = "0x50F8D40", VA = "0x50F8D40", Slot = "33")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x50F8D50", Offset = "0x50F8D50", VA = "0x50F8D50", Slot = "34")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x50F8D60", Offset = "0x50F8D60", VA = "0x50F8D60", Slot = "35")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x50F8D70", Offset = "0x50F8D70", VA = "0x50F8D70", Slot = "36")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x50F8D80", Offset = "0x50F8D80", VA = "0x50F8D80", Slot = "37")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}
}
