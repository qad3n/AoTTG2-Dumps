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

[Token(Token = "0x200089B")]
internal class CDPerk : BasePerk
{
	[Token(Token = "0x4002AEE")]
	[FieldOffset(Offset = "0x20")]
	protected float _lastUseTime;

	[Token(Token = "0x17000EF7")]
	public bool PerkEnabled
	{
		[Token(Token = "0x6005241")]
		[Address(RVA = "0x232C5D0", Offset = "0x232ABD0", VA = "0x18232C5D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EF8")]
	public float Cooldown
	{
		[Token(Token = "0x6005242")]
		[Address(RVA = "0x2168BA0", Offset = "0x21671A0", VA = "0x182168BA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6005243")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6005244")]
	[Address(RVA = "0x232C580", Offset = "0x232AB80", VA = "0x18232C580")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6005245")]
	[Address(RVA = "0x232C4C0", Offset = "0x232AAC0", VA = "0x18232C4C0")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6005246")]
	[Address(RVA = "0x232C510", Offset = "0x232AB10", VA = "0x18232C510")]
	public float GetCooldownRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6005247")]
	[Address(RVA = "0x232C490", Offset = "0x232AA90", VA = "0x18232C490", Slot = "10")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6005248")]
	[Address(RVA = "0x232C560", Offset = "0x232AB60", VA = "0x18232C560", Slot = "11")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x6005249")]
	[Address(RVA = "0x232C5C0", Offset = "0x232ABC0", VA = "0x18232C5C0")]
	public CDPerk()
	{
	}
}
