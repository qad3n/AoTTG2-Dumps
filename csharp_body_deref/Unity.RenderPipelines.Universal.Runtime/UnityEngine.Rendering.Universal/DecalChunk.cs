// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalChunk
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine.Jobs;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000080")]
internal abstract class DecalChunk : IDisposable
{
	[Token(Token = "0x170000D9")]
	public int count
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public int capacity
	{
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000308")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public JobHandle currentJobHandle
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
		[CompilerGenerated]
		get
		{
			return default(JobHandle);
		}
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x111C9E0", Offset = "0x111AFE0", VA = "0x18111C9E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0xC7D820", Offset = "0xC7BE20", VA = "0x180C7D820", Slot = "5")]
	public virtual void Push()
	{
	}

	[Token(Token = "0x600030C")]
	public abstract void RemoveAtSwapBack(int index);

	[Token(Token = "0x600030D")]
	public abstract void SetCapacity(int capacity);

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x2C1BE60", Offset = "0x2C1A460", VA = "0x182C1BE60")]
	protected void ResizeNativeArray(ref TransformAccessArray array, DecalProjector[] decalProjectors, int capacity)
	{
	}

	[Token(Token = "0x6000310")]
	protected void RemoveAtSwapBack<T>(ref NativeArray<T> array, int index, int count) where T : struct
	{
	}

	[Token(Token = "0x6000311")]
	protected void RemoveAtSwapBack<T>(ref T[] array, int index, int count)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected DecalChunk()
	{
	}
}
