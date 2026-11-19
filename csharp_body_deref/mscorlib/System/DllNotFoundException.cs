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
	[Token(Token = "0x600067C")]
	[Address(RVA = "0x549D710", Offset = "0x549C710", VA = "0x549D710")]
	public DllNotFoundException()
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x549D750", Offset = "0x549C750", VA = "0x549D750")]
	public DllNotFoundException(string message)
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x549D770", Offset = "0x549C770", VA = "0x549D770")]
	protected DllNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
