// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapFracture
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapFracture.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x200039C")]
internal sealed class MapFracture
{
	[Token(Token = "0x200039D")]
	public readonly struct Vertex
	{
		[Token(Token = "0x40012E5")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vector3 Position;

		[Token(Token = "0x40012E6")]
		[FieldOffset(Offset = "0xC")]
		public readonly Vector3 Normal;

		[Token(Token = "0x40012E7")]
		[FieldOffset(Offset = "0x18")]
		public readonly Vector2 UV;

		[Token(Token = "0x40012E8")]
		[FieldOffset(Offset = "0x20")]
		public readonly float Shade;

		[Token(Token = "0x6001703")]
		[Address(RVA = "0x1EBAC60", Offset = "0x1EB9260", VA = "0x181EBAC60")]
		public Vertex(Vector3 position, Vector3 normal, Vector2 uv, float shade)
		{
		}

		[Token(Token = "0x6001704")]
		[Address(RVA = "0x1EBA9E0", Offset = "0x1EB8FE0", VA = "0x181EBA9E0")]
		public static Vertex Lerp(Vertex a, Vertex b, float t)
		{
			return default(Vertex);
		}
	}

	[Token(Token = "0x200039E")]
	public readonly struct Triangle
	{
		[Token(Token = "0x40012E9")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vertex A;

		[Token(Token = "0x40012EA")]
		[FieldOffset(Offset = "0x24")]
		public readonly Vertex B;

		[Token(Token = "0x40012EB")]
		[FieldOffset(Offset = "0x48")]
		public readonly Vertex C;

		[Token(Token = "0x40012EC")]
		[FieldOffset(Offset = "0x6C")]
		public readonly int Submesh;

		[Token(Token = "0x6001705")]
		[Address(RVA = "0x1EB6B10", Offset = "0x1EB5110", VA = "0x181EB6B10")]
		public Triangle(Vertex a, Vertex b, Vertex c, int submesh)
		{
		}
	}

	[Token(Token = "0x200039F")]
	private readonly struct Segment
	{
		[Token(Token = "0x40012ED")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vertex A;

		[Token(Token = "0x40012EE")]
		[FieldOffset(Offset = "0x24")]
		public readonly Vertex B;

		[Token(Token = "0x40012EF")]
		[FieldOffset(Offset = "0x48")]
		public readonly int Submesh;

		[Token(Token = "0x6001706")]
		[Address(RVA = "0x1EB6AD0", Offset = "0x1EB50D0", VA = "0x181EB6AD0")]
		public Segment(Vertex a, Vertex b, int submesh)
		{
		}
	}

	[Token(Token = "0x20003A0")]
	private readonly struct Opening
	{
		[Token(Token = "0x40012F0")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vector3 Normal;

		[Token(Token = "0x40012F1")]
		[FieldOffset(Offset = "0xC")]
		public readonly int Submesh;

		[Token(Token = "0x6001707")]
		[Address(RVA = "0x180F450", Offset = "0x180DA50", VA = "0x18180F450")]
		public Opening(Vector3 normal, int submesh)
		{
		}
	}

	[Token(Token = "0x40012D7")]
	private const float Epsilon = 0.0001f;

	[Token(Token = "0x40012D8")]
	private const float WeldSize = 0.01f;

	[Token(Token = "0x40012D9")]
	private const int MaxCapPoints = 2048;

	[Token(Token = "0x40012DA")]
	private const int MaxNeighbors = 20;

	[Token(Token = "0x40012DB")]
	private const float SeedJitter = 0.8f;

	[Token(Token = "0x40012DC")]
	private const float CoplanarOpening = 0.9f;

	[Token(Token = "0x40012DD")]
	private const float CapTextureScale = 0.15f;

	[Token(Token = "0x40012DE")]
	private const float CapShade = 0.75f;

	[Token(Token = "0x40012DF")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<Triangle> _triangles;

	[Token(Token = "0x40012E0")]
	[FieldOffset(Offset = "0x18")]
	private readonly Vertex[] _corners;

	[Token(Token = "0x40012E1")]
	[FieldOffset(Offset = "0x20")]
	private readonly float[] _distances;

	[Token(Token = "0x40012E2")]
	[FieldOffset(Offset = "0x28")]
	private readonly Vertex[] _polygon;

	[Token(Token = "0x40012E3")]
	[FieldOffset(Offset = "0x30")]
	private readonly Vertex[] _cut;

	[Token(Token = "0x40012E4")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<Segment> _segments;

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x1EA7EF0", Offset = "0x1EA64F0", VA = "0x181EA7EF0")]
	private MapFracture(List<Triangle> triangles)
	{
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x1EA6940", Offset = "0x1EA4F40", VA = "0x181EA6940")]
	public static MapFracture Read(MeshFilter[] filters, Transform root, List<Material> materials, int maxTriangles)
	{
		return null;
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x1EA72E0", Offset = "0x1EA58E0", VA = "0x181EA72E0")]
	public List<List<Triangle>> Shatter(int pieceCount, float groundHeight, int seed)
	{
		return null;
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x1EA4390", Offset = "0x1EA2990", VA = "0x181EA4390")]
	public static Mesh CreateMesh(List<Triangle> triangles, int submeshCount, out Vector3 center)
	{
		return null;
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x1EA5E30", Offset = "0x1EA4430", VA = "0x181EA5E30")]
	public static bool HasVolume(List<Triangle> triangles, float thickness)
	{
		return default(bool);
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x1EA55F0", Offset = "0x1EA3BF0", VA = "0x181EA55F0")]
	private static Vector3 Extreme(List<Triangle> triangles, Func<Vector3, float> score)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x1EA3C40", Offset = "0x1EA2240", VA = "0x181EA3C40")]
	private static void Consider(Vector3 point, Func<Vector3, float> score, ref Vector3 best, ref float bestScore)
	{
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x1EA3CC0", Offset = "0x1EA22C0", VA = "0x181EA3CC0")]
	public static Mesh CreateCollisionMesh(List<Triangle> triangles, Vector3 center, float scale)
	{
		return null;
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x1EA1C80", Offset = "0x1EA0280", VA = "0x181EA1C80")]
	private static void AddVertex(Vertex vertex, Vector3 center, List<int> indices, List<Vector3> positions, List<Vector3> normals, List<Vector2> uv, List<Color> colors)
	{
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x1EA6640", Offset = "0x1EA4C40", VA = "0x181EA6640")]
	private static Vertex ReadVertex(Vector3[] positions, Vector3[] normals, Vector2[] uv, int index, Matrix4x4 toRoot, Matrix4x4 normalToRoot, bool hasNormals, bool hasUV)
	{
		return default(Vertex);
	}

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x1EA4B10", Offset = "0x1EA3110", VA = "0x181EA4B10")]
	private static List<Vector3> CreateSeeds(Bounds bounds, int count, System.Random random)
	{
		return null;
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x1EA27A0", Offset = "0x1EA0DA0", VA = "0x181EA27A0")]
	private bool Clip(List<Triangle> source, List<Triangle> target, Vector3 normal, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x1EA4F30", Offset = "0x1EA3530", VA = "0x181EA4F30")]
	private static bool Crosses(List<Triangle> triangles, Vector3 normal, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x1EA1F40", Offset = "0x1EA0540", VA = "0x181EA1F40")]
	private void ClipTriangle(Triangle triangle, Vector3 normal, float distance, List<Triangle> kept)
	{
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x1EA1B40", Offset = "0x1EA0140", VA = "0x181EA1B40")]
	private void AddCut(Vertex vertex, ref int count)
	{
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x1EA2B10", Offset = "0x1EA1110", VA = "0x181EA2B10")]
	private void CloseOpenings()
	{
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x1EA1BA0", Offset = "0x1EA01A0", VA = "0x181EA1BA0")]
	private static void AddEdge(Dictionary<(int, int), Opening> edges, int a, int b, Opening opening)
	{
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x1EA1500", Offset = "0x1E9FB00", VA = "0x181EA1500")]
	private static void AddCaps(List<Segment> segments, Vector3 normal, List<Triangle> target)
	{
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x1EA7A00", Offset = "0x1EA6000", VA = "0x181EA7A00")]
	private static List<Vertex> TraceLoop(int start, List<Vertex> vertices, List<List<int>> neighbors, bool[] visited)
	{
		return null;
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x1EA0C20", Offset = "0x1E9F220", VA = "0x181EA0C20")]
	private static void AddCap(List<Vertex> loop, Vector3 normal, int submesh, List<Triangle> target)
	{
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x1EA51A0", Offset = "0x1EA37A0", VA = "0x181EA51A0")]
	private static List<int> EarClip(List<Vector2> flat)
	{
		return null;
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x1EA6340", Offset = "0x1EA4940", VA = "0x181EA6340")]
	private static bool IsEar(List<Vector2> flat, List<int> remaining, int a, int b, int c)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x1EA6230", Offset = "0x1EA4830", VA = "0x181EA6230")]
	private static bool InTriangle(Vector2 point, Vector2 a, Vector2 b, Vector2 c)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x1EA4F00", Offset = "0x1EA3500", VA = "0x181EA4F00")]
	private static float Cross(Vector2 a, Vector2 b)
	{
		return default(float);
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x1EA7D20", Offset = "0x1EA6320", VA = "0x181EA7D20")]
	private static int Weld(Dictionary<Vector3Int, int> points, List<Vertex> vertices, Vertex vertex)
	{
		return default(int);
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x1EA5940", Offset = "0x1EA3F40", VA = "0x181EA5940")]
	private static Bounds GetBounds(List<Triangle> triangles)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x1EA6610", Offset = "0x1EA4C10", VA = "0x181EA6610")]
	private static float Next(System.Random random)
	{
		return default(float);
	}
}
