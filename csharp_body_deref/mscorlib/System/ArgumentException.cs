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
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x5419AC0", Offset = "0x5418AC0", VA = "0x5419AC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x54198E0", Offset = "0x54188E0", VA = "0x54198E0")]
	public ArgumentException()
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x54186D0", Offset = "0x54176D0", VA = "0x54186D0")]
	public ArgumentException(string message)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x5419920", Offset = "0x5418920", VA = "0x5419920")]
	public ArgumentException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x5419940", Offset = "0x5418940", VA = "0x5419940")]
	public ArgumentException(string message, string paramName, Exception innerException)
	{
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x5410FB0", Offset = "0x540FFB0", VA = "0x5410FB0")]
	public ArgumentException(string message, string paramName)
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x5419980", Offset = "0x5418980", VA = "0x5419980")]
	protected ArgumentException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x5419A10", Offset = "0x5418A10", VA = "0x5419A10", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
