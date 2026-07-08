using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000232")]
public class DebugUIHandlerUIntField : DebugUIHandlerWidget
{
	[Token(Token = "0x40008BF")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008C0")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x40008C1")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.UIntField m_Field;

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x48F2750", Offset = "0x48F2750", VA = "0x48F2750", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x48F28B0", Offset = "0x48F28B0", VA = "0x48F28B0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x48F2910", Offset = "0x48F2910", VA = "0x48F2910", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F1C")]
	[Address(RVA = "0x48F2970", Offset = "0x48F2970", VA = "0x48F2970", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F1D")]
	[Address(RVA = "0x48F2A80", Offset = "0x48F2A80", VA = "0x48F2A80", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F1E")]
	[Address(RVA = "0x48F29F0", Offset = "0x48F29F0", VA = "0x48F29F0")]
	private void ChangeValue(bool fast, int multiplier)
	{
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x48F27E0", Offset = "0x48F27E0", VA = "0x48F27E0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x48F2A90", Offset = "0x48F2A90", VA = "0x48F2A90")]
	public DebugUIHandlerUIntField()
	{
	}
}
