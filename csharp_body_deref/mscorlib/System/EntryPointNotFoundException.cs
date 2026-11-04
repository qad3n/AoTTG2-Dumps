// ==================== AoTTG2 cross-reference ====================
// Type: System.EntryPointNotFoundException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000D1")]
public class EntryPointNotFoundException : TypeLoadException
{
	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x1B22D00", Offset = "0x1B21300", VA = "0x181B22D00")]
	public EntryPointNotFoundException()
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x1B22D50", Offset = "0x1B21350", VA = "0x181B22D50")]
	public EntryPointNotFoundException(string message)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x1B21A50", Offset = "0x1B20050", VA = "0x181B21A50")]
	protected EntryPointNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
