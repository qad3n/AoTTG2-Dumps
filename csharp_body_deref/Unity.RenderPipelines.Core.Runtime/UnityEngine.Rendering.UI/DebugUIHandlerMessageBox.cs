// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerMessageBox
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000225")]
public class DebugUIHandlerMessageBox : DebugUIHandlerWidget
{
	[Token(Token = "0x4000897")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000898")]
	[FieldOffset(Offset = "0x68")]
	private DebugUI.MessageBox m_Field;

	[Token(Token = "0x4000899")]
	[FieldOffset(Offset = "0x0")]
	private static Color32 k_WarningBackgroundColor;

	[Token(Token = "0x400089A")]
	[FieldOffset(Offset = "0x4")]
	private static Color32 k_WarningTextColor;

	[Token(Token = "0x400089B")]
	[FieldOffset(Offset = "0x8")]
	private static Color32 k_ErrorBackgroundColor;

	[Token(Token = "0x400089C")]
	[FieldOffset(Offset = "0xC")]
	private static Color32 k_ErrorTextColor;

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x4C149D0", Offset = "0x4C149D0", VA = "0x4C149D0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x4C14B70", Offset = "0x4C14B70", VA = "0x4C14B70", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x4C14B80", Offset = "0x4C14B80", VA = "0x4C14B80")]
	public DebugUIHandlerMessageBox()
	{
	}
}
