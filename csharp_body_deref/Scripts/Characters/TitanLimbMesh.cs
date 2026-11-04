// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanLimbMesh
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanLimbMesh.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006C6")]
internal sealed class TitanLimbMesh : IDisposable
{
	[Token(Token = "0x20006C7")]
	private sealed class MeshSource
	{
		[Token(Token = "0x40021E2")]
		[FieldOffset(Offset = "0x10")]
		public readonly Mesh Original;

		[Token(Token = "0x40021E3")]
		[FieldOffset(Offset = "0x18")]
		public readonly Vector3[] Vertices;

		[Token(Token = "0x40021E4")]
		[FieldOffset(Offset = "0x20")]
		public readonly Vector3[] Normals;

		[Token(Token = "0x40021E5")]
		[FieldOffset(Offset = "0x28")]
		public readonly Vector4[] Tangents;

		[Token(Token = "0x40021E6")]
		[FieldOffset(Offset = "0x30")]
		public readonly Vector2[] UV;

		[Token(Token = "0x40021E7")]
		[FieldOffset(Offset = "0x38")]
		public readonly Color32[] Colors;

		[Token(Token = "0x40021E8")]
		[FieldOffset(Offset = "0x40")]
		public readonly BoneWeight[] Weights;

		[Token(Token = "0x40021E9")]
		[FieldOffset(Offset = "0x48")]
		public readonly Matrix4x4[] Bindposes;

		[Token(Token = "0x40021EA")]
		[FieldOffset(Offset = "0x50")]
		public readonly int[][] Triangles;

		[Token(Token = "0x60042E5")]
		[Address(RVA = "0x21AAEA0", Offset = "0x21A94A0", VA = "0x1821AAEA0")]
		public MeshSource(Mesh mesh)
		{
		}
	}

	[Token(Token = "0x20006C8")]
	private sealed class CachedBody : IDisposable
	{
		[Token(Token = "0x40021EB")]
		[FieldOffset(Offset = "0x10")]
		public readonly MeshSource Source;

		[Token(Token = "0x40021EC")]
		[FieldOffset(Offset = "0x18")]
		private readonly CutPlane[] _left;

		[Token(Token = "0x40021ED")]
		[FieldOffset(Offset = "0x20")]
		private readonly CutPlane[] _right;

		[Token(Token = "0x40021EE")]
		[FieldOffset(Offset = "0x28")]
		private readonly Mesh[] _meshes;

		[Token(Token = "0x40021EF")]
		[FieldOffset(Offset = "0x30")]
		private readonly RegrowthMesh[] _regrowth;

		[Token(Token = "0x40021F0")]
		[FieldOffset(Offset = "0x38")]
		private readonly Mesh[] _detached;

		[Token(Token = "0x60042E6")]
		[Address(RVA = "0x21A1C30", Offset = "0x21A0230", VA = "0x1821A1C30")]
		public CachedBody(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand)
		{
		}

		[Token(Token = "0x60042E7")]
		[Address(RVA = "0x21A1910", Offset = "0x219FF10", VA = "0x1821A1910")]
		public Mesh GetMesh(int left, int right, bool leftRegrowing = false, bool rightRegrowing = false)
		{
			return null;
		}

		[Token(Token = "0x60042E8")]
		[Address(RVA = "0x21A1450", Offset = "0x219FA50", VA = "0x1821A1450", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60042E9")]
		[Address(RVA = "0x21A1620", Offset = "0x219FC20", VA = "0x1821A1620")]
		public Mesh GetDetached(bool left, bool arm, bool handDisabled, bool regrowing)
		{
			return null;
		}

		[Token(Token = "0x60042EA")]
		[Address(RVA = "0x21A1B40", Offset = "0x21A0140", VA = "0x1821A1B40")]
		public RegrowthMesh GetRegrowth(bool left, bool arm)
		{
			return null;
		}
	}

	[Token(Token = "0x20006C9")]
	private sealed class RegrowthMesh
	{
		[Token(Token = "0x40021F1")]
		[FieldOffset(Offset = "0x10")]
		public readonly Mesh Mesh;

		[Token(Token = "0x40021F2")]
		[FieldOffset(Offset = "0x18")]
		private readonly Vector3[] _centers;

		[Token(Token = "0x40021F3")]
		[FieldOffset(Offset = "0x20")]
		private readonly BoneWeight[] _weights;

		[Token(Token = "0x60042EB")]
		[Address(RVA = "0x21AB9D0", Offset = "0x21A9FD0", VA = "0x1821AB9D0")]
		public RegrowthMesh(MeshSource source, CutPlane cut)
		{
		}

		[Token(Token = "0x60042EC")]
		[Address(RVA = "0x21AB230", Offset = "0x21A9830", VA = "0x1821AB230")]
		public Vector3 GetFront(float progress, Transform[] bones, Matrix4x4[] bindposes)
		{
			return default(Vector3);
		}

		[Token(Token = "0x60042ED")]
		[Address(RVA = "0x21AB3F0", Offset = "0x21A99F0", VA = "0x1821AB3F0")]
		private Vector3 Skin(int index, Transform[] bones, Matrix4x4[] bindposes)
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x20006CA")]
	private sealed class CutPlane
	{
		[Token(Token = "0x40021F4")]
		[FieldOffset(Offset = "0x10")]
		public readonly Vector3 Origin;

		[Token(Token = "0x40021F5")]
		[FieldOffset(Offset = "0x1C")]
		public readonly Vector3 Normal;

		[Token(Token = "0x40021F6")]
		[FieldOffset(Offset = "0x28")]
		public readonly int ParentBone;

		[Token(Token = "0x40021F7")]
		[FieldOffset(Offset = "0x2C")]
		public readonly float BloodStainScale;

		[Token(Token = "0x40021F8")]
		[FieldOffset(Offset = "0x30")]
		public readonly HashSet<int> RemovedBones;

		[Token(Token = "0x60042EE")]
		[Address(RVA = "0x21A89C0", Offset = "0x21A6FC0", VA = "0x1821A89C0")]
		private CutPlane(CutPlane source)
		{
		}

		[Token(Token = "0x60042EF")]
		[Address(RVA = "0x21A8310", Offset = "0x21A6910", VA = "0x1821A8310")]
		public CutPlane Reversed()
		{
			return null;
		}

		[Token(Token = "0x60042F0")]
		[Address(RVA = "0x21A8440", Offset = "0x21A6A40", VA = "0x1821A8440")]
		public CutPlane(SkinnedMeshRenderer renderer, Transform hand, float bloodStainScale)
		{
		}

		[Token(Token = "0x60042F1")]
		[Address(RVA = "0x21A81E0", Offset = "0x21A67E0", VA = "0x1821A81E0")]
		public BoneWeight KeepParentBone(BoneWeight weight)
		{
			return default(BoneWeight);
		}

		[Token(Token = "0x60042F2")]
		[Address(RVA = "0x21A80A0", Offset = "0x21A66A0", VA = "0x1821A80A0")]
		public bool ContainsBone(BoneWeight weight)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20006CB")]
	private sealed class CutMeshData
	{
		[Token(Token = "0x40021F9")]
		[FieldOffset(Offset = "0x10")]
		private readonly List<Vector3> _vertices;

		[Token(Token = "0x40021FA")]
		[FieldOffset(Offset = "0x18")]
		private readonly List<Vector3> _normals;

		[Token(Token = "0x40021FB")]
		[FieldOffset(Offset = "0x20")]
		private readonly List<Vector4> _tangents;

		[Token(Token = "0x40021FC")]
		[FieldOffset(Offset = "0x28")]
		private readonly List<Vector2> _uv;

		[Token(Token = "0x40021FD")]
		[FieldOffset(Offset = "0x30")]
		private readonly List<Color32> _colors;

		[Token(Token = "0x40021FE")]
		[FieldOffset(Offset = "0x38")]
		private readonly List<BoneWeight> _weights;

		[Token(Token = "0x40021FF")]
		[FieldOffset(Offset = "0x40")]
		private readonly List<int>[] _triangles;

		[Token(Token = "0x4002200")]
		[FieldOffset(Offset = "0x48")]
		private readonly List<int> _wound;

		[Token(Token = "0x60042F3")]
		[Address(RVA = "0x21A7D20", Offset = "0x21A6320", VA = "0x1821A7D20")]
		public CutMeshData(MeshSource source)
		{
		}

		[Token(Token = "0x60042F4")]
		[Address(RVA = "0x21A6970", Offset = "0x21A4F70", VA = "0x1821A6970")]
		public void Cut(CutPlane wrist, bool detached = false)
		{
		}

		[Token(Token = "0x60042F5")]
		[Address(RVA = "0x21A7560", Offset = "0x21A5B60", VA = "0x1821A7560")]
		public void Remove(CutPlane cut)
		{
		}

		[Token(Token = "0x60042F6")]
		[Address(RVA = "0x21A50E0", Offset = "0x21A36E0", VA = "0x1821A50E0")]
		private int AddIntersection(int a, int b, float t, int forearm)
		{
			return default(int);
		}

		[Token(Token = "0x60042F7")]
		[Address(RVA = "0x21A1F50", Offset = "0x21A0550", VA = "0x1821A1F50")]
		private void AddBloodStain(Vector3 a, Vector3 b, List<int> polygon, CutPlane cut)
		{
		}

		[Token(Token = "0x60042F8")]
		[Address(RVA = "0x21A3350", Offset = "0x21A1950", VA = "0x1821A3350")]
		private void AddCap(List<Vector3> rim, CutPlane wrist)
		{
		}

		[Token(Token = "0x60042F9")]
		[Address(RVA = "0x21A7CB0", Offset = "0x21A62B0", VA = "0x1821A7CB0")]
		private static float Variation(int index)
		{
			return default(float);
		}

		[Token(Token = "0x60042FA")]
		[Address(RVA = "0x21A7840", Offset = "0x21A5E40", VA = "0x1821A7840")]
		private void SmoothFleshNormals(int start)
		{
		}

		[Token(Token = "0x60042FB")]
		[Address(RVA = "0x21A27B0", Offset = "0x21A0DB0", VA = "0x1821A27B0")]
		private void AddBone(Vector3 center, Vector3 axisX, Vector3 axisY, float radius, float width, CutPlane cut)
		{
		}

		[Token(Token = "0x60042FC")]
		[Address(RVA = "0x21A5830", Offset = "0x21A3E30", VA = "0x1821A5830")]
		private void AddWoundFace(Vector3 a, Vector3 b, Vector3 c, Vector3? d, CutPlane cut, Color color)
		{
		}

		[Token(Token = "0x60042FD")]
		[Address(RVA = "0x21A5FB0", Offset = "0x21A45B0", VA = "0x1821A5FB0")]
		private void AddWoundVertex(Vector3 position, Vector2 uv, Vector3 normal, Vector3 tangent, int bone, Color32 color)
		{
		}

		[Token(Token = "0x60042FE")]
		[Address(RVA = "0x21A6330", Offset = "0x21A4930", VA = "0x1821A6330")]
		private void Compact()
		{
		}

		[Token(Token = "0x60042FF")]
		[Address(RVA = "0x21A7420", Offset = "0x21A5A20", VA = "0x1821A7420")]
		private static void Remap(List<int> triangles, Dictionary<int, int> indices, List<int> used)
		{
		}

		[Token(Token = "0x6004300")]
		private static void Compact<T>(List<T> values, List<int> used)
		{
		}

		[Token(Token = "0x6004301")]
		[Address(RVA = "0x21A6700", Offset = "0x21A4D00", VA = "0x1821A6700")]
		public Mesh CreateMesh(MeshSource source, bool compact = false)
		{
			return null;
		}
	}

	[Token(Token = "0x40021D6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<(Mesh, int, int, int, int, int, int), CachedBody> Bodies;

	[Token(Token = "0x40021D7")]
	[FieldOffset(Offset = "0x10")]
	private readonly SkinnedMeshRenderer _renderer;

	[Token(Token = "0x40021D8")]
	[FieldOffset(Offset = "0x18")]
	private readonly CachedBody _body;

	[Token(Token = "0x40021D9")]
	[FieldOffset(Offset = "0x20")]
	private readonly Material _woundMaterial;

	[Token(Token = "0x40021DA")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Material> _materials;

	[Token(Token = "0x40021DB")]
	[FieldOffset(Offset = "0x30")]
	private int _state;

	[Token(Token = "0x40021DC")]
	[FieldOffset(Offset = "0x38")]
	private readonly Transform[] _bones;

	[Token(Token = "0x40021DD")]
	[FieldOffset(Offset = "0x40")]
	private readonly SkinnedMeshRenderer[] _regrowth;

	[Token(Token = "0x40021DE")]
	[FieldOffset(Offset = "0x48")]
	private readonly MaterialPropertyBlock _growthProperties;

	[Token(Token = "0x40021DF")]
	[FieldOffset(Offset = "0x50")]
	private Material[] _growthMaterials;

	[Token(Token = "0x40021E0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int Growth;

	[Token(Token = "0x40021E1")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int TissueIntensity;

	[Token(Token = "0x60042DD")]
	[Address(RVA = "0x21B79A0", Offset = "0x21B5FA0", VA = "0x1821B79A0")]
	public TitanLimbMesh(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand, Material woundMaterial)
	{
	}

	[Token(Token = "0x60042DE")]
	[Address(RVA = "0x21B6B50", Offset = "0x21B5150", VA = "0x1821B6B50")]
	private static CachedBody GetBody(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand)
	{
		return null;
	}

	[Token(Token = "0x60042DF")]
	[Address(RVA = "0x21B6740", Offset = "0x21B4D40", VA = "0x1821B6740")]
	public void Detach(bool left, bool arm, bool handDisabled, float handGrowth, Vector3 velocity)
	{
	}

	[Token(Token = "0x60042E0")]
	[Address(RVA = "0x21B6E80", Offset = "0x21B5480", VA = "0x1821B6E80")]
	public void SetDisabled(bool leftHand, bool rightHand, bool leftArm, bool rightArm, bool leftRegrowing = false, bool rightRegrowing = false)
	{
	}

	[Token(Token = "0x60042E1")]
	[Address(RVA = "0x21B68E0", Offset = "0x21B4EE0", VA = "0x1821B68E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60042E2")]
	[Address(RVA = "0x21B7040", Offset = "0x21B5640", VA = "0x1821B7040")]
	public Vector3 UpdateRegrowth(bool left, bool arm, float progress, Vector3 origin, bool effectsEnabled = true)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60042E3")]
	[Address(RVA = "0x21B6590", Offset = "0x21B4B90", VA = "0x1821B6590")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void ClearCache()
	{
	}
}
