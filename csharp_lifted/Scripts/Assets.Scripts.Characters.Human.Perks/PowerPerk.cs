// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.Characters.Human.Perks.PowerPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$get_PerkEnabled): clean
			int iVar1;
			int iVar2;

			iVar1 = this.CurrPoints;
			iVar2 = this.get_MaxPoints();
			return iVar1 == iVar2;
		}
	}

	[Token(Token = "0x17000EDF")]
	protected virtual float MaxPower
	{
		[Token(Token = "0x600559C")]
		[Address(RVA = "0x5CDB840", Offset = "0x5CDA840", VA = "0x5CDB840", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$get_MaxPower): clean
			return 100.0;
		}
	}

	[Token(Token = "0x17000EE0")]
	protected virtual float MinPower
	{
		[Token(Token = "0x600559D")]
		[Address(RVA = "0x5CDB850", Offset = "0x5CDA850", VA = "0x5CDB850", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$get_MinPower): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000EE1")]
	protected virtual float PowerCost
	{
		[Token(Token = "0x600559E")]
		[Address(RVA = "0x5CDB860", Offset = "0x5CDA860", VA = "0x5CDB860", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$get_PowerCost): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000EE2")]
	protected virtual float LinearRecoveryRate
	{
		[Token(Token = "0x600559F")]
		[Address(RVA = "0x5CDB870", Offset = "0x5CDA870", VA = "0x5CDB870", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$get_LinearRecoveryRate): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000EE3")]
	protected virtual float Cooldown
	{
		[Token(Token = "0x60055A0")]
		[Address(RVA = "0x5CDB880", Offset = "0x5CDA880", VA = "0x5CDB880", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$get_Cooldown): clean
			return 0.0;
		}
	}

	[Token(Token = "0x60055A1")]
	[Address(RVA = "0x5CDB890", Offset = "0x5CDA890", VA = "0x5CDB890")]
	public PowerPerk()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$.ctor): clean
		float fVar1;

		this._lastUseTime = -1000.0;
		base();
		fVar1 = this.get_MaxPower();
		this._currentPower = fVar1;
		fVar1 = Time.time;
		this._lastUpdateTime = fVar1;
		return;
	}

	[Token(Token = "0x60055A2")]
	[Address(RVA = "0x5CDB8D0", Offset = "0x5CDA8D0", VA = "0x5CDB8D0", Slot = "14")]
	public virtual void Reset()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$Reset): clean
		float fVar1;

		fVar1 = this.get_MaxPower();
		this._currentPower = fVar1;
		fVar1 = Time.time;
		this._lastUpdateTime = fVar1;
		return;
	}

	[Token(Token = "0x60055A3")]
	[Address(RVA = "0x5CDB900", Offset = "0x5CDA900", VA = "0x5CDB900")]
	public float GetCurrentPower()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$GetCurrentPower): clean
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

	[Token(Token = "0x60055A4")]
	[Address(RVA = "0x5CDBAA0", Offset = "0x5CDAAA0", VA = "0x5CDBAA0")]
	public void SetCurrentPower(float power)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$SetCurrentPower): clean
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

	[Token(Token = "0x60055A5")]
	[Address(RVA = "0x5CDBB10", Offset = "0x5CDAB10", VA = "0x5CDBB10")]
	public void RecoverPower(float amount)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$RecoverPower): clean
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

	[Token(Token = "0x60055A6")]
	[Address(RVA = "0x5CDBB80", Offset = "0x5CDAB80", VA = "0x5CDBB80")]
	public void RecoverPowerBySeconds(float seconds)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$RecoverPowerBySeconds): clean
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

	[Token(Token = "0x60055A7")]
	[Address(RVA = "0x5CDBC10", Offset = "0x5CDAC10", VA = "0x5CDBC10")]
	public float GetPowerRatio()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$GetPowerRatio): clean
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

	[Token(Token = "0x60055A8")]
	[Address(RVA = "0x5CDB9D0", Offset = "0x5CDA9D0", VA = "0x5CDB9D0")]
	protected void UpdatePower()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$UpdatePower): clean
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

	[Token(Token = "0x60055A9")]
	[Address(RVA = "0x5CDBD90", Offset = "0x5CDAD90", VA = "0x5CDBD90", Slot = "15")]
	protected virtual float GetRecoveryAmount(float deltaTime)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$GetRecoveryAmount): clean
		float fVar1;

		fVar1 = this.get_LinearRecoveryRate();
		return fVar1 * deltaTime;
	}

	[Token(Token = "0x60055AA")]
	[Address(RVA = "0x5CDBDB0", Offset = "0x5CDADB0", VA = "0x5CDBDB0", Slot = "16")]
	public virtual bool CanUse()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$CanUse): clean
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
		fVar1 = this.get_Cooldown();
		if ((fVar1 == 0.0) && (!NAN(fVar1))) {
			return true;
		}
		fVar3 = Time.time;
		fVar1 = this._lastUseTime;
		fVar2 = this.get_Cooldown();
		return fVar2 <= fVar3 - fVar1;
	}

	[Token(Token = "0x60055AB")]
	[Address(RVA = "0x5CDBED0", Offset = "0x5CDAED0", VA = "0x5CDBED0", Slot = "17")]
	public virtual void OnUse()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$OnUse): clean
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
		fVar2 = this.get_PowerCost();
		fVar4 = this.get_MinPower();
		fVar3 = this.get_MaxPower();
		fVar1 = fVar1 - fVar2;
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

	[Token(Token = "0x60055AC")]
	[Address(RVA = "0x5CDC030", Offset = "0x5CDB030", VA = "0x5CDC030")]
	public void SetCooldownLeft(float cooldownLeft)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$SetCooldownLeft): clean
		float fVar1;
		float fVar2;

		fVar1 = Time.time;
		fVar2 = this.get_Cooldown();
		this._lastUseTime = (fVar1 - fVar2) + cooldownLeft;
		return;
	}

	[Token(Token = "0x60055AD")]
	[Address(RVA = "0x5CDC080", Offset = "0x5CDB080", VA = "0x5CDC080")]
	public float GetCooldownLeft()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$GetCooldownLeft): clean
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

	[Token(Token = "0x60055AE")]
	[Address(RVA = "0x5CDC0F0", Offset = "0x5CDB0F0", VA = "0x5CDC0F0")]
	public float GetCooldownRatio()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/PowerPerk.c (Assets.Scripts.Characters.Human.Perks.PowerPerk$$GetCooldownRatio): clean
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
