using System.Collections;
using System.Collections.Generic;
using ExitGames.Client.Photon.StructWrapping;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200001D")]
public class ParameterDictionary : IEnumerable<KeyValuePair<byte, object>>, IEnumerable
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x10")]
	public readonly NonAllocDictionary<byte, object> paramDict;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x18")]
	public readonly StructWrapperPools wrapperPools;

	[Token(Token = "0x17000037")]
	public object this[byte key]
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x3B78530", Offset = "0x3B78530", VA = "0x3B78530")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x3B785D0", Offset = "0x3B785D0", VA = "0x3B785D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public int Count
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x3B78620", Offset = "0x3B78620", VA = "0x3B78620")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3B78230", Offset = "0x3B78230", VA = "0x3B78230")]
	public ParameterDictionary()
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3B782F0", Offset = "0x3B782F0", VA = "0x3B782F0")]
	public ParameterDictionary(int capacity)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3B783B0", Offset = "0x3B783B0", VA = "0x3B783B0")]
	public static implicit operator NonAllocDictionary<byte, object>(ParameterDictionary value)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3B783D0", Offset = "0x3B783D0", VA = "0x3B783D0", Slot = "4")]
	private IEnumerator<KeyValuePair<byte, object>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EByte_002CSystem_002EObject_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3B78460", Offset = "0x3B78460", VA = "0x3B78460", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3B784F0", Offset = "0x3B784F0", VA = "0x3B784F0")]
	public NonAllocDictionary<byte, object>.PairIterator GetEnumerator()
	{
		return default(NonAllocDictionary<byte, object>.PairIterator);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3B78660", Offset = "0x3B78660", VA = "0x3B78660")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3B786B0", Offset = "0x3B786B0", VA = "0x3B786B0")]
	public void Add(byte code, string value)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3B787A0", Offset = "0x3B787A0", VA = "0x3B787A0")]
	public void Add(byte code, Hashtable value)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3B78890", Offset = "0x3B78890", VA = "0x3B78890")]
	public void Add(byte code, byte value)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3B78A00", Offset = "0x3B78A00", VA = "0x3B78A00")]
	public void Add(byte code, bool value)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3B78B80", Offset = "0x3B78B80", VA = "0x3B78B80")]
	public void Add(byte code, short value)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3B78C90", Offset = "0x3B78C90", VA = "0x3B78C90")]
	public void Add(byte code, int value)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x3B78DA0", Offset = "0x3B78DA0", VA = "0x3B78DA0")]
	public void Add(byte code, long value)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3B78EB0", Offset = "0x3B78EB0", VA = "0x3B78EB0")]
	public void Add(byte code, object value)
	{
	}

	[Token(Token = "0x600010A")]
	public T Unwrap<T>(byte key)
	{
		return (T)null;
	}

	[Token(Token = "0x600010B")]
	public T Get<T>(byte key)
	{
		return (T)null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3B78FA0", Offset = "0x3B78FA0", VA = "0x3B78FA0")]
	public bool ContainsKey(byte key)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3B78FF0", Offset = "0x3B78FF0", VA = "0x3B78FF0")]
	public object TryGetObject(byte key)
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3B79060", Offset = "0x3B79060", VA = "0x3B79060")]
	public bool TryGetValue(byte key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	public bool TryGetValue<T>(byte key, out T value) where T : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3B790B0", Offset = "0x3B790B0", VA = "0x3B790B0")]
	public string ToStringFull(bool includeTypes = true)
	{
		return null;
	}
}
