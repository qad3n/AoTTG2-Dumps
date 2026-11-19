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
		[Address(RVA = "0x6CF64C0", Offset = "0x6CF54C0", VA = "0x6CF64C0")]
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
		[Address(RVA = "0x6CF5270", Offset = "0x6CF4270", VA = "0x6CF5270")]
		get
		{
			return null;
		}
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x6CF5280", Offset = "0x6CF4280", VA = "0x6CF5280")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public RectTransform handleRect
	{
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x6CF5E50", Offset = "0x6CF4E50", VA = "0x6CF5E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x6CF5E60", Offset = "0x6CF4E60", VA = "0x6CF5E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public Direction direction
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x6CF5ED0", Offset = "0x6CF4ED0", VA = "0x6CF5ED0")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x6CF5EE0", Offset = "0x6CF4EE0", VA = "0x6CF5EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public float minValue
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x6CF5F40", Offset = "0x6CF4F40", VA = "0x6CF5F40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x6CF5F50", Offset = "0x6CF4F50", VA = "0x6CF5F50")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public float maxValue
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x6CF5FD0", Offset = "0x6CF4FD0", VA = "0x6CF5FD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x6CF5FE0", Offset = "0x6CF4FE0", VA = "0x6CF5FE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public bool wholeNumbers
	{
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x6CF6060", Offset = "0x6CF5060", VA = "0x6CF6060")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x6CF6070", Offset = "0x6CF5070", VA = "0x6CF6070")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	public virtual float value
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x6CF60F0", Offset = "0x6CF50F0", VA = "0x6CF60F0", Slot = "46")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x6CF61D0", Offset = "0x6CF51D0", VA = "0x6CF61D0", Slot = "47")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public float normalizedValue
	{
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x6CF6210", Offset = "0x6CF5210", VA = "0x6CF6210")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x6CF6310", Offset = "0x6CF5310", VA = "0x6CF6310")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public SliderEvent onValueChanged
	{
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x6CF6360", Offset = "0x6CF5360", VA = "0x6CF6360")]
		get
		{
			return null;
		}
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x6CF6370", Offset = "0x6CF5370", VA = "0x6CF6370")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	private float stepSize
	{
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x6CF6390", Offset = "0x6CF5390", VA = "0x6CF6390")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000131")]
	private Axis axis
	{
		[Token(Token = "0x600048D")]
		[Address(RVA = "0x6CF6BF0", Offset = "0x6CF5BF0", VA = "0x6CF6BF0")]
		get
		{
			return default(Axis);
		}
	}

	[Token(Token = "0x17000132")]
	private bool reverseValue
	{
		[Token(Token = "0x600048E")]
		[Address(RVA = "0x6CF6BE0", Offset = "0x6CF5BE0", VA = "0x6CF6BE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x6CF61F0", Offset = "0x6CF51F0", VA = "0x6CF61F0", Slot = "48")]
	public virtual void SetValueWithoutNotify(float input)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x6CF63C0", Offset = "0x6CF53C0", VA = "0x6CF63C0")]
	protected Slider()
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x6CF6500", Offset = "0x6CF5500", VA = "0x6CF6500", Slot = "49")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x6CF6510", Offset = "0x6CF5510", VA = "0x6CF6510", Slot = "50")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x6CF6520", Offset = "0x6CF5520", VA = "0x6CF6520", Slot = "51")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x6CF6530", Offset = "0x6CF5530", VA = "0x6CF6530", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x6CF6570", Offset = "0x6CF5570", VA = "0x6CF6570", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x6CF6590", Offset = "0x6CF5590", VA = "0x6CF6590", Slot = "52")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x6CF65D0", Offset = "0x6CF55D0", VA = "0x6CF65D0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x6CF52F0", Offset = "0x6CF42F0", VA = "0x6CF52F0")]
	private void UpdateCachedReferences()
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x6CF6AF0", Offset = "0x6CF5AF0", VA = "0x6CF6AF0")]
	private float ClampValue(float input)
	{
		return default(float);
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x6CF6C00", Offset = "0x6CF5C00", VA = "0x6CF6C00", Slot = "53")]
	protected virtual void Set(float input, bool sendCallback = true)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x6CF6DC0", Offset = "0x6CF5DC0", VA = "0x6CF6DC0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x6CF5690", Offset = "0x6CF4690", VA = "0x6CF5690")]
	private void UpdateVisuals()
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x6CF6DF0", Offset = "0x6CF5DF0", VA = "0x6CF6DF0")]
	private void UpdateDrag(PointerEventData eventData, Camera cam)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x6CF70D0", Offset = "0x6CF60D0", VA = "0x6CF70D0")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x6CF7130", Offset = "0x6CF6130", VA = "0x6CF7130", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x6CF7320", Offset = "0x6CF6320", VA = "0x6CF7320", Slot = "54")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x6CF7390", Offset = "0x6CF6390", VA = "0x6CF7390", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x6CF7740", Offset = "0x6CF6740", VA = "0x6CF7740", Slot = "27")]
	public override Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x6CF7800", Offset = "0x6CF6800", VA = "0x6CF7800", Slot = "28")]
	public override Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x6CF78C0", Offset = "0x6CF68C0", VA = "0x6CF78C0", Slot = "29")]
	public override Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x6CF7980", Offset = "0x6CF6980", VA = "0x6CF7980", Slot = "30")]
	public override Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x6CF7A40", Offset = "0x6CF6A40", VA = "0x6CF7A40", Slot = "55")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x6CF7A60", Offset = "0x6CF6A60", VA = "0x6CF7A60")]
	public void SetDirection(Direction direction, bool includeRectLayouts)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x6CF7BF0", Offset = "0x6CF6BF0", VA = "0x6CF7BF0", Slot = "42")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
