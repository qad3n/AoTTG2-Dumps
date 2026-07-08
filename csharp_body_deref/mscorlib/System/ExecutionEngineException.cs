using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000AD")]
[Obsolete("This type previously indicated an unspecified fatal error in the runtime. The runtime no longer raises this exception so this type is obsolete.")]
public sealed class ExecutionEngineException : SystemException
{
	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x4FB5370", Offset = "0x4FB5370", VA = "0x4FB5370")]
	public ExecutionEngineException()
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x4FB53B0", Offset = "0x4FB53B0", VA = "0x4FB53B0")]
	public ExecutionEngineException(string message)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x4FB53D0", Offset = "0x4FB53D0", VA = "0x4FB53D0")]
	internal ExecutionEngineException(SerializationInfo info, StreamingContext context)
	{
	}
}
