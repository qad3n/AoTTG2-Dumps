using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000052")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class WarnBeforeRemovingAttribute : Attribute
{
	[Token(Token = "0x17000076")]
	public string warningTitle
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x497F5A0", Offset = "0x497F5A0", VA = "0x497F5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public string warningMessage
	{
		[Token(Token = "0x6000217")]
		[Address(RVA = "0x497F5B0", Offset = "0x497F5B0", VA = "0x497F5B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x497F560", Offset = "0x497F560", VA = "0x497F560")]
	public WarnBeforeRemovingAttribute(string warningTitle, string warningMessage)
	{
	}
}
