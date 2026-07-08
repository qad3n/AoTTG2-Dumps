using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005BF")]
internal class TooltipButton : Button
{
	[Token(Token = "0x4001BCC")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x6003AD0")]
	[Address(RVA = "0x3F8BE40", Offset = "0x3F8BE40", VA = "0x3F8BE40")]
	private new void Awake()
	{
	}

	[Token(Token = "0x6003AD1")]
	[Address(RVA = "0x3F8BE90", Offset = "0x3F8BE90", VA = "0x3F8BE90", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style)
	{
	}

	[Token(Token = "0x6003AD2")]
	[Address(RVA = "0x3F8C010", Offset = "0x3F8C010", VA = "0x3F8C010", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6003AD3")]
	[Address(RVA = "0x3F8C1A0", Offset = "0x3F8C1A0", VA = "0x3F8C1A0")]
	public TooltipButton()
	{
	}
}
