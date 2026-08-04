// ==================== AoTTG2 cross-reference ====================
// Type: System.ArgumentException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200008A")]
public class ArgumentException : SystemException
{
	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x90")]
	private string _paramName;

	[Token(Token = "0x17000056")]
	public override string Message
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x3C13870", Offset = "0x3C13870", VA = "0x3C13870", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x3C13690", Offset = "0x3C13690", VA = "0x3C13690")]
	public ArgumentException()
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x3C12490", Offset = "0x3C12490", VA = "0x3C12490")]
	public ArgumentException(string message)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x3C136D0", Offset = "0x3C136D0", VA = "0x3C136D0")]
	public ArgumentException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x3C136F0", Offset = "0x3C136F0", VA = "0x3C136F0")]
	public ArgumentException(string message, string paramName, Exception innerException)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x3C0ADC0", Offset = "0x3C0ADC0", VA = "0x3C0ADC0")]
	public ArgumentException(string message, string paramName)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x3C13730", Offset = "0x3C13730", VA = "0x3C13730")]
	protected ArgumentException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x3C137C0", Offset = "0x3C137C0", VA = "0x3C137C0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
