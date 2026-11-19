// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.StaticAccessorAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000016")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Method | AttributeTargets.Property)]
internal class StaticAccessorAttribute : Attribute
{
	[Token(Token = "0x17000011")]
	public string Name
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x69F1950", Offset = "0x69F0950", VA = "0x69F1950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public StaticAccessorType Type
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x69F1960", Offset = "0x69F0960", VA = "0x69F1960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x69F1970", Offset = "0x69F0970", VA = "0x69F1970")]
	[VisibleToOtherModules]
	internal StaticAccessorAttribute(string name)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x69F19A0", Offset = "0x69F09A0", VA = "0x69F19A0")]
	public StaticAccessorAttribute(string name, StaticAccessorType type)
	{
	}
}
