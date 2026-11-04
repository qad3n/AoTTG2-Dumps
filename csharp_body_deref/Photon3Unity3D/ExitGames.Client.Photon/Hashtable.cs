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
		[Address(RVA = "0x1CC44D0", Offset = "0x1CC2AD0", VA = "0x181CC44D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x1CC4690", Offset = "0x1CC2C90", VA = "0x181CC4690")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public object this[byte key]
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x1CC4530", Offset = "0x1CC2B30", VA = "0x181CC4530")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x1CC45E0", Offset = "0x1CC2BE0", VA = "0x181CC45E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x1CC3CD0", Offset = "0x1CC22D0", VA = "0x181CC3CD0")]
	public static object GetBoxedByte(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x1CC4330", Offset = "0x1CC2930", VA = "0x181CC4330")]
	static Hashtable()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x1CC4440", Offset = "0x1CC2A40", VA = "0x181CC4440")]
	public Hashtable()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x1CC4480", Offset = "0x1CC2A80", VA = "0x181CC4480")]
	public Hashtable(int x)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x1CC3B10", Offset = "0x1CC2110", VA = "0x181CC3B10")]
	public void Add(byte k, object v)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x1CC3DF0", Offset = "0x1CC23F0", VA = "0x181CC3DF0")]
	public void Remove(byte k)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x1CC3C30", Offset = "0x1CC2230", VA = "0x181CC3C30")]
	public bool ContainsKey(byte key)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x1CC3D40", Offset = "0x1CC2340", VA = "0x181CC3D40")]
	public new DictionaryEntryEnumerator GetEnumerator()
	{
		return default(DictionaryEntryEnumerator);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x1CC3E90", Offset = "0x1CC2490", VA = "0x181CC3E90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x1CC3BC0", Offset = "0x1CC21C0", VA = "0x181CC3BC0")]
	public object Clone()
	{
		return null;
	}
}
