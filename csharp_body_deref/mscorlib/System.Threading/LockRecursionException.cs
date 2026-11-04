// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.LockRecursionException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x20001F9")]
public class LockRecursionException : Exception
{
	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x1BA14D0", Offset = "0x1B9FAD0", VA = "0x181BA14D0")]
	public LockRecursionException()
	{
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x1BA1520", Offset = "0x1B9FB20", VA = "0x181BA1520")]
	public LockRecursionException(string message)
	{
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x1BA1450", Offset = "0x1B9FA50", VA = "0x181BA1450")]
	protected LockRecursionException(SerializationInfo info, StreamingContext context)
	{
	}
}
