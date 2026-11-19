// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000100")]
[GenerateTestsForBurstCompatibility]
public struct UnsafeAppendBuffer : INativeDisposable, IDisposable
{
	[Token(Token = "0x2000101")]
	[GenerateTestsForBurstCompatibility]
	public struct Reader
	{
		[Token(Token = "0x400049F")]
		[FieldOffset(Offset = "0x0")]
		public unsafe readonly byte* Ptr;

		[Token(Token = "0x40004A0")]
		[FieldOffset(Offset = "0x8")]
		public readonly int Size;

		[Token(Token = "0x40004A1")]
		[FieldOffset(Offset = "0xC")]
		public int Offset;

		[Token(Token = "0x1700013B")]
		public bool EndOfBuffer
		{
			[Token(Token = "0x6000AFC")]
			[Address(RVA = "0x638C480", Offset = "0x638B480", VA = "0x638C480")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x638C3C0", Offset = "0x638B3C0", VA = "0x638C3C0")]
		public Reader(ref UnsafeAppendBuffer buffer)
		{
		}

		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x638C470", Offset = "0x638B470", VA = "0x638C470")]
		public unsafe Reader(void* ptr, int length)
		{
		}

		[Token(Token = "0x6000AFD")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public void ReadNext<T>(out T value) where T : struct
		{
		}

		[Token(Token = "0x6000AFE")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public T ReadNext<T>() where T : struct
		{
			return (T)null;
		}

		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x638C490", Offset = "0x638B490", VA = "0x638C490")]
		public unsafe void* ReadNext(int structSize)
		{
			//IL_0002: Expected I, but got O
			return (void*)unchecked((nint)null);
		}

		[Token(Token = "0x6000B00")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public void ReadNext<T>(out NativeArray<T> value, AllocatorManager.AllocatorHandle allocator) where T : struct
		{
		}

		[Token(Token = "0x6000B01")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public unsafe void* ReadNextArray<T>(out int length) where T : struct
		{
			//IL_0002: Expected I, but got O
			return (void*)unchecked((nint)null);
		}

		[Token(Token = "0x6000B02")]
		[Address(RVA = "0x638C4D0", Offset = "0x638B4D0", VA = "0x638C4D0")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckBounds(int structSize)
		{
		}
	}

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe byte* Ptr;

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x8")]
	public int Length;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0xC")]
	public int Capacity;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x10")]
	public AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x14")]
	public readonly int Alignment;

	[Token(Token = "0x17000139")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x638C190", Offset = "0x638B190", VA = "0x638C190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x638C1A0", Offset = "0x638B1A0", VA = "0x638C1A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x638C030", Offset = "0x638B030", VA = "0x638C030")]
	public UnsafeAppendBuffer(int initialCapacity, int alignment, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x638C110", Offset = "0x638B110", VA = "0x638C110")]
	public unsafe UnsafeAppendBuffer(void* ptr, int length)
	{
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x638C1B0", Offset = "0x638B1B0", VA = "0x638C1B0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x638C240", Offset = "0x638B240", VA = "0x638C240", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x638C300", Offset = "0x638B300", VA = "0x638C300")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x638C050", Offset = "0x638B050", VA = "0x638C050")]
	public void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x638C310", Offset = "0x638B310", VA = "0x638C310")]
	public void ResizeUninitialized(int length)
	{
	}

	[Token(Token = "0x6000AF2")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public void Add<T>(T value) where T : struct
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x638C330", Offset = "0x638B330", VA = "0x638C330")]
	public unsafe void Add(void* ptr, int structSize)
	{
	}

	[Token(Token = "0x6000AF4")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe void AddArray<T>(void* ptr, int length) where T : struct
	{
	}

	[Token(Token = "0x6000AF5")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public void Add<T>(NativeArray<T> value) where T : struct
	{
	}

	[Token(Token = "0x6000AF6")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public T Pop<T>() where T : struct
	{
		return (T)null;
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x638C370", Offset = "0x638B370", VA = "0x638C370")]
	public unsafe void Pop(void* ptr, int structSize)
	{
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x638C3B0", Offset = "0x638B3B0", VA = "0x638C3B0")]
	public Reader AsReader()
	{
		return default(Reader);
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x638C3E0", Offset = "0x638B3E0", VA = "0x638C3E0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckAlignment(int alignment)
	{
	}
}
