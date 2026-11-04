// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.KeyValue
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000125")]
[DebuggerDisplay("Key = {Key}, Value = {Value}")]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
public struct KeyValue<TKey, TValue> where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x0")]
	internal unsafe UnsafeParallelHashMapData* m_Buffer;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Index;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Next;

	[Token(Token = "0x1700016F")]
	public static KeyValue<TKey, TValue> Null
	{
		[Token(Token = "0x6000C5F")]
		get
		{
			return default(KeyValue<TKey, TValue>);
		}
	}

	[Token(Token = "0x17000170")]
	public TKey Key
	{
		[Token(Token = "0x6000C60")]
		get
		{
			return (TKey)null;
		}
	}

	[Token(Token = "0x17000171")]
	public unsafe ref TValue Value
	{
		[Token(Token = "0x6000C61")]
		get
		{
			return ref *(TValue*)null;
		}
	}

	[Token(Token = "0x6000C62")]
	public bool GetKeyValue(out TKey key, out TValue value)
	{
		return default(bool);
	}
}
