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
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x3C14490", Offset = "0x3C14490", VA = "0x3C14490", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x3C14220", Offset = "0x3C14220", VA = "0x3C14220")]
	public BadImageFormatException()
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x3C14260", Offset = "0x3C14260", VA = "0x3C14260")]
	public BadImageFormatException(string message)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x3C14280", Offset = "0x3C14280", VA = "0x3C14280")]
	public BadImageFormatException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x3C142A0", Offset = "0x3C142A0", VA = "0x3C142A0")]
	public BadImageFormatException(string message, string fileName)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x3C142E0", Offset = "0x3C142E0", VA = "0x3C142E0")]
	protected BadImageFormatException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x3C143A0", Offset = "0x3C143A0", VA = "0x3C143A0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x3C14510", Offset = "0x3C14510", VA = "0x3C14510")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x3C14580", Offset = "0x3C14580", VA = "0x3C14580", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
