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

[Token(Token = "0x2000717")]
internal class DivisivePowerPerk : BasePerk
{
	[Token(Token = "0x4002230")]
	[FieldOffset(Offset = "0x20")]
	protected float _currentPower;

	[Token(Token = "0x4002231")]
	[FieldOffset(Offset = "0x24")]
	protected float _lastUpdateTime;

	[Token(Token = "0x4002232")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x17000D98")]
	public bool PerkEnabled
	{
		[Token(Token = "0x60045EE")]
		[Address(RVA = "0x4380810", Offset = "0x4380810", VA = "0x4380810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D99")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x60045EF")]
		[Address(RVA = "0x4380830", Offset = "0x4380830", VA = "0x4380830", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D9A")]
	protected virtual float MinPower
	{
		[Token(Token = "0x60045F0")]
		[Address(RVA = "0x4380840", Offset = "0x4380840", VA = "0x4380840", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D9B")]
	protected virtual float PowerUsageDivisor
	{
		[Token(Token = "0x60045F1")]
		[Address(RVA = "0x4380850", Offset = "0x4380850", VA = "0x4380850", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D9C")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x60045F2")]
		[Address(RVA = "0x4380860", Offset = "0x4380860", VA = "0x4380860", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D9D")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x60045F3")]
		[Address(RVA = "0x4380870", Offset = "0x4380870", VA = "0x4380870", Slot = "13")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60045F4")]
	[Address(RVA = "0x4380880", Offset = "0x4380880", VA = "0x4380880")]
	public DivisivePowerPerk()
	{
	}

	[Token(Token = "0x60045F5")]
	[Address(RVA = "0x43808C0", Offset = "0x43808C0", VA = "0x43808C0", Slot = "14")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60045F6")]
	[Address(RVA = "0x43808F0", Offset = "0x43808F0", VA = "0x43808F0")]
	public float GetCurrentPower()
	{
		return default(float);
	}

	[Token(Token = "0x60045F7")]
	[Address(RVA = "0x4380A90", Offset = "0x4380A90", VA = "0x4380A90")]
	public void SetCurrentPower(float power)
	{
	}

	[Token(Token = "0x60045F8")]
	[Address(RVA = "0x4380B00", Offset = "0x4380B00", VA = "0x4380B00")]
	public void RecoverPower(float amount)
	{
	}

	[Token(Token = "0x60045F9")]
	[Address(RVA = "0x4380B70", Offset = "0x4380B70", VA = "0x4380B70")]
	public void RecoverPowerBySeconds(float seconds)
	{
	}

	[Token(Token = "0x60045FA")]
	[Address(RVA = "0x4380C00", Offset = "0x4380C00", VA = "0x4380C00")]
	public float GetPowerRatio()
	{
		return default(float);
	}

	[Token(Token = "0x60045FB")]
	[Address(RVA = "0x43809C0", Offset = "0x43809C0", VA = "0x43809C0")]
	protected void UpdatePower()
	{
	}

	[Token(Token = "0x60045FC")]
	[Address(RVA = "0x4380D80", Offset = "0x4380D80", VA = "0x4380D80", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		return default(float);
	}

	[Token(Token = "0x60045FD")]
	[Address(RVA = "0x4380DA0", Offset = "0x4380DA0", VA = "0x4380DA0", Slot = "16")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60045FE")]
	[Address(RVA = "0x4380F00", Offset = "0x4380F00", VA = "0x4380F00", Slot = "17")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x60045FF")]
	[Address(RVA = "0x4381060", Offset = "0x4381060", VA = "0x4381060", Slot = "18")]
	public virtual void OnUse(float percent)
	{
	}

	[Token(Token = "0x6004600")]
	[Address(RVA = "0x43811D0", Offset = "0x43811D0", VA = "0x43811D0")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6004601")]
	[Address(RVA = "0x4381220", Offset = "0x4381220", VA = "0x4381220")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6004602")]
	[Address(RVA = "0x4381290", Offset = "0x4381290", VA = "0x4381290")]
	public float GetCooldownRatio()
	{
		return default(float);
	}
}
