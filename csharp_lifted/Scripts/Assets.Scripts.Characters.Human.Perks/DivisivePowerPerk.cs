// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_PerkEnabled): clean
			int iVar1;
			int iVar2;

			iVar1 = this.CurrPoints;
			iVar2 = this.get_MaxPoints();
			return iVar1 == iVar2;
		}
	}

	[Token(Token = "0x17000ED9")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x6005587")]
		[Address(RVA = "0x5CDAD40", Offset = "0x5CD9D40", VA = "0x5CDAD40", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_MaxPower): clean
			return 1.0;
		}
	}

	[Token(Token = "0x17000EDA")]
	protected virtual float MinPower
	{
		[Token(Token = "0x6005588")]
		[Address(RVA = "0x5CDAD50", Offset = "0x5CD9D50", VA = "0x5CDAD50", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_MinPower): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000EDB")]
	protected virtual float PowerUsageDivisor
	{
		[Token(Token = "0x6005589")]
		[Address(RVA = "0x5CDAD60", Offset = "0x5CD9D60", VA = "0x5CDAD60", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_PowerUsageDivisor): clean
			return 2.0;
		}
	}

	[Token(Token = "0x17000EDC")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x600558A")]
		[Address(RVA = "0x5CDAD70", Offset = "0x5CD9D70", VA = "0x5CDAD70", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_LinearRecoveryRate): clean
			return 0.1;
		}
	}

	[Token(Token = "0x17000EDD")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x600558B")]
		[Address(RVA = "0x5CDAD80", Offset = "0x5CD9D80", VA = "0x5CDAD80", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_Cooldown): clean
			return 0.0;
		}
	}

	[Token(Token = "0x600558C")]
	[Address(RVA = "0x5CDAD90", Offset = "0x5CD9D90", VA = "0x5CDAD90")]
	public DivisivePowerPerk()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$.ctor): clean
		float fVar1;

		this._lastUseTime = -1000.0;
		base();
		fVar1 = this.get_MaxPower();
		this._currentPower = fVar1;
		fVar1 = Time.time;
		this._lastUpdateTime = fVar1;
		return;
	}

	[Token(Token = "0x600558D")]
	[Address(RVA = "0x5CDADD0", Offset = "0x5CD9DD0", VA = "0x5CDADD0", Slot = "14")]
	public virtual void Reset()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$Reset): clean
		float fVar1;

		fVar1 = this.get_MaxPower();
		this._currentPower = fVar1;
		fVar1 = Time.time;
		this._lastUpdateTime = fVar1;
		return;
	}

	[Token(Token = "0x600558E")]
	[Address(RVA = "0x5CDAE00", Offset = "0x5CD9E00", VA = "0x5CDAE00")]
	public float GetCurrentPower()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetCurrentPower): clean
		float fVar1;
		float fVar2;
		float fVar3;

		fVar1 = Time.time;
		fVar1 = fVar1 - this._lastUpdateTime;
		if (0.0 < fVar1) {
			fVar3 = this._currentPower;
			fVar2 = this.get_MaxPower();
			if (fVar3 < fVar2) {
				fVar3 = this.GetRecoveryAmount(fVar1);
				fVar3 = fVar3 + this._currentPower;
				fVar2 = this.get_MinPower();
				fVar1 = this.get_MaxPower();
				if (fVar3 <= fVar1) {
					fVar1 = fVar3;
				}
				this._currentPower =(float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
				fVar1 = Time.time;
				this._lastUpdateTime = fVar1;
			}
		}
		return this._currentPower;
	}

	[Token(Token = "0x600558F")]
	[Address(RVA = "0x5CDAFA0", Offset = "0x5CD9FA0", VA = "0x5CDAFA0")]
	public void SetCurrentPower(float power)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$SetCurrentPower): clean
		float fVar1;
		float fVar2;

		fVar1 = this.get_MinPower();
		fVar2 = this.get_MaxPower();
		if (power <= fVar2) {
			fVar2 = power;
		}
		this._currentPower =(float)(-(uint)(fVar1 <= power) & (uint)fVar2 | ~-(uint)(fVar1 <= power) & (uint)fVar1);
		fVar2 = Time.time;
		this._lastUpdateTime = fVar2;
		return;
	}

	[Token(Token = "0x6005590")]
	[Address(RVA = "0x5CDB010", Offset = "0x5CDA010", VA = "0x5CDB010")]
	public void RecoverPower(float amount)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$RecoverPower): clean
		float fVar1;
		float fVar2;
		float fVar3;

		fVar1 = amount + this._currentPower;
		fVar2 = this.get_MinPower();
		fVar3 = this.get_MaxPower();
		if (fVar1 <= fVar3) {
			fVar3 = fVar1;
		}
		this._currentPower =(float)(-(uint)(fVar2 <= fVar1) & (uint)fVar3 | ~-(uint)(fVar2 <= fVar1) & (uint)fVar2);
		fVar3 = Time.time;
		this._lastUpdateTime = fVar3;
		return;
	}

	[Token(Token = "0x6005591")]
	[Address(RVA = "0x5CDB080", Offset = "0x5CDA080", VA = "0x5CDB080")]
	public void RecoverPowerBySeconds(float seconds)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$RecoverPowerBySeconds): clean
		float fVar1;
		float fVar2;
		float fVar3;

		if (0.0 < seconds) {
			fVar1 = this.GetRecoveryAmount(seconds);
			fVar1 = fVar1 + this._currentPower;
			fVar2 = this.get_MinPower();
			fVar3 = this.get_MaxPower();
			if (fVar1 <= fVar3) {
				fVar3 = fVar1;
			}
			this._currentPower =(float)(~-(uint)(fVar2 <= fVar1) & (uint)fVar2 | (uint)fVar3 & -(uint)(fVar2 <= fVar1));
			fVar3 = Time.time;
			this._lastUpdateTime = fVar3;
		}
		return;
	}

	[Token(Token = "0x6005592")]
	[Address(RVA = "0x5CDB110", Offset = "0x5CDA110", VA = "0x5CDB110")]
	public float GetPowerRatio()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetPowerRatio): clean
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;

		fVar1 = Time.time;
		fVar1 = fVar1 - this._lastUpdateTime;
		if (0.0 < fVar1) {
			fVar3 = this._currentPower;
			fVar2 = this.get_MaxPower();
			if (fVar3 < fVar2) {
				fVar3 = this.GetRecoveryAmount(fVar1);
				fVar3 = fVar3 + this._currentPower;
				fVar2 = this.get_MinPower();
				fVar1 = this.get_MaxPower();
				if (fVar3 <= fVar1) {
					fVar1 = fVar3;
				}
				this._currentPower =(float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
				fVar1 = Time.time;
				this._lastUpdateTime = fVar1;
			}
		}
		fVar1 = this.get_MaxPower();
		fVar3 = this.get_MinPower();
		if ((fVar1 == fVar3) && (!NAN(fVar1) && !NAN(fVar3))) {
			return 1.0;
		}
		fVar1 = this._currentPower;
		fVar3 = this.get_MinPower();
		fVar2 = this.get_MaxPower();
		fVar4 = this.get_MinPower();
		return (fVar1 - fVar3) / (fVar2 - fVar4);
	}

	[Token(Token = "0x6005593")]
	[Address(RVA = "0x5CDAED0", Offset = "0x5CD9ED0", VA = "0x5CDAED0")]
	protected void UpdatePower()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$UpdatePower): clean
		float fVar1;
		float fVar2;
		float fVar3;

		fVar1 = Time.time;
		fVar1 = fVar1 - this._lastUpdateTime;
		if (0.0 < fVar1) {
			fVar3 = this._currentPower;
			fVar2 = this.get_MaxPower();
			if (fVar3 < fVar2) {
				fVar3 = this.GetRecoveryAmount(fVar1);
				fVar3 = fVar3 + this._currentPower;
				fVar2 = this.get_MinPower();
				fVar1 = this.get_MaxPower();
				if (fVar3 <= fVar1) {
					fVar1 = fVar3;
				}
				this._currentPower =(float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
				fVar1 = Time.time;
				this._lastUpdateTime = fVar1;
			}
		}
		return;
	}

	[Token(Token = "0x6005594")]
	[Address(RVA = "0x5CDB290", Offset = "0x5CDA290", VA = "0x5CDB290", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetRecoveryAmount): clean
		float fVar1;

		fVar1 = this.get_LinearRecoveryRate();
		return fVar1 * deltaTime;
	}

	[Token(Token = "0x6005595")]
	[Address(RVA = "0x5CDB2B0", Offset = "0x5CDA2B0", VA = "0x5CDB2B0", Slot = "16")]
	public virtual bool CanUse()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$CanUse): clean
		bool bVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;

		fVar2 = Time.time;
		fVar2 = fVar2 - this._lastUpdateTime;
		if (0.0 < fVar2) {
			fVar4 = this._currentPower;
			fVar3 = this.get_MaxPower();
			if (fVar4 < fVar3) {
				fVar4 = this.GetRecoveryAmount(fVar2);
				fVar4 = fVar4 + this._currentPower;
				fVar3 = this.get_MinPower();
				fVar2 = this.get_MaxPower();
				if (fVar4 <= fVar2) {
					fVar2 = fVar4;
				}
				this._currentPower =(float)(~-(uint)(fVar3 <= fVar4) & (uint)fVar3 | (uint)fVar2 & -(uint)(fVar3 <= fVar4));
				fVar2 = Time.time;
				this._lastUpdateTime = fVar2;
			}
		}
		fVar2 = this._currentPower;
		fVar4 = this.get_MinPower();
		fVar3 = this.get_Cooldown();
		bVar1 = true;
		if ((fVar3 != 0.0) || (NAN(fVar3))) {
			fVar5 = Time.time;
			fVar3 = this._lastUseTime;
			fVar6 = this.get_Cooldown();
			bVar1 = fVar6 <= fVar5 - fVar3;
		}
		return (bool)(fVar4 < fVar2 & bVar1);
	}

	[Token(Token = "0x6005596")]
	[Address(RVA = "0x5CDB410", Offset = "0x5CDA410", VA = "0x5CDB410", Slot = "17")]
	public virtual void OnUse()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$OnUse): clean
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;

		fVar1 = Time.time;
		fVar1 = fVar1 - this._lastUpdateTime;
		if (0.0 < fVar1) {
			fVar3 = this._currentPower;
			fVar2 = this.get_MaxPower();
			if (fVar3 < fVar2) {
				fVar3 = this.GetRecoveryAmount(fVar1);
				fVar3 = fVar3 + this._currentPower;
				fVar2 = this.get_MinPower();
				fVar1 = this.get_MaxPower();
				if (fVar3 <= fVar1) {
					fVar1 = fVar3;
				}
				this._currentPower =(float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
				fVar1 = Time.time;
				this._lastUpdateTime = fVar1;
			}
		}
		fVar1 = this._currentPower;
		fVar2 = this.get_PowerUsageDivisor();
		fVar4 = this.get_MinPower();
		fVar3 = this.get_MaxPower();
		fVar1 = fVar1 / fVar2;
		if (fVar1 <= fVar3) {
			fVar3 = fVar1;
		}
		this._currentPower =(float)(~-(uint)(fVar4 <= fVar1) & (uint)fVar4 | (uint)fVar3 & -(uint)(fVar4 <= fVar1));
		fVar1 = Time.time;
		this._lastUseTime = fVar1;
		fVar1 = Time.time;
		this._lastUpdateTime = fVar1;
		return;
	}

	[Token(Token = "0x6005597")]
	[Address(RVA = "0x5CDB570", Offset = "0x5CDA570", VA = "0x5CDB570", Slot = "18")]
	public virtual void OnUse(float percent)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$OnUse): clean
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;

		fVar1 = Time.time;
		fVar1 = fVar1 - this._lastUpdateTime;
		if (0.0 < fVar1) {
			fVar3 = this._currentPower;
			fVar2 = this.get_MaxPower();
			if (fVar3 < fVar2) {
				fVar3 = this.GetRecoveryAmount(fVar1);
				fVar3 = fVar3 + this._currentPower;
				fVar2 = this.get_MinPower();
				fVar1 = this.get_MaxPower();
				if (fVar3 <= fVar1) {
					fVar1 = fVar3;
				}
				this._currentPower =(float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
				fVar1 = Time.time;
				this._lastUpdateTime = fVar1;
			}
		}
		fVar1 = this._currentPower;
		fVar2 = this.get_MaxPower();
		fVar4 = this.get_MinPower();
		fVar3 = this.get_MaxPower();
		fVar1 = fVar1 - fVar2 * percent;
		if (fVar1 <= fVar3) {
			fVar3 = fVar1;
		}
		this._currentPower =(float)(~-(uint)(fVar4 <= fVar1) & (uint)fVar4 | (uint)fVar3 & -(uint)(fVar4 <= fVar1));
		fVar1 = Time.time;
		this._lastUseTime = fVar1;
		fVar1 = Time.time;
		this._lastUpdateTime = fVar1;
		return;
	}

	[Token(Token = "0x6005598")]
	[Address(RVA = "0x5CDB6E0", Offset = "0x5CDA6E0", VA = "0x5CDB6E0")]
	public void SetCooldownLeft(float cooldownLeft)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$SetCooldownLeft): clean
		float fVar1;
		float fVar2;

		fVar1 = Time.time;
		fVar2 = this.get_Cooldown();
		this._lastUseTime = (fVar1 - fVar2) + cooldownLeft;
		return;
	}

	[Token(Token = "0x6005599")]
	[Address(RVA = "0x5CDB730", Offset = "0x5CDA730", VA = "0x5CDB730")]
	public float GetCooldownLeft()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetCooldownLeft): clean
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;

		fVar2 = this.get_Cooldown();
		fVar3 = Time.time;
		fVar1 = this._lastUseTime;
		fVar4 = this.get_Cooldown();
		fVar2 = fVar2 - (fVar3 - fVar1);
		if (fVar2 <= fVar4) {
			fVar4 = fVar2;
		}
		return (float)((uint)fVar4 & -(uint)(0.0 <= fVar2));
	}

	[Token(Token = "0x600559A")]
	[Address(RVA = "0x5CDB7A0", Offset = "0x5CDA7A0", VA = "0x5CDB7A0")]
	public float GetCooldownRatio()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/DivisivePowerPerk.c (Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetCooldownRatio): clean
		float fVar1;
		float fVar2;
		float fVar3;

		fVar1 = this.get_Cooldown();
		if ((fVar1 == 0.0) && (!NAN(fVar1))) {
			return 1.0;
		}
		fVar2 = Time.time;
		fVar1 = this._lastUseTime;
		fVar3 = this.get_Cooldown();
		fVar3 = (fVar2 - fVar1) / fVar3;
		fVar1 = 1.0;
		if (fVar3 <= 1.0) {
			fVar1 = fVar3;
		}
		return (float)(-(uint)(0.0 <= fVar3) & (uint)fVar1);
	}
}
