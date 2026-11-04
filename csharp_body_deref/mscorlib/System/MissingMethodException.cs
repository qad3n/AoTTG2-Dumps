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
[Token(Token = "0x2000115")]
public class MissingMethodException : MissingMemberException
{
	[Token(Token = "0x17000098")]
	public override string Message
	{
		[Token(Token = "0x60008EF")]
		[Address(RVA = "0x1B2E230", Offset = "0x1B2C830", VA = "0x181B2E230", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x1B2E1C0", Offset = "0x1B2C7C0", VA = "0x181B2E1C0")]
	public MissingMethodException()
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x1B2E210", Offset = "0x1B2C810", VA = "0x181B2E210")]
	public MissingMethodException(string message)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x1B2E140", Offset = "0x1B2C740", VA = "0x181B2E140")]
	public MissingMethodException(string className, string methodName)
	{
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x1B2E1A0", Offset = "0x1B2C7A0", VA = "0x181B2E1A0")]
	protected MissingMethodException(SerializationInfo info, StreamingContext context)
	{
	}
}
