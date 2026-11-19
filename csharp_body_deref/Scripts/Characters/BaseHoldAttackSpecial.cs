// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseHoldAttackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseHoldAttackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseHoldAttackSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D5")]
internal class BaseHoldAttackSpecial : HoldUseable
{
	[Token(Token = "0x4002056")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x4002057")]
	[FieldOffset(Offset = "0x48")]
	protected bool _keyIsReset;

	[Token(Token = "0x17000B64")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004291")]
		[Address(RVA = "0x5B08EB0", Offset = "0x5B07EB0", VA = "0x5B08EB0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004292")]
	[Address(RVA = "0x5B08EC0", Offset = "0x5B07EC0", VA = "0x5B08EC0")]
	public BaseHoldAttackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004293")]
	[Address(RVA = "0x5B08F70", Offset = "0x5B07F70", VA = "0x5B08F70", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x6004294")]
	[Address(RVA = "0x5B09020", Offset = "0x5B08020", VA = "0x5B09020", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004295")]
	[Address(RVA = "0x5B09030", Offset = "0x5B08030", VA = "0x5B09030", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
