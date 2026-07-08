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
	[Address(RVA = "0x48F3870", Offset = "0x48F3870", VA = "0x48F3870", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x48F3C30", Offset = "0x48F3C30", VA = "0x48F3C30")]
	private void SetValue(float v, bool x = false, bool y = false)
	{
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x48F3AF0", Offset = "0x48F3AF0", VA = "0x48F3AF0")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x48F3CD0", Offset = "0x48F3CD0", VA = "0x48F3CD0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F38")]
	[Address(RVA = "0x48F3DB0", Offset = "0x48F3DB0", VA = "0x48F3DB0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x48F3DE0", Offset = "0x48F3DE0", VA = "0x48F3DE0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x48F3E00", Offset = "0x48F3E00", VA = "0x48F3E00", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x48F3E20", Offset = "0x48F3E20", VA = "0x48F3E20", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000F3C")]
	[Address(RVA = "0x48F3E50", Offset = "0x48F3E50", VA = "0x48F3E50", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x48F3F10", Offset = "0x48F3F10", VA = "0x48F3F10")]
	public DebugUIHandlerVector2()
	{
	}
}
