using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200022F")]
public class DebugUIHandlerToggle : DebugUIHandlerWidget
{
	[Token(Token = "0x40008B6")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x68")]
	public Toggle valueToggle;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x70")]
	public Image checkmarkImage;

	[Token(Token = "0x40008B9")]
	[FieldOffset(Offset = "0x78")]
	protected internal DebugUI.BoolField m_Field;

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x48F1CA0", Offset = "0x48F1CA0", VA = "0x48F1CA0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x48F1DC0", Offset = "0x48F1DC0", VA = "0x48F1DC0")]
	private void OnToggleValueChanged(bool value)
	{
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x48F1DF0", Offset = "0x48F1DF0", VA = "0x48F1DF0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x48F1E50", Offset = "0x48F1E50", VA = "0x48F1E50", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x48F1EB0", Offset = "0x48F1EB0", VA = "0x48F1EB0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x48F1F30", Offset = "0x48F1F30", VA = "0x48F1F30", Slot = "13")]
	protected internal virtual void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x48F1FD0", Offset = "0x48F1FD0", VA = "0x48F1FD0")]
	public DebugUIHandlerToggle()
	{
	}
}
