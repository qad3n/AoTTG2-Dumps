// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadAbortException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x2000236")]
[ComVisible(true)]
public sealed class ThreadAbortException : SystemException
{
	[Token(Token = "0x6001339")]
	[Address(RVA = "0x1BBFD50", Offset = "0x1BBE350", VA = "0x181BBFD50")]
	private ThreadAbortException()
	{
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	internal ThreadAbortException(SerializationInfo info, StreamingContext context)
	{
	}
}
