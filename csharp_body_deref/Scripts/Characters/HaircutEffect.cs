// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HaircutEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HaircutEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200071B")]
internal class HaircutEffect : MonoBehaviour
{
	[Token(Token = "0x200071C")]
	private sealed class HairMesh
	{
		[Token(Token = "0x4002340")]
		[FieldOffset(Offset = "0x10")]
		public readonly Transform Source;

		[Token(Token = "0x4002341")]
		[FieldOffset(Offset = "0x18")]
		public readonly Mesh Mesh;

		[Token(Token = "0x4002342")]
		[FieldOffset(Offset = "0x20")]
		public readonly Material[] Materials;

		[Token(Token = "0x4002343")]
		[FieldOffset(Offset = "0x28")]
		public readonly int Layer;

		[Token(Token = "0x4002344")]
		[FieldOffset(Offset = "0x30")]
		public readonly List<HairPiece> Pieces;

		[Token(Token = "0x600455C")]
		[Address(RVA = "0x5B46A70", Offset = "0x5B45A70", VA = "0x5B46A70")]
		public HairMesh(Transform source, Mesh mesh, Material[] materials, int layer)
		{
		}
	}

	[Token(Token = "0x200071D")]
	private sealed class HairPiece
	{
		[Token(Token = "0x4002345")]
		[FieldOffset(Offset = "0x10")]
		public Vector3 Pivot;

		[Token(Token = "0x4002346")]
		[FieldOffset(Offset = "0x1C")]
		public Vector3 Velocity;

		[Token(Token = "0x4002347")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 AngularVelocity;

		[Token(Token = "0x4002348")]
		[FieldOffset(Offset = "0x34")]
		public Matrix4x4 Matrix;

		[Token(Token = "0x4002349")]
		[FieldOffset(Offset = "0x74")]
		public float Delay;

		[Token(Token = "0x400234A")]
		[FieldOffset(Offset = "0x78")]
		public bool Released;

		[Token(Token = "0x400234B")]
		[FieldOffset(Offset = "0x80")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x600455D")]
		[Address(RVA = "0x5B46B40", Offset = "0x5B45B40", VA = "0x5B46B40")]
		public HairPiece()
		{
		}
	}

	[Token(Token = "0x4002334")]
	private const int PieceCount = 12;

	[Token(Token = "0x4002335")]
	private const float CutDuration = 0.35f;

	[Token(Token = "0x4002336")]
	private const float FallDuration = 1.1f;

	[Token(Token = "0x4002337")]
	private const float FadeDuration = 0.25f;

	[Token(Token = "0x4002338")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int PieceId;

	[Token(Token = "0x4002339")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int FadeId;

	[Token(Token = "0x400233A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int BoundsMinId;

	[Token(Token = "0x400233B")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int BoundsInvSizeId;

	[Token(Token = "0x400233C")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<HairMesh> _meshes;

	[Token(Token = "0x400233D")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Material> _materials;

	[Token(Token = "0x400233E")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Mesh> _bakedMeshes;

	[Token(Token = "0x400233F")]
	[FieldOffset(Offset = "0x38")]
	private float _age;

	[Token(Token = "0x6004556")]
	[Address(RVA = "0x5B45CC0", Offset = "0x5B44CC0", VA = "0x5B45CC0")]
	public static void Play(Transform hairSocket, float size)
	{
	}

	[Token(Token = "0x6004557")]
	[Address(RVA = "0x5B45E00", Offset = "0x5B44E00", VA = "0x5B45E00")]
	private void Initialize(Transform hairSocket, Shader shader, float size)
	{
	}

	[Token(Token = "0x6004558")]
	[Address(RVA = "0x5B46BB0", Offset = "0x5B45BB0", VA = "0x5B46BB0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004559")]
	[Address(RVA = "0x5B47860", Offset = "0x5B46860", VA = "0x5B47860")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600455A")]
	[Address(RVA = "0x5B47B00", Offset = "0x5B46B00", VA = "0x5B47B00")]
	public HaircutEffect()
	{
	}
}
