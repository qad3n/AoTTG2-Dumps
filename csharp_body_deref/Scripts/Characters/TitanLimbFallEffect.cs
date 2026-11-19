// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanLimbFallEffect
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000723")]
internal sealed class TitanLimbFallEffect : MonoBehaviour
{
	[Token(Token = "0x2000724")]
	private sealed class Attachment : IDisposable
	{
		[Token(Token = "0x40023AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Mesh Mesh;

		[Token(Token = "0x40023AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Matrix4x4 Matrix;

		[Token(Token = "0x40023AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public readonly List<Material> Materials;

		[Token(Token = "0x40023AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x40023B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private readonly bool _ownsMesh;

		[Token(Token = "0x600458B")]
		[Address(RVA = "0x5B51630", Offset = "0x5B50630", VA = "0x5B51630")]
		public Attachment(Mesh mesh, Matrix4x4 matrix, bool ownsMesh)
		{
		}

		[Token(Token = "0x600458C")]
		[Address(RVA = "0x5B53390", Offset = "0x5B52390", VA = "0x5B53390", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x400237A")]
	private const int MaxPieces = 24;

	[Token(Token = "0x400237B")]
	private const float DissolveDelay = 5f;

	[Token(Token = "0x400237C")]
	private const float DissolveDuration = 3f;

	[Token(Token = "0x400237D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector3 Gravity;

	[Token(Token = "0x400237E")]
	private const float SettleDuration = 0.25f;

	[Token(Token = "0x400237F")]
	private const float SteamLifetime = 1.3f;

	[Token(Token = "0x4002380")]
	private const float MinOutwardSpeed = 10f;

	[Token(Token = "0x4002381")]
	private const float MaxOutwardSpeed = 16f;

	[Token(Token = "0x4002382")]
	private const float MaxSidewaysSpeed = 1.5f;

	[Token(Token = "0x4002383")]
	private const float MaxUpwardSpeed = 6f;

	[Token(Token = "0x4002384")]
	private const float GroundLaunchDistance = 2f;

	[Token(Token = "0x4002385")]
	private const float MinGroundUpwardSpeed = 8f;

	[Token(Token = "0x4002386")]
	private const float MaxGroundUpwardSpeed = 10f;

	[Token(Token = "0x4002387")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	internal static readonly int GroundMask;

	[Token(Token = "0x4002388")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<TitanLimbFallEffect> Pool;

	[Token(Token = "0x4002389")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int Dissolve;

	[Token(Token = "0x400238A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Shader _shader;

	[Token(Token = "0x400238B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<Material> _materials;

	[Token(Token = "0x400238C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Material> _growthMaterials;

	[Token(Token = "0x400238D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly List<Material> _tissueMaterials;

	[Token(Token = "0x400238E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly List<Material> _sourceMaterials;

	[Token(Token = "0x400238F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<Vector3> _vertices;

	[Token(Token = "0x4002390")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<Vector3> _supportVertices;

	[Token(Token = "0x4002391")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly List<Vector2> _growthCoordinates;

	[Token(Token = "0x4002392")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly List<int> _indices;

	[Token(Token = "0x4002393")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly List<Attachment> _attachments;

	[Token(Token = "0x4002394")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private MaterialPropertyBlock _properties;

	[Token(Token = "0x4002395")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private MaterialPropertyBlock _growthProperties;

	[Token(Token = "0x4002396")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Mesh _mesh;

	[Token(Token = "0x4002397")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Mesh _growthMesh;

	[Token(Token = "0x4002398")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Mesh _tissueMesh;

	[Token(Token = "0x4002399")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private ParticleSystem _steam;

	[Token(Token = "0x400239A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private ParticleSystem _blood;

	[Token(Token = "0x400239B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private float _dissolveDelay;

	[Token(Token = "0x400239C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	private Matrix4x4 _meshOffset;

	[Token(Token = "0x400239D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
	private Vector3 _origin;

	[Token(Token = "0x400239E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Vector3 _velocity;

	[Token(Token = "0x400239F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	private Vector3 _angularVelocity;

	[Token(Token = "0x40023A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Vector3 _restNormal;

	[Token(Token = "0x40023A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x114")]
	private Vector3 _groundPoint;

	[Token(Token = "0x40023A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Vector3 _groundNormal;

	[Token(Token = "0x40023A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	private Quaternion _landingRotation;

	[Token(Token = "0x40023A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13C")]
	private Quaternion _restRotation;

	[Token(Token = "0x40023A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14C")]
	private float _radius;

	[Token(Token = "0x40023A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private float _groundAge;

	[Token(Token = "0x40023A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	private float _age;

	[Token(Token = "0x40023A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private int _layer;

	[Token(Token = "0x40023A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15C")]
	private bool _hasGrowth;

	[Token(Token = "0x40023AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15D")]
	private bool _receiveShadows;

	[Token(Token = "0x40023AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15E")]
	private bool _landed;

	[Token(Token = "0x6004575")]
	[Address(RVA = "0x5B4D460", Offset = "0x5B4C460", VA = "0x5B4D460")]
	public static void PlayHead(SkinnedMeshRenderer source, Transform head, Vector3 velocity, ParticleSystem neckBlood, float dissolveDelay)
	{
	}

	[Token(Token = "0x6004576")]
	[Address(RVA = "0x5B4D590", Offset = "0x5B4C590", VA = "0x5B4D590")]
	public static TitanLimbFallEffect Play(SkinnedMeshRenderer source, Mesh limb, Material wound, Mesh growth, float progress, Vector3 velocity, [Optional] Transform attachments)
	{
		return null;
	}

	[Token(Token = "0x6004577")]
	[Address(RVA = "0x5B4DAF0", Offset = "0x5B4CAF0", VA = "0x5B4DAF0")]
	private void PlayBlood(ParticleSystem neckBlood, Transform head)
	{
	}

	[Token(Token = "0x6004578")]
	[Address(RVA = "0x5B4DEC0", Offset = "0x5B4CEC0", VA = "0x5B4DEC0")]
	private void Initialize(SkinnedMeshRenderer source, Mesh limb, Material wound, Mesh growth, float progress, Vector3 velocity, Transform attachments)
	{
	}

	[Token(Token = "0x6004579")]
	[Address(RVA = "0x5B50030", Offset = "0x5B4F030", VA = "0x5B50030")]
	private void AddAttachments(SkinnedMeshRenderer source, Transform root, float size)
	{
	}

	[Token(Token = "0x600457A")]
	[Address(RVA = "0x5B51020", Offset = "0x5B50020", VA = "0x5B51020")]
	private float GetUpwardSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x600457B")]
	[Address(RVA = "0x5B4F640", Offset = "0x5B4E640", VA = "0x5B4F640")]
	private void AddSupportVertices(Mesh mesh, float growth = -1f)
	{
	}

	[Token(Token = "0x600457C")]
	[Address(RVA = "0x5B518F0", Offset = "0x5B508F0", VA = "0x5B518F0")]
	private void AddSupportVertex(Vector3 vertex)
	{
	}

	[Token(Token = "0x600457D")]
	[Address(RVA = "0x5B509F0", Offset = "0x5B4F9F0", VA = "0x5B509F0")]
	private Vector3 GetRestNormal()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600457E")]
	[Address(RVA = "0x5B51B20", Offset = "0x5B50B20", VA = "0x5B51B20")]
	private Vector3 GetFarthestVertex(Vector3 origin)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600457F")]
	[Address(RVA = "0x5B4F520", Offset = "0x5B4E520", VA = "0x5B4F520")]
	private void Bake(SkinnedMeshRenderer source, Mesh mesh, Mesh destination)
	{
	}

	[Token(Token = "0x6004580")]
	[Address(RVA = "0x5B4F9B0", Offset = "0x5B4E9B0", VA = "0x5B4F9B0")]
	private static void CopyMaterials(List<Material> materials, List<Material> sources, bool growth, float size)
	{
	}

	[Token(Token = "0x6004581")]
	[Address(RVA = "0x5B513A0", Offset = "0x5B503A0", VA = "0x5B513A0")]
	private void PrepareSteam(SkinnedMeshRenderer source, float size)
	{
	}

	[Token(Token = "0x6004582")]
	[Address(RVA = "0x5B51CC0", Offset = "0x5B50CC0", VA = "0x5B51CC0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004583")]
	[Address(RVA = "0x5B52570", Offset = "0x5B51570", VA = "0x5B52570")]
	private void UpdateMotion(float deltaTime)
	{
	}

	[Token(Token = "0x6004584")]
	[Address(RVA = "0x5B51730", Offset = "0x5B50730", VA = "0x5B51730")]
	private float GetSupportHeight(Quaternion rotation, Vector3 normal)
	{
		return default(float);
	}

	[Token(Token = "0x6004585")]
	[Address(RVA = "0x5B53090", Offset = "0x5B52090", VA = "0x5B53090")]
	private void SetGroundPose()
	{
	}

	[Token(Token = "0x6004586")]
	[Address(RVA = "0x5B52EB0", Offset = "0x5B51EB0", VA = "0x5B52EB0")]
	private void Draw(Mesh mesh, List<Material> materials, MaterialPropertyBlock properties, Matrix4x4 matrix, float dissolve)
	{
	}

	[Token(Token = "0x6004587")]
	[Address(RVA = "0x5B531A0", Offset = "0x5B521A0", VA = "0x5B531A0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004588")]
	[Address(RVA = "0x5B53520", Offset = "0x5B52520", VA = "0x5B53520")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004589")]
	[Address(RVA = "0x5B53960", Offset = "0x5B52960", VA = "0x5B53960")]
	public TitanLimbFallEffect()
	{
	}
}
