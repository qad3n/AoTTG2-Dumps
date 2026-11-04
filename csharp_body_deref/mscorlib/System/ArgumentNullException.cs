// ==================== AoTTG2 cross-reference ====================
// Type: System.ArgumentNullException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000B4")]
public class ArgumentNullException : ArgumentException
{
	[Token(Token = "0x6000414")]
	[Address(RVA = "0x1A77F90", Offset = "0x1A76590", VA = "0x181A77F90")]
	public ArgumentNullException()
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x1A77F20", Offset = "0x1A76520", VA = "0x181A77F20")]
	public ArgumentNullException(string paramName)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x1A77FE0", Offset = "0x1A765E0", VA = "0x181A77FE0")]
	public ArgumentNullException(string paramName, string message)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x1A77DC0", Offset = "0x1A763C0", VA = "0x181A77DC0")]
	protected ArgumentNullException(SerializationInfo info, StreamingContext context)
	{
	}
}
