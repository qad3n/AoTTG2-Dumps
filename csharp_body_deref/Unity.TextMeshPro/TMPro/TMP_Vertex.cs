using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200000E")]
public struct TMP_Vertex
{
	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 position;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0xC")]
	public Vector2 uv;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x14")]
	public Vector2 uv2;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x1C")]
	public Vector2 uv4;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x24")]
	public Color32 color;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_Vertex k_Zero;

	[Token(Token = "0x17000003")]
	public static TMP_Vertex zero
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x48F76A0", Offset = "0x48F76A0", VA = "0x48F76A0")]
		get
		{
			return default(TMP_Vertex);
		}
	}
}
