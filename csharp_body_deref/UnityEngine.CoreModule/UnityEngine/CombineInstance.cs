using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000FC")]
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

	[Token(Token = "0x1700011A")]
	public Mesh mesh
	{
		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x4AAD2D0", Offset = "0x4AAD2D0", VA = "0x4AAD2D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x4AAD340", Offset = "0x4AAD340", VA = "0x4AAD340")]
		set
		{
		}
	}
}
