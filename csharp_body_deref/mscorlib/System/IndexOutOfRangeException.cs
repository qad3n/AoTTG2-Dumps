using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000D8")]
public sealed class IndexOutOfRangeException : SystemException
{
	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x4FCC6C0", Offset = "0x4FCC6C0", VA = "0x4FCC6C0")]
	public IndexOutOfRangeException()
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x4FCC700", Offset = "0x4FCC700", VA = "0x4FCC700")]
	public IndexOutOfRangeException(string message)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x4FCC720", Offset = "0x4FCC720", VA = "0x4FCC720")]
	internal IndexOutOfRangeException(SerializationInfo info, StreamingContext context)
	{
	}
}
