// ==================== AoTTG2 cross-reference ====================
// Type: System.MemberAccessException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200010F")]
public class MemberAccessException : SystemException
{
	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x1B2CAE0", Offset = "0x1B2B0E0", VA = "0x181B2CAE0")]
	public MemberAccessException()
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x1B2CB30", Offset = "0x1B2B130", VA = "0x181B2CB30")]
	public MemberAccessException(string message)
	{
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected MemberAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
