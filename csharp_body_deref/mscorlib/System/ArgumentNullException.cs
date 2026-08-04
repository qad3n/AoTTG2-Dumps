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
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x3C13900", Offset = "0x3C13900", VA = "0x3C13900")]
	public ArgumentNullException()
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x3C0AD60", Offset = "0x3C0AD60", VA = "0x3C0AD60")]
	public ArgumentNullException(string paramName)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x3C13940", Offset = "0x3C13940", VA = "0x3C13940")]
	public ArgumentNullException(string paramName, string message)
	{
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x3C13980", Offset = "0x3C13980", VA = "0x3C13980")]
	protected ArgumentNullException(SerializationInfo info, StreamingContext context)
	{
	}
}
