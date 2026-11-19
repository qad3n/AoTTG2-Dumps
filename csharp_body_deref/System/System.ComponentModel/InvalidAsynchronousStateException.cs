// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.InvalidAsynchronousStateException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x2000177")]
public class InvalidAsynchronousStateException : ArgumentException
{
	[Token(Token = "0x6000952")]
	[Address(RVA = "0x6234F10", Offset = "0x6233F10", VA = "0x6234F10")]
	public InvalidAsynchronousStateException()
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x6234F20", Offset = "0x6233F20", VA = "0x6234F20")]
	public InvalidAsynchronousStateException(string message)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x6234F30", Offset = "0x6233F30", VA = "0x6234F30")]
	public InvalidAsynchronousStateException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x6234F40", Offset = "0x6233F40", VA = "0x6234F40")]
	protected InvalidAsynchronousStateException(SerializationInfo info, StreamingContext context)
	{
	}
}
