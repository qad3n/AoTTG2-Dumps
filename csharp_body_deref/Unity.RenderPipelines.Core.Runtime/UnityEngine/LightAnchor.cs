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
		[Address(RVA = "0x1ED2DD0", Offset = "0x1ED13D0", VA = "0x181ED2DD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x2AC3C90", Offset = "0x2AC2290", VA = "0x182AC3C90")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public float pitch
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0xE8F6E0", Offset = "0xE8DCE0", VA = "0x180E8F6E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x2AC3BF0", Offset = "0x2AC21F0", VA = "0x182AC3BF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public float roll
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2AC3BA0", Offset = "0x2AC21A0", VA = "0x182AC3BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x2AC3C40", Offset = "0x2AC2240", VA = "0x182AC3C40")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public float distance
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x584280", Offset = "0x582880", VA = "0x180584280")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x2AC3BC0", Offset = "0x2AC21C0", VA = "0x182AC3BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public UpDirection frameSpace
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(UpDirection);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public Vector3 anchorPosition
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x2AC3A30", Offset = "0x2AC2030", VA = "0x182AC3A30")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000007")]
	public Transform anchorPositionOverride
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Vector3 anchorPositionOffset
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x2AC3A10", Offset = "0x2AC2010", VA = "0x182AC3A10")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x2AC3BB0", Offset = "0x2AC21B0", VA = "0x182AC3BB0")]
		set
		{
		}
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2AC29F0", Offset = "0x2AC0FF0", VA = "0x182AC29F0")]
	public static float NormalizeAngleDegree(float angle)
	{
		return default(float);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2AC2B30", Offset = "0x2AC1130", VA = "0x182AC2B30")]
	public void SynchronizeOnTransform(Camera camera)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2AC3260", Offset = "0x2AC1860", VA = "0x182AC3260")]
	public void UpdateTransform(Camera camera, Vector3 anchor)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2AC1D20", Offset = "0x2AC0320", VA = "0x182AC1D20")]
	private Axes GetWorldSpaceAxes(Camera camera, Vector3 anchor)
	{
		return default(Axes);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2AC3830", Offset = "0x2AC1E30", VA = "0x182AC3830")]
	private void Update()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2AC2A40", Offset = "0x2AC1040", VA = "0x182AC2A40")]
	private void OnDrawGizmosSelected()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x2AC3350", Offset = "0x2AC1950", VA = "0x182AC3350")]
	private void UpdateTransform(Vector3 up, Vector3 right, Vector3 forward, Vector3 anchor)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public LightAnchor()
	{
	}
}
