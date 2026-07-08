using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000224")]
public class DebugUIHandlerIntField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000894")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000895")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000896")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.IntField m_Field;

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x48EF5A0", Offset = "0x48EF5A0", VA = "0x48EF5A0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x48EF700", Offset = "0x48EF700", VA = "0x48EF700", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x48EF760", Offset = "0x48EF760", VA = "0x48EF760", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x48EF7C0", Offset = "0x48EF7C0", VA = "0x48EF7C0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x48EF8D0", Offset = "0x48EF8D0", VA = "0x48EF8D0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x48EF840", Offset = "0x48EF840", VA = "0x48EF840")]
	private void ChangeValue(bool fast, int multiplier)
	{
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x48EF630", Offset = "0x48EF630", VA = "0x48EF630")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x48EF950", Offset = "0x48EF950", VA = "0x48EF950")]
	public DebugUIHandlerIntField()
	{
	}
}
