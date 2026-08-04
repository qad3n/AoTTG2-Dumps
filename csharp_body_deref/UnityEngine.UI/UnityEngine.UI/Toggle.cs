// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Toggle
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
		[Address(RVA = "0x50EB530", Offset = "0x50EB530", VA = "0x50EB530")]
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
		[Address(RVA = "0x50EB140", Offset = "0x50EB140", VA = "0x50EB140")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x50EB150", Offset = "0x50EB150", VA = "0x50EB150")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public bool isOn
	{
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x50EC2A0", Offset = "0x50EC2A0", VA = "0x50EC2A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x50EC2B0", Offset = "0x50EC2B0", VA = "0x50EC2B0")]
		set
		{
		}
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x50EB470", Offset = "0x50EB470", VA = "0x50EB470")]
	protected Toggle()
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x50EB570", Offset = "0x50EB570", VA = "0x50EB570", Slot = "46")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x50EB580", Offset = "0x50EB580", VA = "0x50EB580", Slot = "47")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x50EB590", Offset = "0x50EB590", VA = "0x50EB590", Slot = "48")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x50EB5A0", Offset = "0x50EB5A0", VA = "0x50EB5A0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x50EBB00", Offset = "0x50EBB00", VA = "0x50EBB00", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x50EBBC0", Offset = "0x50EBBC0", VA = "0x50EBBC0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x50EBBE0", Offset = "0x50EBBE0", VA = "0x50EBBE0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x50EB200", Offset = "0x50EB200", VA = "0x50EB200")]
	private void SetToggleGroup(ToggleGroup newGroup, bool setMemberValue)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x50EC2C0", Offset = "0x50EC2C0", VA = "0x50EC2C0")]
	public void SetIsOnWithoutNotify(bool value)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x50EBD70", Offset = "0x50EBD70", VA = "0x50EBD70")]
	private void Set(bool value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x50EB3C0", Offset = "0x50EB3C0", VA = "0x50EB3C0")]
	private void PlayEffect(bool instant)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x50EC430", Offset = "0x50EC430", VA = "0x50EC430", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x50EC4E0", Offset = "0x50EC4E0", VA = "0x50EC4E0")]
	private void InternalToggle()
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x50EC530", Offset = "0x50EC530", VA = "0x50EC530", Slot = "49")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x50EC590", Offset = "0x50EC590", VA = "0x50EC590", Slot = "50")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x50EC5E0", Offset = "0x50EC5E0", VA = "0x50EC5E0", Slot = "42")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
