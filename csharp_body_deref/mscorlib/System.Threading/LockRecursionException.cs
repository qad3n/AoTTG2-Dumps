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
[Token(Token = "0x20001D1")]
public class LockRecursionException : Exception
{
	[Token(Token = "0x6001198")]
	[Address(RVA = "0x552B4E0", Offset = "0x552A4E0", VA = "0x552B4E0")]
	public LockRecursionException()
	{
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x552B550", Offset = "0x552A550", VA = "0x552B550")]
	public LockRecursionException(string message)
	{
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x552B5B0", Offset = "0x552A5B0", VA = "0x552B5B0")]
	protected LockRecursionException(SerializationInfo info, StreamingContext context)
	{
	}
}
