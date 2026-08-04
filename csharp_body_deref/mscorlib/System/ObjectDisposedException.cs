// ==================== AoTTG2 cross-reference ====================
// Type: System.ObjectDisposedException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3CC8C70", Offset = "0x3CC8C70", VA = "0x3CC8C70", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public string ObjectName
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x3CC8C00", Offset = "0x3CC8C00", VA = "0x3CC8C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x3CC8970", Offset = "0x3CC8970", VA = "0x3CC8970")]
	private ObjectDisposedException()
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x3CC8A10", Offset = "0x3CC8A10", VA = "0x3CC8A10")]
	public ObjectDisposedException(string objectName)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x3CC89D0", Offset = "0x3CC89D0", VA = "0x3CC89D0")]
	public ObjectDisposedException(string objectName, string message)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x3CC8A80", Offset = "0x3CC8A80", VA = "0x3CC8A80")]
	protected ObjectDisposedException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x3CC8B10", Offset = "0x3CC8B10", VA = "0x3CC8B10", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
