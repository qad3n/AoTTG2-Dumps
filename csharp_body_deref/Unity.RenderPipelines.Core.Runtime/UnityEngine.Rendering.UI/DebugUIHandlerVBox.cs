// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerVBox
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000235")]
public class DebugUIHandlerVBox : DebugUIHandlerWidget
{
	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0x60")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x4C185F0", Offset = "0x4C185F0", VA = "0x4C185F0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x4C18660", Offset = "0x4C18660", VA = "0x4C18660", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x4C18700", Offset = "0x4C18700", VA = "0x4C18700", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x4C188C0", Offset = "0x4C188C0", VA = "0x4C188C0")]
	public DebugUIHandlerVBox()
	{
	}
}
