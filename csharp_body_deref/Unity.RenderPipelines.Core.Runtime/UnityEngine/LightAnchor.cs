using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000006")]
[AddComponentMenu("Rendering/Light Anchor")]
[ExecuteInEditMode]
[DisallowMultipleComponent]
public class LightAnchor : MonoBehaviour
{
	[Token(Token = "0x2000007")]
	public enum UpDirection
	{
		[Token(Token = "0x4000011")]
		World,
		[Token(Token = "0x4000012")]
		Local
	}

	[Token(Token = "0x2000008")]
	private struct Axes
	{
		[Token(Token = "0x4000013")]
		[FieldOffset(Offset = "0x0")]
		public Vector3 up;

		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0xC")]
		public Vector3 right;

		[Token(Token = "0x4000015")]
		[FieldOffset(Offset = "0x18")]
		public Vector3 forward;
	}

	[Token(Token = "0x4000006")]
	private const float k_ArcRadius = 5f;

	[Token(Token = "0x4000007")]
	private const float k_AxisLength = 10f;

	[Token(Token = "0x4000008")]
	internal const float k_MaxDistance = 10000f;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Min(0f)]
	private float m_Distance;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private UpDirection m_FrameSpace;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Transform m_AnchorPositionOverride;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Vector3 m_AnchorPositionOffset;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private float m_Yaw;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float m_Pitch;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private float m_Roll;

	[Token(Token = "0x17000001")]
	public float yaw
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4843980", Offset = "0x4843980", VA = "0x4843980")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4843990", Offset = "0x4843990", VA = "0x4843990")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public float pitch
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4843A20", Offset = "0x4843A20", VA = "0x4843A20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4843A30", Offset = "0x4843A30", VA = "0x4843A30")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public float roll
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4843A80", Offset = "0x4843A80", VA = "0x4843A80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4843A90", Offset = "0x4843A90", VA = "0x4843A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public float distance
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4843AE0", Offset = "0x4843AE0", VA = "0x4843AE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4843AF0", Offset = "0x4843AF0", VA = "0x4843AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public UpDirection frameSpace
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4843B10", Offset = "0x4843B10", VA = "0x4843B10")]
		get
		{
			return default(UpDirection);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4843B20", Offset = "0x4843B20", VA = "0x4843B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public Vector3 anchorPosition
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4843B30", Offset = "0x4843B30", VA = "0x4843B30")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000007")]
	public Transform anchorPositionOverride
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4843C40", Offset = "0x4843C40", VA = "0x4843C40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4843C50", Offset = "0x4843C50", VA = "0x4843C50")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Vector3 anchorPositionOffset
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4843C60", Offset = "0x4843C60", VA = "0x4843C60")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4843C70", Offset = "0x4843C70", VA = "0x4843C70")]
		set
		{
		}
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x48439E0", Offset = "0x48439E0", VA = "0x48439E0")]
	public static float NormalizeAngleDegree(float angle)
	{
		return default(float);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4843C80", Offset = "0x4843C80", VA = "0x4843C80")]
	public void SynchronizeOnTransform(Camera camera)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x48451C0", Offset = "0x48451C0", VA = "0x48451C0")]
	public void UpdateTransform(Camera camera, Vector3 anchor)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4844380", Offset = "0x4844380", VA = "0x4844380")]
	private Axes GetWorldSpaceAxes(Camera camera, Vector3 anchor)
	{
		return default(Axes);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4845560", Offset = "0x4845560", VA = "0x4845560")]
	private void Update()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x48456A0", Offset = "0x48456A0", VA = "0x48456A0")]
	private void OnDrawGizmosSelected()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4845220", Offset = "0x4845220", VA = "0x4845220")]
	private void UpdateTransform(Vector3 up, Vector3 right, Vector3 forward, Vector3 anchor)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4845760", Offset = "0x4845760", VA = "0x4845760")]
	public LightAnchor()
	{
	}
}
