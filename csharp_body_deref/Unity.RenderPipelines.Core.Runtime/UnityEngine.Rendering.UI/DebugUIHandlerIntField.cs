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
	[Address(RVA = "0x2BAE030", Offset = "0x2BAC630", VA = "0x182BAE030", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x2BACCA0", Offset = "0x2BAB2A0", VA = "0x182BACCA0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x2BACC20", Offset = "0x2BAB220", VA = "0x182BACC20", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x2BAE020", Offset = "0x2BAC620", VA = "0x182BAE020", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x2BAE010", Offset = "0x2BAC610", VA = "0x182BAE010", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x2BADF60", Offset = "0x2BAC560", VA = "0x182BADF60")]
	private void ChangeValue(bool fast, int multiplier)
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x2BAE0D0", Offset = "0x2BAC6D0", VA = "0x182BAE0D0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerIntField()
	{
	}
}
