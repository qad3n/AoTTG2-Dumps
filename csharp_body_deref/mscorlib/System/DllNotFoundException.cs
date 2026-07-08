using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000A7")]
public class DllNotFoundException : TypeLoadException
{
	[Token(Token = "0x6000672")]
	[Address(RVA = "0x4FB3F10", Offset = "0x4FB3F10", VA = "0x4FB3F10")]
	public DllNotFoundException()
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x4FB3F50", Offset = "0x4FB3F50", VA = "0x4FB3F50")]
	public DllNotFoundException(string message)
	{
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x4FB3F70", Offset = "0x4FB3F70", VA = "0x4FB3F70")]
	protected DllNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
