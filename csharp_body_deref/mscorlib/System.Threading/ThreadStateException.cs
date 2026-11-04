// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadStateException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x2000201")]
public class ThreadStateException : SystemException
{
	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x1BA5D20", Offset = "0x1BA4320", VA = "0x181BA5D20")]
	public ThreadStateException()
	{
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x1BA5D00", Offset = "0x1BA4300", VA = "0x181BA5D00")]
	public ThreadStateException(string message)
	{
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected ThreadStateException(SerializationInfo info, StreamingContext context)
	{
	}
}
