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

[Token(Token = "0x2000051")]
public class ObjectPool<T> where T : new()
{
	[Token(Token = "0x2000052")]
	public struct PooledObject : IDisposable
	{
		[Token(Token = "0x4000140")]
		[FieldOffset(Offset = "0x0")]
		private readonly T m_ToReturn;

		[Token(Token = "0x4000141")]
		[FieldOffset(Offset = "0x0")]
		private readonly ObjectPool<T> m_Pool;

		[Token(Token = "0x6000523")]
		internal PooledObject(T value, ObjectPool<T> pool)
		{
		}

		[Token(Token = "0x6000524")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x0")]
	private readonly Stack<T> m_Stack;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> m_ActionOnGet;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> m_ActionOnRelease;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool m_CollectionCheck;

	[Token(Token = "0x17000040")]
	public int countAll
	{
		[Token(Token = "0x600051B")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600051C")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public int countActive
	{
		[Token(Token = "0x600051D")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000042")]
	public int countInactive
	{
		[Token(Token = "0x600051E")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600051F")]
	public ObjectPool(UnityAction<T> actionOnGet, UnityAction<T> actionOnRelease, bool collectionCheck = true)
	{
	}

	[Token(Token = "0x6000520")]
	public T Get()
	{
		return (T)null;
	}

	[Token(Token = "0x6000521")]
	public PooledObject Get(out T v)
	{
		return default(PooledObject);
	}

	[Token(Token = "0x6000522")]
	public void Release(T element)
	{
	}
}
