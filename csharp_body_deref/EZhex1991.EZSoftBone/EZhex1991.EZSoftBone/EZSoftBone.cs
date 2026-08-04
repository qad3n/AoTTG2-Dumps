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
		[Address(RVA = "0x2393A50", Offset = "0x2393A50", VA = "0x2393A50")]
		public Bone(Transform systemSpace, Transform transform, IEnumerable<Transform> endBones, int startDepth, int depth, float nodeLength, float boneLength)
		{
		}

		[Token(Token = "0x600004D")]
		[Address(RVA = "0x2394340", Offset = "0x2394340", VA = "0x2394340")]
		public void SetTreeLength()
		{
		}

		[Token(Token = "0x600004E")]
		[Address(RVA = "0x2394350", Offset = "0x2394350", VA = "0x2394350")]
		public void SetTreeLength(float treeLength)
		{
		}

		[Token(Token = "0x600004F")]
		[Address(RVA = "0x23942E0", Offset = "0x23942E0", VA = "0x23942E0")]
		public void SetLeftSibling(Bone left)
		{
		}

		[Token(Token = "0x6000050")]
		[Address(RVA = "0x2394280", Offset = "0x2394280", VA = "0x2394280")]
		public void SetRightSibling(Bone right)
		{
		}

		[Token(Token = "0x6000051")]
		[Address(RVA = "0x2394430", Offset = "0x2394430", VA = "0x2394430")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve)
		{
		}

		[Token(Token = "0x6000052")]
		[Address(RVA = "0x2394500", Offset = "0x2394500", VA = "0x2394500")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve, EZSoftBoneMaterial material)
		{
		}

		[Token(Token = "0x6000053")]
		[Address(RVA = "0x23931B0", Offset = "0x23931B0", VA = "0x23931B0")]
		public void RevertTransforms(int startDepth)
		{
		}

		[Token(Token = "0x6000054")]
		[Address(RVA = "0x2395E30", Offset = "0x2395E30", VA = "0x2395E30")]
		public void UpdateTransform(bool siblingRotationConstraints, int startDepth)
		{
		}

		[Token(Token = "0x6000055")]
		[Address(RVA = "0x23938C0", Offset = "0x23938C0", VA = "0x23938C0")]
		public void SetRestState()
		{
		}

		[Token(Token = "0x6000056")]
		[Address(RVA = "0x23946D0", Offset = "0x23946D0", VA = "0x23946D0")]
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
		[Address(RVA = "0x23923A0", Offset = "0x23923A0", VA = "0x23923A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public List<Transform> endBones
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x23923B0", Offset = "0x23923B0", VA = "0x23923B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public EZSoftBoneMaterial sharedMaterial
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x23923C0", Offset = "0x23923C0", VA = "0x23923C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x2392530", Offset = "0x2392530", VA = "0x2392530")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public EZSoftBoneMaterial material
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x2392540", Offset = "0x2392540", VA = "0x2392540")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2392660", Offset = "0x2392660", VA = "0x2392660")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int startDepth
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x23926A0", Offset = "0x23926A0", VA = "0x23926A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x23926B0", Offset = "0x23926B0", VA = "0x23926B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public UnificationMode siblingConstraints
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x23926C0", Offset = "0x23926C0", VA = "0x23926C0")]
		get
		{
			return default(UnificationMode);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x23926D0", Offset = "0x23926D0", VA = "0x23926D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool closedSiblings
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x23926E0", Offset = "0x23926E0", VA = "0x23926E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x23926F0", Offset = "0x23926F0", VA = "0x23926F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool siblingRotationConstraints
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x2392700", Offset = "0x2392700", VA = "0x2392700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x2392710", Offset = "0x2392710", VA = "0x2392710")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public UnificationMode lengthUnification
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x2392720", Offset = "0x2392720", VA = "0x2392720")]
		get
		{
			return default(UnificationMode);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x2392730", Offset = "0x2392730", VA = "0x2392730")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public LayerMask collisionLayers
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x2392740", Offset = "0x2392740", VA = "0x2392740")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x2392750", Offset = "0x2392750", VA = "0x2392750")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public List<Collider> extraColliders
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x2392760", Offset = "0x2392760", VA = "0x2392760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public float radius
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x2392770", Offset = "0x2392770", VA = "0x2392770")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x2392780", Offset = "0x2392780", VA = "0x2392780")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public AnimationCurve radiusCurve
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x2392790", Offset = "0x2392790", VA = "0x2392790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public DeltaTimeMode deltaTimeMode
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x23927A0", Offset = "0x23927A0", VA = "0x23927A0")]
		get
		{
			return default(DeltaTimeMode);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x23927B0", Offset = "0x23927B0", VA = "0x23927B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float constantDeltaTime
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x23927C0", Offset = "0x23927C0", VA = "0x23927C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x23927D0", Offset = "0x23927D0", VA = "0x23927D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int iterations
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x23927E0", Offset = "0x23927E0", VA = "0x23927E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x23927F0", Offset = "0x23927F0", VA = "0x23927F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float sleepThreshold
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x2392800", Offset = "0x2392800", VA = "0x2392800")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x2392810", Offset = "0x2392810", VA = "0x2392810")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public Transform gravityAligner
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x2392820", Offset = "0x2392820", VA = "0x2392820")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x2392830", Offset = "0x2392830", VA = "0x2392830")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public Vector3 gravity
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x2392840", Offset = "0x2392840", VA = "0x2392840")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x2392860", Offset = "0x2392860", VA = "0x2392860")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public EZSoftBoneForceField forceModule
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x2392870", Offset = "0x2392870", VA = "0x2392870")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x2392880", Offset = "0x2392880", VA = "0x2392880")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public float forceScale
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x23928A0", Offset = "0x23928A0", VA = "0x23928A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x23928B0", Offset = "0x23928B0", VA = "0x23928B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public Transform simulateSpace
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x23928C0", Offset = "0x23928C0", VA = "0x23928C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x23928D0", Offset = "0x23928D0", VA = "0x23928D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public float globalRadius
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x23928F0", Offset = "0x23928F0", VA = "0x23928F0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x2392900", Offset = "0x2392900", VA = "0x2392900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Vector3 globalForce
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x2392910", Offset = "0x2392910", VA = "0x2392910")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x2392930", Offset = "0x2392930", VA = "0x2392930")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2392940", Offset = "0x2392940", VA = "0x2392940")]
	private void Start()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x23929A0", Offset = "0x23929A0", VA = "0x23929A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2392A40", Offset = "0x2392A40", VA = "0x2392A40")]
	private void Update()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2392AE0", Offset = "0x2392AE0", VA = "0x2392AE0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2393190", Offset = "0x2393190", VA = "0x2393190")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x23931A0", Offset = "0x23931A0", VA = "0x23931A0")]
	public void RevertTransforms()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2392A50", Offset = "0x2392A50", VA = "0x2392A50")]
	public void RevertTransforms(int startDepth)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2392970", Offset = "0x2392970", VA = "0x2392970")]
	public void InitStructures()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x23929B0", Offset = "0x23929B0", VA = "0x23929B0")]
	public void SetRestState()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2393280", Offset = "0x2393280", VA = "0x2393280")]
	private void CreateBones()
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2393490", Offset = "0x2393490", VA = "0x2393490")]
	private void SetSiblings()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2393EC0", Offset = "0x2393EC0", VA = "0x2393EC0")]
	private void SetSiblingsByDepth(Queue<Bone> bones, bool closed)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2393690", Offset = "0x2393690", VA = "0x2393690")]
	private void SetTreeLength()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x23937E0", Offset = "0x23937E0", VA = "0x23937E0")]
	public void RefreshRadius()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2392B20", Offset = "0x2392B20", VA = "0x2392B20")]
	private void UpdateStructures(float deltaTime)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x23947C0", Offset = "0x23947C0", VA = "0x23947C0")]
	private void UpdateBones(Bone bone, float deltaTime)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2393100", Offset = "0x2393100", VA = "0x2393100")]
	private void UpdateTransforms()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2396460", Offset = "0x2396460", VA = "0x2396460")]
	public EZSoftBone()
	{
	}
}
