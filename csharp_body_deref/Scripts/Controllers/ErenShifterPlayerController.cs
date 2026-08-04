// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.ErenShifterPlayerController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/ErenShifterPlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/ErenShifterPlayerController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;

namespace Controllers;

[Token(Token = "0x20004C9")]
internal class ErenShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x4001512")]
	[FieldOffset(Offset = "0x58")]
	protected ErenShifter _shifter;

	[Token(Token = "0x4001513")]
	[FieldOffset(Offset = "0x60")]
	protected ErenShifterInputSettings _shifterInput;

	[Token(Token = "0x600326C")]
	[Address(RVA = "0x4192D70", Offset = "0x4192D70", VA = "0x4192D70", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600326D")]
	[Address(RVA = "0x4192EE0", Offset = "0x4192EE0", VA = "0x4192EE0", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x600326E")]
	[Address(RVA = "0x41935B0", Offset = "0x41935B0", VA = "0x41935B0")]
	public ErenShifterPlayerController()
	{
	}
}
