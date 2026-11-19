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
[Token(Token = "0x2000128")]
public class InvalidEnumArgumentException : ArgumentException
{
	[Token(Token = "0x600073F")]
	[Address(RVA = "0x62235E0", Offset = "0x62225E0", VA = "0x62235E0")]
	public InvalidEnumArgumentException()
	{
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x62235F0", Offset = "0x62225F0", VA = "0x62235F0")]
	public InvalidEnumArgumentException(string message)
	{
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x6223600", Offset = "0x6222600", VA = "0x6223600")]
	public InvalidEnumArgumentException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x6223610", Offset = "0x6222610", VA = "0x6223610")]
	public InvalidEnumArgumentException(string argumentName, int invalidValue, Type enumClass)
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x62236E0", Offset = "0x62226E0", VA = "0x62236E0")]
	protected InvalidEnumArgumentException(SerializationInfo info, StreamingContext context)
	{
	}
}
