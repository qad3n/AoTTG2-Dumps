// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerMessageBox
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x2BAE1B0", Offset = "0x2BAC7B0", VA = "0x182BAE1B0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x2BAE370", Offset = "0x2BAC970", VA = "0x182BAE370")]
	private void Update()
	{
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerMessageBox()
	{
	}
}
