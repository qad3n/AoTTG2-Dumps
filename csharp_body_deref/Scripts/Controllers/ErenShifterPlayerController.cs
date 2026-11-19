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

[Token(Token = "0x200067D")]
internal class ErenShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x4001D07")]
	[FieldOffset(Offset = "0x58")]
	protected ErenShifter _shifter;

	[Token(Token = "0x4001D08")]
	[FieldOffset(Offset = "0x60")]
	protected ErenShifterInputSettings _shifterInput;

	[Token(Token = "0x6003E96")]
	[Address(RVA = "0x5AA5FE0", Offset = "0x5AA4FE0", VA = "0x5AA5FE0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003E97")]
	[Address(RVA = "0x5AA63A0", Offset = "0x5AA53A0", VA = "0x5AA63A0", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003E98")]
	[Address(RVA = "0x5AA69D0", Offset = "0x5AA59D0", VA = "0x5AA69D0")]
	public ErenShifterPlayerController()
	{
	}
}
