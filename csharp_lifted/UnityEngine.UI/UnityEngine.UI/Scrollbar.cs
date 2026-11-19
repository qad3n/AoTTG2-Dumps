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

[Token(Token = "0x2000062")]
[AddComponentMenu("UI (Canvas)/Scrollbar", 36)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
[UnityEngine.UGUIHelpURL("Scrollbar")]
public class Scrollbar : Selectable, IBeginDragHandler, IEventSystemHandler, IDragHandler, IInitializePotentialDragHandler, ICanvasElement
{
	[Token(Token = "0x2000063")]
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
	[Token(Token = "0x2000064")]
	public class ScrollEvent : UnityEvent<float>
	{
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x6CF0790", Offset = "0x6CEF790", VA = "0x6CF0790")]
		public ScrollEvent()
		{
		}
	}

	[Token(Token = "0x2000065")]
	private enum Axis
	{
		[Token(Token = "0x40001FE")]
		Horizontal,
		[Token(Token = "0x40001FF")]
		Vertical
	}

	[Token(Token = "0x2000066")]
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

		[Token(Token = "0x17000115")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000428")]
			[Address(RVA = "0x6CF2C30", Offset = "0x6CF1C30", VA = "0x6CF2C30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000116")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600042A")]
			[Address(RVA = "0x6CF2C80", Offset = "0x6CF1C80", VA = "0x6CF2C80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000425")]
		[Address(RVA = "0x6CF1DD0", Offset = "0x6CF0DD0", VA = "0x6CF1DD0")]
		[DebuggerHidden]
		public _003CClickRepeat_003Ed__59(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000426")]
		[Address(RVA = "0x6CF2B00", Offset = "0x6CF1B00", VA = "0x6CF2B00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000427")]
		[Address(RVA = "0x6CF2B10", Offset = "0x6CF1B10", VA = "0x6CF2B10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000429")]
		[Address(RVA = "0x6CF2C40", Offset = "0x6CF1C40", VA = "0x6CF2C40", Slot = "8")]
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

	[Token(Token = "0x1700010C")]
	public RectTransform handleRect
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x6CF01F0", Offset = "0x6CEF1F0", VA = "0x6CF01F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x6CF0200", Offset = "0x6CEF200", VA = "0x6CF0200")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public Direction direction
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x6CF0620", Offset = "0x6CEF620", VA = "0x6CF0620")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x6CF0630", Offset = "0x6CEF630", VA = "0x6CF0630")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	public float value
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x6CF0940", Offset = "0x6CEF940", VA = "0x6CF0940")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x6CEE5F0", Offset = "0x6CED5F0", VA = "0x6CEE5F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	public float size
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x6CF0C90", Offset = "0x6CEFC90", VA = "0x6CF0C90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x6CEE450", Offset = "0x6CED450", VA = "0x6CEE450")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public int numberOfSteps
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x6CF0CA0", Offset = "0x6CEFCA0", VA = "0x6CF0CA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x6CF0CB0", Offset = "0x6CEFCB0", VA = "0x6CF0CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public ScrollEvent onValueChanged
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x6CF0D20", Offset = "0x6CEFD20", VA = "0x6CF0D20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x6CF0D30", Offset = "0x6CEFD30", VA = "0x6CF0D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	private float stepSize
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x6CF0D50", Offset = "0x6CEFD50", VA = "0x6CF0D50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000113")]
	private Axis axis
	{
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x6CF1290", Offset = "0x6CF0290", VA = "0x6CF1290")]
		get
		{
			return default(Axis);
		}
	}

	[Token(Token = "0x17000114")]
	private bool reverseValue
	{
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x6CF12A0", Offset = "0x6CF02A0", VA = "0x6CF12A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x6CF0690", Offset = "0x6CEF690", VA = "0x6CF0690")]
	protected Scrollbar()
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x6CF0C80", Offset = "0x6CEFC80", VA = "0x6CF0C80", Slot = "47")]
	public virtual void SetValueWithoutNotify(float input)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x6CF0D80", Offset = "0x6CEFD80", VA = "0x6CF0D80", Slot = "48")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x6CF0D90", Offset = "0x6CEFD90", VA = "0x6CF0D90", Slot = "49")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x6CF0DA0", Offset = "0x6CEFDA0", VA = "0x6CF0DA0", Slot = "50")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x6CF0DB0", Offset = "0x6CEFDB0", VA = "0x6CF0DB0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x6CF10D0", Offset = "0x6CF00D0", VA = "0x6CF10D0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x6CF1240", Offset = "0x6CF0240", VA = "0x6CF1240", Slot = "51")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x6CF0270", Offset = "0x6CEF270", VA = "0x6CF0270")]
	private void UpdateCachedReferences()
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x6CF0A20", Offset = "0x6CEFA20", VA = "0x6CF0A20")]
	private void Set(float input, bool sendCallback = true)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x6CF1260", Offset = "0x6CF0260", VA = "0x6CF1260", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x6CF0380", Offset = "0x6CEF380", VA = "0x6CF0380")]
	private void UpdateVisuals()
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x6CF12B0", Offset = "0x6CF02B0", VA = "0x6CF12B0")]
	private void UpdateDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x6CF13B0", Offset = "0x6CF03B0", VA = "0x6CF13B0")]
	private void UpdateDrag(RectTransform containerRect, Vector2 position, Camera camera)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x6CF1610", Offset = "0x6CF0610", VA = "0x6CF1610")]
	private void DoUpdateDrag(Vector2 handleCorner, float remainingSize)
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x6CF1680", Offset = "0x6CF0680", VA = "0x6CF1680")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x6CF16E0", Offset = "0x6CF06E0", VA = "0x6CF16E0", Slot = "52")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x6CF1910", Offset = "0x6CF0910", VA = "0x6CF1910", Slot = "53")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x6CF19C0", Offset = "0x6CF09C0", VA = "0x6CF19C0", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x6CF1D20", Offset = "0x6CF0D20", VA = "0x6CF1D20")]
	protected IEnumerator ClickRepeat(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x6CF1C90", Offset = "0x6CF0C90", VA = "0x6CF1C90")]
	[IteratorStateMachine(typeof(_003CClickRepeat_003Ed__59))]
	protected IEnumerator ClickRepeat(Vector2 screenPosition, Camera camera)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x6CF1DF0", Offset = "0x6CF0DF0", VA = "0x6CF1DF0", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x6CF1F60", Offset = "0x6CF0F60", VA = "0x6CF1F60", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x6CF2380", Offset = "0x6CF1380", VA = "0x6CF2380", Slot = "27")]
	public override Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x6CF24F0", Offset = "0x6CF14F0", VA = "0x6CF24F0", Slot = "28")]
	public override Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x6CF2660", Offset = "0x6CF1660", VA = "0x6CF2660", Slot = "29")]
	public override Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x6CF27D0", Offset = "0x6CF17D0", VA = "0x6CF27D0", Slot = "30")]
	public override Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x6CF2940", Offset = "0x6CF1940", VA = "0x6CF2940", Slot = "54")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x6CF2960", Offset = "0x6CF1960", VA = "0x6CF2960")]
	public void SetDirection(Direction direction, bool includeRectLayouts)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x6CF2AF0", Offset = "0x6CF1AF0", VA = "0x6CF2AF0", Slot = "43")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
