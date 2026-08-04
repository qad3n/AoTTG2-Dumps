// ==================== AoTTG2 cross-reference ====================
// Type: System.ArgumentOutOfRangeException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200008C")]
public class ArgumentOutOfRangeException : ArgumentException
{
	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x98")]
	private object _actualValue;

	[Token(Token = "0x17000057")]
	public override string Message
	{
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x3C13C60", Offset = "0x3C13C60", VA = "0x3C13C60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x3C13A10", Offset = "0x3C13A10", VA = "0x3C13A10")]
	public ArgumentOutOfRangeException()
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x3C13A50", Offset = "0x3C13A50", VA = "0x3C13A50")]
	public ArgumentOutOfRangeException(string paramName)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x3C0EB50", Offset = "0x3C0EB50", VA = "0x3C0EB50")]
	public ArgumentOutOfRangeException(string paramName, string message)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x3C103D0", Offset = "0x3C103D0", VA = "0x3C103D0")]
	public ArgumentOutOfRangeException(string paramName, object actualValue, string message)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x3C13AB0", Offset = "0x3C13AB0", VA = "0x3C13AB0")]
	protected ArgumentOutOfRangeException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x3C13BB0", Offset = "0x3C13BB0", VA = "0x3C13BB0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
