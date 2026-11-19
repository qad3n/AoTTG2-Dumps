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
[Token(Token = "0x200020E")]
[ComVisible(true)]
public sealed class ThreadAbortException : SystemException
{
	[Token(Token = "0x6001310")]
	[Address(RVA = "0x5539CC0", Offset = "0x5538CC0", VA = "0x5539CC0")]
	private ThreadAbortException()
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x5539D30", Offset = "0x5538D30", VA = "0x5539D30")]
	internal ThreadAbortException(SerializationInfo info, StreamingContext context)
	{
	}
}
