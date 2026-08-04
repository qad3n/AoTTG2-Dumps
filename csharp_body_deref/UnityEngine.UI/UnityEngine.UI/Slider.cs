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

[Token(Token = "0x200006D")]
[AddComponentMenu("UI/Slider", 34)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class Slider : Selectable, IDragHandler, IEventSystemHandler, IInitializePotentialDragHandler, ICanvasElement
{
	[Token(Token = "0x200006E")]
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
	[Token(Token = "0x200006F")]
	public class SliderEvent : UnityEvent<float>
	{
		[Token(Token = "0x6000490")]
		[Address(RVA = "0x50E67D0", Offset = "0x50E67D0", VA = "0x50E67D0")]
		public SliderEvent()
		{
		}
	}

	[Token(Token = "0x2000070")]
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

	[Token(Token = "0x17000126")]
	public RectTransform fillRect
	{
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x50E56E0", Offset = "0x50E56E0", VA = "0x50E56E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x50E56F0", Offset = "0x50E56F0", VA = "0x50E56F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public RectTransform handleRect
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x50E6170", Offset = "0x50E6170", VA = "0x50E6170")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x50E6180", Offset = "0x50E6180", VA = "0x50E6180")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public Direction direction
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x50E61F0", Offset = "0x50E61F0", VA = "0x50E61F0")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x50E6200", Offset = "0x50E6200", VA = "0x50E6200")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public float minValue
	{
		[Token(Token = "0x6000467")]
		[Address(RVA = "0x50E6260", Offset = "0x50E6260", VA = "0x50E6260")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x50E6270", Offset = "0x50E6270", VA = "0x50E6270")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public float maxValue
	{
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x50E62F0", Offset = "0x50E62F0", VA = "0x50E62F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x50E6300", Offset = "0x50E6300", VA = "0x50E6300")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public bool wholeNumbers
	{
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x50E6380", Offset = "0x50E6380", VA = "0x50E6380")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x50E6390", Offset = "0x50E6390", VA = "0x50E6390")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public virtual float value
	{
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x50E6410", Offset = "0x50E6410", VA = "0x50E6410", Slot = "46")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x50E64F0", Offset = "0x50E64F0", VA = "0x50E64F0", Slot = "47")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	public float normalizedValue
	{
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x50E6530", Offset = "0x50E6530", VA = "0x50E6530")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x50E6630", Offset = "0x50E6630", VA = "0x50E6630")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public SliderEvent onValueChanged
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x50E6680", Offset = "0x50E6680", VA = "0x50E6680")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x50E6690", Offset = "0x50E6690", VA = "0x50E6690")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	private float stepSize
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x50E66B0", Offset = "0x50E66B0", VA = "0x50E66B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000130")]
	private Axis axis
	{
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x50E6F00", Offset = "0x50E6F00", VA = "0x50E6F00")]
		get
		{
			return default(Axis);
		}
	}

	[Token(Token = "0x17000131")]
	private bool reverseValue
	{
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x50E6EF0", Offset = "0x50E6EF0", VA = "0x50E6EF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x50E6510", Offset = "0x50E6510", VA = "0x50E6510", Slot = "48")]
	public virtual void SetValueWithoutNotify(float input)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x50E66E0", Offset = "0x50E66E0", VA = "0x50E66E0")]
	protected Slider()
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x50E6810", Offset = "0x50E6810", VA = "0x50E6810", Slot = "49")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x50E6820", Offset = "0x50E6820", VA = "0x50E6820", Slot = "50")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x50E6830", Offset = "0x50E6830", VA = "0x50E6830", Slot = "51")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x50E6840", Offset = "0x50E6840", VA = "0x50E6840", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x50E6880", Offset = "0x50E6880", VA = "0x50E6880", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x50E68A0", Offset = "0x50E68A0", VA = "0x50E68A0", Slot = "52")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x50E68E0", Offset = "0x50E68E0", VA = "0x50E68E0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x50E5760", Offset = "0x50E5760", VA = "0x50E5760")]
	private void UpdateCachedReferences()
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x50E6E00", Offset = "0x50E6E00", VA = "0x50E6E00")]
	private float ClampValue(float input)
	{
		return default(float);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x50E6F10", Offset = "0x50E6F10", VA = "0x50E6F10", Slot = "53")]
	protected virtual void Set(float input, bool sendCallback = true)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x50E70D0", Offset = "0x50E70D0", VA = "0x50E70D0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x50E5B20", Offset = "0x50E5B20", VA = "0x50E5B20")]
	private void UpdateVisuals()
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x50E7100", Offset = "0x50E7100", VA = "0x50E7100")]
	private void UpdateDrag(PointerEventData eventData, Camera cam)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x50E7370", Offset = "0x50E7370", VA = "0x50E7370")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x50E73D0", Offset = "0x50E73D0", VA = "0x50E73D0", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x50E75B0", Offset = "0x50E75B0", VA = "0x50E75B0", Slot = "54")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x50E7620", Offset = "0x50E7620", VA = "0x50E7620", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x50E78A0", Offset = "0x50E78A0", VA = "0x50E78A0", Slot = "27")]
	public override Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x50E78C0", Offset = "0x50E78C0", VA = "0x50E78C0", Slot = "28")]
	public override Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x50E78E0", Offset = "0x50E78E0", VA = "0x50E78E0", Slot = "29")]
	public override Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x50E7900", Offset = "0x50E7900", VA = "0x50E7900", Slot = "30")]
	public override Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x50E7920", Offset = "0x50E7920", VA = "0x50E7920", Slot = "55")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x50E7940", Offset = "0x50E7940", VA = "0x50E7940")]
	public void SetDirection(Direction direction, bool includeRectLayouts)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x50E7AD0", Offset = "0x50E7AD0", VA = "0x50E7AD0", Slot = "42")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
