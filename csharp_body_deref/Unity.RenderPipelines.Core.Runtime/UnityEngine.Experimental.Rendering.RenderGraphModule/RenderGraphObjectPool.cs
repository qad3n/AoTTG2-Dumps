// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200003E")]
public sealed class RenderGraphObjectPool
{
	[Token(Token = "0x200003F")]
	private abstract class SharedObjectPoolBase
	{
		[Token(Token = "0x40000FD")]
		[FieldOffset(Offset = "0x0")]
		protected static List<SharedObjectPoolBase> s_AllocatedPools;

		[Token(Token = "0x6000439")]
		protected abstract void Clear();

		[Token(Token = "0x600043A")]
		[Address(RVA = "0x4B8C4B0", Offset = "0x4B8C4B0", VA = "0x4B8C4B0")]
		public static void ClearAll()
		{
		}

		[Token(Token = "0x600043B")]
		[Address(RVA = "0x4B8C630", Offset = "0x4B8C630", VA = "0x4B8C630")]
		protected SharedObjectPoolBase()
		{
		}
	}

	[Token(Token = "0x2000040")]
	private class SharedObjectPool<T> : SharedObjectPoolBase where T : new()
	{
		[Token(Token = "0x40000FE")]
		[FieldOffset(Offset = "0x0")]
		private Stack<T> m_Pool;

		[Token(Token = "0x40000FF")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Lazy<SharedObjectPool<T>> s_Instance;

		[Token(Token = "0x17000039")]
		public static SharedObjectPool<T> sharedPool
		{
			[Token(Token = "0x6000441")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600043D")]
		public T Get()
		{
			return (T)null;
		}

		[Token(Token = "0x600043E")]
		public void Release(T value)
		{
		}

		[Token(Token = "0x600043F")]
		private static SharedObjectPool<T> AllocatePool()
		{
			return null;
		}

		[Token(Token = "0x6000440")]
		protected override void Clear()
		{
		}

		[Token(Token = "0x6000442")]
		public SharedObjectPool()
		{
		}
	}

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<(Type, int), Stack<object>> m_ArrayPool;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x18")]
	private List<(object, (Type, int))> m_AllocatedArrays;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x20")]
	private List<MaterialPropertyBlock> m_AllocatedMaterialPropertyBlocks;

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x4B8BD50", Offset = "0x4B8BD50", VA = "0x4B8BD50")]
	internal RenderGraphObjectPool()
	{
	}

	[Token(Token = "0x6000433")]
	public T[] GetTempArray<T>(int size)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x4B8BE60", Offset = "0x4B8BE60", VA = "0x4B8BE60")]
	public MaterialPropertyBlock GetTempMaterialPropertyBlock()
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4B8BF70", Offset = "0x4B8BF70", VA = "0x4B8BF70")]
	internal void ReleaseAllTempAlloc()
	{
	}

	[Token(Token = "0x6000436")]
	internal T Get<T>() where T : new()
	{
		return (T)null;
	}

	[Token(Token = "0x6000437")]
	internal void Release<T>(T value) where T : new()
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x4B8C3E0", Offset = "0x4B8C3E0", VA = "0x4B8C3E0")]
	internal void Cleanup()
	{
	}
}
