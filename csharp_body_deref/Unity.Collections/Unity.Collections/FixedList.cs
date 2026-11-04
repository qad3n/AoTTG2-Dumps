// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine;

namespace Unity.Collections;

[Serializable]
[Token(Token = "0x200004A")]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(FixedBytes32Align8)
})]
internal struct FixedList<T, U> : INativeList<T>, IIndexable<T> where T : struct where U : struct
{
	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal U data;

	[Token(Token = "0x1700003A")]
	internal ushort length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60001F8")]
		readonly get
		{
			return default(ushort);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60001F9")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	internal unsafe readonly byte* buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60001FA")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x1700003C")]
	[CreateProperty]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60001FB")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60001FC")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	[CreateProperty]
	private IEnumerable<T> Elements
	{
		[Token(Token = "0x60001FD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60001FE")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003F")]
	internal readonly int LengthInBytes
	{
		[Token(Token = "0x60001FF")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000040")]
	internal unsafe readonly byte* Buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000200")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000041")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000201")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000202")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000203")]
		readonly get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000204")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000205")]
	public unsafe ref T ElementAt(int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6000206")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000207")]
	public void Add(in T item)
	{
	}

	[Token(Token = "0x6000208")]
	public unsafe void AddRange(void* ptr, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000209")]
	public void AddNoResize(in T item)
	{
	}

	[Token(Token = "0x600020A")]
	public unsafe void AddRangeNoResize(void* ptr, int length)
	{
	}

	[Token(Token = "0x600020B")]
	public void AddReplicate(in T value, int count)
	{
	}

	[Token(Token = "0x600020C")]
	public void Clear()
	{
	}

	[Token(Token = "0x600020D")]
	public void InsertRangeWithBeginEnd(int begin, int end)
	{
	}

	[Token(Token = "0x600020E")]
	public void InsertRange(int index, int count)
	{
	}

	[Token(Token = "0x600020F")]
	public void Insert(int index, in T item)
	{
	}

	[Token(Token = "0x6000210")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[Token(Token = "0x6000211")]
	public void RemoveRangeSwapBack(int index, int count)
	{
	}

	[Token(Token = "0x6000212")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000213")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6000214")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}
}
[Token(Token = "0x200004B")]
[GenerateTestsForBurstCompatibility]
internal struct FixedList
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000216")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	internal static int PaddingBytes<T>() where T : struct
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000217")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	internal static int StorageBytes<BUFFER, T>() where BUFFER : struct where T : struct
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000218")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	internal static int Capacity<BUFFER, T>() where BUFFER : struct where T : struct
	{
		return default(int);
	}

	[Token(Token = "0x6000219")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckResize<BUFFER, T>(int newLength) where BUFFER : struct where T : struct
	{
	}
}
