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

[Token(Token = "0x2000217")]
public class DebugUIHandlerColor : DebugUIHandlerWidget
{
	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000865")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000866")]
	[FieldOffset(Offset = "0x70")]
	public Image colorImage;

	[Token(Token = "0x4000867")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldR;

	[Token(Token = "0x4000868")]
	[FieldOffset(Offset = "0x80")]
	public DebugUIHandlerIndirectFloatField fieldG;

	[Token(Token = "0x4000869")]
	[FieldOffset(Offset = "0x88")]
	public DebugUIHandlerIndirectFloatField fieldB;

	[Token(Token = "0x400086A")]
	[FieldOffset(Offset = "0x90")]
	public DebugUIHandlerIndirectFloatField fieldA;

	[Token(Token = "0x400086B")]
	[FieldOffset(Offset = "0x98")]
	private DebugUI.ColorField m_Field;

	[Token(Token = "0x400086C")]
	[FieldOffset(Offset = "0xA0")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x4C11510", Offset = "0x4C11510", VA = "0x4C11510", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x4C11C00", Offset = "0x4C11C00", VA = "0x4C11C00")]
	private void SetValue(float x, bool r = false, bool g = false, bool b = false, bool a = false)
	{
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x4C11A10", Offset = "0x4C11A10", VA = "0x4C11A10")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x4C11CF0", Offset = "0x4C11CF0", VA = "0x4C11CF0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x4C11DD0", Offset = "0x4C11DD0", VA = "0x4C11DD0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x4C11E00", Offset = "0x4C11E00", VA = "0x4C11E00", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x4C11E20", Offset = "0x4C11E20", VA = "0x4C11E20", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x4C11E40", Offset = "0x4C11E40", VA = "0x4C11E40", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x4C11B50", Offset = "0x4C11B50", VA = "0x4C11B50")]
	internal void UpdateColor()
	{
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x4C11E70", Offset = "0x4C11E70", VA = "0x4C11E70", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x4C11F30", Offset = "0x4C11F30", VA = "0x4C11F30")]
	public DebugUIHandlerColor()
	{
	}
}
