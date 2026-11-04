// ==================== AoTTG2 cross-reference ====================
// Type: System.MissingFieldException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200016B")]
public class MissingFieldException : MissingMemberException, ISerializable
{
	[Token(Token = "0x17000115")]
	public override string Message
	{
		[Token(Token = "0x6000CD0")]
		[Address(RVA = "0x1B442A0", Offset = "0x1B428A0", VA = "0x181B442A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x1B441A0", Offset = "0x1B427A0", VA = "0x181B441A0")]
	public MissingFieldException()
	{
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x1B44280", Offset = "0x1B42880", VA = "0x181B44280")]
	public MissingFieldException(string message)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x1B441F0", Offset = "0x1B427F0", VA = "0x181B441F0")]
	public MissingFieldException(string className, string fieldName)
	{
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x1B2E1A0", Offset = "0x1B2C7A0", VA = "0x181B2E1A0")]
	protected MissingFieldException(SerializationInfo info, StreamingContext context)
	{
	}
}
