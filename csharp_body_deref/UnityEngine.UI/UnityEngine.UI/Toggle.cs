using System;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;

namespace UnityEngine.UI;

[Token(Token = "0x2000075")]
[AddComponentMenu("UI/Toggle", 30)]
[RequireComponent(typeof(RectTransform))]
public class Toggle : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler, ICanvasElement
{
	[Token(Token = "0x2000076")]
	public enum ToggleTransition
	{
		[Token(Token = "0x4000254")]
		None,
		[Token(Token = "0x4000255")]
		Fade
	}

	[Serializable]
	[Token(Token = "0x2000077")]
	public class ToggleEvent : UnityEvent<bool>
	{
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x4DC3BE0", Offset = "0x4DC3BE0", VA = "0x4DC3BE0")]
		public ToggleEvent()
		{
		}
	}

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x100")]
	public ToggleTransition toggleTransition;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x108")]
	public Graphic graphic;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private ToggleGroup m_Group;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x118")]
	public ToggleEvent onValueChanged;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x120")]
	[Tooltip("Is the toggle currently on or off?")]
	[SerializeField]
	private bool m_IsOn;

	[Token(Token = "0x1700014E")]
	public ToggleGroup group
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x4DC37F0", Offset = "0x4DC37F0", VA = "0x4DC37F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x4DC3800", Offset = "0x4DC3800", VA = "0x4DC3800")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public bool isOn
	{
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x4DC4950", Offset = "0x4DC4950", VA = "0x4DC4950")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x4DC4960", Offset = "0x4DC4960", VA = "0x4DC4960")]
		set
		{
		}
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x4DC3B20", Offset = "0x4DC3B20", VA = "0x4DC3B20")]
	protected Toggle()
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x4DC3C20", Offset = "0x4DC3C20", VA = "0x4DC3C20", Slot = "46")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x4DC3C30", Offset = "0x4DC3C30", VA = "0x4DC3C30", Slot = "47")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x4DC3C40", Offset = "0x4DC3C40", VA = "0x4DC3C40", Slot = "48")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4DC3C50", Offset = "0x4DC3C50", VA = "0x4DC3C50", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x4DC41B0", Offset = "0x4DC41B0", VA = "0x4DC41B0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x4DC4270", Offset = "0x4DC4270", VA = "0x4DC4270", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x4DC4290", Offset = "0x4DC4290", VA = "0x4DC4290", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x4DC38B0", Offset = "0x4DC38B0", VA = "0x4DC38B0")]
	private void SetToggleGroup(ToggleGroup newGroup, bool setMemberValue)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x4DC4970", Offset = "0x4DC4970", VA = "0x4DC4970")]
	public void SetIsOnWithoutNotify(bool value)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x4DC4420", Offset = "0x4DC4420", VA = "0x4DC4420")]
	private void Set(bool value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x4DC3A70", Offset = "0x4DC3A70", VA = "0x4DC3A70")]
	private void PlayEffect(bool instant)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x4DC4AE0", Offset = "0x4DC4AE0", VA = "0x4DC4AE0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x4DC4B90", Offset = "0x4DC4B90", VA = "0x4DC4B90")]
	private void InternalToggle()
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x4DC4BE0", Offset = "0x4DC4BE0", VA = "0x4DC4BE0", Slot = "49")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x4DC4C40", Offset = "0x4DC4C40", VA = "0x4DC4C40", Slot = "50")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x4DC4C90", Offset = "0x4DC4C90", VA = "0x4DC4C90", Slot = "42")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
