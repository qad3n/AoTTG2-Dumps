// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AIHumanDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AIHumanDetection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006A2")]
internal class AIHumanDetection : BaseDetection
{
	[Token(Token = "0x6004060")]
	[Address(RVA = "0x5AE6470", Offset = "0x5AE5470", VA = "0x5AE6470")]
	public AIHumanDetection(BaseCharacter owner, bool enemiesOnly = false, bool titansOnly = true)
	{
	}

	[Token(Token = "0x6004061")]
	[Address(RVA = "0x5AE6480", Offset = "0x5AE5480", VA = "0x5AE6480", Slot = "9")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
