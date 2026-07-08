using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200000B")]
[AttributeUsage(AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field)]
[VisibleToOtherModules]
internal class NativeNameAttribute : Attribute
{
	[Token(Token = "0x17000007")]
	public string Name
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4B76420", Offset = "0x4B76420", VA = "0x4B76420", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4B76430", Offset = "0x4B76430", VA = "0x4B76430")]
	public NativeNameAttribute(string name)
	{
	}
}
