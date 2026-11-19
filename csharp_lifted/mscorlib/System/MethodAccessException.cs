// ==================== AoTTG2 cross-reference ====================
// Type: System.MethodAccessException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000EB")]
public class MethodAccessException : MemberAccessException
{
	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x54BC820", Offset = "0x54BB820", VA = "0x54BC820")]
	public MethodAccessException()
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x54BC860", Offset = "0x54BB860", VA = "0x54BC860")]
	public MethodAccessException(string message)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x54BC880", Offset = "0x54BB880", VA = "0x54BC880")]
	protected MethodAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
