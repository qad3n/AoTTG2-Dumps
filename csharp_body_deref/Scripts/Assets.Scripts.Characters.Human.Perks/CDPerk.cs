// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.Characters.Human.Perks.CDPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;

namespace Assets.Scripts.Characters.Human.Perks;

[Token(Token = "0x2000716")]
internal class CDPerk : BasePerk
{
	[Token(Token = "0x400222F")]
	[FieldOffset(Offset = "0x20")]
	protected float _lastUseTime;

	[Token(Token = "0x17000D96")]
	public bool PerkEnabled
	{
		[Token(Token = "0x60045E5")]
		[Address(RVA = "0x43806D0", Offset = "0x43806D0", VA = "0x43806D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D97")]
	public float Cooldown
	{
		[Token(Token = "0x60045E6")]
		[Address(RVA = "0x43806F0", Offset = "0x43806F0", VA = "0x43806F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60045E7")]
	[Address(RVA = "0x4380700", Offset = "0x4380700", VA = "0x4380700", Slot = "9")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60045E8")]
	[Address(RVA = "0x4380710", Offset = "0x4380710", VA = "0x4380710")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x60045E9")]
	[Address(RVA = "0x4380740", Offset = "0x4380740", VA = "0x4380740")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x60045EA")]
	[Address(RVA = "0x4380780", Offset = "0x4380780", VA = "0x4380780")]
	public float GetCooldownRatio()
	{
		return default(float);
	}

	[Token(Token = "0x60045EB")]
	[Address(RVA = "0x43807C0", Offset = "0x43807C0", VA = "0x43807C0", Slot = "10")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60045EC")]
	[Address(RVA = "0x43807E0", Offset = "0x43807E0", VA = "0x43807E0", Slot = "11")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x60045ED")]
	[Address(RVA = "0x4380800", Offset = "0x4380800", VA = "0x4380800")]
	public CDPerk()
	{
	}
}
