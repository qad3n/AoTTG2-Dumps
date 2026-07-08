using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20004F9")]
internal class ManagedObjectStore<T> where T : class
{
	[Token(Token = "0x4001091")]
	[FieldOffset(Offset = "0x0")]
	private int m_Length;

	[Token(Token = "0x4001092")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<T[]> m_Chunks;

	[Token(Token = "0x4001093")]
	[FieldOffset(Offset = "0x0")]
	private readonly Queue<int> m_Free;

	[Token(Token = "0x6001E96")]
	public ManagedObjectStore()
	{
	}

	[Token(Token = "0x6001E97")]
	public T GetValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6001E98")]
	public void UpdateValue(ref int index, T value)
	{
	}
}
