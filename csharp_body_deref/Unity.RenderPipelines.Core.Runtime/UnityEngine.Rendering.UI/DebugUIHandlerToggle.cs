// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerToggle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200022F")]
public class DebugUIHandlerToggle : DebugUIHandlerWidget
{
	[Token(Token = "0x40008B6")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x68")]
	public Toggle valueToggle;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x70")]
	public Image checkmarkImage;

	[Token(Token = "0x40008B9")]
	[FieldOffset(Offset = "0x78")]
	protected internal DebugUI.BoolField m_Field;

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x4C16D10", Offset = "0x4C16D10", VA = "0x4C16D10", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x4C16E30", Offset = "0x4C16E30", VA = "0x4C16E30")]
	private void OnToggleValueChanged(bool value)
	{
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x4C16E60", Offset = "0x4C16E60", VA = "0x4C16E60", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x4C16EC0", Offset = "0x4C16EC0", VA = "0x4C16EC0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x4C16F20", Offset = "0x4C16F20", VA = "0x4C16F20", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x4C16FA0", Offset = "0x4C16FA0", VA = "0x4C16FA0", Slot = "13")]
	protected internal virtual void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x4C17040", Offset = "0x4C17040", VA = "0x4C17040")]
	public DebugUIHandlerToggle()
	{
	}
}
