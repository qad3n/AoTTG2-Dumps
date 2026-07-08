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
	[Address(RVA = "0x48EC4A0", Offset = "0x48EC4A0", VA = "0x48EC4A0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x48ECB90", Offset = "0x48ECB90", VA = "0x48ECB90")]
	private void SetValue(float x, bool r = false, bool g = false, bool b = false, bool a = false)
	{
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x48EC9A0", Offset = "0x48EC9A0", VA = "0x48EC9A0")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x48ECC80", Offset = "0x48ECC80", VA = "0x48ECC80", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x48ECD60", Offset = "0x48ECD60", VA = "0x48ECD60", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x48ECD90", Offset = "0x48ECD90", VA = "0x48ECD90", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x48ECDB0", Offset = "0x48ECDB0", VA = "0x48ECDB0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x48ECDD0", Offset = "0x48ECDD0", VA = "0x48ECDD0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x48ECAE0", Offset = "0x48ECAE0", VA = "0x48ECAE0")]
	internal void UpdateColor()
	{
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x48ECE00", Offset = "0x48ECE00", VA = "0x48ECE00", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x48ECEC0", Offset = "0x48ECEC0", VA = "0x48ECEC0")]
	public DebugUIHandlerColor()
	{
	}
}
