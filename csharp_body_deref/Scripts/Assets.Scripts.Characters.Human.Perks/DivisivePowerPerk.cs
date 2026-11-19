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

[Token(Token = "0x2000902")]
internal class DivisivePowerPerk : BasePerk
{
	[Token(Token = "0x4002D97")]
	[FieldOffset(Offset = "0x20")]
	protected float _currentPower;

	[Token(Token = "0x4002D98")]
	[FieldOffset(Offset = "0x24")]
	protected float _lastUpdateTime;

	[Token(Token = "0x4002D99")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x17000ED8")]
	public bool PerkEnabled
	{
		[Token(Token = "0x6005586")]
		[Address(RVA = "0x5CDAD20", Offset = "0x5CD9D20", VA = "0x5CDAD20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000ED9")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x6005587")]
		[Address(RVA = "0x5CDAD40", Offset = "0x5CD9D40", VA = "0x5CDAD40", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EDA")]
	protected virtual float MinPower
	{
		[Token(Token = "0x6005588")]
		[Address(RVA = "0x5CDAD50", Offset = "0x5CD9D50", VA = "0x5CDAD50", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EDB")]
	protected virtual float PowerUsageDivisor
	{
		[Token(Token = "0x6005589")]
		[Address(RVA = "0x5CDAD60", Offset = "0x5CD9D60", VA = "0x5CDAD60", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EDC")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x600558A")]
		[Address(RVA = "0x5CDAD70", Offset = "0x5CD9D70", VA = "0x5CDAD70", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EDD")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x600558B")]
		[Address(RVA = "0x5CDAD80", Offset = "0x5CD9D80", VA = "0x5CDAD80", Slot = "13")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600558C")]
	[Address(RVA = "0x5CDAD90", Offset = "0x5CD9D90", VA = "0x5CDAD90")]
	public DivisivePowerPerk()
	{
	}

	[Token(Token = "0x600558D")]
	[Address(RVA = "0x5CDADD0", Offset = "0x5CD9DD0", VA = "0x5CDADD0", Slot = "14")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600558E")]
	[Address(RVA = "0x5CDAE00", Offset = "0x5CD9E00", VA = "0x5CDAE00")]
	public float GetCurrentPower()
	{
		return default(float);
	}

	[Token(Token = "0x600558F")]
	[Address(RVA = "0x5CDAFA0", Offset = "0x5CD9FA0", VA = "0x5CDAFA0")]
	public void SetCurrentPower(float power)
	{
	}

	[Token(Token = "0x6005590")]
	[Address(RVA = "0x5CDB010", Offset = "0x5CDA010", VA = "0x5CDB010")]
	public void RecoverPower(float amount)
	{
	}

	[Token(Token = "0x6005591")]
	[Address(RVA = "0x5CDB080", Offset = "0x5CDA080", VA = "0x5CDB080")]
	public void RecoverPowerBySeconds(float seconds)
	{
	}

	[Token(Token = "0x6005592")]
	[Address(RVA = "0x5CDB110", Offset = "0x5CDA110", VA = "0x5CDB110")]
	public float GetPowerRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6005593")]
	[Address(RVA = "0x5CDAED0", Offset = "0x5CD9ED0", VA = "0x5CDAED0")]
	protected void UpdatePower()
	{
	}

	[Token(Token = "0x6005594")]
	[Address(RVA = "0x5CDB290", Offset = "0x5CDA290", VA = "0x5CDB290", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		return default(float);
	}

	[Token(Token = "0x6005595")]
	[Address(RVA = "0x5CDB2B0", Offset = "0x5CDA2B0", VA = "0x5CDB2B0", Slot = "16")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6005596")]
	[Address(RVA = "0x5CDB410", Offset = "0x5CDA410", VA = "0x5CDB410", Slot = "17")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x6005597")]
	[Address(RVA = "0x5CDB570", Offset = "0x5CDA570", VA = "0x5CDB570", Slot = "18")]
	public virtual void OnUse(float percent)
	{
	}

	[Token(Token = "0x6005598")]
	[Address(RVA = "0x5CDB6E0", Offset = "0x5CDA6E0", VA = "0x5CDB6E0")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6005599")]
	[Address(RVA = "0x5CDB730", Offset = "0x5CDA730", VA = "0x5CDB730")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x600559A")]
	[Address(RVA = "0x5CDB7A0", Offset = "0x5CDA7A0", VA = "0x5CDB7A0")]
	public float GetCooldownRatio()
	{
		return default(float);
	}
}
