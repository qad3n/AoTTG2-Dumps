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
	[Address(RVA = "0x4C02A60", Offset = "0x4C02A60", VA = "0x4C02A60")]
	public MeshGizmo(int capacity = 0)
	{
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x4C02BE0", Offset = "0x4C02BE0", VA = "0x4C02BE0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x4C02C60", Offset = "0x4C02C60", VA = "0x4C02C60")]
	public void AddWireCube(Vector3 center, Vector3 size, Color color)
	{
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x4C031D0", Offset = "0x4C031D0", VA = "0x4C031D0")]
	private void DrawMesh(Matrix4x4 trs, Material mat, MeshTopology topology, CompareFunction depthTest, string gizmoName)
	{
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x4C033A0", Offset = "0x4C033A0", VA = "0x4C033A0")]
	public void RenderWireframe(Matrix4x4 trs, [Optional][DefaultParameterValue(4)] CompareFunction depthTest, [Optional] string gizmoName)
	{
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x4C033C0", Offset = "0x4C033C0", VA = "0x4C033C0", Slot = "4")]
	public void Dispose()
	{
	}
}
