using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000211")]
public class DebugUIHandlerBitField : DebugUIHandlerWidget
{
	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x70")]
	public List<DebugUIHandlerIndirectToggle> toggles;

	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x78")]
	private DebugUI.BitField m_Field;

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x80")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x48E90D0", Offset = "0x48E90D0", VA = "0x48E90D0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x48E9560", Offset = "0x48E9560", VA = "0x48E9560")]
	private bool GetValue(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x48E9600", Offset = "0x48E9600", VA = "0x48E9600")]
	private void SetValue(int index, bool value)
	{
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x48E9960", Offset = "0x48E9960", VA = "0x48E9960", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x48E9BC0", Offset = "0x48E9BC0", VA = "0x48E9BC0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x48E9BF0", Offset = "0x48E9BF0", VA = "0x48E9BF0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x48E9C10", Offset = "0x48E9C10", VA = "0x48E9C10", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x48E9C30", Offset = "0x48E9C30", VA = "0x48E9C30", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x48E9C60", Offset = "0x48E9C60", VA = "0x48E9C60", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x48E9DA0", Offset = "0x48E9DA0", VA = "0x48E9DA0")]
	public DebugUIHandlerBitField()
	{
	}
}
