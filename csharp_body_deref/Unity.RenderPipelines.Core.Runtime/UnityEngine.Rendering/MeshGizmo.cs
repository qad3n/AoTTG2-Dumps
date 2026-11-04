// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MeshGizmo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001E5")]
internal class MeshGizmo : IDisposable
{
	[Token(Token = "0x4000954")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int vertexCountPerCube;

	[Token(Token = "0x4000955")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public Mesh mesh;

	[Token(Token = "0x4000956")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<Vector3> vertices;

	[Token(Token = "0x4000957")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private List<int> indices;

	[Token(Token = "0x4000958")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private List<Color> colors;

	[Token(Token = "0x4000959")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Material wireMaterial;

	[Token(Token = "0x400095A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Material dottedWireMaterial;

	[Token(Token = "0x400095B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Material solidMaterial;

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x2B5F230", Offset = "0x2B5D830", VA = "0x182B5F230")]
	public MeshGizmo(int capacity = 0)
	{
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x2B5EA80", Offset = "0x2B5D080", VA = "0x182B5EA80")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x2B5E3A0", Offset = "0x2B5C9A0", VA = "0x182B5E3A0")]
	public void AddWireCube(Vector3 center, Vector3 size, Color color)
	{
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x2B5EB50", Offset = "0x2B5D150", VA = "0x182B5EB50")]
	private void DrawMesh(Matrix4x4 trs, Material mat, MeshTopology topology, CompareFunction depthTest, string gizmoName)
	{
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x2B5ED10", Offset = "0x2B5D310", VA = "0x182B5ED10")]
	public void RenderWireframe(Matrix4x4 trs, [Optional][DefaultParameterValue(4)] CompareFunction depthTest, [Optional] string gizmoName)
	{
	}

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x2B5EB00", Offset = "0x2B5D100", VA = "0x182B5EB00", Slot = "4")]
	public void Dispose()
	{
	}
}
