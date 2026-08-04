// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RadioButton
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000F7")]
public class RadioButton : BaseBoolField, IGroupBoxOption
{
	[Token(Token = "0x20000F8")]
	public new class UxmlFactory : UxmlFactory<RadioButton, UxmlTraits>
	{
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x4FF2D50", Offset = "0x4FF2D50", VA = "0x4FF2D50")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000F9")]
	public new class UxmlTraits : BaseFieldTraits<bool, UxmlBoolAttributeDescription>
	{
		[Token(Token = "0x40003FE")]
		[FieldOffset(Offset = "0x88")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x4FF2D90", Offset = "0x4FF2D90", VA = "0x4FF2D90", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x4FF2EA0", Offset = "0x4FF2EA0", VA = "0x4FF2EA0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string checkmarkBackgroundUssClassName;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string checkmarkUssClassName;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string textUssClassName;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x470")]
	private VisualElement m_CheckmarkBackground;

	[Token(Token = "0x17000127")]
	public override bool value
	{
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x4FF2460", Offset = "0x4FF2460", VA = "0x4FF2460", Slot = "105")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600069F")]
		[Address(RVA = "0x4FF24A0", Offset = "0x4FF24A0", VA = "0x4FF24A0", Slot = "106")]
		set
		{
		}
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x4FF2650", Offset = "0x4FF2650", VA = "0x4FF2650")]
	public RadioButton()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x4FF2660", Offset = "0x4FF2660", VA = "0x4FF2660")]
	public RadioButton(string label)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x4FF2940", Offset = "0x4FF2940", VA = "0x4FF2940")]
	private void OnOptionAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x4FF29A0", Offset = "0x4FF29A0", VA = "0x4FF29A0")]
	private void OnOptionDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x4FF2A00", Offset = "0x4FF2A00", VA = "0x4FF2A00", Slot = "115")]
	protected override void InitLabel()
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x4FF2A80", Offset = "0x4FF2A80", VA = "0x4FF2A80", Slot = "116")]
	protected override void ToggleValue()
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x4FF2AC0", Offset = "0x4FF2AC0", VA = "0x4FF2AC0", Slot = "117")]
	private void UnityEngine_002EUIElements_002EIGroupBoxOption_002ESetSelected(bool selected)
	{
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x4FF2AE0", Offset = "0x4FF2AE0", VA = "0x4FF2AE0", Slot = "114")]
	public override void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x4FF2560", Offset = "0x4FF2560", VA = "0x4FF2560")]
	private void UpdateCheckmark()
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x4FF2B00", Offset = "0x4FF2B00", VA = "0x4FF2B00", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}
}
