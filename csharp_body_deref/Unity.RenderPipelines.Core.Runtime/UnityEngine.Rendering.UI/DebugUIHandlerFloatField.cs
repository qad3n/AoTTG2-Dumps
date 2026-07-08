using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200021E")]
public class DebugUIHandlerFloatField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000879")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x400087A")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x400087B")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.FloatField m_Field;

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x48EE350", Offset = "0x48EE350", VA = "0x48EE350", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x48EE4A0", Offset = "0x48EE4A0", VA = "0x48EE4A0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x48EE500", Offset = "0x48EE500", VA = "0x48EE500", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x48EE560", Offset = "0x48EE560", VA = "0x48EE560", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x48EE690", Offset = "0x48EE690", VA = "0x48EE690", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x48EE5F0", Offset = "0x48EE5F0", VA = "0x48EE5F0")]
	private void ChangeValue(bool fast, float multiplier)
	{
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x48EE3E0", Offset = "0x48EE3E0", VA = "0x48EE3E0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x48EE720", Offset = "0x48EE720", VA = "0x48EE720")]
	public DebugUIHandlerFloatField()
	{
	}
}
