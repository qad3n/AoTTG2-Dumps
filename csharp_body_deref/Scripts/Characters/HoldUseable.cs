using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x200049B")]
internal class HoldUseable : ExtendedUseable
{
	[Token(Token = "0x60031A6")]
	[Address(RVA = "0x3E9C840", Offset = "0x3E9C840", VA = "0x3E9C840")]
	public HoldUseable(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60031A7")]
	[Address(RVA = "0x3E9C890", Offset = "0x3E9C890", VA = "0x3E9C890", Slot = "13")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x60031A8")]
	[Address(RVA = "0x3E9C8B0", Offset = "0x3E9C8B0", VA = "0x3E9C8B0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x60031A9")]
	[Address(RVA = "0x3E9C940", Offset = "0x3E9C940", VA = "0x3E9C940", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
	}
}
