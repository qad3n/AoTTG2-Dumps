// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Slider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;

namespace UnityEngine.UI;

[Token(Token = "0x200006B")]
[AddComponentMenu("UI (Canvas)/Slider", 34)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
[UnityEngine.UGUIHelpURL("Slider")]
public class Slider : Selectable, IDragHandler, IEventSystemHandler, IInitializePotentialDragHandler, ICanvasElement
{
	[Token(Token = "0x200006C")]
	public enum Direction
	{
		[Token(Token = "0x4000231")]
		LeftToRight,
		[Token(Token = "0x4000232")]
		RightToLeft,
		[Token(Token = "0x4000233")]
		BottomToTop,
		[Token(Token = "0x4000234")]
		TopToBottom
	}

	[Serializable]
	[Token(Token = "0x200006D")]
	public class SliderEvent : UnityEvent<float>
	{
		[Token(Token = "0x600049C")]
		[Address(RVA = "0x32E84B0", Offset = "0x32E6AB0", VA = "0x1832E84B0")]
		public SliderEvent()
		{
		}
	}

	[Token(Token = "0x200006E")]
	private enum Axis
	{
		[Token(Token = "0x4000236")]
		Horizontal,
		[Token(Token = "0x4000237")]
		Vertical
	}

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private RectTransform m_FillRect;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private RectTransform m_HandleRect;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x110")]
	[Space]
	[SerializeField]
	private Direction m_Direction;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x114")]
	[SerializeField]
	private float m_MinValue;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private float m_MaxValue;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x11C")]
	[SerializeField]
	private bool m_WholeNumbers;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x120")]
	[SerializeField]
	protected float m_Value;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x128")]
	[Space]
	[SerializeField]
	private SliderEvent m_OnValueChanged;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x130")]
	private Image m_FillImage;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x138")]
	private Transform m_FillTransform;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x140")]
	private RectTransform m_FillContainerRect;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x148")]
	private Transform m_HandleTransform;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x150")]
	private RectTransform m_HandleContainerRect;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x158")]
	private Vector2 m_Offset;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x160")]
	private DrivenRectTransformTracker m_Tracker;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x161")]
	private bool m_DelayedUpdateVisuals;

	[Token(Token = "0x17000127")]
	public RectTransform fillRect
	{
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x32E9FE0", Offset = "0x32E85E0", VA = "0x1832E9FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public RectTransform handleRect
	{
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x32EA050", Offset = "0x32E8650", VA = "0x1832EA050")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public Direction direction
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x1CD3470", Offset = "0x1CD1A70", VA = "0x181CD3470")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x32E9F80", Offset = "0x32E8580", VA = "0x1832E9F80")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public float minValue
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x2D447A0", Offset = "0x2D42DA0", VA = "0x182D447A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x32EA140", Offset = "0x32E8740", VA = "0x1832EA140")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public float maxValue
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x3283360", Offset = "0x3281960", VA = "0x183283360")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x32EA0C0", Offset = "0x32E86C0", VA = "0x1832EA0C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public bool wholeNumbers
	{
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x32E9F70", Offset = "0x32E8570", VA = "0x1832E9F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x32EA230", Offset = "0x32E8830", VA = "0x1832EA230")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	public virtual float value
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x32E9F50", Offset = "0x32E8550", VA = "0x1832E9F50", Slot = "46")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x32EA210", Offset = "0x32E8810", VA = "0x1832EA210", Slot = "47")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public float normalizedValue
	{
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x32E9E50", Offset = "0x32E8450", VA = "0x1832E9E50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x32EA1C0", Offset = "0x32E87C0", VA = "0x1832EA1C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public SliderEvent onValueChanged
	{
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x2CE6A00", Offset = "0x2CE5000", VA = "0x182CE6A00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x3182970", Offset = "0x3180F70", VA = "0x183182970")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	private float stepSize
	{
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x32E9F20", Offset = "0x32E8520", VA = "0x1832E9F20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000131")]
	private Axis axis
	{
		[Token(Token = "0x600048D")]
		[Address(RVA = "0x32E9E30", Offset = "0x32E8430", VA = "0x1832E9E30")]
		get
		{
			return default(Axis);
		}
	}

	[Token(Token = "0x17000132")]
	private bool reverseValue
	{
		[Token(Token = "0x600048E")]
		[Address(RVA = "0x32E9F00", Offset = "0x32E8500", VA = "0x1832E9F00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x32E90C0", Offset = "0x32E76C0", VA = "0x1832E90C0", Slot = "48")]
	public virtual void SetValueWithoutNotify(float input)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x32E9D30", Offset = "0x32E8330", VA = "0x1832E9D30")]
	protected Slider()
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "49")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "50")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "51")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x32E8960", Offset = "0x32E6F60", VA = "0x1832E8960", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x32E88B0", Offset = "0x32E6EB0", VA = "0x1832E88B0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x32E9CE0", Offset = "0x32E82E0", VA = "0x1832E9CE0", Slot = "52")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x32E85E0", Offset = "0x32E6BE0", VA = "0x1832E85E0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x32E91D0", Offset = "0x32E77D0", VA = "0x1832E91D0")]
	private void UpdateCachedReferences()
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x32E84F0", Offset = "0x32E6AF0", VA = "0x1832E84F0")]
	private float ClampValue(float input)
	{
		return default(float);
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x32E90E0", Offset = "0x32E76E0", VA = "0x1832E90E0", Slot = "53")]
	protected virtual void Set(float input, bool sendCallback = true)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x32E8EC0", Offset = "0x32E74C0", VA = "0x1832E8EC0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x32E98E0", Offset = "0x32E7EE0", VA = "0x1832E98E0")]
	private void UpdateVisuals()
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x32E9560", Offset = "0x32E7B60", VA = "0x1832E9560")]
	private void UpdateDrag(PointerEventData eventData, Camera cam)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x32E3910", Offset = "0x32E1F10", VA = "0x1832E3910")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x32E8C70", Offset = "0x32E7270", VA = "0x1832E8C70", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x32E88E0", Offset = "0x32E6EE0", VA = "0x1832E88E0", Slot = "54")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x32E89B0", Offset = "0x32E6FB0", VA = "0x1832E89B0", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x32E8550", Offset = "0x32E6B50", VA = "0x1832E8550", Slot = "27")]
	public override Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x32E8580", Offset = "0x32E6B80", VA = "0x1832E8580", Slot = "28")]
	public override Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x32E85B0", Offset = "0x32E6BB0", VA = "0x1832E85B0", Slot = "29")]
	public override Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x32E8520", Offset = "0x32E6B20", VA = "0x1832E8520", Slot = "30")]
	public override Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x32E3F80", Offset = "0x32E2580", VA = "0x1832E3F80", Slot = "55")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x32E8F00", Offset = "0x32E7500", VA = "0x1832E8F00")]
	public void SetDirection(Direction direction, bool includeRectLayouts)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x2D057F0", Offset = "0x2D03DF0", VA = "0x182D057F0", Slot = "42")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
