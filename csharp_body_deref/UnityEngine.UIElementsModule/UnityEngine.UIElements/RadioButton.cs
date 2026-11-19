// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RadioButton
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000132")]
public class RadioButton : BaseBoolField, IGroupBoxOption
{
	[Token(Token = "0x2000133")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<RadioButton, UxmlTraits>
	{
		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x6C28640", Offset = "0x6C27640", VA = "0x6C28640")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000134")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseFieldTraits<bool, UxmlBoolAttributeDescription>
	{
		[Token(Token = "0x400055D")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x60008D9")]
		[Address(RVA = "0x6C28680", Offset = "0x6C27680", VA = "0x6C28680", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60008DA")]
		[Address(RVA = "0x6C287A0", Offset = "0x6C277A0", VA = "0x6C287A0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string checkmarkBackgroundUssClassName;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string checkmarkUssClassName;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string textUssClassName;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0x380")]
	private VisualElement m_CheckmarkBackground;

	[Token(Token = "0x170001A0")]
	public override bool value
	{
		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x6C27D50", Offset = "0x6C26D50", VA = "0x6C27D50", Slot = "148")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x6C27D90", Offset = "0x6C26D90", VA = "0x6C27D90", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x6C27F40", Offset = "0x6C26F40", VA = "0x6C27F40")]
	public RadioButton()
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x6C27F50", Offset = "0x6C26F50", VA = "0x6C27F50")]
	public RadioButton(string label)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x6C28230", Offset = "0x6C27230", VA = "0x6C28230")]
	private void OnOptionAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x6C28290", Offset = "0x6C27290", VA = "0x6C28290")]
	private void OnOptionDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x6C282F0", Offset = "0x6C272F0", VA = "0x6C282F0", Slot = "160")]
	protected override void InitLabel()
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x6C28370", Offset = "0x6C27370", VA = "0x6C28370", Slot = "161")]
	protected override void ToggleValue()
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x6C283B0", Offset = "0x6C273B0", VA = "0x6C283B0", Slot = "162")]
	private void UnityEngine_002EUIElements_002EIGroupBoxOption_002ESetSelected(bool selected)
	{
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x6C283D0", Offset = "0x6C273D0", VA = "0x6C283D0", Slot = "159")]
	public override void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x6C27E50", Offset = "0x6C26E50", VA = "0x6C27E50")]
	private void UpdateCheckmark()
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x6C283F0", Offset = "0x6C273F0", VA = "0x6C283F0", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}
}
