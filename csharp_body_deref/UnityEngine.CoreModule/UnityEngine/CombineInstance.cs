// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CombineInstance
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000FF")]
public struct CombineInstance
{
	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x0")]
	private int m_MeshInstanceID;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x4")]
	private int m_SubMeshIndex;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x8")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x48")]
	private Vector4 m_LightmapScaleOffset;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x58")]
	private Vector4 m_RealtimeLightmapScaleOffset;

	[Token(Token = "0x1700011B")]
	public Mesh mesh
	{
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x4DD4C00", Offset = "0x4DD4C00", VA = "0x4DD4C00")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x4DD4C70", Offset = "0x4DD4C70", VA = "0x4DD4C70")]
		set
		{
		}
	}
}
