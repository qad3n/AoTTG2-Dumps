using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004FC")]
public sealed class TargetInvocationException : ApplicationException
{
	[Token(Token = "0x6002554")]
	[Address(RVA = "0x4EF1E00", Offset = "0x4EF1E00", VA = "0x4EF1E00")]
	public TargetInvocationException(Exception inner)
	{
	}

	[Token(Token = "0x6002555")]
	[Address(RVA = "0x4EF1E50", Offset = "0x4EF1E50", VA = "0x4EF1E50")]
	public TargetInvocationException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6002556")]
	[Address(RVA = "0x4EF1E70", Offset = "0x4EF1E70", VA = "0x4EF1E70")]
	internal TargetInvocationException(SerializationInfo info, StreamingContext context)
	{
	}
}
