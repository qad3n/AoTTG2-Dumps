// ==================== AoTTG2 cross-reference ====================
// Type: System.ApplicationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000B2")]
public class ApplicationException : Exception
{
	[Token(Token = "0x6000408")]
	[Address(RVA = "0x1A77A20", Offset = "0x1A76020", VA = "0x181A77A20")]
	public ApplicationException()
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x1A77B10", Offset = "0x1A76110", VA = "0x181A77B10")]
	public ApplicationException(string message)
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x1A77A90", Offset = "0x1A76090", VA = "0x181A77A90")]
	public ApplicationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x1A77B80", Offset = "0x1A76180", VA = "0x181A77B80")]
	protected ApplicationException(SerializationInfo info, StreamingContext context)
	{
	}
}
