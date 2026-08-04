// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerButton
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000212")]
public class DebugUIHandlerButton : DebugUIHandlerWidget
{
	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x68")]
	private DebugUI.Button m_Field;

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x4C0EE20", Offset = "0x4C0EE20", VA = "0x4C0EE20", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x4C0EEB0", Offset = "0x4C0EEB0", VA = "0x4C0EEB0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x4C0EEE0", Offset = "0x4C0EEE0", VA = "0x4C0EEE0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x4C0EF10", Offset = "0x4C0EF10", VA = "0x4C0EF10", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x4C0EF40", Offset = "0x4C0EF40", VA = "0x4C0EF40")]
	public DebugUIHandlerButton()
	{
	}
}
