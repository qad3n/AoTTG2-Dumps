// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshWriteData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002D1")]
public class MeshWriteData
{
	[Token(Token = "0x4000AEB")]
	[FieldOffset(Offset = "0x10")]
	internal NativeSlice<Vertex> m_Vertices;

	[Token(Token = "0x4000AEC")]
	[FieldOffset(Offset = "0x20")]
	internal NativeSlice<ushort> m_Indices;

	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0x30")]
	internal int currentIndex;

	[Token(Token = "0x4000AEE")]
	[FieldOffset(Offset = "0x34")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int currentVertex;

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal MeshWriteData()
	{
	}
}
