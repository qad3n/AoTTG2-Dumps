// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerIntField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000224")]
public class DebugUIHandlerIntField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000894")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000895")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000896")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.IntField m_Field;

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x4C14610", Offset = "0x4C14610", VA = "0x4C14610", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x4C14770", Offset = "0x4C14770", VA = "0x4C14770", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x4C147D0", Offset = "0x4C147D0", VA = "0x4C147D0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x4C14830", Offset = "0x4C14830", VA = "0x4C14830", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x4C14940", Offset = "0x4C14940", VA = "0x4C14940", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x4C148B0", Offset = "0x4C148B0", VA = "0x4C148B0")]
	private void ChangeValue(bool fast, int multiplier)
	{
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x4C146A0", Offset = "0x4C146A0", VA = "0x4C146A0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x4C149C0", Offset = "0x4C149C0", VA = "0x4C149C0")]
	public DebugUIHandlerIntField()
	{
	}
}
