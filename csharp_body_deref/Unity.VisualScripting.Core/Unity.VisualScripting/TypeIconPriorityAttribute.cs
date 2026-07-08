using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200004E")]
[AttributeUsage(AttributeTargets.Interface, AllowMultiple = false, Inherited = false)]
public sealed class TypeIconPriorityAttribute : Attribute
{
	[Token(Token = "0x17000071")]
	public int priority
	{
		[Token(Token = "0x600020D")]
		[Address(RVA = "0x497F450", Offset = "0x497F450", VA = "0x497F450")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x497F410", Offset = "0x497F410", VA = "0x497F410")]
	public TypeIconPriorityAttribute(int priority)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x497F430", Offset = "0x497F430", VA = "0x497F430")]
	public TypeIconPriorityAttribute()
	{
	}
}
