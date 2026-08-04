// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.VertexGradient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000018")]
public struct VertexGradient
{
	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x0")]
	public Color topLeft;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x10")]
	public Color topRight;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x20")]
	public Color bottomLeft;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x30")]
	public Color bottomRight;

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4C44290", Offset = "0x4C44290", VA = "0x4C44290")]
	public VertexGradient(Color color)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4C442B0", Offset = "0x4C442B0", VA = "0x4C442B0")]
	public VertexGradient(Color color0, Color color1, Color color2, Color color3)
	{
	}
}
