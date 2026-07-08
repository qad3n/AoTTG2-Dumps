using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004FB")]
public class TargetException : ApplicationException
{
	[Token(Token = "0x6002550")]
	[Address(RVA = "0x4EF1D90", Offset = "0x4EF1D90", VA = "0x4EF1D90")]
	public TargetException()
	{
	}

	[Token(Token = "0x6002551")]
	[Address(RVA = "0x4EF1DB0", Offset = "0x4EF1DB0", VA = "0x4EF1DB0")]
	public TargetException(string message)
	{
	}

	[Token(Token = "0x6002552")]
	[Address(RVA = "0x4EF1DD0", Offset = "0x4EF1DD0", VA = "0x4EF1DD0")]
	public TargetException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6002553")]
	[Address(RVA = "0x4EF1DF0", Offset = "0x4EF1DF0", VA = "0x4EF1DF0")]
	protected TargetException(SerializationInfo info, StreamingContext context)
	{
	}
}
