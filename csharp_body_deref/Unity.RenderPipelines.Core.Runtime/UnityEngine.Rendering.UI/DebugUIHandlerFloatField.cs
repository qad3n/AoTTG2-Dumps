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

[Token(Token = "0x200021E")]
public class DebugUIHandlerFloatField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000879")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x400087A")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x400087B")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.FloatField m_Field;

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x4C133C0", Offset = "0x4C133C0", VA = "0x4C133C0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x4C13510", Offset = "0x4C13510", VA = "0x4C13510", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x4C13570", Offset = "0x4C13570", VA = "0x4C13570", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x4C135D0", Offset = "0x4C135D0", VA = "0x4C135D0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x4C13700", Offset = "0x4C13700", VA = "0x4C13700", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x4C13660", Offset = "0x4C13660", VA = "0x4C13660")]
	private void ChangeValue(bool fast, float multiplier)
	{
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x4C13450", Offset = "0x4C13450", VA = "0x4C13450")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x4C13790", Offset = "0x4C13790", VA = "0x4C13790")]
	public DebugUIHandlerFloatField()
	{
	}
}
