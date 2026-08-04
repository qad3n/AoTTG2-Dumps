// ==================== AoTTG2 cross-reference ====================
// Type: System.MissingMethodException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000ED")]
public class MissingMethodException : MissingMemberException
{
	[Token(Token = "0x17000098")]
	public override string Message
	{
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x3CB9270", Offset = "0x3CB9270", VA = "0x3CB9270", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x3CB91B0", Offset = "0x3CB91B0", VA = "0x3CB91B0")]
	public MissingMethodException()
	{
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x3CB91F0", Offset = "0x3CB91F0", VA = "0x3CB91F0")]
	public MissingMethodException(string message)
	{
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x3CB9210", Offset = "0x3CB9210", VA = "0x3CB9210")]
	public MissingMethodException(string className, string methodName)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x3CB9260", Offset = "0x3CB9260", VA = "0x3CB9260")]
	protected MissingMethodException(SerializationInfo info, StreamingContext context)
	{
	}
}
