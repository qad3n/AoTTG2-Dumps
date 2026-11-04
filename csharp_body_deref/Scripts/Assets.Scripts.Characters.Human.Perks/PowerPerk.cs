// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.Characters.Human.Perks.PowerPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;

namespace Assets.Scripts.Characters.Human.Perks;

[Token(Token = "0x200089D")]
internal class PowerPerk : BasePerk
{
	[Token(Token = "0x4002AF2")]
	[FieldOffset(Offset = "0x20")]
	protected float _currentPower;

	[Token(Token = "0x4002AF3")]
	[FieldOffset(Offset = "0x24")]
	protected float _lastUpdateTime;

	[Token(Token = "0x4002AF4")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x17000EFF")]
	public bool PerkEnabled
	{
		[Token(Token = "0x600525F")]
		[Address(RVA = "0x232C5D0", Offset = "0x232ABD0", VA = "0x18232C5D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F00")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x6005260")]
		[Address(RVA = "0x1DA8AF0", Offset = "0x1DA70F0", VA = "0x181DA8AF0", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000F01")]
	protected virtual float MinPower
	{
		[Token(Token = "0x6005261")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000F02")]
	protected virtual float PowerCost
	{
		[Token(Token = "0x6005262")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000F03")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x6005263")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000F04")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x6005264")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "13")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6005265")]
	[Address(RVA = "0x2336C60", Offset = "0x2335260", VA = "0x182336C60")]
	public PowerPerk()
	{
	}

	[Token(Token = "0x6005266")]
	[Address(RVA = "0x2336A90", Offset = "0x2335090", VA = "0x182336A90", Slot = "14")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6005267")]
	[Address(RVA = "0x23366B0", Offset = "0x2334CB0", VA = "0x1823366B0")]
	public float GetCurrentPower()
	{
		return default(float);
	}

	[Token(Token = "0x6005268")]
	[Address(RVA = "0x2336B10", Offset = "0x2335110", VA = "0x182336B10")]
	public void SetCurrentPower(float power)
	{
	}

	[Token(Token = "0x6005269")]
	[Address(RVA = "0x2336A00", Offset = "0x2335000", VA = "0x182336A00")]
	public void RecoverPower(float amount)
	{
	}

	[Token(Token = "0x600526A")]
	[Address(RVA = "0x2336950", Offset = "0x2334F50", VA = "0x182336950")]
	public void RecoverPowerBySeconds(float seconds)
	{
	}

	[Token(Token = "0x600526B")]
	[Address(RVA = "0x23366D0", Offset = "0x2334CD0", VA = "0x1823366D0")]
	public float GetPowerRatio()
	{
		return default(float);
	}

	[Token(Token = "0x600526C")]
	[Address(RVA = "0x2336B80", Offset = "0x2335180", VA = "0x182336B80")]
	protected void UpdatePower()
	{
	}

	[Token(Token = "0x600526D")]
	[Address(RVA = "0x23367A0", Offset = "0x2334DA0", VA = "0x1823367A0", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		return default(float);
	}

	[Token(Token = "0x600526E")]
	[Address(RVA = "0x233D0D0", Offset = "0x233B6D0", VA = "0x18233D0D0", Slot = "16")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600526F")]
	[Address(RVA = "0x233D140", Offset = "0x233B740", VA = "0x18233D140", Slot = "17")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x6005270")]
	[Address(RVA = "0x2336AC0", Offset = "0x23350C0", VA = "0x182336AC0")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6005271")]
	[Address(RVA = "0x2336590", Offset = "0x2334B90", VA = "0x182336590")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6005272")]
	[Address(RVA = "0x2336620", Offset = "0x2334C20", VA = "0x182336620")]
	public float GetCooldownRatio()
	{
		return default(float);
	}
}
