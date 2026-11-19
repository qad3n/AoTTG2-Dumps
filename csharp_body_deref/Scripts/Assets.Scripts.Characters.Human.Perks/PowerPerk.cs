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

[Token(Token = "0x2000903")]
internal class PowerPerk : BasePerk
{
	[Token(Token = "0x4002D9A")]
	[FieldOffset(Offset = "0x20")]
	protected float _currentPower;

	[Token(Token = "0x4002D9B")]
	[FieldOffset(Offset = "0x24")]
	protected float _lastUpdateTime;

	[Token(Token = "0x4002D9C")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x17000EDE")]
	public bool PerkEnabled
	{
		[Token(Token = "0x600559B")]
		[Address(RVA = "0x5CDB820", Offset = "0x5CDA820", VA = "0x5CDB820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EDF")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x600559C")]
		[Address(RVA = "0x5CDB840", Offset = "0x5CDA840", VA = "0x5CDB840", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EE0")]
	protected virtual float MinPower
	{
		[Token(Token = "0x600559D")]
		[Address(RVA = "0x5CDB850", Offset = "0x5CDA850", VA = "0x5CDB850", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EE1")]
	protected virtual float PowerCost
	{
		[Token(Token = "0x600559E")]
		[Address(RVA = "0x5CDB860", Offset = "0x5CDA860", VA = "0x5CDB860", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EE2")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x600559F")]
		[Address(RVA = "0x5CDB870", Offset = "0x5CDA870", VA = "0x5CDB870", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EE3")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x60055A0")]
		[Address(RVA = "0x5CDB880", Offset = "0x5CDA880", VA = "0x5CDB880", Slot = "13")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60055A1")]
	[Address(RVA = "0x5CDB890", Offset = "0x5CDA890", VA = "0x5CDB890")]
	public PowerPerk()
	{
	}

	[Token(Token = "0x60055A2")]
	[Address(RVA = "0x5CDB8D0", Offset = "0x5CDA8D0", VA = "0x5CDB8D0", Slot = "14")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60055A3")]
	[Address(RVA = "0x5CDB900", Offset = "0x5CDA900", VA = "0x5CDB900")]
	public float GetCurrentPower()
	{
		return default(float);
	}

	[Token(Token = "0x60055A4")]
	[Address(RVA = "0x5CDBAA0", Offset = "0x5CDAAA0", VA = "0x5CDBAA0")]
	public void SetCurrentPower(float power)
	{
	}

	[Token(Token = "0x60055A5")]
	[Address(RVA = "0x5CDBB10", Offset = "0x5CDAB10", VA = "0x5CDBB10")]
	public void RecoverPower(float amount)
	{
	}

	[Token(Token = "0x60055A6")]
	[Address(RVA = "0x5CDBB80", Offset = "0x5CDAB80", VA = "0x5CDBB80")]
	public void RecoverPowerBySeconds(float seconds)
	{
	}

	[Token(Token = "0x60055A7")]
	[Address(RVA = "0x5CDBC10", Offset = "0x5CDAC10", VA = "0x5CDBC10")]
	public float GetPowerRatio()
	{
		return default(float);
	}

	[Token(Token = "0x60055A8")]
	[Address(RVA = "0x5CDB9D0", Offset = "0x5CDA9D0", VA = "0x5CDB9D0")]
	protected void UpdatePower()
	{
	}

	[Token(Token = "0x60055A9")]
	[Address(RVA = "0x5CDBD90", Offset = "0x5CDAD90", VA = "0x5CDBD90", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		return default(float);
	}

	[Token(Token = "0x60055AA")]
	[Address(RVA = "0x5CDBDB0", Offset = "0x5CDADB0", VA = "0x5CDBDB0", Slot = "16")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60055AB")]
	[Address(RVA = "0x5CDBED0", Offset = "0x5CDAED0", VA = "0x5CDBED0", Slot = "17")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x60055AC")]
	[Address(RVA = "0x5CDC030", Offset = "0x5CDB030", VA = "0x5CDC030")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x60055AD")]
	[Address(RVA = "0x5CDC080", Offset = "0x5CDB080", VA = "0x5CDC080")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x60055AE")]
	[Address(RVA = "0x5CDC0F0", Offset = "0x5CDB0F0", VA = "0x5CDC0F0")]
	public float GetCooldownRatio()
	{
		return default(float);
	}
}
