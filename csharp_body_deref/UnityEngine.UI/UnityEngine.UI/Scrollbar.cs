using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;

namespace UnityEngine.UI;

[Token(Token = "0x2000064")]
[AddComponentMenu("UI/Scrollbar", 36)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class Scrollbar : Selectable, IBeginDragHandler, IEventSystemHandler, IDragHandler, IInitializePotentialDragHandler, ICanvasElement
{
	[Token(Token = "0x2000065")]
	public enum Direction
	{
		[Token(Token = "0x40001F9")]
		LeftToRight,
		[Token(Token = "0x40001FA")]
		RightToLeft,
		[Token(Token = "0x40001FB")]
		BottomToTop,
		[Token(Token = "0x40001FC")]
		TopToBottom
	}

	[Serializable]
	[Token(Token = "0x2000066")]
	public class ScrollEvent : UnityEvent<float>
	{
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x4DB9250", Offset = "0x4DB9250", VA = "0x4DB9250")]
		public ScrollEvent()
		{
		}
	}

	[Token(Token = "0x2000067")]
	private enum Axis
	{
		[Token(Token = "0x40001FE")]
		Horizontal,
		[Token(Token = "0x40001FF")]
		Vertical
	}

	[Token(Token = "0x2000068")]
	[CompilerGenerated]
	private sealed class _003CClickRepeat_003Ed__59 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000200")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000201")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000202")]
		[FieldOffset(Offset = "0x20")]
		public Scrollbar _003C_003E4__this;

		[Token(Token = "0x4000203")]
		[FieldOffset(Offset = "0x28")]
		public Vector2 screenPosition;

		[Token(Token = "0x4000204")]
		[FieldOffset(Offset = "0x30")]
		public Camera camera;

		[Token(Token = "0x17000114")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600041C")]
			[Address(RVA = "0x4DBB7D0", Offset = "0x4DBB7D0", VA = "0x4DBB7D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000115")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600041E")]
			[Address(RVA = "0x4DBB820", Offset = "0x4DBB820", VA = "0x4DBB820", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000419")]
		[Address(RVA = "0x4DBA830", Offset = "0x4DBA830", VA = "0x4DBA830")]
		[DebuggerHidden]
		public _003CClickRepeat_003Ed__59(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600041A")]
		[Address(RVA = "0x4DBB6A0", Offset = "0x4DBB6A0", VA = "0x4DBB6A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600041B")]
		[Address(RVA = "0x4DBB6B0", Offset = "0x4DBB6B0", VA = "0x4DBB6B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600041D")]
		[Address(RVA = "0x4DBB7E0", Offset = "0x4DBB7E0", VA = "0x4DBB7E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private RectTransform m_HandleRect;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private Direction m_Direction;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x10C")]
	[Range(0f, 1f)]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x110")]
	[Range(0f, 1f)]
	[SerializeField]
	private float m_Size;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x114")]
	[Range(0f, 11f)]
	[SerializeField]
	private int m_NumberOfSteps;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x118")]
	[Space(6f)]
	[SerializeField]
	private ScrollEvent m_OnValueChanged;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x120")]
	private RectTransform m_ContainerRect;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x128")]
	private Vector2 m_Offset;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x130")]
	private DrivenRectTransformTracker m_Tracker;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x138")]
	private Coroutine m_PointerDownRepeat;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x140")]
	private bool isPointerDownAndNotDragging;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x141")]
	private bool m_DelayedUpdateVisuals;

	[Token(Token = "0x1700010B")]
	public RectTransform handleRect
	{
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x4DB8C70", Offset = "0x4DB8C70", VA = "0x4DB8C70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x4DB8C80", Offset = "0x4DB8C80", VA = "0x4DB8C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public Direction direction
	{
		[Token(Token = "0x60003ED")]
		[Address(RVA = "0x4DB90F0", Offset = "0x4DB90F0", VA = "0x4DB90F0")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x60003EE")]
		[Address(RVA = "0x4DB9100", Offset = "0x4DB9100", VA = "0x4DB9100")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public float value
	{
		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x4DB9400", Offset = "0x4DB9400", VA = "0x4DB9400")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x4DB7230", Offset = "0x4DB7230", VA = "0x4DB7230")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	public float size
	{
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x4DB9750", Offset = "0x4DB9750", VA = "0x4DB9750")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x4DB7090", Offset = "0x4DB7090", VA = "0x4DB7090")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	public int numberOfSteps
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x4DB9760", Offset = "0x4DB9760", VA = "0x4DB9760")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x4DB9770", Offset = "0x4DB9770", VA = "0x4DB9770")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public ScrollEvent onValueChanged
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x4DB97E0", Offset = "0x4DB97E0", VA = "0x4DB97E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x4DB97F0", Offset = "0x4DB97F0", VA = "0x4DB97F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	private float stepSize
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x4DB9810", Offset = "0x4DB9810", VA = "0x4DB9810")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000112")]
	private Axis axis
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x4DB9D50", Offset = "0x4DB9D50", VA = "0x4DB9D50")]
		get
		{
			return default(Axis);
		}
	}

	[Token(Token = "0x17000113")]
	private bool reverseValue
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x4DB9D60", Offset = "0x4DB9D60", VA = "0x4DB9D60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4DB9160", Offset = "0x4DB9160", VA = "0x4DB9160")]
	protected Scrollbar()
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x4DB9740", Offset = "0x4DB9740", VA = "0x4DB9740", Slot = "47")]
	public virtual void SetValueWithoutNotify(float input)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x4DB9840", Offset = "0x4DB9840", VA = "0x4DB9840", Slot = "48")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x4DB9850", Offset = "0x4DB9850", VA = "0x4DB9850", Slot = "49")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x4DB9860", Offset = "0x4DB9860", VA = "0x4DB9860", Slot = "50")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x4DB9870", Offset = "0x4DB9870", VA = "0x4DB9870", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x4DB9B90", Offset = "0x4DB9B90", VA = "0x4DB9B90", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4DB9D00", Offset = "0x4DB9D00", VA = "0x4DB9D00", Slot = "51")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x4DB8CF0", Offset = "0x4DB8CF0", VA = "0x4DB8CF0")]
	private void UpdateCachedReferences()
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x4DB94E0", Offset = "0x4DB94E0", VA = "0x4DB94E0")]
	private void Set(float input, bool sendCallback = true)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4DB9D20", Offset = "0x4DB9D20", VA = "0x4DB9D20", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x4DB8E00", Offset = "0x4DB8E00", VA = "0x4DB8E00")]
	private void UpdateVisuals()
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x4DB9D70", Offset = "0x4DB9D70", VA = "0x4DB9D70")]
	private void UpdateDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x4DB9E70", Offset = "0x4DB9E70", VA = "0x4DB9E70")]
	private void UpdateDrag(RectTransform containerRect, Vector2 position, Camera camera)
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x4DBA0A0", Offset = "0x4DBA0A0", VA = "0x4DBA0A0")]
	private void DoUpdateDrag(Vector2 handleCorner, float remainingSize)
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x4DBA110", Offset = "0x4DBA110", VA = "0x4DBA110")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x4DBA170", Offset = "0x4DBA170", VA = "0x4DBA170", Slot = "52")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x4DBA360", Offset = "0x4DBA360", VA = "0x4DBA360", Slot = "53")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x4DBA410", Offset = "0x4DBA410", VA = "0x4DBA410", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x4DBA780", Offset = "0x4DBA780", VA = "0x4DBA780")]
	protected IEnumerator ClickRepeat(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x4DBA6E0", Offset = "0x4DBA6E0", VA = "0x4DBA6E0")]
	[IteratorStateMachine(typeof(_003CClickRepeat_003Ed__59))]
	protected IEnumerator ClickRepeat(Vector2 screenPosition, Camera camera)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x4DBA850", Offset = "0x4DBA850", VA = "0x4DBA850", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x4DBA9C0", Offset = "0x4DBA9C0", VA = "0x4DBA9C0", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x4DBB1A0", Offset = "0x4DBB1A0", VA = "0x4DBB1A0", Slot = "27")]
	public override Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x4DBB270", Offset = "0x4DBB270", VA = "0x4DBB270", Slot = "28")]
	public override Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x4DBB340", Offset = "0x4DBB340", VA = "0x4DBB340", Slot = "29")]
	public override Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x4DBB410", Offset = "0x4DBB410", VA = "0x4DBB410", Slot = "30")]
	public override Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x4DBB4E0", Offset = "0x4DBB4E0", VA = "0x4DBB4E0", Slot = "54")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x4DBB500", Offset = "0x4DBB500", VA = "0x4DBB500")]
	public void SetDirection(Direction direction, bool includeRectLayouts)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x4DBB690", Offset = "0x4DBB690", VA = "0x4DBB690", Slot = "43")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
