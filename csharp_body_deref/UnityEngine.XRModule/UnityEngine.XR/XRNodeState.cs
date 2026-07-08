using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x2000006")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct XRNodeState
{
	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x0")]
	private XRNode m_Type;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x4")]
	private AvailableTrackingData m_AvailableFields;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x8")]
	private Vector3 m_Position;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x14")]
	private Quaternion m_Rotation;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x24")]
	private Vector3 m_Velocity;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x30")]
	private Vector3 m_AngularVelocity;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 m_Acceleration;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x48")]
	private Vector3 m_AngularAcceleration;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x54")]
	private int m_Tracked;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x58")]
	private ulong m_UniqueID;

	[Token(Token = "0x17000001")]
	public ulong uniqueID
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4DE4260", Offset = "0x4DE4260", VA = "0x4DE4260")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public XRNode nodeType
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4DE4270", Offset = "0x4DE4270", VA = "0x4DE4270")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool tracked
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4DE4280", Offset = "0x4DE4280", VA = "0x4DE4280")]
		set
		{
		}
	}
}
