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
	[Address(RVA = "0x48F4BE0", Offset = "0x48F4BE0", VA = "0x48F4BE0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x48F51A0", Offset = "0x48F51A0", VA = "0x48F51A0")]
	private void SetValue(float v, bool x = false, bool y = false, bool z = false, bool w = false)
	{
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x48F5060", Offset = "0x48F5060", VA = "0x48F5060")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x48F5270", Offset = "0x48F5270", VA = "0x48F5270", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x48F5350", Offset = "0x48F5350", VA = "0x48F5350", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x48F5380", Offset = "0x48F5380", VA = "0x48F5380", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x48F53A0", Offset = "0x48F53A0", VA = "0x48F53A0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x48F53C0", Offset = "0x48F53C0", VA = "0x48F53C0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x48F53F0", Offset = "0x48F53F0", VA = "0x48F53F0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x48F54B0", Offset = "0x48F54B0", VA = "0x48F54B0")]
	public DebugUIHandlerVector4()
	{
	}
}
