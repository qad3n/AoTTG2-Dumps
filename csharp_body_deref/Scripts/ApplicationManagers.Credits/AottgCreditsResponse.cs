using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000756")]
public sealed class AottgCreditsResponse
{
	[Token(Token = "0x17000DA1")]
	public IReadOnlyList<AottgCreditCategory> Categories
	{
		[Token(Token = "0x6004740")]
		[Address(RVA = "0x40ACFD0", Offset = "0x40ACFD0", VA = "0x40ACFD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004741")]
		[Address(RVA = "0x40ACFE0", Offset = "0x40ACFE0", VA = "0x40ACFE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600473F")]
	[Address(RVA = "0x40ACF40", Offset = "0x40ACF40", VA = "0x40ACF40")]
	public AottgCreditsResponse(AottgCreditCategory[] categories)
	{
	}
}
