// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ObjectPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/ObjectPool.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000087")]
public class ObjectPool<T> where T : new()
{
	[Token(Token = "0x2000088")]
	public struct PooledObject : IDisposable
	{
		[Token(Token = "0x400021F")]
		[FieldOffset(Offset = "0x0")]
		private readonly T m_ToReturn;

		[Token(Token = "0x4000220")]
		[FieldOffset(Offset = "0x0")]
		private readonly ObjectPool<T> m_Pool;

		[Token(Token = "0x600060C")]
		internal PooledObject(T value, ObjectPool<T> pool)
		{
		}

		[Token(Token = "0x600060D")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x0")]
	private readonly Stack<T> m_Stack;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> m_ActionOnGet;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> m_ActionOnRelease;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool m_CollectionCheck;

	[Token(Token = "0x17000061")]
	public int countAll
	{
		[Token(Token = "0x6000604")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000605")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public int countActive
	{
		[Token(Token = "0x6000606")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000063")]
	public int countInactive
	{
		[Token(Token = "0x6000607")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000608")]
	public ObjectPool(UnityAction<T> actionOnGet, UnityAction<T> actionOnRelease, bool collectionCheck = true)
	{
	}

	[Token(Token = "0x6000609")]
	public T Get()
	{
		return (T)null;
	}

	[Token(Token = "0x600060A")]
	public PooledObject Get(out T v)
	{
		return default(PooledObject);
	}

	[Token(Token = "0x600060B")]
	public void Release(T element)
	{
	}
}
