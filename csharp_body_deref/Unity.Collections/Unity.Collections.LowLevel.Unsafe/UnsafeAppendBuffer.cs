// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer
// Update status: NEW in this game update
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
			[Address(RVA = "0x29B9010", Offset = "0x29B7610", VA = "0x1829B9010")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x29B8FF0", Offset = "0x29B75F0", VA = "0x1829B8FF0")]
		public Reader(ref UnsafeAppendBuffer buffer)
		{
		}

		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x29B8FE0", Offset = "0x29B75E0", VA = "0x1829B8FE0")]
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
		[Address(RVA = "0x29B8E70", Offset = "0x29B7470", VA = "0x1829B8E70")]
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
		[Address(RVA = "0x29B8C90", Offset = "0x29B7290", VA = "0x1829B8C90")]
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
		[Address(RVA = "0xC40300", Offset = "0xC3E900", VA = "0x180C40300")]
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
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x29BDDF0", Offset = "0x29BC3F0", VA = "0x1829BDDF0")]
	public UnsafeAppendBuffer(int initialCapacity, int alignment, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x29BDD60", Offset = "0x29BC360", VA = "0x1829BDD60")]
	public unsafe UnsafeAppendBuffer(void* ptr, int length)
	{
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x29BDA60", Offset = "0x29BC060", VA = "0x1829BDA60", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x29BDB00", Offset = "0x29BC100", VA = "0x1829BDB00", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0xEC4FE0", Offset = "0xEC35E0", VA = "0x180EC4FE0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x29BDC80", Offset = "0x29BC280", VA = "0x1829BDC80")]
	public void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x29BDC50", Offset = "0x29BC250", VA = "0x1829BDC50")]
	public void ResizeUninitialized(int length)
	{
	}

	[Token(Token = "0x6000AF2")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public void Add<T>(T value) where T : struct
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x29BD960", Offset = "0x29BBF60", VA = "0x1829BD960")]
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
	[Address(RVA = "0x29BDC10", Offset = "0x29BC210", VA = "0x1829BDC10")]
	public unsafe void Pop(void* ptr, int structSize)
	{
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0xF0D7C0", Offset = "0xF0BDC0", VA = "0x180F0D7C0")]
	public Reader AsReader()
	{
		return default(Reader);
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x29BD9B0", Offset = "0x29BBFB0", VA = "0x1829BD9B0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckAlignment(int alignment)
	{
	}
}
