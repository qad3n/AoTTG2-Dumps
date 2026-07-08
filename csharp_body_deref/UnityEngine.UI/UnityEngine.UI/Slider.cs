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
		[Address(RVA = "0x4DBEE80", Offset = "0x4DBEE80", VA = "0x4DBEE80")]
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
		[Address(RVA = "0x4DBDD90", Offset = "0x4DBDD90", VA = "0x4DBDD90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x4DBDDA0", Offset = "0x4DBDDA0", VA = "0x4DBDDA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public RectTransform handleRect
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x4DBE820", Offset = "0x4DBE820", VA = "0x4DBE820")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x4DBE830", Offset = "0x4DBE830", VA = "0x4DBE830")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public Direction direction
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x4DBE8A0", Offset = "0x4DBE8A0", VA = "0x4DBE8A0")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x4DBE8B0", Offset = "0x4DBE8B0", VA = "0x4DBE8B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public float minValue
	{
		[Token(Token = "0x6000467")]
		[Address(RVA = "0x4DBE910", Offset = "0x4DBE910", VA = "0x4DBE910")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x4DBE920", Offset = "0x4DBE920", VA = "0x4DBE920")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public float maxValue
	{
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x4DBE9A0", Offset = "0x4DBE9A0", VA = "0x4DBE9A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x4DBE9B0", Offset = "0x4DBE9B0", VA = "0x4DBE9B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public bool wholeNumbers
	{
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x4DBEA30", Offset = "0x4DBEA30", VA = "0x4DBEA30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x4DBEA40", Offset = "0x4DBEA40", VA = "0x4DBEA40")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public virtual float value
	{
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x4DBEAC0", Offset = "0x4DBEAC0", VA = "0x4DBEAC0", Slot = "46")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x4DBEBA0", Offset = "0x4DBEBA0", VA = "0x4DBEBA0", Slot = "47")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	public float normalizedValue
	{
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x4DBEBE0", Offset = "0x4DBEBE0", VA = "0x4DBEBE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x4DBECE0", Offset = "0x4DBECE0", VA = "0x4DBECE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public SliderEvent onValueChanged
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x4DBED30", Offset = "0x4DBED30", VA = "0x4DBED30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x4DBED40", Offset = "0x4DBED40", VA = "0x4DBED40")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	private float stepSize
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x4DBED60", Offset = "0x4DBED60", VA = "0x4DBED60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000130")]
	private Axis axis
	{
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x4DBF5B0", Offset = "0x4DBF5B0", VA = "0x4DBF5B0")]
		get
		{
			return default(Axis);
		}
	}

	[Token(Token = "0x17000131")]
	private bool reverseValue
	{
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x4DBF5A0", Offset = "0x4DBF5A0", VA = "0x4DBF5A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x4DBEBC0", Offset = "0x4DBEBC0", VA = "0x4DBEBC0", Slot = "48")]
	public virtual void SetValueWithoutNotify(float input)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x4DBED90", Offset = "0x4DBED90", VA = "0x4DBED90")]
	protected Slider()
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x4DBEEC0", Offset = "0x4DBEEC0", VA = "0x4DBEEC0", Slot = "49")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4DBEED0", Offset = "0x4DBEED0", VA = "0x4DBEED0", Slot = "50")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x4DBEEE0", Offset = "0x4DBEEE0", VA = "0x4DBEEE0", Slot = "51")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x4DBEEF0", Offset = "0x4DBEEF0", VA = "0x4DBEEF0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x4DBEF30", Offset = "0x4DBEF30", VA = "0x4DBEF30", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x4DBEF50", Offset = "0x4DBEF50", VA = "0x4DBEF50", Slot = "52")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x4DBEF90", Offset = "0x4DBEF90", VA = "0x4DBEF90", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x4DBDE10", Offset = "0x4DBDE10", VA = "0x4DBDE10")]
	private void UpdateCachedReferences()
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x4DBF4B0", Offset = "0x4DBF4B0", VA = "0x4DBF4B0")]
	private float ClampValue(float input)
	{
		return default(float);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x4DBF5C0", Offset = "0x4DBF5C0", VA = "0x4DBF5C0", Slot = "53")]
	protected virtual void Set(float input, bool sendCallback = true)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x4DBF780", Offset = "0x4DBF780", VA = "0x4DBF780", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x4DBE1D0", Offset = "0x4DBE1D0", VA = "0x4DBE1D0")]
	private void UpdateVisuals()
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4DBF7B0", Offset = "0x4DBF7B0", VA = "0x4DBF7B0")]
	private void UpdateDrag(PointerEventData eventData, Camera cam)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4DBFA20", Offset = "0x4DBFA20", VA = "0x4DBFA20")]
	private bool MayDrag(PointerEventData eventData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4DBFA80", Offset = "0x4DBFA80", VA = "0x4DBFA80", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x4DBFC60", Offset = "0x4DBFC60", VA = "0x4DBFC60", Slot = "54")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4DBFCD0", Offset = "0x4DBFCD0", VA = "0x4DBFCD0", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4DBFF50", Offset = "0x4DBFF50", VA = "0x4DBFF50", Slot = "27")]
	public override Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4DBFF70", Offset = "0x4DBFF70", VA = "0x4DBFF70", Slot = "28")]
	public override Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4DBFF90", Offset = "0x4DBFF90", VA = "0x4DBFF90", Slot = "29")]
	public override Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4DBFFB0", Offset = "0x4DBFFB0", VA = "0x4DBFFB0", Slot = "30")]
	public override Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4DBFFD0", Offset = "0x4DBFFD0", VA = "0x4DBFFD0", Slot = "55")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4DBFFF0", Offset = "0x4DBFFF0", VA = "0x4DBFFF0")]
	public void SetDirection(Direction direction, bool includeRectLayouts)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4DC0180", Offset = "0x4DC0180", VA = "0x4DC0180", Slot = "42")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
