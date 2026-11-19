// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.Characters.Human.Perks.CDPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;

namespace Assets.Scripts.Characters.Human.Perks;

[Token(Token = "0x2000901")]
internal class CDPerk : BasePerk
{
	[Token(Token = "0x4002D96")]
	[FieldOffset(Offset = "0x20")]
	protected float _lastUseTime;

	[Token(Token = "0x17000ED6")]
	public bool PerkEnabled
	{
		[Token(Token = "0x600557D")]
		[Address(RVA = "0x5CDABE0", Offset = "0x5CD9BE0", VA = "0x5CDABE0")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c (Assets.Scripts.Characters.Human.Perks.CDPerk$$get_PerkEnabled): clean
			int iVar1;
			int iVar2;

			iVar1 = this.CurrPoints;
			iVar2 = this.get_MaxPoints();
			return iVar1 == iVar2;
		}
	}

	[Token(Token = "0x17000ED7")]
	public float Cooldown
	{
		[Token(Token = "0x600557E")]
		[Address(RVA = "0x5CDAC00", Offset = "0x5CD9C00", VA = "0x5CDAC00")]
		get
		{
			// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c (Assets.Scripts.Characters.Human.Perks.CDPerk$$get_Cooldown): clean
			return 3.5;
		}
	}

	[Token(Token = "0x600557F")]
	[Address(RVA = "0x5CDAC10", Offset = "0x5CD9C10", VA = "0x5CDAC10", Slot = "9")]
	public virtual void Reset()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c (Assets.Scripts.Characters.Human.Perks.CDPerk$$Reset): clean
		return;
	}

	[Token(Token = "0x6005580")]
	[Address(RVA = "0x5CDAC20", Offset = "0x5CD9C20", VA = "0x5CDAC20")]
	public void SetCooldownLeft(float cooldownLeft)
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c (Assets.Scripts.Characters.Human.Perks.CDPerk$$SetCooldownLeft): clean
		float fVar1;

		fVar1 = Time.time;
		this._lastUseTime = fVar1 + -3.5 + cooldownLeft;
		return;
	}

	[Token(Token = "0x6005581")]
	[Address(RVA = "0x5CDAC50", Offset = "0x5CD9C50", VA = "0x5CDAC50")]
	public float GetCooldownLeft()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c (Assets.Scripts.Characters.Human.Perks.CDPerk$$GetCooldownLeft): clean
		float fVar1;
		float fVar2;

		fVar1 = Time.time;
		fVar2 = (this._lastUseTime - fVar1) + 3.5;
		fVar1 = 3.5;
		if (fVar2 <= 3.5) {
			fVar1 = fVar2;
		}
		return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
	}

	[Token(Token = "0x6005582")]
	[Address(RVA = "0x5CDAC90", Offset = "0x5CD9C90", VA = "0x5CDAC90")]
	public float GetCooldownRatio()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c (Assets.Scripts.Characters.Human.Perks.CDPerk$$GetCooldownRatio): clean
		float fVar1;
		float fVar2;

		fVar1 = Time.time;
		fVar2 = (fVar1 - this._lastUseTime) / 3.5;
		fVar1 = 1.0;
		if (fVar2 <= 1.0) {
			fVar1 = fVar2;
		}
		return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
	}

	[Token(Token = "0x6005583")]
	[Address(RVA = "0x5CDACD0", Offset = "0x5CD9CD0", VA = "0x5CDACD0", Slot = "10")]
	public virtual bool CanUse()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c (Assets.Scripts.Characters.Human.Perks.CDPerk$$CanUse): clean
		float fVar1;

		fVar1 = Time.time;
		return 3.5 <= fVar1 - this._lastUseTime;
	}

	[Token(Token = "0x6005584")]
	[Address(RVA = "0x5CDACF0", Offset = "0x5CD9CF0", VA = "0x5CDACF0", Slot = "11")]
	public virtual void OnUse()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c (Assets.Scripts.Characters.Human.Perks.CDPerk$$OnUse): clean
		float fVar1;

		fVar1 = Time.time;
		this._lastUseTime = fVar1;
		return;
	}

	[Token(Token = "0x6005585")]
	[Address(RVA = "0x5CDAD10", Offset = "0x5CD9D10", VA = "0x5CDAD10")]
	public CDPerk()
	{
		// Lifted from source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c (Assets.Scripts.Characters.Human.Perks.CDPerk$$.ctor): clean
		this._lastUseTime = -1000.0;
		base();
		return;
	}
}
