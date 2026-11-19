// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneCollider
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneCollider.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000009")]
[RequireComponent(typeof(Collider))]
public class EZSoftBoneCollider : EZSoftBoneColliderBase
{
	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Collider m_ReferenceCollider;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float m_Margin;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private bool m_InsideMode;

	[Token(Token = "0x17000019")]
	public Collider referenceCollider
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x31A6C50", Offset = "0x31A5C50", VA = "0x31A6C50")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c (EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_referenceCollider): 2 lines keep C-only constructs
			Collider* targetAddress;
			Object x;
			bool bVar1;
			Collider pUVar2;

			x = (Object)this.m_ReferenceCollider;
			targetAddress = &this.m_ReferenceCollider;
			bVar1 = (x == null);
			if (bVar1) {
				pUVar2 = this.GetComponent<Collider>();
				this.m_ReferenceCollider = pUVar2;
			}
			return *targetAddress;
		}
	}

	[Token(Token = "0x1700001A")]
	public float margin
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x31A6CE0", Offset = "0x31A5CE0", VA = "0x31A6CE0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c (EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_margin): clean
			return this.m_Margin;
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x31A6CF0", Offset = "0x31A5CF0", VA = "0x31A6CF0")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c (EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_margin): clean
			this.m_Margin = value;
			return;
		}
	}

	[Token(Token = "0x1700001B")]
	public bool insideMode
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x31A6D00", Offset = "0x31A5D00", VA = "0x31A6D00")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c (EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_insideMode): clean
			return this.m_InsideMode;
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x31A6D10", Offset = "0x31A5D10", VA = "0x31A6D10")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c (EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_insideMode): clean
			this.m_InsideMode = value;
			return;
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x31A6D20", Offset = "0x31A5D20", VA = "0x31A6D20", Slot = "4")]
	public override void Collide(ref Vector3 position, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c (EZhex1991.EZSoftBone.EZSoftBoneCollider$$Collide): 21 lines keep C-only constructs
		byte bVar1;
		code cVar2;
		sbyte cVar3;
		Vector3 center1;
		Vector3 center1_00;
		Vector3 center0;
		Vector3 center0_00;
		bool bVar4;
		Collider pUVar5;
		MethodInfo pMVar6;
		MethodInfo extraout_RDX;
		MethodInfo pMVar7;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo method_01;
		SphereCollider collider;
		BoxCollider collider_00;
		EZSoftBoneCollider pEVar8;
		CapsuleCollider collider_01;
		float fVar9;
		float fStack_3c;
		Vector3 local_38;
		Il2CppMethodPointer local_28;
		float fStack_20;

		pMVar7 = (MethodInfo)position;
		pUVar5 = this.referenceCollider;
		if (pUVar5 != null) {
			bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
			if ((bVar1 <= (pUVar5.klass._2).typeHierarchyDepth) &&((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SphereCollider))) {
				pUVar5 = this.referenceCollider;
				if (pUVar5 == null) {
					collider = null;
					cVar3 = this.m_InsideMode;
					fVar9 = this.m_Margin;
					pMVar7 = extraout_RDX_00;
				}
				else {
					bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
					pMVar7 = (MethodInfo)(ulong)bVar1;
					if ((pUVar5.klass._2).typeHierarchyDepth < bVar1) {
						collider = null;
						cVar3 = this.m_InsideMode;
						fVar9 = this.m_Margin;
					}
					else {
						collider = null;
						if ((pUVar5.klass._2).typeHierarchy[(long)&pMVar7[-1].field_0x57] ==typeof(SphereCollider)) {
							collider = (SphereCollider)pUVar5;
						}
						cVar3 = this.m_InsideMode;
						fVar9 = this.m_Margin;
					}
				}
				if (cVar3 == false) {
					EZSoftBoneUtility.PointOutsideSphere(position, collider, spacing + fVar9);
					return;
				}
				EZSoftBoneUtility.PointInsideSphere(position, collider, spacing + fVar9);
				return;
			}
		}
		pUVar5 = this.referenceCollider;
		if (pUVar5 != null) {
			bVar1 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
			if ((bVar1 <= (pUVar5.klass._2).typeHierarchyDepth) &&((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CapsuleCollider))) {
				pUVar5 = this.referenceCollider;
				if (pUVar5 != null) {
					bVar1 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
					if (bVar1 <= (pUVar5.klass._2).typeHierarchyDepth) {
						collider_01 = null;
						if ((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CapsuleCollider)) {
							collider_01 = (CapsuleCollider)pUVar5;
						}
						goto label_032a7004;
					}
				}
				collider_01 = null;
	label_032a7004: ;
				fVar9 = spacing + this.m_Margin;
				if (this.m_InsideMode == false) {
					fStack_20 = 0.0;
					local_28 = (Il2CppMethodPointer)0x0;
					local_38.z = 0.0;
					local_38.x = 0.0;
					local_38.y = 0.0;
					fStack_3c = 0.0;
					pMVar7 = (MethodInfo)&local_28;
					EZSoftBoneUtility.GetCapsuleParams(collider_01, (Vector3)pMVar7, ref local_38, ref fStack_3c);
					center0_00.z = fStack_20;
					center0_00._0_8_ = local_28;
					center1_00.z = local_38.z;
					center1_00.x = local_38.x;
					center1_00.y = local_38.y;
					EZSoftBoneUtility.PointOutsideCapsule(position, center0_00, center1_00, fVar9 + fStack_3c);
					return;
				}
				fStack_20 = 0.0;
				local_28 = (Il2CppMethodPointer)0x0;
				local_38.z = 0.0;
				local_38.x = 0.0;
				local_38.y = 0.0;
				fStack_3c = 0.0;
				pMVar7 = (MethodInfo)&local_28;
				EZSoftBoneUtility.GetCapsuleParams(collider_01, (Vector3)pMVar7, ref local_38, ref fStack_3c);
				center0.z = fStack_20;
				center0._0_8_ = local_28;
				center1.z = local_38.z;
				center1.x = local_38.x;
				center1.y = local_38.y;
				EZSoftBoneUtility.PointInsideCapsule(position, center0, center1, fStack_3c - fVar9);
				return;
			}
		}
		pUVar5 = this.referenceCollider;
		if (pUVar5 != null) {
			bVar1 = (typeof(BoxCollider)._2).typeHierarchyDepth;
			if ((bVar1 <= (pUVar5.klass._2).typeHierarchyDepth) &&((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BoxCollider) )) {
				pUVar5 = this.referenceCollider;
				pMVar7 = extraout_RDX_01;
				if (pUVar5 != null) {
					bVar1 = (typeof(BoxCollider)._2).typeHierarchyDepth;
					pMVar7 = (MethodInfo)(ulong)bVar1;
					if (bVar1 <= (pUVar5.klass._2).typeHierarchyDepth) {
						collider_00 = null;
						if ((pUVar5.klass._2).typeHierarchy[(long)&pMVar7[-1].field_0x57] ==typeof(BoxCollider)) {
							collider_00 = (BoxCollider)pUVar5;
						}
						goto label_032a710d;
					}
				}
				collider_00 = null;
	label_032a710d: ;
				fVar9 = spacing + this.m_Margin;
				if (this.m_InsideMode == false) {
					EZSoftBoneUtility.PointOutsideBox(position, collider_00, fVar9);
					return;
				}
				EZSoftBoneUtility.PointInsideBox(position, collider_00, fVar9);
				return;
			}
		}
		pUVar5 = this.referenceCollider;
		if (pUVar5 == null) {
			return;
		}
		bVar1 = (typeof(MeshCollider)._2).typeHierarchyDepth;
		if ((pUVar5.klass._2).typeHierarchyDepth < bVar1) {
			return;
		}
		if ((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(MeshCollider)) {
			return;
		}
		pEVar8 = this;
		pMVar6 = (MethodInfo)this.referenceCollider;
		pMVar7 = extraout_RDX;
		if (pMVar6 != null) {
			cVar2 = (code)(typeof(MeshCollider)._2).typeHierarchyDepth;
			pMVar7 = (MethodInfo)(ulong)(byte)cVar2;
			if ((byte)cVar2 <= (byte)pMVar6.methodPointer[0x130]) {
				pEVar8 = *(EZSoftBoneCollider*)(pMVar6.methodPointer + 200);
				method_01 = null;
				if (*(MeshCollider*)((long)pEVar8 + (long)pMVar7 * 8 + -8) == typeof(MeshCollider)) {
					method_01 = pMVar6;
				}
				bVar4 = pEVar8.CheckConvex((MeshCollider)method_01);
				goto joined_r0x032a6ebc;
			}
		}
		method_01 = null;
		bVar4 = pEVar8.CheckConvex(null);
	joined_r0x032a6ebc: ;
		if (!bVar4) {
			if (((typeof(Debug))._2).cctor_finished_or_no_cctor == 0) {
			}
			Debug.LogError((Il2CppObject *)"Non-Convex Mesh Collider is not supported", (Object)this);
			this.enabled = false;
			return;
		}
		if (this.m_InsideMode == false) {
			pUVar5 = this.referenceCollider;
			EZSoftBoneUtility.PointOutsideCollider(position, pUVar5, spacing + this.m_Margin);
			return;
		}
		if (((typeof(Debug))._2).cctor_finished_or_no_cctor == 0) {
		}
		Debug.LogError((Il2CppObject *)"Inside Mode On Mesh Collider is not supported", (Object)this);
		this.m_InsideMode = false;
		return;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x31A7CF0", Offset = "0x31A6CF0", VA = "0x31A7CF0")]
	private bool CheckConvex(MeshCollider meshCollider)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c (EZhex1991.EZSoftBone.EZSoftBoneCollider$$CheckConvex): clean
		bool bVar1;
		Object x;

		if (meshCollider == null) {
			throw new NullReferenceException();
		}
		x = (Object)meshCollider.sharedMesh;
		bVar1 = (x != null);
		if (bVar1) {
			bVar1 = meshCollider.convex;
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x31A7D70", Offset = "0x31A6D70", VA = "0x31A7D70")]
	private void Reset()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c (EZhex1991.EZSoftBone.EZSoftBoneCollider$$Reset): clean
		Collider pUVar1;

		pUVar1 = this.GetComponent<Collider>();
		this.m_ReferenceCollider = pUVar1;
		return;
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x31A7DC0", Offset = "0x31A6DC0", VA = "0x31A7DC0")]
	public EZSoftBoneCollider()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c (EZhex1991.EZSoftBone.EZSoftBoneCollider$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0753e814 == false) {
			Il2CppMethodInitialized_0753e814 = true;
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
