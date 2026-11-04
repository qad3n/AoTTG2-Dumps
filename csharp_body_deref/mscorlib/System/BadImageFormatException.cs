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
[Token(Token = "0x20000BF")]
public class BadImageFormatException : SystemException
{
	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x90")]
	private string _fileName;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x98")]
	private string _fusionLog;

	[Token(Token = "0x17000063")]
	public override string Message
	{
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x1A78C40", Offset = "0x1A77240", VA = "0x181A78C40", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x1A78BF0", Offset = "0x1A771F0", VA = "0x181A78BF0")]
	public BadImageFormatException()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x1A78B90", Offset = "0x1A77190", VA = "0x181A78B90")]
	public BadImageFormatException(string message)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x1A78B70", Offset = "0x1A77170", VA = "0x181A78B70")]
	public BadImageFormatException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x1A78BB0", Offset = "0x1A771B0", VA = "0x181A78BB0")]
	public BadImageFormatException(string message, string fileName)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x1A78AA0", Offset = "0x1A770A0", VA = "0x181A78AA0")]
	protected BadImageFormatException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x1A78730", Offset = "0x1A76D30", VA = "0x181A78730", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x1A78820", Offset = "0x1A76E20", VA = "0x181A78820")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x1A788B0", Offset = "0x1A76EB0", VA = "0x181A788B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
