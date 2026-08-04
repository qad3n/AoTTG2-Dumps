// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.InvalidDataException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000368")]
public sealed class InvalidDataException : SystemException
{
	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x48EED50", Offset = "0x48EED50", VA = "0x48EED50")]
	public InvalidDataException()
	{
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x48EEDA0", Offset = "0x48EEDA0", VA = "0x48EEDA0")]
	public InvalidDataException(string message)
	{
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x48EEDC0", Offset = "0x48EEDC0", VA = "0x48EEDC0")]
	private InvalidDataException(SerializationInfo info, StreamingContext context)
	{
	}
}
