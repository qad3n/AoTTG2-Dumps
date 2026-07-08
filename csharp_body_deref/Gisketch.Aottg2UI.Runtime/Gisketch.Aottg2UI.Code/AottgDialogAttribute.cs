using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000059")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
public sealed class AottgDialogAttribute : Attribute
{
	[Token(Token = "0x17000035")]
	public string Id
	{
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x39F0F70", Offset = "0x39F0F70", VA = "0x39F0F70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	public bool Modal
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x39F0F80", Offset = "0x39F0F80", VA = "0x39F0F80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x39F0F90", Offset = "0x39F0F90", VA = "0x39F0F90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public bool DismissOnBackdrop
	{
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x39F0FA0", Offset = "0x39F0FA0", VA = "0x39F0FA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x39F0FB0", Offset = "0x39F0FB0", VA = "0x39F0FB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x39F0F30", Offset = "0x39F0F30", VA = "0x39F0F30")]
	public AottgDialogAttribute(string id)
	{
	}
}
