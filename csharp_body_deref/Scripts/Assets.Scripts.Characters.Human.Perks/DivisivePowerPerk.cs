using Characters;
using Il2CppDummyDll;

namespace Assets.Scripts.Characters.Human.Perks;

[Token(Token = "0x20006C9")]
internal class DivisivePowerPerk : BasePerk
{
	[Token(Token = "0x40020D3")]
	[FieldOffset(Offset = "0x20")]
	protected float _currentPower;

	[Token(Token = "0x40020D4")]
	[FieldOffset(Offset = "0x24")]
	protected float _lastUpdateTime;

	[Token(Token = "0x40020D5")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x17000D1E")]
	public bool PerkEnabled
	{
		[Token(Token = "0x6004386")]
		[Address(RVA = "0x404D800", Offset = "0x404D800", VA = "0x404D800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D1F")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x6004387")]
		[Address(RVA = "0x404D820", Offset = "0x404D820", VA = "0x404D820", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D20")]
	protected virtual float MinPower
	{
		[Token(Token = "0x6004388")]
		[Address(RVA = "0x404D830", Offset = "0x404D830", VA = "0x404D830", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D21")]
	protected virtual float PowerUsageDivisor
	{
		[Token(Token = "0x6004389")]
		[Address(RVA = "0x404D840", Offset = "0x404D840", VA = "0x404D840", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D22")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x600438A")]
		[Address(RVA = "0x404D850", Offset = "0x404D850", VA = "0x404D850", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D23")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x600438B")]
		[Address(RVA = "0x404D860", Offset = "0x404D860", VA = "0x404D860", Slot = "13")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600438C")]
	[Address(RVA = "0x404D870", Offset = "0x404D870", VA = "0x404D870")]
	public DivisivePowerPerk()
	{
	}

	[Token(Token = "0x600438D")]
	[Address(RVA = "0x404D8B0", Offset = "0x404D8B0", VA = "0x404D8B0", Slot = "14")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600438E")]
	[Address(RVA = "0x404D8E0", Offset = "0x404D8E0", VA = "0x404D8E0")]
	public float GetCurrentPower()
	{
		return default(float);
	}

	[Token(Token = "0x600438F")]
	[Address(RVA = "0x404DA80", Offset = "0x404DA80", VA = "0x404DA80")]
	public void SetCurrentPower(float power)
	{
	}

	[Token(Token = "0x6004390")]
	[Address(RVA = "0x404DAF0", Offset = "0x404DAF0", VA = "0x404DAF0")]
	public void RecoverPower(float amount)
	{
	}

	[Token(Token = "0x6004391")]
	[Address(RVA = "0x404DB60", Offset = "0x404DB60", VA = "0x404DB60")]
	public void RecoverPowerBySeconds(float seconds)
	{
	}

	[Token(Token = "0x6004392")]
	[Address(RVA = "0x404DBF0", Offset = "0x404DBF0", VA = "0x404DBF0")]
	public float GetPowerRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6004393")]
	[Address(RVA = "0x404D9B0", Offset = "0x404D9B0", VA = "0x404D9B0")]
	protected void UpdatePower()
	{
	}

	[Token(Token = "0x6004394")]
	[Address(RVA = "0x404DD70", Offset = "0x404DD70", VA = "0x404DD70", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		return default(float);
	}

	[Token(Token = "0x6004395")]
	[Address(RVA = "0x404DD90", Offset = "0x404DD90", VA = "0x404DD90", Slot = "16")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004396")]
	[Address(RVA = "0x404DEF0", Offset = "0x404DEF0", VA = "0x404DEF0", Slot = "17")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x6004397")]
	[Address(RVA = "0x404E050", Offset = "0x404E050", VA = "0x404E050", Slot = "18")]
	public virtual void OnUse(float percent)
	{
	}

	[Token(Token = "0x6004398")]
	[Address(RVA = "0x404E1C0", Offset = "0x404E1C0", VA = "0x404E1C0")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6004399")]
	[Address(RVA = "0x404E210", Offset = "0x404E210", VA = "0x404E210")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x600439A")]
	[Address(RVA = "0x404E280", Offset = "0x404E280", VA = "0x404E280")]
	public float GetCooldownRatio()
	{
		return default(float);
	}
}
