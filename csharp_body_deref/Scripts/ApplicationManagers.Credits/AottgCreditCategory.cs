using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000757")]
public sealed class AottgCreditCategory
{
	[Token(Token = "0x17000DA2")]
	public string Name
	{
		[Token(Token = "0x6004743")]
		[Address(RVA = "0x40AD100", Offset = "0x40AD100", VA = "0x40AD100")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004744")]
		[Address(RVA = "0x40AD110", Offset = "0x40AD110", VA = "0x40AD110")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DA3")]
	public string Description
	{
		[Token(Token = "0x6004745")]
		[Address(RVA = "0x40AD120", Offset = "0x40AD120", VA = "0x40AD120")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004746")]
		[Address(RVA = "0x40AD130", Offset = "0x40AD130", VA = "0x40AD130")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DA4")]
	public IReadOnlyList<AottgCreditContributor> Contributors
	{
		[Token(Token = "0x6004747")]
		[Address(RVA = "0x40AD140", Offset = "0x40AD140", VA = "0x40AD140")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004748")]
		[Address(RVA = "0x40AD150", Offset = "0x40AD150", VA = "0x40AD150")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DA5")]
	public IReadOnlyList<AottgCreditGroup> Groups
	{
		[Token(Token = "0x6004749")]
		[Address(RVA = "0x40AD160", Offset = "0x40AD160", VA = "0x40AD160")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600474A")]
		[Address(RVA = "0x40AD170", Offset = "0x40AD170", VA = "0x40AD170")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004742")]
	[Address(RVA = "0x40ACFF0", Offset = "0x40ACFF0", VA = "0x40ACFF0")]
	public AottgCreditCategory(string name, string description, AottgCreditContributor[] contributors, AottgCreditGroup[] groups)
	{
	}
}
