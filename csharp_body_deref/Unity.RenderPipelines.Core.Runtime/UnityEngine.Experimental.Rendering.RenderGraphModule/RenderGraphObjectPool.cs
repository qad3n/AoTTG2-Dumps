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
		[Address(RVA = "0x48673C0", Offset = "0x48673C0", VA = "0x48673C0")]
		public static void ClearAll()
		{
		}

		[Token(Token = "0x600043B")]
		[Address(RVA = "0x4867540", Offset = "0x4867540", VA = "0x4867540")]
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
	[Address(RVA = "0x4866C60", Offset = "0x4866C60", VA = "0x4866C60")]
	internal RenderGraphObjectPool()
	{
	}

	[Token(Token = "0x6000433")]
	public T[] GetTempArray<T>(int size)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x4866D70", Offset = "0x4866D70", VA = "0x4866D70")]
	public MaterialPropertyBlock GetTempMaterialPropertyBlock()
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4866E80", Offset = "0x4866E80", VA = "0x4866E80")]
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
	[Address(RVA = "0x48672F0", Offset = "0x48672F0", VA = "0x48672F0")]
	internal void Cleanup()
	{
	}
}
