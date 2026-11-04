// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeBitArray
// Update status: NEW in this game update
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
			[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000AF")]
		public readonly bool IsEmpty
		{
			[Token(Token = "0x600071D")]
			[Address(RVA = "0x29B8770", Offset = "0x29B6D70", VA = "0x1829B8770")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000B0")]
		public readonly int Length
		{
			[Token(Token = "0x600071F")]
			[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600071E")]
		[Address(RVA = "0x29B8740", Offset = "0x29B6D40", VA = "0x1829B8740")]
		internal ReadOnly(ref NativeBitArray data)
		{
		}

		[Token(Token = "0x6000720")]
		[Address(RVA = "0x29B85D0", Offset = "0x29B6BD0", VA = "0x1829B85D0")]
		public readonly ulong GetBits(int pos, int numBits = 1)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000721")]
		[Address(RVA = "0x29B8640", Offset = "0x29B6C40", VA = "0x1829B8640")]
		public readonly bool IsSet(int pos)
		{
			return default(bool);
		}

		[Token(Token = "0x6000722")]
		[Address(RVA = "0x29B85A0", Offset = "0x29B6BA0", VA = "0x1829B85A0")]
		public readonly int Find(int pos, int numBits)
		{
			return default(int);
		}

		[Token(Token = "0x6000723")]
		[Address(RVA = "0x29B8580", Offset = "0x29B6B80", VA = "0x1829B8580")]
		public readonly int Find(int pos, int count, int numBits)
		{
			return default(int);
		}

		[Token(Token = "0x6000724")]
		[Address(RVA = "0x29B86B0", Offset = "0x29B6CB0", VA = "0x1829B86B0")]
		public readonly bool TestNone(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000725")]
		[Address(RVA = "0x29B8680", Offset = "0x29B6C80", VA = "0x1829B8680")]
		public readonly bool TestAny(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000726")]
		[Address(RVA = "0x29B8650", Offset = "0x29B6C50", VA = "0x1829B8650")]
		public readonly bool TestAll(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000727")]
		[Address(RVA = "0x29B7EF0", Offset = "0x29B64F0", VA = "0x1829B7EF0")]
		public readonly int CountBits(int pos, int numBits = 1)
		{
			return default(int);
		}

		[Token(Token = "0x6000728")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
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
		[Address(RVA = "0x29B5610", Offset = "0x29B3C10", VA = "0x1829B5610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AB")]
	public readonly bool IsEmpty
	{
		[Token(Token = "0x6000701")]
		[Address(RVA = "0x29B5630", Offset = "0x29B3C30", VA = "0x1829B5630")]
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
		[Address(RVA = "0x194C6E0", Offset = "0x194ACE0", VA = "0x18194C6E0")]
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
		[Address(RVA = "0x29B55F0", Offset = "0x29B3BF0", VA = "0x1829B55F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x29B5440", Offset = "0x29B3A40", VA = "0x1829B5440")]
	public NativeBitArray(int numBits, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x29B5270", Offset = "0x29B3870", VA = "0x1829B5270")]
	public void Resize(int numBits, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x29B5320", Offset = "0x29B3920", VA = "0x1829B5320")]
	public void SetCapacity(int capacityInBits)
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x29B5420", Offset = "0x29B3A20", VA = "0x1829B5420")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x29B5110", Offset = "0x29B3710", VA = "0x1829B5110", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x29B5010", Offset = "0x29B3610", VA = "0x1829B5010", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x29B4F50", Offset = "0x29B3550", VA = "0x1829B4F50")]
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
	[Address(RVA = "0x29B5340", Offset = "0x29B3940", VA = "0x1829B5340")]
	public void Set(int pos, bool value)
	{
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x29B52E0", Offset = "0x29B38E0", VA = "0x1829B52E0")]
	public void SetBits(int pos, bool value, int numBits)
	{
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x29B5300", Offset = "0x29B3900", VA = "0x1829B5300")]
	public void SetBits(int pos, ulong value, int numBits = 1)
	{
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x29B5230", Offset = "0x29B3830", VA = "0x1829B5230")]
	public ulong GetBits(int pos, int numBits = 1)
	{
		return default(ulong);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x29B5260", Offset = "0x29B3860", VA = "0x1829B5260")]
	public bool IsSet(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x29B4FB0", Offset = "0x29B35B0", VA = "0x1829B4FB0")]
	public void Copy(int dstPos, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x29B4F90", Offset = "0x29B3590", VA = "0x1829B4F90")]
	public void Copy(int dstPos, ref NativeBitArray srcBitArray, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x29B51E0", Offset = "0x29B37E0", VA = "0x1829B51E0")]
	public int Find(int pos, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x29B5210", Offset = "0x29B3810", VA = "0x1829B5210")]
	public int Find(int pos, int count, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x29B53F0", Offset = "0x29B39F0", VA = "0x1829B53F0")]
	public bool TestNone(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x29B53C0", Offset = "0x29B39C0", VA = "0x1829B53C0")]
	public bool TestAny(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x29B5390", Offset = "0x29B3990", VA = "0x1829B5390")]
	public bool TestAll(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x29B4FE0", Offset = "0x29B35E0", VA = "0x1829B4FE0")]
	public int CountBits(int pos, int numBits = 1)
	{
		return default(int);
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x29B4F20", Offset = "0x29B3520", VA = "0x1829B4F20")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}
}
