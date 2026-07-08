using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000F8")]
public class ObjectDisposedException : InvalidOperationException
{
	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x90")]
	private string _objectName;

	[Token(Token = "0x1700009D")]
	public override string Message
	{
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x4FE3150", Offset = "0x4FE3150", VA = "0x4FE3150", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public string ObjectName
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x4FE30E0", Offset = "0x4FE30E0", VA = "0x4FE30E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x4FE2E50", Offset = "0x4FE2E50", VA = "0x4FE2E50")]
	private ObjectDisposedException()
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x4FE2EF0", Offset = "0x4FE2EF0", VA = "0x4FE2EF0")]
	public ObjectDisposedException(string objectName)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x4FE2EB0", Offset = "0x4FE2EB0", VA = "0x4FE2EB0")]
	public ObjectDisposedException(string objectName, string message)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x4FE2F60", Offset = "0x4FE2F60", VA = "0x4FE2F60")]
	protected ObjectDisposedException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x4FE2FF0", Offset = "0x4FE2FF0", VA = "0x4FE2FF0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
