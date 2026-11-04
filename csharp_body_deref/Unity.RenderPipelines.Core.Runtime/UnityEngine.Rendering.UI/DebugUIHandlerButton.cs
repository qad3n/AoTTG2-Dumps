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

[Token(Token = "0x20002D1")]
public class DebugUIHandlerButton : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D26")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D27")]
	[FieldOffset(Offset = "0x68")]
	private DebugUI.Button m_Field;

	[Token(Token = "0x60013EB")]
	[Address(RVA = "0x2BA8C30", Offset = "0x2BA7230", VA = "0x182BA8C30", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60013EC")]
	[Address(RVA = "0x2BA8BF0", Offset = "0x2BA71F0", VA = "0x182BA8BF0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60013ED")]
	[Address(RVA = "0x2BA83A0", Offset = "0x2BA69A0", VA = "0x182BA83A0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x2BA8BB0", Offset = "0x2BA71B0", VA = "0x182BA8BB0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerButton()
	{
	}
}
