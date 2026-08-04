// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderCylinder.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderCylinder.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x2397C40", Offset = "0x2397C40", VA = "0x2397C40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x2397C50", Offset = "0x2397C50", VA = "0x2397C50")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool insideMode
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x2397C60", Offset = "0x2397C60", VA = "0x2397C60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x2397C70", Offset = "0x2397C70", VA = "0x2397C70")]
		set
		{
		}
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2397C80", Offset = "0x2397C80", VA = "0x2397C80", Slot = "4")]
	public override void Collide(ref Vector3 position, float spacing)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2397F90", Offset = "0x2397F90", VA = "0x2397F90")]
	public EZSoftBoneColliderCylinder()
	{
	}
}
