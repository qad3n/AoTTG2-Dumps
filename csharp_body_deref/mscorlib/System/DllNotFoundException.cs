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
[Token(Token = "0x20000CF")]
public class DllNotFoundException : TypeLoadException
{
	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x1B21A90", Offset = "0x1B20090", VA = "0x181B21A90")]
	public DllNotFoundException()
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x1B21A70", Offset = "0x1B20070", VA = "0x181B21A70")]
	public DllNotFoundException(string message)
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x1B21A50", Offset = "0x1B20050", VA = "0x181B21A50")]
	protected DllNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
