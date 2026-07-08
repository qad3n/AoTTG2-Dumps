using Characters;
using Il2CppDummyDll;
using Settings;

namespace Controllers;

[Token(Token = "0x2000483")]
internal class BasicTitanPlayerController : BasePlayerController
{
	[Token(Token = "0x40013FC")]
	[FieldOffset(Offset = "0x58")]
	protected BasicTitan _titan;

	[Token(Token = "0x40013FD")]
	[FieldOffset(Offset = "0x60")]
	protected TitanInputSettings _titanInput;

	[Token(Token = "0x40013FE")]
	[FieldOffset(Offset = "0x68")]
	protected float _enemyTimeLeft;

	[Token(Token = "0x40013FF")]
	[FieldOffset(Offset = "0x6C")]
	protected float RockCooldown;

	[Token(Token = "0x4001400")]
	[FieldOffset(Offset = "0x70")]
	protected float _rockCooldownLeft;

	[Token(Token = "0x6003052")]
	[Address(RVA = "0x3E85230", Offset = "0x3E85230", VA = "0x3E85230", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003053")]
	[Address(RVA = "0x3E85480", Offset = "0x3E85480", VA = "0x3E85480", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003054")]
	[Address(RVA = "0x3E854F0", Offset = "0x3E854F0", VA = "0x3E854F0", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003055")]
	[Address(RVA = "0x3E86160", Offset = "0x3E86160", VA = "0x3E86160")]
	protected void AttackSwing()
	{
	}

	[Token(Token = "0x6003056")]
	[Address(RVA = "0x3E861F0", Offset = "0x3E861F0", VA = "0x3E861F0")]
	protected void AttackGrabAirFar()
	{
	}

	[Token(Token = "0x6003057")]
	[Address(RVA = "0x3E86280", Offset = "0x3E86280", VA = "0x3E86280")]
	protected void AttackGrabAir()
	{
	}

	[Token(Token = "0x6003058")]
	[Address(RVA = "0x3E86310", Offset = "0x3E86310", VA = "0x3E86310")]
	protected void AttackGrabBody()
	{
	}

	[Token(Token = "0x6003059")]
	[Address(RVA = "0x3E86410", Offset = "0x3E86410", VA = "0x3E86410")]
	protected void AttackGrabCore()
	{
	}

	[Token(Token = "0x600305A")]
	[Address(RVA = "0x3E864A0", Offset = "0x3E864A0", VA = "0x3E864A0")]
	protected void AttackGrabGround()
	{
	}

	[Token(Token = "0x600305B")]
	[Address(RVA = "0x3E865A0", Offset = "0x3E865A0", VA = "0x3E865A0")]
	protected void AttackGrabHead()
	{
	}

	[Token(Token = "0x600305C")]
	[Address(RVA = "0x3E866A0", Offset = "0x3E866A0", VA = "0x3E866A0")]
	protected void AttackGrabHigh()
	{
	}

	[Token(Token = "0x600305D")]
	[Address(RVA = "0x3E86730", Offset = "0x3E86730", VA = "0x3E86730")]
	protected void AttackBrushChest()
	{
	}

	[Token(Token = "0x600305E")]
	[Address(RVA = "0x3E867C0", Offset = "0x3E867C0", VA = "0x3E867C0")]
	public BasicTitanPlayerController()
	{
	}
}
