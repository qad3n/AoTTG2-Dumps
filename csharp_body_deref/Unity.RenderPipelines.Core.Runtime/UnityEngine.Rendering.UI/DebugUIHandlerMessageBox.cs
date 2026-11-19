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

[Token(Token = "0x20002E4")]
public class DebugUIHandlerMessageBox : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D69")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D6A")]
	[FieldOffset(Offset = "0x68")]
	private DebugUI.MessageBox m_Field;

	[Token(Token = "0x4000D6B")]
	[FieldOffset(Offset = "0x0")]
	private static Color32 k_WarningBackgroundColor;

	[Token(Token = "0x4000D6C")]
	[FieldOffset(Offset = "0x4")]
	private static Color32 k_WarningTextColor;

	[Token(Token = "0x4000D6D")]
	[FieldOffset(Offset = "0x8")]
	private static Color32 k_ErrorBackgroundColor;

	[Token(Token = "0x4000D6E")]
	[FieldOffset(Offset = "0xC")]
	private static Color32 k_ErrorTextColor;

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x65A9A10", Offset = "0x65A8A10", VA = "0x65A9A10", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x65A9BB0", Offset = "0x65A8BB0", VA = "0x65A9BB0")]
	private void Update()
	{
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x65A9BF0", Offset = "0x65A8BF0", VA = "0x65A9BF0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x65A9C00", Offset = "0x65A8C00", VA = "0x65A9C00")]
	public DebugUIHandlerMessageBox()
	{
	}
}
