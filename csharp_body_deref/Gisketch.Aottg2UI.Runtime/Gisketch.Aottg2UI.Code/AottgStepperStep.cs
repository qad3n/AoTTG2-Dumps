using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200006B")]
public sealed class AottgStepperStep
{
	[Token(Token = "0x1700005E")]
	public string Id
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x39F6440", Offset = "0x39F6440", VA = "0x39F6440")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005F")]
	public string Title
	{
		[Token(Token = "0x60002D7")]
		[Address(RVA = "0x39F6450", Offset = "0x39F6450", VA = "0x39F6450")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000060")]
	public string Text
	{
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x39F6460", Offset = "0x39F6460", VA = "0x39F6460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	public GisketchNodeDefinition[] Children
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x39F6470", Offset = "0x39F6470", VA = "0x39F6470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x39F6480", Offset = "0x39F6480", VA = "0x39F6480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x39F63E0", Offset = "0x39F63E0", VA = "0x39F63E0")]
	public AottgStepperStep(string id, string title, [Optional] string text)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x39F6490", Offset = "0x39F6490", VA = "0x39F6490")]
	internal GisketchStepperStepDefinition ToDefinition()
	{
		return null;
	}
}
