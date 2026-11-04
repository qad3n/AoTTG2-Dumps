// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ShifterGrowthEffect
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Characters/ShifterGrowthEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200069E")]
internal class ShifterGrowthEffect : MonoBehaviour
{
	[Token(Token = "0x200069F")]
	private sealed class Measurement
	{
		[Token(Token = "0x4001F63")]
		[FieldOffset(Offset = "0x10")]
		public readonly Vector3[] Positions;

		[Token(Token = "0x4001F64")]
		[FieldOffset(Offset = "0x18")]
		public readonly float[] Distances;

		[Token(Token = "0x4001F65")]
		[FieldOffset(Offset = "0x20")]
		public float Maximum;

		[Token(Token = "0x6004104")]
		[Address(RVA = "0x21929B0", Offset = "0x2190FB0", VA = "0x1821929B0")]
		public Measurement(int count)
		{
		}
	}

	[Token(Token = "0x20006A0")]
	private sealed class Layer
	{
		[Token(Token = "0x4001F66")]
		[FieldOffset(Offset = "0x10")]
		public readonly SkinnedMeshRenderer Renderer;

		[Token(Token = "0x4001F67")]
		[FieldOffset(Offset = "0x18")]
		public readonly Mesh OriginalMesh;

		[Token(Token = "0x4001F68")]
		[FieldOffset(Offset = "0x20")]
		public readonly Material[] OriginalMaterials;

		[Token(Token = "0x4001F69")]
		[FieldOffset(Offset = "0x28")]
		public readonly Shader[] OriginalShaders;

		[Token(Token = "0x4001F6A")]
		[FieldOffset(Offset = "0x30")]
		public readonly Material[] GrowthMaterials;

		[Token(Token = "0x4001F6B")]
		[FieldOffset(Offset = "0x38")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x6004105")]
		[Address(RVA = "0x21928A0", Offset = "0x2190EA0", VA = "0x1821928A0")]
		public Layer(SkinnedMeshRenderer renderer, Mesh originalMesh, Material[] originalMaterials)
		{
		}
	}

	[Token(Token = "0x4001F47")]
	private const float Duration = 3.8f;

	[Token(Token = "0x4001F48")]
	private const float GrowthEnd = 3.6f;

	[Token(Token = "0x4001F49")]
	private const float SlowdownTime = 1f;

	[Token(Token = "0x4001F4A")]
	private const float SlowdownProgress = 0.75f;

	[Token(Token = "0x4001F4B")]
	private const float SlowdownSpeed = 0.4f;

	[Token(Token = "0x4001F4C")]
	private const float GrowthOvershoot = 1.03f;

	[Token(Token = "0x4001F4D")]
	private const float TissueScale = 3f;

	[Token(Token = "0x4001F4E")]
	private const float ChunkRate = 120f;

	[Token(Token = "0x4001F4F")]
	private const float ChunkLifetime = 0.5f;

	[Token(Token = "0x4001F50")]
	private const float ChunkRadius = 0.35f;

	[Token(Token = "0x4001F51")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int Growth;

	[Token(Token = "0x4001F52")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int TissueIntensity;

	[Token(Token = "0x4001F53")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] Origin;

	[Token(Token = "0x4001F54")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color ChunkDark;

	[Token(Token = "0x4001F55")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Color ChunkLight;

	[Token(Token = "0x4001F56")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<Layer> _layers;

	[Token(Token = "0x4001F57")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Object> _created;

	[Token(Token = "0x4001F58")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Material> _materialBuffer;

	[Token(Token = "0x4001F59")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<Transform> _nodes;

	[Token(Token = "0x4001F5A")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<Transform, int> _nodeIndices;

	[Token(Token = "0x4001F5B")]
	[FieldOffset(Offset = "0x48")]
	private ParticleSystem _chunks;

	[Token(Token = "0x4001F5C")]
	[FieldOffset(Offset = "0x50")]
	private float[] _distances;

	[Token(Token = "0x4001F5D")]
	[FieldOffset(Offset = "0x58")]
	private int[] _parents;

	[Token(Token = "0x4001F5E")]
	[FieldOffset(Offset = "0x60")]
	private Shader _shader;

	[Token(Token = "0x4001F5F")]
	[FieldOffset(Offset = "0x68")]
	private BaseShifter _shifter;

	[Token(Token = "0x4001F60")]
	[FieldOffset(Offset = "0x70")]
	private SkinnedMeshRenderer _body;

	[Token(Token = "0x4001F61")]
	[FieldOffset(Offset = "0x78")]
	private float _startTime;

	[Token(Token = "0x4001F62")]
	[FieldOffset(Offset = "0x7C")]
	private bool _finished;

	[Token(Token = "0x60040F2")]
	[Address(RVA = "0x21749A0", Offset = "0x2172FA0", VA = "0x1821749A0")]
	public void Play(BaseShifter shifter)
	{
	}

	[Token(Token = "0x60040F3")]
	[Address(RVA = "0x2172040", Offset = "0x2170640", VA = "0x182172040")]
	private void AddNode(Transform bone)
	{
	}

	[Token(Token = "0x60040F4")]
	[Address(RVA = "0x21721A0", Offset = "0x21707A0", VA = "0x1821721A0")]
	private void ComputeDistances(Transform root)
	{
	}

	[Token(Token = "0x60040F5")]
	[Address(RVA = "0x2175460", Offset = "0x2173A60", VA = "0x182175460")]
	private float VertexDistance(Vector3 position, int bone)
	{
		return default(float);
	}

	[Token(Token = "0x60040F6")]
	[Address(RVA = "0x2173FC0", Offset = "0x21725C0", VA = "0x182173FC0")]
	private Measurement Measure(Mesh mesh, Transform[] bones)
	{
		return null;
	}

	[Token(Token = "0x60040F7")]
	[Address(RVA = "0x2174DF0", Offset = "0x21733F0", VA = "0x182174DF0")]
	private void SetGrowthCoordinates(Mesh mesh, Measurement measurement, float maximum)
	{
	}

	[Token(Token = "0x60040F8")]
	[Address(RVA = "0x2171CA0", Offset = "0x21702A0", VA = "0x182171CA0")]
	private void AddLayers(List<SkinnedMeshRenderer> renderers)
	{
	}

	[Token(Token = "0x60040F9")]
	[Address(RVA = "0x2171970", Offset = "0x216FF70", VA = "0x182171970")]
	private void AddLayer(SkinnedMeshRenderer renderer, Mesh mesh)
	{
	}

	[Token(Token = "0x60040FA")]
	[Address(RVA = "0x21729E0", Offset = "0x2170FE0", VA = "0x1821729E0")]
	private void CreateChunks()
	{
	}

	[Token(Token = "0x60040FB")]
	[Address(RVA = "0x21726F0", Offset = "0x2170CF0", VA = "0x1821726F0")]
	private Texture2D CreateChunkTexture()
	{
		return null;
	}

	[Token(Token = "0x60040FC")]
	[Address(RVA = "0x2173B60", Offset = "0x2172160", VA = "0x182173B60")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60040FD")]
	[Address(RVA = "0x21738C0", Offset = "0x2171EC0", VA = "0x1821738C0")]
	private static float GrowthProgress(float time)
	{
		return default(float);
	}

	[Token(Token = "0x60040FE")]
	[Address(RVA = "0x2173A90", Offset = "0x2172090", VA = "0x182173A90")]
	private static float Hermite(float t, float start, float startTangent, float end, float endTangent)
	{
		return default(float);
	}

	[Token(Token = "0x60040FF")]
	[Address(RVA = "0x2175190", Offset = "0x2173790", VA = "0x182175190")]
	private void SyncMaterials(Layer layer)
	{
	}

	[Token(Token = "0x6004100")]
	[Address(RVA = "0x21734C0", Offset = "0x2171AC0", VA = "0x1821734C0")]
	private void Finish()
	{
	}

	[Token(Token = "0x6004101")]
	[Address(RVA = "0x2174990", Offset = "0x2172F90", VA = "0x182174990")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004102")]
	[Address(RVA = "0x2175790", Offset = "0x2173D90", VA = "0x182175790")]
	public ShifterGrowthEffect()
	{
	}
}
