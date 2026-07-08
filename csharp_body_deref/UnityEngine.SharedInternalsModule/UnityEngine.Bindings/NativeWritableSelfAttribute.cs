using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200000C")]
[AttributeUsage(AttributeTargets.Method)]
[VisibleToOtherModules]
internal sealed class NativeWritableSelfAttribute : Attribute
{
	[Token(Token = "0x17000008")]
	public bool WritableSelf
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4B76530", Offset = "0x4B76530", VA = "0x4B76530", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4B76540", Offset = "0x4B76540", VA = "0x4B76540")]
	public NativeWritableSelfAttribute()
	{
	}
}
