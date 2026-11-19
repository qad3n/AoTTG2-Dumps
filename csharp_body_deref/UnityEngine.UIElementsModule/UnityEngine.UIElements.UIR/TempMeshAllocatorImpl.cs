// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.TempMeshAllocatorImpl
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20005C2")]
internal class TempMeshAllocatorImpl : IDisposable
{
	[Token(Token = "0x20005C3")]
	private struct ThreadData
	{
		[Token(Token = "0x40014F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public List<IntPtr> allocations;
	}

	[Token(Token = "0x40014EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private GCHandle m_GCHandle;

	[Token(Token = "0x40014EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ThreadData[] m_ThreadData;

	[Token(Token = "0x40014F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TempAllocator<Vertex> m_VertexPool;

	[Token(Token = "0x40014F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private TempAllocator<ushort> m_IndexPool;

	[Token(Token = "0x17000A9A")]
	protected bool disposed
	{
		[Token(Token = "0x6002AFF")]
		[Address(RVA = "0x6BAAC20", Offset = "0x6BA9C20", VA = "0x6BAAC20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B00")]
		[Address(RVA = "0x6BAAC30", Offset = "0x6BA9C30", VA = "0x6BAAC30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002AFA")]
	[Address(RVA = "0x6BAA590", Offset = "0x6BA9590", VA = "0x6BAA590")]
	public TempMeshAllocatorImpl()
	{
	}

	[Token(Token = "0x6002AFB")]
	[Address(RVA = "0x6BAA760", Offset = "0x6BA9760", VA = "0x6BAA760")]
	public void CreateNativeHandle(out TempMeshAllocator allocator)
	{
	}

	[Token(Token = "0x6002AFC")]
	private NativeSlice<T> Allocate<T>(int count, int alignment) where T : struct
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6002AFD")]
	[Address(RVA = "0x6BAA770", Offset = "0x6BA9770", VA = "0x6BAA770")]
	public void AllocateTempMesh(int vertexCount, int indexCount, out NativeSlice<Vertex> vertices, out NativeSlice<ushort> indices)
	{
	}

	[Token(Token = "0x6002AFE")]
	[Address(RVA = "0x6BAA9F0", Offset = "0x6BA99F0", VA = "0x6BAA9F0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002B01")]
	[Address(RVA = "0x6BAAC40", Offset = "0x6BA9C40", VA = "0x6BAAC40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B02")]
	[Address(RVA = "0x6BAACA0", Offset = "0x6BA9CA0", VA = "0x6BAACA0")]
	protected void Dispose(bool disposing)
	{
	}
}
