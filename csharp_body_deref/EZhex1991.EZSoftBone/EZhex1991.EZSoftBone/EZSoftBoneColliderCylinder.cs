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

[Token(Token = "0x200000B")]
public class EZSoftBoneColliderCylinder : EZSoftBoneColliderBase
{
	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float m_Margin;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private bool m_InsideMode;

	[Token(Token = "0x1700001C")]
	public float margin
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x31A8000", Offset = "0x31A7000", VA = "0x31A8000")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x31A8010", Offset = "0x31A7010", VA = "0x31A8010")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool insideMode
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x31A8020", Offset = "0x31A7020", VA = "0x31A8020")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x31A8030", Offset = "0x31A7030", VA = "0x31A8030")]
		set
		{
		}
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x31A8040", Offset = "0x31A7040", VA = "0x31A8040", Slot = "4")]
	public override void Collide(ref Vector3 position, float spacing)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x31A8360", Offset = "0x31A7360", VA = "0x31A8360")]
	public EZSoftBoneColliderCylinder()
	{
	}
}
