// ==================== AoTTG2 cross-reference ====================
// Type: System.OutOfMemoryException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000145")]
public class OutOfMemoryException : SystemException
{
	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x54E2460", Offset = "0x54E1460", VA = "0x54E2460")]
	public OutOfMemoryException()
	{
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x54E2510", Offset = "0x54E1510", VA = "0x54E2510")]
	public OutOfMemoryException(string message)
	{
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x54E2570", Offset = "0x54E1570", VA = "0x54E2570")]
	protected OutOfMemoryException(SerializationInfo info, StreamingContext context)
	{
	}
}
