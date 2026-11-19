// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UnsafeMeshGenerationNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002D6")]
internal struct UnsafeMeshGenerationNode
{
	[Token(Token = "0x4000B04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private GCHandle m_Handle;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001331")]
	[Address(RVA = "0x6CBE9D0", Offset = "0x6CBD9D0", VA = "0x6CBE9D0")]
	private MeshGenerationNodeImpl GetManaged()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001332")]
	[Address(RVA = "0x6CBEAA0", Offset = "0x6CBDAA0", VA = "0x6CBEAA0")]
	internal static void Create(GCHandle handle, out UnsafeMeshGenerationNode node)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001333")]
	[Address(RVA = "0x6CBEAB0", Offset = "0x6CBDAB0", VA = "0x6CBEAB0")]
	public void DrawMesh(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, [Optional] Texture texture, TextureOptions textureOptions = TextureOptions.None)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001334")]
	[Address(RVA = "0x6CBEBD0", Offset = "0x6CBDBD0", VA = "0x6CBEBD0")]
	internal void DrawGradientsInternal(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, VectorImage gradientsOwner)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001335")]
	[Address(RVA = "0x6CBED20", Offset = "0x6CBDD20", VA = "0x6CBED20")]
	internal Entry GetParentEntry()
	{
		return null;
	}
}
