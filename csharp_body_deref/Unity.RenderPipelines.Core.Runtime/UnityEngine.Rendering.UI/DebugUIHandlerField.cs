using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200021D")]
public abstract class DebugUIHandlerField<T> : DebugUIHandlerWidget where T : DebugUI.Widget
{
	[Token(Token = "0x4000874")]
	[FieldOffset(Offset = "0x0")]
	public Text nextButtonText;

	[Token(Token = "0x4000875")]
	[FieldOffset(Offset = "0x0")]
	public Text previousButtonText;

	[Token(Token = "0x4000876")]
	[FieldOffset(Offset = "0x0")]
	public Text nameLabel;

	[Token(Token = "0x4000877")]
	[FieldOffset(Offset = "0x0")]
	public Text valueLabel;

	[Token(Token = "0x4000878")]
	[FieldOffset(Offset = "0x0")]
	protected internal T m_Field;

	[Token(Token = "0x6000E9C")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000E9D")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9E")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000E9F")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000EA0")]
	public abstract void UpdateValueLabel();

	[Token(Token = "0x6000EA1")]
	protected void SetLabelText(string text)
	{
	}

	[Token(Token = "0x6000EA2")]
	protected DebugUIHandlerField()
	{
	}
}
