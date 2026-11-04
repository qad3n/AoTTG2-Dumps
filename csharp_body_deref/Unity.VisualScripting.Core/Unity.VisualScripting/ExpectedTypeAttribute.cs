// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ExpectedTypeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200003C")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class ExpectedTypeAttribute : Attribute
{
	[Token(Token = "0x1700005F")]
	public Type type
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x2DA7830", Offset = "0x2DA5E30", VA = "0x182DA7830")]
	public ExpectedTypeAttribute(Type type)
	{
	}
}
