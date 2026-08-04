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

[Token(Token = "0x2000238")]
public class DebugUIHandlerVector4 : DebugUIHandlerWidget
{
	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x70")]
	public DebugUIHandlerIndirectFloatField fieldX;

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldY;

	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x80")]
	public DebugUIHandlerIndirectFloatField fieldZ;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x88")]
	public DebugUIHandlerIndirectFloatField fieldW;

	[Token(Token = "0x40008E2")]
	[FieldOffset(Offset = "0x90")]
	private DebugUI.Vector4Field m_Field;

	[Token(Token = "0x40008E3")]
	[FieldOffset(Offset = "0x98")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x4C19C50", Offset = "0x4C19C50", VA = "0x4C19C50", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x4C1A210", Offset = "0x4C1A210", VA = "0x4C1A210")]
	private void SetValue(float v, bool x = false, bool y = false, bool z = false, bool w = false)
	{
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x4C1A0D0", Offset = "0x4C1A0D0", VA = "0x4C1A0D0")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x4C1A2E0", Offset = "0x4C1A2E0", VA = "0x4C1A2E0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x4C1A3C0", Offset = "0x4C1A3C0", VA = "0x4C1A3C0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x4C1A3F0", Offset = "0x4C1A3F0", VA = "0x4C1A3F0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x4C1A410", Offset = "0x4C1A410", VA = "0x4C1A410", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x4C1A430", Offset = "0x4C1A430", VA = "0x4C1A430", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x4C1A460", Offset = "0x4C1A460", VA = "0x4C1A460", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x4C1A520", Offset = "0x4C1A520", VA = "0x4C1A520")]
	public DebugUIHandlerVector4()
	{
	}
}
