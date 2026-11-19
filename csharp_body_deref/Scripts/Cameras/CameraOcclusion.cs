// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.CameraOcclusion
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/CameraOcclusion.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Cameras;

[Token(Token = "0x20008EA")]
internal static class CameraOcclusion
{
	[Token(Token = "0x20008EB")]
	private sealed class FallbackRenderer
	{
		[Token(Token = "0x4002D3F")]
		[FieldOffset(Offset = "0x10")]
		public readonly Renderer Renderer;

		[Token(Token = "0x4002D40")]
		[FieldOffset(Offset = "0x18")]
		public readonly Bounds Bounds;

		[Token(Token = "0x60054ED")]
		[Address(RVA = "0x5CCEB10", Offset = "0x5CCDB10", VA = "0x5CCEB10")]
		public FallbackRenderer(Renderer renderer, Bounds bounds)
		{
		}
	}

	[Token(Token = "0x20008EC")]
	private sealed class FallbackGrid
	{
		[Token(Token = "0x4002D41")]
		[FieldOffset(Offset = "0x10")]
		public readonly float CellSize;

		[Token(Token = "0x4002D42")]
		[FieldOffset(Offset = "0x18")]
		public readonly Dictionary<Vector3Int, List<FallbackRenderer>> Cells;

		[Token(Token = "0x60054EE")]
		[Address(RVA = "0x5CCEA80", Offset = "0x5CCDA80", VA = "0x5CCEA80")]
		public FallbackGrid(float cellSize)
		{
		}

		[Token(Token = "0x60054EF")]
		[Address(RVA = "0x5CCEA60", Offset = "0x5CCDA60", VA = "0x5CCEA60")]
		public Vector3Int GetCell(Vector3 position)
		{
			return default(Vector3Int);
		}
	}

	[Token(Token = "0x20008ED")]
	private sealed class MaterialOverride
	{
		[Token(Token = "0x4002D43")]
		[FieldOffset(Offset = "0x10")]
		public readonly Material[] Originals;

		[Token(Token = "0x4002D44")]
		[FieldOffset(Offset = "0x18")]
		public readonly Material[] Replacements;

		[Token(Token = "0x60054F0")]
		[Address(RVA = "0x5CCEC40", Offset = "0x5CCDC40", VA = "0x5CCEC40")]
		public MaterialOverride(Material[] originals)
		{
		}

		[Token(Token = "0x60054F1")]
		[Address(RVA = "0x5CCEB50", Offset = "0x5CCDB50", VA = "0x5CCEB50")]
		public bool Matches(List<Material> materials)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4002D25")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int StartId;

	[Token(Token = "0x4002D26")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int EndId;

	[Token(Token = "0x4002D27")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int RadiusId;

	[Token(Token = "0x4002D28")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int GroundPlaneId;

	[Token(Token = "0x4002D29")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int MapMask;

	[Token(Token = "0x4002D2A")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int GroundMask;

	[Token(Token = "0x4002D2B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<string, string> ShaderReplacements;

	[Token(Token = "0x4002D2C")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Dictionary<Collider, Renderer[]> ColliderRenderers;

	[Token(Token = "0x4002D2D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly HashSet<Collider> StaticColliders;

	[Token(Token = "0x4002D2E")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Dictionary<Renderer, Renderer> CombinedRenderers;

	[Token(Token = "0x4002D2F")]
	private const float FallbackCellSize = 128f;

	[Token(Token = "0x4002D30")]
	[FieldOffset(Offset = "0x38")]
	private static readonly List<FallbackGrid> FallbackGrids;

	[Token(Token = "0x4002D31")]
	[FieldOffset(Offset = "0x40")]
	private static readonly HashSet<Renderer> Candidates;

	[Token(Token = "0x4002D32")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Dictionary<Material, Material> MaterialCopies;

	[Token(Token = "0x4002D33")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Dictionary<Renderer, MaterialOverride> Overrides;

	[Token(Token = "0x4002D34")]
	[FieldOffset(Offset = "0x58")]
	private static readonly List<Renderer> AppliedRenderers;

	[Token(Token = "0x4002D35")]
	[FieldOffset(Offset = "0x60")]
	private static readonly List<Material> SharedMaterials;

	[Token(Token = "0x4002D36")]
	[FieldOffset(Offset = "0x68")]
	private static readonly HashSet<Material> UpdatedMaterials;

	[Token(Token = "0x4002D37")]
	[FieldOffset(Offset = "0x70")]
	private static Collider[] _colliders;

	[Token(Token = "0x4002D38")]
	[FieldOffset(Offset = "0x78")]
	private static RaycastHit[] _groundHits;

	[Token(Token = "0x4002D39")]
	[FieldOffset(Offset = "0x80")]
	private static Camera _camera;

	[Token(Token = "0x4002D3A")]
	[FieldOffset(Offset = "0x88")]
	private static Vector3 _start;

	[Token(Token = "0x4002D3B")]
	[FieldOffset(Offset = "0x94")]
	private static Vector3 _end;

	[Token(Token = "0x4002D3C")]
	[FieldOffset(Offset = "0xA0")]
	private static float _radius;

	[Token(Token = "0x4002D3D")]
	[FieldOffset(Offset = "0xA4")]
	private static Vector4 _groundPlane;

	[Token(Token = "0x4002D3E")]
	[FieldOffset(Offset = "0xB4")]
	private static bool _subscribed;

	[Token(Token = "0x60054DC")]
	[Address(RVA = "0x5CCB8B0", Offset = "0x5CCA8B0", VA = "0x5CCB8B0")]
	public static void RegisterObject(GameObject gameObject, Collider[] colliders, bool isStatic)
	{
	}

	[Token(Token = "0x60054DD")]
	[Address(RVA = "0x5CCBC20", Offset = "0x5CCAC20", VA = "0x5CCBC20")]
	private static bool HasMatchingMeshCollider(Renderer renderer, Collider[] colliders)
	{
		return default(bool);
	}

	[Token(Token = "0x60054DE")]
	[Address(RVA = "0x5CCC320", Offset = "0x5CCB320", VA = "0x5CCC320")]
	public static void RegisterCombinedRenderer(Renderer original, Renderer combined)
	{
	}

	[Token(Token = "0x60054DF")]
	[Address(RVA = "0x5CCC3C0", Offset = "0x5CCB3C0", VA = "0x5CCC3C0")]
	public static void SetCapsule(Camera camera, Vector3 start, Vector3 end, float radius, Vector3 groundOrigin)
	{
	}

	[Token(Token = "0x60054E0")]
	[Address(RVA = "0x5CCC570", Offset = "0x5CCB570", VA = "0x5CCC570")]
	private static void UpdateGroundPlane(Vector3 groundOrigin)
	{
	}

	[Token(Token = "0x60054E1")]
	[Address(RVA = "0x5CCCAB0", Offset = "0x5CCBAB0", VA = "0x5CCCAB0")]
	public static void Clear()
	{
	}

	[Token(Token = "0x60054E2")]
	[Address(RVA = "0x5CCCEB0", Offset = "0x5CCBEB0", VA = "0x5CCCEB0")]
	public static void Reset()
	{
	}

	[Token(Token = "0x60054E3")]
	[Address(RVA = "0x5CCD2E0", Offset = "0x5CCC2E0", VA = "0x5CCD2E0")]
	private static void BeginCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60054E4")]
	[Address(RVA = "0x5CCDCE0", Offset = "0x5CCCCE0", VA = "0x5CCDCE0")]
	private static void EndCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60054E5")]
	[Address(RVA = "0x5CCD600", Offset = "0x5CCC600", VA = "0x5CCD600")]
	private static void FindCandidates()
	{
	}

	[Token(Token = "0x60054E6")]
	[Address(RVA = "0x5CCDF80", Offset = "0x5CCCF80", VA = "0x5CCDF80")]
	private static void FindFallbackCandidates()
	{
	}

	[Token(Token = "0x60054E7")]
	[Address(RVA = "0x5CCBEB0", Offset = "0x5CCAEB0", VA = "0x5CCBEB0")]
	private static void RegisterFallbackRenderer(Renderer renderer)
	{
	}

	[Token(Token = "0x60054E8")]
	[Address(RVA = "0x5CCDD90", Offset = "0x5CCCD90", VA = "0x5CCDD90")]
	private static void AddCandidate(Renderer original)
	{
	}

	[Token(Token = "0x60054E9")]
	[Address(RVA = "0x5CCD900", Offset = "0x5CCC900", VA = "0x5CCD900")]
	private static void ApplyMaterials(Renderer renderer)
	{
	}

	[Token(Token = "0x60054EA")]
	[Address(RVA = "0x5CCECC0", Offset = "0x5CCDCC0", VA = "0x5CCECC0")]
	private static Material GetReplacement(Material original)
	{
		return null;
	}

	[Token(Token = "0x60054EB")]
	[Address(RVA = "0x5CCCC10", Offset = "0x5CCBC10", VA = "0x5CCCC10")]
	private static void RestoreMaterials()
	{
	}
}
