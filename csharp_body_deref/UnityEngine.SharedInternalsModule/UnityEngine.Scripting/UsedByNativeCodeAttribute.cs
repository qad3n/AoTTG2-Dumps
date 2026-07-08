using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Scripting;

[Token(Token = "0x200001C")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Interface, Inherited = false)]
internal class UsedByNativeCodeAttribute : Attribute
{
	[Token(Token = "0x17000017")]
	public string Name
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4B76B10", Offset = "0x4B76B10", VA = "0x4B76B10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4B76AD0", Offset = "0x4B76AD0", VA = "0x4B76AD0")]
	public UsedByNativeCodeAttribute()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4B76AE0", Offset = "0x4B76AE0", VA = "0x4B76AE0")]
	public UsedByNativeCodeAttribute(string name)
	{
	}
}
