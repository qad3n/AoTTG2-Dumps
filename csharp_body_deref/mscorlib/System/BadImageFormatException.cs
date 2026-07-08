using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000096")]
public class BadImageFormatException : SystemException
{
	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x90")]
	private string _fileName;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x98")]
	private string _fusionLog;

	[Token(Token = "0x17000063")]
	public override string Message
	{
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x4F2E970", Offset = "0x4F2E970", VA = "0x4F2E970", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x4F2E700", Offset = "0x4F2E700", VA = "0x4F2E700")]
	public BadImageFormatException()
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x4F2E740", Offset = "0x4F2E740", VA = "0x4F2E740")]
	public BadImageFormatException(string message)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x4F2E760", Offset = "0x4F2E760", VA = "0x4F2E760")]
	public BadImageFormatException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4F2E780", Offset = "0x4F2E780", VA = "0x4F2E780")]
	public BadImageFormatException(string message, string fileName)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4F2E7C0", Offset = "0x4F2E7C0", VA = "0x4F2E7C0")]
	protected BadImageFormatException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4F2E880", Offset = "0x4F2E880", VA = "0x4F2E880", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4F2E9F0", Offset = "0x4F2E9F0", VA = "0x4F2E9F0")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4F2EA60", Offset = "0x4F2EA60", VA = "0x4F2EA60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
