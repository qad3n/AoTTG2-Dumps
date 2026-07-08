using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004A6")]
internal class TitanDetection : BaseDetection
{
	[Token(Token = "0x60031D9")]
	[Address(RVA = "0x3EA1140", Offset = "0x3EA1140", VA = "0x3EA1140")]
	public TitanDetection(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60031DA")]
	[Address(RVA = "0x3EA1150", Offset = "0x3EA1150", VA = "0x3EA1150", Slot = "8")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
