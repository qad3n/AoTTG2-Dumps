using Characters;
using Il2CppDummyDll;

namespace Assets.Scripts.Characters.Human.Perks;

[Token(Token = "0x20006CA")]
internal class PowerPerk : BasePerk
{
	[Token(Token = "0x40020D6")]
	[FieldOffset(Offset = "0x20")]
	protected float _currentPower;

	[Token(Token = "0x40020D7")]
	[FieldOffset(Offset = "0x24")]
	protected float _lastUpdateTime;

	[Token(Token = "0x40020D8")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x17000D24")]
	public bool PerkEnabled
	{
		[Token(Token = "0x600439B")]
		[Address(RVA = "0x404E310", Offset = "0x404E310", VA = "0x404E310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D25")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x600439C")]
		[Address(RVA = "0x404E330", Offset = "0x404E330", VA = "0x404E330", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D26")]
	protected virtual float MinPower
	{
		[Token(Token = "0x600439D")]
		[Address(RVA = "0x404E340", Offset = "0x404E340", VA = "0x404E340", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D27")]
	protected virtual float PowerCost
	{
		[Token(Token = "0x600439E")]
		[Address(RVA = "0x404E350", Offset = "0x404E350", VA = "0x404E350", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D28")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x600439F")]
		[Address(RVA = "0x404E360", Offset = "0x404E360", VA = "0x404E360", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D29")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x60043A0")]
		[Address(RVA = "0x404E370", Offset = "0x404E370", VA = "0x404E370", Slot = "13")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60043A1")]
	[Address(RVA = "0x404E380", Offset = "0x404E380", VA = "0x404E380")]
	public PowerPerk()
	{
	}

	[Token(Token = "0x60043A2")]
	[Address(RVA = "0x404E3C0", Offset = "0x404E3C0", VA = "0x404E3C0", Slot = "14")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60043A3")]
	[Address(RVA = "0x404E3F0", Offset = "0x404E3F0", VA = "0x404E3F0")]
	public float GetCurrentPower()
	{
		return default(float);
	}

	[Token(Token = "0x60043A4")]
	[Address(RVA = "0x404E590", Offset = "0x404E590", VA = "0x404E590")]
	public void SetCurrentPower(float power)
	{
	}

	[Token(Token = "0x60043A5")]
	[Address(RVA = "0x404E600", Offset = "0x404E600", VA = "0x404E600")]
	public void RecoverPower(float amount)
	{
	}

	[Token(Token = "0x60043A6")]
	[Address(RVA = "0x404E670", Offset = "0x404E670", VA = "0x404E670")]
	public void RecoverPowerBySeconds(float seconds)
	{
	}

	[Token(Token = "0x60043A7")]
	[Address(RVA = "0x404E700", Offset = "0x404E700", VA = "0x404E700")]
	public float GetPowerRatio()
	{
		return default(float);
	}

	[Token(Token = "0x60043A8")]
	[Address(RVA = "0x404E4C0", Offset = "0x404E4C0", VA = "0x404E4C0")]
	protected void UpdatePower()
	{
	}

	[Token(Token = "0x60043A9")]
	[Address(RVA = "0x404E880", Offset = "0x404E880", VA = "0x404E880", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		return default(float);
	}

	[Token(Token = "0x60043AA")]
	[Address(RVA = "0x404E8A0", Offset = "0x404E8A0", VA = "0x404E8A0", Slot = "16")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60043AB")]
	[Address(RVA = "0x404E9C0", Offset = "0x404E9C0", VA = "0x404E9C0", Slot = "17")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x60043AC")]
	[Address(RVA = "0x404EB20", Offset = "0x404EB20", VA = "0x404EB20")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x60043AD")]
	[Address(RVA = "0x404EB70", Offset = "0x404EB70", VA = "0x404EB70")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x60043AE")]
	[Address(RVA = "0x404EBE0", Offset = "0x404EBE0", VA = "0x404EBE0")]
	public float GetCooldownRatio()
	{
		return default(float);
	}
}
