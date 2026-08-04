// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshWriteData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000254")]
public class MeshWriteData
{
	[Token(Token = "0x40008A0")]
	[FieldOffset(Offset = "0x10")]
	internal NativeSlice<Vertex> m_Vertices;

	[Token(Token = "0x40008A1")]
	[FieldOffset(Offset = "0x20")]
	internal NativeSlice<ushort> m_Indices;

	[Token(Token = "0x40008A2")]
	[FieldOffset(Offset = "0x30")]
	internal int currentIndex;

	[Token(Token = "0x40008A3")]
	[FieldOffset(Offset = "0x34")]
	internal int currentVertex;

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x5074470", Offset = "0x5074470", VA = "0x5074470")]
	internal MeshWriteData()
	{
	}
}
