using System;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000008")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
[VisibleToOtherModules]
internal class VisibleToOtherModulesAttribute : Attribute
{
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4B76240", Offset = "0x4B76240", VA = "0x4B76240")]
	public VisibleToOtherModulesAttribute()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4B76250", Offset = "0x4B76250", VA = "0x4B76250")]
	public VisibleToOtherModulesAttribute(params string[] modules)
	{
	}
}
