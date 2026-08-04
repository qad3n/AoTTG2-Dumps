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
[Token(Token = "0x2000143")]
public class MissingFieldException : MissingMemberException, ISerializable
{
	[Token(Token = "0x17000114")]
	public override string Message
	{
		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x3CDDF40", Offset = "0x3CDDF40", VA = "0x3CDDF40", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x3CDDC30", Offset = "0x3CDDC30", VA = "0x3CDDC30")]
	public MissingFieldException()
	{
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x3CDDC90", Offset = "0x3CDDC90", VA = "0x3CDDC90")]
	public MissingFieldException(string message)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x3CDDCB0", Offset = "0x3CDDCB0", VA = "0x3CDDCB0")]
	public MissingFieldException(string className, string fieldName)
	{
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x3CDDD70", Offset = "0x3CDDD70", VA = "0x3CDDD70")]
	protected MissingFieldException(SerializationInfo info, StreamingContext context)
	{
	}
}
