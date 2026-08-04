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

[Token(Token = "0x2000718")]
internal class PowerPerk : BasePerk
{
	[Token(Token = "0x4002233")]
	[FieldOffset(Offset = "0x20")]
	protected float _currentPower;

	[Token(Token = "0x4002234")]
	[FieldOffset(Offset = "0x24")]
	protected float _lastUpdateTime;

	[Token(Token = "0x4002235")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x17000D9E")]
	public bool PerkEnabled
	{
		[Token(Token = "0x6004603")]
		[Address(RVA = "0x4381320", Offset = "0x4381320", VA = "0x4381320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D9F")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x6004604")]
		[Address(RVA = "0x4381340", Offset = "0x4381340", VA = "0x4381340", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DA0")]
	protected virtual float MinPower
	{
		[Token(Token = "0x6004605")]
		[Address(RVA = "0x4381350", Offset = "0x4381350", VA = "0x4381350", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DA1")]
	protected virtual float PowerCost
	{
		[Token(Token = "0x6004606")]
		[Address(RVA = "0x4381360", Offset = "0x4381360", VA = "0x4381360", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DA2")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x6004607")]
		[Address(RVA = "0x4381370", Offset = "0x4381370", VA = "0x4381370", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DA3")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x6004608")]
		[Address(RVA = "0x4381380", Offset = "0x4381380", VA = "0x4381380", Slot = "13")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004609")]
	[Address(RVA = "0x4381390", Offset = "0x4381390", VA = "0x4381390")]
	public PowerPerk()
	{
	}

	[Token(Token = "0x600460A")]
	[Address(RVA = "0x43813D0", Offset = "0x43813D0", VA = "0x43813D0", Slot = "14")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600460B")]
	[Address(RVA = "0x4381400", Offset = "0x4381400", VA = "0x4381400")]
	public float GetCurrentPower()
	{
		return default(float);
	}

	[Token(Token = "0x600460C")]
	[Address(RVA = "0x43815A0", Offset = "0x43815A0", VA = "0x43815A0")]
	public void SetCurrentPower(float power)
	{
	}

	[Token(Token = "0x600460D")]
	[Address(RVA = "0x4381610", Offset = "0x4381610", VA = "0x4381610")]
	public void RecoverPower(float amount)
	{
	}

	[Token(Token = "0x600460E")]
	[Address(RVA = "0x4381680", Offset = "0x4381680", VA = "0x4381680")]
	public void RecoverPowerBySeconds(float seconds)
	{
	}

	[Token(Token = "0x600460F")]
	[Address(RVA = "0x4381710", Offset = "0x4381710", VA = "0x4381710")]
	public float GetPowerRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6004610")]
	[Address(RVA = "0x43814D0", Offset = "0x43814D0", VA = "0x43814D0")]
	protected void UpdatePower()
	{
	}

	[Token(Token = "0x6004611")]
	[Address(RVA = "0x4381890", Offset = "0x4381890", VA = "0x4381890", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		return default(float);
	}

	[Token(Token = "0x6004612")]
	[Address(RVA = "0x43818B0", Offset = "0x43818B0", VA = "0x43818B0", Slot = "16")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004613")]
	[Address(RVA = "0x43819D0", Offset = "0x43819D0", VA = "0x43819D0", Slot = "17")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x6004614")]
	[Address(RVA = "0x4381B30", Offset = "0x4381B30", VA = "0x4381B30")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6004615")]
	[Address(RVA = "0x4381B80", Offset = "0x4381B80", VA = "0x4381B80")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6004616")]
	[Address(RVA = "0x4381BF0", Offset = "0x4381BF0", VA = "0x4381BF0")]
	public float GetCooldownRatio()
	{
		return default(float);
	}
}
