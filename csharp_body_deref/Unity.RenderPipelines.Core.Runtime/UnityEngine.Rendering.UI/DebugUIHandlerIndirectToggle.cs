using System;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000223")]
public class DebugUIHandlerIndirectToggle : DebugUIHandlerWidget
{
	[Token(Token = "0x400088E")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x400088F")]
	[FieldOffset(Offset = "0x68")]
	public Toggle valueToggle;

	[Token(Token = "0x4000890")]
	[FieldOffset(Offset = "0x70")]
	public Image checkmarkImage;

	[Token(Token = "0x4000891")]
	[FieldOffset(Offset = "0x78")]
	public Func<int, bool> getter;

	[Token(Token = "0x4000892")]
	[FieldOffset(Offset = "0x80")]
	public Action<int, bool> setter;

	[Token(Token = "0x4000893")]
	[FieldOffset(Offset = "0x88")]
	internal int index;

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x48E94B0", Offset = "0x48E94B0", VA = "0x48E94B0")]
	public void Init()
	{
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x48EF440", Offset = "0x48EF440", VA = "0x48EF440")]
	private void OnToggleValueChanged(bool value)
	{
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x48EF470", Offset = "0x48EF470", VA = "0x48EF470", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x48EF4D0", Offset = "0x48EF4D0", VA = "0x48EF4D0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x48EF530", Offset = "0x48EF530", VA = "0x48EF530", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x48E98C0", Offset = "0x48E98C0", VA = "0x48E98C0")]
	internal void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x48EF590", Offset = "0x48EF590", VA = "0x48EF590")]
	public DebugUIHandlerIndirectToggle()
	{
	}
}
