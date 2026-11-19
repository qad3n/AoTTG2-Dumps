// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBone
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBone.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000005")]
public class EZSoftBone : MonoBehaviour
{
	[Token(Token = "0x2000006")]
	public enum UnificationMode
	{
		[Token(Token = "0x400001F")]
		None,
		[Token(Token = "0x4000020")]
		Rooted,
		[Token(Token = "0x4000021")]
		Unified
	}

	[Token(Token = "0x2000007")]
	public enum DeltaTimeMode
	{
		[Token(Token = "0x4000023")]
		DeltaTime,
		[Token(Token = "0x4000024")]
		UnscaledDeltaTime,
		[Token(Token = "0x4000025")]
		Constant
	}

	[Token(Token = "0x2000008")]
	private class Bone
	{
		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x10")]
		public Bone parentBone;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x18")]
		public Vector3 localPosition;

		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x24")]
		public Quaternion localRotation;

		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x38")]
		public Bone leftBone;

		[Token(Token = "0x400002A")]
		[FieldOffset(Offset = "0x40")]
		public Vector3 leftPosition;

		[Token(Token = "0x400002B")]
		[FieldOffset(Offset = "0x50")]
		public Bone rightBone;

		[Token(Token = "0x400002C")]
		[FieldOffset(Offset = "0x58")]
		public Vector3 rightPosition;

		[Token(Token = "0x400002D")]
		[FieldOffset(Offset = "0x68")]
		public List<Bone> childBones;

		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x70")]
		public Transform transform;

		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x78")]
		public Vector3 worldPosition;

		[Token(Token = "0x4000030")]
		[FieldOffset(Offset = "0x88")]
		public Transform systemSpace;

		[Token(Token = "0x4000031")]
		[FieldOffset(Offset = "0x90")]
		public Vector3 systemPosition;

		[Token(Token = "0x4000032")]
		[FieldOffset(Offset = "0x9C")]
		public int depth;

		[Token(Token = "0x4000033")]
		[FieldOffset(Offset = "0xA0")]
		public float boneLength;

		[Token(Token = "0x4000034")]
		[FieldOffset(Offset = "0xA4")]
		public float treeLength;

		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0xA8")]
		public float normalizedLength;

		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0xAC")]
		public float radius;

		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0xB0")]
		public float damping;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0xB4")]
		public float stiffness;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0xB8")]
		public float resistance;

		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0xBC")]
		public float slackness;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0xC0")]
		public Vector3 speed;

		[Token(Token = "0x600004A")]
		[Address(RVA = "0x31A3F80", Offset = "0x31A2F80", VA = "0x31A3F80")]
		public Bone(Transform systemSpace, Transform transform, IEnumerable<Transform> endBones, int startDepth, int depth, float nodeLength, float boneLength)
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$.ctor): 4 lines keep C-only constructs
			int piVar1;
			float fVar2;
			float fVar3;
			uint uVar4;
			uint uVar5;
			EZSoftBone.Bone[] pEVar6;
			bool bVar8;
			int iVar9;
			List<EZSoftBone.Bone> pSVar10;
			Transform __this_00;
			GameObject __this_01;
			EZSoftBone.Bone __this_02;
			int index;
			float fVar11;
			Quaternion UVar12;
			Vector3 UVar13;
			Vector3 UVar14;
			float local_88;
			float fStack_84;

			pSVar10 = il2cpp_codegen_object_new(typeof(List<EZSoftBone.Bone>)) ;
			pSVar10 = new List<object>();
			this.childBones = pSVar10;
			base();
			this.transform = transform;
			this.systemSpace = systemSpace;
			if (transform == null) {
		label_032a4406: ;
				throw new NullReferenceException();
			}
			UVar13 = transform.position;
			this.worldPosition.x = UVar13.x;
			this.worldPosition.y = UVar13.y;
			this.worldPosition.z = UVar13.z;
			bVar8 = ((Object)systemSpace == null);
			if (bVar8) {
				fVar2 = this.worldPosition.x;
				fVar3 = this.worldPosition.y;
				fVar11 = this.worldPosition.z;
			}
			else {
				if (systemSpace == null) goto label_032a4406;
				UVar13 = systemSpace.InverseTransformPoint((Vector3)this.worldPosition);
				fVar11 = UVar13.z;
				fVar2 = UVar13.x;
				fVar3 = UVar13.y;
			}
			this.systemPosition.x = fVar2;
			this.systemPosition.y = fVar3;
			this.systemPosition.z = fVar11;
			UVar13 = transform.localPosition;
			this.localPosition.x = UVar13.x;
			this.localPosition.y = UVar13.y;
			this.localPosition.z = UVar13.z;
			UVar12 = (Quaternion)transform.localRotation;
			this.localRotation = UVar12;
			this.depth = depth;
			if (startDepth < depth) {
				fVar11 = nodeLength + boneLength;
				this.boneLength = fVar11;
			}
			else {
				fVar11 = this.boneLength;
			}
			fVar2 = this.treeLength;
			if (fVar2 <= fVar11) {
				fVar2 = fVar11;
			}
			this.treeLength = fVar2;
			iVar9 = transform.childCount;
			if ((0 < iVar9) &&(bVar8 = Enumerable.Contains<Transform>((System_Collections_Generic_IEnumerable_TSource__o)endBones, (object)transform), !bVar8)) {
				index = 0;
				iVar9 = transform.childCount;
				if (0 < iVar9) {
					do {
						__this_00 = transform.GetChild(index);
						if ((__this_00 == null) ||(__this_01 = __this_00.gameObject, __this_01 == null)) goto label_032a4406;
						bVar8 = __this_01.activeSelf;
						if (bVar8) {
							UVar13 = __this_00.position;
							UVar14 = transform.position;
							if (Il2CppMethodInitialized_0753e7b7 == false) {
								Il2CppMethodInitialized_0753e7b7 = true;
								uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							else {
								uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							if (uVar4 == 0) {
							}
							local_88 = UVar13.x;
							fStack_84 = UVar13.y;
							fStack_84 = fStack_84 - UVar14.y;
							fVar11 = UVar13.z - UVar14.z;
							local_88 = local_88 - UVar14.x;
							fVar11 = fStack_84 * fStack_84 + local_88 * local_88 + fVar11 * fVar11;
							if (fVar11 < 0.0) {
								fVar11 = sqrtf(fVar11);
							}
							else {
								fVar11 = SQRT(fVar11);
							}
							fVar2 = this.boneLength;
							__this_02 = new EZSoftBone.Bone(systemSpace, __this_00, endBones, startDepth, depth + 1, fVar11, fVar2);
							if (__this_02 == null) goto label_032a4406;
							__this_02.parentBone = this;
							pSVar10 = this.childBones;
							if (pSVar10 == null) goto label_032a4406;
							piVar1 = &pSVar10._version;
							*piVar1 = *piVar1 + 1;
							pEVar6 = pSVar10._items;
							if (pEVar6 == null) goto label_032a4406;
							uVar5 = pSVar10._size;
							if (uVar5 < (uint)pEVar6.Length) {
								pSVar10._size = uVar5 + 1;
								pEVar6[(int)uVar5] = __this_02;
							}
							else {
								pSVar10.AddWithResize((object)__this_02);
							}
							fVar11 = this.treeLength;
							fVar2 = __this_02.treeLength;
							if (fVar11 <= fVar2) {
								fVar11 = fVar2;
							}
							this.treeLength = fVar11;
						}
						index = index + 1;
						iVar9 = transform.childCount;
					} while (index < iVar9);
				}
			}
			fVar11 = this.treeLength;
			fVar2 = 0.0;
			if ((fVar11 != 0.0) || (NAN(fVar11))) {
				fVar2 = this.boneLength / fVar11;
			}
			this.normalizedLength = fVar2;
			return;
		}

		[Token(Token = "0x600004B")]
		[Address(RVA = "0x31A4880", Offset = "0x31A3880", VA = "0x31A4880")]
		public void SetTreeLength()
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength): clean
			this.SetTreeLength(this.treeLength);
			return;
		}

		[Token(Token = "0x600004C")]
		[Address(RVA = "0x31A4890", Offset = "0x31A3890", VA = "0x31A4890")]
		public void SetTreeLength(float treeLength)
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength): clean
			EZSoftBone.Bone __this_00;
			uint index;
			List<EZSoftBone.Bone> __this_01;
			float fVar1;

			this.treeLength = treeLength;
			fVar1 = 0.0;
			if ((treeLength != 0.0) || (NAN(treeLength))) {
				fVar1 = this.boneLength / treeLength;
			}
			this.normalizedLength = fVar1;
			__this_01 = this.childBones;
			if (__this_01 != null) {
				index = 0;
				do {
					if (__this_01._size <= (int)index) {
						return;
					}
					__this_00 = (EZSoftBone.Bone)__this_01.get_Item(index);
					if (__this_00 == null) break;
					__this_00.SetTreeLength(treeLength);
					index = index + 1;
					__this_01 = this.childBones;
				} while (__this_01 != null);
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x600004D")]
		[Address(RVA = "0x31A4820", Offset = "0x31A3820", VA = "0x31A4820")]
		public void SetLeftSibling(Bone left)
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetLeftSibling): clean
			Transform __this_00;
			Vector3 UVar1;

			if ((left != this) && (this.rightBone != left)) {
				this.leftBone = left;
				if ((left == null) ||(__this_00 = this.transform, __this_00 == null)) {
					throw new NullReferenceException();
				}
				UVar1 = (Vector3)__this_00.InverseTransformPoint((Vector3)left.worldPosition) ;
				this.leftPosition = UVar1;
			}
			return;
		}

		[Token(Token = "0x600004E")]
		[Address(RVA = "0x31A47C0", Offset = "0x31A37C0", VA = "0x31A47C0")]
		public void SetRightSibling(Bone right)
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetRightSibling): clean
			Transform __this_00;
			Vector3 UVar1;

			if ((right != this) && (this.leftBone != right)) {
				this.rightBone = right;
				if ((right == null) ||(__this_00 = this.transform, __this_00 == null)) {
					throw new NullReferenceException();
				}
				UVar1 = (Vector3)__this_00.InverseTransformPoint((Vector3)right.worldPosition);
				this.rightPosition = UVar1;
			}
			return;
		}

		[Token(Token = "0x600004F")]
		[Address(RVA = "0x31A4970", Offset = "0x31A3970", VA = "0x31A4970")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve)
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate): clean
			List<EZSoftBone.Bone> __this_00;
			EZSoftBone.Bone __this_01;
			int index;
			float fVar1;

			if (radiusCurve != null) {
				index = 0;
				fVar1 = radiusCurve.Evaluate(this.normalizedLength);
				this.radius = fVar1 * baseRadius;
				__this_00 = this.childBones;
				while (__this_00 != null) {
					if (__this_00._size <= index) {
						return;
					}
					__this_01 = (EZSoftBone.Bone)__this_00.get_Item(index);
					if (__this_01 == null) break;
					__this_01.Inflate(baseRadius, radiusCurve);
					index = index + 1;
					__this_00 = this.childBones;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000050")]
		[Address(RVA = "0x31A4A40", Offset = "0x31A3A40", VA = "0x31A4A40")]
		public void Inflate(float baseRadius, AnimationCurve radiusCurve, EZSoftBoneMaterial material)
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate): clean
			AnimationCurve pUVar1;
			List<EZSoftBone.Bone> __this_00;
			EZSoftBone.Bone __this_01;
			int index;
			float fVar2;
			float fVar3;

			if (radiusCurve != null) {
				fVar2 = radiusCurve.Evaluate(this.normalizedLength);
				this.radius = fVar2 * baseRadius;
				if ((material != null) &&(pUVar1 = material.m_DampingCurve, pUVar1 != null)) {
					fVar2 = material.m_Damping;
					fVar3 = pUVar1.Evaluate(this.normalizedLength) ;
					this.damping = fVar3 * fVar2;
					pUVar1 = material.m_StiffnessCurve;
					if (pUVar1 != null) {
						fVar2 = material.m_Stiffness;
						fVar3 = pUVar1.Evaluate(this.normalizedLength);
						this.stiffness = fVar3 * fVar2;
						pUVar1 = material.m_ResistanceCurve;
						if (pUVar1 != null) {
							fVar2 = material.m_Resistance;
							fVar3 = pUVar1.Evaluate(this.normalizedLength);
							this.resistance = fVar3 * fVar2;
							pUVar1 = material.m_SlacknessCurve;
							if (pUVar1 != null) {
								fVar2 = material.m_Slackness;
								index = 0;
								fVar3 = pUVar1.Evaluate(this.normalizedLength);
								this.slackness = fVar3 * fVar2;
								__this_00 = this.childBones;
								while (__this_00 != null) {
									if (__this_00._size <= index) {
										return;
									}
									__this_01 = (EZSoftBone.Bone)__this_00.get_Item(index);
									if (__this_01 == null) break;
									__this_01.Inflate(baseRadius, radiusCurve, material);
									index = index + 1;
									__this_00 = this.childBones;
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000051")]
		[Address(RVA = "0x31A36F0", Offset = "0x31A26F0", VA = "0x31A36F0")]
		public void RevertTransforms(int startDepth)
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$RevertTransforms): clean
			Transform pUVar1;
			EZSoftBone.Bone __this_00;
			int index;
			List<EZSoftBone.Bone> __this_01;

			if (startDepth < this.depth) {
				pUVar1 = this.transform;
				if (pUVar1 == null) goto label_032a37aa;
				pUVar1.localPosition = (Vector3)this.localPosition;
				pUVar1 = this.transform;
				if (pUVar1 == null) goto label_032a37aa;
				pUVar1.localRotation = (Quaternion)this.localRotation;
			}
			__this_01 = this.childBones;
			if (__this_01 != null) {
				index = 0;
				do {
					if (__this_01._size <= index) {
						return;
					}
					__this_00 = (EZSoftBone.Bone)__this_01.get_Item(index);
					if (__this_00 == null) break;
					__this_00.RevertTransforms(startDepth);
					index = index + 1;
					__this_01 = this.childBones;
				} while (__this_01 != null);
			}
		label_032a37aa: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000052")]
		[Address(RVA = "0x31A6360", Offset = "0x31A5360", VA = "0x31A6360")]
		public void UpdateTransform(bool siblingRotationConstraints, int startDepth)
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateTransform): 67 lines keep C-only constructs
			uint uVar1;
			uint uVar2;
			uint uVar3;
			uint uVar4;
			uint uVar5;
			uint uVar6;
			uint uVar7;
			uint uVar8;
			uint uVar9;
			uint uVar10;
			uint uVar11;
			uint uVar12;
			uint uVar13;
			uint uVar14;
			uint uVar15;
			uint uVar16;
			uint uVar17;
			uint uVar18;
			uint uVar19;
			uint uVar20;
			uint uVar21;
			uint uVar22;
			Transform __this_00;
			bool bVar23;
			object pIVar24;
			EZSoftBone.Bone pEVar25;
			int index;
			Transform pUVar26;
			List<EZSoftBone.Bone> pSVar27;
			float fVar28;
			float fVar29;
			float fVar30;
			uint extraout_XMM0_Dc;
			uint extraout_XMM0_Dc_00;
			uint extraout_XMM0_Dc_01;
			uint extraout_XMM0_Dc_02;
			uint extraout_XMM0_Dc_03;
			uint extraout_XMM0_Dd;
			uint extraout_XMM0_Dd_00;
			uint extraout_XMM0_Dd_01;
			uint extraout_XMM0_Dd_02;
			uint extraout_XMM0_Dd_03;
			float fVar31;
			uint in_XMM1_Dc;
			uint uVar32;
			uint in_XMM1_Dd;
			uint uVar33;
			float fVar34;
			float fVar36;
			ulong uVar35;
			float fVar37;
			Quaternion UVar38;
			Quaternion value;
			Vector3 UVar39;
			Vector3 vector;
			Vector3 vector_00;
			Vector3 vector_01;
			Quaternion local_b8;
			Quaternion local_a8;
			Quaternion local_98;
			byte[] local_88 = new byte[16];
			Quaternion local_78;
			Quaternion local_68;
			byte[] local_58 = new byte[16];
			byte[] local_48 = new byte[24];

			if (startDepth < this.depth) {
				pSVar27 = this.childBones;
				if (pSVar27 == null) goto label_032a69fc;
				if (pSVar27._size != 1) goto label_032a692a;
				pIVar24 = pSVar27.get_Item(0);
				pUVar26 = this.transform;
				if (pUVar26 == null) goto label_032a69fc;
				UVar38 = pUVar26.rotation;
				if (pIVar24 == null) goto label_032a69fc;
				local_98.z = in_XMM1_Dc;
				local_98._0_8_ = UVar38._8_8_;
				local_98.w = in_XMM1_Dd;
				local_88._8_4_ = extraout_XMM0_Dc;
				local_88._0_8_ = UVar38._0_8_;
				local_88._12_4_ = extraout_XMM0_Dd;
				__this_00 = this.transform;
				if (__this_00 == null) goto label_032a69fc;
				UVar39.z = *(float)&pIVar24[8].klass - this.worldPosition.z;
				uVar1 = this.worldPosition.x;
				uVar12 = this.worldPosition.y;
				UVar39.x = SUB84(pIVar24[7].monitor, 0) - (float)uVar1;
				UVar39.y = (float)((ulong)pIVar24[7].monitor >> 0x20) - (float)uVar12;
				local_68.x = (float)*(uint)&pIVar24[2].klass;
				local_78._0_8_ = pIVar24[1].monitor;
				UVar39 = __this_00.InverseTransformVector(UVar39);
				local_b8.z = UVar39.z;
				local_a8.x = local_78.x;
				local_a8.y = local_78.y;
				local_a8.z = local_68.x;
				local_b8._0_8_ = UVar39._0_8_;
				UVar38 = Quaternion.Internal_FromToRotation(ref local_a8, ref local_b8);
				fVar30 = UVar38.z;
				fVar36 = UVar38.w;
				fVar29 = UVar38.x;
				fVar34 = UVar38.y;
				UVar38.z =(local_98.x * fVar36 + local_98.y * fVar30 + fVar34 * (float)local_88._0_4_) - fVar29 * (float)local_88._4_4_;
				UVar38.y =(local_98.y * fVar34 + (float)local_88._4_4_ * fVar36 + local_98.x * fVar29) - fVar30 * (float)local_88._0_4_;
				UVar38.x =(local_98.y * fVar29 + (float)local_88._0_4_ * fVar36 + (float)local_88._4_4_ * fVar30) - fVar34 * local_98.x;
				UVar38.w =((fVar36 * local_98.y - (float)local_88._0_4_ * fVar29) - (float)local_88._4_4_ * fVar34) - fVar30 * local_98.x;
				pUVar26.rotation = UVar38;
				if (siblingRotationConstraints) {
					pEVar25 = this.leftBone;
					method = (MethodInfo)this.rightBone;
					if (pEVar25 == null) {
						if ((EZSoftBone.Bone)method != null) {
							pUVar26 = this.transform;
							if (pUVar26 == null) goto label_032a69fc;
							fVar30 = (((EZSoftBone.Bone)method).fields).worldPosition.z -this.worldPosition.z;
							uVar8 = (((EZSoftBone.Bone)method).fields).worldPosition.x;
							uVar19 = (((EZSoftBone.Bone)method).fields).worldPosition.y;
							uVar9 = this.worldPosition.x;
							uVar20 = this.worldPosition.y;
							fVar29 = (float)uVar8 - (float)uVar9;
							fVar34 = (float)uVar19 - (float)uVar20;
							local_88._0_4_ = this.rightPosition.z;
							uVar35._0_4_ = this.rightPosition.x;
							uVar35._4_4_ = this.rightPosition.y;
							goto label_032a680f;
						}
					}
					else {
						pUVar26 = this.transform;
						if ((EZSoftBone.Bone)method == null) {
							if (pUVar26 == null) goto label_032a69fc;
							fVar30 = pEVar25.worldPosition.z - this.worldPosition.z;
							uVar10 = pEVar25.worldPosition.x;
							uVar21 = pEVar25.worldPosition.y;
							uVar11 = this.worldPosition.x;
							uVar22 = this.worldPosition.y;
							fVar29 = (float)uVar10 - (float)uVar11;
							fVar34 = (float)uVar21 - (float)uVar22;
							local_88._0_4_ = this.leftPosition.z;
							uVar35._0_4_ = this.leftPosition.x;
							uVar35._4_4_ = this.leftPosition.y;
		label_032a680f: ;
							uVar33 = 0;
							uVar32 = 0;
							local_98.x = (float)(int)uVar35;
							local_98.y = (float)(int)((ulong)uVar35 >> 0x20);
							vector_01.y = fVar34;
							vector_01.x = fVar29;
							vector_01.z = fVar30;
							UVar39 = pUVar26.InverseTransformVector(vector_01);
							local_b8.z = UVar39.z;
							local_a8.x = local_98.x;
							local_a8.y = local_98.y;
							local_a8.z = (float)local_88._0_4_;
							local_b8._0_8_ = UVar39._0_8_;
							UVar38 = Quaternion.Internal_FromToRotation(ref local_a8, ref local_b8);
							local_88._8_4_ = extraout_XMM0_Dc_03;
							local_88._0_8_ = UVar38._0_8_;
							local_88._12_4_ = extraout_XMM0_Dd_03;
							local_98.z = uVar32;
							local_98._0_8_ = UVar38._8_8_;
							local_98.w = uVar33;
							pUVar26 = this.transform;
							if (pUVar26 == null) goto label_032a69fc;
							UVar38 = pUVar26.rotation;
							fVar28 = UVar38.z;
							fVar31 = UVar38.w;
							fVar29 = UVar38.x;
							fVar30 = UVar38.y;
							fVar34 = ((float)local_88._0_4_ * fVar31 + local_98.y * fVar29 + fVar30 * local_98.x) - fVar28 * (float)local_88._4_4_;
							fVar36 = ((float)local_88._4_4_ * fVar31 + local_98.y * fVar30 + (float)local_88._0_4_ * fVar28) - fVar29 * local_98.x;
							fVar37 = ((local_98.y * fVar31 - (float)local_88._0_4_ * fVar29) - (float)local_88._4_4_ * fVar30) - local_98.x * fVar28;
							fVar29 = (fVar31 * local_98.x + fVar28 * local_98.y + (float)local_88._4_4_ * fVar29) -(float)local_88._0_4_ * fVar30;
						}
						else {
							if (pUVar26 == null) goto label_032a69fc;
							uVar32 = 0;
							uVar33 = 0;
							vector.z = pEVar25.worldPosition.z - this.worldPosition.z ;
							uVar2 = pEVar25.worldPosition.x;
							uVar13 = pEVar25.worldPosition.y;
							uVar3 = this.worldPosition.x;
							uVar14 = this.worldPosition.y;
							vector.x = (float)uVar2 - (float)uVar3;
							vector.y = (float)uVar13 - (float)uVar14;
							local_88._0_4_ = this.leftPosition.z;
							uVar4 = this.leftPosition.x;
							uVar15 = this.leftPosition.y;
							local_98.y = (float)uVar15;
							local_98.x = (float)uVar4;
							UVar39 = pUVar26.InverseTransformVector(vector);
							local_b8.z = UVar39.z;
							local_a8.x = local_98.x;
							local_a8.y = local_98.y;
							local_a8.z = (float)local_88._0_4_;
							local_b8._0_8_ = UVar39._0_8_;
							UVar38 = Quaternion.Internal_FromToRotation(ref local_a8, ref local_b8);
							pEVar25 = this.rightBone;
							if (pEVar25 == null) goto label_032a69fc;
							local_98.z = uVar32;
							local_98._0_8_ = UVar38._8_8_;
							local_98.w = uVar33;
							local_88._8_4_ = extraout_XMM0_Dc_00;
							local_88._0_8_ = UVar38._0_8_;
							local_88._12_4_ = extraout_XMM0_Dd_00;
							pUVar26 = this.transform;
							if (pUVar26 == null) goto label_032a69fc;
							uVar5 = this.rightPosition.x;
							uVar16 = this.rightPosition.y;
							local_68.y = (float)uVar16;
							local_68.x = (float)uVar5;
							local_68.z = 0.0;
							local_68.w = 0.0;
							uVar32 = 0;
							uVar33 = 0;
							vector_00.z =pEVar25.worldPosition.z - this.worldPosition.z;
							local_78.x = this.rightPosition.z;
							uVar6 = pEVar25.worldPosition.x;
							uVar17 = pEVar25.worldPosition.y;
							uVar7 = this.worldPosition.x;
							uVar18 = this.worldPosition.y;
							vector_00.x = (float)uVar6 - (float)uVar7;
							vector_00.y = (float)uVar17 - (float)uVar18;
							UVar39 = pUVar26.InverseTransformVector(vector_00);
							local_b8.z = UVar39.z;
							local_a8.x = local_68.x;
							local_a8.y = local_68.y;
							local_a8.z = local_78.x;
							local_b8._0_8_ = UVar39._0_8_;
							UVar38 = Quaternion.Internal_FromToRotation(ref local_a8, ref local_b8);
							local_68.z = (float)extraout_XMM0_Dc_01;
							local_68._0_8_ = UVar38._0_8_;
							local_68.w = (float)extraout_XMM0_Dd_01;
							local_78.z = uVar32;
							local_78._0_8_ = UVar38._8_8_;
							local_78.w = uVar33;
							pUVar26 = this.transform;
							if (pUVar26 == null) goto label_032a69fc;
							UVar38 = pUVar26.rotation;
							local_48._8_4_ = extraout_XMM0_Dc_02;
							local_48._0_8_ = UVar38._0_8_;
							local_48._12_4_ = extraout_XMM0_Dd_02;
							local_58._8_4_ = uVar32;
							local_58._0_8_ = UVar38._8_8_;
							local_58._12_4_ = uVar33;
							local_a8.z = local_98.x;
							local_a8.w = local_98.y;
							local_a8._0_8_ = local_88._0_8_;
							local_b8.z = local_78.x;
							local_b8.w = local_78.y;
							local_b8._0_8_ = local_68._0_8_;
							UVar38 = Quaternion.Internal_Lerp(ref local_a8, ref local_b8, 0.5);
							fVar28 = UVar38.z;
							fVar31 = UVar38.w;
							fVar29 = UVar38.x;
							fVar30 = UVar38.y;
							fVar34 = ((float)local_58._4_4_ * fVar29 + (float)local_48._0_4_ * fVar31 +(float)local_48._4_4_ * fVar28) - fVar30 * (float)local_58._0_4_;
							fVar36 = ((float)local_58._4_4_ * fVar30 + (float)local_48._4_4_ * fVar31 +(float)local_58._0_4_ * fVar29) - fVar28 * (float)local_48._0_4_;
							fVar37 = ((fVar31 * (float)local_58._4_4_ - (float)local_48._0_4_ * fVar29) -(float)local_48._4_4_ * fVar30) - (float)local_58._0_4_ * fVar28;
							fVar29 = ((float)local_58._0_4_ * fVar31 + (float)local_58._4_4_ * fVar28 + fVar30 * (float)local_48._0_4_) - fVar29 * (float)local_48._4_4_;
						}
						value.y = fVar36;
						value.x = fVar34;
						value.w = fVar37;
						value.z = fVar29;
						pUVar26.rotation = value;
					}
				}
		label_032a692a: ;
				pUVar26 = this.transform;
				if (pUVar26 == null) goto label_032a69fc;
				pUVar26.position = (Vector3)this.worldPosition;
			}
			pUVar26 = this.systemSpace;
			bVar23 = ((Object)pUVar26 != null);
			if (bVar23) {
				pUVar26 = this.systemSpace;
				if (pUVar26 == null) goto label_032a69fc;
				UVar39 = pUVar26.InverseTransformPoint((Vector3)this.worldPosition);
				this.systemPosition.x = UVar39.x;
				this.systemPosition.y = UVar39.y;
				this.systemPosition.z = UVar39.z;
			}
			pSVar27 = this.childBones;
			if (pSVar27 != null) {
				index = 0;
				do {
					if (pSVar27._size <= index) {
						return;
					}
					pEVar25 = (EZSoftBone.Bone)pSVar27.get_Item(index);
					if (pEVar25 == null) break;
					pEVar25.UpdateTransform(siblingRotationConstraints, startDepth);
					index = index + 1;
					pSVar27 = this.childBones;
				} while (pSVar27 != null);
			}
		label_032a69fc: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000053")]
		[Address(RVA = "0x31A3DF0", Offset = "0x31A2DF0", VA = "0x31A3DF0")]
		public void SetRestState()
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetRestState): clean
			float fVar1;
			Transform pUVar2;
			float fVar4;
			bool bVar5;
			EZSoftBone.Bone __this_00;
			uint index;
			List<EZSoftBone.Bone> __this_01;
			Vector3 UVar6;

			pUVar2 = this.transform;
			if (pUVar2 != null) {
				UVar6 = (Vector3)pUVar2.position;
				this.worldPosition = UVar6;
				pUVar2 = this.systemSpace;
				bVar5 = ((Object)pUVar2 == null);
				if (bVar5) {
					fVar4 = this.worldPosition.y;
					fVar1 = this.worldPosition.z;
					this.systemPosition.x = this.worldPosition.x;
					this.systemPosition.y = fVar4;
					this.systemPosition.z = fVar1;
				}
				else {
					pUVar2 = this.systemSpace;
					if (pUVar2 == null) goto label_032a3f67;
					UVar6 = (Vector3)pUVar2.InverseTransformPoint((Vector3)this.worldPosition);
					this.systemPosition = UVar6;
				}
				fVar4 = (Vector3.zeroVector).y;
				fVar1 = (Vector3.zeroVector).z;
				this.speed.x = (Vector3.zeroVector).x;
				this.speed.y = fVar4;
				this.speed.z = fVar1;
				__this_01 = this.childBones;
				if (__this_01 != null) {
					index = 0;
					do {
						if (__this_01._size <= (int)index) {
							return;
						}
						__this_00 = (EZSoftBone.Bone)__this_01.get_Item(index);
						if (__this_00 == null) break;
						__this_00.SetRestState();
						index = index + 1;
						__this_01 = this.childBones;
					} while (__this_01 != null);
				}
			}
		label_032a3f67: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000054")]
		[Address(RVA = "0x31A4C10", Offset = "0x31A3C10", VA = "0x31A4C10")]
		public void UpdateSpace()
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateSpace): clean
			Transform pUVar1;
			List<EZSoftBone.Bone> __this_00;
			bool bVar2;
			EZSoftBone.Bone __this_01;
			uint index;
			Vector3 UVar3;

			pUVar1 = this.systemSpace;
			bVar2 = ((Object)pUVar1 == null);
			if (bVar2) {
				return;
			}
			pUVar1 = this.systemSpace;
			if (pUVar1 != null) {
				index = 0;
				UVar3 = (Vector3)pUVar1.TransformPoint((Vector3)this.systemPosition) ;
				this.worldPosition = UVar3;
				__this_00 = this.childBones;
				while (__this_00 != null) {
					if (__this_00._size <= (int)index) {
						return;
					}
					__this_01 = (EZSoftBone.Bone)__this_00.get_Item(index);
					if (__this_01 == null) break;
					__this_01.UpdateSpace();
					index = index + 1;
					__this_00 = this.childBones;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float DeltaTime_Min;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<Transform> m_RootBones;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private List<Transform> m_EndBones;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private EZSoftBoneMaterial m_Material;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x38")]
	private EZSoftBoneMaterial m_InstanceMaterial;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private int m_StartDepth;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private UnificationMode m_SiblingConstraints;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private bool m_ClosedSiblings;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x49")]
	[SerializeField]
	private bool m_SiblingRotationConstraints;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private UnificationMode m_LengthUnification;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private LayerMask m_CollisionLayers;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private List<Collider> m_ExtraColliders;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private float m_Radius;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_RadiusCurve;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private DeltaTimeMode m_DeltaTimeMode;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	private float m_ConstantDeltaTime;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	[Range(1f, 10f)]
	private int m_Iterations;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private float m_SleepThreshold;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private Transform m_GravityAligner;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private Vector3 m_Gravity;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private EZSoftBoneForceField m_ForceModule;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private float m_ForceScale;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private Transform m_SimulateSpace;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0xC0")]
	public CustomForce customForce;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0xC8")]
	private List<Bone> m_Structures;

	[Token(Token = "0x17000001")]
	public List<Transform> rootBones
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x31A28B0", Offset = "0x31A18B0", VA = "0x31A28B0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_rootBones): clean
			return this.m_RootBones;
		}
	}

	[Token(Token = "0x17000002")]
	public List<Transform> endBones
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x31A28C0", Offset = "0x31A18C0", VA = "0x31A28C0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_endBones): clean
			return this.m_EndBones;
		}
	}

	[Token(Token = "0x17000003")]
	public EZSoftBoneMaterial sharedMaterial
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x31A28D0", Offset = "0x31A18D0", VA = "0x31A28D0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_sharedMaterial): 2 lines keep C-only constructs
			bool bVar1;
			EZSoftBoneMaterial pEVar2;
			EZSoftBoneMaterial* targetAddress;
			MethodInfo method_00;

			method_00 = (MethodInfo)this.m_Material;
			targetAddress = &this.m_Material;
			bVar1 = ((Object)method_00 == null);
			if (bVar1) {
				pEVar2 = EZSoftBoneMaterial.defaultMaterial;
				*targetAddress = pEVar2;
			}
			return *targetAddress;
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x31A2A40", Offset = "0x31A1A40", VA = "0x31A2A40")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_sharedMaterial): clean
			this.m_Material = value;
			return;
		}
	}

	[Token(Token = "0x17000004")]
	public EZSoftBoneMaterial material
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x31A2A50", Offset = "0x31A1A50", VA = "0x31A2A50")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_material): 5 lines keep C-only constructs
			EZSoftBoneMaterial* targetAddress;
			bool bVar1;
			EZSoftBoneMaterial pEVar2;
			MethodInfo method_00;
			EZSoftBoneMaterial* targetAddress_00;

			pEVar2 = this.m_InstanceMaterial;
			targetAddress = &this.m_InstanceMaterial;
			bVar1 = ((Object)pEVar2 == null);
			if (bVar1) {
				method_00 = (MethodInfo)this.m_Material;
				targetAddress_00 = &this.m_Material;
				bVar1 = ((Object)method_00 == null);
				if (bVar1) {
					pEVar2 = EZSoftBoneMaterial.defaultMaterial;
					*targetAddress_00 = pEVar2;
				}
				pEVar2 = *targetAddress_00;
				pEVar2 = Object.Instantiate<EZSoftBoneMaterial>((object)pEVar2);
				*targetAddress_00 = pEVar2;
				*targetAddress = pEVar2;
			}
			return *targetAddress;
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x31A2B70", Offset = "0x31A1B70", VA = "0x31A2B70")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_material): clean
			this.m_Material = value;
			this.m_InstanceMaterial = value;
			return;
		}
	}

	[Token(Token = "0x17000005")]
	public int startDepth
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x31A2BB0", Offset = "0x31A1BB0", VA = "0x31A2BB0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_startDepth): clean
			return this.m_StartDepth;
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x31A2BC0", Offset = "0x31A1BC0", VA = "0x31A2BC0")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_startDepth): clean
			this.m_StartDepth = value;
			return;
		}
	}

	[Token(Token = "0x17000006")]
	public UnificationMode siblingConstraints
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x31A2BD0", Offset = "0x31A1BD0", VA = "0x31A2BD0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_siblingConstraints): clean
			return this.m_SiblingConstraints;
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x31A2BE0", Offset = "0x31A1BE0", VA = "0x31A2BE0")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_siblingConstraints): clean
			this.m_SiblingConstraints = value;
			return;
		}
	}

	[Token(Token = "0x17000007")]
	public bool closedSiblings
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x31A2BF0", Offset = "0x31A1BF0", VA = "0x31A2BF0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_closedSiblings): clean
			return this.m_ClosedSiblings;
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x31A2C00", Offset = "0x31A1C00", VA = "0x31A2C00")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_closedSiblings): clean
			this.m_ClosedSiblings = value;
			return;
		}
	}

	[Token(Token = "0x17000008")]
	public bool siblingRotationConstraints
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x31A2C10", Offset = "0x31A1C10", VA = "0x31A2C10")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_siblingRotationConstraints): clean
			return this.m_SiblingRotationConstraints;
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x31A2C20", Offset = "0x31A1C20", VA = "0x31A2C20")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_siblingRotationConstraints): clean
			this.m_SiblingRotationConstraints = value;
			return;
		}
	}

	[Token(Token = "0x17000009")]
	public UnificationMode lengthUnification
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x31A2C30", Offset = "0x31A1C30", VA = "0x31A2C30")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_lengthUnification): clean
			return this.m_LengthUnification;
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x31A2C40", Offset = "0x31A1C40", VA = "0x31A2C40")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_lengthUnification): clean
			this.m_LengthUnification = value;
			return;
		}
	}

	[Token(Token = "0x1700000A")]
	public LayerMask collisionLayers
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x31A2C50", Offset = "0x31A1C50", VA = "0x31A2C50")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_collisionLayers): clean
			return (LayerMask)(LayerMask)this.m_CollisionLayers.m_Mask;
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x31A2C60", Offset = "0x31A1C60", VA = "0x31A2C60")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_collisionLayers): clean
			this.m_CollisionLayers.m_Mask = (int32_t)value.m_Mask;
			return;
		}
	}

	[Token(Token = "0x1700000B")]
	public List<Collider> extraColliders
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x31A2C70", Offset = "0x31A1C70", VA = "0x31A2C70")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_extraColliders): clean
			return this.m_ExtraColliders;
		}
	}

	[Token(Token = "0x1700000C")]
	public float radius
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x31A2C80", Offset = "0x31A1C80", VA = "0x31A2C80")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_radius): clean
			return this.m_Radius;
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x31A2C90", Offset = "0x31A1C90", VA = "0x31A2C90")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_radius): clean
			this.m_Radius = value;
			return;
		}
	}

	[Token(Token = "0x1700000D")]
	public AnimationCurve radiusCurve
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x31A2CA0", Offset = "0x31A1CA0", VA = "0x31A2CA0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_radiusCurve): clean
			return this.m_RadiusCurve;
		}
	}

	[Token(Token = "0x1700000E")]
	public DeltaTimeMode deltaTimeMode
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x31A2CB0", Offset = "0x31A1CB0", VA = "0x31A2CB0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_deltaTimeMode): clean
			return this.m_DeltaTimeMode;
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x31A2CC0", Offset = "0x31A1CC0", VA = "0x31A2CC0")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_deltaTimeMode): clean
			this.m_DeltaTimeMode = value;
			return;
		}
	}

	[Token(Token = "0x1700000F")]
	public float constantDeltaTime
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x31A2CD0", Offset = "0x31A1CD0", VA = "0x31A2CD0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_constantDeltaTime): clean
			return this.m_ConstantDeltaTime;
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x31A2CE0", Offset = "0x31A1CE0", VA = "0x31A2CE0")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_constantDeltaTime): clean
			this.m_ConstantDeltaTime = value;
			return;
		}
	}

	[Token(Token = "0x17000010")]
	public int iterations
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x31A2CF0", Offset = "0x31A1CF0", VA = "0x31A2CF0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_iterations): clean
			return this.m_Iterations;
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x31A2D00", Offset = "0x31A1D00", VA = "0x31A2D00")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_iterations): clean
			this.m_Iterations = value;
			return;
		}
	}

	[Token(Token = "0x17000011")]
	public float sleepThreshold
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x31A2D10", Offset = "0x31A1D10", VA = "0x31A2D10")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_sleepThreshold): clean
			return this.m_SleepThreshold;
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x31A2D20", Offset = "0x31A1D20", VA = "0x31A2D20")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_sleepThreshold): clean
			float fVar1;

			fVar1 = 0.0;
			if (0.0 <= value) {
				fVar1 = value;
			}
			this.m_SleepThreshold = fVar1;
			return;
		}
	}

	[Token(Token = "0x17000012")]
	public Transform gravityAligner
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x31A2D30", Offset = "0x31A1D30", VA = "0x31A2D30")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_gravityAligner): clean
			return this.m_GravityAligner;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x31A2D40", Offset = "0x31A1D40", VA = "0x31A2D40")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_gravityAligner): clean
			this.m_GravityAligner = value;
			return;
		}
	}

	[Token(Token = "0x17000013")]
	public Vector3 gravity
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x31A2D50", Offset = "0x31A1D50", VA = "0x31A2D50")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_gravity): clean
			return (Vector3)this.m_Gravity;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x31A2D70", Offset = "0x31A1D70", VA = "0x31A2D70")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_gravity): clean
			this.m_Gravity.x = value.x;
			this.m_Gravity.y = value.y;
			this.m_Gravity.z = value.z;
			return;
		}
	}

	[Token(Token = "0x17000014")]
	public EZSoftBoneForceField forceModule
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x31A2D80", Offset = "0x31A1D80", VA = "0x31A2D80")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_forceModule): clean
			return this.m_ForceModule;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x31A2D90", Offset = "0x31A1D90", VA = "0x31A2D90")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_forceModule): clean
			this.m_ForceModule = value;
			return;
		}
	}

	[Token(Token = "0x17000015")]
	public float forceScale
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x31A2DB0", Offset = "0x31A1DB0", VA = "0x31A2DB0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_forceScale): clean
			return this.m_ForceScale;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x31A2DC0", Offset = "0x31A1DC0", VA = "0x31A2DC0")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_forceScale): clean
			this.m_ForceScale = value;
			return;
		}
	}

	[Token(Token = "0x17000016")]
	public Transform simulateSpace
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x31A2DD0", Offset = "0x31A1DD0", VA = "0x31A2DD0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_simulateSpace): clean
			return this.m_SimulateSpace;
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x31A2DE0", Offset = "0x31A1DE0", VA = "0x31A2DE0")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_simulateSpace): clean
			this.m_SimulateSpace = value;
			return;
		}
	}

	[Token(Token = "0x17000017")]
	public float globalRadius
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x31A2E00", Offset = "0x31A1E00", VA = "0x31A2E00")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_globalRadius): clean
			return this._globalRadius_k__BackingField;
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x31A2E10", Offset = "0x31A1E10", VA = "0x31A2E10")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_globalRadius): clean
			this._globalRadius_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000018")]
	public Vector3 globalForce
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x31A2E20", Offset = "0x31A1E20", VA = "0x31A2E20")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$get_globalForce): clean
			return (Vector3)this._globalForce_k__BackingField;
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x31A2E40", Offset = "0x31A1E40", VA = "0x31A2E40")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$set_globalForce): clean
			this._globalForce_k__BackingField.x = value.x;
			this._globalForce_k__BackingField.y = value.y;
			this._globalForce_k__BackingField.z = value.z;
			return;
		}
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x31A2E50", Offset = "0x31A1E50", VA = "0x31A2E50")]
	private void Start()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$Start): clean
		this.CreateBones();
		this.SetSiblings();
		this.SetTreeLength();
		this.RefreshRadius();
		return;
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x31A2EB0", Offset = "0x31A1EB0", VA = "0x31A2EB0")]
	private void OnEnable()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$OnEnable): clean
		this.SetRestState();
		return;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x31A2F50", Offset = "0x31A1F50", VA = "0x31A2F50")]
	private void Update()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$Update): clean


		this.RevertTransforms(this.m_StartDepth);
		return;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x31A2FF0", Offset = "0x31A1FF0", VA = "0x31A2FF0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$LateUpdate): clean
		int iVar1;
		float deltaTime;

		iVar1 = this.m_DeltaTimeMode;
		if (iVar1 == 2) {
			deltaTime = this.m_ConstantDeltaTime;
		}
		else if (iVar1 == 1) {
			deltaTime = Time.unscaledDeltaTime;
		}
		else {
			if (iVar1 != 0) goto label_032a3024;
			deltaTime = Time.deltaTime;
		}
		this.UpdateStructures(deltaTime);
	label_032a3024: ;
		this.UpdateTransforms();
		return;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x31A36D0", Offset = "0x31A26D0", VA = "0x31A36D0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$OnDisable): clean


		this.RevertTransforms(this.m_StartDepth);
		return;
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x31A36E0", Offset = "0x31A26E0", VA = "0x31A36E0")]
	public void RevertTransforms()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms): clean


		this.RevertTransforms(this.m_StartDepth);
		return;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x31A2F60", Offset = "0x31A1F60", VA = "0x31A2F60")]
	public void RevertTransforms(int startDepth)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms): clean
		EZSoftBone.Bone __this_00;
		int index;
		List<EZSoftBone.Bone> __this_01;

		__this_01 = this.m_Structures;
		if (__this_01 != null) {
			index = 0;
			do {
				if (__this_01._size <= index) {
					return;
				}
				__this_00 = (EZSoftBone.Bone)__this_01.get_Item(index);
				if (__this_00 == null) break;
				__this_00.RevertTransforms(startDepth);
				index = index + 1;
				__this_01 = this.m_Structures;
			} while (__this_01 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x31A2E80", Offset = "0x31A1E80", VA = "0x31A2E80")]
	public void InitStructures()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$InitStructures): clean
		this.CreateBones();
		this.SetSiblings();
		this.SetTreeLength();
		this.RefreshRadius();
		return;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x31A2EC0", Offset = "0x31A1EC0", VA = "0x31A2EC0")]
	public void SetRestState()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$SetRestState): clean
		EZSoftBone.Bone __this_00;
		uint index;
		List<EZSoftBone.Bone> __this_01;

		__this_01 = this.m_Structures;
		if (__this_01 != null) {
			index = 0;
			do {
				if (__this_01._size <= (int)index) {
					return;
				}
				__this_00 = (EZSoftBone.Bone)__this_01.get_Item(index);
				if (__this_00 == null) break;
				__this_00.SetRestState();
				index = index + 1;
				__this_01 = this.m_Structures;
			} while (__this_01 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x31A37C0", Offset = "0x31A27C0", VA = "0x31A37C0")]
	private void CreateBones()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$CreateBones): 6 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		List<EZSoftBone.Bone> pSVar4;
		EZSoftBone.Bone[] pEVar5;
		bool bVar7;
		Transform pUVar8;
		Transform transform;
		EZSoftBone.Bone __this_00;
		int index;
		List<Transform> pSVar9;

		if (Il2CppMethodInitialized_0753e7fe == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item) ;
			Il2CppMethodInitialized_0753e7fe = true;
		}
		pSVar4 = this.m_Structures;
		if (pSVar4 != null) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			iVar2 = pSVar4._size;
			pSVar4._size = 0;
			if (0 < iVar2) {
				Array.Clear((Array)pSVar4._items, 0, iVar2);
			}
			pSVar9 = this.m_RootBones;
			if ((pSVar9 == null) || (pSVar9._size == 0)) {
				return;
			}
			index = 0;
			do {
				if (pSVar9._size <= index) {
					return;
				}
				pUVar8 = pSVar9.get_Item(index) ;
				bVar7 = ((Object)pUVar8 == null);
				if (!bVar7) {
					pSVar9 = this.m_RootBones;
					if (pSVar9 == null) break;
					pUVar8 = this.m_SimulateSpace;
					transform = pSVar9.get_Item(index);
					pSVar9 = this.m_EndBones;
					iVar2 = this.m_StartDepth;
					__this_00 = new EZSoftBone.Bone(pUVar8, transform, (System_Collections_Generic_IEnumerable_Transform__o)pSVar9, iVar2, 0, 0.0, 0.0);
					pSVar4 = this.m_Structures;
					if (pSVar4 == null) break;
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pEVar5 = pSVar4._items;
					if (pEVar5 == null) break;
					uVar3 = pSVar4._size;
					if (uVar3 < (uint)pEVar5.Length) {
						pSVar4._size = uVar3 + 1;
						pEVar5[(int)uVar3] = __this_00;
					}
					else {
						pSVar4.AddWithResize((object)__this_00);
					}
				}
				index = index + 1;
				pSVar9 = this.m_RootBones;
			} while (pSVar9 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x31A39C0", Offset = "0x31A29C0", VA = "0x31A39C0")]
	private void SetSiblings()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$SetSiblings): 2 lines keep C-only constructs
		List<EZSoftBone.Bone> pSVar1;
		EZSoftBone pEVar2;
		object pIVar3;
		Queue<EZSoftBone.Bone> bones;
		int iVar4;
		EZSoftBone __this_00;

		iVar4 = this.m_SiblingConstraints;
		if (iVar4 == 2) {
			bones = new Queue<EZSoftBone.Bone>();
			pEVar2 = (EZSoftBone)this.m_Structures;
			if (pEVar2 != null) {
				if (bones == null) {
					if (0 < *(int)&pEVar2.m_CancellationTokenSource) {
						pEVar2.get_Item(0);
						throw new NullReferenceException();
					}
				}
				else {
					iVar4 = 0;
					do {
						if (*(int)&pEVar2.m_CancellationTokenSource <= iVar4) {
							if (bones != null) {
								if (bones._size < 1) {
									return;
								}
								pEVar2.SetSiblingsByDepth(bones, this.m_ClosedSiblings);
								return;
							}
							break;
						}
						pIVar3 = pEVar2.get_Item(iVar4);
						bones.Enqueue(pIVar3);
						iVar4 = iVar4 + 1;
						pEVar2 = (EZSoftBone)this.m_Structures;
					} while (pEVar2 != null);
				}
			}
		}
		else {
			if (iVar4 != 1) {
				return;
			}
			pSVar1 = this.m_Structures;
			if (pSVar1 != null) {
				iVar4 = 0;
				do {
					if (pSVar1._size <= iVar4) {
						return;
					}
					pEVar2 = new Queue<EZSoftBone.Bone>();
					pSVar1 = this.m_Structures;
					if ((pSVar1 == null) ||(pIVar3 = pSVar1.get_Item(iVar4), pEVar2 == null)) break;
					__this_00 = pEVar2;
					pEVar2.Enqueue(pIVar3);
					__this_00.SetSiblingsByDepth((Queue<EZSoftBone.Bone>)pEVar2, this.m_ClosedSiblings);
					iVar4 = iVar4 + 1;
					pSVar1 = this.m_Structures;
				} while (pSVar1 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x31A4410", Offset = "0x31A3410", VA = "0x31A4410")]
	private void SetSiblingsByDepth(Queue<Bone> bones, bool closed)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$SetSiblingsByDepth): 21 lines keep C-only constructs
		object pIVar1;
		object pIVar2;
		object pIVar3;
		int iVar4;
		List<object> pSVar5;
		Transform __this_00;
		Vector3 UVar6;
		object local_40;

		if (((bones != null) &&(local_40 = bones.Dequeue(), local_40 != null)) &&(pSVar5 = local_40[6].monitor, pSVar5 != null)) {
			iVar4 = 0;
			do {
				if (pSVar5._size <= iVar4) {
					if (bones._size < 1) {
						return;
					}
					pIVar1 = local_40;
					goto label_032a4530;
				}
				pIVar1 = pSVar5.get_Item(iVar4);
				bones.Enqueue(pIVar1);
				iVar4 = iVar4 + 1;
				pSVar5 = local_40[6].monitor;
			} while (pSVar5 != null);
		}
	label_032a47ad: ;
		throw new NullReferenceException();
	label_032a4530: ;
		do {
			pIVar2 = bones.Dequeue();
			if ((pIVar2 == null) ||(pSVar5 = pIVar2[6].monitor, pSVar5 == null)) goto label_032a47ad;
			iVar4 = 0;
			while (iVar4 < pSVar5._size) {
				pIVar3 = pSVar5.get_Item(iVar4);
				bones.Enqueue(pIVar3);
				iVar4 = iVar4 + 1;
				pSVar5 = pIVar2[6].monitor;
				if (pSVar5 == null) goto label_032a47ad;
			}
			if (*(int)((long)&pIVar1[9].monitor + 4) == *(int)((long)&pIVar2[9].monitor + 4)) {
				if (pIVar2 != pIVar1) {
					if (pIVar1[3].monitor != pIVar2) {
						pIVar1[5].klass = (Il2CppClass)pIVar2;
						if ((Transform)pIVar1[7].klass == null) goto label_032a47ad;
						UVar6 = pIVar1[7].klass.InverseTransformPoint((UnityEngine_Vector3_o)*(Vector3)&pIVar2[7].monitor);
						*(Vector3)&pIVar1[5].monitor = UVar6;
					}
					pIVar3 = local_40;
					if ((object)pIVar2[5].klass == pIVar1) goto label_032a46ff;
					pIVar2[3].monitor = pIVar1;
					__this_00 = (Transform)pIVar2[7].klass;
					pIVar3 = pIVar2;
					if (__this_00 == null) goto label_032a47ad;
	label_032a46d9: ;
					UVar6 = __this_00.InverseTransformPoint((UnityEngine_Vector3_o)*(Vector3)&pIVar1[7].monitor);
					*(Vector3)(pIVar3 + 4) = UVar6;
				}
				pIVar3 = local_40;
			}
			else {
				pIVar3 = pIVar2;
				if (closed) {
					if (local_40 == pIVar1) {
						if (local_40 == null) goto label_032a47ad;
					}
					else {
						if (pIVar1[3].monitor == local_40) {
							if (local_40 == null) goto label_032a47ad;
						}
						else {
							pIVar1[5].klass = (Il2CppClass)local_40;
							if ((local_40 == null) ||((Transform)pIVar1[7].klass == null)) goto label_032a47ad;
							UVar6 = pIVar1[7].klass.InverseTransformPoint((UnityEngine_Vector3_o)*(Vector3)&local_40[7].monitor);
							*(Vector3)&pIVar1[5].monitor = UVar6;
						}
						if ((object)local_40[5].klass != pIVar1) {
							local_40[3].monitor = pIVar1;
							__this_00 = (Transform)local_40[7].klass;
							pIVar3 = local_40;
							local_40 = pIVar2;
							if (__this_00 != null) goto label_032a46d9;
							goto label_032a47ad;
						}
					}
				}
			}
	label_032a46ff: ;
			local_40 = pIVar3;
			pIVar1 = pIVar2;
		} while (0 < bones._size);
		if (closed) {
			if (pIVar3 == null) goto label_032a47ad;
			if (pIVar2 != pIVar3) {
				if ((object)pIVar3[5].klass != pIVar2) {
					pIVar3[3].monitor = pIVar2;
					if ((Transform)pIVar3[7].klass == null) goto label_032a47ad;
					UVar6 = pIVar3[7].klass.InverseTransformPoint((UnityEngine_Vector3_o)*(Vector3)&pIVar2[7].monitor);
					*(Vector3)(pIVar3 + 4) = UVar6;
				}
				if (pIVar2[3].monitor != pIVar3) {
					pIVar2[5].klass = (Il2CppClass)pIVar3;
					if ((Transform)pIVar2[7].klass == null) goto label_032a47ad;
					UVar6 = pIVar2[7].klass.InverseTransformPoint((UnityEngine_Vector3_o)*(Vector3)&pIVar3[7].monitor);
					*(Vector3)&pIVar2[5].monitor = UVar6;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x31A3BC0", Offset = "0x31A2BC0", VA = "0x31A3BC0")]
	private void SetTreeLength()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$SetTreeLength): 1 lines keep C-only constructs
		float fVar1;
		object pIVar2;
		EZSoftBone.Bone pEVar3;
		int iVar4;
		uint uVar5;
		List<EZSoftBone.Bone> pSVar7;
		float local_1c;

		iVar4 = this.m_LengthUnification;
		if (iVar4 == 1) {
			pSVar7 = this.m_Structures;
			if (pSVar7 != null) {
				uVar5 = 0;
				do {
					if (pSVar7._size <= (int)uVar5) {
						return;
					}
					pEVar3 = (EZSoftBone.Bone)pSVar7.get_Item(uVar5);
					if (pEVar3 == null) break;
					pEVar3.SetTreeLength(pEVar3.treeLength) ;
					uVar5 = uVar5 + 1;
					pSVar7 = this.m_Structures;
				} while (pSVar7 != null);
			}
		}
		else {
			if (iVar4 != 2) {
				return;
			}
			pSVar7 = this.m_Structures;
			if (pSVar7 != null) {
				iVar4 = 0;
				local_1c = 0.0;
				do {
					if (pSVar7._size <= iVar4) {
						uVar5 = 0;
						goto label_032a3cd0;
					}
					pIVar2 = pSVar7.get_Item(iVar4);
					if (pIVar2 == null) break;
					fVar1 = *(float)((long)&pIVar2[10].klass + 4);
					if (local_1c <= fVar1) {
						local_1c = fVar1;
					}
					iVar4 = iVar4 + 1;
					pSVar7 = this.m_Structures;
				} while (pSVar7 != null);
			}
		}
		goto label_032a3d00;
		while(true) {
			pEVar3.SetTreeLength(local_1c);
			uVar5 = uVar5 + 1;
			pSVar7 = this.m_Structures;
			if (pSVar7 == null) break;
	label_032a3cd0: ;
			if (pSVar7._size <= (int)uVar5) {
				return;
			}
			pEVar3 = (EZSoftBone.Bone)pSVar7.get_Item(uVar5);
			if (pEVar3 == null) break;
		}
	label_032a3d00: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x31A3D10", Offset = "0x31A2D10", VA = "0x31A3D10")]
	public void RefreshRadius()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$RefreshRadius): clean
		List<EZSoftBone.Bone> __this_00;
		Transform __this_01;
		EZSoftBone.Bone __this_02;
		int index;
		float fVar1;
		float fVar2;
		Vector3 UVar3;

		__this_01 = this.transform;
		if (__this_01 != null) {
			index = 0;
			UVar3 = __this_01.lossyScale;
			fVar1 = ABS(UVar3.y);
			if (ABS(UVar3.y) <= ABS(UVar3.z)) {
				fVar1 = ABS(UVar3.z);
			}
			fVar2 = ABS(UVar3.x);
			if (ABS(UVar3.x) <= fVar1) {
				fVar2 = fVar1;
			}
			this._globalRadius_k__BackingField = fVar2 * this.m_Radius;
			__this_00 = this.m_Structures;
			while (__this_00 != null) {
				if (__this_00._size <= index) {
					return;
				}
				__this_02 = (EZSoftBone.Bone)__this_00.get_Item(index);
				if (__this_02 == null) break;
				__this_02.Inflate(this._globalRadius_k__BackingField, this.m_RadiusCurve);
				index = index + 1;
				__this_00 = this.m_Structures;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x31A3030", Offset = "0x31A2030", VA = "0x31A3030")]
	private void UpdateStructures(float deltaTime)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$UpdateStructures): 57 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		int iVar8;
		AnimationCurve radiusCurve;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		bool bVar11;
		Transform pUVar12;
		EZSoftBone.Bone pEVar13;
		EZSoftBoneMaterial pEVar14;
		UnityEngine_Vector3_StaticFields pUVar15;
		int index;
		MethodInfo pMVar16;
		List<EZSoftBone.Bone> pSVar17;
		uint index_00;
		int iVar18;
		float fVar19;
		float fVar20;
		uint uVar21;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		byte[] auVar22 = new byte[16];
		Vector3 UVar23;
		float local_78;
		byte[] local_70 = new byte[8];
		byte[] local_68 = new byte[16];
		float local_58;
		float fStack_54;
		ulong uStack_50;
		float local_48;
		float fStack_44;
		Vector3 UStack_40;

		if (Il2CppMethodInitialized_0753e803 == false) {
			Il2CppMethodInitialized_0753e803 = true;
			uVar7 = (typeof(EZSoftBone)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar7 = (typeof(EZSoftBone)._2).cctor_finished_or_no_cctor;
		}
		if (uVar7 == 0) {
			fVar19 = EZSoftBone.DeltaTime_Min;
		}
		else {
			fVar19 = *(float)(typeof(EZSoftBone)).static_fields;
		}
		if (deltaTime <= fVar19) {
			return;
		}
		pUVar12 = this.transform;
		if (pUVar12 != null) {
			index_00 = 0;
			UVar23 = pUVar12.lossyScale;
			fVar19 = ABS(UVar23.y);
			if (ABS(UVar23.y) <= ABS(UVar23.z)) {
				fVar19 = ABS(UVar23.z);
			}
			fVar20 = ABS(UVar23.x);
			if (ABS(UVar23.x) <= fVar19) {
				fVar20 = fVar19;
			}
			this._globalRadius_k__BackingField = fVar20 * this.m_Radius;
			pSVar17 = this.m_Structures;
			if (pSVar17 != null) {
				local_68._0_8_ = &this.m_Material;
				do {
					if (pSVar17._size <= (int)index_00) {
						fVar20 = this.m_Gravity.y;
						fVar19 = this.m_Gravity.z;
						this._globalForce_k__BackingField.x = this.m_Gravity.x;
						this._globalForce_k__BackingField.y = fVar20;
						this._globalForce_k__BackingField.z = fVar19;
						pUVar12 = this.m_GravityAligner;
						bVar11 = ((Object)pUVar12 != null);
						if (bVar11) {
							pUVar12 = this.m_GravityAligner;
							if (pUVar12 == null) break;
							UVar23 = pUVar12.TransformDirection((Vector3)this.m_Gravity);
							local_78 = UVar23.z;
							local_68._8_4_ = extraout_XMM0_Dc;
							local_68._0_8_ = UVar23._0_8_;
							local_68._12_4_ = extraout_XMM0_Dd;
							if (Il2CppMethodInitialized_0753e72d == false) {
								Il2CppMethodInitialized_0753e72d = true;
								local_70._0_4_ = 0.0;
								local_70._4_4_ = 0.0;
								if (Il2CppMethodInitialized_0753e729 == false) goto label_032a359c;
	label_032a3327: ;
								local_70._0_4_ = 0.0;
								local_70._4_4_ = 0.0;
								uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							else {
								local_70._0_4_ = 0.0;
								local_70._4_4_ = 0.0;
								if (Il2CppMethodInitialized_0753e729 != false) goto label_032a3327;
	label_032a359c: ;
								local_70._0_4_ = 0.0;
								local_70._4_4_ = 0.0;
								Il2CppMethodInitialized_0753e729 = true;
								uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							if (uVar7 == 0) {
							}
							uVar21 = 0;
							fVar19 = local_78 * local_78 +(float)local_68._4_4_ * (float)local_68._4_4_ +(float)local_68._0_4_ * (float)local_68._0_4_;
							if (fVar19 < 0.0) {
								fVar19 = sqrtf(fVar19);
								uVar21 = extraout_XMM0_Db;
								if (1e-05 < fVar19) goto label_032a339f;
	label_032a3374: ;
								pUVar15 = typeof(Vector3).static_fields;
								local_78 = (pUVar15.zeroVector).z;
							}
							else {
								fVar19 = SQRT(fVar19);
								if (fVar19 <= 1e-05) goto label_032a3374;
	label_032a339f: ;
								local_78 = local_78 / fVar19;
								auVar22._4_4_ = fVar19;
								auVar22._0_4_ = fVar19;
								auVar22._8_4_ = uVar21;
								auVar22._12_4_ = uVar21;
								auVar22 = divps(local_68, auVar22);
								local_70._0_4_ = auVar22._0_4_;
								local_70._4_4_ = auVar22._4_4_;
								pUVar15 = (UnityEngine_Vector3_StaticFields)local_70;
							}
							local_48 = (pUVar15.zeroVector).x;
							fStack_44 = (pUVar15.zeroVector).y;
							UStack_40.x = 0.0;
							UStack_40.y = 0.0;
							uVar1 = this.m_Gravity.x;
							uVar4 = this.m_Gravity.y;
							local_58 = (float)uVar1;
							fStack_54 = (float)uVar4;
							uStack_50._0_4_ = 0.0;
							uStack_50._4_4_ = 0.0;
							fVar19 = this.m_Gravity.z;
							local_68._0_4_ = fVar19;
							if (Il2CppMethodInitialized_0753e72d == false) {
								Il2CppMethodInitialized_0753e72d = true;
								local_70._0_4_ = 0.0;
								local_70._4_4_ = 0.0;
								fVar19 = (float)local_68._0_4_;
								if (Il2CppMethodInitialized_0753e729 == false) goto label_032a3600;
	label_032a3409: ;
								local_70._0_4_ = 0.0;
								local_70._4_4_ = 0.0;
								uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							else {
								local_70._0_4_ = 0.0;
								local_70._4_4_ = 0.0;
								if (Il2CppMethodInitialized_0753e729 != false) goto label_032a3409;
	label_032a3600: ;
								local_70._0_4_ = 0.0;
								local_70._4_4_ = 0.0;
								Il2CppMethodInitialized_0753e729 = true;
								uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								fVar19 = (float)local_68._0_4_;
							}
							if (uVar7 == 0) {
								fVar19 = (float)local_68._0_4_;
							}
							uVar21 = 0;
							fVar20 = fVar19 * fVar19 + fStack_54 * fStack_54 + local_58 * local_58;
							if (fVar20 < 0.0) {
								fVar20 = sqrtf(fVar20);
								uVar21 = extraout_XMM0_Db_00;
								fVar19 = (float)local_68._0_4_;
								if (1e-05 < fVar20) goto label_032a3479;
	label_032a344d: ;
								pUVar15 = typeof(Vector3).static_fields;
								fVar19 = (pUVar15.zeroVector).z;
							}
							else {
								fVar20 = SQRT(fVar20);
								if (fVar20 <= 1e-05) goto label_032a344d;
	label_032a3479: ;
								fVar19 = fVar19 / fVar20;
								auVar10._4_4_ = fStack_54;
								auVar10._0_4_ = local_58;
								auVar10._8_4_ = (float)uStack_50;
								auVar10._12_4_ = uStack_50._4_4_;
								auVar9._4_4_ = fVar20;
								auVar9._0_4_ = fVar20;
								auVar9._8_4_ = uVar21;
								auVar9._12_4_ = uVar21;
								auVar22 = divps(auVar10, auVar9);
								local_70._0_4_ = auVar22._0_4_;
								local_70._4_4_ = auVar22._4_4_;
								pUVar15 = (UnityEngine_Vector3_StaticFields)local_70;
							}
							uVar2 = (pUVar15.zeroVector).x;
							uVar5 = (pUVar15.zeroVector).y;
							fVar20 = acosf(fStack_44 * (float)uVar5 + local_48 * (float)uVar2 + local_78 * fVar19);
							fVar20 = fVar20 / 3.1415927;
							uVar3 = this._globalForce_k__BackingField.x;
							uVar6 = this._globalForce_k__BackingField.y;
							fVar19 = this._globalForce_k__BackingField.z;
							this._globalForce_k__BackingField.x = fVar20 * (float)uVar3;
							this._globalForce_k__BackingField.y = fVar20 * (float)uVar6;
							this._globalForce_k__BackingField.z = fVar20 * fVar19;
						}
						iVar8 = this.m_Iterations;
						if (iVar8 < 1) {
							return;
						}
						pSVar17 = this.m_Structures;
						iVar18 = 0;
						while (pSVar17 != null) {
							index = 0;
							while (index < pSVar17._size) {
								pEVar13 = (EZSoftBone.Bone)pSVar17.get_Item(index);
								this.UpdateBones(pEVar13, deltaTime / (float)iVar8);
								index = index + 1;
								pSVar17 = this.m_Structures;
								if (pSVar17 == null) goto label_032a355f;
							}
							iVar18 = iVar18 + 1;
							if (this.m_Iterations <= iVar18) {
								return;
							}
						}
						break;
					}
					pEVar13 = (EZSoftBone.Bone)pSVar17.get_Item(index_00);
					fVar19 = this._globalRadius_k__BackingField;
					radiusCurve = this.m_RadiusCurve;
					pMVar16 = *(MethodInfo*)local_68._0_8_;
					bVar11 = ((Object)pMVar16 == null);
					if (bVar11) {
						pEVar14 = EZSoftBoneMaterial.defaultMaterial;
						*(EZSoftBoneMaterial*)local_68._0_8_ = pEVar14;
					}
					if (pEVar13 == null) break;
					pEVar13.Inflate(fVar19, radiusCurve, this.m_Material);
					pUVar12 = this.m_SimulateSpace;
					bVar11 = ((Object)pUVar12 != null);
					if (bVar11) {
						pSVar17 = this.m_Structures;
						if (pSVar17 == null) break;
						pMVar16 = (MethodInfo)(ulong)index_00;
						pEVar13 = (EZSoftBone.Bone)pSVar17.get_Item(index_00);
						if (pEVar13 == null) break;
						pEVar13.UpdateSpace();
					}
					index_00 = index_00 + 1;
					pSVar17 = this.m_Structures;
				} while (pSVar17 != null);
			}
		}
	label_032a355f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x31A4D00", Offset = "0x31A3D00", VA = "0x31A4D00")]
	private void UpdateBones(Bone bone, float deltaTime)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$UpdateBones): 215 lines keep C-only constructs
		float pfVar1;
		Vector3 pUVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		uint uVar14;
		uint uVar15;
		uint uVar16;
		uint uVar17;
		uint uVar18;
		uint uVar19;
		uint uVar20;
		uint uVar21;
		uint uVar22;
		uint uVar23;
		uint uVar24;
		uint uVar25;
		LayerMask mask;
		EZSoftBoneForceField pEVar26;
		EZSoftBoneForce __this_00;
		CustomForce pEVar27;
		HashSet<object> __this_01;
		List<Collider> __this_02;
		uint uVar28;
		uint uVar29;
		Component pUVar30;
		bool bVar31;
		uint uVar32;
		uint uVar33;
		uint uVar34;
		Transform pUVar35;
		UnityEngine_Vector3_StaticFields pUVar36;
		Transform pUVar37;
		GameObject __this_03;
		EZSoftBone.Bone pEVar38;
		int iVar39;
		List<EZSoftBone.Bone> __this_04;
		float fVar40;
		float fVar41;
		uint in_XMM0_Db;
		ulong uVar42;
		float fVar57;
		float fVar58;
		float extraout_XMM0_Dc;
		float fVar59;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float extraout_XMM0_Dd;
		ulong extraout_XMM0_Qb;
		ulong extraout_XMM0_Qb_00;
		ulong extraout_XMM0_Qb_01;
		float fVar60;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		byte[] auVar44 = new byte[16];
		byte[] auVar45 = new byte[16];
		byte[] extraout_var = new byte[12];
		byte[] auVar46 = new byte[16];
		byte[] auVar48 = new byte[16];
		byte[] auVar47 = new byte[16];
		ulong uVar43;
		byte[] extraout_var_00 = new byte[12];
		byte[] auVar49 = new byte[16];
		byte[] auVar51 = new byte[16];
		byte[] auVar50 = new byte[16];
		byte[] extraout_var_01 = new byte[12];
		byte[] auVar52 = new byte[16];
		byte[] auVar54 = new byte[16];
		byte[] auVar53 = new byte[16];
		byte[] auVar55 = new byte[16];
		byte[] auVar56 = new byte[16];
		float fVar61;
		float fVar62;
		uint uVar63;
		uint uVar64;
		uint uVar65;
		float fVar66;
		byte[] auVar67 = new byte[16];
		byte[] auVar68 = new byte[16];
		byte[] auVar69 = new byte[16];
		byte[] auVar70 = new byte[16];
		byte[] auVar71 = new byte[16];
		byte[] auVar72 = new byte[16];
		byte[] auVar73 = new byte[16];
		float fVar74;
		byte[] auVar75 = new byte[16];
		Vector3 UVar76;
		Vector3 UVar77;
		Vector3 UVar78;
		float local_130;
		float local_128;
		float fStack_120;
		float fStack_11c;
		float local_118;
		float fStack_114;
		float fStack_110;
		float fStack_10c;
		Vector3 local_f0;
		float local_e4;
		byte[] local_e0 = new byte[16];
		Component local_d0;
		byte[] local_c8 = new byte[12];
		float fStack_bc;
		float local_b8;
		float fStack_b4;
		Vector3[] aUStack_b0 = new Vector3[2];
		byte[] local_98 = new byte[8];
		Component local_88;
		byte[] local_78 = new byte[8];
		Component local_68;
		byte[] local_58 = new byte[8];
		ulong uStack_50;
		float local_48;
		uint uStack_44;

		local_48 = deltaTime;
		uStack_44 = in_XMM0_Db;
		local_f0.z = 0.0;
		local_f0.x = 0.0;
		local_f0.y = 0.0;
		local_78 = (byte[])0x0;
		local_68 = null;
		local_98 = (byte[])0x0;
		local_88 = null;
		if (bone == null) goto label_032a5c0e;
		if (this.m_StartDepth < bone.depth) {
			local_f0.x = bone.worldPosition.x;
			local_f0.y = bone.worldPosition.y;
			fVar61 = bone.worldPosition.z;
			uStack_50 = 0;
			local_c8._0_4_ = this._globalForce_k__BackingField.x;
			local_c8._4_4_ = this._globalForce_k__BackingField.y;
			local_c8._8_4_ = 0.0;
			fStack_bc = 0.0;
			local_118 = this._globalForce_k__BackingField.z;
			pEVar26 = this.m_ForceModule;
			local_f0.z = fVar61;
			local_e4 = fVar61;
			local_58 = (byte[])local_f0._0_8_;
			bVar31 = ((Object)pEVar26 != null);
			if (bVar31) {
				pEVar26 = this.m_ForceModule;
				if (pEVar26 == null) goto label_032a5c0e;
				bVar31 = pEVar26.isActiveAndEnabled;
				if (bVar31) {
					pEVar26 = this.m_ForceModule;
					if (pEVar26 == null) goto label_032a5c0e;
					fVar61 = bone.normalizedLength;
					pUVar35 = pEVar26.transform;
					__this_00 = pEVar26.m_Force;
					if ((__this_00 == null) ||(UVar76 = __this_00.GetForce(pEVar26._time_k__BackingField - fVar61 * pEVar26.m_Conductivity), pUVar35 == null)) goto label_032a5c0e;
					UVar76 = pUVar35.TransformDirection(UVar76);
					fVar66 = this.m_ForceScale;
					fVar61 = UVar76.z * fVar66;
					local_c8._4_4_ = (float)local_c8._4_4_ + fVar66 * UVar76.y;
					local_c8._0_4_ = (float)local_c8._0_4_ + fVar66 * UVar76.x;
					fStack_bc = fStack_bc + fVar66 * extraout_XMM0_Dd;
					local_c8._8_4_ = (float)local_c8._8_4_ + fVar66 * extraout_XMM0_Dc;
					local_118 = local_118 + fVar61;
				}
			}
			pEVar27 = this.customForce;
			if (pEVar27 != null) {
				uVar42 = (*(code)pEVar27.invoke_impl)(pEVar27.method_code);
				local_c8._4_4_ = (float)local_c8._4_4_ + (float)((ulong)uVar42 >> 0x20);
				local_c8._0_4_ = (float)local_c8._0_4_ + (float)uVar42;
				fStack_bc = fStack_bc + (float)((ulong)extraout_XMM0_Qb >> 0x20);
				local_c8._8_4_ = (float)local_c8._8_4_ + (float)extraout_XMM0_Qb;
				local_118 = local_118 + fVar61;
			}
			pUVar35 = this.transform;
			if (pUVar35 == null) goto label_032a5c0e;
			UVar76 = pUVar35.localScale;
			pUVar35 = this.transform;
			if (pUVar35 == null) goto label_032a5c0e;
			UVar77 = pUVar35.localScale;
			aUStack_b0[0]._0_8_ = extraout_XMM0_Qb_01;
			pUVar35 = this.transform;
			if (pUVar35 == null) goto label_032a5c0e;
			local_128 = UVar76.x;
			fStack_120 = (float)extraout_XMM0_Qb_00;
			fStack_11c = (float)((ulong)extraout_XMM0_Qb_00 >> 0x20);
			local_128 = local_128 * (float)local_c8._0_4_;
			fStack_120 = fStack_120 * (float)local_c8._8_4_;
			fStack_11c = fStack_11c * fStack_bc;
			fStack_b4 = fStack_b4 * (float)local_c8._4_4_;
			local_b8 = local_b8 * (float)local_c8._0_4_;
			aUStack_b0[0].y = aUStack_b0[0].y * fStack_bc;
			aUStack_b0[0].x = aUStack_b0[0].x * (float)local_c8._8_4_;
			UVar76 = pUVar35.localScale;
			fVar66 = 1.0 - bone.resistance;
			fVar61 = (float)this.m_Iterations;
			fVar40 = 1.0 - bone.damping;
			uVar3 = bone.speed.x;
			uVar14 = bone.speed.y;
			auVar67._0_4_ = fVar66 * local_128;
			auVar67._4_4_ = fVar66 * fStack_b4;
			auVar67._8_4_ = fVar66 * fStack_120;
			auVar67._12_4_ = fVar66 * fStack_11c;
			auVar68._4_4_ = fVar61;
			auVar68._0_4_ = fVar61;
			auVar68._8_4_ = fVar61;
			auVar68._12_4_ = fVar61;
			auVar68 = divps(auVar67, auVar68);
			fVar74 = ((local_118 * UVar76.z * fVar66) / fVar61 + bone.speed.z) * fVar40;
			fVar41 = fVar40 * (auVar68._0_4_ + (float)uVar3);
			fVar57 = fVar40 * (auVar68._4_4_ + (float)uVar14);
			bone.speed.x = fVar41;
			bone.speed.y = fVar57;
			bone.speed.z = fVar74;
			fVar62 = fVar74 * fVar74 + fVar57 * fVar57 + fVar41 * fVar41;
			pfVar1 = &this.m_SleepThreshold;
			fVar61 = local_e4;
			fVar66 = (float)local_58._0_4_;
			fVar58 = (float)local_58._4_4_;
			fVar59 = (float)uStack_50;
			fVar60 = uStack_50._4_4_;
			if (*pfVar1 <= fVar62 && fVar62 != *pfVar1) {
				fVar66 = fVar41 * local_48 + (float)local_58._0_4_;
				fVar58 = fVar57 * local_48 + (float)local_58._4_4_;
				fVar59 = fVar40 * (auVar68._8_4_ + 0.0) * local_48 + (float)uStack_50;
				fVar60 = fVar40 * (auVar68._12_4_ + 0.0) * local_48 + uStack_50._4_4_;
				fVar61 = fVar74 * local_48 + local_e4;
			}
			pEVar38 = bone.parentBone;
			if (pEVar38 == null) goto label_032a5c0e;
			local_c8._4_4_ = fVar58;
			local_c8._0_4_ = fVar66;
			fStack_bc = fVar60;
			local_c8._8_4_ = fVar59;
			pUVar35 = pEVar38.transform;
			if (pUVar35 == null) goto label_032a5c0e;
			local_b8 = pEVar38.worldPosition.z;
			uVar4 = pEVar38.worldPosition.x;
			uVar15 = pEVar38.worldPosition.y;
			UVar76 = pUVar35.position;
			pEVar38 = bone.parentBone;
			if ((pEVar38 == null) ||(pUVar35 = pEVar38.transform, pUVar35 == null)) goto label_032a5c0e;
			local_b8 = local_b8 - UVar76.z;
			uVar63 = 0;
			uVar64 = 0;
			uVar65 = 0;
			UVar77 = pUVar35.TransformPoint((Vector3)bone.localPosition);
			fVar58 = bone.stiffness / (float)this.m_Iterations;
			fVar66 = 1.0;
			if (fVar58 <= 1.0) {
				fVar66 = fVar58;
			}
			fVar66 = (float)(-(uint)(0.0 <= fVar58) & (uint)fVar66);
			local_f0.x = fVar66 * ((UVar77.x + ((float)uVar4 - UVar76.x)) - (float)local_c8._0_4_) +(float)local_c8._0_4_;
			fStack_b4 = fVar66 * ((UVar77.y + ((float)uVar15 - UVar76.y)) - (float)local_c8._4_4_) +(float)local_c8._4_4_;
			local_f0.z = ((UVar77.z + local_b8) - fVar61) * fVar66 + fVar61;
			local_b8 = local_f0.x;
			aUStack_b0[0].y = fVar66 * ((extraout_XMM0_Dd_01 + (0.0 - extraout_XMM0_Dd_00)) - fStack_bc) + fStack_bc;
			aUStack_b0[0].x = fVar66 * ((extraout_XMM0_Dc_01 + (0.0 - extraout_XMM0_Dc_00)) - (float)local_c8._8_4_) +(float)local_c8._8_4_;
			local_f0.y = fStack_b4;
			pEVar38 = bone.parentBone;
			if (pEVar38 == null) goto label_032a5c0e;
			pUVar2 = &pEVar38.worldPosition;
			fVar66 = pUVar2.x;
			fVar58 = pEVar38.worldPosition.y;
			uVar28 = pUVar2.x;
			uVar29 = pUVar2.y;
			local_c8._0_4_ = local_f0.z;
			fVar61 = local_f0.z - pEVar38.worldPosition.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				uVar63 = 0;
				uVar64 = 0;
				uVar65 = 0;
				Il2CppMethodInitialized_0753e72d = true;
				local_e0._0_8_ = null;
				fVar66 = (float)uVar28;
				fVar58 = (float)uVar29;
			}
			else {
				local_e0._0_8_ = null;
			}
			local_e0._0_8_ = null;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_e0._0_8_ = null;
				uVar63 = 0;
				uVar64 = 0;
				uVar65 = 0;
				Il2CppMethodInitialized_0753e729 = true;
			}
			auVar69._0_4_ = local_b8 - fVar66;
			auVar69._4_4_ = fStack_b4 - fVar58;
			auVar69._8_4_ = aUStack_b0[0].x - 0.0;
			auVar69._12_4_ = aUStack_b0[0].y - 0.0;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				uVar63 = 0;
				uVar64 = 0;
				uVar65 = 0;
			}
			auVar44._4_4_ = uVar63;
			auVar44._0_4_ = fVar61;
			auVar44._8_4_ = uVar64;
			auVar44._12_4_ = uVar65;
			auVar45._4_12_ = auVar44._4_12_;
			fVar66 = fVar61 * fVar61 + auVar69._4_4_ * auVar69._4_4_ + auVar69._0_4_ * auVar69._0_4_;
			if (fVar66 < 0.0) {
				auVar46._0_4_ = sqrtf(fVar66);
				auVar46._4_12_ = extraout_var;
				uVar42 = auVar46._0_8_;
				if (auVar46._0_4_ <= 1e-05) goto label_032a52ad;
	label_032a530a: ;
				auVar47._0_4_ = (float)uVar42;
				fVar61 = fVar61 / auVar47._0_4_;
				uVar63 = (undefined4)((ulong)uVar42 >> 0x20);
				auVar48._8_4_ = uVar63;
				auVar48._0_8_ = uVar42;
				auVar48._12_4_ = uVar63;
				auVar47._8_8_ = auVar48._8_8_;
				auVar47._4_4_ = auVar47._0_4_;
				auVar68 = divps(auVar69, auVar47);
				local_e0._0_8_ = auVar68._0_8_;
				pUVar36 = (UnityEngine_Vector3_StaticFields)local_e0;
			}
			else {
				auVar45._0_4_ = SQRT(fVar66);
				uVar42 = auVar45._0_8_;
				if (1e-05 < auVar45._0_4_) goto label_032a530a;
	label_032a52ad: ;
				pUVar36 = typeof(Vector3).static_fields;
				fVar61 = (pUVar36.zeroVector).z;
			}
			pEVar38 = bone.parentBone;
			if ((pEVar38 == null) ||(pUVar35 = pEVar38.transform, pUVar35 == null)) goto label_032a5c0e;
			uVar5 = (pUVar36.zeroVector).x;
			uVar16 = (pUVar36.zeroVector).y;
			UVar76 = pUVar35.TransformVector((Vector3)bone.localPosition);
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar25 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar25 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar25 == 0) {
			}
			fVar66 = UVar76.z * UVar76.z + UVar76.y * UVar76.y + UVar76.x * UVar76.x;
			if (fVar66 < 0.0) {
				fVar66 = sqrtf(fVar66);
			}
			else {
				fVar66 = SQRT(fVar66);
			}
			pEVar38 = bone.parentBone;
			if (pEVar38 == null) goto label_032a5c0e;
			uVar6 = pEVar38.worldPosition.x;
			uVar17 = pEVar38.worldPosition.y;
			auVar75._0_4_ = (float)uVar5 * fVar66 + (float)uVar6;
			auVar75._4_4_ = (float)uVar16 * fVar66 + (float)uVar17;
			auVar75._8_4_ = fVar66 * 0.0 + 0.0;
			auVar75._12_4_ = fVar66 * 0.0 + 0.0;
			fVar61 = fVar61 * fVar66 + pEVar38.worldPosition.z;
			if (this.m_SiblingConstraints == 0) {
				iVar39 = 1;
			}
			else {
				pEVar38 = bone.leftBone;
				if (pEVar38 == null) {
					iVar39 = 1;
					pEVar38 = bone.rightBone;
				}
				else {
					uVar7 = pEVar38.worldPosition.x;
					uVar18 = pEVar38.worldPosition.y;
					local_130 = (float)local_c8._0_4_ - pEVar38.worldPosition.z;
					if (Il2CppMethodInitialized_0753e72d == false) {
						Il2CppMethodInitialized_0753e72d = true;
						local_e0._0_8_ = null;
					}
					else {
						local_e0._0_8_ = null;
					}
					local_e0._0_8_ = null;
					if (Il2CppMethodInitialized_0753e729 == false) {
						local_e0._0_8_ = null;
						Il2CppMethodInitialized_0753e729 = true;
					}
					auVar70._0_4_ = local_b8 - (float)uVar7;
					auVar70._4_4_ = fStack_b4 - (float)uVar18;
					auVar70._8_4_ = aUStack_b0[0].x - 0.0;
					auVar70._12_4_ = aUStack_b0[0].y - 0.0;
					fVar66 = local_130 * local_130 + auVar70._4_4_ * auVar70._4_4_ + auVar70._0_4_ * auVar70._0_4_;
					if (fVar66 < 0.0) {
						auVar49._0_4_ = sqrtf(fVar66);
						auVar49._4_12_ = extraout_var_00;
						uVar43 = auVar49._0_8_;
						if (auVar49._0_4_ <= 1e-05) goto label_032a549a;
	label_032a55b8: ;
						auVar50._0_4_ = (float)uVar43;
						local_130 = local_130 / auVar50._0_4_;
						uVar63 = (undefined4)(uVar43 >> 0x20);
						auVar51._8_4_ = uVar63;
						auVar51._0_8_ = uVar43;
						auVar51._12_4_ = uVar63;
						auVar50._8_8_ = auVar51._8_8_;
						auVar50._4_4_ = auVar50._0_4_;
						auVar68 = divps(auVar70, auVar50);
						local_e0._0_8_ = auVar68._0_8_;
						pUVar36 = (UnityEngine_Vector3_StaticFields)local_e0;
					}
					else {
						uVar43 = (ulong)(uint)SQRT(fVar66);
						if (1e-05 < SQRT(fVar66)) goto label_032a55b8;
	label_032a549a: ;
						pUVar36 = typeof(Vector3).static_fields;
						local_130 = (pUVar36.zeroVector).z;
					}
					pUVar35 = bone.transform;
					if (pUVar35 == null) goto label_032a5c0e;
					uVar8 = (pUVar36.zeroVector).x;
					uVar19 = (pUVar36.zeroVector).y;
					UVar76 = pUVar35.TransformVector((Vector3)bone.leftPosition);
					if (Il2CppMethodInitialized_0753e729 == false) {
						aUStack_b0._8_8_ = UVar76._0_8_;
						UVar76.z = UVar76.z;
						UVar76.x = aUStack_b0[0].z;
						UVar76.y = aUStack_b0[1].x;
						Il2CppMethodInitialized_0753e729 = true;
						uVar25 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar25 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar25 == 0) {
						aUStack_b0._8_8_ = UVar76._0_8_;
						UVar76.z = UVar76.z;
						UVar76.x = aUStack_b0[0].z;
						UVar76.y = aUStack_b0[1].x;
					}
					fVar66 = UVar76.z * UVar76.z + UVar76.y * UVar76.y + UVar76.x * UVar76.x;
					if (fVar66 < 0.0) {
						fVar66 = sqrtf(fVar66);
					}
					else {
						fVar66 = SQRT(fVar66);
					}
					pEVar38 = bone.leftBone;
					if (pEVar38 == null) goto label_032a5c0e;
					uVar9 = pEVar38.worldPosition.x;
					uVar20 = pEVar38.worldPosition.y;
					auVar75._0_4_ = auVar75._0_4_ + (float)uVar8 * fVar66 + (float)uVar9;
					auVar75._4_4_ = auVar75._4_4_ + (float)uVar19 * fVar66 + (float)uVar20;
					auVar75._8_4_ = auVar75._8_4_ + fVar66 * 0.0 + 0.0;
					auVar75._12_4_ = auVar75._12_4_ + fVar66 * 0.0 + 0.0;
					fVar61 = fVar61 + local_130 * fVar66 + pEVar38.worldPosition.z;
					iVar39 = 2;
					pEVar38 = bone.rightBone;
				}
				if (pEVar38 != null) {
					uVar10 = pEVar38.worldPosition.x;
					uVar21 = pEVar38.worldPosition.y;
					local_130 = (float)local_c8._0_4_ - pEVar38.worldPosition.z;
					if (Il2CppMethodInitialized_0753e72d == false) {
						Il2CppMethodInitialized_0753e72d = true;
						local_e0._0_8_ = null;
					}
					else {
						local_e0._0_8_ = null;
					}
					local_e0._0_8_ = null;
					if (Il2CppMethodInitialized_0753e729 == false) {
						local_e0._0_8_ = null;
						Il2CppMethodInitialized_0753e729 = true;
					}
					auVar71._0_4_ = local_b8 - (float)uVar10;
					auVar71._4_4_ = fStack_b4 - (float)uVar21;
					auVar71._8_4_ = aUStack_b0[0].x - 0.0;
					auVar71._12_4_ = aUStack_b0[0].y - 0.0;
					fVar66 = local_130 * local_130 + auVar71._4_4_ * auVar71._4_4_ + auVar71._0_4_ * auVar71._0_4_;
					if (fVar66 < 0.0) {
						auVar52._0_4_ = sqrtf(fVar66);
						auVar52._4_12_ = extraout_var_01;
						uVar43 = auVar52._0_8_;
						if (auVar52._0_4_ <= 1e-05) goto label_032a5745;
	label_032a577b: ;
						auVar53._0_4_ = (float)uVar43;
						local_130 = local_130 / auVar53._0_4_;
						uVar63 = (undefined4)(uVar43 >> 0x20);
						auVar54._8_4_ = uVar63;
						auVar54._0_8_ = uVar43;
						auVar54._12_4_ = uVar63;
						auVar53._8_8_ = auVar54._8_8_;
						auVar53._4_4_ = auVar53._0_4_;
						auVar68 = divps(auVar71, auVar53);
						local_e0._0_8_ = auVar68._0_8_;
						pUVar36 = (UnityEngine_Vector3_StaticFields)local_e0;
					}
					else {
						uVar43 = (ulong)(uint)SQRT(fVar66);
						if (1e-05 < SQRT(fVar66)) goto label_032a577b;
	label_032a5745: ;
						pUVar36 = typeof(Vector3).static_fields;
						local_130 = (pUVar36.zeroVector).z;
					}
					pUVar35 = bone.transform;
					if (pUVar35 == null) goto label_032a5c0e;
					uVar11 = (pUVar36.zeroVector).x;
					uVar22 = (pUVar36.zeroVector).y;
					UVar77 = pUVar35.TransformVector((Vector3)bone.rightPosition);
					if (Il2CppMethodInitialized_0753e729 == false) {
						aUStack_b0._8_8_ = UVar77._0_8_;
						UVar77.z = UVar77.z;
						UVar77.x = aUStack_b0[0].z;
						UVar77.y = aUStack_b0[1].x;
						Il2CppMethodInitialized_0753e729 = true;
						uVar25 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar25 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar25 == 0) {
						aUStack_b0._8_8_ = UVar77._0_8_;
						UVar77.z = UVar77.z;
						UVar77.x = aUStack_b0[0].z;
						UVar77.y = aUStack_b0[1].x;
					}
					fVar66 = UVar77.z * UVar77.z + UVar77.y * UVar77.y + UVar77.x * UVar77.x;
					if (fVar66 < 0.0) {
						fVar66 = sqrtf(fVar66);
					}
					else {
						fVar66 = SQRT(fVar66);
					}
					local_118 = auVar75._0_4_;
					fStack_114 = auVar75._4_4_;
					fStack_110 = auVar75._8_4_;
					fStack_10c = auVar75._12_4_;
					pEVar38 = bone.rightBone;
					if (pEVar38 == null) goto label_032a5c0e;
					uVar12 = pEVar38.worldPosition.x;
					uVar23 = pEVar38.worldPosition.y;
					auVar75._0_4_ = local_118 + (float)uVar11 * fVar66 + (float)uVar12;
					auVar75._4_4_ = fStack_114 + (float)uVar22 * fVar66 + (float)uVar23;
					auVar75._8_4_ = fStack_110 + fVar66 * 0.0 + 0.0;
					auVar75._12_4_ = fStack_10c + fVar66 * 0.0 + 0.0;
					fVar61 = fVar61 + local_130 * fVar66 + pEVar38.worldPosition.z;
					iVar39 = iVar39 + 1;
				}
			}
			auVar55._0_4_ = (float)iVar39;
			fVar58 = bone.slackness / (float)this.m_Iterations;
			fVar66 = 1.0;
			if (fVar58 <= 1.0) {
				fVar66 = fVar58;
			}
			fVar66 = (float)(-(uint)(0.0 <= fVar58) & (uint)fVar66);
			auVar55._4_4_ = auVar55._0_4_;
			auVar55._8_4_ = auVar55._0_4_;
			auVar55._12_4_ = auVar55._0_4_;
			auVar68 = divps(auVar75, auVar55);
			local_f0.x = fVar66 * (local_b8 - auVar68._0_4_) + auVar68._0_4_;
			local_f0.y = fVar66 * (fStack_b4 - auVar68._4_4_) + auVar68._4_4_;
			fVar58 = fVar66 * (aUStack_b0[0].x - auVar68._8_4_) + auVar68._8_4_;
			fVar59 = fVar66 * (aUStack_b0[0].y - auVar68._12_4_) + auVar68._12_4_;
			local_f0.z = ((float)local_c8._0_4_ - fVar61 / auVar55._0_4_) * fVar66 + fVar61 / auVar55._0_4_;
			fVar61 = local_f0.x;
			fVar66 = local_f0.y;
			if (0.0 < bone.radius) {
				if ((typeof(EZSoftBoneColliderBase)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(EZSoftBoneColliderBase)) ;
				}
				__this_01 = (HashSet<object>)EZSoftBoneColliderBase.EnabledColliders;
				if (__this_01 == null) goto label_032a5c0e;
				local_e0.GetEnumerator(__this_01);
				local_68 = local_d0;
				local_78 = (byte[])local_e0._0_8_;
				local_e0._0_8_ = null;
				local_e0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_78;
				while (true) {
					bVar31 = local_78.MoveNext();
					pUVar30 = local_68;
					if (!(bVar31)) break;
					if (local_68 == null) {
						throw new NullReferenceException();
					}
					pUVar35 = bone.transform;
					pUVar37 = local_68.transform;
					bVar31 = ((Object)pUVar35 != (Object)pUVar37) ;
					if (bVar31) {
						mask.m_Mask = (LayerMask)this.m_CollisionLayers.m_Mask;
						__this_03 = pUVar30.gameObject;
						if (__this_03 == null) {
							throw new NullReferenceException();
						}
						uVar32 = __this_03.layer;
						uVar33 = ((LayerMask)mask);
						uVar34 = ((LayerMask)mask);
						if ((uVar33 | 1 << (uVar32 & 0x1f)) == uVar34) {
							(*((Il2CppClass)pUVar30.klass).vtable[4].methodPtr)(pUVar30,&local_f0,((Il2CppClass)pUVar30.klass).vtable[4].method);
						}
					}
				}
				local_78.Dispose();
				__this_02 = this.m_ExtraColliders;
				if (__this_02 == null) goto label_032a5c0e;
				local_e0.GetEnumerator((List<object>)__this_02);
				local_88 = local_d0;
				local_98 = (byte[])local_e0._0_8_;
				local_e0._0_8_ = null;
				local_e0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_98;
				while (true) {
					bVar31 = local_98.MoveNext();
					pUVar30 = local_88;
					if (!(bVar31)) break;
					if (local_88 == null) {
						throw new NullReferenceException();
					}
					pUVar35 = bone.transform;
					pUVar37 = local_88.transform;
					bVar31 = ((Object)pUVar35 != (Object)pUVar37) ;
					if ((bVar31) &&(bVar31 = pUVar30.enabled)) {
						EZSoftBoneUtility.PointOutsideCollider(ref local_f0, (Collider)pUVar30, bone.radius);
					}
				}
				local_98.Dispose() ;
				fVar58 = 0.0;
				fVar59 = 0.0;
				fVar61 = local_f0.x;
				fVar66 = local_f0.y;
			}
			auVar73._4_4_ = uStack_44;
			auVar73._0_4_ = local_48;
			fVar60 = bone.speed.z;
			uVar13 = bone.speed.x;
			uVar24 = bone.speed.y;
			auVar56._0_4_ = fVar61 - (float)local_58._0_4_;
			auVar56._4_4_ = fVar66 - (float)local_58._4_4_;
			auVar56._8_4_ = fVar58 - (float)uStack_50;
			auVar56._12_4_ = fVar59 - uStack_50._4_4_;
			auVar73._8_4_ = uStack_44;
			auVar73._12_4_ = uStack_44;
			auVar72._8_8_ = auVar73._8_8_;
			auVar72._4_4_ = local_48;
			auVar72._0_4_ = local_48;
			auVar68 = divps(auVar56, auVar72);
			bone.speed.x = (auVar68._0_4_ + (float)uVar13) * 0.5;
			bone.speed.y = (auVar68._4_4_ + (float)uVar24) * 0.5;
			bone.speed.z = ((local_f0.z - local_e4) / local_48 + fVar60) * 0.5;
			bone.worldPosition.z = local_f0.z;
			bone.worldPosition.x = local_f0.x;
			bone.worldPosition.y = local_f0.y;
		}
		else {
			pUVar35 = bone.transform;
			if (pUVar35 == null) goto label_032a5c0e;
			UVar78 = (Vector3)pUVar35.position;
			bone.worldPosition = UVar78;
		}
		__this_04 = bone.childBones;
		if (__this_04 != null) {
			iVar39 = 0;
			do {
				if (__this_04._size <= iVar39) {
					return;
				}
				pEVar38 = (EZSoftBone.Bone)__this_04.get_Item(iVar39);
				this.UpdateBones(pEVar38, local_48);
				iVar39 = iVar39 + 1;
				__this_04 = bone.childBones;
			} while (__this_04 != null);
		}
	label_032a5c0e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x31A3640", Offset = "0x31A2640", VA = "0x31A3640")]
	private void UpdateTransforms()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$UpdateTransforms): clean
		EZSoftBone.Bone __this_00;
		int index;
		List<EZSoftBone.Bone> __this_01;

		__this_01 = this.m_Structures;
		if (__this_01 != null) {
			index = 0;
			do {
				if (__this_01._size <= index) {
					return;
				}
				__this_00 = (EZSoftBone.Bone)__this_01.get_Item(index);
				if (__this_00 == null) break;
				__this_00.UpdateTransform(this.m_SiblingRotationConstraints, this.m_StartDepth) ;
				index = index + 1;
				__this_01 = this.m_Structures;
			} while (__this_01 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x31A6A20", Offset = "0x31A5A20", VA = "0x31A6A20")]
	public EZSoftBone()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c (EZhex1991.EZSoftBone.EZSoftBone$$.ctor): clean
		LayerMask UVar1;
		List<Collider> __this_00;
		AnimationCurve pUVar2;
		List<EZSoftBone.Bone> __this_01;

		this.m_SiblingRotationConstraints = true;
		UVar1 = ((LayerMask)1);
		this.m_CollisionLayers.m_Mask = (int32_t)UVar1.m_Mask;
		__this_00 = new List<Collider>();
		this.m_ExtraColliders = __this_00;
		pUVar2 = AnimationCurve.Linear(0.0, 1.0, 1.0, 1.0);
		this.m_RadiusCurve = pUVar2;
		this.m_ConstantDeltaTime = 0.03;
		this.m_Iterations = 1;
		this.m_SleepThreshold = 0.005;
		this.m_ForceScale = 1.0;
		__this_01 = new List<EZSoftBone.Bone>();
		this.m_Structures = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBone.c.

	// EZhex1991.EZSoftBone.EZSoftBone$$.cctor: clean
	static EZSoftBone()
	{
		EZSoftBone.DeltaTime_Min = 1e-06;
		return;
	}
}
