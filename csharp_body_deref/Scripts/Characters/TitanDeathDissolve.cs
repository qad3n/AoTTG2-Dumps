// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanDeathDissolve
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanDeathDissolve.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Characters;

[Token(Token = "0x200071F")]
internal sealed class TitanDeathDissolve : IDisposable
{
	[Token(Token = "0x2000720")]
	private readonly struct SteamSource
	{
		[Token(Token = "0x400236B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly Mesh Mesh;

		[Token(Token = "0x400236C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly bool Regrowing;

		[Token(Token = "0x400236D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public readonly float Growth;

		[Token(Token = "0x6004573")]
		[Address(RVA = "0x5B4AB00", Offset = "0x5B49B00", VA = "0x5B4AB00")]
		public SteamSource(Mesh mesh, bool regrowing, float growth)
		{
		}
	}

	[Token(Token = "0x2000721")]
	private sealed class Part
	{
		[Token(Token = "0x400236E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Mesh Mesh;

		[Token(Token = "0x400236F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Material[] Materials;

		[Token(Token = "0x4002370")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x4002371")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly int Layer;

		[Token(Token = "0x4002372")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public readonly ShadowCastingMode Shadows;

		[Token(Token = "0x4002373")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly Matrix4x4 LocalMatrix;

		[Token(Token = "0x4002374")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public readonly float DissolvedProgress;

		[Token(Token = "0x6004574")]
		[Address(RVA = "0x5B4AF10", Offset = "0x5B49F10", VA = "0x5B4AF10")]
		public Part(Mesh mesh, Material[] materials, MaterialPropertyBlock properties, int layer, ShadowCastingMode shadows, float dissolvedProgress, [Optional] Matrix4x4? localMatrix)
		{
		}
	}

	[Token(Token = "0x4002351")]
	public const float SteamFadeDuration = 1.25f;

	[Token(Token = "0x4002352")]
	public const float SkinDissolvedProgress = 0.85950404f;

	[Token(Token = "0x4002353")]
	public const float TissueDissolvedProgress = 0.9917355f;

	[Token(Token = "0x4002354")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int Dissolve;

	[Token(Token = "0x4002355")]
	private const float WispRate = 80f;

	[Token(Token = "0x4002356")]
	private const float PlumeRate = 42f;

	[Token(Token = "0x4002357")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly List<Vector3> Vertices;

	[Token(Token = "0x4002358")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<Vector3> Normals;

	[Token(Token = "0x4002359")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly List<Vector3> SurfaceVertices;

	[Token(Token = "0x400235A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly List<int> SurfaceTriangles;

	[Token(Token = "0x400235B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly List<int> Triangles;

	[Token(Token = "0x400235C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly List<Vector2> GrowthCoordinates;

	[Token(Token = "0x400235D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static readonly List<Renderer> Renderers;

	[Token(Token = "0x400235E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static readonly List<Material> SourceMaterials;

	[Token(Token = "0x400235F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static readonly List<SteamSource> SteamSources;

	[Token(Token = "0x4002360")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly BaseTitan _titan;

	[Token(Token = "0x4002361")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly List<Part> _parts;

	[Token(Token = "0x4002362")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<Mesh> _meshes;

	[Token(Token = "0x4002363")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Material> _materials;

	[Token(Token = "0x4002364")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Shader _shader;

	[Token(Token = "0x4002365")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly float _scale;

	[Token(Token = "0x4002366")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly SkinnedMeshRenderer _bodyRenderer;

	[Token(Token = "0x4002367")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<ParticleSystem> _steam;

	[Token(Token = "0x4002368")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly bool _hideOnFinish;

	[Token(Token = "0x4002369")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private bool _finished;

	[Token(Token = "0x17000C05")]
	public bool CollidersDisabled
	{
		[Token(Token = "0x6004565")]
		[Address(RVA = "0x5B48260", Offset = "0x5B47260", VA = "0x5B48260")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004566")]
		[Address(RVA = "0x5B48270", Offset = "0x5B47270", VA = "0x5B48270")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004567")]
	[Address(RVA = "0x5B48280", Offset = "0x5B47280", VA = "0x5B48280")]
	public TitanDeathDissolve(BaseTitan titan, SkinnedMeshRenderer body, float scale, Func<Renderer, bool> isFlesh)
	{
	}

	[Token(Token = "0x6004568")]
	[Address(RVA = "0x5B4B0D0", Offset = "0x5B4A0D0", VA = "0x5B4B0D0")]
	public static Mesh CreateTissueMesh(Mesh source, float scale)
	{
		return null;
	}

	[Token(Token = "0x6004569")]
	[Address(RVA = "0x5B4A120", Offset = "0x5B49120", VA = "0x5B4A120")]
	private Mesh Bake(Renderer renderer)
	{
		return null;
	}

	[Token(Token = "0x600456A")]
	[Address(RVA = "0x5B4AB30", Offset = "0x5B49B30", VA = "0x5B4AB30")]
	private Material CreateMaterial(Material source, float layer)
	{
		return null;
	}

	[Token(Token = "0x600456B")]
	[Address(RVA = "0x5B4B3D0", Offset = "0x5B4A3D0", VA = "0x5B4B3D0")]
	private Mesh CreateSteamSurface()
	{
		return null;
	}

	[Token(Token = "0x600456C")]
	[Address(RVA = "0x5B4BC50", Offset = "0x5B4AC50", VA = "0x5B4BC50")]
	private void CreateSteam(Mesh surface, bool plume)
	{
	}

	[Token(Token = "0x600456D")]
	[Address(RVA = "0x5B3EB00", Offset = "0x5B3DB00", VA = "0x5B3EB00")]
	public void Finish()
	{
	}

	[Token(Token = "0x600456E")]
	[Address(RVA = "0x5B4C200", Offset = "0x5B4B200", VA = "0x5B4C200")]
	public void Update(float progress)
	{
	}

	[Token(Token = "0x600456F")]
	[Address(RVA = "0x5B49EA0", Offset = "0x5B48EA0", VA = "0x5B49EA0")]
	private void HideRenderers()
	{
	}

	[Token(Token = "0x6004570")]
	[Address(RVA = "0x5B4BFC0", Offset = "0x5B4AFC0", VA = "0x5B4BFC0")]
	private void DisableColliders()
	{
	}

	[Token(Token = "0x6004571")]
	[Address(RVA = "0x5B4CC60", Offset = "0x5B4BC60", VA = "0x5B4CC60", Slot = "4")]
	public void Dispose()
	{
	}
}
