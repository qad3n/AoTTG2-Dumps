// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshGenerationNode
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002D5")]
[NativeContainer]
public struct MeshGenerationNode
{
	[Token(Token = "0x4000B03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private UnsafeMeshGenerationNode m_UnsafeNode;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132F")]
	[Address(RVA = "0x32B0AC0", Offset = "0x32AF0C0", VA = "0x1832B0AC0")]
	internal static void Create(GCHandle handle, out MeshGenerationNode node)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001330")]
	[Address(RVA = "0x32B0AD0", Offset = "0x32AF0D0", VA = "0x1832B0AD0")]
	internal Entry GetParentEntry()
	{
		return null;
	}
}
