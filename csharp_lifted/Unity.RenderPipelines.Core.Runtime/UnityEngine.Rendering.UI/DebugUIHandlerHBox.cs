// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerHBox
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002E0")]
public class DebugUIHandlerHBox : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D58")]
	[FieldOffset(Offset = "0x60")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x65A9020", Offset = "0x65A8020", VA = "0x65A9020", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x65A9090", Offset = "0x65A8090", VA = "0x65A9090", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x65A9130", Offset = "0x65A8130", VA = "0x65A9130", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x65A91E0", Offset = "0x65A81E0", VA = "0x65A91E0")]
	public DebugUIHandlerHBox()
	{
	}
}
