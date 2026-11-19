// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderCylinder.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderCylinder.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderCylinder.c (EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_margin): clean
			return this.m_Margin;
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x31A8010", Offset = "0x31A7010", VA = "0x31A8010")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderCylinder.c (EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_margin): clean
			this.m_Margin = value;
			return;
		}
	}

	[Token(Token = "0x1700001D")]
	public bool insideMode
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x31A8020", Offset = "0x31A7020", VA = "0x31A8020")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderCylinder.c (EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_insideMode): clean
			return this.m_InsideMode;
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x31A8030", Offset = "0x31A7030", VA = "0x31A8030")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderCylinder.c (EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_insideMode): clean
			this.m_InsideMode = value;
			return;
		}
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x31A8040", Offset = "0x31A7040", VA = "0x31A8040", Slot = "4")]
	public override void Collide(ref Vector3 position, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderCylinder.c (EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$Collide): clean
		bool bVar1;
		Transform __this_00;
		float fVar3;
		float fVar4;
		Vector3 UVar5;
		Vector3 UVar6;
		Vector3 UVar7;

		bVar1 = this.m_InsideMode;
		__this_00 = this.transform;
		if (bVar1 == false) {
			if (__this_00 != null) {
				fVar3 = spacing + this.m_Margin;
				UVar5 = __this_00.lossyScale;
				UVar6 = __this_00.position;
				UVar7 = __this_00.up;
				fVar4 = ABS(UVar5.x);
				if (ABS(UVar5.x) <= ABS(UVar5.z)) {
					fVar4 = ABS(UVar5.z);
				}
				EZSoftBoneUtility.PointOutsideCylinder(position, UVar6, UVar7, fVar4 * 0.5 + fVar3, ABS(UVar5.y) + fVar3);
				return;
			}
		}
		else if (__this_00 != null) {
			fVar3 = spacing + this.m_Margin;
			UVar5 = __this_00.lossyScale;
			UVar6 = __this_00.position;
			UVar7 = __this_00.up;
			fVar4 = ABS(UVar5.x);
			if (ABS(UVar5.x) <= ABS(UVar5.z)) {
				fVar4 = ABS(UVar5.z);
			}
			EZSoftBoneUtility.PointInsideCylinder(position, UVar6, UVar7, fVar4 * 0.5 - fVar3, ABS(UVar5.y) - fVar3);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x31A8360", Offset = "0x31A7360", VA = "0x31A8360")]
	public EZSoftBoneColliderCylinder()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderCylinder.c (EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0753e818 == false) {
			Il2CppMethodInitialized_0753e818 = true;
			uVar1 = (typeof(EZSoftBoneColliderBase)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EZSoftBoneColliderBase)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}
}
