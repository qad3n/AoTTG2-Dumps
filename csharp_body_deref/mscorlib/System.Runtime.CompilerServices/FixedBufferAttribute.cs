// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.FixedBufferAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000473")]
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
public sealed class FixedBufferAttribute : Attribute
{
	[Token(Token = "0x1700046D")]
	public Type ElementType
	{
		[Token(Token = "0x6002270")]
		[Address(RVA = "0x3BC0E40", Offset = "0x3BC0E40", VA = "0x3BC0E40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046E")]
	public int Length
	{
		[Token(Token = "0x6002271")]
		[Address(RVA = "0x3BC0E50", Offset = "0x3BC0E50", VA = "0x3BC0E50")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600226F")]
	[Address(RVA = "0x3BC0E10", Offset = "0x3BC0E10", VA = "0x3BC0E10")]
	public FixedBufferAttribute(Type elementType, int length)
	{
	}
}
