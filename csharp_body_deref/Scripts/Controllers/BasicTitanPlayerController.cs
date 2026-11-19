// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BasicTitanPlayerController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/BasicTitanPlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasicTitanPlayerController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;

namespace Controllers;

[Token(Token = "0x200067C")]
internal class BasicTitanPlayerController : BasePlayerController
{
	[Token(Token = "0x4001D02")]
	[FieldOffset(Offset = "0x58")]
	protected BasicTitan _titan;

	[Token(Token = "0x4001D03")]
	[FieldOffset(Offset = "0x60")]
	protected TitanInputSettings _titanInput;

	[Token(Token = "0x4001D04")]
	[FieldOffset(Offset = "0x68")]
	protected float _enemyTimeLeft;

	[Token(Token = "0x4001D05")]
	[FieldOffset(Offset = "0x6C")]
	protected float RockCooldown;

	[Token(Token = "0x4001D06")]
	[FieldOffset(Offset = "0x70")]
	protected float _rockCooldownLeft;

	[Token(Token = "0x6003E89")]
	[Address(RVA = "0x5AA4D40", Offset = "0x5AA3D40", VA = "0x5AA4D40", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003E8A")]
	[Address(RVA = "0x5AA4F90", Offset = "0x5AA3F90", VA = "0x5AA4F90", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003E8B")]
	[Address(RVA = "0x5AA5000", Offset = "0x5AA4000", VA = "0x5AA5000", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003E8C")]
	[Address(RVA = "0x5AA59D0", Offset = "0x5AA49D0", VA = "0x5AA59D0")]
	protected void AttackSwing()
	{
	}

	[Token(Token = "0x6003E8D")]
	[Address(RVA = "0x5AA5A60", Offset = "0x5AA4A60", VA = "0x5AA5A60")]
	protected void AttackGrabAirFar()
	{
	}

	[Token(Token = "0x6003E8E")]
	[Address(RVA = "0x5AA5AF0", Offset = "0x5AA4AF0", VA = "0x5AA5AF0")]
	protected void AttackGrabAir()
	{
	}

	[Token(Token = "0x6003E8F")]
	[Address(RVA = "0x5AA5B80", Offset = "0x5AA4B80", VA = "0x5AA5B80")]
	protected void AttackGrabBody()
	{
	}

	[Token(Token = "0x6003E90")]
	[Address(RVA = "0x5AA5C60", Offset = "0x5AA4C60", VA = "0x5AA5C60")]
	protected void AttackGrabCore()
	{
	}

	[Token(Token = "0x6003E91")]
	[Address(RVA = "0x5AA5CF0", Offset = "0x5AA4CF0", VA = "0x5AA5CF0")]
	protected void AttackGrabGround()
	{
	}

	[Token(Token = "0x6003E92")]
	[Address(RVA = "0x5AA5DD0", Offset = "0x5AA4DD0", VA = "0x5AA5DD0")]
	protected void AttackGrabHead()
	{
	}

	[Token(Token = "0x6003E93")]
	[Address(RVA = "0x5AA5EB0", Offset = "0x5AA4EB0", VA = "0x5AA5EB0")]
	protected void AttackGrabHigh()
	{
	}

	[Token(Token = "0x6003E94")]
	[Address(RVA = "0x5AA5F40", Offset = "0x5AA4F40", VA = "0x5AA5F40")]
	protected void AttackBrushChest()
	{
	}

	[Token(Token = "0x6003E95")]
	[Address(RVA = "0x5AA5FD0", Offset = "0x5AA4FD0", VA = "0x5AA5FD0")]
	public BasicTitanPlayerController()
	{
	}
}
