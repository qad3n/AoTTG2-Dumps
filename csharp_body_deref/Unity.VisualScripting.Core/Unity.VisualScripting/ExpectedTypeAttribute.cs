using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200003C")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class ExpectedTypeAttribute : Attribute
{
	[Token(Token = "0x1700005E")]
	public Type type
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x497EDC0", Offset = "0x497EDC0", VA = "0x497EDC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x497EC80", Offset = "0x497EC80", VA = "0x497EC80")]
	public ExpectedTypeAttribute(Type type)
	{
	}
}
