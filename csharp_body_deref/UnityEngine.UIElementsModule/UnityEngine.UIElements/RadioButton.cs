using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000F7")]
public class RadioButton : BaseBoolField, IGroupBoxOption
{
	[Token(Token = "0x20000F8")]
	public new class UxmlFactory : UxmlFactory<RadioButton, UxmlTraits>
	{
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x4CCB420", Offset = "0x4CCB420", VA = "0x4CCB420")]
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
		[Address(RVA = "0x4CCB460", Offset = "0x4CCB460", VA = "0x4CCB460", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x4CCB570", Offset = "0x4CCB570", VA = "0x4CCB570")]
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
		[Address(RVA = "0x4CCAB30", Offset = "0x4CCAB30", VA = "0x4CCAB30", Slot = "105")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600069F")]
		[Address(RVA = "0x4CCAB70", Offset = "0x4CCAB70", VA = "0x4CCAB70", Slot = "106")]
		set
		{
		}
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x4CCAD20", Offset = "0x4CCAD20", VA = "0x4CCAD20")]
	public RadioButton()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x4CCAD30", Offset = "0x4CCAD30", VA = "0x4CCAD30")]
	public RadioButton(string label)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x4CCB010", Offset = "0x4CCB010", VA = "0x4CCB010")]
	private void OnOptionAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x4CCB070", Offset = "0x4CCB070", VA = "0x4CCB070")]
	private void OnOptionDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x4CCB0D0", Offset = "0x4CCB0D0", VA = "0x4CCB0D0", Slot = "115")]
	protected override void InitLabel()
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x4CCB150", Offset = "0x4CCB150", VA = "0x4CCB150", Slot = "116")]
	protected override void ToggleValue()
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x4CCB190", Offset = "0x4CCB190", VA = "0x4CCB190", Slot = "117")]
	private void UnityEngine_002EUIElements_002EIGroupBoxOption_002ESetSelected(bool selected)
	{
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x4CCB1B0", Offset = "0x4CCB1B0", VA = "0x4CCB1B0", Slot = "114")]
	public override void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x4CCAC30", Offset = "0x4CCAC30", VA = "0x4CCAC30")]
	private void UpdateCheckmark()
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x4CCB1D0", Offset = "0x4CCB1D0", VA = "0x4CCB1D0", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}
}
