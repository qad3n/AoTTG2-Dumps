// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.InvalidEnumArgumentException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x200025C")]
public class InvalidEnumArgumentException : ArgumentException
{
	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x4882AF0", Offset = "0x4882AF0", VA = "0x4882AF0")]
	public InvalidEnumArgumentException()
	{
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x4882B00", Offset = "0x4882B00", VA = "0x4882B00")]
	public InvalidEnumArgumentException(string message)
	{
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x4882B10", Offset = "0x4882B10", VA = "0x4882B10")]
	public InvalidEnumArgumentException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x4882B20", Offset = "0x4882B20", VA = "0x4882B20")]
	public InvalidEnumArgumentException(string argumentName, int invalidValue, Type enumClass)
	{
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x4882BF0", Offset = "0x4882BF0", VA = "0x4882BF0")]
	protected InvalidEnumArgumentException(SerializationInfo info, StreamingContext context)
	{
	}
}
