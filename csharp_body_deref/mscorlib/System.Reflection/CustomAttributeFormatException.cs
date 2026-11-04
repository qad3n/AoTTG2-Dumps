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
[Token(Token = "0x2000504")]
public class CustomAttributeFormatException : FormatException
{
	[Token(Token = "0x600246F")]
	[Address(RVA = "0x1A42C00", Offset = "0x1A41200", VA = "0x181A42C00")]
	public CustomAttributeFormatException()
	{
	}

	[Token(Token = "0x6002470")]
	[Address(RVA = "0x1A42C50", Offset = "0x1A41250", VA = "0x181A42C50")]
	public CustomAttributeFormatException(string message)
	{
	}

	[Token(Token = "0x6002471")]
	[Address(RVA = "0x1A42C80", Offset = "0x1A41280", VA = "0x181A42C80")]
	public CustomAttributeFormatException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6002472")]
	[Address(RVA = "0x1A42BE0", Offset = "0x1A411E0", VA = "0x181A42BE0")]
	protected CustomAttributeFormatException(SerializationInfo info, StreamingContext context)
	{
	}
}
