// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DownStrikeSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DownStrikeSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DownStrikeSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200067D")]
internal class DownStrikeSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x4001EB4")]
	[FieldOffset(Offset = "0x50")]
	protected bool _needActivate;

	[Token(Token = "0x600401E")]
	[Address(RVA = "0x216B660", Offset = "0x2169C60", VA = "0x18216B660")]
	public DownStrikeSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600401F")]
	[Address(RVA = "0x216B220", Offset = "0x2169820", VA = "0x18216B220", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004020")]
	[Address(RVA = "0x216B330", Offset = "0x2169930", VA = "0x18216B330", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6004021")]
	[Address(RVA = "0x2166DD0", Offset = "0x21653D0", VA = "0x182166DD0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}
}
