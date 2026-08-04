// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SerializedDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000096")]
public class SerializedDictionary<K, V> : SerializedDictionary<K, V, K, V>
{
	[Token(Token = "0x600064C")]
	public override K SerializeKey(K key)
	{
		return (K)null;
	}

	[Token(Token = "0x600064D")]
	public override V SerializeValue(V val)
	{
		return (V)null;
	}

	[Token(Token = "0x600064E")]
	public override K DeserializeKey(K key)
	{
		return (K)null;
	}

	[Token(Token = "0x600064F")]
	public override V DeserializeValue(V val)
	{
		return (V)null;
	}

	[Token(Token = "0x6000650")]
	public SerializedDictionary()
	{
	}
}
[Serializable]
[Token(Token = "0x2000097")]
public abstract class SerializedDictionary<K, V, SK, SV> : Dictionary<K, V>, ISerializationCallbackReceiver
{
	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private List<SK> m_Keys;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private List<SV> m_Values;

	[Token(Token = "0x6000651")]
	public abstract SK SerializeKey(K key);

	[Token(Token = "0x6000652")]
	public abstract SV SerializeValue(V value);

	[Token(Token = "0x6000653")]
	public abstract K DeserializeKey(SK serializedKey);

	[Token(Token = "0x6000654")]
	public abstract V DeserializeValue(SV serializedValue);

	[Token(Token = "0x6000655")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000656")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000657")]
	protected SerializedDictionary()
	{
	}
}
