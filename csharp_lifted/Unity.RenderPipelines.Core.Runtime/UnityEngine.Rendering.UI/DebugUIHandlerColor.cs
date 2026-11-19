// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerColor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002D6")]
public class DebugUIHandlerColor : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D36")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D37")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000D38")]
	[FieldOffset(Offset = "0x70")]
	public Image colorImage;

	[Token(Token = "0x4000D39")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldR;

	[Token(Token = "0x4000D3A")]
	[FieldOffset(Offset = "0x80")]
	public DebugUIHandlerIndirectFloatField fieldG;

	[Token(Token = "0x4000D3B")]
	[FieldOffset(Offset = "0x88")]
	public DebugUIHandlerIndirectFloatField fieldB;

	[Token(Token = "0x4000D3C")]
	[FieldOffset(Offset = "0x90")]
	public DebugUIHandlerIndirectFloatField fieldA;

	[Token(Token = "0x4000D3D")]
	[FieldOffset(Offset = "0x98")]
	private DebugUI.ColorField m_Field;

	[Token(Token = "0x4000D3E")]
	[FieldOffset(Offset = "0xA0")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x65A6580", Offset = "0x65A5580", VA = "0x65A6580", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x65A6C70", Offset = "0x65A5C70", VA = "0x65A6C70")]
	private void SetValue(float x, bool r = false, bool g = false, bool b = false, bool a = false)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x65A6A80", Offset = "0x65A5A80", VA = "0x65A6A80")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x65A6D60", Offset = "0x65A5D60", VA = "0x65A6D60", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x65A6E40", Offset = "0x65A5E40", VA = "0x65A6E40", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x65A6E70", Offset = "0x65A5E70", VA = "0x65A6E70", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x65A6E90", Offset = "0x65A5E90", VA = "0x65A6E90", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x65A6EB0", Offset = "0x65A5EB0", VA = "0x65A6EB0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x65A6BC0", Offset = "0x65A5BC0", VA = "0x65A6BC0")]
	internal void UpdateColor()
	{
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x65A6EE0", Offset = "0x65A5EE0", VA = "0x65A6EE0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x65A6FA0", Offset = "0x65A5FA0", VA = "0x65A6FA0")]
	public DebugUIHandlerColor()
	{
	}
}
