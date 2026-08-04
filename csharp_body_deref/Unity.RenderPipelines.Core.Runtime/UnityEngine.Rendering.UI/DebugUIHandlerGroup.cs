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

[Token(Token = "0x2000220")]
public class DebugUIHandlerGroup : DebugUIHandlerWidget
{
	[Token(Token = "0x4000882")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000883")]
	[FieldOffset(Offset = "0x68")]
	public Transform header;

	[Token(Token = "0x4000884")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.Container m_Field;

	[Token(Token = "0x4000885")]
	[FieldOffset(Offset = "0x78")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x4C13DC0", Offset = "0x4C13DC0", VA = "0x4C13DC0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x4C13EC0", Offset = "0x4C13EC0", VA = "0x4C13EC0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x4C13F60", Offset = "0x4C13F60", VA = "0x4C13F60", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x4C14010", Offset = "0x4C14010", VA = "0x4C14010")]
	public DebugUIHandlerGroup()
	{
	}
}
