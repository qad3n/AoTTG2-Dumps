using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004A4")]
internal class HumanDetection : BaseDetection
{
	[Token(Token = "0x60031D4")]
	[Address(RVA = "0x3EA0F30", Offset = "0x3EA0F30", VA = "0x3EA0F30")]
	public HumanDetection(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60031D5")]
	[Address(RVA = "0x3EA0F40", Offset = "0x3EA0F40", VA = "0x3EA0F40", Slot = "8")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
