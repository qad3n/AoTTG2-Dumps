// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeBitArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x2000087")]
[NativeContainer]
[DebuggerDisplay("Length = {Length}, IsCreated = {IsCreated}")]
[GenerateTestsForBurstCompatibility]
public struct NativeBitArray : INativeDisposable, IDisposable
{
	[Token(Token = "0x2000088")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	public struct ReadOnly
	{
		[Token(Token = "0x40003AA")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal UnsafeBitArray.ReadOnly m_BitArray;

		[Token(Token = "0x170000AE")]
		public readonly bool IsCreated
		{
			[Token(Token = "0x600071C")]
			[Address(RVA = "0x637DAA0", Offset = "0x637CAA0", VA = "0x637DAA0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000AF")]
		public readonly bool IsEmpty
		{
			[Token(Token = "0x600071D")]
			[Address(RVA = "0x637DAC0", Offset = "0x637CAC0", VA = "0x637DAC0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000B0")]
		public readonly int Length
		{
			[Token(Token = "0x600071F")]
			[Address(RVA = "0x637DB10", Offset = "0x637CB10", VA = "0x637DB10")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600071E")]
		[Address(RVA = "0x637DA70", Offset = "0x637CA70", VA = "0x637DA70")]
		internal ReadOnly(ref NativeBitArray data)
		{
		}

		[Token(Token = "0x6000720")]
		[Address(RVA = "0x637DB20", Offset = "0x637CB20", VA = "0x637DB20")]
		public readonly ulong GetBits(int pos, int numBits = 1)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000721")]
		[Address(RVA = "0x637DB60", Offset = "0x637CB60", VA = "0x637DB60")]
		public readonly bool IsSet(int pos)
		{
			return default(bool);
		}

		[Token(Token = "0x6000722")]
		[Address(RVA = "0x637DB80", Offset = "0x637CB80", VA = "0x637DB80")]
		public readonly int Find(int pos, int numBits)
		{
			return default(int);
		}

		[Token(Token = "0x6000723")]
		[Address(RVA = "0x637DBC0", Offset = "0x637CBC0", VA = "0x637DBC0")]
		public readonly int Find(int pos, int count, int numBits)
		{
			return default(int);
		}

		[Token(Token = "0x6000724")]
		[Address(RVA = "0x637DBE0", Offset = "0x637CBE0", VA = "0x637DBE0")]
		public readonly bool TestNone(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000725")]
		[Address(RVA = "0x637DC20", Offset = "0x637CC20", VA = "0x637DC20")]
		public readonly bool TestAny(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000726")]
		[Address(RVA = "0x637DC60", Offset = "0x637CC60", VA = "0x637DC60")]
		public readonly bool TestAll(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000727")]
		[Address(RVA = "0x637DCA0", Offset = "0x637CCA0", VA = "0x637DCA0")]
		public readonly int CountBits(int pos, int numBits = 1)
		{
			return default(int);
		}

		[Token(Token = "0x6000728")]
		[Address(RVA = "0x637DCE0", Offset = "0x637CCE0", VA = "0x637DCE0")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private readonly void CheckRead()
		{
		}
	}

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeBitArray* m_BitArray;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x8")]
	internal AllocatorManager.AllocatorHandle m_Allocator;

	[Token(Token = "0x40003A9")]
	public const int MaxCapacity = 2147483584;

	[Token(Token = "0x170000AA")]
	public readonly bool IsCreated
	{
		[Token(Token = "0x6000700")]
		[Address(RVA = "0x637CD90", Offset = "0x637BD90", VA = "0x637CD90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AB")]
	public readonly bool IsEmpty
	{
		[Token(Token = "0x6000701")]
		[Address(RVA = "0x637CDC0", Offset = "0x637BDC0", VA = "0x637CDC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AC")]
	public readonly int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x637D160", Offset = "0x637C160", VA = "0x637D160")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AD")]
	public readonly int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000708")]
		[Address(RVA = "0x637D180", Offset = "0x637C180", VA = "0x637D180")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x637CC70", Offset = "0x637BC70", VA = "0x637CC70")]
	public NativeBitArray(int numBits, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x637CDE0", Offset = "0x637BDE0", VA = "0x637CDE0")]
	public void Resize(int numBits, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x637CF50", Offset = "0x637BF50", VA = "0x637CF50")]
	public void SetCapacity(int capacityInBits)
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x637CF70", Offset = "0x637BF70", VA = "0x637CF70")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x637CFA0", Offset = "0x637BFA0", VA = "0x637CFA0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x637D0B0", Offset = "0x637C0B0", VA = "0x637D0B0", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x637D1A0", Offset = "0x637C1A0", VA = "0x637D1A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600070A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public NativeArray<T> AsNativeArray<T>() where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x637D200", Offset = "0x637C200", VA = "0x637D200")]
	public void Set(int pos, bool value)
	{
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x637D2A0", Offset = "0x637C2A0", VA = "0x637D2A0")]
	public void SetBits(int pos, bool value, int numBits)
	{
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x637D500", Offset = "0x637C500", VA = "0x637D500")]
	public void SetBits(int pos, ulong value, int numBits = 1)
	{
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x637D5E0", Offset = "0x637C5E0", VA = "0x637D5E0")]
	public ulong GetBits(int pos, int numBits = 1)
	{
		return default(ulong);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x637D620", Offset = "0x637C620", VA = "0x637D620")]
	public bool IsSet(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x637D640", Offset = "0x637C640", VA = "0x637D640")]
	public void Copy(int dstPos, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x637D680", Offset = "0x637C680", VA = "0x637D680")]
	public void Copy(int dstPos, ref NativeBitArray srcBitArray, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x637D900", Offset = "0x637C900", VA = "0x637D900")]
	public int Find(int pos, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x637D940", Offset = "0x637C940", VA = "0x637D940")]
	public int Find(int pos, int count, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x637D960", Offset = "0x637C960", VA = "0x637D960")]
	public bool TestNone(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x637D9A0", Offset = "0x637C9A0", VA = "0x637D9A0")]
	public bool TestAny(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x637D9E0", Offset = "0x637C9E0", VA = "0x637D9E0")]
	public bool TestAll(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x637DA20", Offset = "0x637CA20", VA = "0x637DA20")]
	public int CountBits(int pos, int numBits = 1)
	{
		return default(int);
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x637DA60", Offset = "0x637CA60", VA = "0x637DA60")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x637DA80", Offset = "0x637CA80", VA = "0x637DA80")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[Token(Token = "0x600071A")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckReadBounds<T>() where T : struct
	{
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x637DA90", Offset = "0x637CA90", VA = "0x637DA90")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}
}
