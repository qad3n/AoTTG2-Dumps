using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000644")]
internal class IntroButton : Button
{
	[Token(Token = "0x4001EDA")]
	[FieldOffset(Offset = "0x108")]
	private float _fadeTime;

	[Token(Token = "0x4001EDB")]
	[FieldOffset(Offset = "0x110")]
	private Image _hoverImage;

	[Token(Token = "0x6003F4A")]
	[Address(RVA = "0x3FED940", Offset = "0x3FED940", VA = "0x3FED940", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003F4B")]
	[Address(RVA = "0x3FEDE40", Offset = "0x3FEDE40", VA = "0x3FEDE40", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6003F4C")]
	[Address(RVA = "0x3FEDF50", Offset = "0x3FEDF50", VA = "0x3FEDF50")]
	public IntroButton()
	{
	}
}
