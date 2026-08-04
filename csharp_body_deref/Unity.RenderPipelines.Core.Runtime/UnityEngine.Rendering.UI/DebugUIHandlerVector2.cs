// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerVector2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000236")]
public class DebugUIHandlerVector2 : DebugUIHandlerWidget
{
	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x40008D1")]
	[FieldOffset(Offset = "0x70")]
	public DebugUIHandlerIndirectFloatField fieldX;

	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldY;

	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x80")]
	private DebugUI.Vector2Field m_Field;

	[Token(Token = "0x40008D4")]
	[FieldOffset(Offset = "0x88")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x4C188E0", Offset = "0x4C188E0", VA = "0x4C188E0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x4C18CA0", Offset = "0x4C18CA0", VA = "0x4C18CA0")]
	private void SetValue(float v, bool x = false, bool y = false)
	{
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x4C18B60", Offset = "0x4C18B60", VA = "0x4C18B60")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x4C18D40", Offset = "0x4C18D40", VA = "0x4C18D40", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F38")]
	[Address(RVA = "0x4C18E20", Offset = "0x4C18E20", VA = "0x4C18E20", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x4C18E50", Offset = "0x4C18E50", VA = "0x4C18E50", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x4C18E70", Offset = "0x4C18E70", VA = "0x4C18E70", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x4C18E90", Offset = "0x4C18E90", VA = "0x4C18E90", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000F3C")]
	[Address(RVA = "0x4C18EC0", Offset = "0x4C18EC0", VA = "0x4C18EC0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x4C18F80", Offset = "0x4C18F80", VA = "0x4C18F80")]
	public DebugUIHandlerVector2()
	{
	}
}
