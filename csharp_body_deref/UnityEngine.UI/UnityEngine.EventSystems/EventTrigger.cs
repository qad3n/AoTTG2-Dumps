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

[Token(Token = "0x20000B4")]
[AddComponentMenu("Event/Event Trigger")]
[UnityEngine.UGUIHelpURL("EventTrigger")]
public class EventTrigger : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler, IInitializePotentialDragHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IDropHandler, IScrollHandler, IUpdateSelectedHandler, ISelectHandler, IDeselectHandler, IMoveHandler, ISubmitHandler, ICancelHandler
{
	[Serializable]
	[Token(Token = "0x20000B5")]
	public class TriggerEvent : UnityEvent<BaseEventData>
	{
		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x33044D0", Offset = "0x3302AD0", VA = "0x1833044D0")]
		public TriggerEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20000B6")]
	public class Entry
	{
		[Token(Token = "0x400030F")]
		[FieldOffset(Offset = "0x10")]
		public EventTriggerType eventID;

		[Token(Token = "0x4000310")]
		[FieldOffset(Offset = "0x18")]
		public TriggerEvent callback;

		[Token(Token = "0x60006CF")]
		[Address(RVA = "0x32F2630", Offset = "0x32F0C30", VA = "0x1832F2630")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("delegates")]
	[SerializeField]
	private List<Entry> m_Delegates;

	[Token(Token = "0x170001D0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Please use triggers instead (UnityUpgradable) -> triggers", true)]
	public List<Entry> delegates
	{
		[Token(Token = "0x60006B7")]
		[Address(RVA = "0x32F4A80", Offset = "0x32F3080", VA = "0x1832F4A80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001D1")]
	public List<Entry> triggers
	{
		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x32F4A90", Offset = "0x32F3090", VA = "0x1832F4A90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006BB")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	protected EventTrigger()
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x32F47D0", Offset = "0x32F2DD0", VA = "0x1832F47D0")]
	private void Execute(EventTriggerType id, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x32F4A10", Offset = "0x32F3010", VA = "0x1832F4A10", Slot = "21")]
	public virtual void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x32F4A20", Offset = "0x32F3020", VA = "0x1832F4A20", Slot = "22")]
	public virtual void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x32F49A0", Offset = "0x32F2FA0", VA = "0x1832F49A0", Slot = "23")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x32F49B0", Offset = "0x32F2FB0", VA = "0x1832F49B0", Slot = "24")]
	public virtual void OnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x32F4A00", Offset = "0x32F3000", VA = "0x1832F4A00", Slot = "25")]
	public virtual void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x32F4A30", Offset = "0x32F3030", VA = "0x1832F4A30", Slot = "26")]
	public virtual void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x32F49F0", Offset = "0x32F2FF0", VA = "0x1832F49F0", Slot = "27")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x32F4A50", Offset = "0x32F3050", VA = "0x1832F4A50", Slot = "28")]
	public virtual void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x32F4990", Offset = "0x32F2F90", VA = "0x1832F4990", Slot = "29")]
	public virtual void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x32F4A40", Offset = "0x32F3040", VA = "0x1832F4A40", Slot = "30")]
	public virtual void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x32F49E0", Offset = "0x32F2FE0", VA = "0x1832F49E0", Slot = "31")]
	public virtual void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x32F4A70", Offset = "0x32F3070", VA = "0x1832F4A70", Slot = "32")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x32F49D0", Offset = "0x32F2FD0", VA = "0x1832F49D0", Slot = "33")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x32F4970", Offset = "0x32F2F70", VA = "0x1832F4970", Slot = "34")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x32F49C0", Offset = "0x32F2FC0", VA = "0x1832F49C0", Slot = "35")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x32F4A60", Offset = "0x32F3060", VA = "0x1832F4A60", Slot = "36")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x32F4980", Offset = "0x32F2F80", VA = "0x1832F4980", Slot = "37")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}
}
