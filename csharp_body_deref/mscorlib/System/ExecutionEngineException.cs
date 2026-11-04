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
[Token(Token = "0x20000D5")]
[Obsolete("This type previously indicated an unspecified fatal error in the runtime. The runtime no longer raises this exception so this type is obsolete.")]
public sealed class ExecutionEngineException : SystemException
{
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x1B22DE0", Offset = "0x1B213E0", VA = "0x181B22DE0")]
	public ExecutionEngineException()
	{
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x1B22E30", Offset = "0x1B21430", VA = "0x181B22E30")]
	public ExecutionEngineException(string message)
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	internal ExecutionEngineException(SerializationInfo info, StreamingContext context)
	{
	}
}
