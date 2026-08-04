// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.Hashtable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E5D9F0", Offset = "0x3E5D9F0", VA = "0x3E5D9F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x3E5DA50", Offset = "0x3E5DA50", VA = "0x3E5DA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public object this[byte key]
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x3E5DAA0", Offset = "0x3E5DAA0", VA = "0x3E5DAA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x3E5DB50", Offset = "0x3E5DB50", VA = "0x3E5DB50")]
		set
		{
		}
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3E5D7B0", Offset = "0x3E5D7B0", VA = "0x3E5D7B0")]
	public static object GetBoxedByte(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3E5D840", Offset = "0x3E5D840", VA = "0x3E5D840")]
	static Hashtable()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3E5D970", Offset = "0x3E5D970", VA = "0x3E5D970")]
	public Hashtable()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3E5D9B0", Offset = "0x3E5D9B0", VA = "0x3E5D9B0")]
	public Hashtable(int x)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3E5DC10", Offset = "0x3E5DC10", VA = "0x3E5DC10")]
	public void Add(byte k, object v)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3E5DCD0", Offset = "0x3E5DCD0", VA = "0x3E5DCD0")]
	public void Remove(byte k)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3E5DD80", Offset = "0x3E5DD80", VA = "0x3E5DD80")]
	public bool ContainsKey(byte key)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3E5DE30", Offset = "0x3E5DE30", VA = "0x3E5DE30")]
	public new DictionaryEntryEnumerator GetEnumerator()
	{
		return default(DictionaryEntryEnumerator);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3E5DF30", Offset = "0x3E5DF30", VA = "0x3E5DF30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3E5E7E0", Offset = "0x3E5E7E0", VA = "0x3E5E7E0")]
	public object Clone()
	{
		return null;
	}
}
