// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.XRNodeState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x510C2F0", Offset = "0x510C2F0", VA = "0x510C2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public XRNode nodeType
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x510C300", Offset = "0x510C300", VA = "0x510C300")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool tracked
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x510C310", Offset = "0x510C310", VA = "0x510C310")]
		set
		{
		}
	}
}
