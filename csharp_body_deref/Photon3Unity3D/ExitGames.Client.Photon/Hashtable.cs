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
		[Address(RVA = "0x564EA80", Offset = "0x564DA80", VA = "0x564EA80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x564EAE0", Offset = "0x564DAE0", VA = "0x564EAE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public object this[byte key]
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x564EB30", Offset = "0x564DB30", VA = "0x564EB30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x564EBE0", Offset = "0x564DBE0", VA = "0x564EBE0")]
		set
		{
		}
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x564E840", Offset = "0x564D840", VA = "0x564E840")]
	public static object GetBoxedByte(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x564E8D0", Offset = "0x564D8D0", VA = "0x564E8D0")]
	static Hashtable()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x564EA00", Offset = "0x564DA00", VA = "0x564EA00")]
	public Hashtable()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x564EA40", Offset = "0x564DA40", VA = "0x564EA40")]
	public Hashtable(int x)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x564ECA0", Offset = "0x564DCA0", VA = "0x564ECA0")]
	public void Add(byte k, object v)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x564ED60", Offset = "0x564DD60", VA = "0x564ED60")]
	public void Remove(byte k)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x564EE10", Offset = "0x564DE10", VA = "0x564EE10")]
	public bool ContainsKey(byte key)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x564EEC0", Offset = "0x564DEC0", VA = "0x564EEC0")]
	public new DictionaryEntryEnumerator GetEnumerator()
	{
		return default(DictionaryEntryEnumerator);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x564EF80", Offset = "0x564DF80", VA = "0x564EF80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x564F680", Offset = "0x564E680", VA = "0x564F680")]
	public object Clone()
	{
		return null;
	}
}
