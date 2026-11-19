// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshWriteDataInterface
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002A2")]
internal struct MeshWriteDataInterface
{
	[Token(Token = "0x40009DF")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr vertices;

	[Token(Token = "0x40009E0")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr indices;

	[Token(Token = "0x40009E1")]
	[FieldOffset(Offset = "0x10")]
	public int vertexCount;

	[Token(Token = "0x40009E2")]
	[FieldOffset(Offset = "0x14")]
	public int indexCount;
}
