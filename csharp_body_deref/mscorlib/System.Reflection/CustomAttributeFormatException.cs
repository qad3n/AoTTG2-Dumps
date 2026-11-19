// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.CustomAttributeFormatException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004DD")]
public class CustomAttributeFormatException : FormatException
{
	[Token(Token = "0x600243D")]
	[Address(RVA = "0x53D7BA0", Offset = "0x53D6BA0", VA = "0x53D7BA0")]
	public CustomAttributeFormatException()
	{
	}

	[Token(Token = "0x600243E")]
	[Address(RVA = "0x53D7BE0", Offset = "0x53D6BE0", VA = "0x53D7BE0")]
	public CustomAttributeFormatException(string message)
	{
	}

	[Token(Token = "0x600243F")]
	[Address(RVA = "0x53D7C00", Offset = "0x53D6C00", VA = "0x53D7C00")]
	public CustomAttributeFormatException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6002440")]
	[Address(RVA = "0x53D7C20", Offset = "0x53D6C20", VA = "0x53D7C20")]
	protected CustomAttributeFormatException(SerializationInfo info, StreamingContext context)
	{
	}
}
