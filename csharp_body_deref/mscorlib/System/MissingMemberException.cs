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
		[Address(RVA = "0x4FF8500", Offset = "0x4FF8500", VA = "0x4FF8500", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x4FF8210", Offset = "0x4FF8210", VA = "0x4FF8210")]
	public MissingMemberException()
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x4FF8150", Offset = "0x4FF8150", VA = "0x4FF8150")]
	public MissingMemberException(string message)
	{
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x4FF85E0", Offset = "0x4FF85E0", VA = "0x4FF85E0")]
	public MissingMemberException(string className, string memberName)
	{
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x4FF8260", Offset = "0x4FF8260", VA = "0x4FF8260")]
	protected MissingMemberException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x4FF8630", Offset = "0x4FF8630", VA = "0x4FF8630", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x4FF87C0", Offset = "0x4FF87C0", VA = "0x4FF87C0")]
	internal static string FormatSignature(byte[] signature)
	{
		return null;
	}
}
