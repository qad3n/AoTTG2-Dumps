using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000227")]
public class DebugUIHandlerObjectList : DebugUIHandlerField<DebugUI.ObjectListField>
{
	[Token(Token = "0x400089F")]
	[FieldOffset(Offset = "0x88")]
	private int m_Index;

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x48EFD60", Offset = "0x48EFD60", VA = "0x48EFD60", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x48EFDB0", Offset = "0x48EFDB0", VA = "0x48EFDB0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x48EFDD0", Offset = "0x48EFDD0", VA = "0x48EFDD0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x48EFDF0", Offset = "0x48EFDF0", VA = "0x48EFDF0", Slot = "13")]
	public override void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x48EFF60", Offset = "0x48EFF60", VA = "0x48EFF60")]
	public DebugUIHandlerObjectList()
	{
	}
}
