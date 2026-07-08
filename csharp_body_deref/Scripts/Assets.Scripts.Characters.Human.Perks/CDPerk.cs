using Characters;
using Il2CppDummyDll;

namespace Assets.Scripts.Characters.Human.Perks;

[Token(Token = "0x20006C8")]
internal class CDPerk : BasePerk
{
	[Token(Token = "0x40020D2")]
	[FieldOffset(Offset = "0x20")]
	protected float _lastUseTime;

	[Token(Token = "0x17000D1C")]
	public bool PerkEnabled
	{
		[Token(Token = "0x600437D")]
		[Address(RVA = "0x404D6C0", Offset = "0x404D6C0", VA = "0x404D6C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D1D")]
	public float Cooldown
	{
		[Token(Token = "0x600437E")]
		[Address(RVA = "0x404D6E0", Offset = "0x404D6E0", VA = "0x404D6E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600437F")]
	[Address(RVA = "0x404D6F0", Offset = "0x404D6F0", VA = "0x404D6F0", Slot = "9")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6004380")]
	[Address(RVA = "0x404D700", Offset = "0x404D700", VA = "0x404D700")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6004381")]
	[Address(RVA = "0x404D730", Offset = "0x404D730", VA = "0x404D730")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6004382")]
	[Address(RVA = "0x404D770", Offset = "0x404D770", VA = "0x404D770")]
	public float GetCooldownRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6004383")]
	[Address(RVA = "0x404D7B0", Offset = "0x404D7B0", VA = "0x404D7B0", Slot = "10")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004384")]
	[Address(RVA = "0x404D7D0", Offset = "0x404D7D0", VA = "0x404D7D0", Slot = "11")]
	public virtual void OnUse()
	{
	}

	[Token(Token = "0x6004385")]
	[Address(RVA = "0x404D7F0", Offset = "0x404D7F0", VA = "0x404D7F0")]
	public CDPerk()
	{
	}
}
