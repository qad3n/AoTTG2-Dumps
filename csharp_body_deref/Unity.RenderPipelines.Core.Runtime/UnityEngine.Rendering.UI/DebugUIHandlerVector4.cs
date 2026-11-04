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
	[Address(RVA = "0x2BB3F40", Offset = "0x2BB2540", VA = "0x182BB3F40", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x2BB3E40", Offset = "0x2BB2440", VA = "0x182BB3E40")]
	private void SetValue(float v, bool x = false, bool y = false, bool z = false, bool w = false)
	{
	}

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x2BB43B0", Offset = "0x2BB29B0", VA = "0x182BB43B0")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x2BB3D30", Offset = "0x2BB2330", VA = "0x182BB3D30", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x2BA83A0", Offset = "0x2BA69A0", VA = "0x182BA83A0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001500")]
	[Address(RVA = "0x2BA83E0", Offset = "0x2BA69E0", VA = "0x182BA83E0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6001501")]
	[Address(RVA = "0x2BA8370", Offset = "0x2BA6970", VA = "0x182BA8370", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001502")]
	[Address(RVA = "0x2BA8340", Offset = "0x2BA6940", VA = "0x182BA8340", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6001503")]
	[Address(RVA = "0x2BB3C50", Offset = "0x2BB2250", VA = "0x182BB3C50", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6001504")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerVector4()
	{
	}
}
