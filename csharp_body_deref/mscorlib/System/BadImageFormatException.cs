// ==================== AoTTG2 cross-reference ====================
// Type: System.BadImageFormatException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x541A6E0", Offset = "0x54196E0", VA = "0x541A6E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x541A470", Offset = "0x5419470", VA = "0x541A470")]
	public BadImageFormatException()
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x541A4B0", Offset = "0x54194B0", VA = "0x541A4B0")]
	public BadImageFormatException(string message)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x541A4D0", Offset = "0x54194D0", VA = "0x541A4D0")]
	public BadImageFormatException(string message, Exception inner)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x541A4F0", Offset = "0x54194F0", VA = "0x541A4F0")]
	public BadImageFormatException(string message, string fileName)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x541A530", Offset = "0x5419530", VA = "0x541A530")]
	protected BadImageFormatException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x541A5F0", Offset = "0x54195F0", VA = "0x541A5F0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x541A770", Offset = "0x5419770", VA = "0x541A770")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x541A7F0", Offset = "0x54197F0", VA = "0x541A7F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
