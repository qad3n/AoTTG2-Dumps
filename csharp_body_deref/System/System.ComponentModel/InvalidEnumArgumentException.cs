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
[Token(Token = "0x2000167")]
public class InvalidEnumArgumentException : ArgumentException
{
	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x287E0A0", Offset = "0x287C6A0", VA = "0x18287E0A0")]
	public InvalidEnumArgumentException()
	{
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x287E0B0", Offset = "0x287C6B0", VA = "0x18287E0B0")]
	public InvalidEnumArgumentException(string message)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x287E090", Offset = "0x287C690", VA = "0x18287E090")]
	public InvalidEnumArgumentException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x287E0C0", Offset = "0x287C6C0", VA = "0x18287E0C0")]
	public InvalidEnumArgumentException(string argumentName, int invalidValue, Type enumClass)
	{
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x1977AB0", Offset = "0x19760B0", VA = "0x181977AB0")]
	protected InvalidEnumArgumentException(SerializationInfo info, StreamingContext context)
	{
	}
}
