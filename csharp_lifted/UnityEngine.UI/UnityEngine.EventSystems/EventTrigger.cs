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
		[Address(RVA = "0x6D0B2B0", Offset = "0x6D0A2B0", VA = "0x6D0B2B0")]
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
		[Address(RVA = "0x6D0B2F0", Offset = "0x6D0A2F0", VA = "0x6D0B2F0")]
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
		[Address(RVA = "0x6D0AEC0", Offset = "0x6D09EC0", VA = "0x6D0AEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x6D0AFE0", Offset = "0x6D09FE0", VA = "0x6D0AFE0")]
		set
		{
		}
	}

	[Token(Token = "0x170001D1")]
	public List<Entry> triggers
	{
		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x6D0AF50", Offset = "0x6D09F50", VA = "0x6D0AF50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006BB")]
		[Address(RVA = "0x6D0B000", Offset = "0x6D0A000", VA = "0x6D0B000")]
		set
		{
		}
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x6D0AFF0", Offset = "0x6D09FF0", VA = "0x6D0AFF0")]
	protected EventTrigger()
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x6D0B010", Offset = "0x6D0A010", VA = "0x6D0B010")]
	private void Execute(EventTriggerType id, BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x6D0B1A0", Offset = "0x6D0A1A0", VA = "0x6D0B1A0", Slot = "21")]
	public virtual void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x6D0B1B0", Offset = "0x6D0A1B0", VA = "0x6D0B1B0", Slot = "22")]
	public virtual void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x6D0B1C0", Offset = "0x6D0A1C0", VA = "0x6D0B1C0", Slot = "23")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x6D0B1D0", Offset = "0x6D0A1D0", VA = "0x6D0B1D0", Slot = "24")]
	public virtual void OnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x6D0B1E0", Offset = "0x6D0A1E0", VA = "0x6D0B1E0", Slot = "25")]
	public virtual void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x6D0B1F0", Offset = "0x6D0A1F0", VA = "0x6D0B1F0", Slot = "26")]
	public virtual void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x6D0B200", Offset = "0x6D0A200", VA = "0x6D0B200", Slot = "27")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x6D0B210", Offset = "0x6D0A210", VA = "0x6D0B210", Slot = "28")]
	public virtual void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x6D0B220", Offset = "0x6D0A220", VA = "0x6D0B220", Slot = "29")]
	public virtual void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x6D0B230", Offset = "0x6D0A230", VA = "0x6D0B230", Slot = "30")]
	public virtual void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x6D0B240", Offset = "0x6D0A240", VA = "0x6D0B240", Slot = "31")]
	public virtual void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x6D0B250", Offset = "0x6D0A250", VA = "0x6D0B250", Slot = "32")]
	public virtual void OnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x6D0B260", Offset = "0x6D0A260", VA = "0x6D0B260", Slot = "33")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x6D0B270", Offset = "0x6D0A270", VA = "0x6D0B270", Slot = "34")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x6D0B280", Offset = "0x6D0A280", VA = "0x6D0B280", Slot = "35")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x6D0B290", Offset = "0x6D0A290", VA = "0x6D0B290", Slot = "36")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x6D0B2A0", Offset = "0x6D0A2A0", VA = "0x6D0B2A0", Slot = "37")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}
}
