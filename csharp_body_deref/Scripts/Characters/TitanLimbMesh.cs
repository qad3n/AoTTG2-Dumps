// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanLimbMesh
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanLimbMesh.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000726")]
internal sealed class TitanLimbMesh : IDisposable
{
	[Token(Token = "0x2000727")]
	private sealed class MeshSource
	{
		[Token(Token = "0x40023BF")]
		[FieldOffset(Offset = "0x10")]
		public readonly Mesh Original;

		[Token(Token = "0x40023C0")]
		[FieldOffset(Offset = "0x18")]
		public readonly Vector3[] Vertices;

		[Token(Token = "0x40023C1")]
		[FieldOffset(Offset = "0x20")]
		public readonly Vector3[] Normals;

		[Token(Token = "0x40023C2")]
		[FieldOffset(Offset = "0x28")]
		public readonly Vector4[] Tangents;

		[Token(Token = "0x40023C3")]
		[FieldOffset(Offset = "0x30")]
		public readonly Vector2[] UV;

		[Token(Token = "0x40023C4")]
		[FieldOffset(Offset = "0x38")]
		public readonly Color32[] Colors;

		[Token(Token = "0x40023C5")]
		[FieldOffset(Offset = "0x40")]
		public readonly BoneWeight[] Weights;

		[Token(Token = "0x40023C6")]
		[FieldOffset(Offset = "0x48")]
		public readonly Matrix4x4[] Bindposes;

		[Token(Token = "0x40023C7")]
		[FieldOffset(Offset = "0x50")]
		public readonly int[][] Triangles;

		[Token(Token = "0x6004599")]
		[Address(RVA = "0x5B560A0", Offset = "0x5B550A0", VA = "0x5B560A0")]
		public MeshSource(Mesh mesh)
		{
		}
	}

	[Token(Token = "0x2000728")]
	private sealed class CachedBody : IDisposable
	{
		[Token(Token = "0x40023C8")]
		[FieldOffset(Offset = "0x10")]
		public readonly MeshSource Source;

		[Token(Token = "0x40023C9")]
		[FieldOffset(Offset = "0x18")]
		private readonly CutPlane[] _left;

		[Token(Token = "0x40023CA")]
		[FieldOffset(Offset = "0x20")]
		private readonly CutPlane[] _right;

		[Token(Token = "0x40023CB")]
		[FieldOffset(Offset = "0x28")]
		private readonly Mesh[] _meshes;

		[Token(Token = "0x40023CC")]
		[FieldOffset(Offset = "0x30")]
		private readonly RegrowthMesh[] _regrowth;

		[Token(Token = "0x40023CD")]
		[FieldOffset(Offset = "0x38")]
		private readonly Mesh[] _detached;

		[Token(Token = "0x600459A")]
		[Address(RVA = "0x5B54610", Offset = "0x5B53610", VA = "0x5B54610")]
		public CachedBody(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand)
		{
		}

		[Token(Token = "0x600459B")]
		[Address(RVA = "0x5B54290", Offset = "0x5B53290", VA = "0x5B54290")]
		public void Prewarm()
		{
		}

		[Token(Token = "0x600459C")]
		[Address(RVA = "0x5B54F20", Offset = "0x5B53F20", VA = "0x5B54F20")]
		public Mesh GetMesh(int left, int right, bool leftRegrowing = false, bool rightRegrowing = false)
		{
			return null;
		}

		[Token(Token = "0x600459D")]
		[Address(RVA = "0x5B55DF0", Offset = "0x5B54DF0", VA = "0x5B55DF0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x600459E")]
		[Address(RVA = "0x5B54A70", Offset = "0x5B53A70", VA = "0x5B54A70")]
		public Mesh GetDetached(bool left, bool arm, bool handDisabled, bool regrowing)
		{
			return null;
		}

		[Token(Token = "0x600459F")]
		[Address(RVA = "0x5B54CC0", Offset = "0x5B53CC0", VA = "0x5B54CC0")]
		public RegrowthMesh GetRegrowth(bool left, bool arm)
		{
			return null;
		}
	}

	[Token(Token = "0x2000729")]
	private sealed class RegrowthMesh
	{
		[Token(Token = "0x40023CE")]
		[FieldOffset(Offset = "0x10")]
		public readonly Mesh Mesh;

		[Token(Token = "0x40023CF")]
		[FieldOffset(Offset = "0x18")]
		private readonly Vector3[] _centers;

		[Token(Token = "0x40023D0")]
		[FieldOffset(Offset = "0x20")]
		private readonly BoneWeight[] _weights;

		[Token(Token = "0x60045A0")]
		[Address(RVA = "0x5B58040", Offset = "0x5B57040", VA = "0x5B58040")]
		public RegrowthMesh(MeshSource source, CutPlane cut)
		{
		}

		[Token(Token = "0x60045A1")]
		[Address(RVA = "0x5B55AC0", Offset = "0x5B54AC0", VA = "0x5B55AC0")]
		public Vector3 GetFront(float progress, Transform[] bones, Matrix4x4[] bindposes)
		{
			return default(Vector3);
		}

		[Token(Token = "0x60045A2")]
		[Address(RVA = "0x5B59090", Offset = "0x5B58090", VA = "0x5B59090")]
		private Vector3 Skin(int index, Transform[] bones, Matrix4x4[] bindposes)
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x200072A")]
	private sealed class CutPlane
	{
		[Token(Token = "0x40023D1")]
		[FieldOffset(Offset = "0x10")]
		public readonly Vector3 Origin;

		[Token(Token = "0x40023D2")]
		[FieldOffset(Offset = "0x1C")]
		public readonly Vector3 Normal;

		[Token(Token = "0x40023D3")]
		[FieldOffset(Offset = "0x28")]
		public readonly int ParentBone;

		[Token(Token = "0x40023D4")]
		[FieldOffset(Offset = "0x2C")]
		public readonly float BloodStainScale;

		[Token(Token = "0x40023D5")]
		[FieldOffset(Offset = "0x30")]
		public readonly HashSet<int> RemovedBones;

		[Token(Token = "0x60045A3")]
		[Address(RVA = "0x5B59540", Offset = "0x5B58540", VA = "0x5B59540")]
		private CutPlane(CutPlane source)
		{
		}

		[Token(Token = "0x60045A4")]
		[Address(RVA = "0x5B57FF0", Offset = "0x5B56FF0", VA = "0x5B57FF0")]
		public CutPlane Reversed()
		{
			return null;
		}

		[Token(Token = "0x60045A5")]
		[Address(RVA = "0x5B562F0", Offset = "0x5B552F0", VA = "0x5B562F0")]
		public CutPlane(SkinnedMeshRenderer renderer, Transform hand, float bloodStainScale)
		{
		}

		[Token(Token = "0x60045A6")]
		[Address(RVA = "0x5B59630", Offset = "0x5B58630", VA = "0x5B59630")]
		public BoneWeight KeepParentBone(BoneWeight weight)
		{
			return default(BoneWeight);
		}

		[Token(Token = "0x60045A7")]
		[Address(RVA = "0x5B58F50", Offset = "0x5B57F50", VA = "0x5B58F50")]
		public bool ContainsBone(BoneWeight weight)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200072B")]
	private sealed class CutMeshData
	{
		[Token(Token = "0x40023D6")]
		[FieldOffset(Offset = "0x10")]
		private readonly List<Vector3> _vertices;

		[Token(Token = "0x40023D7")]
		[FieldOffset(Offset = "0x18")]
		private readonly List<Vector3> _normals;

		[Token(Token = "0x40023D8")]
		[FieldOffset(Offset = "0x20")]
		private readonly List<Vector4> _tangents;

		[Token(Token = "0x40023D9")]
		[FieldOffset(Offset = "0x28")]
		private readonly List<Vector2> _uv;

		[Token(Token = "0x40023DA")]
		[FieldOffset(Offset = "0x30")]
		private readonly List<Color32> _colors;

		[Token(Token = "0x40023DB")]
		[FieldOffset(Offset = "0x38")]
		private readonly List<BoneWeight> _weights;

		[Token(Token = "0x40023DC")]
		[FieldOffset(Offset = "0x40")]
		private readonly List<int>[] _triangles;

		[Token(Token = "0x40023DD")]
		[FieldOffset(Offset = "0x48")]
		private readonly List<int> _wound;

		[Token(Token = "0x60045A8")]
		[Address(RVA = "0x5B568F0", Offset = "0x5B558F0", VA = "0x5B568F0")]
		public CutMeshData(MeshSource source)
		{
		}

		[Token(Token = "0x60045A9")]
		[Address(RVA = "0x5B57000", Offset = "0x5B56000", VA = "0x5B57000")]
		public void Cut(CutPlane wrist, bool detached = false)
		{
		}

		[Token(Token = "0x60045AA")]
		[Address(RVA = "0x5B56C80", Offset = "0x5B55C80", VA = "0x5B56C80")]
		public void Remove(CutPlane cut)
		{
		}

		[Token(Token = "0x60045AB")]
		[Address(RVA = "0x5B59770", Offset = "0x5B58770", VA = "0x5B59770")]
		private int AddIntersection(int a, int b, float t, int forearm)
		{
			return default(int);
		}

		[Token(Token = "0x60045AC")]
		[Address(RVA = "0x5B59EA0", Offset = "0x5B58EA0", VA = "0x5B59EA0")]
		private void AddBloodStain(Vector3 a, Vector3 b, List<int> polygon, CutPlane cut)
		{
		}

		[Token(Token = "0x60045AD")]
		[Address(RVA = "0x5B5A6C0", Offset = "0x5B596C0", VA = "0x5B5A6C0")]
		private void AddCap(List<Vector3> rim, CutPlane wrist)
		{
		}

		[Token(Token = "0x60045AE")]
		[Address(RVA = "0x5B5C530", Offset = "0x5B5B530", VA = "0x5B5C530")]
		private static float Variation(int index)
		{
			return default(float);
		}

		[Token(Token = "0x60045AF")]
		[Address(RVA = "0x5B5CD70", Offset = "0x5B5BD70", VA = "0x5B5CD70")]
		private void SmoothFleshNormals(int start)
		{
		}

		[Token(Token = "0x60045B0")]
		[Address(RVA = "0x5B5D2A0", Offset = "0x5B5C2A0", VA = "0x5B5D2A0")]
		private void AddBone(Vector3 center, Vector3 axisX, Vector3 axisY, float radius, float width, CutPlane cut)
		{
		}

		[Token(Token = "0x60045B1")]
		[Address(RVA = "0x5B5C590", Offset = "0x5B5B590", VA = "0x5B5C590")]
		private void AddWoundFace(Vector3 a, Vector3 b, Vector3 c, Vector3? d, CutPlane cut, Color color)
		{
		}

		[Token(Token = "0x60045B2")]
		[Address(RVA = "0x5B5C1B0", Offset = "0x5B5B1B0", VA = "0x5B5C1B0")]
		private void AddWoundVertex(Vector3 position, Vector2 uv, Vector3 normal, Vector3 tangent, int bone, Color32 color)
		{
		}

		[Token(Token = "0x60045B3")]
		[Address(RVA = "0x5B5DCE0", Offset = "0x5B5CCE0", VA = "0x5B5DCE0")]
		private void Compact()
		{
		}

		[Token(Token = "0x60045B4")]
		[Address(RVA = "0x5B5DEA0", Offset = "0x5B5CEA0", VA = "0x5B5DEA0")]
		private static void Remap(List<int> triangles, Dictionary<int, int> indices, List<int> used)
		{
		}

		[Token(Token = "0x60045B5")]
		private static void Compact<T>(List<T> values, List<int> used)
		{
		}

		[Token(Token = "0x60045B6")]
		[Address(RVA = "0x5B57DA0", Offset = "0x5B56DA0", VA = "0x5B57DA0")]
		public Mesh CreateMesh(MeshSource source, bool detached = false)
		{
			return null;
		}
	}

	[Token(Token = "0x40023B3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<(Mesh, int, int, int, int, int, int), CachedBody> Bodies;

	[Token(Token = "0x40023B4")]
	[FieldOffset(Offset = "0x10")]
	private readonly SkinnedMeshRenderer _renderer;

	[Token(Token = "0x40023B5")]
	[FieldOffset(Offset = "0x18")]
	private readonly CachedBody _body;

	[Token(Token = "0x40023B6")]
	[FieldOffset(Offset = "0x20")]
	private readonly Material _woundMaterial;

	[Token(Token = "0x40023B7")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Material> _materials;

	[Token(Token = "0x40023B8")]
	[FieldOffset(Offset = "0x30")]
	private int _state;

	[Token(Token = "0x40023B9")]
	[FieldOffset(Offset = "0x38")]
	private readonly Transform[] _bones;

	[Token(Token = "0x40023BA")]
	[FieldOffset(Offset = "0x40")]
	private readonly SkinnedMeshRenderer[] _regrowth;

	[Token(Token = "0x40023BB")]
	[FieldOffset(Offset = "0x48")]
	private readonly MaterialPropertyBlock _growthProperties;

	[Token(Token = "0x40023BC")]
	[FieldOffset(Offset = "0x50")]
	private Material[] _growthMaterials;

	[Token(Token = "0x40023BD")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int Growth;

	[Token(Token = "0x40023BE")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int TissueIntensity;

	[Token(Token = "0x6004590")]
	[Address(RVA = "0x5B53E30", Offset = "0x5B52E30", VA = "0x5B53E30")]
	public TitanLimbMesh(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand, Material woundMaterial)
	{
	}

	[Token(Token = "0x6004591")]
	[Address(RVA = "0x5B41960", Offset = "0x5B40960", VA = "0x5B41960")]
	public static void Prewarm(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand)
	{
	}

	[Token(Token = "0x6004592")]
	[Address(RVA = "0x5B53FE0", Offset = "0x5B52FE0", VA = "0x5B53FE0")]
	private static CachedBody GetBody(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand)
	{
		return null;
	}

	[Token(Token = "0x6004593")]
	[Address(RVA = "0x5B54910", Offset = "0x5B53910", VA = "0x5B54910")]
	public void Detach(bool left, bool arm, bool handDisabled, float handGrowth, Vector3 velocity)
	{
	}

	[Token(Token = "0x6004594")]
	[Address(RVA = "0x5B54D90", Offset = "0x5B53D90", VA = "0x5B54D90")]
	public void SetDisabled(bool leftHand, bool rightHand, bool leftArm, bool rightArm, bool leftRegrowing = false, bool rightRegrowing = false)
	{
	}

	[Token(Token = "0x6004595")]
	[Address(RVA = "0x5B55140", Offset = "0x5B54140", VA = "0x5B55140", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6004596")]
	[Address(RVA = "0x5B552B0", Offset = "0x5B542B0", VA = "0x5B552B0")]
	public Vector3 UpdateRegrowth(bool left, bool arm, float progress, Vector3 origin, bool effectsEnabled = true)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004597")]
	[Address(RVA = "0x5B55C20", Offset = "0x5B54C20", VA = "0x5B55C20")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void ClearCache()
	{
	}
}
