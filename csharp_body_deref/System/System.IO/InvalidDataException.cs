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
[Token(Token = "0x200024A")]
public sealed class InvalidDataException : SystemException
{
	[Token(Token = "0x6001019")]
	[Address(RVA = "0x628B080", Offset = "0x628A080", VA = "0x628B080")]
	public InvalidDataException()
	{
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x628B0D0", Offset = "0x628A0D0", VA = "0x628B0D0")]
	public InvalidDataException(string message)
	{
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x628B0F0", Offset = "0x628A0F0", VA = "0x628B0F0")]
	public InvalidDataException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x628B110", Offset = "0x628A110", VA = "0x628B110")]
	private InvalidDataException(SerializationInfo info, StreamingContext context)
	{
	}
}
