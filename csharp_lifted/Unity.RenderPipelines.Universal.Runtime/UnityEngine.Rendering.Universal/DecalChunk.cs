// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalChunk
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6612C80", Offset = "0x6611C80", VA = "0x6612C80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x6612C90", Offset = "0x6611C90", VA = "0x6612C90")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public int capacity
	{
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x6612CA0", Offset = "0x6611CA0", VA = "0x6612CA0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000308")]
		[Address(RVA = "0x6612CB0", Offset = "0x6611CB0", VA = "0x6612CB0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public JobHandle currentJobHandle
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x6612CC0", Offset = "0x6611CC0", VA = "0x6612CC0")]
		[CompilerGenerated]
		get
		{
			return default(JobHandle);
		}
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x6612CD0", Offset = "0x6611CD0", VA = "0x6612CD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x6612CE0", Offset = "0x6611CE0", VA = "0x6612CE0", Slot = "5")]
	public virtual void Push()
	{
	}

	[Token(Token = "0x600030C")]
	public abstract void RemoveAtSwapBack(int index);

	[Token(Token = "0x600030D")]
	public abstract void SetCapacity(int capacity);

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x6612CF0", Offset = "0x6611CF0", VA = "0x6612CF0", Slot = "8")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x6612D00", Offset = "0x6611D00", VA = "0x6612D00")]
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
	[Address(RVA = "0x6612DB0", Offset = "0x6611DB0", VA = "0x6612DB0")]
	protected DecalChunk()
	{
	}
}
