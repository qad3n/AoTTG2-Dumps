// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerFloatField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002DD")]
public class DebugUIHandlerFloatField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D4B")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D4C")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000D4D")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.FloatField m_Field;

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x65A8320", Offset = "0x65A7320", VA = "0x65A8320", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x65A8470", Offset = "0x65A7470", VA = "0x65A8470", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x65A84D0", Offset = "0x65A74D0", VA = "0x65A84D0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x65A8530", Offset = "0x65A7530", VA = "0x65A8530", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x65A8660", Offset = "0x65A7660", VA = "0x65A8660", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x65A85C0", Offset = "0x65A75C0", VA = "0x65A85C0")]
	private void ChangeValue(bool fast, float multiplier)
	{
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x65A83C0", Offset = "0x65A73C0", VA = "0x65A83C0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x65A86F0", Offset = "0x65A76F0", VA = "0x65A86F0")]
	public DebugUIHandlerFloatField()
	{
	}
}
