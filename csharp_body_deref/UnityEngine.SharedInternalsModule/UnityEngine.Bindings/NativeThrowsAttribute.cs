using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000019")]
[AttributeUsage(AttributeTargets.Method | AttributeTargets.Property)]
[VisibleToOtherModules]
internal class NativeThrowsAttribute : Attribute
{
	[Token(Token = "0x17000015")]
	public bool ThrowsException
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4B76A70", Offset = "0x4B76A70", VA = "0x4B76A70", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4B76A80", Offset = "0x4B76A80", VA = "0x4B76A80")]
	public NativeThrowsAttribute()
	{
	}
}
