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
		[Address(RVA = "0x3224EE0", Offset = "0x32234E0", VA = "0x183224EE0")]
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
		[Address(RVA = "0x3225860", Offset = "0x3223E60", VA = "0x183225860", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60008DA")]
		[Address(RVA = "0x3226110", Offset = "0x3224710", VA = "0x183226110")]
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
		[Address(RVA = "0x32233B0", Offset = "0x32219B0", VA = "0x1832233B0", Slot = "148")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x32233F0", Offset = "0x32219F0", VA = "0x1832233F0", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x32230B0", Offset = "0x32216B0", VA = "0x1832230B0")]
	public RadioButton()
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x32230C0", Offset = "0x32216C0", VA = "0x1832230C0")]
	public RadioButton(string label)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x3222BA0", Offset = "0x32211A0", VA = "0x183222BA0")]
	private void OnOptionAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x3222C00", Offset = "0x3221200", VA = "0x183222C00")]
	private void OnOptionDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x3222B20", Offset = "0x3221120", VA = "0x183222B20", Slot = "160")]
	protected override void InitLabel()
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x3222C80", Offset = "0x3221280", VA = "0x183222C80", Slot = "161")]
	protected override void ToggleValue()
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x3222CC0", Offset = "0x32212C0", VA = "0x183222CC0", Slot = "162")]
	private void UnityEngine_002EUIElements_002EIGroupBoxOption_002ESetSelected(bool selected)
	{
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x3222C60", Offset = "0x3221260", VA = "0x183222C60", Slot = "159")]
	public override void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x3222CE0", Offset = "0x32212E0", VA = "0x183222CE0")]
	private void UpdateCheckmark()
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x3222DF0", Offset = "0x32213F0", VA = "0x183222DF0", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}
}
