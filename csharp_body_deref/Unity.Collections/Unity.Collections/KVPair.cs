// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.KVPair
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x200008D")]
[DebuggerDisplay("Key = {Key}, Value = {Value}")]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
public struct KVPair<TKey, TValue> where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x0")]
	internal unsafe HashMapHelper<TKey>* m_Data;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Index;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Next;

	[Token(Token = "0x170000B1")]
	public static KVPair<TKey, TValue> Null
	{
		[Token(Token = "0x600072D")]
		get
		{
			return default(KVPair<TKey, TValue>);
		}
	}

	[Token(Token = "0x170000B2")]
	public TKey Key
	{
		[Token(Token = "0x600072E")]
		get
		{
			return (TKey)null;
		}
	}

	[Token(Token = "0x170000B3")]
	public unsafe ref TValue Value
	{
		[Token(Token = "0x600072F")]
		get
		{
			return ref *(TValue*)null;
		}
	}

	[Token(Token = "0x6000730")]
	public bool GetKeyValue(out TKey key, out TValue value)
	{
		return default(bool);
	}
}
