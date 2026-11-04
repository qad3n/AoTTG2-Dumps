// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HaircutEffect
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Characters/HaircutEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006BC")]
internal class HaircutEffect : MonoBehaviour
{
	[Token(Token = "0x20006BD")]
	private sealed class HairMesh
	{
		[Token(Token = "0x4002173")]
		[FieldOffset(Offset = "0x10")]
		public readonly Transform Source;

		[Token(Token = "0x4002174")]
		[FieldOffset(Offset = "0x18")]
		public readonly Mesh Mesh;

		[Token(Token = "0x4002175")]
		[FieldOffset(Offset = "0x20")]
		public readonly Material[] Materials;

		[Token(Token = "0x4002176")]
		[FieldOffset(Offset = "0x28")]
		public readonly int Layer;

		[Token(Token = "0x4002177")]
		[FieldOffset(Offset = "0x30")]
		public readonly List<HairPiece> Pieces;

		[Token(Token = "0x60042AB")]
		[Address(RVA = "0x21A9430", Offset = "0x21A7A30", VA = "0x1821A9430")]
		public HairMesh(Transform source, Mesh mesh, Material[] materials, int layer)
		{
		}
	}

	[Token(Token = "0x20006BE")]
	private sealed class HairPiece
	{
		[Token(Token = "0x4002178")]
		[FieldOffset(Offset = "0x10")]
		public Vector3 Pivot;

		[Token(Token = "0x4002179")]
		[FieldOffset(Offset = "0x1C")]
		public Vector3 Velocity;

		[Token(Token = "0x400217A")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 AngularVelocity;

		[Token(Token = "0x400217B")]
		[FieldOffset(Offset = "0x34")]
		public Matrix4x4 Matrix;

		[Token(Token = "0x400217C")]
		[FieldOffset(Offset = "0x74")]
		public float Delay;

		[Token(Token = "0x400217D")]
		[FieldOffset(Offset = "0x78")]
		public bool Released;

		[Token(Token = "0x400217E")]
		[FieldOffset(Offset = "0x80")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x60042AC")]
		[Address(RVA = "0x21A94F0", Offset = "0x21A7AF0", VA = "0x1821A94F0")]
		public HairPiece()
		{
		}
	}

	[Token(Token = "0x4002167")]
	private const int PieceCount = 12;

	[Token(Token = "0x4002168")]
	private const float CutDuration = 0.35f;

	[Token(Token = "0x4002169")]
	private const float FallDuration = 1.1f;

	[Token(Token = "0x400216A")]
	private const float FadeDuration = 0.25f;

	[Token(Token = "0x400216B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int PieceId;

	[Token(Token = "0x400216C")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int FadeId;

	[Token(Token = "0x400216D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int BoundsMinId;

	[Token(Token = "0x400216E")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int BoundsInvSizeId;

	[Token(Token = "0x400216F")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<HairMesh> _meshes;

	[Token(Token = "0x4002170")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Material> _materials;

	[Token(Token = "0x4002171")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Mesh> _bakedMeshes;

	[Token(Token = "0x4002172")]
	[FieldOffset(Offset = "0x38")]
	private float _age;

	[Token(Token = "0x60042A5")]
	[Address(RVA = "0x21AABA0", Offset = "0x21A91A0", VA = "0x1821AABA0")]
	public static void Play(Transform hairSocket, float size)
	{
	}

	[Token(Token = "0x60042A6")]
	[Address(RVA = "0x21A9560", Offset = "0x21A7B60", VA = "0x1821A9560")]
	private void Initialize(Transform hairSocket, Shader shader, float size)
	{
	}

	[Token(Token = "0x60042A7")]
	[Address(RVA = "0x21A9FD0", Offset = "0x21A85D0", VA = "0x1821A9FD0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60042A8")]
	[Address(RVA = "0x21AA950", Offset = "0x21A8F50", VA = "0x1821AA950")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60042A9")]
	[Address(RVA = "0x21AAD90", Offset = "0x21A9390", VA = "0x1821AAD90")]
	public HaircutEffect()
	{
	}
}
