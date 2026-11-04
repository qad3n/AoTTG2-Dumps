// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.CameraOcclusion
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Cameras/CameraOcclusion.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Cameras;

[Token(Token = "0x2000884")]
internal static class CameraOcclusion
{
	[Token(Token = "0x2000885")]
	private sealed class FallbackRenderer
	{
		[Token(Token = "0x4002A97")]
		[FieldOffset(Offset = "0x10")]
		public readonly Renderer Renderer;

		[Token(Token = "0x4002A98")]
		[FieldOffset(Offset = "0x18")]
		public readonly Bounds Bounds;

		[Token(Token = "0x60051B6")]
		[Address(RVA = "0x22EF290", Offset = "0x22ED890", VA = "0x1822EF290")]
		public FallbackRenderer(Renderer renderer, Bounds bounds)
		{
		}
	}

	[Token(Token = "0x2000886")]
	private sealed class FallbackGrid
	{
		[Token(Token = "0x4002A99")]
		[FieldOffset(Offset = "0x10")]
		public readonly float CellSize;

		[Token(Token = "0x4002A9A")]
		[FieldOffset(Offset = "0x18")]
		public readonly Dictionary<Vector3Int, List<FallbackRenderer>> Cells;

		[Token(Token = "0x60051B7")]
		[Address(RVA = "0x22EF200", Offset = "0x22ED800", VA = "0x1822EF200")]
		public FallbackGrid(float cellSize)
		{
		}

		[Token(Token = "0x60051B8")]
		[Address(RVA = "0x22EF0D0", Offset = "0x22ED6D0", VA = "0x1822EF0D0")]
		public Vector3Int GetCell(Vector3 position)
		{
			return default(Vector3Int);
		}
	}

	[Token(Token = "0x2000887")]
	private sealed class MaterialOverride
	{
		[Token(Token = "0x4002A9B")]
		[FieldOffset(Offset = "0x10")]
		public readonly Material[] Originals;

		[Token(Token = "0x4002A9C")]
		[FieldOffset(Offset = "0x18")]
		public readonly Material[] Replacements;

		[Token(Token = "0x60051B9")]
		[Address(RVA = "0x22F84F0", Offset = "0x22F6AF0", VA = "0x1822F84F0")]
		public MaterialOverride(Material[] originals)
		{
		}

		[Token(Token = "0x60051BA")]
		[Address(RVA = "0x22F83D0", Offset = "0x22F69D0", VA = "0x1822F83D0")]
		public bool Matches(List<Material> materials)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4002A7D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int StartId;

	[Token(Token = "0x4002A7E")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int EndId;

	[Token(Token = "0x4002A7F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int RadiusId;

	[Token(Token = "0x4002A80")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int GroundPlaneId;

	[Token(Token = "0x4002A81")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int MapMask;

	[Token(Token = "0x4002A82")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int GroundMask;

	[Token(Token = "0x4002A83")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<string, string> ShaderReplacements;

	[Token(Token = "0x4002A84")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Dictionary<Collider, Renderer[]> ColliderRenderers;

	[Token(Token = "0x4002A85")]
	[FieldOffset(Offset = "0x28")]
	private static readonly HashSet<Collider> StaticColliders;

	[Token(Token = "0x4002A86")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Dictionary<Renderer, Renderer> CombinedRenderers;

	[Token(Token = "0x4002A87")]
	private const float FallbackCellSize = 128f;

	[Token(Token = "0x4002A88")]
	[FieldOffset(Offset = "0x38")]
	private static readonly List<FallbackGrid> FallbackGrids;

	[Token(Token = "0x4002A89")]
	[FieldOffset(Offset = "0x40")]
	private static readonly HashSet<Renderer> Candidates;

	[Token(Token = "0x4002A8A")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Dictionary<Material, Material> MaterialCopies;

	[Token(Token = "0x4002A8B")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Dictionary<Renderer, MaterialOverride> Overrides;

	[Token(Token = "0x4002A8C")]
	[FieldOffset(Offset = "0x58")]
	private static readonly List<Renderer> AppliedRenderers;

	[Token(Token = "0x4002A8D")]
	[FieldOffset(Offset = "0x60")]
	private static readonly List<Material> SharedMaterials;

	[Token(Token = "0x4002A8E")]
	[FieldOffset(Offset = "0x68")]
	private static readonly HashSet<Material> UpdatedMaterials;

	[Token(Token = "0x4002A8F")]
	[FieldOffset(Offset = "0x70")]
	private static Collider[] _colliders;

	[Token(Token = "0x4002A90")]
	[FieldOffset(Offset = "0x78")]
	private static RaycastHit[] _groundHits;

	[Token(Token = "0x4002A91")]
	[FieldOffset(Offset = "0x80")]
	private static Camera _camera;

	[Token(Token = "0x4002A92")]
	[FieldOffset(Offset = "0x88")]
	private static Vector3 _start;

	[Token(Token = "0x4002A93")]
	[FieldOffset(Offset = "0x94")]
	private static Vector3 _end;

	[Token(Token = "0x4002A94")]
	[FieldOffset(Offset = "0xA0")]
	private static float _radius;

	[Token(Token = "0x4002A95")]
	[FieldOffset(Offset = "0xA4")]
	private static Vector4 _groundPlane;

	[Token(Token = "0x4002A96")]
	[FieldOffset(Offset = "0xB4")]
	private static bool _subscribed;

	[Token(Token = "0x60051A5")]
	[Address(RVA = "0x22ED110", Offset = "0x22EB710", VA = "0x1822ED110")]
	public static void RegisterObject(GameObject gameObject, Collider[] colliders, bool isStatic)
	{
	}

	[Token(Token = "0x60051A6")]
	[Address(RVA = "0x22EC7B0", Offset = "0x22EADB0", VA = "0x1822EC7B0")]
	private static bool HasMatchingMeshCollider(Renderer renderer, Collider[] colliders)
	{
		return default(bool);
	}

	[Token(Token = "0x60051A7")]
	[Address(RVA = "0x22ECA50", Offset = "0x22EB050", VA = "0x1822ECA50")]
	public static void RegisterCombinedRenderer(Renderer original, Renderer combined)
	{
	}

	[Token(Token = "0x60051A8")]
	[Address(RVA = "0x22EDA40", Offset = "0x22EC040", VA = "0x1822EDA40")]
	public static void SetCapsule(Camera camera, Vector3 start, Vector3 end, float radius, Vector3 groundOrigin)
	{
	}

	[Token(Token = "0x60051A9")]
	[Address(RVA = "0x22EDC20", Offset = "0x22EC220", VA = "0x1822EDC20")]
	private static void UpdateGroundPlane(Vector3 groundOrigin)
	{
	}

	[Token(Token = "0x60051AA")]
	[Address(RVA = "0x22EB640", Offset = "0x22E9C40", VA = "0x1822EB640")]
	public static void Clear()
	{
	}

	[Token(Token = "0x60051AB")]
	[Address(RVA = "0x22ED3B0", Offset = "0x22EB9B0", VA = "0x1822ED3B0")]
	public static void Reset()
	{
	}

	[Token(Token = "0x60051AC")]
	[Address(RVA = "0x22EB2D0", Offset = "0x22E98D0", VA = "0x1822EB2D0")]
	private static void BeginCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60051AD")]
	[Address(RVA = "0x22EB790", Offset = "0x22E9D90", VA = "0x1822EB790")]
	private static void EndCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60051AE")]
	[Address(RVA = "0x22EB840", Offset = "0x22E9E40", VA = "0x1822EB840")]
	private static void FindCandidates()
	{
	}

	[Token(Token = "0x60051AF")]
	[Address(RVA = "0x22EBBC0", Offset = "0x22EA1C0", VA = "0x1822EBBC0")]
	private static void FindFallbackCandidates()
	{
	}

	[Token(Token = "0x60051B0")]
	[Address(RVA = "0x22ECAE0", Offset = "0x22EB0E0", VA = "0x1822ECAE0")]
	private static void RegisterFallbackRenderer(Renderer renderer)
	{
	}

	[Token(Token = "0x60051B1")]
	[Address(RVA = "0x22EAC00", Offset = "0x22E9200", VA = "0x1822EAC00")]
	private static void AddCandidate(Renderer original)
	{
	}

	[Token(Token = "0x60051B2")]
	[Address(RVA = "0x22EADF0", Offset = "0x22E93F0", VA = "0x1822EADF0")]
	private static void ApplyMaterials(Renderer renderer)
	{
	}

	[Token(Token = "0x60051B3")]
	[Address(RVA = "0x22EC4C0", Offset = "0x22EAAC0", VA = "0x1822EC4C0")]
	private static Material GetReplacement(Material original)
	{
		return null;
	}

	[Token(Token = "0x60051B4")]
	[Address(RVA = "0x22ED7D0", Offset = "0x22EBDD0", VA = "0x1822ED7D0")]
	private static void RestoreMaterials()
	{
	}
}
