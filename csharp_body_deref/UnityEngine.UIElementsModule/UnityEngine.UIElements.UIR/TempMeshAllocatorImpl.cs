// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.TempMeshAllocatorImpl
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005D7")]
internal class TempMeshAllocatorImpl : IDisposable
{
	[Token(Token = "0x20005D8")]
	private struct ThreadData
	{
		[Token(Token = "0x40015B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public List<IntPtr> allocations;
	}

	[Token(Token = "0x40015AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private GCHandle m_GCHandle;

	[Token(Token = "0x40015AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ThreadData[] m_ThreadData;

	[Token(Token = "0x40015AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TempAllocator<Vertex> m_VertexPool;

	[Token(Token = "0x40015AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private TempAllocator<ushort> m_IndexPool;

	[Token(Token = "0x17000AA6")]
	protected bool disposed
	{
		[Token(Token = "0x6002B60")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B61")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B5B")]
	[Address(RVA = "0x31B0D60", Offset = "0x31AF360", VA = "0x1831B0D60")]
	public TempMeshAllocatorImpl()
	{
	}

	[Token(Token = "0x6002B5C")]
	[Address(RVA = "0x31B0BF0", Offset = "0x31AF1F0", VA = "0x1831B0BF0")]
	public void CreateNativeHandle(out TempMeshAllocator allocator)
	{
	}

	[Token(Token = "0x6002B5D")]
	private NativeSlice<T> Allocate<T>(int count, int alignment) where T : struct
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6002B5E")]
	[Address(RVA = "0x31B0770", Offset = "0x31AED70", VA = "0x1831B0770")]
	public void AllocateTempMesh(int vertexCount, int indexCount, out NativeSlice<Vertex> vertices, out NativeSlice<ushort> indices)
	{
	}

	[Token(Token = "0x6002B5F")]
	[Address(RVA = "0x31B0A00", Offset = "0x31AF000", VA = "0x1831B0A00")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002B62")]
	[Address(RVA = "0x31B0C00", Offset = "0x31AF200", VA = "0x1831B0C00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B63")]
	[Address(RVA = "0x31B0CC0", Offset = "0x31AF2C0", VA = "0x1831B0CC0")]
	protected void Dispose(bool disposing)
	{
	}
}
