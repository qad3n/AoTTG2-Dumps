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
[Token(Token = "0x20004D4")]
public class CustomAttributeFormatException : FormatException
{
	[Token(Token = "0x60023ED")]
	[Address(RVA = "0x3BD0940", Offset = "0x3BD0940", VA = "0x3BD0940")]
	public CustomAttributeFormatException()
	{
	}

	[Token(Token = "0x60023EE")]
	[Address(RVA = "0x3BD0980", Offset = "0x3BD0980", VA = "0x3BD0980")]
	public CustomAttributeFormatException(string message)
	{
	}

	[Token(Token = "0x60023EF")]
	[Address(RVA = "0x3BD09A0", Offset = "0x3BD09A0", VA = "0x3BD09A0")]
	public CustomAttributeFormatException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60023F0")]
	[Address(RVA = "0x3BD09C0", Offset = "0x3BD09C0", VA = "0x3BD09C0")]
	protected CustomAttributeFormatException(SerializationInfo info, StreamingContext context)
	{
	}
}
