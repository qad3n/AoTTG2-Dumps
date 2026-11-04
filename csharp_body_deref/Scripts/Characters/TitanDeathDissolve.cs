// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanDeathDissolve
// Update status: NEW in this game update
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

[Token(Token = "0x20006C0")]
internal sealed class TitanDeathDissolve : IDisposable
{
	[Token(Token = "0x20006C1")]
	private sealed class Part
	{
		[Token(Token = "0x4002192")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Mesh Mesh;

		[Token(Token = "0x4002193")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Material[] Materials;

		[Token(Token = "0x4002194")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x4002195")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly int Layer;

		[Token(Token = "0x4002196")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public readonly ShadowCastingMode Shadows;

		[Token(Token = "0x4002197")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly Matrix4x4 LocalMatrix;

		[Token(Token = "0x60042C1")]
		[Address(RVA = "0x21AB100", Offset = "0x21A9700", VA = "0x1821AB100")]
		public Part(Mesh mesh, Material[] materials, MaterialPropertyBlock properties, int layer, ShadowCastingMode shadows, [Optional] Matrix4x4? localMatrix)
		{
		}
	}

	[Token(Token = "0x4002184")]
	public const float SteamFadeDuration = 1.25f;

	[Token(Token = "0x4002185")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int Dissolve;

	[Token(Token = "0x4002186")]
	private const float WispRate = 80f;

	[Token(Token = "0x4002187")]
	private const float PlumeRate = 42f;

	[Token(Token = "0x4002188")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly BasicTitan _titan;

	[Token(Token = "0x4002189")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly List<Part> _parts;

	[Token(Token = "0x400218A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<Mesh> _meshes;

	[Token(Token = "0x400218B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Material> _materials;

	[Token(Token = "0x400218C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Shader _shader;

	[Token(Token = "0x400218D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly float _scale;

	[Token(Token = "0x400218E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly SkinnedMeshRenderer _bodyRenderer;

	[Token(Token = "0x400218F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<ParticleSystem> _steam;

	[Token(Token = "0x4002190")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool _finished;

	[Token(Token = "0x17000BBC")]
	public bool CollidersDisabled
	{
		[Token(Token = "0x60042B4")]
		[Address(RVA = "0x1A08FC0", Offset = "0x1A075C0", VA = "0x181A08FC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60042B5")]
		[Address(RVA = "0x21B0640", Offset = "0x21AEC40", VA = "0x1821B0640")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60042B6")]
	[Address(RVA = "0x21AF3B0", Offset = "0x21AD9B0", VA = "0x1821AF3B0")]
	public TitanDeathDissolve(BasicTitan titan)
	{
	}

	[Token(Token = "0x60042B7")]
	[Address(RVA = "0x21AE150", Offset = "0x21AC750", VA = "0x1821AE150")]
	public static Mesh CreateTissueMesh(Mesh source, float scale)
	{
		return null;
	}

	[Token(Token = "0x60042B8")]
	[Address(RVA = "0x21ACB40", Offset = "0x21AB140", VA = "0x1821ACB40")]
	private Mesh Bake(Renderer renderer)
	{
		return null;
	}

	[Token(Token = "0x60042B9")]
	[Address(RVA = "0x21AD290", Offset = "0x21AB890", VA = "0x1821AD290")]
	private Material CreateMaterial(Material source, float layer)
	{
		return null;
	}

	[Token(Token = "0x60042BA")]
	[Address(RVA = "0x21AD6D0", Offset = "0x21ABCD0", VA = "0x1821AD6D0")]
	private Mesh CreateSteamSurface()
	{
		return null;
	}

	[Token(Token = "0x60042BB")]
	[Address(RVA = "0x21ADD40", Offset = "0x21AC340", VA = "0x1821ADD40")]
	private void CreateSteam(Mesh surface, bool plume)
	{
	}

	[Token(Token = "0x60042BC")]
	[Address(RVA = "0x21AEAA0", Offset = "0x21AD0A0", VA = "0x1821AEAA0")]
	public void Finish()
	{
	}

	[Token(Token = "0x60042BD")]
	[Address(RVA = "0x21AEBE0", Offset = "0x21AD1E0", VA = "0x1821AEBE0")]
	public void Update(float progress)
	{
	}

	[Token(Token = "0x60042BE")]
	[Address(RVA = "0x21AE400", Offset = "0x21ACA00", VA = "0x1821AE400")]
	private void DisableColliders()
	{
	}

	[Token(Token = "0x60042BF")]
	[Address(RVA = "0x21AE640", Offset = "0x21ACC40", VA = "0x1821AE640", Slot = "4")]
	public void Dispose()
	{
	}
}
