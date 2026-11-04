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

[Token(Token = "0x200061D")]
internal class BasicTitanPlayerController : BasePlayerController
{
	[Token(Token = "0x4001B5F")]
	[FieldOffset(Offset = "0x58")]
	protected BasicTitan _titan;

	[Token(Token = "0x4001B60")]
	[FieldOffset(Offset = "0x60")]
	protected TitanInputSettings _titanInput;

	[Token(Token = "0x4001B61")]
	[FieldOffset(Offset = "0x68")]
	protected float _enemyTimeLeft;

	[Token(Token = "0x4001B62")]
	[FieldOffset(Offset = "0x6C")]
	protected float RockCooldown;

	[Token(Token = "0x4001B63")]
	[FieldOffset(Offset = "0x70")]
	protected float _rockCooldownLeft;

	[Token(Token = "0x6003BFA")]
	[Address(RVA = "0x20FA070", Offset = "0x20F8670", VA = "0x1820FA070", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003BFB")]
	[Address(RVA = "0x20FB100", Offset = "0x20F9700", VA = "0x1820FB100", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003BFC")]
	[Address(RVA = "0x20FA370", Offset = "0x20F8970", VA = "0x1820FA370", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003BFD")]
	[Address(RVA = "0x20F9FE0", Offset = "0x20F85E0", VA = "0x1820F9FE0")]
	protected void AttackSwing()
	{
	}

	[Token(Token = "0x6003BFE")]
	[Address(RVA = "0x20F9B00", Offset = "0x20F8100", VA = "0x1820F9B00")]
	protected void AttackGrabAirFar()
	{
	}

	[Token(Token = "0x6003BFF")]
	[Address(RVA = "0x20F9B90", Offset = "0x20F8190", VA = "0x1820F9B90")]
	protected void AttackGrabAir()
	{
	}

	[Token(Token = "0x6003C00")]
	[Address(RVA = "0x20F9C20", Offset = "0x20F8220", VA = "0x1820F9C20")]
	protected void AttackGrabBody()
	{
	}

	[Token(Token = "0x6003C01")]
	[Address(RVA = "0x20F9D00", Offset = "0x20F8300", VA = "0x1820F9D00")]
	protected void AttackGrabCore()
	{
	}

	[Token(Token = "0x6003C02")]
	[Address(RVA = "0x20F9D90", Offset = "0x20F8390", VA = "0x1820F9D90")]
	protected void AttackGrabGround()
	{
	}

	[Token(Token = "0x6003C03")]
	[Address(RVA = "0x20F9E70", Offset = "0x20F8470", VA = "0x1820F9E70")]
	protected void AttackGrabHead()
	{
	}

	[Token(Token = "0x6003C04")]
	[Address(RVA = "0x20F9F50", Offset = "0x20F8550", VA = "0x1820F9F50")]
	protected void AttackGrabHigh()
	{
	}

	[Token(Token = "0x6003C05")]
	[Address(RVA = "0x20F9A70", Offset = "0x20F8070", VA = "0x1820F9A70")]
	protected void AttackBrushChest()
	{
	}

	[Token(Token = "0x6003C06")]
	[Address(RVA = "0x20FB160", Offset = "0x20F9760", VA = "0x1820FB160")]
	public BasicTitanPlayerController()
	{
	}
}
