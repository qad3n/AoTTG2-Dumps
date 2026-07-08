using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004A5")]
internal class AIHumanDetection : BaseDetection
{
	[Token(Token = "0x60031D6")]
	[Address(RVA = "0x3EA0FE0", Offset = "0x3EA0FE0", VA = "0x3EA0FE0")]
	public AIHumanDetection(BaseCharacter owner, bool enemiesOnly = false, bool titansOnly = true)
	{
	}

	[Token(Token = "0x60031D7")]
	[Address(RVA = "0x3EA0FF0", Offset = "0x3EA0FF0", VA = "0x3EA0FF0", Slot = "8")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}

	[Token(Token = "0x60031D8")]
	[Address(RVA = "0x3EA10B0", Offset = "0x3EA10B0", VA = "0x3EA10B0", Slot = "5")]
	public override void OnFixedUpdate()
	{
	}
}
