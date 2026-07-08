using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000018")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Method | AttributeTargets.Property)]
internal class StaticAccessorAttribute : Attribute
{
	[Token(Token = "0x17000013")]
	public string Name
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4B769F0", Offset = "0x4B769F0", VA = "0x4B769F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public StaticAccessorType Type
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4B76A00", Offset = "0x4B76A00", VA = "0x4B76A00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4B76A10", Offset = "0x4B76A10", VA = "0x4B76A10")]
	[VisibleToOtherModules]
	internal StaticAccessorAttribute(string name)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4B76A40", Offset = "0x4B76A40", VA = "0x4B76A40")]
	public StaticAccessorAttribute(string name, StaticAccessorType type)
	{
	}
}
