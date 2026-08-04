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
		[Address(RVA = "0x3E6DE80", Offset = "0x3E6DE80", VA = "0x3E6DE80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x3E6DF20", Offset = "0x3E6DF20", VA = "0x3E6DF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public int Count
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x3E6DF70", Offset = "0x3E6DF70", VA = "0x3E6DF70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3E6DB80", Offset = "0x3E6DB80", VA = "0x3E6DB80")]
	public ParameterDictionary()
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3E6DC40", Offset = "0x3E6DC40", VA = "0x3E6DC40")]
	public ParameterDictionary(int capacity)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3E6DD00", Offset = "0x3E6DD00", VA = "0x3E6DD00")]
	public static implicit operator NonAllocDictionary<byte, object>(ParameterDictionary value)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3E6DD20", Offset = "0x3E6DD20", VA = "0x3E6DD20", Slot = "4")]
	private IEnumerator<KeyValuePair<byte, object>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EByte_002CSystem_002EObject_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3E6DDB0", Offset = "0x3E6DDB0", VA = "0x3E6DDB0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3E6DE40", Offset = "0x3E6DE40", VA = "0x3E6DE40")]
	public NonAllocDictionary<byte, object>.PairIterator GetEnumerator()
	{
		return default(NonAllocDictionary<byte, object>.PairIterator);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3E6DFB0", Offset = "0x3E6DFB0", VA = "0x3E6DFB0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3E6E000", Offset = "0x3E6E000", VA = "0x3E6E000")]
	public void Add(byte code, string value)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3E6E0F0", Offset = "0x3E6E0F0", VA = "0x3E6E0F0")]
	public void Add(byte code, Hashtable value)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3E6E1E0", Offset = "0x3E6E1E0", VA = "0x3E6E1E0")]
	public void Add(byte code, byte value)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3E6E350", Offset = "0x3E6E350", VA = "0x3E6E350")]
	public void Add(byte code, bool value)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3E6E4D0", Offset = "0x3E6E4D0", VA = "0x3E6E4D0")]
	public void Add(byte code, short value)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3E6E5E0", Offset = "0x3E6E5E0", VA = "0x3E6E5E0")]
	public void Add(byte code, int value)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x3E6E6F0", Offset = "0x3E6E6F0", VA = "0x3E6E6F0")]
	public void Add(byte code, long value)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3E6E800", Offset = "0x3E6E800", VA = "0x3E6E800")]
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
	[Address(RVA = "0x3E6E8F0", Offset = "0x3E6E8F0", VA = "0x3E6E8F0")]
	public bool ContainsKey(byte key)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3E6E940", Offset = "0x3E6E940", VA = "0x3E6E940")]
	public object TryGetObject(byte key)
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3E6E9B0", Offset = "0x3E6E9B0", VA = "0x3E6E9B0")]
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
	[Address(RVA = "0x3E6EA00", Offset = "0x3E6EA00", VA = "0x3E6EA00")]
	public string ToStringFull(bool includeTypes = true)
	{
		return null;
	}
}
