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

[Token(Token = "0x20002F4")]
public class DebugUIHandlerValue : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D9A")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D9B")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000D9C")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.Value m_Field;

	[Token(Token = "0x4000D9D")]
	[FieldOffset(Offset = "0x78")]
	protected internal float m_Timer;

	[Token(Token = "0x4000D9E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_ZeroColor;

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x65AD350", Offset = "0x65AC350", VA = "0x65AD350", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x65AD360", Offset = "0x65AC360", VA = "0x65AD360", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x65AD3F0", Offset = "0x65AC3F0", VA = "0x65AD3F0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x65AD450", Offset = "0x65AC450", VA = "0x65AD450", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x65AD4B0", Offset = "0x65AC4B0", VA = "0x65AD4B0")]
	private void Update()
	{
	}

	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x65AD620", Offset = "0x65AC620", VA = "0x65AD620")]
	public DebugUIHandlerValue()
	{
	}
}
