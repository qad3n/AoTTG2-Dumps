using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000233")]
public class DebugUIHandlerVBox : DebugUIHandlerWidget
{
	[Token(Token = "0x40008C2")]
	[FieldOffset(Offset = "0x60")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x48F2AB0", Offset = "0x48F2AB0", VA = "0x48F2AB0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x48F2B20", Offset = "0x48F2B20", VA = "0x48F2B20", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x48F2BC0", Offset = "0x48F2BC0", VA = "0x48F2BC0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x48F2D80", Offset = "0x48F2D80", VA = "0x48F2D80")]
	public DebugUIHandlerVBox()
	{
	}
}
