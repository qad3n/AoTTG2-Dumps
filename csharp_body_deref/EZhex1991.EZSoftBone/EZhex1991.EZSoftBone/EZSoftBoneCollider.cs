using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x200000B")]
[RequireComponent(typeof(Collider))]
public class EZSoftBoneCollider : EZSoftBoneColliderBase
{
	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Collider m_ReferenceCollider;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float m_Margin;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private bool m_InsideMode;

	[Token(Token = "0x17000019")]
	public Collider referenceCollider
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x2358580", Offset = "0x2358580", VA = "0x2358580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	public float margin
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x2358610", Offset = "0x2358610", VA = "0x2358610")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x2358620", Offset = "0x2358620", VA = "0x2358620")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool insideMode
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x2358630", Offset = "0x2358630", VA = "0x2358630")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x2358640", Offset = "0x2358640", VA = "0x2358640")]
		set
		{
		}
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2358650", Offset = "0x2358650", VA = "0x2358650", Slot = "4")]
	public override void Collide(ref Vector3 position, float spacing)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2359820", Offset = "0x2359820", VA = "0x2359820")]
	private bool CheckConvex(MeshCollider meshCollider)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x23598A0", Offset = "0x23598A0", VA = "0x23598A0")]
	private void Reset()
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x23598F0", Offset = "0x23598F0", VA = "0x23598F0")]
	public EZSoftBoneCollider()
	{
	}
}
