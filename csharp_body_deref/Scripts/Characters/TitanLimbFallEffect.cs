// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanLimbFallEffect
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanLimbFallEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006C3")]
internal sealed class TitanLimbFallEffect : MonoBehaviour
{
	[Token(Token = "0x20006C4")]
	private sealed class Attachment : IDisposable
	{
		[Token(Token = "0x40021CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Mesh Mesh;

		[Token(Token = "0x40021D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Matrix4x4 Matrix;

		[Token(Token = "0x40021D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public readonly List<Material> Materials;

		[Token(Token = "0x40021D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x40021D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private readonly bool _ownsMesh;

		[Token(Token = "0x60042D8")]
		[Address(RVA = "0x219B740", Offset = "0x2199D40", VA = "0x18219B740")]
		public Attachment(Mesh mesh, Matrix4x4 matrix, bool ownsMesh)
		{
		}

		[Token(Token = "0x60042D9")]
		[Address(RVA = "0x219B5E0", Offset = "0x2199BE0", VA = "0x18219B5E0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x400219D")]
	private const int MaxPieces = 24;

	[Token(Token = "0x400219E")]
	private const float DissolveDelay = 5f;

	[Token(Token = "0x400219F")]
	private const float DissolveDuration = 3f;

	[Token(Token = "0x40021A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector3 Gravity;

	[Token(Token = "0x40021A1")]
	private const float SettleDuration = 0.25f;

	[Token(Token = "0x40021A2")]
	private const float SteamLifetime = 1.3f;

	[Token(Token = "0x40021A3")]
	private const float MinOutwardSpeed = 10f;

	[Token(Token = "0x40021A4")]
	private const float MaxOutwardSpeed = 16f;

	[Token(Token = "0x40021A5")]
	private const float MaxSidewaysSpeed = 1.5f;

	[Token(Token = "0x40021A6")]
	private const float MaxUpwardSpeed = 6f;

	[Token(Token = "0x40021A7")]
	private const float GroundLaunchDistance = 2f;

	[Token(Token = "0x40021A8")]
	private const float MinGroundUpwardSpeed = 8f;

	[Token(Token = "0x40021A9")]
	private const float MaxGroundUpwardSpeed = 10f;

	[Token(Token = "0x40021AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private static readonly int GroundMask;

	[Token(Token = "0x40021AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<TitanLimbFallEffect> Pool;

	[Token(Token = "0x40021AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int Dissolve;

	[Token(Token = "0x40021AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Shader _shader;

	[Token(Token = "0x40021AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<Material> _materials;

	[Token(Token = "0x40021AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Material> _growthMaterials;

	[Token(Token = "0x40021B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly List<Material> _tissueMaterials;

	[Token(Token = "0x40021B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly List<Material> _sourceMaterials;

	[Token(Token = "0x40021B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<Vector3> _vertices;

	[Token(Token = "0x40021B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<Vector3> _supportVertices;

	[Token(Token = "0x40021B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly List<Vector2> _growthCoordinates;

	[Token(Token = "0x40021B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly List<int> _indices;

	[Token(Token = "0x40021B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly List<Attachment> _attachments;

	[Token(Token = "0x40021B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private MaterialPropertyBlock _properties;

	[Token(Token = "0x40021B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private MaterialPropertyBlock _growthProperties;

	[Token(Token = "0x40021B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Mesh _mesh;

	[Token(Token = "0x40021BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Mesh _growthMesh;

	[Token(Token = "0x40021BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Mesh _tissueMesh;

	[Token(Token = "0x40021BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private ParticleSystem _steam;

	[Token(Token = "0x40021BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private ParticleSystem _blood;

	[Token(Token = "0x40021BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private float _dissolveDelay;

	[Token(Token = "0x40021BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	private Matrix4x4 _meshOffset;

	[Token(Token = "0x40021C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
	private Vector3 _origin;

	[Token(Token = "0x40021C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Vector3 _velocity;

	[Token(Token = "0x40021C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	private Vector3 _angularVelocity;

	[Token(Token = "0x40021C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Vector3 _restNormal;

	[Token(Token = "0x40021C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x114")]
	private Vector3 _groundPoint;

	[Token(Token = "0x40021C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Vector3 _groundNormal;

	[Token(Token = "0x40021C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	private Quaternion _landingRotation;

	[Token(Token = "0x40021C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13C")]
	private Quaternion _restRotation;

	[Token(Token = "0x40021C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14C")]
	private float _radius;

	[Token(Token = "0x40021C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private float _groundAge;

	[Token(Token = "0x40021CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	private float _age;

	[Token(Token = "0x40021CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private int _layer;

	[Token(Token = "0x40021CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15C")]
	private bool _hasGrowth;

	[Token(Token = "0x40021CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15D")]
	private bool _receiveShadows;

	[Token(Token = "0x40021CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15E")]
	private bool _landed;

	[Token(Token = "0x60042C2")]
	[Address(RVA = "0x21B4BE0", Offset = "0x21B31E0", VA = "0x1821B4BE0")]
	public static void PlayHead(SkinnedMeshRenderer source, Transform head, Vector3 velocity, ParticleSystem neckBlood, float dissolveDelay)
	{
	}

	[Token(Token = "0x60042C3")]
	[Address(RVA = "0x21B4D30", Offset = "0x21B3330", VA = "0x1821B4D30")]
	public static TitanLimbFallEffect Play(SkinnedMeshRenderer source, Mesh limb, Material wound, Mesh growth, float progress, Vector3 velocity, [Optional] Transform attachments)
	{
		return null;
	}

	[Token(Token = "0x60042C4")]
	[Address(RVA = "0x21B46F0", Offset = "0x21B2CF0", VA = "0x1821B46F0")]
	private void PlayBlood(ParticleSystem neckBlood, Transform head)
	{
	}

	[Token(Token = "0x60042C5")]
	[Address(RVA = "0x21B2910", Offset = "0x21B0F10", VA = "0x1821B2910")]
	private void Initialize(SkinnedMeshRenderer source, Mesh limb, Material wound, Mesh growth, float progress, Vector3 velocity, Transform attachments)
	{
	}

	[Token(Token = "0x60042C6")]
	[Address(RVA = "0x21B0650", Offset = "0x21AEC50", VA = "0x1821B0650")]
	private void AddAttachments(SkinnedMeshRenderer source, Transform root, float size)
	{
	}

	[Token(Token = "0x60042C7")]
	[Address(RVA = "0x21B25A0", Offset = "0x21B0BA0", VA = "0x1821B25A0")]
	private float GetUpwardSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x60042C8")]
	[Address(RVA = "0x21B0F40", Offset = "0x21AF540", VA = "0x1821B0F40")]
	private void AddSupportVertices(Mesh mesh, float growth = -1f)
	{
	}

	[Token(Token = "0x60042C9")]
	[Address(RVA = "0x21B0DA0", Offset = "0x21AF3A0", VA = "0x1821B0DA0")]
	private void AddSupportVertex(Vector3 vertex)
	{
	}

	[Token(Token = "0x60042CA")]
	[Address(RVA = "0x21B1DD0", Offset = "0x21B03D0", VA = "0x1821B1DD0")]
	private Vector3 GetRestNormal()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60042CB")]
	[Address(RVA = "0x21B1C30", Offset = "0x21B0230", VA = "0x1821B1C30")]
	private Vector3 GetFarthestVertex(Vector3 origin)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60042CC")]
	[Address(RVA = "0x21B12B0", Offset = "0x21AF8B0", VA = "0x1821B12B0")]
	private void Bake(SkinnedMeshRenderer source, Mesh mesh, Mesh destination)
	{
	}

	[Token(Token = "0x60042CD")]
	[Address(RVA = "0x21B13F0", Offset = "0x21AF9F0", VA = "0x1821B13F0")]
	private static void CopyMaterials(List<Material> materials, List<Material> sources, bool growth, float size)
	{
	}

	[Token(Token = "0x60042CE")]
	[Address(RVA = "0x21B5310", Offset = "0x21B3910", VA = "0x1821B5310")]
	private void PrepareSteam(SkinnedMeshRenderer source, float size)
	{
	}

	[Token(Token = "0x60042CF")]
	[Address(RVA = "0x21B3BB0", Offset = "0x21B21B0", VA = "0x1821B3BB0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60042D0")]
	[Address(RVA = "0x21B57E0", Offset = "0x21B3DE0", VA = "0x1821B57E0")]
	private void UpdateMotion(float deltaTime)
	{
	}

	[Token(Token = "0x60042D1")]
	[Address(RVA = "0x21B23A0", Offset = "0x21B09A0", VA = "0x1821B23A0")]
	private float GetSupportHeight(Quaternion rotation, Vector3 normal)
	{
		return default(float);
	}

	[Token(Token = "0x60042D2")]
	[Address(RVA = "0x21B5660", Offset = "0x21B3C60", VA = "0x1821B5660")]
	private void SetGroundPose()
	{
	}

	[Token(Token = "0x60042D3")]
	[Address(RVA = "0x21B1A40", Offset = "0x21B0040", VA = "0x1821B1A40")]
	private void Draw(Mesh mesh, List<Material> materials, MaterialPropertyBlock properties, Matrix4x4 matrix, float dissolve)
	{
	}

	[Token(Token = "0x60042D4")]
	[Address(RVA = "0x21B4520", Offset = "0x21B2B20", VA = "0x1821B4520")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60042D5")]
	[Address(RVA = "0x21B4150", Offset = "0x21B2750", VA = "0x1821B4150")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60042D6")]
	[Address(RVA = "0x21B6340", Offset = "0x21B4940", VA = "0x1821B6340")]
	public TitanLimbFallEffect()
	{
	}
}
