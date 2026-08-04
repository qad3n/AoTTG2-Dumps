// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LightAnchor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B68A70", Offset = "0x4B68A70", VA = "0x4B68A70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4B68A80", Offset = "0x4B68A80", VA = "0x4B68A80")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public float pitch
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4B68B10", Offset = "0x4B68B10", VA = "0x4B68B10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4B68B20", Offset = "0x4B68B20", VA = "0x4B68B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public float roll
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4B68B70", Offset = "0x4B68B70", VA = "0x4B68B70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4B68B80", Offset = "0x4B68B80", VA = "0x4B68B80")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public float distance
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4B68BD0", Offset = "0x4B68BD0", VA = "0x4B68BD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4B68BE0", Offset = "0x4B68BE0", VA = "0x4B68BE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public UpDirection frameSpace
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4B68C00", Offset = "0x4B68C00", VA = "0x4B68C00")]
		get
		{
			return default(UpDirection);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4B68C10", Offset = "0x4B68C10", VA = "0x4B68C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public Vector3 anchorPosition
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4B68C20", Offset = "0x4B68C20", VA = "0x4B68C20")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000007")]
	public Transform anchorPositionOverride
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4B68D30", Offset = "0x4B68D30", VA = "0x4B68D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4B68D40", Offset = "0x4B68D40", VA = "0x4B68D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Vector3 anchorPositionOffset
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4B68D50", Offset = "0x4B68D50", VA = "0x4B68D50")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4B68D60", Offset = "0x4B68D60", VA = "0x4B68D60")]
		set
		{
		}
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4B68AD0", Offset = "0x4B68AD0", VA = "0x4B68AD0")]
	public static float NormalizeAngleDegree(float angle)
	{
		return default(float);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4B68D70", Offset = "0x4B68D70", VA = "0x4B68D70")]
	public void SynchronizeOnTransform(Camera camera)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4B6A2B0", Offset = "0x4B6A2B0", VA = "0x4B6A2B0")]
	public void UpdateTransform(Camera camera, Vector3 anchor)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4B69470", Offset = "0x4B69470", VA = "0x4B69470")]
	private Axes GetWorldSpaceAxes(Camera camera, Vector3 anchor)
	{
		return default(Axes);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4B6A650", Offset = "0x4B6A650", VA = "0x4B6A650")]
	private void Update()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4B6A790", Offset = "0x4B6A790", VA = "0x4B6A790")]
	private void OnDrawGizmosSelected()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4B6A310", Offset = "0x4B6A310", VA = "0x4B6A310")]
	private void UpdateTransform(Vector3 up, Vector3 right, Vector3 forward, Vector3 anchor)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B6A850", Offset = "0x4B6A850", VA = "0x4B6A850")]
	public LightAnchor()
	{
	}
}
