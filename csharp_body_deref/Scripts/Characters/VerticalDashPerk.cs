using Assets.Scripts.Characters.Human.Perks;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004CE")]
internal class VerticalDashPerk : DivisivePowerPerk
{
	[Token(Token = "0x17000975")]
	public override string Name
	{
		[Token(Token = "0x600334D")]
		[Address(RVA = "0x3EDA770", Offset = "0x3EDA770", VA = "0x3EDA770", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000976")]
	public override int MaxPoints
	{
		[Token(Token = "0x600334E")]
		[Address(RVA = "0x3EDA7A0", Offset = "0x3EDA7A0", VA = "0x3EDA7A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000977")]
	protected override float MaxPower
	{
		[Token(Token = "0x600334F")]
		[Address(RVA = "0x3EDA7B0", Offset = "0x3EDA7B0", VA = "0x3EDA7B0", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000978")]
	protected override float MinPower
	{
		[Token(Token = "0x6003350")]
		[Address(RVA = "0x3EDA7C0", Offset = "0x3EDA7C0", VA = "0x3EDA7C0", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000979")]
	protected override float PowerUsageDivisor
	{
		[Token(Token = "0x6003351")]
		[Address(RVA = "0x3EDA7D0", Offset = "0x3EDA7D0", VA = "0x3EDA7D0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700097A")]
	protected override float LinearRecoveryRate
	{
		[Token(Token = "0x6003352")]
		[Address(RVA = "0x3EDA7E0", Offset = "0x3EDA7E0", VA = "0x3EDA7E0", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003353")]
	[Address(RVA = "0x3ED86E0", Offset = "0x3ED86E0", VA = "0x3ED86E0")]
	public VerticalDashPerk()
	{
	}
}
