// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapDestructionDebris
// Update status: NEW in this game update
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

[Token(Token = "0x2000397")]
internal sealed class MapDestructionDebris : MonoBehaviour
{
	[Token(Token = "0x2000398")]
	private sealed class Piece
	{
		[Token(Token = "0x40012C9")]
		[FieldOffset(Offset = "0x10")]
		public GameObject Fragment;

		[Token(Token = "0x40012CA")]
		[FieldOffset(Offset = "0x18")]
		public Mesh Collision;

		[Token(Token = "0x40012CB")]
		[FieldOffset(Offset = "0x20")]
		public Rigidbody Body;

		[Token(Token = "0x40012CC")]
		[FieldOffset(Offset = "0x28")]
		public ConstantForce Force;

		[Token(Token = "0x60016E1")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Piece()
		{
		}
	}

	[Token(Token = "0x40012A8")]
	private const int MaxActive = 8;

	[Token(Token = "0x40012A9")]
	private const int MaxFractureTriangles = 20000;

	[Token(Token = "0x40012AA")]
	private const int MinPieces = 6;

	[Token(Token = "0x40012AB")]
	private const int MaxPieces = 40;

	[Token(Token = "0x40012AC")]
	private const float PieceSize = 3f;

	[Token(Token = "0x40012AD")]
	private const float GroundClearance = 0.05f;

	[Token(Token = "0x40012AE")]
	private const float MinColliderThickness = 0.1f;

	[Token(Token = "0x40012AF")]
	private const float ColliderShrink = 0.75f;

	[Token(Token = "0x40012B0")]
	private const float ExtraGravity = 1f;

	[Token(Token = "0x40012B1")]
	private const float RubbleFriction = 0.1f;

	[Token(Token = "0x40012B2")]
	private const float Spin = 1.2f;

	[Token(Token = "0x40012B3")]
	private const float Nudge = 1f;

	[Token(Token = "0x40012B4")]
	private const float MinSettleTime = 0.5f;

	[Token(Token = "0x40012B5")]
	private const float SettledSpeed = 1f;

	[Token(Token = "0x40012B6")]
	private const float FadeDelay = 3f;

	[Token(Token = "0x40012B7")]
	private const float FadeDuration = 1.5f;

	[Token(Token = "0x40012B8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int FadeId;

	[Token(Token = "0x40012B9")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<MapDestructionDebris> Active;

	[Token(Token = "0x40012BA")]
	[FieldOffset(Offset = "0x10")]
	private static readonly RaycastHit[] GroundHits;

	[Token(Token = "0x40012BB")]
	[FieldOffset(Offset = "0x18")]
	private static Shader _shader;

	[Token(Token = "0x40012BC")]
	[FieldOffset(Offset = "0x20")]
	private static PhysicsMaterial _rubble;

	[Token(Token = "0x40012BD")]
	[FieldOffset(Offset = "0x28")]
	private static int _workFrame;

	[Token(Token = "0x40012BE")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<Material, Material> _rubbleMaterials;

	[Token(Token = "0x40012BF")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Mesh> _meshes;

	[Token(Token = "0x40012C0")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Piece> _pieces;

	[Token(Token = "0x40012C1")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<GameObject> _sectionVisuals;

	[Token(Token = "0x40012C2")]
	[FieldOffset(Offset = "0x40")]
	private Material[] _fragmentMaterials;

	[Token(Token = "0x40012C3")]
	[FieldOffset(Offset = "0x48")]
	private Task<List<List<MapFracture.Triangle>>> _fracture;

	[Token(Token = "0x40012C4")]
	[FieldOffset(Offset = "0x50")]
	private Task _baking;

	[Token(Token = "0x40012C5")]
	[FieldOffset(Offset = "0x58")]
	private ShadowCastingMode _shadows;

	[Token(Token = "0x40012C6")]
	[FieldOffset(Offset = "0x5C")]
	private float _age;

	[Token(Token = "0x40012C7")]
	[FieldOffset(Offset = "0x60")]
	private float _activeAge;

	[Token(Token = "0x40012C8")]
	[FieldOffset(Offset = "0x64")]
	private int _seed;

	[Token(Token = "0x60016CE")]
	[Address(RVA = "0x1E9F160", Offset = "0x1E9D760", VA = "0x181E9F160")]
	public static void Spawn(DestructibleMapObject target)
	{
	}

	[Token(Token = "0x60016CF")]
	[Address(RVA = "0x1E9E7B0", Offset = "0x1E9CDB0", VA = "0x181E9E7B0")]
	private static void LoadAssets()
	{
	}

	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x1E9E170", Offset = "0x1E9C770", VA = "0x181E9E170")]
	private static float FindGround(Bounds bounds)
	{
		return default(float);
	}

	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x1E9ED50", Offset = "0x1E9D350", VA = "0x181E9ED50")]
	private void Shatter(DestructibleMapObject target)
	{
	}

	[Token(Token = "0x60016D2")]
	[Address(RVA = "0x1E9DE00", Offset = "0x1E9C400", VA = "0x181E9DE00")]
	private GameObject CreateVisual(MeshFilter source)
	{
		return null;
	}

	[Token(Token = "0x60016D3")]
	[Address(RVA = "0x1E9D340", Offset = "0x1E9B940", VA = "0x181E9D340")]
	private void AddRenderer(GameObject visual, Material[] materials)
	{
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x1E9E5F0", Offset = "0x1E9CBF0", VA = "0x181E9E5F0")]
	private Material GetMaterial(Material source)
	{
		return null;
	}

	[Token(Token = "0x60016D5")]
	[Address(RVA = "0x1E9DA70", Offset = "0x1E9C070", VA = "0x181E9DA70")]
	private static Material CreateMaterial(Material source)
	{
		return null;
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x1E9E430", Offset = "0x1E9CA30", VA = "0x181E9E430")]
	private static string FindProperty(Material source, ShaderPropertyFlags flag, ShaderPropertyType type, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x1E9F550", Offset = "0x1E9DB50", VA = "0x181E9F550")]
	private void Update()
	{
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x1E9F4B0", Offset = "0x1E9DAB0", VA = "0x181E9F4B0")]
	private static bool TryClaimFrame()
	{
		return default(bool);
	}

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x1E9D3D0", Offset = "0x1E9B9D0", VA = "0x181E9D3D0")]
	private void CreateFragments(List<List<MapFracture.Triangle>> cells)
	{
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x1E9CC10", Offset = "0x1E9B210", VA = "0x181E9CC10")]
	private void ActivateFragments()
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x1E9D0A0", Offset = "0x1E9B6A0", VA = "0x181E9D0A0")]
	private static Collider AddCollider(GameObject fragment, Mesh mesh, Mesh collision)
	{
		return null;
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x1E9E700", Offset = "0x1E9CD00", VA = "0x181E9E700")]
	private static bool IsSettled(Rigidbody body)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x1E9E590", Offset = "0x1E9CB90", VA = "0x181E9E590")]
	private static void Freeze(Piece piece)
	{
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x1E9E9D0", Offset = "0x1E9CFD0", VA = "0x181E9E9D0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x1E9FC40", Offset = "0x1E9E240", VA = "0x181E9FC40")]
	public MapDestructionDebris()
	{
	}
}
