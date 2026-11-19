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
	[Address(RVA = "0x65ACE00", Offset = "0x65ABE00", VA = "0x65ACE00", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x65ACF70", Offset = "0x65ABF70", VA = "0x65ACF70", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x65ACFD0", Offset = "0x65ABFD0", VA = "0x65ACFD0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x65AD030", Offset = "0x65AC030", VA = "0x65AD030", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x65AD140", Offset = "0x65AC140", VA = "0x65AD140", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x65AD0B0", Offset = "0x65AC0B0", VA = "0x65AD0B0")]
	private void ChangeValue(bool fast, int multiplier)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x65ACEA0", Offset = "0x65ABEA0", VA = "0x65ACEA0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x65AD150", Offset = "0x65AC150", VA = "0x65AD150")]
	public DebugUIHandlerUIntField()
	{
	}
}
