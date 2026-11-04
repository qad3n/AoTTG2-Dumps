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
		[Address(RVA = "0x32DE9D0", Offset = "0x32DCFD0", VA = "0x1832DE9D0")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000425")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CClickRepeat_003Ed__59(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000426")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000427")]
		[Address(RVA = "0x32EE740", Offset = "0x32ECD40", VA = "0x1832EE740", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000429")]
		[Address(RVA = "0x32EE8B0", Offset = "0x32ECEB0", VA = "0x1832EE8B0", Slot = "8")]
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
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x32E54A0", Offset = "0x32E3AA0", VA = "0x1832E54A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public Direction direction
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x32E5380", Offset = "0x32E3980", VA = "0x1832E5380")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x32E5440", Offset = "0x32E3A40", VA = "0x1832E5440")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	public float value
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x32E53E0", Offset = "0x32E39E0", VA = "0x1832E53E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x32E5600", Offset = "0x32E3C00", VA = "0x1832E5600")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	public float size
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x307B810", Offset = "0x3079E10", VA = "0x18307B810")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x32E5580", Offset = "0x32E3B80", VA = "0x1832E5580")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public int numberOfSteps
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x1CD3490", Offset = "0x1CD1A90", VA = "0x181CD3490")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x32E5510", Offset = "0x32E3B10", VA = "0x1832E5510")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public ScrollEvent onValueChanged
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x1C54FF0", Offset = "0x1C535F0", VA = "0x181C54FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x1C61340", Offset = "0x1C5F940", VA = "0x181C61340")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	private float stepSize
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x32E53B0", Offset = "0x32E39B0", VA = "0x1832E53B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000113")]
	private Axis axis
	{
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x32E5360", Offset = "0x32E3960", VA = "0x1832E5360")]
		get
		{
			return default(Axis);
		}
	}

	[Token(Token = "0x17000114")]
	private bool reverseValue
	{
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x32E5390", Offset = "0x32E3990", VA = "0x1832E5390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x32E5260", Offset = "0x32E3860", VA = "0x1832E5260")]
	protected Scrollbar()
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x32E4800", Offset = "0x32E2E00", VA = "0x1832E4800", Slot = "47")]
	public virtual void SetValueWithoutNotify(float input)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "48")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "49")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "50")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x32E3EB0", Offset = "0x32E24B0", VA = "0x1832E3EB0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x32E3C80", Offset = "0x32E2280", VA = "0x1832E3C80", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x32E5240", Offset = "0x32E3840", VA = "0x1832E5240", Slot = "51")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x32E49E0", Offset = "0x32E2FE0", VA = "0x1832E49E0")]
	private void UpdateCachedReferences()
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x32E48B0", Offset = "0x32E2EB0", VA = "0x1832E48B0")]
	private void Set(float input, bool sendCallback = true)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x32E4600", Offset = "0x32E2C00", VA = "0x1832E4600", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x32E4FD0", Offset = "0x32E35D0", VA = "0x1832E4FD0")]
	private void UpdateVisuals()
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x32E4AE0", Offset = "0x32E30E0", VA = "0x1832E4AE0")]
	private void UpdateDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x32E4C50", Offset = "0x32E3250", VA = "0x1832E4C50")]
	private void UpdateDrag(RectTransform containerRect, Vector2 position, Camera camera)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x32E3710", Offset = "0x32E1D10", VA = "0x1832E3710")]
	private void DoUpdateDrag(Vector2 handleCorner, float remainingSize)
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x32E3910", Offset = "0x32E1F10", VA = "0x1832E3910")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x32E3980", Offset = "0x32E1F80", VA = "0x1832E3980", Slot = "52")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x32E3CB0", Offset = "0x32E22B0", VA = "0x1832E3CB0", Slot = "53")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x32E4480", Offset = "0x32E2A80", VA = "0x1832E4480", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x32E36A0", Offset = "0x32E1CA0", VA = "0x1832E36A0")]
	protected IEnumerator ClickRepeat(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x32E35F0", Offset = "0x32E1BF0", VA = "0x1832E35F0")]
	[IteratorStateMachine(typeof(_003CClickRepeat_003Ed__59))]
	protected IEnumerator ClickRepeat(Vector2 screenPosition, Camera camera)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x32E4580", Offset = "0x32E2B80", VA = "0x1832E4580", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x32E3FA0", Offset = "0x32E25A0", VA = "0x1832E3FA0", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x32E3880", Offset = "0x32E1E80", VA = "0x1832E3880", Slot = "27")]
	public override Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x32E38B0", Offset = "0x32E1EB0", VA = "0x1832E38B0", Slot = "28")]
	public override Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x32E38E0", Offset = "0x32E1EE0", VA = "0x1832E38E0", Slot = "29")]
	public override Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x32E3850", Offset = "0x32E1E50", VA = "0x1832E3850", Slot = "30")]
	public override Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x32E3F80", Offset = "0x32E2580", VA = "0x1832E3F80", Slot = "54")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x32E4640", Offset = "0x32E2C40", VA = "0x1832E4640")]
	public void SetDirection(Direction direction, bool includeRectLayouts)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x2D057F0", Offset = "0x2D03DF0", VA = "0x182D057F0", Slot = "43")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
