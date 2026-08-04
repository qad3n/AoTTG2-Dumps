// ==================== AoTTG2 cross-reference ====================
// Type: System.MissingMemberException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000144")]
public class MissingMemberException : MemberAccessException
{
	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x90")]
	protected string ClassName;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x98")]
	protected string MemberName;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0xA0")]
	protected byte[] Signature;

	[Token(Token = "0x17000115")]
	public override string Message
	{
		[Token(Token = "0x6000C8C")]
		[Address(RVA = "0x3CDE020", Offset = "0x3CDE020", VA = "0x3CDE020", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x3CDDD30", Offset = "0x3CDDD30", VA = "0x3CDDD30")]
	public MissingMemberException()
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x3CDDC70", Offset = "0x3CDDC70", VA = "0x3CDDC70")]
	public MissingMemberException(string message)
	{
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x3CDE100", Offset = "0x3CDE100", VA = "0x3CDE100")]
	public MissingMemberException(string className, string memberName)
	{
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x3CDDD80", Offset = "0x3CDDD80", VA = "0x3CDDD80")]
	protected MissingMemberException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x3CDE150", Offset = "0x3CDE150", VA = "0x3CDE150", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x3CDE2E0", Offset = "0x3CDE2E0", VA = "0x3CDE2E0")]
	internal static string FormatSignature(byte[] signature)
	{
		return null;
	}
}
