using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x200028F")]
public class ObjectPool<T> : IDisposable, IObjectPool<T> where T : class
{
	[Token(Token = "0x40006C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly List<T> m_List;

	[Token(Token = "0x40006C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Func<T> m_CreateFunc;

	[Token(Token = "0x40006C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<T> m_ActionOnGet;

	[Token(Token = "0x40006CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<T> m_ActionOnRelease;

	[Token(Token = "0x40006CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<T> m_ActionOnDestroy;

	[Token(Token = "0x40006CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly int m_MaxSize;

	[Token(Token = "0x40006CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal bool m_CollectionCheck;

	[Token(Token = "0x40006CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T m_FreshlyReleased;

	[Token(Token = "0x17000257")]
	public int CountAll
	{
		[Token(Token = "0x6000DD9")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DDA")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000258")]
	public int CountInactive
	{
		[Token(Token = "0x6000DDB")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000DDC")]
	public ObjectPool(Func<T> createFunc, [Optional] Action<T> actionOnGet, [Optional] Action<T> actionOnRelease, [Optional] Action<T> actionOnDestroy, bool collectionCheck = true, int defaultCapacity = 10, int maxSize = 10000)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDD")]
	public T Get()
	{
		return null;
	}

	[Token(Token = "0x6000DDE")]
	public PooledObject<T> Get(out T v)
	{
		return default(PooledObject<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDF")]
	public void Release(T element)
	{
	}

	[Token(Token = "0x6000DE0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000DE1")]
	public void Dispose()
	{
	}
}
