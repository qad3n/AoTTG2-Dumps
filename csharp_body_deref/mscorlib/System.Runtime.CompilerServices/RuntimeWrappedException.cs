using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x2000481")]
public sealed class RuntimeWrappedException : Exception
{
	[Token(Token = "0x4001303")]
	[FieldOffset(Offset = "0x90")]
	private object _wrappedException;

	[Token(Token = "0x17000474")]
	public object WrappedException
	{
		[Token(Token = "0x6002288")]
		[Address(RVA = "0x4EDB7A0", Offset = "0x4EDB7A0", VA = "0x4EDB7A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002285")]
	[Address(RVA = "0x4EDB580", Offset = "0x4EDB580", VA = "0x4EDB580")]
	public RuntimeWrappedException(object thrownObject)
	{
	}

	[Token(Token = "0x6002286")]
	[Address(RVA = "0x4EDB610", Offset = "0x4EDB610", VA = "0x4EDB610")]
	private RuntimeWrappedException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002287")]
	[Address(RVA = "0x4EDB6F0", Offset = "0x4EDB6F0", VA = "0x4EDB6F0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002289")]
	[Address(RVA = "0x4EDB7B0", Offset = "0x4EDB7B0", VA = "0x4EDB7B0")]
	internal RuntimeWrappedException()
	{
	}
}
