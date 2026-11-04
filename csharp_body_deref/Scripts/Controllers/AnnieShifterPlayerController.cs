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

[Token(Token = "0x2000618")]
internal class AnnieShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x4001B09")]
	[FieldOffset(Offset = "0x58")]
	protected AnnieShifter _shifter;

	[Token(Token = "0x4001B0A")]
	[FieldOffset(Offset = "0x60")]
	protected AnnieShifterInputSettings _shifterInput;

	[Token(Token = "0x6003B91")]
	[Address(RVA = "0x20EFBA0", Offset = "0x20EE1A0", VA = "0x1820EFBA0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003B92")]
	[Address(RVA = "0x20EFD40", Offset = "0x20EE340", VA = "0x1820EFD40", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003B93")]
	[Address(RVA = "0x20EF8B0", Offset = "0x20EDEB0", VA = "0x1820EF8B0")]
	protected void AttackBrushFront()
	{
	}

	[Token(Token = "0x6003B94")]
	[Address(RVA = "0x20EF940", Offset = "0x20EDF40", VA = "0x1820EF940")]
	protected void AttackBrushHead()
	{
	}

	[Token(Token = "0x6003B95")]
	[Address(RVA = "0x20EF9D0", Offset = "0x20EDFD0", VA = "0x1820EF9D0")]
	protected void AttackGrabBottom()
	{
	}

	[Token(Token = "0x6003B96")]
	[Address(RVA = "0x20EFA60", Offset = "0x20EE060", VA = "0x1820EFA60")]
	protected void AttackGrabMid()
	{
	}

	[Token(Token = "0x6003B97")]
	[Address(RVA = "0x20EFAF0", Offset = "0x20EE0F0", VA = "0x1820EFAF0")]
	protected void AttackGrabUp()
	{
	}

	[Token(Token = "0x6003B98")]
	[Address(RVA = "0x20F04E0", Offset = "0x20EEAE0", VA = "0x1820F04E0")]
	public AnnieShifterPlayerController()
	{
	}
}
