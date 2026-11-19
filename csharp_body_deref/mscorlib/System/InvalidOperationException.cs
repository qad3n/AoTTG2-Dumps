// ==================== AoTTG2 cross-reference ====================
// Type: System.InvalidOperationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000DE")]
public class InvalidOperationException : SystemException
{
	[Token(Token = "0x600082A")]
	[Address(RVA = "0x54B9A40", Offset = "0x54B8A40", VA = "0x54B9A40")]
	public InvalidOperationException()
	{
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x54B9A80", Offset = "0x54B8A80", VA = "0x54B9A80")]
	public InvalidOperationException(string message)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x54B9AA0", Offset = "0x54B8AA0", VA = "0x54B9AA0")]
	public InvalidOperationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x54B9AC0", Offset = "0x54B8AC0", VA = "0x54B9AC0")]
	protected InvalidOperationException(SerializationInfo info, StreamingContext context)
	{
	}
}
