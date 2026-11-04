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
		[Address(RVA = "0x1CC8DE0", Offset = "0x1CC73E0", VA = "0x181CC8DE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x1CC8E80", Offset = "0x1CC7480", VA = "0x181CC8E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public int Count
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x1CC8D90", Offset = "0x1CC7390", VA = "0x181CC8D90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x1CC8CD0", Offset = "0x1CC72D0", VA = "0x181CC8CD0")]
	public ParameterDictionary()
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x1CC8C10", Offset = "0x1CC7210", VA = "0x181CC8C10")]
	public ParameterDictionary(int capacity)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
	public static implicit operator NonAllocDictionary<byte, object>(ParameterDictionary value)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x1CC89D0", Offset = "0x1CC6FD0", VA = "0x181CC89D0", Slot = "4")]
	private IEnumerator<KeyValuePair<byte, object>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EByte_002CSystem_002EObject_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x1CC8A20", Offset = "0x1CC7020", VA = "0x181CC8A20", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x1CC8960", Offset = "0x1CC6F60", VA = "0x181CC8960")]
	public NonAllocDictionary<byte, object>.PairIterator GetEnumerator()
	{
		return default(NonAllocDictionary<byte, object>.PairIterator);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x1CC88A0", Offset = "0x1CC6EA0", VA = "0x181CC88A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x1CC8230", Offset = "0x1CC6830", VA = "0x181CC8230")]
	public void Add(byte code, string value)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x1CC87B0", Offset = "0x1CC6DB0", VA = "0x181CC87B0")]
	public void Add(byte code, Hashtable value)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x1CC8320", Offset = "0x1CC6920", VA = "0x181CC8320")]
	public void Add(byte code, byte value)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x1CC8460", Offset = "0x1CC6A60", VA = "0x181CC8460")]
	public void Add(byte code, bool value)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x1CC8110", Offset = "0x1CC6710", VA = "0x181CC8110")]
	public void Add(byte code, short value)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x1CC8000", Offset = "0x1CC6600", VA = "0x181CC8000")]
	public void Add(byte code, int value)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x1CC8690", Offset = "0x1CC6C90", VA = "0x181CC8690")]
	public void Add(byte code, long value)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x1CC85A0", Offset = "0x1CC6BA0", VA = "0x181CC85A0")]
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
	[Address(RVA = "0x1CC8900", Offset = "0x1CC6F00", VA = "0x181CC8900")]
	public bool ContainsKey(byte key)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x1CC8B20", Offset = "0x1CC7120", VA = "0x181CC8B20")]
	public object TryGetObject(byte key)
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x1CC8BA0", Offset = "0x1CC71A0", VA = "0x181CC8BA0")]
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
	[Address(RVA = "0x1CC8A70", Offset = "0x1CC7070", VA = "0x181CC8A70")]
	public string ToStringFull(bool includeTypes = true)
	{
		return null;
	}
}
