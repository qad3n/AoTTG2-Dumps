using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200004F")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public class TypeSetAttribute : Attribute
{
	[Token(Token = "0x17000072")]
	public TypeSet typeSet
	{
		[Token(Token = "0x600020F")]
		[Address(RVA = "0x497F480", Offset = "0x497F480", VA = "0x497F480")]
		[CompilerGenerated]
		get
		{
			return default(TypeSet);
		}
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x497F460", Offset = "0x497F460", VA = "0x497F460")]
	public TypeSetAttribute(TypeSet typeSet)
	{
	}
}
