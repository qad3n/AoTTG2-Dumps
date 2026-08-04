// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000233")]
public class DebugUIHandlerValue : DebugUIHandlerWidget
{
	[Token(Token = "0x40008C2")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008C3")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x40008C4")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.Value m_Field;

	[Token(Token = "0x40008C5")]
	[FieldOffset(Offset = "0x78")]
	protected internal float m_Timer;

	[Token(Token = "0x40008C6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_ZeroColor;

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x4C17B20", Offset = "0x4C17B20", VA = "0x4C17B20", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x4C17B30", Offset = "0x4C17B30", VA = "0x4C17B30", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x4C17BC0", Offset = "0x4C17BC0", VA = "0x4C17BC0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x4C17C20", Offset = "0x4C17C20", VA = "0x4C17C20", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x4C17C80", Offset = "0x4C17C80", VA = "0x4C17C80")]
	private void Update()
	{
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x4C17E00", Offset = "0x4C17E00", VA = "0x4C17E00")]
	public DebugUIHandlerValue()
	{
	}
}
