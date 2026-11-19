// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerBitField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002D0")]
public class DebugUIHandlerBitField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D21")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D22")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000D23")]
	[FieldOffset(Offset = "0x70")]
	public List<DebugUIHandlerIndirectToggle> toggles;

	[Token(Token = "0x4000D24")]
	[FieldOffset(Offset = "0x78")]
	private DebugUI.BitField m_Field;

	[Token(Token = "0x4000D25")]
	[FieldOffset(Offset = "0x80")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x60013E1")]
	[Address(RVA = "0x65A2E80", Offset = "0x65A1E80", VA = "0x65A2E80", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60013E2")]
	[Address(RVA = "0x65A3300", Offset = "0x65A2300", VA = "0x65A3300")]
	private bool GetValue(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60013E3")]
	[Address(RVA = "0x65A33A0", Offset = "0x65A23A0", VA = "0x65A33A0")]
	private void SetValue(int index, bool value)
	{
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x65A3720", Offset = "0x65A2720", VA = "0x65A3720", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60013E5")]
	[Address(RVA = "0x65A3980", Offset = "0x65A2980", VA = "0x65A3980", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60013E6")]
	[Address(RVA = "0x65A39B0", Offset = "0x65A29B0", VA = "0x65A39B0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x65A39D0", Offset = "0x65A29D0", VA = "0x65A39D0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x65A39F0", Offset = "0x65A29F0", VA = "0x65A39F0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x60013E9")]
	[Address(RVA = "0x65A3A20", Offset = "0x65A2A20", VA = "0x65A3A20", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x60013EA")]
	[Address(RVA = "0x65A3C60", Offset = "0x65A2C60", VA = "0x65A3C60")]
	public DebugUIHandlerBitField()
	{
	}
}
