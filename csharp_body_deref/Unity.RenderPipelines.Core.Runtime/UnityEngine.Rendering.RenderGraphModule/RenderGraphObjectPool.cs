// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphObjectPool
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Pool;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000278")]
public sealed class RenderGraphObjectPool
{
	[Token(Token = "0x2000279")]
	private class SharedObjectPoolBase
	{
		[Token(Token = "0x60011A8")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public SharedObjectPoolBase()
		{
		}

		[Token(Token = "0x60011A9")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
		public virtual void Clear()
		{
		}
	}

	[Token(Token = "0x200027A")]
	private class SharedObjectPool<T> : SharedObjectPoolBase where T : class, new()
	{
		[Token(Token = "0x4000B31")]
		[FieldOffset(Offset = "0x0")]
		private static readonly UnityEngine.Pool.ObjectPool<T> s_Pool;

		[Token(Token = "0x60011AA")]
		private static UnityEngine.Pool.ObjectPool<T> AllocatePool()
		{
			return null;
		}

		[Token(Token = "0x60011AB")]
		public override void Clear()
		{
		}

		[Token(Token = "0x60011AC")]
		public static T Get()
		{
			return null;
		}

		[Token(Token = "0x60011AD")]
		public static void Release(T toRelease)
		{
		}

		[Token(Token = "0x60011AE")]
		public SharedObjectPool()
		{
		}
	}

	[Token(Token = "0x4000B2D")]
	[FieldOffset(Offset = "0x0")]
	private static DynamicArray<SharedObjectPoolBase> s_AllocatedPools;

	[Token(Token = "0x4000B2E")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<(Type, int), Stack<object>> m_ArrayPool;

	[Token(Token = "0x4000B2F")]
	[FieldOffset(Offset = "0x18")]
	private List<(object, (Type, int))> m_AllocatedArrays;

	[Token(Token = "0x4000B30")]
	[FieldOffset(Offset = "0x20")]
	private List<MaterialPropertyBlock> m_AllocatedMaterialPropertyBlocks;

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x2B98620", Offset = "0x2B96C20", VA = "0x182B98620")]
	internal RenderGraphObjectPool()
	{
	}

	[Token(Token = "0x60011A0")]
	public T[] GetTempArray<T>(int size)
	{
		return null;
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x2B980D0", Offset = "0x2B966D0", VA = "0x182B980D0")]
	public MaterialPropertyBlock GetTempMaterialPropertyBlock()
	{
		return null;
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x2B98240", Offset = "0x2B96840", VA = "0x182B98240")]
	internal void ReleaseAllTempAlloc()
	{
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x2B981D0", Offset = "0x2B967D0", VA = "0x182B981D0")]
	internal bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60011A4")]
	internal T Get<T>() where T : class, new()
	{
		return null;
	}

	[Token(Token = "0x60011A5")]
	internal void Release<T>(T value) where T : class, new()
	{
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x2B97F30", Offset = "0x2B96530", VA = "0x182B97F30")]
	internal void Cleanup()
	{
	}
}
