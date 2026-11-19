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

[Token(Token = "0x20002E3")]
public class DebugUIHandlerIntField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D66")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D67")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000D68")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.IntField m_Field;

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x65A9630", Offset = "0x65A8630", VA = "0x65A9630", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x65A97A0", Offset = "0x65A87A0", VA = "0x65A97A0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x65A9800", Offset = "0x65A8800", VA = "0x65A9800", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x65A9860", Offset = "0x65A8860", VA = "0x65A9860", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x65A9970", Offset = "0x65A8970", VA = "0x65A9970", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x65A98E0", Offset = "0x65A88E0", VA = "0x65A98E0")]
	private void ChangeValue(bool fast, int multiplier)
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x65A96D0", Offset = "0x65A86D0", VA = "0x65A96D0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x65A99F0", Offset = "0x65A89F0", VA = "0x65A99F0")]
	public DebugUIHandlerIntField()
	{
	}
}
