// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CombineInstance
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000124")]
public struct CombineInstance
{
	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x0")]
	private int m_MeshInstanceID;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x4")]
	private int m_SubMeshIndex;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x8")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x48")]
	private Vector4 m_LightmapScaleOffset;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x58")]
	private Vector4 m_RealtimeLightmapScaleOffset;

	[Token(Token = "0x17000175")]
	public Mesh mesh
	{
		[Token(Token = "0x6000840")]
		[Address(RVA = "0x68EC690", Offset = "0x68EB690", VA = "0x68EC690")]
		set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x6000841")]
		[Address(RVA = "0x68EC700", Offset = "0x68EB700", VA = "0x68EC700")]
		set
		{
		}
	}
}
