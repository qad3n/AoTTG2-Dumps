using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000009")]
public class Hashtable : Dictionary<object, object>
{
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly object[] boxedByte;

	[Token(Token = "0x17000011")]
	public new object this[object key]
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x3B680A0", Offset = "0x3B680A0", VA = "0x3B680A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x3B68100", Offset = "0x3B68100", VA = "0x3B68100")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public object this[byte key]
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x3B68150", Offset = "0x3B68150", VA = "0x3B68150")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x3B68200", Offset = "0x3B68200", VA = "0x3B68200")]
		set
		{
		}
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3B67E60", Offset = "0x3B67E60", VA = "0x3B67E60")]
	public static object GetBoxedByte(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3B67EF0", Offset = "0x3B67EF0", VA = "0x3B67EF0")]
	static Hashtable()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3B68020", Offset = "0x3B68020", VA = "0x3B68020")]
	public Hashtable()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3B68060", Offset = "0x3B68060", VA = "0x3B68060")]
	public Hashtable(int x)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3B682C0", Offset = "0x3B682C0", VA = "0x3B682C0")]
	public void Add(byte k, object v)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3B68380", Offset = "0x3B68380", VA = "0x3B68380")]
	public void Remove(byte k)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3B68430", Offset = "0x3B68430", VA = "0x3B68430")]
	public bool ContainsKey(byte key)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3B684E0", Offset = "0x3B684E0", VA = "0x3B684E0")]
	public new DictionaryEntryEnumerator GetEnumerator()
	{
		return default(DictionaryEntryEnumerator);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3B685E0", Offset = "0x3B685E0", VA = "0x3B685E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3B68E90", Offset = "0x3B68E90", VA = "0x3B68E90")]
	public object Clone()
	{
		return null;
	}
}
