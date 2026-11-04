// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeParallelMultiHashMapIterator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x20000AB")]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct NativeParallelMultiHashMapIterator<TKey> where TKey : struct
{
	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x0")]
	internal TKey key;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x0")]
	internal int NextEntryIndex;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x0")]
	internal int EntryIndex;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000887")]
	public int GetEntryIndex()
	{
		return default(int);
	}
}
