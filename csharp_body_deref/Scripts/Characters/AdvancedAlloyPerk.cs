using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004C9")]
internal class AdvancedAlloyPerk : BasePerk
{
	[Token(Token = "0x17000967")]
	public override string Name
	{
		[Token(Token = "0x6003335")]
		[Address(RVA = "0x3EDA1A0", Offset = "0x3EDA1A0", VA = "0x3EDA1A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000968")]
	public override int MaxPoints
	{
		[Token(Token = "0x6003336")]
		[Address(RVA = "0x3EDA1D0", Offset = "0x3EDA1D0", VA = "0x3EDA1D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003337")]
	[Address(RVA = "0x3EDA1E0", Offset = "0x3EDA1E0", VA = "0x3EDA1E0", Slot = "6")]
	protected override void SetupRequirements()
	{
	}

	[Token(Token = "0x6003338")]
	[Address(RVA = "0x3ED8530", Offset = "0x3ED8530", VA = "0x3ED8530")]
	public AdvancedAlloyPerk()
	{
	}
}
