// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.FixedBufferAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200047B")]
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
public sealed class FixedBufferAttribute : Attribute
{
	[Token(Token = "0x1700046F")]
	public Type ElementType
	{
		[Token(Token = "0x60022BD")]
		[Address(RVA = "0x53C8760", Offset = "0x53C7760", VA = "0x53C8760")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000470")]
	public int Length
	{
		[Token(Token = "0x60022BE")]
		[Address(RVA = "0x53C8770", Offset = "0x53C7770", VA = "0x53C8770")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60022BC")]
	[Address(RVA = "0x53C8730", Offset = "0x53C7730", VA = "0x53C8730")]
	public FixedBufferAttribute(Type elementType, int length)
	{
	}
}
