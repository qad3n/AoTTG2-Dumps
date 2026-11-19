// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerVector4
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002F8")]
public class DebugUIHandlerVector4 : DebugUIHandlerWidget
{
	[Token(Token = "0x4000DB3")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000DB4")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000DB5")]
	[FieldOffset(Offset = "0x70")]
	public DebugUIHandlerIndirectFloatField fieldX;

	[Token(Token = "0x4000DB6")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldY;

	[Token(Token = "0x4000DB7")]
	[FieldOffset(Offset = "0x80")]
	public DebugUIHandlerIndirectFloatField fieldZ;

	[Token(Token = "0x4000DB8")]
	[FieldOffset(Offset = "0x88")]
	public DebugUIHandlerIndirectFloatField fieldW;

	[Token(Token = "0x4000DB9")]
	[FieldOffset(Offset = "0x90")]
	private DebugUI.Vector4Field m_Field;

	[Token(Token = "0x4000DBA")]
	[FieldOffset(Offset = "0x98")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x65AF180", Offset = "0x65AE180", VA = "0x65AF180", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x65AF740", Offset = "0x65AE740", VA = "0x65AF740")]
	private void SetValue(float v, bool x = false, bool y = false, bool z = false, bool w = false)
	{
	}

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x65AF600", Offset = "0x65AE600", VA = "0x65AF600")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x65AF820", Offset = "0x65AE820", VA = "0x65AF820", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x65AF900", Offset = "0x65AE900", VA = "0x65AF900", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001500")]
	[Address(RVA = "0x65AF930", Offset = "0x65AE930", VA = "0x65AF930", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6001501")]
	[Address(RVA = "0x65AF950", Offset = "0x65AE950", VA = "0x65AF950", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001502")]
	[Address(RVA = "0x65AF970", Offset = "0x65AE970", VA = "0x65AF970", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6001503")]
	[Address(RVA = "0x65AF9A0", Offset = "0x65AE9A0", VA = "0x65AF9A0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6001504")]
	[Address(RVA = "0x65AFA60", Offset = "0x65AEA60", VA = "0x65AFA60")]
	public DebugUIHandlerVector4()
	{
	}
}
