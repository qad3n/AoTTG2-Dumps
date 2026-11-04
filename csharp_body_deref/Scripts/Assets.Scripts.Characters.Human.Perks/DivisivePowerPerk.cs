// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;

namespace Assets.Scripts.Characters.Human.Perks;

[Token(Token = "0x200089C")]
internal class DivisivePowerPerk : BasePerk
{
	[Token(Token = "0x4002AEF")]
	[FieldOffset(Offset = "0x20")]
	protected float _currentPower;

	[Token(Token = "0x4002AF0")]
	[FieldOffset(Offset = "0x24")]
	protected float _lastUpdateTime;

	[Token(Token = "0x4002AF1")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x17000EF9")]
	public bool PerkEnabled
	{
		[Token(Token = "0x600524A")]
		[Address(RVA = "0x232C5D0", Offset = "0x232ABD0", VA = "0x18232C5D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EFA")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x600524B")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EFB")]
	protected virtual float MinPower
	{
		[Token(Token = "0x600524C")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EFC")]
	protected virtual float PowerUsageDivisor
	{
		[Token(Token = "0x600524D")]
		[Address(RVA = "0x1D9F790", Offset = "0x1D9DD90", VA = "0x181D9F790", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EFD")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x600524E")]
		[Address(RVA = "0x21BC890", Offset = "0x21BAE90", VA = "0x1821BC890", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EFE")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x600524F")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "13")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6005250")]
	[Address(RVA = "0x2336C60", Offset = "0x2335260", VA = "0x182336C60")]
	public DivisivePowerPerk()
	{
	}

	[Token(Token = "0x6005251")]
	[Address(RVA = "0x2336A90", Offset = "0x2335090", VA = "0x182336A90", Slot = "14")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6005252")]
	[Address(RVA = "0x23366B0", Offset = "0x2334CB0", VA = "0x1823366B0")]
	public float GetCurrentPower()
	{
		return default(float);
	}

	[Token(Token = "0x6005253")]
	[Address(RVA = "0x2336B10", Offset = "0x2335110", VA = "0x182336B10")]
	public void SetCurrentPower(float power)
	{
	}

	[Token(Token = "0x6005254")]
	[Address(RVA = "0x2336A00", Offset = "0x2335000", VA = "0x182336A00")]
	public void RecoverPower(float amount)
	{
	}

	[Token(Token = "0x6005255")]
	[Address(RVA = "0x2336950", Offset = "0x2334F50", VA = "0x182336950")]
	public void RecoverPowerBySeconds(float seconds)
	{
	}

	[Token(Token = "0x6005256")]
	[Address(RVA = "0x23366D0", Offset = "0x2334CD0", VA = "0x1823366D0")]
	public float GetPowerRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6005257")]
	[Address(RVA = "0x2336B80", Offset = "0x2335180", VA = "0x182336B80")]
	protected void UpdatePower()
	{
	}

	[Token(Token = "0x6005258")]
	[Address(RVA = "0x23367A0", Offset = "0x2334DA0", VA = "0x1823367A0", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		return default(float);
	}

	[Token(Token = "0x6005259")]
	[Address(RVA = "0x23364E0", Offset = "0x2334AE0", VA = "0x1823364E0", Slot = "16")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600525A")]
	[Address(RVA = "0x23368A0", Offset = "0x2334EA0", VA = "0x1823368A0", Slot = "17")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x600525B")]
	[Address(RVA = "0x23367D0", Offset = "0x2334DD0", VA = "0x1823367D0", Slot = "18")]
	public virtual void OnUse(float percent)
	{
	}

	[Token(Token = "0x600525C")]
	[Address(RVA = "0x2336AC0", Offset = "0x23350C0", VA = "0x182336AC0")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x600525D")]
	[Address(RVA = "0x2336590", Offset = "0x2334B90", VA = "0x182336590")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x600525E")]
	[Address(RVA = "0x2336620", Offset = "0x2334C20", VA = "0x182336620")]
	public float GetCooldownRatio()
	{
		return default(float);
	}
}
