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
		[Address(RVA = "0x31A3F80", Offset = "0x31A2F80", VA = "0x31A3F80")]
		public Bone(Transform systemSpace, Transform transform, IEnumerable<Transform> endBones, int startDepth, int depth, float nodeLength, float boneLength)
		{
		}

		[Token(Token = "0x600004B")]
		[Address(RVA = "0x31A4880", Offset = "0x31A3880", VA = "0x31A4880")]
		public void SetTreeLength()
		{
		}

		[Token(Token = "0x600004C")]
		[Address(RVA = "0x31A4890", Offset = "0x31A3890", VA = "0x31A4890")]
		public void SetTreeLength(float treeLength)
		{
		}

		[Token(Token = "0x600004D")]
		[Address(RVA = "0x31A4820", Offset = "0x31A3820", VA = "0x31A4820")]
		public void SetLeftSibling(Bone left)
		{
		}

		[Token(Token = "0x600004E")]
		[Address(RVA = "0x31A47C0", Offset = "0x31A37C0", VA = "0x31A47C0")]
		public void SetRightSibling(Bone right)
		{
		}

		[Token(Token = "0x600004F")]
		[Address(RVA = "0x31A4970", Offset = "0x31A3970", VA = "0x31A4970")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve)
		{
		}

		[Token(Token = "0x6000050")]
		[Address(RVA = "0x31A4A40", Offset = "0x31A3A40", VA = "0x31A4A40")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve, EZSoftBoneMaterial material)
		{
		}

		[Token(Token = "0x6000051")]
		[Address(RVA = "0x31A36F0", Offset = "0x31A26F0", VA = "0x31A36F0")]
		public void RevertTransforms(int startDepth)
		{
		}

		[Token(Token = "0x6000052")]
		[Address(RVA = "0x31A6360", Offset = "0x31A5360", VA = "0x31A6360")]
		public void UpdateTransform(bool siblingRotationConstraints, int startDepth)
		{
		}

		[Token(Token = "0x6000053")]
		[Address(RVA = "0x31A3DF0", Offset = "0x31A2DF0", VA = "0x31A3DF0")]
		public void SetRestState()
		{
		}

		[Token(Token = "0x6000054")]
		[Address(RVA = "0x31A4C10", Offset = "0x31A3C10", VA = "0x31A4C10")]
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
		[Address(RVA = "0x31A28B0", Offset = "0x31A18B0", VA = "0x31A28B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public List<Transform> endBones
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x31A28C0", Offset = "0x31A18C0", VA = "0x31A28C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public EZSoftBoneMaterial sharedMaterial
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x31A28D0", Offset = "0x31A18D0", VA = "0x31A28D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x31A2A40", Offset = "0x31A1A40", VA = "0x31A2A40")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public EZSoftBoneMaterial material
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x31A2A50", Offset = "0x31A1A50", VA = "0x31A2A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x31A2B70", Offset = "0x31A1B70", VA = "0x31A2B70")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int startDepth
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x31A2BB0", Offset = "0x31A1BB0", VA = "0x31A2BB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x31A2BC0", Offset = "0x31A1BC0", VA = "0x31A2BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public UnificationMode siblingConstraints
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x31A2BD0", Offset = "0x31A1BD0", VA = "0x31A2BD0")]
		get
		{
			return default(UnificationMode);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x31A2BE0", Offset = "0x31A1BE0", VA = "0x31A2BE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool closedSiblings
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x31A2BF0", Offset = "0x31A1BF0", VA = "0x31A2BF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x31A2C00", Offset = "0x31A1C00", VA = "0x31A2C00")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool siblingRotationConstraints
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x31A2C10", Offset = "0x31A1C10", VA = "0x31A2C10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x31A2C20", Offset = "0x31A1C20", VA = "0x31A2C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public UnificationMode lengthUnification
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x31A2C30", Offset = "0x31A1C30", VA = "0x31A2C30")]
		get
		{
			return default(UnificationMode);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x31A2C40", Offset = "0x31A1C40", VA = "0x31A2C40")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public LayerMask collisionLayers
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x31A2C50", Offset = "0x31A1C50", VA = "0x31A2C50")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x31A2C60", Offset = "0x31A1C60", VA = "0x31A2C60")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public List<Collider> extraColliders
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x31A2C70", Offset = "0x31A1C70", VA = "0x31A2C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public float radius
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x31A2C80", Offset = "0x31A1C80", VA = "0x31A2C80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x31A2C90", Offset = "0x31A1C90", VA = "0x31A2C90")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public AnimationCurve radiusCurve
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x31A2CA0", Offset = "0x31A1CA0", VA = "0x31A2CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public DeltaTimeMode deltaTimeMode
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x31A2CB0", Offset = "0x31A1CB0", VA = "0x31A2CB0")]
		get
		{
			return default(DeltaTimeMode);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x31A2CC0", Offset = "0x31A1CC0", VA = "0x31A2CC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float constantDeltaTime
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x31A2CD0", Offset = "0x31A1CD0", VA = "0x31A2CD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x31A2CE0", Offset = "0x31A1CE0", VA = "0x31A2CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int iterations
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x31A2CF0", Offset = "0x31A1CF0", VA = "0x31A2CF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x31A2D00", Offset = "0x31A1D00", VA = "0x31A2D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float sleepThreshold
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x31A2D10", Offset = "0x31A1D10", VA = "0x31A2D10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x31A2D20", Offset = "0x31A1D20", VA = "0x31A2D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public Transform gravityAligner
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x31A2D30", Offset = "0x31A1D30", VA = "0x31A2D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x31A2D40", Offset = "0x31A1D40", VA = "0x31A2D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public Vector3 gravity
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x31A2D50", Offset = "0x31A1D50", VA = "0x31A2D50")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x31A2D70", Offset = "0x31A1D70", VA = "0x31A2D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public EZSoftBoneForceField forceModule
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x31A2D80", Offset = "0x31A1D80", VA = "0x31A2D80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x31A2D90", Offset = "0x31A1D90", VA = "0x31A2D90")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public float forceScale
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x31A2DB0", Offset = "0x31A1DB0", VA = "0x31A2DB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x31A2DC0", Offset = "0x31A1DC0", VA = "0x31A2DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public Transform simulateSpace
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x31A2DD0", Offset = "0x31A1DD0", VA = "0x31A2DD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x31A2DE0", Offset = "0x31A1DE0", VA = "0x31A2DE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public float globalRadius
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x31A2E00", Offset = "0x31A1E00", VA = "0x31A2E00")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x31A2E10", Offset = "0x31A1E10", VA = "0x31A2E10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Vector3 globalForce
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x31A2E20", Offset = "0x31A1E20", VA = "0x31A2E20")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x31A2E40", Offset = "0x31A1E40", VA = "0x31A2E40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x31A2E50", Offset = "0x31A1E50", VA = "0x31A2E50")]
	private void Start()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x31A2EB0", Offset = "0x31A1EB0", VA = "0x31A2EB0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x31A2F50", Offset = "0x31A1F50", VA = "0x31A2F50")]
	private void Update()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x31A2FF0", Offset = "0x31A1FF0", VA = "0x31A2FF0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x31A36D0", Offset = "0x31A26D0", VA = "0x31A36D0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x31A36E0", Offset = "0x31A26E0", VA = "0x31A36E0")]
	public void RevertTransforms()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x31A2F60", Offset = "0x31A1F60", VA = "0x31A2F60")]
	public void RevertTransforms(int startDepth)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x31A2E80", Offset = "0x31A1E80", VA = "0x31A2E80")]
	public void InitStructures()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x31A2EC0", Offset = "0x31A1EC0", VA = "0x31A2EC0")]
	public void SetRestState()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x31A37C0", Offset = "0x31A27C0", VA = "0x31A37C0")]
	private void CreateBones()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x31A39C0", Offset = "0x31A29C0", VA = "0x31A39C0")]
	private void SetSiblings()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x31A4410", Offset = "0x31A3410", VA = "0x31A4410")]
	private void SetSiblingsByDepth(Queue<Bone> bones, bool closed)
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x31A3BC0", Offset = "0x31A2BC0", VA = "0x31A3BC0")]
	private void SetTreeLength()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x31A3D10", Offset = "0x31A2D10", VA = "0x31A3D10")]
	public void RefreshRadius()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x31A3030", Offset = "0x31A2030", VA = "0x31A3030")]
	private void UpdateStructures(float deltaTime)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x31A4D00", Offset = "0x31A3D00", VA = "0x31A4D00")]
	private void UpdateBones(Bone bone, float deltaTime)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x31A3640", Offset = "0x31A2640", VA = "0x31A3640")]
	private void UpdateTransforms()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x31A6A20", Offset = "0x31A5A20", VA = "0x31A6A20")]
	public EZSoftBone()
	{
	}
}
