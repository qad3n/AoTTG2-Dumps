using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000758")]
public sealed class AottgCreditGroup
{
	[Token(Token = "0x17000DA6")]
	public string Title
	{
		[Token(Token = "0x600474C")]
		[Address(RVA = "0x40AD230", Offset = "0x40AD230", VA = "0x40AD230")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600474D")]
		[Address(RVA = "0x40AD240", Offset = "0x40AD240", VA = "0x40AD240")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DA7")]
	public string Description
	{
		[Token(Token = "0x600474E")]
		[Address(RVA = "0x40AD250", Offset = "0x40AD250", VA = "0x40AD250")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600474F")]
		[Address(RVA = "0x40AD260", Offset = "0x40AD260", VA = "0x40AD260")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DA8")]
	public IReadOnlyList<AottgCreditContributor> Contributors
	{
		[Token(Token = "0x6004750")]
		[Address(RVA = "0x40AD270", Offset = "0x40AD270", VA = "0x40AD270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004751")]
		[Address(RVA = "0x40AD280", Offset = "0x40AD280", VA = "0x40AD280")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600474B")]
	[Address(RVA = "0x40AD180", Offset = "0x40AD180", VA = "0x40AD180")]
	public AottgCreditGroup(string title, string description, AottgCreditContributor[] contributors)
	{
	}
}
