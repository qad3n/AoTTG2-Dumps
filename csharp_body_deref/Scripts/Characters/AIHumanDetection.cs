// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AIHumanDetection
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/AIHumanDetection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000643")]
internal class AIHumanDetection : BaseDetection
{
	[Token(Token = "0x6003DCB")]
	[Address(RVA = "0x2106840", Offset = "0x2104E40", VA = "0x182106840")]
	public AIHumanDetection(BaseCharacter owner, bool enemiesOnly = false, bool titansOnly = true)
	{
	}

	[Token(Token = "0x6003DCC")]
	[Address(RVA = "0x2106790", Offset = "0x2104D90", VA = "0x182106790", Slot = "9")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
