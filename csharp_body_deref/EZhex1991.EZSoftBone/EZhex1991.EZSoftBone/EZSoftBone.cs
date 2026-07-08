using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000007")]
public class EZSoftBone : MonoBehaviour
{
	[Token(Token = "0x2000008")]
	public enum UnificationMode
	{
		[Token(Token = "0x4000024")]
		None,
		[Token(Token = "0x4000025")]
		Rooted,
		[Token(Token = "0x4000026")]
		Unified
	}

	[Token(Token = "0x2000009")]
	public enum DeltaTimeMode
	{
		[Token(Token = "0x4000028")]
		DeltaTime,
		[Token(Token = "0x4000029")]
		UnscaledDeltaTime,
		[Token(Token = "0x400002A")]
		Constant
	}

	[Token(Token = "0x200000A")]
	private class Bone
	{
		[Token(Token = "0x400002B")]
		[FieldOffset(Offset = "0x10")]
		public Bone parentBone;

		[Token(Token = "0x400002C")]
		[FieldOffset(Offset = "0x18")]
		public Vector3 localPosition;

		[Token(Token = "0x400002D")]
		[FieldOffset(Offset = "0x24")]
		public Quaternion localRotation;

		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x38")]
		public Bone leftBone;

		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x40")]
		public Vector3 leftPosition;

		[Token(Token = "0x4000030")]
		[FieldOffset(Offset = "0x50")]
		public Bone rightBone;

		[Token(Token = "0x4000031")]
		[FieldOffset(Offset = "0x58")]
		public Vector3 rightPosition;

		[Token(Token = "0x4000032")]
		[FieldOffset(Offset = "0x68")]
		public List<Bone> childBones;

		[Token(Token = "0x4000033")]
		[FieldOffset(Offset = "0x70")]
		public Transform transform;

		[Token(Token = "0x4000034")]
		[FieldOffset(Offset = "0x78")]
		public Vector3 worldPosition;

		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0x88")]
		public Transform systemSpace;

		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0x90")]
		public Vector3 systemPosition;

		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0x9C")]
		public int depth;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0xA0")]
		public float boneLength;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0xA4")]
		public float treeLength;

		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0xA8")]
		public float normalizedLength;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0xAC")]
		public float radius;

		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0xB0")]
		public float damping;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0xB4")]
		public float stiffness;

		[Token(Token = "0x400003E")]
		[FieldOffset(Offset = "0xB8")]
		public float resistance;

		[Token(Token = "0x400003F")]
		[FieldOffset(Offset = "0xBC")]
		public float slackness;

		[Token(Token = "0x4000040")]
		[FieldOffset(Offset = "0xC0")]
		public Vector3 speed;

		[Token(Token = "0x600004C")]
		[Address(RVA = "0x2355940", Offset = "0x2355940", VA = "0x2355940")]
		public Bone(Transform systemSpace, Transform transform, IEnumerable<Transform> endBones, int startDepth, int depth, float nodeLength, float boneLength)
		{
		}

		[Token(Token = "0x600004D")]
		[Address(RVA = "0x2356230", Offset = "0x2356230", VA = "0x2356230")]
		public void SetTreeLength()
		{
		}

		[Token(Token = "0x600004E")]
		[Address(RVA = "0x2356240", Offset = "0x2356240", VA = "0x2356240")]
		public void SetTreeLength(float treeLength)
		{
		}

		[Token(Token = "0x600004F")]
		[Address(RVA = "0x23561D0", Offset = "0x23561D0", VA = "0x23561D0")]
		public void SetLeftSibling(Bone left)
		{
		}

		[Token(Token = "0x6000050")]
		[Address(RVA = "0x2356170", Offset = "0x2356170", VA = "0x2356170")]
		public void SetRightSibling(Bone right)
		{
		}

		[Token(Token = "0x6000051")]
		[Address(RVA = "0x2356320", Offset = "0x2356320", VA = "0x2356320")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve)
		{
		}

		[Token(Token = "0x6000052")]
		[Address(RVA = "0x23563F0", Offset = "0x23563F0", VA = "0x23563F0")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve, EZSoftBoneMaterial material)
		{
		}

		[Token(Token = "0x6000053")]
		[Address(RVA = "0x23550A0", Offset = "0x23550A0", VA = "0x23550A0")]
		public void RevertTransforms(int startDepth)
		{
		}

		[Token(Token = "0x6000054")]
		[Address(RVA = "0x2357D20", Offset = "0x2357D20", VA = "0x2357D20")]
		public void UpdateTransform(bool siblingRotationConstraints, int startDepth)
		{
		}

		[Token(Token = "0x6000055")]
		[Address(RVA = "0x23557B0", Offset = "0x23557B0", VA = "0x23557B0")]
		public void SetRestState()
		{
		}

		[Token(Token = "0x6000056")]
		[Address(RVA = "0x23565C0", Offset = "0x23565C0", VA = "0x23565C0")]
		public void UpdateSpace()
		{
		}
	}

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float DeltaTime_Min;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<Transform> m_RootBones;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private List<Transform> m_EndBones;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private EZSoftBoneMaterial m_Material;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x38")]
	private EZSoftBoneMaterial m_InstanceMaterial;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private int m_StartDepth;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private UnificationMode m_SiblingConstraints;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private bool m_ClosedSiblings;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x49")]
	[SerializeField]
	private bool m_SiblingRotationConstraints;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private UnificationMode m_LengthUnification;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private LayerMask m_CollisionLayers;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private List<Collider> m_ExtraColliders;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private float m_Radius;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_RadiusCurve;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private DeltaTimeMode m_DeltaTimeMode;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	private float m_ConstantDeltaTime;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	[Range(1f, 10f)]
	private int m_Iterations;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private float m_SleepThreshold;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private Transform m_GravityAligner;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private Vector3 m_Gravity;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private EZSoftBoneForceField m_ForceModule;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private float m_ForceScale;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private Transform m_SimulateSpace;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0xC0")]
	public CustomForce customForce;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0xC8")]
	private List<Bone> m_Structures;

	[Token(Token = "0x17000001")]
	public List<Transform> rootBones
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x2354290", Offset = "0x2354290", VA = "0x2354290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public List<Transform> endBones
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x23542A0", Offset = "0x23542A0", VA = "0x23542A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public EZSoftBoneMaterial sharedMaterial
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x23542B0", Offset = "0x23542B0", VA = "0x23542B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x2354420", Offset = "0x2354420", VA = "0x2354420")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public EZSoftBoneMaterial material
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x2354430", Offset = "0x2354430", VA = "0x2354430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2354550", Offset = "0x2354550", VA = "0x2354550")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int startDepth
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x2354590", Offset = "0x2354590", VA = "0x2354590")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x23545A0", Offset = "0x23545A0", VA = "0x23545A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public UnificationMode siblingConstraints
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x23545B0", Offset = "0x23545B0", VA = "0x23545B0")]
		get
		{
			return default(UnificationMode);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x23545C0", Offset = "0x23545C0", VA = "0x23545C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool closedSiblings
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x23545D0", Offset = "0x23545D0", VA = "0x23545D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x23545E0", Offset = "0x23545E0", VA = "0x23545E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool siblingRotationConstraints
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x23545F0", Offset = "0x23545F0", VA = "0x23545F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x2354600", Offset = "0x2354600", VA = "0x2354600")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public UnificationMode lengthUnification
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x2354610", Offset = "0x2354610", VA = "0x2354610")]
		get
		{
			return default(UnificationMode);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x2354620", Offset = "0x2354620", VA = "0x2354620")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public LayerMask collisionLayers
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x2354630", Offset = "0x2354630", VA = "0x2354630")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x2354640", Offset = "0x2354640", VA = "0x2354640")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public List<Collider> extraColliders
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x2354650", Offset = "0x2354650", VA = "0x2354650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public float radius
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x2354660", Offset = "0x2354660", VA = "0x2354660")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x2354670", Offset = "0x2354670", VA = "0x2354670")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public AnimationCurve radiusCurve
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x2354680", Offset = "0x2354680", VA = "0x2354680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public DeltaTimeMode deltaTimeMode
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x2354690", Offset = "0x2354690", VA = "0x2354690")]
		get
		{
			return default(DeltaTimeMode);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x23546A0", Offset = "0x23546A0", VA = "0x23546A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float constantDeltaTime
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x23546B0", Offset = "0x23546B0", VA = "0x23546B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x23546C0", Offset = "0x23546C0", VA = "0x23546C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int iterations
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x23546D0", Offset = "0x23546D0", VA = "0x23546D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x23546E0", Offset = "0x23546E0", VA = "0x23546E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float sleepThreshold
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x23546F0", Offset = "0x23546F0", VA = "0x23546F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x2354700", Offset = "0x2354700", VA = "0x2354700")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public Transform gravityAligner
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x2354710", Offset = "0x2354710", VA = "0x2354710")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x2354720", Offset = "0x2354720", VA = "0x2354720")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public Vector3 gravity
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x2354730", Offset = "0x2354730", VA = "0x2354730")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x2354750", Offset = "0x2354750", VA = "0x2354750")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public EZSoftBoneForceField forceModule
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x2354760", Offset = "0x2354760", VA = "0x2354760")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x2354770", Offset = "0x2354770", VA = "0x2354770")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public float forceScale
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x2354790", Offset = "0x2354790", VA = "0x2354790")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x23547A0", Offset = "0x23547A0", VA = "0x23547A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public Transform simulateSpace
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x23547B0", Offset = "0x23547B0", VA = "0x23547B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x23547C0", Offset = "0x23547C0", VA = "0x23547C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public float globalRadius
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x23547E0", Offset = "0x23547E0", VA = "0x23547E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x23547F0", Offset = "0x23547F0", VA = "0x23547F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Vector3 globalForce
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x2354800", Offset = "0x2354800", VA = "0x2354800")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x2354820", Offset = "0x2354820", VA = "0x2354820")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2354830", Offset = "0x2354830", VA = "0x2354830")]
	private void Start()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2354890", Offset = "0x2354890", VA = "0x2354890")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2354930", Offset = "0x2354930", VA = "0x2354930")]
	private void Update()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x23549D0", Offset = "0x23549D0", VA = "0x23549D0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2355080", Offset = "0x2355080", VA = "0x2355080")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2355090", Offset = "0x2355090", VA = "0x2355090")]
	public void RevertTransforms()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2354940", Offset = "0x2354940", VA = "0x2354940")]
	public void RevertTransforms(int startDepth)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2354860", Offset = "0x2354860", VA = "0x2354860")]
	public void InitStructures()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x23548A0", Offset = "0x23548A0", VA = "0x23548A0")]
	public void SetRestState()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2355170", Offset = "0x2355170", VA = "0x2355170")]
	private void CreateBones()
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2355380", Offset = "0x2355380", VA = "0x2355380")]
	private void SetSiblings()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2355DB0", Offset = "0x2355DB0", VA = "0x2355DB0")]
	private void SetSiblingsByDepth(Queue<Bone> bones, bool closed)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2355580", Offset = "0x2355580", VA = "0x2355580")]
	private void SetTreeLength()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x23556D0", Offset = "0x23556D0", VA = "0x23556D0")]
	public void RefreshRadius()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2354A10", Offset = "0x2354A10", VA = "0x2354A10")]
	private void UpdateStructures(float deltaTime)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x23566B0", Offset = "0x23566B0", VA = "0x23566B0")]
	private void UpdateBones(Bone bone, float deltaTime)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2354FF0", Offset = "0x2354FF0", VA = "0x2354FF0")]
	private void UpdateTransforms()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2358350", Offset = "0x2358350", VA = "0x2358350")]
	public EZSoftBone()
	{
	}
}
