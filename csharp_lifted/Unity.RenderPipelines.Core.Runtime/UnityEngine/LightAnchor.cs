// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LightAnchor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000007")]
[AddComponentMenu("Rendering/Light Anchor")]
[ExecuteInEditMode]
[DisallowMultipleComponent]
public class LightAnchor : MonoBehaviour
{
	[Token(Token = "0x2000008")]
	public enum UpDirection
	{
		[Token(Token = "0x4000019")]
		World,
		[Token(Token = "0x400001A")]
		Local
	}

	[Token(Token = "0x2000009")]
	private struct Axes
	{
		[Token(Token = "0x400001B")]
		[FieldOffset(Offset = "0x0")]
		public Vector3 up;

		[Token(Token = "0x400001C")]
		[FieldOffset(Offset = "0xC")]
		public Vector3 right;

		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x18")]
		public Vector3 forward;
	}

	[Token(Token = "0x400000E")]
	private const float k_ArcRadius = 5f;

	[Token(Token = "0x400000F")]
	private const float k_AxisLength = 10f;

	[Token(Token = "0x4000010")]
	internal const float k_MaxDistance = 10000f;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Min(0f)]
	private float m_Distance;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private UpDirection m_FrameSpace;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Transform m_AnchorPositionOverride;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Vector3 m_AnchorPositionOffset;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private float m_Yaw;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float m_Pitch;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private float m_Roll;

	[Token(Token = "0x17000001")]
	public float yaw
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x64A52E0", Offset = "0x64A42E0", VA = "0x64A52E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x64A52F0", Offset = "0x64A42F0", VA = "0x64A52F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public float pitch
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x64A5380", Offset = "0x64A4380", VA = "0x64A5380")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x64A5390", Offset = "0x64A4390", VA = "0x64A5390")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public float roll
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x64A53E0", Offset = "0x64A43E0", VA = "0x64A53E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x64A53F0", Offset = "0x64A43F0", VA = "0x64A53F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public float distance
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x64A5440", Offset = "0x64A4440", VA = "0x64A5440")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x64A5450", Offset = "0x64A4450", VA = "0x64A5450")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public UpDirection frameSpace
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x64A5470", Offset = "0x64A4470", VA = "0x64A5470")]
		get
		{
			return default(UpDirection);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x64A5480", Offset = "0x64A4480", VA = "0x64A5480")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public Vector3 anchorPosition
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x64A5490", Offset = "0x64A4490", VA = "0x64A5490")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000007")]
	public Transform anchorPositionOverride
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x64A55A0", Offset = "0x64A45A0", VA = "0x64A55A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x64A55B0", Offset = "0x64A45B0", VA = "0x64A55B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Vector3 anchorPositionOffset
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x64A55C0", Offset = "0x64A45C0", VA = "0x64A55C0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x64A55D0", Offset = "0x64A45D0", VA = "0x64A55D0")]
		set
		{
		}
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x64A5340", Offset = "0x64A4340", VA = "0x64A5340")]
	public static float NormalizeAngleDegree(float angle)
	{
		return default(float);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x64A55E0", Offset = "0x64A45E0", VA = "0x64A55E0")]
	public void SynchronizeOnTransform(Camera camera)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x64A6C80", Offset = "0x64A5C80", VA = "0x64A6C80")]
	public void UpdateTransform(Camera camera, Vector3 anchor)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x64A5C70", Offset = "0x64A4C70", VA = "0x64A5C70")]
	private Axes GetWorldSpaceAxes(Camera camera, Vector3 anchor)
	{
		return default(Axes);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x64A70B0", Offset = "0x64A60B0", VA = "0x64A70B0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x64A71F0", Offset = "0x64A61F0", VA = "0x64A71F0")]
	private void OnDrawGizmosSelected()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x64A6CE0", Offset = "0x64A5CE0", VA = "0x64A6CE0")]
	private void UpdateTransform(Vector3 up, Vector3 right, Vector3 forward, Vector3 anchor)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x64A72B0", Offset = "0x64A62B0", VA = "0x64A72B0")]
	public LightAnchor()
	{
	}
}
