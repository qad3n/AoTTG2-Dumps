// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapDestructionDebris
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapDestructionDebris.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Threading.Tasks;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Map;

[Token(Token = "0x20003F2")]
internal sealed class MapDestructionDebris : MonoBehaviour
{
	[Token(Token = "0x20003F3")]
	private sealed class Piece
	{
		[Token(Token = "0x400145B")]
		[FieldOffset(Offset = "0x10")]
		public GameObject Fragment;

		[Token(Token = "0x400145C")]
		[FieldOffset(Offset = "0x18")]
		public Mesh Collision;

		[Token(Token = "0x400145D")]
		[FieldOffset(Offset = "0x20")]
		public Rigidbody Body;

		[Token(Token = "0x400145E")]
		[FieldOffset(Offset = "0x28")]
		public ConstantForce Force;

		[Token(Token = "0x6001946")]
		[Address(RVA = "0x5887600", Offset = "0x5886600", VA = "0x5887600")]
		public Piece()
		{
		}
	}

	[Token(Token = "0x400143A")]
	private const int MaxActive = 8;

	[Token(Token = "0x400143B")]
	private const int MaxFractureTriangles = 20000;

	[Token(Token = "0x400143C")]
	private const int MinPieces = 6;

	[Token(Token = "0x400143D")]
	private const int MaxPieces = 40;

	[Token(Token = "0x400143E")]
	private const float PieceSize = 3f;

	[Token(Token = "0x400143F")]
	private const float GroundClearance = 0.05f;

	[Token(Token = "0x4001440")]
	private const float MinColliderThickness = 0.1f;

	[Token(Token = "0x4001441")]
	private const float ColliderShrink = 0.75f;

	[Token(Token = "0x4001442")]
	private const float ExtraGravity = 1f;

	[Token(Token = "0x4001443")]
	private const float RubbleFriction = 0.1f;

	[Token(Token = "0x4001444")]
	private const float Spin = 1.2f;

	[Token(Token = "0x4001445")]
	private const float Nudge = 1f;

	[Token(Token = "0x4001446")]
	private const float MinSettleTime = 0.5f;

	[Token(Token = "0x4001447")]
	private const float SettledSpeed = 1f;

	[Token(Token = "0x4001448")]
	private const float FadeDelay = 3f;

	[Token(Token = "0x4001449")]
	private const float FadeDuration = 1.5f;

	[Token(Token = "0x400144A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int FadeId;

	[Token(Token = "0x400144B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<MapDestructionDebris> Active;

	[Token(Token = "0x400144C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly RaycastHit[] GroundHits;

	[Token(Token = "0x400144D")]
	[FieldOffset(Offset = "0x18")]
	private static Shader _shader;

	[Token(Token = "0x400144E")]
	[FieldOffset(Offset = "0x20")]
	private static PhysicsMaterial _rubble;

	[Token(Token = "0x400144F")]
	[FieldOffset(Offset = "0x28")]
	private static int _workFrame;

	[Token(Token = "0x4001450")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<Material, Material> _rubbleMaterials;

	[Token(Token = "0x4001451")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Mesh> _meshes;

	[Token(Token = "0x4001452")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Piece> _pieces;

	[Token(Token = "0x4001453")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<GameObject> _sectionVisuals;

	[Token(Token = "0x4001454")]
	[FieldOffset(Offset = "0x40")]
	private Material[] _fragmentMaterials;

	[Token(Token = "0x4001455")]
	[FieldOffset(Offset = "0x48")]
	private Task<List<List<MapFracture.Triangle>>> _fracture;

	[Token(Token = "0x4001456")]
	[FieldOffset(Offset = "0x50")]
	private Task _baking;

	[Token(Token = "0x4001457")]
	[FieldOffset(Offset = "0x58")]
	private ShadowCastingMode _shadows;

	[Token(Token = "0x4001458")]
	[FieldOffset(Offset = "0x5C")]
	private float _age;

	[Token(Token = "0x4001459")]
	[FieldOffset(Offset = "0x60")]
	private float _activeAge;

	[Token(Token = "0x400145A")]
	[FieldOffset(Offset = "0x64")]
	private int _seed;

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x5881DE0", Offset = "0x5880DE0", VA = "0x5881DE0")]
	public static void Spawn(DestructibleMapObject target)
	{
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x5882D70", Offset = "0x5881D70", VA = "0x5882D70")]
	private static void LoadAssets()
	{
	}

	[Token(Token = "0x6001935")]
	[Address(RVA = "0x5883440", Offset = "0x5882440", VA = "0x5883440")]
	private static float FindGround(Bounds bounds)
	{
		return default(float);
	}

	[Token(Token = "0x6001936")]
	[Address(RVA = "0x5882F50", Offset = "0x5881F50", VA = "0x5882F50")]
	private void Shatter(DestructibleMapObject target)
	{
	}

	[Token(Token = "0x6001937")]
	[Address(RVA = "0x5884480", Offset = "0x5883480", VA = "0x5884480")]
	private GameObject CreateVisual(MeshFilter source)
	{
		return null;
	}

	[Token(Token = "0x6001938")]
	[Address(RVA = "0x58848C0", Offset = "0x58838C0", VA = "0x58848C0")]
	private void AddRenderer(GameObject visual, Material[] materials)
	{
	}

	[Token(Token = "0x6001939")]
	[Address(RVA = "0x58847C0", Offset = "0x58837C0", VA = "0x58847C0")]
	private Material GetMaterial(Material source)
	{
		return null;
	}

	[Token(Token = "0x600193A")]
	[Address(RVA = "0x5884930", Offset = "0x5883930", VA = "0x5884930")]
	private static Material CreateMaterial(Material source)
	{
		return null;
	}

	[Token(Token = "0x600193B")]
	[Address(RVA = "0x5884C00", Offset = "0x5883C00", VA = "0x5884C00")]
	private static string FindProperty(Material source, ShaderPropertyFlags flag, ShaderPropertyType type, string fallback)
	{
		return null;
	}

	[Token(Token = "0x600193C")]
	[Address(RVA = "0x5884DA0", Offset = "0x5883DA0", VA = "0x5884DA0")]
	private void Update()
	{
	}

	[Token(Token = "0x600193D")]
	[Address(RVA = "0x5885520", Offset = "0x5884520", VA = "0x5885520")]
	private static bool TryClaimFrame()
	{
		return default(bool);
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x58855B0", Offset = "0x58845B0", VA = "0x58855B0")]
	private void CreateFragments(List<List<MapFracture.Triangle>> cells)
	{
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x5885D50", Offset = "0x5884D50", VA = "0x5885D50")]
	private void ActivateFragments()
	{
	}

	[Token(Token = "0x6001940")]
	[Address(RVA = "0x5887610", Offset = "0x5886610", VA = "0x5887610")]
	private static Collider AddCollider(GameObject fragment, Mesh mesh, Mesh collision)
	{
		return null;
	}

	[Token(Token = "0x6001941")]
	[Address(RVA = "0x58861E0", Offset = "0x58851E0", VA = "0x58861E0")]
	private static bool IsSettled(Rigidbody body)
	{
		return default(bool);
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x5886260", Offset = "0x5885260", VA = "0x5886260")]
	private static void Freeze(Piece piece)
	{
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x5887860", Offset = "0x5886860", VA = "0x5887860")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x5887C30", Offset = "0x5886C30", VA = "0x5887C30")]
	public MapDestructionDebris()
	{
	}
}
