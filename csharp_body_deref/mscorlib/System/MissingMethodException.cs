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
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x54BC950", Offset = "0x54BB950", VA = "0x54BC950", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x54BC890", Offset = "0x54BB890", VA = "0x54BC890")]
	public MissingMethodException()
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x54BC8D0", Offset = "0x54BB8D0", VA = "0x54BC8D0")]
	public MissingMethodException(string message)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x54BC8F0", Offset = "0x54BB8F0", VA = "0x54BC8F0")]
	public MissingMethodException(string className, string methodName)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x54BC940", Offset = "0x54BB940", VA = "0x54BC940")]
	protected MissingMethodException(SerializationInfo info, StreamingContext context)
	{
	}
}
