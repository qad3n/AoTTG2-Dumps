using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x200000D")]
public class EZSoftBoneColliderCylinder : EZSoftBoneColliderBase
{
	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float m_Margin;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private bool m_InsideMode;

	[Token(Token = "0x1700001C")]
	public float margin
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x2359B30", Offset = "0x2359B30", VA = "0x2359B30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x2359B40", Offset = "0x2359B40", VA = "0x2359B40")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool insideMode
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x2359B50", Offset = "0x2359B50", VA = "0x2359B50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x2359B60", Offset = "0x2359B60", VA = "0x2359B60")]
		set
		{
		}
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2359B70", Offset = "0x2359B70", VA = "0x2359B70", Slot = "4")]
	public override void Collide(ref Vector3 position, float spacing)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2359E80", Offset = "0x2359E80", VA = "0x2359E80")]
	public EZSoftBoneColliderCylinder()
	{
	}
}
