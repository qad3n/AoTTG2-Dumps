// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DownStrikeSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DownStrikeSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DownStrikeSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000523")]
internal class DownStrikeSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x4001817")]
	[FieldOffset(Offset = "0x49")]
	protected bool _needActivate;

	[Token(Token = "0x60035E0")]
	[Address(RVA = "0x41E4160", Offset = "0x41E4160", VA = "0x41E4160")]
	public DownStrikeSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035E1")]
	[Address(RVA = "0x41F5270", Offset = "0x41F5270", VA = "0x41F5270", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035E2")]
	[Address(RVA = "0x41F5360", Offset = "0x41F5360", VA = "0x41F5360", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60035E3")]
	[Address(RVA = "0x41F5650", Offset = "0x41F5650", VA = "0x41F5650", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}
}
