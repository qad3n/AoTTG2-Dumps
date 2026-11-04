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
	[Address(RVA = "0x2BACD10", Offset = "0x2BAB310", VA = "0x182BACD10", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x2BACCA0", Offset = "0x2BAB2A0", VA = "0x182BACCA0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x2BACC20", Offset = "0x2BAB220", VA = "0x182BACC20", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x2BACC90", Offset = "0x2BAB290", VA = "0x182BACC90", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x2BACC10", Offset = "0x2BAB210", VA = "0x182BACC10", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x2BACB60", Offset = "0x2BAB160", VA = "0x182BACB60")]
	private void ChangeValue(bool fast, float multiplier)
	{
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x2BACDB0", Offset = "0x2BAB3B0", VA = "0x182BACDB0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerFloatField()
	{
	}
}
