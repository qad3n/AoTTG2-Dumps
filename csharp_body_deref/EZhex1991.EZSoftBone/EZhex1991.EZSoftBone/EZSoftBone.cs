// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBone
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBone.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000005")]
public class EZSoftBone : MonoBehaviour
{
	[Token(Token = "0x2000006")]
	public enum UnificationMode
	{
		[Token(Token = "0x400001F")]
		None,
		[Token(Token = "0x4000020")]
		Rooted,
		[Token(Token = "0x4000021")]
		Unified
	}

	[Token(Token = "0x2000007")]
	public enum DeltaTimeMode
	{
		[Token(Token = "0x4000023")]
		DeltaTime,
		[Token(Token = "0x4000024")]
		UnscaledDeltaTime,
		[Token(Token = "0x4000025")]
		Constant
	}

	[Token(Token = "0x2000008")]
	private class Bone
	{
		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x10")]
		public Bone parentBone;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x18")]
		public Vector3 localPosition;

		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x24")]
		public Quaternion localRotation;

		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x38")]
		public Bone leftBone;

		[Token(Token = "0x400002A")]
		[FieldOffset(Offset = "0x40")]
		public Vector3 leftPosition;

		[Token(Token = "0x400002B")]
		[FieldOffset(Offset = "0x50")]
		public Bone rightBone;

		[Token(Token = "0x400002C")]
		[FieldOffset(Offset = "0x58")]
		public Vector3 rightPosition;

		[Token(Token = "0x400002D")]
		[FieldOffset(Offset = "0x68")]
		public List<Bone> childBones;

		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x70")]
		public Transform transform;

		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x78")]
		public Vector3 worldPosition;

		[Token(Token = "0x4000030")]
		[FieldOffset(Offset = "0x88")]
		public Transform systemSpace;

		[Token(Token = "0x4000031")]
		[FieldOffset(Offset = "0x90")]
		public Vector3 systemPosition;

		[Token(Token = "0x4000032")]
		[FieldOffset(Offset = "0x9C")]
		public int depth;

		[Token(Token = "0x4000033")]
		[FieldOffset(Offset = "0xA0")]
		public float boneLength;

		[Token(Token = "0x4000034")]
		[FieldOffset(Offset = "0xA4")]
		public float treeLength;

		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0xA8")]
		public float normalizedLength;

		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0xAC")]
		public float radius;

		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0xB0")]
		public float damping;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0xB4")]
		public float stiffness;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0xB8")]
		public float resistance;

		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0xBC")]
		public float slackness;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0xC0")]
		public Vector3 speed;

		[Token(Token = "0x600004A")]
		[Address(RVA = "0x5836E0", Offset = "0x581CE0", VA = "0x1805836E0")]
		public Bone(Transform systemSpace, Transform transform, IEnumerable<Transform> endBones, int startDepth, int depth, float nodeLength, float boneLength)
		{
		}

		[Token(Token = "0x600004B")]
		[Address(RVA = "0x582CD0", Offset = "0x5812D0", VA = "0x180582CD0")]
		public void SetTreeLength()
		{
		}

		[Token(Token = "0x600004C")]
		[Address(RVA = "0x582CE0", Offset = "0x5812E0", VA = "0x180582CE0")]
		public void SetTreeLength(float treeLength)
		{
		}

		[Token(Token = "0x600004D")]
		[Address(RVA = "0x582A40", Offset = "0x581040", VA = "0x180582A40")]
		public void SetLeftSibling(Bone left)
		{
		}

		[Token(Token = "0x600004E")]
		[Address(RVA = "0x582C50", Offset = "0x581250", VA = "0x180582C50")]
		public void SetRightSibling(Bone right)
		{
		}

		[Token(Token = "0x600004F")]
		[Address(RVA = "0x582860", Offset = "0x580E60", VA = "0x180582860")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve)
		{
		}

		[Token(Token = "0x6000050")]
		[Address(RVA = "0x582690", Offset = "0x580C90", VA = "0x180582690")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve, EZSoftBoneMaterial material)
		{
		}

		[Token(Token = "0x6000051")]
		[Address(RVA = "0x582940", Offset = "0x580F40", VA = "0x180582940")]
		public void RevertTransforms(int startDepth)
		{
		}

		[Token(Token = "0x6000052")]
		[Address(RVA = "0x582ED0", Offset = "0x5814D0", VA = "0x180582ED0")]
		public void UpdateTransform(bool siblingRotationConstraints, int startDepth)
		{
		}

		[Token(Token = "0x6000053")]
		[Address(RVA = "0x582AC0", Offset = "0x5810C0", VA = "0x180582AC0")]
		public void SetRestState()
		{
		}

		[Token(Token = "0x6000054")]
		[Address(RVA = "0x582DB0", Offset = "0x5813B0", VA = "0x180582DB0")]
		public void UpdateSpace()
		{
		}
	}

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float DeltaTime_Min;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<Transform> m_RootBones;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private List<Transform> m_EndBones;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private EZSoftBoneMaterial m_Material;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x38")]
	private EZSoftBoneMaterial m_InstanceMaterial;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private int m_StartDepth;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private UnificationMode m_SiblingConstraints;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private bool m_ClosedSiblings;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x49")]
	[SerializeField]
	private bool m_SiblingRotationConstraints;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private UnificationMode m_LengthUnification;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private LayerMask m_CollisionLayers;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private List<Collider> m_ExtraColliders;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private float m_Radius;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_RadiusCurve;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private DeltaTimeMode m_DeltaTimeMode;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	private float m_ConstantDeltaTime;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	[Range(1f, 10f)]
	private int m_Iterations;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private float m_SleepThreshold;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private Transform m_GravityAligner;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private Vector3 m_Gravity;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private EZSoftBoneForceField m_ForceModule;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private float m_ForceScale;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private Transform m_SimulateSpace;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0xC0")]
	public CustomForce customForce;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0xC8")]
	private List<Bone> m_Structures;

	[Token(Token = "0x17000001")]
	public List<Transform> rootBones
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public List<Transform> endBones
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public EZSoftBoneMaterial sharedMaterial
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x58A710", Offset = "0x588D10", VA = "0x18058A710")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public EZSoftBoneMaterial material
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x58A620", Offset = "0x588C20", VA = "0x18058A620")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x58A9B0", Offset = "0x588FB0", VA = "0x18058A9B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int startDepth
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public UnificationMode siblingConstraints
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		get
		{
			return default(UnificationMode);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x58AA10", Offset = "0x589010", VA = "0x18058AA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool closedSiblings
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool siblingRotationConstraints
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x58A880", Offset = "0x588E80", VA = "0x18058A880")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x58AA20", Offset = "0x589020", VA = "0x18058AA20")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public UnificationMode lengthUnification
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		get
		{
			return default(UnificationMode);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x58A9A0", Offset = "0x588FA0", VA = "0x18058A9A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public LayerMask collisionLayers
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x58A8D0", Offset = "0x588ED0", VA = "0x18058A8D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public List<Collider> extraColliders
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public float radius
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x58A700", Offset = "0x588D00", VA = "0x18058A700")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x58A9F0", Offset = "0x588FF0", VA = "0x18058A9F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public AnimationCurve radiusCurve
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public DeltaTimeMode deltaTimeMode
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560")]
		get
		{
			return default(DeltaTimeMode);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x58A8F0", Offset = "0x588EF0", VA = "0x18058A8F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float constantDeltaTime
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x58A550", Offset = "0x588B50", VA = "0x18058A550")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x58A8E0", Offset = "0x588EE0", VA = "0x18058A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int iterations
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x58A990", Offset = "0x588F90", VA = "0x18058A990")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float sleepThreshold
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x58A8A0", Offset = "0x588EA0", VA = "0x18058A8A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x58AA50", Offset = "0x589050", VA = "0x18058AA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public Transform gravityAligner
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public Vector3 gravity
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x58A5E0", Offset = "0x588BE0", VA = "0x18058A5E0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x58A970", Offset = "0x588F70", VA = "0x18058A970")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public EZSoftBoneForceField forceModule
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public float forceScale
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x58A590", Offset = "0x588B90", VA = "0x18058A590")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x58A920", Offset = "0x588F20", VA = "0x18058A920")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public Transform simulateSpace
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public float globalRadius
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x58A5C0", Offset = "0x588BC0", VA = "0x18058A5C0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x58A950", Offset = "0x588F50", VA = "0x18058A950")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Vector3 globalForce
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x58A5A0", Offset = "0x588BA0", VA = "0x18058A5A0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x58A930", Offset = "0x588F30", VA = "0x18058A930")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x588FF0", Offset = "0x5875F0", VA = "0x180588FF0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x588500", Offset = "0x586B00", VA = "0x180588500")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x5884F0", Offset = "0x586AF0", VA = "0x1805884F0")]
	private void Update()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x588410", Offset = "0x586A10", VA = "0x180588410")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x5884F0", Offset = "0x586AF0", VA = "0x1805884F0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5884F0", Offset = "0x586AF0", VA = "0x1805884F0")]
	public void RevertTransforms()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x588620", Offset = "0x586C20", VA = "0x180588620")]
	public void RevertTransforms(int startDepth)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x587F30", Offset = "0x586530", VA = "0x180587F30")]
	public void InitStructures()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x5887A0", Offset = "0x586DA0", VA = "0x1805887A0")]
	public void SetRestState()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x587D10", Offset = "0x586310", VA = "0x180587D10")]
	private void CreateBones()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x588C80", Offset = "0x587280", VA = "0x180588C80")]
	private void SetSiblings()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x5889C0", Offset = "0x586FC0", VA = "0x1805889C0")]
	private void SetSiblingsByDepth(Queue<Bone> bones, bool closed)
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x588E50", Offset = "0x587450", VA = "0x180588E50")]
	private void SetTreeLength()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x588510", Offset = "0x586B10", VA = "0x180588510")]
	public void RefreshRadius()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x589E80", Offset = "0x588480", VA = "0x180589E80")]
	private void UpdateStructures(float deltaTime)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x589000", Offset = "0x587600", VA = "0x180589000")]
	private void UpdateBones(Bone bone, float deltaTime)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x58A320", Offset = "0x588920", VA = "0x18058A320")]
	private void UpdateTransforms()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x58A400", Offset = "0x588A00", VA = "0x18058A400")]
	public EZSoftBone()
	{
	}
}
