// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ObjectPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/ObjectPool.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002AB")]
internal class ObjectPool<T> where T : new()
{
	[Token(Token = "0x4000A23")]
	[FieldOffset(Offset = "0x0")]
	private readonly Stack<T> m_Stack;

	[Token(Token = "0x4000A24")]
	[FieldOffset(Offset = "0x0")]
	private int m_MaxSize;

	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x0")]
	internal Func<T> CreateFunc;

	[Token(Token = "0x1700038F")]
	public int maxSize
	{
		[Token(Token = "0x60011DD")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011DE")]
		set
		{
		}
	}

	[Token(Token = "0x60011DF")]
	public ObjectPool(Func<T> CreateFunc, int maxSize = 100)
	{
	}

	[Token(Token = "0x60011E0")]
	public int Size()
	{
		return default(int);
	}

	[Token(Token = "0x60011E1")]
	public T Get()
	{
		return (T)null;
	}

	[Token(Token = "0x60011E2")]
	public void Release(T element)
	{
	}
}
