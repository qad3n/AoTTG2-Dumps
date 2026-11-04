// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerVBox
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002F3")]
public class DebugUIHandlerVBox : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D99")]
	[FieldOffset(Offset = "0x60")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x2BB1E00", Offset = "0x2BB0400", VA = "0x182BB1E00", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x2BB1D40", Offset = "0x2BB0340", VA = "0x182BB1D40", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x2BB1C80", Offset = "0x2BB0280", VA = "0x182BB1C80", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerVBox()
	{
	}
}
