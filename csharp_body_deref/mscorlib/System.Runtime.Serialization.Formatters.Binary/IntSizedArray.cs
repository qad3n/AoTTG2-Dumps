using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Serializable]
[Token(Token = "0x2000429")]
internal sealed class IntSizedArray : ICloneable
{
	[Token(Token = "0x4001204")]
	[FieldOffset(Offset = "0x10")]
	internal int[] objects;

	[Token(Token = "0x4001205")]
	[FieldOffset(Offset = "0x18")]
	internal int[] negObjects;

	[Token(Token = "0x1700045A")]
	internal int this[int index]
	{
		[Token(Token = "0x6002196")]
		[Address(RVA = "0x4ED5E30", Offset = "0x4ED5E30", VA = "0x4ED5E30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002197")]
		[Address(RVA = "0x4ED5E80", Offset = "0x4ED5E80", VA = "0x4ED5E80")]
		set
		{
		}
	}

	[Token(Token = "0x6002193")]
	[Address(RVA = "0x4ED5C50", Offset = "0x4ED5C50", VA = "0x4ED5C50")]
	public IntSizedArray()
	{
	}

	[Token(Token = "0x6002194")]
	[Address(RVA = "0x4ED5CD0", Offset = "0x4ED5CD0", VA = "0x4ED5CD0")]
	private IntSizedArray(System.Runtime.Serialization.Formatters.Binary.IntSizedArray sizedArray)
	{
	}

	[Token(Token = "0x6002195")]
	[Address(RVA = "0x4ED5DE0", Offset = "0x4ED5DE0", VA = "0x4ED5DE0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002198")]
	[Address(RVA = "0x4ED5F10", Offset = "0x4ED5F10", VA = "0x4ED5F10")]
	internal void IncreaseCapacity(int index)
	{
	}
}
