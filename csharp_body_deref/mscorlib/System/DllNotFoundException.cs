// ==================== AoTTG2 cross-reference ====================
// Type: System.DllNotFoundException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000A7")]
public class DllNotFoundException : TypeLoadException
{
	[Token(Token = "0x6000672")]
	[Address(RVA = "0x3C99A30", Offset = "0x3C99A30", VA = "0x3C99A30")]
	public DllNotFoundException()
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x3C99A70", Offset = "0x3C99A70", VA = "0x3C99A70")]
	public DllNotFoundException(string message)
	{
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x3C99A90", Offset = "0x3C99A90", VA = "0x3C99A90")]
	protected DllNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
