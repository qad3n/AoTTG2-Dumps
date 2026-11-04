// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.CompilerServices.AssumeRangeAttribute
// Update status: NEW in this game update
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
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AssumeRangeAttribute(long min, long max)
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AssumeRangeAttribute(ulong min, ulong max)
	{
	}
}
