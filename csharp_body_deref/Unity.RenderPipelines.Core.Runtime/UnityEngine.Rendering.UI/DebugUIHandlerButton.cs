using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000212")]
public class DebugUIHandlerButton : DebugUIHandlerWidget
{
	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x68")]
	private DebugUI.Button m_Field;

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x48E9DB0", Offset = "0x48E9DB0", VA = "0x48E9DB0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x48E9E40", Offset = "0x48E9E40", VA = "0x48E9E40", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x48E9E70", Offset = "0x48E9E70", VA = "0x48E9E70", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x48E9EA0", Offset = "0x48E9EA0", VA = "0x48E9EA0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x48E9ED0", Offset = "0x48E9ED0", VA = "0x48E9ED0")]
	public DebugUIHandlerButton()
	{
	}
}
