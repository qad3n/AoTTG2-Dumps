// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UnsafeMeshGenerationNode
// Update status: NEW in this game update
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
	[Address(RVA = "0x32BC730", Offset = "0x32BAD30", VA = "0x1832BC730")]
	private MeshGenerationNodeImpl GetManaged()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001332")]
	[Address(RVA = "0x32B0AC0", Offset = "0x32AF0C0", VA = "0x1832B0AC0")]
	internal static void Create(GCHandle handle, out UnsafeMeshGenerationNode node)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001333")]
	[Address(RVA = "0x32BC640", Offset = "0x32BAC40", VA = "0x1832BC640")]
	public void DrawMesh(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, [Optional] Texture texture, TextureOptions textureOptions = TextureOptions.None)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001334")]
	[Address(RVA = "0x32BC530", Offset = "0x32BAB30", VA = "0x1832BC530")]
	internal void DrawGradientsInternal(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, VectorImage gradientsOwner)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001335")]
	[Address(RVA = "0x32B0AD0", Offset = "0x32AF0D0", VA = "0x1832B0AD0")]
	internal Entry GetParentEntry()
	{
		return null;
	}
}
