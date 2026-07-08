using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000237")]
public class DebugUIHandlerVector3 : DebugUIHandlerWidget
{
	[Token(Token = "0x40008D5")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008D6")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x40008D7")]
	[FieldOffset(Offset = "0x70")]
	public DebugUIHandlerIndirectFloatField fieldX;

	[Token(Token = "0x40008D8")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldY;

	[Token(Token = "0x40008D9")]
	[FieldOffset(Offset = "0x80")]
	public DebugUIHandlerIndirectFloatField fieldZ;

	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0x88")]
	private DebugUI.Vector3Field m_Field;

	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0x90")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x48F4130", Offset = "0x48F4130", VA = "0x48F4130", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x48F45F0", Offset = "0x48F45F0", VA = "0x48F45F0")]
	private void SetValue(float v, bool x = false, bool y = false, bool z = false)
	{
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x48F44B0", Offset = "0x48F44B0", VA = "0x48F44B0")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x48F46B0", Offset = "0x48F46B0", VA = "0x48F46B0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x48F4790", Offset = "0x48F4790", VA = "0x48F4790", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x48F47C0", Offset = "0x48F47C0", VA = "0x48F47C0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x48F47E0", Offset = "0x48F47E0", VA = "0x48F47E0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x48F4800", Offset = "0x48F4800", VA = "0x48F4800", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x48F4830", Offset = "0x48F4830", VA = "0x48F4830", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x48F48F0", Offset = "0x48F48F0", VA = "0x48F48F0")]
	public DebugUIHandlerVector3()
	{
	}
}
