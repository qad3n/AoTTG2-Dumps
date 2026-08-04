// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Scrollbar
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;

namespace UnityEngine.UI;

[Token(Token = "0x2000060")]
[AddComponentMenu("UI/Scrollbar", 36)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class Scrollbar : Selectable, IBeginDragHandler, IEventSystemHandler, IDragHandler, IInitializePotentialDragHandler, ICanvasElement
{
	[Token(Token = "0x2000061")]
	public enum Direction
	{
		[Token(Token = "0x40001CC")]
		LeftToRight,
		[Token(Token = "0x40001CD")]
		RightToLeft,
		[Token(Token = "0x40001CE")]
		BottomToTop,
		[Token(Token = "0x40001CF")]
		TopToBottom
	}

	[Serializable]
	[Token(Token = "0x2000062")]
	public class ScrollEvent : UnityEvent<float>
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x50DB6C0", Offset = "0x50DB6C0", VA = "0x50DB6C0")]
		public ScrollEvent()
		{
		}
	}

	[Token(Token = "0x2000063")]
	private enum Axis
	{
		[Token(Token = "0x40001D1")]
		Horizontal,
		[Token(Token = "0x40001D2")]
		Vertical
	}

	[Token(Token = "0x2000064")]
	[CompilerGenerated]
	private sealed class _003CClickRepeat_003Ed__59 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001D3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001D4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001D5")]
		[FieldOffset(Offset = "0x20")]
		public Scrollbar _003C_003E4__this;

		[Token(Token = "0x40001D6")]
		[FieldOffset(Offset = "0x28")]
		public Vector2 screenPosition;

		[Token(Token = "0x40001D7")]
		[FieldOffset(Offset = "0x30")]
		public Camera camera;

		[Token(Token = "0x170000F5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60003C0")]
			[Address(RVA = "0x50DDCC0", Offset = "0x50DDCC0", VA = "0x50DDCC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000F6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60003C2")]
			[Address(RVA = "0x50DDD10", Offset = "0x50DDD10", VA = "0x50DDD10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x50DCD20", Offset = "0x50DCD20", VA = "0x50DCD20")]
		[DebuggerHidden]
		public _003CClickRepeat_003Ed__59(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x50DDB90", Offset = "0x50DDB90", VA = "0x50DDB90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x50DDBA0", Offset = "0x50DDBA0", VA = "0x50DDBA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x50DDCD0", Offset = "0x50DDCD0", VA = "0x50DDCD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private RectTransform m_HandleRect;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private Direction m_Direction;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x10C")]
	[Range(0f, 1f)]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x110")]
	[Range(0f, 1f)]
	[SerializeField]
	private float m_Size;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x114")]
	[Range(0f, 11f)]
	[SerializeField]
	private int m_NumberOfSteps;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x118")]
	[Space(6f)]
	[SerializeField]
	private ScrollEvent m_OnValueChanged;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x120")]
	private RectTransform m_ContainerRect;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x128")]
	private Vector2 m_Offset;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x130")]
	private DrivenRectTransformTracker m_Tracker;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x138")]
	private Coroutine m_PointerDownRepeat;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x140")]
	private bool isPointerDownAndNotDragging;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x141")]
	private bool m_DelayedUpdateVisuals;

	[Token(Token = "0x170000EC")]
	public RectTransform handleRect
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x50DB0E0", Offset = "0x50DB0E0", VA = "0x50DB0E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x50DB0F0", Offset = "0x50DB0F0", VA = "0x50DB0F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	public Direction direction
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x50DB560", Offset = "0x50DB560", VA = "0x50DB560")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x50DB570", Offset = "0x50DB570", VA = "0x50DB570")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public float value
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x50DB870", Offset = "0x50DB870", VA = "0x50DB870")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000395")]
		[Address(RVA = "0x50DB950", Offset = "0x50DB950", VA = "0x50DB950")]
		set
		{
		}
	}

	[Token(Token = "0x170000EF")]
	public float size
	{
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x50DBBD0", Offset = "0x50DBBD0", VA = "0x50DBBD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x50DBBE0", Offset = "0x50DBBE0", VA = "0x50DBBE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F0")]
	public int numberOfSteps
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x50DBC50", Offset = "0x50DBC50", VA = "0x50DBC50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600039A")]
		[Address(RVA = "0x50DBC60", Offset = "0x50DBC60", VA = "0x50DBC60")]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	public ScrollEvent onValueChanged
	{
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x50DBCD0", Offset = "0x50DBCD0", VA = "0x50DBCD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600039C")]
		[Address(RVA = "0x50DBCE0", Offset = "0x50DBCE0", VA = "0x50DBCE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	private float stepSize
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x50DBD00", Offset = "0x50DBD00", VA = "0x50DBD00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000F3")]
	private Axis axis
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x50DC240", Offset = "0x50DC240", VA = "0x50DC240")]
		get
		{
			return default(Axis);
		}
	}

	[Token(Token = "0x170000F4")]
	private bool reverseValue
	{
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x50DC250", Offset = "0x50DC250", VA = "0x50DC250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x50DB5D0", Offset = "0x50DB5D0", VA = "0x50DB5D0")]
	protected Scrollbar()
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x50DBBC0", Offset = "0x50DBBC0", VA = "0x50DBBC0", Slot = "47")]
	public virtual void SetValueWithoutNotify(float input)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x50DBD30", Offset = "0x50DBD30", VA = "0x50DBD30", Slot = "48")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x50DBD40", Offset = "0x50DBD40", VA = "0x50DBD40", Slot = "49")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x50DBD50", Offset = "0x50DBD50", VA = "0x50DBD50", Slot = "50")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x50DBD60", Offset = "0x50DBD60", VA = "0x50DBD60", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x50DC080", Offset = "0x50DC080", VA = "0x50DC080", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x50DC1F0", Offset = "0x50DC1F0", VA = "0x50DC1F0", Slot = "51")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x50DB160", Offset = "0x50DB160", VA = "0x50DB160")]
	private void UpdateCachedReferences()
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x50DB960", Offset = "0x50DB960", VA = "0x50DB960")]
	private void Set(float input, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x50DC210", Offset = "0x50DC210", VA = "0x50DC210", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x50DB270", Offset = "0x50DB270", VA = "0x50DB270")]
	private void UpdateVisuals()
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x50DC260", Offset = "0x50DC260", VA = "0x50DC260")]
	private void UpdateDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x50DC360", Offset = "0x50DC360", VA = "0x50DC360")]
	private void UpdateDrag(RectTransform containerRect, Vector2 position, Camera camera)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x50DC590", Offset = "0x50DC590", VA = "0x50DC590")]
	private void DoUpdateDrag(Vector2 handleCorner, float remainingSize)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x50DC600", Offset = "0x50DC600", VA = "0x50DC600")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x50DC660", Offset = "0x50DC660", VA = "0x50DC660", Slot = "52")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x50DC850", Offset = "0x50DC850", VA = "0x50DC850", Slot = "53")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x50DC900", Offset = "0x50DC900", VA = "0x50DC900", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x50DCC70", Offset = "0x50DCC70", VA = "0x50DCC70")]
	protected IEnumerator ClickRepeat(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x50DCBD0", Offset = "0x50DCBD0", VA = "0x50DCBD0")]
	[IteratorStateMachine(typeof(_003CClickRepeat_003Ed__59))]
	protected IEnumerator ClickRepeat(Vector2 screenPosition, Camera camera)
	{
		return null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x50DCD40", Offset = "0x50DCD40", VA = "0x50DCD40", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x50DCEB0", Offset = "0x50DCEB0", VA = "0x50DCEB0", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x50DD690", Offset = "0x50DD690", VA = "0x50DD690", Slot = "27")]
	public override Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x50DD760", Offset = "0x50DD760", VA = "0x50DD760", Slot = "28")]
	public override Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x50DD830", Offset = "0x50DD830", VA = "0x50DD830", Slot = "29")]
	public override Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x50DD900", Offset = "0x50DD900", VA = "0x50DD900", Slot = "30")]
	public override Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x50DD9D0", Offset = "0x50DD9D0", VA = "0x50DD9D0", Slot = "54")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x50DD9F0", Offset = "0x50DD9F0", VA = "0x50DD9F0")]
	public void SetDirection(Direction direction, bool includeRectLayouts)
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x50DDB80", Offset = "0x50DDB80", VA = "0x50DDB80", Slot = "43")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
