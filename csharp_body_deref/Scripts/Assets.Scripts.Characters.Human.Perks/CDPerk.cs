// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.Characters.Human.Perks.CDPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/Characters/Human/Perks/CDPerk.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return default(bool);
		}
	}

	[Token(Token = "0x17000ED7")]
	public float Cooldown
	{
		[Token(Token = "0x600557E")]
		[Address(RVA = "0x5CDAC00", Offset = "0x5CD9C00", VA = "0x5CDAC00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600557F")]
	[Address(RVA = "0x5CDAC10", Offset = "0x5CD9C10", VA = "0x5CDAC10", Slot = "9")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6005580")]
	[Address(RVA = "0x5CDAC20", Offset = "0x5CD9C20", VA = "0x5CDAC20")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6005581")]
	[Address(RVA = "0x5CDAC50", Offset = "0x5CD9C50", VA = "0x5CDAC50")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6005582")]
	[Address(RVA = "0x5CDAC90", Offset = "0x5CD9C90", VA = "0x5CDAC90")]
	public float GetCooldownRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6005583")]
	[Address(RVA = "0x5CDACD0", Offset = "0x5CD9CD0", VA = "0x5CDACD0", Slot = "10")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6005584")]
	[Address(RVA = "0x5CDACF0", Offset = "0x5CD9CF0", VA = "0x5CDACF0", Slot = "11")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x6005585")]
	[Address(RVA = "0x5CDAD10", Offset = "0x5CD9D10", VA = "0x5CDAD10")]
	public CDPerk()
	{
	}
}
