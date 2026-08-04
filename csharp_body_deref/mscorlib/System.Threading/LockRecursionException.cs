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
[Token(Token = "0x20001CE")]
public class LockRecursionException : Exception
{
	[Token(Token = "0x6001166")]
	[Address(RVA = "0x3D28120", Offset = "0x3D28120", VA = "0x3D28120")]
	public LockRecursionException()
	{
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x3D28190", Offset = "0x3D28190", VA = "0x3D28190")]
	public LockRecursionException(string message)
	{
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x3D281F0", Offset = "0x3D281F0", VA = "0x3D281F0")]
	protected LockRecursionException(SerializationInfo info, StreamingContext context)
	{
	}
}
