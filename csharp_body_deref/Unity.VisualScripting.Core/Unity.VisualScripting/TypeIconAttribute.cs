using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200004D")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Interface, AllowMultiple = false, Inherited = true)]
public sealed class TypeIconAttribute : Attribute
{
	[Token(Token = "0x17000070")]
	public Type type
	{
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x497F400", Offset = "0x497F400", VA = "0x497F400")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x497F2C0", Offset = "0x497F2C0", VA = "0x497F2C0")]
	public TypeIconAttribute(Type type)
	{
	}
}
