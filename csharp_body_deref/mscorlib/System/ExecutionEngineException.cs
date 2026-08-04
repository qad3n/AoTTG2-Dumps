// ==================== AoTTG2 cross-reference ====================
// Type: System.ExecutionEngineException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000AD")]
[Obsolete("This type previously indicated an unspecified fatal error in the runtime. The runtime no longer raises this exception so this type is obsolete.")]
public sealed class ExecutionEngineException : SystemException
{
	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x3C9AE90", Offset = "0x3C9AE90", VA = "0x3C9AE90")]
	public ExecutionEngineException()
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x3C9AED0", Offset = "0x3C9AED0", VA = "0x3C9AED0")]
	public ExecutionEngineException(string message)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x3C9AEF0", Offset = "0x3C9AEF0", VA = "0x3C9AEF0")]
	internal ExecutionEngineException(SerializationInfo info, StreamingContext context)
	{
	}
}
