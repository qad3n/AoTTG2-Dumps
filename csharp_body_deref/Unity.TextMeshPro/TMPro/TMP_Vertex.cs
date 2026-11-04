// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Vertex
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000015")]
public struct TMP_Vertex
{
	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 position;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0xC")]
	public Vector4 uv;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x1C")]
	public Vector2 uv2;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x24")]
	public Color32 color;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_Vertex k_Zero;

	[Token(Token = "0x17000018")]
	public static TMP_Vertex zero
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x2CF4210", Offset = "0x2CF2810", VA = "0x182CF4210")]
		get
		{
			return default(TMP_Vertex);
		}
	}
}
