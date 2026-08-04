// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AIHumanDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AIHumanDetection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004EA")]
internal class AIHumanDetection : BaseDetection
{
	[Token(Token = "0x60033E4")]
	[Address(RVA = "0x41AD880", Offset = "0x41AD880", VA = "0x41AD880")]
	public AIHumanDetection(BaseCharacter owner, bool enemiesOnly = false, bool titansOnly = true)
	{
	}

	[Token(Token = "0x60033E5")]
	[Address(RVA = "0x41AD890", Offset = "0x41AD890", VA = "0x41AD890", Slot = "8")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}

	[Token(Token = "0x60033E6")]
	[Address(RVA = "0x41AD950", Offset = "0x41AD950", VA = "0x41AD950", Slot = "5")]
	public override void OnFixedUpdate()
	{
	}
}
