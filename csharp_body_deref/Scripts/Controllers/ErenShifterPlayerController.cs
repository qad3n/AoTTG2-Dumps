using Characters;
using Il2CppDummyDll;
using Settings;

namespace Controllers;

[Token(Token = "0x2000484")]
internal class ErenShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x4001401")]
	[FieldOffset(Offset = "0x58")]
	protected ErenShifter _shifter;

	[Token(Token = "0x4001402")]
	[FieldOffset(Offset = "0x60")]
	protected ErenShifterInputSettings _shifterInput;

	[Token(Token = "0x600305F")]
	[Address(RVA = "0x3E867D0", Offset = "0x3E867D0", VA = "0x3E867D0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003060")]
	[Address(RVA = "0x3E86940", Offset = "0x3E86940", VA = "0x3E86940", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003061")]
	[Address(RVA = "0x3E87010", Offset = "0x3E87010", VA = "0x3E87010")]
	public ErenShifterPlayerController()
	{
	}
}
