// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.AnnieShifterPlayerController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/AnnieShifterPlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/AnnieShifterPlayerController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;

namespace Controllers;

[Token(Token = "0x2000677")]
internal class AnnieShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x4001CAA")]
	[FieldOffset(Offset = "0x58")]
	protected AnnieShifter _shifter;

	[Token(Token = "0x4001CAB")]
	[FieldOffset(Offset = "0x60")]
	protected AnnieShifterInputSettings _shifterInput;

	[Token(Token = "0x6003E1F")]
	[Address(RVA = "0x5A99EB0", Offset = "0x5A98EB0", VA = "0x5A99EB0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003E20")]
	[Address(RVA = "0x5A9A270", Offset = "0x5A99270", VA = "0x5A9A270", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003E21")]
	[Address(RVA = "0x5A9AA90", Offset = "0x5A99A90", VA = "0x5A9AA90")]
	protected void AttackBrushFront()
	{
	}

	[Token(Token = "0x6003E22")]
	[Address(RVA = "0x5A9AB20", Offset = "0x5A99B20", VA = "0x5A9AB20")]
	protected void AttackBrushHead()
	{
	}

	[Token(Token = "0x6003E23")]
	[Address(RVA = "0x5A9ABB0", Offset = "0x5A99BB0", VA = "0x5A9ABB0")]
	protected void AttackGrabBottom()
	{
	}

	[Token(Token = "0x6003E24")]
	[Address(RVA = "0x5A9AC40", Offset = "0x5A99C40", VA = "0x5A9AC40")]
	protected void AttackGrabMid()
	{
	}

	[Token(Token = "0x6003E25")]
	[Address(RVA = "0x5A9ACD0", Offset = "0x5A99CD0", VA = "0x5A9ACD0")]
	protected void AttackGrabUp()
	{
	}

	[Token(Token = "0x6003E26")]
	[Address(RVA = "0x5A9B150", Offset = "0x5A9A150", VA = "0x5A9B150")]
	public AnnieShifterPlayerController()
	{
	}
}
