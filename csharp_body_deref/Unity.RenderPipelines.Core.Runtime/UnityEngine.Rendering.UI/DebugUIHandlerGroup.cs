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
	[Address(RVA = "0x2BAD790", Offset = "0x2BABD90", VA = "0x182BAD790", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x2BAD6D0", Offset = "0x2BABCD0", VA = "0x182BAD6D0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x2BAD610", Offset = "0x2BABC10", VA = "0x182BAD610", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerGroup()
	{
	}
}
