// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002E5")]
public class DebugUIHandlerObject : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D6F")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D70")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x65A9C90", Offset = "0x65A8C90", VA = "0x65A9C90", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x65A9DB0", Offset = "0x65A8DB0", VA = "0x65A9DB0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x65A9E10", Offset = "0x65A8E10", VA = "0x65A9E10", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x65A9E70", Offset = "0x65A8E70", VA = "0x65A9E70")]
	public DebugUIHandlerObject()
	{
	}
}
