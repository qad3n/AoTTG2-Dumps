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

[Token(Token = "0x2000018")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Method | AttributeTargets.Property)]
internal class StaticAccessorAttribute : Attribute
{
	[Token(Token = "0x17000013")]
	public string Name
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4E9E320", Offset = "0x4E9E320", VA = "0x4E9E320")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public StaticAccessorType Type
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4E9E330", Offset = "0x4E9E330", VA = "0x4E9E330")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4E9E340", Offset = "0x4E9E340", VA = "0x4E9E340")]
	[VisibleToOtherModules]
	internal StaticAccessorAttribute(string name)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4E9E370", Offset = "0x4E9E370", VA = "0x4E9E370")]
	public StaticAccessorAttribute(string name, StaticAccessorType type)
	{
	}
}
