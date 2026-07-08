using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001C9")]
internal class MeshGizmo : IDisposable
{
	[Token(Token = "0x40007DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int vertexCountPerCube;

	[Token(Token = "0x40007DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public Mesh mesh;

	[Token(Token = "0x40007DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<Vector3> vertices;

	[Token(Token = "0x40007E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private List<int> indices;

	[Token(Token = "0x40007E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private List<Color> colors;

	[Token(Token = "0x40007E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Material wireMaterial;

	[Token(Token = "0x40007E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Material dottedWireMaterial;

	[Token(Token = "0x40007E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Material solidMaterial;

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x48DD9F0", Offset = "0x48DD9F0", VA = "0x48DD9F0")]
	public MeshGizmo(int capacity = 0)
	{
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x48DDB70", Offset = "0x48DDB70", VA = "0x48DDB70")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x48DDBF0", Offset = "0x48DDBF0", VA = "0x48DDBF0")]
	public void AddWireCube(Vector3 center, Vector3 size, Color color)
	{
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x48DE160", Offset = "0x48DE160", VA = "0x48DE160")]
	private void DrawMesh(Matrix4x4 trs, Material mat, MeshTopology topology, CompareFunction depthTest, string gizmoName)
	{
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x48DE330", Offset = "0x48DE330", VA = "0x48DE330")]
	public void RenderWireframe(Matrix4x4 trs, [Optional][DefaultParameterValue(4)] CompareFunction depthTest, [Optional] string gizmoName)
	{
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x48DE350", Offset = "0x48DE350", VA = "0x48DE350", Slot = "4")]
	public void Dispose()
	{
	}
}
