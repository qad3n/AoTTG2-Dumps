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
[Token(Token = "0x20001D9")]
public class ThreadStateException : SystemException
{
	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x552BA10", Offset = "0x552AA10", VA = "0x552BA10")]
	public ThreadStateException()
	{
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x552BA50", Offset = "0x552AA50", VA = "0x552BA50")]
	public ThreadStateException(string message)
	{
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x552BA70", Offset = "0x552AA70", VA = "0x552BA70")]
	protected ThreadStateException(SerializationInfo info, StreamingContext context)
	{
	}
}
