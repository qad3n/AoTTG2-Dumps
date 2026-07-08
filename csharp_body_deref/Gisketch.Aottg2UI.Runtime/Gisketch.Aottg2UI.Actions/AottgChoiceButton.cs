using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x200009A")]
public sealed class AottgChoiceButton : Button
{
	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x108")]
	private AottgChoiceControl _control;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x110")]
	private bool _selectMode;

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x3A1DB40", Offset = "0x3A1DB40", VA = "0x3A1DB40")]
	public void Setup(AottgChoiceControl control, bool selectMode)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x3A1DB70", Offset = "0x3A1DB70", VA = "0x3A1DB70", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x3A1DCE0", Offset = "0x3A1DCE0", VA = "0x3A1DCE0", Slot = "42")]
	public override void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x3A1DE50", Offset = "0x3A1DE50", VA = "0x3A1DE50", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x3A1E050", Offset = "0x3A1E050", VA = "0x3A1E050")]
	public AottgChoiceButton()
	{
	}
}
