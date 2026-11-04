// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.InvalidDataException
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000289")]
public sealed class InvalidDataException : SystemException
{
	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x2902F30", Offset = "0x2901530", VA = "0x182902F30")]
	public InvalidDataException()
	{
	}

	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x2902F10", Offset = "0x2901510", VA = "0x182902F10")]
	public InvalidDataException(string message)
	{
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x2902EF0", Offset = "0x29014F0", VA = "0x182902EF0")]
	public InvalidDataException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	private InvalidDataException(SerializationInfo info, StreamingContext context)
	{
	}
}
