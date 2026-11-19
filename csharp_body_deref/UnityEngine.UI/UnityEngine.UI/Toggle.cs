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

[Token(Token = "0x2000073")]
[AddComponentMenu("UI (Canvas)/Toggle", 30)]
[RequireComponent(typeof(RectTransform))]
[UnityEngine.UGUIHelpURL("Toggle")]
public class Toggle : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler, ICanvasElement
{
	[Token(Token = "0x2000074")]
	public enum ToggleTransition
	{
		[Token(Token = "0x4000254")]
		None,
		[Token(Token = "0x4000255")]
		Fade
	}

	[Serializable]
	[Token(Token = "0x2000075")]
	public class ToggleEvent : UnityEvent<bool>
	{
		[Token(Token = "0x60004F4")]
		[Address(RVA = "0x6CFB4F0", Offset = "0x6CFA4F0", VA = "0x6CFB4F0")]
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

	[Token(Token = "0x1700014F")]
	public ToggleGroup group
	{
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x6CFB100", Offset = "0x6CFA100", VA = "0x6CFB100")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x6CFB110", Offset = "0x6CFA110", VA = "0x6CFB110")]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public bool isOn
	{
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x6CFC190", Offset = "0x6CFB190", VA = "0x6CFC190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x6CFC1A0", Offset = "0x6CFB1A0", VA = "0x6CFC1A0")]
		set
		{
		}
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x6CFB430", Offset = "0x6CFA430", VA = "0x6CFB430")]
	protected Toggle()
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x6CFB530", Offset = "0x6CFA530", VA = "0x6CFB530", Slot = "46")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x6CFB540", Offset = "0x6CFA540", VA = "0x6CFB540", Slot = "47")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x6CFB550", Offset = "0x6CFA550", VA = "0x6CFB550", Slot = "48")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x6CFB560", Offset = "0x6CFA560", VA = "0x6CFB560", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x6CFBA30", Offset = "0x6CFAA30", VA = "0x6CFBA30", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x6CFBAF0", Offset = "0x6CFAAF0", VA = "0x6CFBAF0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x6CFBB10", Offset = "0x6CFAB10", VA = "0x6CFBB10", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x6CFB1C0", Offset = "0x6CFA1C0", VA = "0x6CFB1C0")]
	private void SetToggleGroup(ToggleGroup newGroup, bool setMemberValue)
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x6CFC1B0", Offset = "0x6CFB1B0", VA = "0x6CFC1B0")]
	public void SetIsOnWithoutNotify(bool value)
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x6CFBCA0", Offset = "0x6CFACA0", VA = "0x6CFBCA0")]
	private void Set(bool value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x6CFB380", Offset = "0x6CFA380", VA = "0x6CFB380")]
	private void PlayEffect(bool instant)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x6CFC320", Offset = "0x6CFB320", VA = "0x6CFC320", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x6CFC3D0", Offset = "0x6CFB3D0", VA = "0x6CFC3D0")]
	private void InternalToggle()
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x6CFC420", Offset = "0x6CFB420", VA = "0x6CFC420", Slot = "49")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x6CFC480", Offset = "0x6CFB480", VA = "0x6CFC480", Slot = "50")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x6CFC4D0", Offset = "0x6CFB4D0", VA = "0x6CFC4D0", Slot = "42")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
