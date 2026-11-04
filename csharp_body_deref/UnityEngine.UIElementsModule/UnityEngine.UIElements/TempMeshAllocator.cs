// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TempMeshAllocator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002DE")]
[NativeContainerIsReadOnly]
[NativeContainer]
public struct TempMeshAllocator
{
	[Token(Token = "0x4000B30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private GCHandle m_Handle;

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x32B0AC0", Offset = "0x32AF0C0", VA = "0x1832B0AC0")]
	internal static void Create(GCHandle handle, out TempMeshAllocator allocator)
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x32B6740", Offset = "0x32B4D40", VA = "0x1832B6740")]
	public void AllocateTempMesh(int vertexCount, int indexCount, out NativeSlice<Vertex> vertices, out NativeSlice<ushort> indices)
	{
	}
}
