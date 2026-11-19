// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Pool.ObjectPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/ObjectPool.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x20002EF")]
public class ObjectPool<T> : IDisposable, IPool, IObjectPool<T> where T : class
{
	[Token(Token = "0x4000771")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly List<T> m_List;

	[Token(Token = "0x4000772")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Func<T> m_CreateFunc;

	[Token(Token = "0x4000773")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<T> m_ActionOnGet;

	[Token(Token = "0x4000774")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<T> m_ActionOnRelease;

	[Token(Token = "0x4000775")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<T> m_ActionOnDestroy;

	[Token(Token = "0x4000776")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly int m_MaxSize;

	[Token(Token = "0x4000777")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal bool m_CollectionCheck;

	[Token(Token = "0x4000778")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T m_FreshlyReleased;

	[Token(Token = "0x170002E1")]
	public int CountAll
	{
		[Token(Token = "0x60011F6")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011F7")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	public int CountInactive
	{
		[Token(Token = "0x60011F8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60011F9")]
	public ObjectPool(Func<T> createFunc, [Optional] Action<T> actionOnGet, [Optional] Action<T> actionOnRelease, [Optional] Action<T> actionOnDestroy, bool collectionCheck = true, int defaultCapacity = 10, int maxSize = 10000)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FA")]
	public T Get()
	{
		return null;
	}

	[Token(Token = "0x60011FB")]
	public PooledObject<T> Get(out T v)
	{
		return default(PooledObject<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FC")]
	public void Release(T element)
	{
	}

	[Token(Token = "0x60011FD")]
	public void Clear()
	{
	}

	[Token(Token = "0x60011FE")]
	public void Dispose()
	{
	}
}
