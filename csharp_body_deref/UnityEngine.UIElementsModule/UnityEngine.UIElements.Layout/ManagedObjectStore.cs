// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.ManagedObjectStore
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20005EF")]
internal class ManagedObjectStore<T>
{
	[Token(Token = "0x4001623")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_ChunkSize;

	[Token(Token = "0x4001624")]
	[FieldOffset(Offset = "0x0")]
	private int m_Length;

	[Token(Token = "0x4001625")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<T[]> m_Chunks;

	[Token(Token = "0x4001626")]
	[FieldOffset(Offset = "0x0")]
	private readonly Queue<int> m_Free;

	[Token(Token = "0x6002BD5")]
	public ManagedObjectStore(int chunkSize = 2048)
	{
	}

	[Token(Token = "0x6002BD6")]
	public T GetValue(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6002BD7")]
	public void UpdateValue(ref int index, T value)
	{
	}
}
