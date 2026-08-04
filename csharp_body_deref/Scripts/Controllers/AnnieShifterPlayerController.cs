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

[Token(Token = "0x20004C3")]
internal class AnnieShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x40014CC")]
	[FieldOffset(Offset = "0x58")]
	protected AnnieShifter _shifter;

	[Token(Token = "0x40014CD")]
	[FieldOffset(Offset = "0x60")]
	protected AnnieShifterInputSettings _shifterInput;

	[Token(Token = "0x600321C")]
	[Address(RVA = "0x4189090", Offset = "0x4189090", VA = "0x4189090", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600321D")]
	[Address(RVA = "0x4189450", Offset = "0x4189450", VA = "0x4189450", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x600321E")]
	[Address(RVA = "0x4189DF0", Offset = "0x4189DF0", VA = "0x4189DF0")]
	protected void AttackBrushFront()
	{
	}

	[Token(Token = "0x600321F")]
	[Address(RVA = "0x4189E80", Offset = "0x4189E80", VA = "0x4189E80")]
	protected void AttackBrushHead()
	{
	}

	[Token(Token = "0x6003220")]
	[Address(RVA = "0x4189F10", Offset = "0x4189F10", VA = "0x4189F10")]
	protected void AttackGrabBottom()
	{
	}

	[Token(Token = "0x6003221")]
	[Address(RVA = "0x4189FA0", Offset = "0x4189FA0", VA = "0x4189FA0")]
	protected void AttackGrabMid()
	{
	}

	[Token(Token = "0x6003222")]
	[Address(RVA = "0x418A030", Offset = "0x418A030", VA = "0x418A030")]
	protected void AttackGrabUp()
	{
	}

	[Token(Token = "0x6003223")]
	[Address(RVA = "0x418A4A0", Offset = "0x418A4A0", VA = "0x418A4A0")]
	public AnnieShifterPlayerController()
	{
	}
}
