// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ShifterGrowthEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ShifterGrowthEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006FE")]
internal class ShifterGrowthEffect : MonoBehaviour
{
	[Token(Token = "0x20006FF")]
	private sealed class Measurement
	{
		[Token(Token = "0x4002116")]
		[FieldOffset(Offset = "0x10")]
		public readonly Vector3[] Positions;

		[Token(Token = "0x4002117")]
		[FieldOffset(Offset = "0x18")]
		public readonly float[] Distances;

		[Token(Token = "0x4002118")]
		[FieldOffset(Offset = "0x20")]
		public float Maximum;

		[Token(Token = "0x60043A4")]
		[Address(RVA = "0x5B1D930", Offset = "0x5B1C930", VA = "0x5B1D930")]
		public Measurement(int count)
		{
		}
	}

	[Token(Token = "0x2000700")]
	private sealed class Layer
	{
		[Token(Token = "0x4002119")]
		[FieldOffset(Offset = "0x10")]
		public readonly SkinnedMeshRenderer Renderer;

		[Token(Token = "0x400211A")]
		[FieldOffset(Offset = "0x18")]
		public readonly Mesh OriginalMesh;

		[Token(Token = "0x400211B")]
		[FieldOffset(Offset = "0x20")]
		public readonly Material[] OriginalMaterials;

		[Token(Token = "0x400211C")]
		[FieldOffset(Offset = "0x28")]
		public readonly Shader[] OriginalShaders;

		[Token(Token = "0x400211D")]
		[FieldOffset(Offset = "0x30")]
		public readonly Material[] GrowthMaterials;

		[Token(Token = "0x400211E")]
		[FieldOffset(Offset = "0x38")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x60043A5")]
		[Address(RVA = "0x5B1D9C0", Offset = "0x5B1C9C0", VA = "0x5B1D9C0")]
		public Layer(SkinnedMeshRenderer renderer, Mesh originalMesh, Material[] originalMaterials)
		{
		}
	}

	[Token(Token = "0x40020FA")]
	private const float Duration = 3.8f;

	[Token(Token = "0x40020FB")]
	private const float GrowthEnd = 3.6f;

	[Token(Token = "0x40020FC")]
	private const float SlowdownTime = 1f;

	[Token(Token = "0x40020FD")]
	private const float SlowdownProgress = 0.75f;

	[Token(Token = "0x40020FE")]
	private const float SlowdownSpeed = 0.4f;

	[Token(Token = "0x40020FF")]
	private const float GrowthOvershoot = 1.03f;

	[Token(Token = "0x4002100")]
	private const float TissueScale = 3f;

	[Token(Token = "0x4002101")]
	private const float ChunkRate = 120f;

	[Token(Token = "0x4002102")]
	private const float ChunkLifetime = 0.5f;

	[Token(Token = "0x4002103")]
	private const float ChunkRadius = 0.35f;

	[Token(Token = "0x4002104")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int Growth;

	[Token(Token = "0x4002105")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int TissueIntensity;

	[Token(Token = "0x4002106")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] Origin;

	[Token(Token = "0x4002107")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color ChunkDark;

	[Token(Token = "0x4002108")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Color ChunkLight;

	[Token(Token = "0x4002109")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<Layer> _layers;

	[Token(Token = "0x400210A")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Object> _created;

	[Token(Token = "0x400210B")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Material> _materialBuffer;

	[Token(Token = "0x400210C")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<Transform> _nodes;

	[Token(Token = "0x400210D")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<Transform, int> _nodeIndices;

	[Token(Token = "0x400210E")]
	[FieldOffset(Offset = "0x48")]
	private ParticleSystem _chunks;

	[Token(Token = "0x400210F")]
	[FieldOffset(Offset = "0x50")]
	private float[] _distances;

	[Token(Token = "0x4002110")]
	[FieldOffset(Offset = "0x58")]
	private int[] _parents;

	[Token(Token = "0x4002111")]
	[FieldOffset(Offset = "0x60")]
	private Shader _shader;

	[Token(Token = "0x4002112")]
	[FieldOffset(Offset = "0x68")]
	private BaseShifter _shifter;

	[Token(Token = "0x4002113")]
	[FieldOffset(Offset = "0x70")]
	private SkinnedMeshRenderer _body;

	[Token(Token = "0x4002114")]
	[FieldOffset(Offset = "0x78")]
	private float _startTime;

	[Token(Token = "0x4002115")]
	[FieldOffset(Offset = "0x7C")]
	private bool _finished;

	[Token(Token = "0x6004392")]
	[Address(RVA = "0x5B164E0", Offset = "0x5B154E0", VA = "0x5B164E0")]
	public void Play(BaseShifter shifter)
	{
	}

	[Token(Token = "0x6004393")]
	[Address(RVA = "0x5B19B40", Offset = "0x5B18B40", VA = "0x5B19B40")]
	private void AddNode(Transform bone)
	{
	}

	[Token(Token = "0x6004394")]
	[Address(RVA = "0x5B19C90", Offset = "0x5B18C90", VA = "0x5B19C90")]
	private void ComputeDistances(Transform root)
	{
	}

	[Token(Token = "0x6004395")]
	[Address(RVA = "0x5B1B630", Offset = "0x5B1A630", VA = "0x5B1B630")]
	private float VertexDistance(Vector3 position, int bone)
	{
		return default(float);
	}

	[Token(Token = "0x6004396")]
	[Address(RVA = "0x5B1B840", Offset = "0x5B1A840", VA = "0x5B1B840")]
	private Measurement Measure(Mesh mesh, Transform[] bones)
	{
		return null;
	}

	[Token(Token = "0x6004397")]
	[Address(RVA = "0x5B1C330", Offset = "0x5B1B330", VA = "0x5B1C330")]
	private void SetGrowthCoordinates(Mesh mesh, Measurement measurement, float maximum)
	{
	}

	[Token(Token = "0x6004398")]
	[Address(RVA = "0x5B1A2F0", Offset = "0x5B192F0", VA = "0x5B1A2F0")]
	private void AddLayers(List<SkinnedMeshRenderer> renderers)
	{
	}

	[Token(Token = "0x6004399")]
	[Address(RVA = "0x5B1C670", Offset = "0x5B1B670", VA = "0x5B1C670")]
	private void AddLayer(SkinnedMeshRenderer renderer, Mesh mesh)
	{
	}

	[Token(Token = "0x600439A")]
	[Address(RVA = "0x5B1A6F0", Offset = "0x5B196F0", VA = "0x5B1A6F0")]
	private void CreateChunks()
	{
	}

	[Token(Token = "0x600439B")]
	[Address(RVA = "0x5B1C9F0", Offset = "0x5B1B9F0", VA = "0x5B1C9F0")]
	private Texture2D CreateChunkTexture()
	{
		return null;
	}

	[Token(Token = "0x600439C")]
	[Address(RVA = "0x5B1B200", Offset = "0x5B1A200", VA = "0x5B1B200")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600439D")]
	[Address(RVA = "0x5B1D130", Offset = "0x5B1C130", VA = "0x5B1D130")]
	private static float GrowthProgress(float time)
	{
		return default(float);
	}

	[Token(Token = "0x600439E")]
	[Address(RVA = "0x5B1D5A0", Offset = "0x5B1C5A0", VA = "0x5B1D5A0")]
	private static float Hermite(float t, float start, float startTangent, float end, float endTangent)
	{
		return default(float);
	}

	[Token(Token = "0x600439F")]
	[Address(RVA = "0x5B1D2F0", Offset = "0x5B1C2F0", VA = "0x5B1D2F0")]
	private void SyncMaterials(Layer layer)
	{
	}

	[Token(Token = "0x60043A0")]
	[Address(RVA = "0x5B1CCC0", Offset = "0x5B1BCC0", VA = "0x5B1CCC0")]
	private void Finish()
	{
	}

	[Token(Token = "0x60043A1")]
	[Address(RVA = "0x5B1D610", Offset = "0x5B1C610", VA = "0x5B1D610")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60043A2")]
	[Address(RVA = "0x5B1D620", Offset = "0x5B1C620", VA = "0x5B1D620")]
	public ShifterGrowthEffect()
	{
	}
}
