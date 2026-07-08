using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200005A")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
public sealed class AottgPopoverAttribute : Attribute
{
	[Token(Token = "0x17000038")]
	public string Id
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x39F0FF0", Offset = "0x39F0FF0", VA = "0x39F0FF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public bool DismissOnBackdrop
	{
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x39F1000", Offset = "0x39F1000", VA = "0x39F1000")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x39F1010", Offset = "0x39F1010", VA = "0x39F1010")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x39F0FC0", Offset = "0x39F0FC0", VA = "0x39F0FC0")]
	public AottgPopoverAttribute(string id)
	{
	}
}
