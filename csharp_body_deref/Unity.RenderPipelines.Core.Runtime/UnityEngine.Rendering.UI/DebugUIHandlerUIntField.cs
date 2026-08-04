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

[Token(Token = "0x2000232")]
public class DebugUIHandlerUIntField : DebugUIHandlerWidget
{
	[Token(Token = "0x40008BF")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008C0")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x40008C1")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.UIntField m_Field;

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x4C177C0", Offset = "0x4C177C0", VA = "0x4C177C0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x4C17920", Offset = "0x4C17920", VA = "0x4C17920", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x4C17980", Offset = "0x4C17980", VA = "0x4C17980", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F1C")]
	[Address(RVA = "0x4C179E0", Offset = "0x4C179E0", VA = "0x4C179E0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F1D")]
	[Address(RVA = "0x4C17AF0", Offset = "0x4C17AF0", VA = "0x4C17AF0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F1E")]
	[Address(RVA = "0x4C17A60", Offset = "0x4C17A60", VA = "0x4C17A60")]
	private void ChangeValue(bool fast, int multiplier)
	{
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x4C17850", Offset = "0x4C17850", VA = "0x4C17850")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x4C17B00", Offset = "0x4C17B00", VA = "0x4C17B00")]
	public DebugUIHandlerUIntField()
	{
	}
}
