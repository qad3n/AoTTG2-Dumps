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
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x5419EB0", Offset = "0x5418EB0", VA = "0x5419EB0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x5419C60", Offset = "0x5418C60", VA = "0x5419C60")]
	public ArgumentOutOfRangeException()
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x5419CA0", Offset = "0x5418CA0", VA = "0x5419CA0")]
	public ArgumentOutOfRangeException(string paramName)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x5414BE0", Offset = "0x5413BE0", VA = "0x5414BE0")]
	public ArgumentOutOfRangeException(string paramName, string message)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x5416650", Offset = "0x5415650", VA = "0x5416650")]
	public ArgumentOutOfRangeException(string paramName, object actualValue, string message)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x5419D00", Offset = "0x5418D00", VA = "0x5419D00")]
	protected ArgumentOutOfRangeException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x5419E00", Offset = "0x5418E00", VA = "0x5419E00", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
