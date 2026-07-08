using Assets.Scripts.Characters.Human.Perks;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004CC")]
internal class OmniDashPerk : DivisivePowerPerk
{
	[Token(Token = "0x1700096D")]
	public override string Name
	{
		[Token(Token = "0x6003342")]
		[Address(RVA = "0x3EDA650", Offset = "0x3EDA650", VA = "0x3EDA650", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700096E")]
	public override int MaxPoints
	{
		[Token(Token = "0x6003343")]
		[Address(RVA = "0x3EDA680", Offset = "0x3EDA680", VA = "0x3EDA680", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700096F")]
	protected override float MaxPower
	{
		[Token(Token = "0x6003344")]
		[Address(RVA = "0x3EDA690", Offset = "0x3EDA690", VA = "0x3EDA690", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000970")]
	protected override float MinPower
	{
		[Token(Token = "0x6003345")]
		[Address(RVA = "0x3EDA6A0", Offset = "0x3EDA6A0", VA = "0x3EDA6A0", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000971")]
	protected override float PowerUsageDivisor
	{
		[Token(Token = "0x6003346")]
		[Address(RVA = "0x3EDA6B0", Offset = "0x3EDA6B0", VA = "0x3EDA6B0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000972")]
	protected override float LinearRecoveryRate
	{
		[Token(Token = "0x6003347")]
		[Address(RVA = "0x3EDA6C0", Offset = "0x3EDA6C0", VA = "0x3EDA6C0", Slot = "12")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003348")]
	[Address(RVA = "0x3EDA6D0", Offset = "0x3EDA6D0", VA = "0x3EDA6D0", Slot = "6")]
	protected override void SetupRequirements()
	{
	}

	[Token(Token = "0x6003349")]
	[Address(RVA = "0x3ED86F0", Offset = "0x3ED86F0", VA = "0x3ED86F0")]
	public OmniDashPerk()
	{
	}
}
