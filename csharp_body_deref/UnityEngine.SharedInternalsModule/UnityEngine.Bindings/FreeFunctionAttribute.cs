using System;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000015")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Method)]
internal class FreeFunctionAttribute : NativeMethodAttribute
{
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4B76980", Offset = "0x4B76980", VA = "0x4B76980")]
	public FreeFunctionAttribute()
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4B769A0", Offset = "0x4B769A0", VA = "0x4B769A0")]
	public FreeFunctionAttribute(string name)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4B769B0", Offset = "0x4B769B0", VA = "0x4B769B0")]
	public FreeFunctionAttribute(string name, bool isThreadSafe)
	{
	}
}
