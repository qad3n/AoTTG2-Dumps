using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200022B")]
internal struct MeshWriteDataInterface
{
	[Token(Token = "0x40007C2")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr vertices;

	[Token(Token = "0x40007C3")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr indices;

	[Token(Token = "0x40007C4")]
	[FieldOffset(Offset = "0x10")]
	public int vertexCount;

	[Token(Token = "0x40007C5")]
	[FieldOffset(Offset = "0x14")]
	public int indexCount;
}
