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
[Token(Token = "0x20000A9")]
public struct VertexGradient
{
	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x0")]
	public Color topLeft;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x10")]
	public Color topRight;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x20")]
	public Color bottomLeft;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x30")]
	public Color bottomRight;

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x2D7E6E0", Offset = "0x2D7CCE0", VA = "0x182D7E6E0")]
	public VertexGradient(Color color)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x2A401B0", Offset = "0x2A3E7B0", VA = "0x182A401B0")]
	public VertexGradient(Color color0, Color color1, Color color2, Color color3)
	{
	}
}
