// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapFracture
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapFracture.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003F7")]
internal sealed class MapFracture
{
	[Token(Token = "0x20003F8")]
	public readonly struct Vertex
	{
		[Token(Token = "0x4001477")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vector3 Position;

		[Token(Token = "0x4001478")]
		[FieldOffset(Offset = "0xC")]
		public readonly Vector3 Normal;

		[Token(Token = "0x4001479")]
		[FieldOffset(Offset = "0x18")]
		public readonly Vector2 UV;

		[Token(Token = "0x400147A")]
		[FieldOffset(Offset = "0x20")]
		public readonly float Shade;

		[Token(Token = "0x6001968")]
		[Address(RVA = "0x588B720", Offset = "0x588A720", VA = "0x588B720")]
		public Vertex(Vector3 position, Vector3 normal, Vector2 uv, float shade)
		{
		}

		[Token(Token = "0x6001969")]
		[Address(RVA = "0x588D0A0", Offset = "0x588C0A0", VA = "0x588D0A0")]
		public static Vertex Lerp(Vertex a, Vertex b, float t)
		{
			return default(Vertex);
		}
	}

	[Token(Token = "0x20003F9")]
	public readonly struct Triangle
	{
		[Token(Token = "0x400147B")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vertex A;

		[Token(Token = "0x400147C")]
		[FieldOffset(Offset = "0x24")]
		public readonly Vertex B;

		[Token(Token = "0x400147D")]
		[FieldOffset(Offset = "0x48")]
		public readonly Vertex C;

		[Token(Token = "0x400147E")]
		[FieldOffset(Offset = "0x6C")]
		public readonly int Submesh;

		[Token(Token = "0x600196A")]
		[Address(RVA = "0x5888F60", Offset = "0x5887F60", VA = "0x5888F60")]
		public Triangle(Vertex a, Vertex b, Vertex c, int submesh)
		{
		}
	}

	[Token(Token = "0x20003FA")]
	private readonly struct Segment
	{
		[Token(Token = "0x400147F")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vertex A;

		[Token(Token = "0x4001480")]
		[FieldOffset(Offset = "0x24")]
		public readonly Vertex B;

		[Token(Token = "0x4001481")]
		[FieldOffset(Offset = "0x48")]
		public readonly int Submesh;

		[Token(Token = "0x600196B")]
		[Address(RVA = "0x588D340", Offset = "0x588C340", VA = "0x588D340")]
		public Segment(Vertex a, Vertex b, int submesh)
		{
		}
	}

	[Token(Token = "0x20003FB")]
	private readonly struct Opening
	{
		[Token(Token = "0x4001482")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vector3 Normal;

		[Token(Token = "0x4001483")]
		[FieldOffset(Offset = "0xC")]
		public readonly int Submesh;

		[Token(Token = "0x600196C")]
		[Address(RVA = "0x588D880", Offset = "0x588C880", VA = "0x588D880")]
		public Opening(Vector3 normal, int submesh)
		{
		}
	}

	[Token(Token = "0x4001469")]
	private const float Epsilon = 0.0001f;

	[Token(Token = "0x400146A")]
	private const float WeldSize = 0.01f;

	[Token(Token = "0x400146B")]
	private const int MaxCapPoints = 2048;

	[Token(Token = "0x400146C")]
	private const int MaxNeighbors = 20;

	[Token(Token = "0x400146D")]
	private const float SeedJitter = 0.8f;

	[Token(Token = "0x400146E")]
	private const float CoplanarOpening = 0.9f;

	[Token(Token = "0x400146F")]
	private const float CapTextureScale = 0.15f;

	[Token(Token = "0x4001470")]
	private const float CapShade = 0.75f;

	[Token(Token = "0x4001471")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<Triangle> _triangles;

	[Token(Token = "0x4001472")]
	[FieldOffset(Offset = "0x18")]
	private readonly Vertex[] _corners;

	[Token(Token = "0x4001473")]
	[FieldOffset(Offset = "0x20")]
	private readonly float[] _distances;

	[Token(Token = "0x4001474")]
	[FieldOffset(Offset = "0x28")]
	private readonly Vertex[] _polygon;

	[Token(Token = "0x4001475")]
	[FieldOffset(Offset = "0x30")]
	private readonly Vertex[] _cut;

	[Token(Token = "0x4001476")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<Segment> _segments;

	[Token(Token = "0x600194D")]
	[Address(RVA = "0x5888A20", Offset = "0x5887A20", VA = "0x5888A20")]
	private MapFracture(List<Triangle> triangles)
	{
	}

	[Token(Token = "0x600194E")]
	[Address(RVA = "0x5883710", Offset = "0x5882710", VA = "0x5883710")]
	public static MapFracture Read(MeshFilter[] filters, Transform root, List<Material> materials, int maxTriangles)
	{
		return null;
	}

	[Token(Token = "0x600194F")]
	[Address(RVA = "0x5887EB0", Offset = "0x5886EB0", VA = "0x5887EB0")]
	public List<List<Triangle>> Shatter(int pieceCount, float groundHeight, int seed)
	{
		return null;
	}

	[Token(Token = "0x6001950")]
	[Address(RVA = "0x58862C0", Offset = "0x58852C0", VA = "0x58862C0")]
	public static Mesh CreateMesh(List<Triangle> triangles, int submeshCount, out Vector3 center)
	{
		return null;
	}

	[Token(Token = "0x6001951")]
	[Address(RVA = "0x5886B50", Offset = "0x5885B50", VA = "0x5886B50")]
	public static bool HasVolume(List<Triangle> triangles, float thickness)
	{
		return default(bool);
	}

	[Token(Token = "0x6001952")]
	[Address(RVA = "0x588B310", Offset = "0x588A310", VA = "0x588B310")]
	private static Vector3 Extreme(List<Triangle> triangles, Func<Vector3, float> score)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001953")]
	[Address(RVA = "0x588B6C0", Offset = "0x588A6C0", VA = "0x588B6C0")]
	private static void Consider(Vector3 point, Func<Vector3, float> score, ref Vector3 best, ref float bestScore)
	{
	}

	[Token(Token = "0x6001954")]
	[Address(RVA = "0x5886F50", Offset = "0x5885F50", VA = "0x5886F50")]
	public static Mesh CreateCollisionMesh(List<Triangle> triangles, Vector3 center, float scale)
	{
		return null;
	}

	[Token(Token = "0x6001955")]
	[Address(RVA = "0x588B080", Offset = "0x588A080", VA = "0x588B080")]
	private static void AddVertex(Vertex vertex, Vector3 center, List<int> indices, List<Vector3> positions, List<Vector3> normals, List<Vector2> uv, List<Color> colors)
	{
	}

	[Token(Token = "0x6001956")]
	[Address(RVA = "0x5888B50", Offset = "0x5887B50", VA = "0x5888B50")]
	private static Vertex ReadVertex(Vector3[] positions, Vector3[] normals, Vector2[] uv, int index, Matrix4x4 toRoot, Matrix4x4 normalToRoot, bool hasNormals, bool hasUV)
	{
		return default(Vertex);
	}

	[Token(Token = "0x6001957")]
	[Address(RVA = "0x588A9E0", Offset = "0x58899E0", VA = "0x588A9E0")]
	private static List<Vector3> CreateSeeds(Bounds bounds, int count, System.Random random)
	{
		return null;
	}

	[Token(Token = "0x6001958")]
	[Address(RVA = "0x588A390", Offset = "0x5889390", VA = "0x588A390")]
	private bool Clip(List<Triangle> source, List<Triangle> target, Vector3 normal, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6001959")]
	[Address(RVA = "0x588B770", Offset = "0x588A770", VA = "0x588B770")]
	private static bool Crosses(List<Triangle> triangles, Vector3 normal, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x600195A")]
	[Address(RVA = "0x588B9B0", Offset = "0x588A9B0", VA = "0x588B9B0")]
	private void ClipTriangle(Triangle triangle, Vector3 normal, float distance, List<Triangle> kept)
	{
	}

	[Token(Token = "0x600195B")]
	[Address(RVA = "0x588D050", Offset = "0x588C050", VA = "0x588D050")]
	private void AddCut(Vertex vertex, ref int count)
	{
	}

	[Token(Token = "0x600195C")]
	[Address(RVA = "0x5888FC0", Offset = "0x5887FC0", VA = "0x5888FC0")]
	private void CloseOpenings()
	{
	}

	[Token(Token = "0x600195D")]
	[Address(RVA = "0x588D890", Offset = "0x588C890", VA = "0x588D890")]
	private static void AddEdge(Dictionary<(int, int), Opening> edges, int a, int b, Opening opening)
	{
	}

	[Token(Token = "0x600195E")]
	[Address(RVA = "0x588C730", Offset = "0x588B730", VA = "0x588C730")]
	private static void AddCaps(List<Segment> segments, Vector3 normal, List<Triangle> target)
	{
	}

	[Token(Token = "0x600195F")]
	[Address(RVA = "0x588E670", Offset = "0x588D670", VA = "0x588E670")]
	private static List<Vertex> TraceLoop(int start, List<Vertex> vertices, List<List<int>> neighbors, bool[] visited)
	{
		return null;
	}

	[Token(Token = "0x6001960")]
	[Address(RVA = "0x588D980", Offset = "0x588C980", VA = "0x588D980")]
	private static void AddCap(List<Vertex> loop, Vector3 normal, int submesh, List<Triangle> target)
	{
	}

	[Token(Token = "0x6001961")]
	[Address(RVA = "0x588EA50", Offset = "0x588DA50", VA = "0x588EA50")]
	private static List<int> EarClip(List<Vector2> flat)
	{
		return null;
	}

	[Token(Token = "0x6001962")]
	[Address(RVA = "0x588F020", Offset = "0x588E020", VA = "0x588F020")]
	private static bool IsEar(List<Vector2> flat, List<int> remaining, int a, int b, int c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001963")]
	[Address(RVA = "0x588F300", Offset = "0x588E300", VA = "0x588F300")]
	private static bool InTriangle(Vector2 point, Vector2 a, Vector2 b, Vector2 c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001964")]
	[Address(RVA = "0x588F000", Offset = "0x588E000", VA = "0x588F000")]
	private static float Cross(Vector2 a, Vector2 b)
	{
		return default(float);
	}

	[Token(Token = "0x6001965")]
	[Address(RVA = "0x588D380", Offset = "0x588C380", VA = "0x588D380")]
	private static int Weld(Dictionary<Vector3Int, int> points, List<Vertex> vertices, Vertex vertex)
	{
		return default(int);
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x588A640", Offset = "0x5889640", VA = "0x588A640")]
	private static Bounds GetBounds(List<Triangle> triangles)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x588B740", Offset = "0x588A740", VA = "0x588B740")]
	private static float Next(System.Random random)
	{
		return default(float);
	}
}
