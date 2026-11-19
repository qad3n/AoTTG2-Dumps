// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.ParameterDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x565DD00", Offset = "0x565CD00", VA = "0x565DD00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x565DDA0", Offset = "0x565CDA0", VA = "0x565DDA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public int Count
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x565DDF0", Offset = "0x565CDF0", VA = "0x565DDF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x565DA00", Offset = "0x565CA00", VA = "0x565DA00")]
	public ParameterDictionary()
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x565DAC0", Offset = "0x565CAC0", VA = "0x565DAC0")]
	public ParameterDictionary(int capacity)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x565DB80", Offset = "0x565CB80", VA = "0x565DB80")]
	public static implicit operator NonAllocDictionary<byte, object>(ParameterDictionary value)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x565DBA0", Offset = "0x565CBA0", VA = "0x565DBA0", Slot = "4")]
	private IEnumerator<KeyValuePair<byte, object>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EByte_002CSystem_002EObject_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x565DC30", Offset = "0x565CC30", VA = "0x565DC30", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x565DCC0", Offset = "0x565CCC0", VA = "0x565DCC0")]
	public NonAllocDictionary<byte, object>.PairIterator GetEnumerator()
	{
		return default(NonAllocDictionary<byte, object>.PairIterator);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x565DE30", Offset = "0x565CE30", VA = "0x565DE30")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x565DE80", Offset = "0x565CE80", VA = "0x565DE80")]
	public void Add(byte code, string value)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x565DF70", Offset = "0x565CF70", VA = "0x565DF70")]
	public void Add(byte code, Hashtable value)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x565E060", Offset = "0x565D060", VA = "0x565E060")]
	public void Add(byte code, byte value)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x565E1C0", Offset = "0x565D1C0", VA = "0x565E1C0")]
	public void Add(byte code, bool value)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x565E320", Offset = "0x565D320", VA = "0x565E320")]
	public void Add(byte code, short value)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x565E430", Offset = "0x565D430", VA = "0x565E430")]
	public void Add(byte code, int value)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x565E540", Offset = "0x565D540", VA = "0x565E540")]
	public void Add(byte code, long value)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x565E650", Offset = "0x565D650", VA = "0x565E650")]
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
	[Address(RVA = "0x565E740", Offset = "0x565D740", VA = "0x565E740")]
	public bool ContainsKey(byte key)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x565E790", Offset = "0x565D790", VA = "0x565E790")]
	public object TryGetObject(byte key)
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x565E800", Offset = "0x565D800", VA = "0x565E800")]
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
	[Address(RVA = "0x565E850", Offset = "0x565D850", VA = "0x565E850")]
	public string ToStringFull(bool includeTypes = true)
	{
		return null;
	}
}
