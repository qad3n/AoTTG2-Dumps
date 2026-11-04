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
		[Address(RVA = "0x32ED0A0", Offset = "0x32EB6A0", VA = "0x1832ED0A0")]
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
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x32EE700", Offset = "0x32ECD00", VA = "0x1832EE700")]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public bool isOn
	{
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x1C41CE0", Offset = "0x1C402E0", VA = "0x181C41CE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x32EE730", Offset = "0x32ECD30", VA = "0x1832EE730")]
		set
		{
		}
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x32EE640", Offset = "0x32ECC40", VA = "0x1832EE640")]
	protected Toggle()
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "46")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "48")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x32EDED0", Offset = "0x32EC4D0", VA = "0x1832EDED0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x32EE0C0", Offset = "0x32EC6C0", VA = "0x1832EE0C0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x32EE090", Offset = "0x32EC690", VA = "0x1832EE090", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x32EDF60", Offset = "0x32EC560", VA = "0x1832EDF60", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x32EE240", Offset = "0x32EC840", VA = "0x1832EE240")]
	private void SetToggleGroup(ToggleGroup newGroup, bool setMemberValue)
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x32EE230", Offset = "0x32EC830", VA = "0x1832EE230")]
	public void SetIsOnWithoutNotify(bool value)
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x32EE4A0", Offset = "0x32ECAA0", VA = "0x1832EE4A0")]
	private void Set(bool value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x32EE170", Offset = "0x32EC770", VA = "0x1832EE170")]
	private void PlayEffect(bool instant)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x32EE630", Offset = "0x32ECC30", VA = "0x1832EE630", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x32EDE70", Offset = "0x32EC470", VA = "0x1832EDE70")]
	private void InternalToggle()
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x32EE100", Offset = "0x32EC700", VA = "0x1832EE100", Slot = "49")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x32EDE70", Offset = "0x32EC470", VA = "0x1832EDE70", Slot = "50")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x2D057F0", Offset = "0x2D03DF0", VA = "0x182D057F0", Slot = "42")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
