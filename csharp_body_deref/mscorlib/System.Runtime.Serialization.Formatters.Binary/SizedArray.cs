using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Serializable]
[Token(Token = "0x2000428")]
internal sealed class SizedArray : ICloneable
{
	[Token(Token = "0x4001202")]
	[FieldOffset(Offset = "0x10")]
	internal object[] objects;

	[Token(Token = "0x4001203")]
	[FieldOffset(Offset = "0x18")]
	internal object[] negObjects;

	[Token(Token = "0x17000459")]
	internal object this[int index]
	{
		[Token(Token = "0x6002190")]
		[Address(RVA = "0x4ED43B0", Offset = "0x4ED43B0", VA = "0x4ED43B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002191")]
		[Address(RVA = "0x4ED42B0", Offset = "0x4ED42B0", VA = "0x4ED42B0")]
		set
		{
		}
	}

	[Token(Token = "0x600218C")]
	[Address(RVA = "0x4ECF410", Offset = "0x4ECF410", VA = "0x4ECF410")]
	internal SizedArray()
	{
	}

	[Token(Token = "0x600218D")]
	[Address(RVA = "0x4ECF570", Offset = "0x4ECF570", VA = "0x4ECF570")]
	internal SizedArray(int length)
	{
	}

	[Token(Token = "0x600218E")]
	[Address(RVA = "0x4ED5870", Offset = "0x4ED5870", VA = "0x4ED5870")]
	private SizedArray(System.Runtime.Serialization.Formatters.Binary.SizedArray sizedArray)
	{
	}

	[Token(Token = "0x600218F")]
	[Address(RVA = "0x4ED5950", Offset = "0x4ED5950", VA = "0x4ED5950", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002192")]
	[Address(RVA = "0x4ED59A0", Offset = "0x4ED59A0", VA = "0x4ED59A0")]
	internal void IncreaseCapacity(int index)
	{
	}
}
