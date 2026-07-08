using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000221")]
public class DebugUIHandlerHBox : DebugUIHandlerWidget
{
	[Token(Token = "0x4000886")]
	[FieldOffset(Offset = "0x60")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x48EEFB0", Offset = "0x48EEFB0", VA = "0x48EEFB0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x48EF020", Offset = "0x48EF020", VA = "0x48EF020", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x48EF0C0", Offset = "0x48EF0C0", VA = "0x48EF0C0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x48EF170", Offset = "0x48EF170", VA = "0x48EF170")]
	public DebugUIHandlerHBox()
	{
	}
}
