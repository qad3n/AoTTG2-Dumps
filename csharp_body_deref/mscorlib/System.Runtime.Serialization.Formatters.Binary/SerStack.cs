using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000427")]
internal sealed class SerStack
{
	[Token(Token = "0x40011FF")]
	[FieldOffset(Offset = "0x10")]
	internal object[] objects;

	[Token(Token = "0x4001200")]
	[FieldOffset(Offset = "0x18")]
	internal string stackId;

	[Token(Token = "0x4001201")]
	[FieldOffset(Offset = "0x20")]
	internal int top;

	[Token(Token = "0x6002185")]
	[Address(RVA = "0x4ECBDF0", Offset = "0x4ECBDF0", VA = "0x4ECBDF0")]
	internal SerStack(string stackId)
	{
	}

	[Token(Token = "0x6002186")]
	[Address(RVA = "0x4ECF040", Offset = "0x4ECF040", VA = "0x4ECF040")]
	internal void Push(object obj)
	{
	}

	[Token(Token = "0x6002187")]
	[Address(RVA = "0x4ECEFD0", Offset = "0x4ECEFD0", VA = "0x4ECEFD0")]
	internal object Pop()
	{
		return null;
	}

	[Token(Token = "0x6002188")]
	[Address(RVA = "0x4ED57F0", Offset = "0x4ED57F0", VA = "0x4ED57F0")]
	internal void IncreaseCapacity()
	{
	}

	[Token(Token = "0x6002189")]
	[Address(RVA = "0x4ED3B00", Offset = "0x4ED3B00", VA = "0x4ED3B00")]
	internal object Peek()
	{
		return null;
	}

	[Token(Token = "0x600218A")]
	[Address(RVA = "0x4ED44D0", Offset = "0x4ED44D0", VA = "0x4ED44D0")]
	internal object PeekPeek()
	{
		return null;
	}

	[Token(Token = "0x600218B")]
	[Address(RVA = "0x4ECEFC0", Offset = "0x4ECEFC0", VA = "0x4ECEFC0")]
	internal bool IsEmpty()
	{
		return default(bool);
	}
}
