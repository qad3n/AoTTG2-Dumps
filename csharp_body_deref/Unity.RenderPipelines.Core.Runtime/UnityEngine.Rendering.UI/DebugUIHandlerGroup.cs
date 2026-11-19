// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002DF")]
public class DebugUIHandlerGroup : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D54")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D55")]
	[FieldOffset(Offset = "0x68")]
	public Transform header;

	[Token(Token = "0x4000D56")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.Container m_Field;

	[Token(Token = "0x4000D57")]
	[FieldOffset(Offset = "0x78")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x65A8DB0", Offset = "0x65A7DB0", VA = "0x65A8DB0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x65A8EB0", Offset = "0x65A7EB0", VA = "0x65A8EB0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x65A8F50", Offset = "0x65A7F50", VA = "0x65A8F50", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x65A9000", Offset = "0x65A8000", VA = "0x65A9000")]
	public DebugUIHandlerGroup()
	{
	}
}
