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

[Token(Token = "0x200061E")]
internal class ErenShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x4001B64")]
	[FieldOffset(Offset = "0x58")]
	protected ErenShifter _shifter;

	[Token(Token = "0x4001B65")]
	[FieldOffset(Offset = "0x60")]
	protected ErenShifterInputSettings _shifterInput;

	[Token(Token = "0x6003C07")]
	[Address(RVA = "0x20FD670", Offset = "0x20FBC70", VA = "0x1820FD670", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003C08")]
	[Address(RVA = "0x20FD7E0", Offset = "0x20FBDE0", VA = "0x1820FD7E0", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003C09")]
	[Address(RVA = "0x20F04E0", Offset = "0x20EEAE0", VA = "0x1820F04E0")]
	public ErenShifterPlayerController()
	{
	}
}
