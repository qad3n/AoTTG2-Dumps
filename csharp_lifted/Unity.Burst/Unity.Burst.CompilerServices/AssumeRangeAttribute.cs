// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.CompilerServices.AssumeRangeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Burst.CompilerServices;

[Token(Token = "0x2000055")]
[AttributeUsage(AttributeTargets.Parameter | AttributeTargets.ReturnValue)]
public class AssumeRangeAttribute : Attribute
{
	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x63597E0", Offset = "0x63587E0", VA = "0x63597E0")]
	public AssumeRangeAttribute(long min, long max)
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x63597F0", Offset = "0x63587F0", VA = "0x63597F0")]
	public AssumeRangeAttribute(ulong min, ulong max)
	{
	}
}
