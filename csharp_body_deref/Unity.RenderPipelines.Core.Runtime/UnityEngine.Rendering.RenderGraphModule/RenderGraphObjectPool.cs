// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphObjectPool
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6579520", Offset = "0x6578520", VA = "0x6579520")]
		public SharedObjectPoolBase()
		{
		}

		[Token(Token = "0x60011A9")]
		[Address(RVA = "0x6579530", Offset = "0x6578530", VA = "0x6579530", Slot = "4")]
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
	[Address(RVA = "0x6578D00", Offset = "0x6577D00", VA = "0x6578D00")]
	internal RenderGraphObjectPool()
	{
	}

	[Token(Token = "0x60011A0")]
	public T[] GetTempArray<T>(int size)
	{
		return null;
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x6578E10", Offset = "0x6577E10", VA = "0x6578E10")]
	public MaterialPropertyBlock GetTempMaterialPropertyBlock()
	{
		return null;
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x6578EF0", Offset = "0x6577EF0", VA = "0x6578EF0")]
	internal void ReleaseAllTempAlloc()
	{
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x65792A0", Offset = "0x65782A0", VA = "0x65792A0")]
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
	[Address(RVA = "0x6579300", Offset = "0x6578300", VA = "0x6579300")]
	internal void Cleanup()
	{
	}
}
