// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerHBox
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000221")]
public class DebugUIHandlerHBox : DebugUIHandlerWidget
{
	[Token(Token = "0x4000886")]
	[FieldOffset(Offset = "0x60")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x4C14020", Offset = "0x4C14020", VA = "0x4C14020", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x4C14090", Offset = "0x4C14090", VA = "0x4C14090", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x4C14130", Offset = "0x4C14130", VA = "0x4C14130", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x4C141E0", Offset = "0x4C141E0", VA = "0x4C141E0")]
	public DebugUIHandlerHBox()
	{
	}
}
