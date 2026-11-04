// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CombineInstance
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000123")]
public struct CombineInstance
{
	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x0")]
	private int m_MeshInstanceID;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x4")]
	private int m_SubMeshIndex;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x8")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x48")]
	private Vector4 m_LightmapScaleOffset;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x58")]
	private Vector4 m_RealtimeLightmapScaleOffset;

	[Token(Token = "0x17000170")]
	public Mesh mesh
	{
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x2ED73B0", Offset = "0x2ED59B0", VA = "0x182ED73B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x6000833")]
		[Address(RVA = "0x2ED7440", Offset = "0x2ED5A40", VA = "0x182ED7440")]
		set
		{
		}
	}
}
