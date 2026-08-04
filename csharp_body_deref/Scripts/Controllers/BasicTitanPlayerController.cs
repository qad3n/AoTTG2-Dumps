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

[Token(Token = "0x20004C8")]
internal class BasicTitanPlayerController : BasePlayerController
{
	[Token(Token = "0x400150D")]
	[FieldOffset(Offset = "0x58")]
	protected BasicTitan _titan;

	[Token(Token = "0x400150E")]
	[FieldOffset(Offset = "0x60")]
	protected TitanInputSettings _titanInput;

	[Token(Token = "0x400150F")]
	[FieldOffset(Offset = "0x68")]
	protected float _enemyTimeLeft;

	[Token(Token = "0x4001510")]
	[FieldOffset(Offset = "0x6C")]
	protected float RockCooldown;

	[Token(Token = "0x4001511")]
	[FieldOffset(Offset = "0x70")]
	protected float _rockCooldownLeft;

	[Token(Token = "0x600325F")]
	[Address(RVA = "0x41917D0", Offset = "0x41917D0", VA = "0x41917D0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003260")]
	[Address(RVA = "0x4191A20", Offset = "0x4191A20", VA = "0x4191A20", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003261")]
	[Address(RVA = "0x4191A90", Offset = "0x4191A90", VA = "0x4191A90", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003262")]
	[Address(RVA = "0x4192700", Offset = "0x4192700", VA = "0x4192700")]
	protected void AttackSwing()
	{
	}

	[Token(Token = "0x6003263")]
	[Address(RVA = "0x4192790", Offset = "0x4192790", VA = "0x4192790")]
	protected void AttackGrabAirFar()
	{
	}

	[Token(Token = "0x6003264")]
	[Address(RVA = "0x4192820", Offset = "0x4192820", VA = "0x4192820")]
	protected void AttackGrabAir()
	{
	}

	[Token(Token = "0x6003265")]
	[Address(RVA = "0x41928B0", Offset = "0x41928B0", VA = "0x41928B0")]
	protected void AttackGrabBody()
	{
	}

	[Token(Token = "0x6003266")]
	[Address(RVA = "0x41929B0", Offset = "0x41929B0", VA = "0x41929B0")]
	protected void AttackGrabCore()
	{
	}

	[Token(Token = "0x6003267")]
	[Address(RVA = "0x4192A40", Offset = "0x4192A40", VA = "0x4192A40")]
	protected void AttackGrabGround()
	{
	}

	[Token(Token = "0x6003268")]
	[Address(RVA = "0x4192B40", Offset = "0x4192B40", VA = "0x4192B40")]
	protected void AttackGrabHead()
	{
	}

	[Token(Token = "0x6003269")]
	[Address(RVA = "0x4192C40", Offset = "0x4192C40", VA = "0x4192C40")]
	protected void AttackGrabHigh()
	{
	}

	[Token(Token = "0x600326A")]
	[Address(RVA = "0x4192CD0", Offset = "0x4192CD0", VA = "0x4192CD0")]
	protected void AttackBrushChest()
	{
	}

	[Token(Token = "0x600326B")]
	[Address(RVA = "0x4192D60", Offset = "0x4192D60", VA = "0x4192D60")]
	public BasicTitanPlayerController()
	{
	}
}
