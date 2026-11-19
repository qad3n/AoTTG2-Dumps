// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.VisibleToOtherModulesAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000008")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
internal class VisibleToOtherModulesAttribute : Attribute
{
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x69F1240", Offset = "0x69F0240", VA = "0x69F1240")]
	public VisibleToOtherModulesAttribute()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x69F1250", Offset = "0x69F0250", VA = "0x69F1250")]
	public VisibleToOtherModulesAttribute(params string[] modules)
	{
	}
}
