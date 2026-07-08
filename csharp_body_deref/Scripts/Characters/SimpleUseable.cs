using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x200049D")]
internal abstract class SimpleUseable : BaseUseable
{
	[Token(Token = "0x60031AC")]
	[Address(RVA = "0x3E9C9F0", Offset = "0x3E9C9F0", VA = "0x3E9C9F0")]
	public SimpleUseable(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60031AD")]
	[Address(RVA = "0x3E9CA40", Offset = "0x3E9CA40", VA = "0x3E9CA40", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x60031AE")]
	[Address(RVA = "0x3E9CA80", Offset = "0x3E9CA80", VA = "0x3E9CA80", Slot = "12")]
	public override void SetInput(bool key)
	{
	}
}
