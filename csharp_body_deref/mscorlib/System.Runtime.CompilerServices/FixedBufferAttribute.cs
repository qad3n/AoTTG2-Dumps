// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.FixedBufferAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004A2")]
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
public sealed class FixedBufferAttribute : Attribute
{
	[Token(Token = "0x17000470")]
	public Type ElementType
	{
		[Token(Token = "0x60022F0")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000471")]
	public int Length
	{
		[Token(Token = "0x60022F1")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60022EF")]
	[Address(RVA = "0x1A2A540", Offset = "0x1A28B40", VA = "0x181A2A540")]
	public FixedBufferAttribute(Type elementType, int length)
	{
	}
}
