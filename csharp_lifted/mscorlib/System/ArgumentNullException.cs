// ==================== AoTTG2 cross-reference ====================
// Type: System.ArgumentNullException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200008B")]
public class ArgumentNullException : ArgumentException
{
	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x5419B50", Offset = "0x5418B50", VA = "0x5419B50")]
	public ArgumentNullException()
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x5410F50", Offset = "0x540FF50", VA = "0x5410F50")]
	public ArgumentNullException(string paramName)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x5419B90", Offset = "0x5418B90", VA = "0x5419B90")]
	public ArgumentNullException(string paramName, string message)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x5419BD0", Offset = "0x5418BD0", VA = "0x5419BD0")]
	protected ArgumentNullException(SerializationInfo info, StreamingContext context)
	{
	}
}
