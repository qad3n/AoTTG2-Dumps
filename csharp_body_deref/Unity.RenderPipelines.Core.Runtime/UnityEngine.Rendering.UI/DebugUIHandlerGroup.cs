using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000220")]
public class DebugUIHandlerGroup : DebugUIHandlerWidget
{
	[Token(Token = "0x4000882")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000883")]
	[FieldOffset(Offset = "0x68")]
	public Transform header;

	[Token(Token = "0x4000884")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.Container m_Field;

	[Token(Token = "0x4000885")]
	[FieldOffset(Offset = "0x78")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x48EED50", Offset = "0x48EED50", VA = "0x48EED50", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x48EEE50", Offset = "0x48EEE50", VA = "0x48EEE50", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x48EEEF0", Offset = "0x48EEEF0", VA = "0x48EEEF0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x48EEFA0", Offset = "0x48EEFA0", VA = "0x48EEFA0")]
	public DebugUIHandlerGroup()
	{
	}
}
