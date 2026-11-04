// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerUIntField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002F2")]
public class DebugUIHandlerUIntField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D96")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D97")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000D98")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.UIntField m_Field;

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x2BB1B00", Offset = "0x2BB0100", VA = "0x182BB1B00", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x2BACCA0", Offset = "0x2BAB2A0", VA = "0x182BACCA0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x2BACC20", Offset = "0x2BAB220", VA = "0x182BACC20", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x2BB1A60", Offset = "0x2BB0060", VA = "0x182BB1A60", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x2BB19C0", Offset = "0x2BAFFC0", VA = "0x182BB19C0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x2BB1910", Offset = "0x2BAFF10", VA = "0x182BB1910")]
	private void ChangeValue(bool fast, int multiplier)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x2BB1BA0", Offset = "0x2BB01A0", VA = "0x182BB1BA0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerUIntField()
	{
	}
}
