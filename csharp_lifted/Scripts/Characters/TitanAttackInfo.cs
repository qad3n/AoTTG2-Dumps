// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanAttackInfo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanAttackInfo.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackInfo.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000733")]
internal class TitanAttackInfo
{
	[Token(Token = "0x400242D")]
	[FieldOffset(Offset = "0x10")]
	public bool HumanOnly;

	[Token(Token = "0x400242E")]
	[FieldOffset(Offset = "0x11")]
	public bool MapObject;

	[Token(Token = "0x400242F")]
	[FieldOffset(Offset = "0x12")]
	public bool FarOnly;

	[Token(Token = "0x4002430")]
	[FieldOffset(Offset = "0x13")]
	public bool LeftArm;

	[Token(Token = "0x4002431")]
	[FieldOffset(Offset = "0x14")]
	public bool RightArm;

	[Token(Token = "0x4002432")]
	[FieldOffset(Offset = "0x18")]
	public Vector3 MinRange;

	[Token(Token = "0x4002433")]
	[FieldOffset(Offset = "0x24")]
	public Vector3 MaxRange;

	[Token(Token = "0x4002434")]
	[FieldOffset(Offset = "0x30")]
	public bool HasKeyframes;

	[Token(Token = "0x4002435")]
	[FieldOffset(Offset = "0x38")]
	public List<TitanAttackKeyframe> Keyframes;

	[Token(Token = "0x60045DC")]
	[Address(RVA = "0x5B61AB0", Offset = "0x5B60AB0", VA = "0x5B61AB0")]
	public TitanAttackInfo(JSONNode attackInfo, JSONNode keyframes)
	{
		// Lifted from source/cpp/Characters/TitanAttackInfo.c (Characters.TitanAttackInfo$$.ctor): 28 lines keep C-only constructs
		List<TitanAttackKeyframe>* targetAddress;
		int piVar1;
		uint uVar2;
		TitanAttackKeyframe[] pCVar3;
		bool bVar5;
		bool bVar6;
		int iVar7;
		List<TitanAttackKeyframe> pSVar8;
		JSONNode pSVar9;
		JSONNode pSVar10;
		long plVar11;
		TitanAttackKeyframe __this_00;
		int iVar12;
		float fVar13;
		float fVar14;
		float fVar15;

		pSVar8 = new List<TitanAttackKeyframe>();
		targetAddress = &this.Keyframes;
		this.Keyframes = pSVar8;
		base();
		if ((attackInfo != null) &&(pSVar9 = attackInfo.get_Item("HumanOnly"), pSVar9 != null)) {
			bVar5 = pSVar9.get_AsBool();
			this.HumanOnly = bVar5;
			bVar5 = attackInfo.HasKey("MapObject");
			bVar6 = true;
			if (bVar5) {
				pSVar9 = attackInfo.get_Item("MapObject");
				if (pSVar9 == null) goto label_05c62400;
				bVar6 = pSVar9.get_AsBool();
			}
			this.MapObject = bVar6;
			pSVar9 = attackInfo.get_Item("Far");
			if (pSVar9 != null) {
				bVar5 = pSVar9.get_AsBool();
				this.FarOnly = bVar5;
				bVar5 = attackInfo.HasKey("LeftArm");
				if (bVar5) {
					pSVar9 = attackInfo.get_Item("LeftArm");
					if (pSVar9 == null) goto label_05c62400;
					bVar5 = pSVar9.get_AsBool();
				}
				else {
					bVar5 = false;
				}
				this.LeftArm = bVar5;
				bVar5 = attackInfo.HasKey("RightArm");
				if (bVar5) {
					pSVar9 = attackInfo.get_Item("RightArm");
					if (pSVar9 == null) goto label_05c62400;
					bVar5 = pSVar9.get_AsBool();
				}
				else {
					bVar5 = false;
				}
				this.RightArm = bVar5;
				bVar5 = attackInfo.HasKey("Ranges");
				if (bVar5) {
					pSVar9 = attackInfo.get_Item("Ranges");
					if (((pSVar9 == null) ||(pSVar10 = pSVar9.get_Item("X"), pSVar10 == null)) ||(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,0,*(ulong)((long)pSVar10.klass + 400)), plVar11 == null)) goto label_05c62400;
					fVar13 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
					pSVar10 = pSVar9.get_Item("Y");
					if ((pSVar10 == null) ||(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,0,*(ulong)((long)pSVar10.klass + 400)), plVar11 == null)) goto label_05c62400;
					fVar14 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
					pSVar10 = pSVar9.get_Item("Z");
					if ((pSVar10 == null) ||(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,0,*(ulong)((long)pSVar10.klass + 400)), plVar11 == null)) goto label_05c62400;
					fVar15 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
					this.MinRange.x = fVar13;
					this.MinRange.y = fVar14;
					this.MinRange.z = fVar15;
					pSVar10 = pSVar9.get_Item("X");
					if ((pSVar10 == null) ||(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,1,*(ulong)((long)pSVar10.klass + 400)), plVar11 == null)) goto label_05c62400;
					fVar13 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
					pSVar10 = pSVar9.get_Item("Y");
					if ((pSVar10 == null) ||(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,1,*(ulong)((long)pSVar10.klass + 400)), plVar11 == null)) goto label_05c62400;
					fVar14 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
					pSVar9 = pSVar9.get_Item("Z");
					if ((pSVar9 == null) ||(plVar11 = (long)(**(code*)((long)pSVar9.klass + 0x188))(pSVar9,1,*(ulong)((long)pSVar9.klass + 400)), plVar11 == null)) goto label_05c62400;
					fVar15 = (float)(**(code*)(*plVar11 + 0x388))(plVar11);
					this.MaxRange.x = fVar13;
					this.MaxRange.y = fVar14;
					this.MaxRange.z = fVar15;
				}
				bVar5 = (keyframes != null);
				if (!bVar5) {
					return;
				}
				this.HasKeyframes = true;
				if ((keyframes != null) &&(pSVar9 = keyframes.get_Item("Keyframes"), pSVar9 != null)) {
					iVar12 = 0;
					do {
						iVar7 = pSVar9.get_Count();
						if (iVar7 <= iVar12) {
							pSVar9 = keyframes.get_Item("Ranges") ;
							if (((pSVar9 != null) &&(pSVar10 = pSVar9.get_Item("X") , pSVar10 != null)) &&(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,0,*(ulong)((long)pSVar10.klass + 400)), plVar11 != null)) {
								fVar13 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
								pSVar10 = pSVar9.get_Item("Y");
								if ((pSVar10 != null) &&(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,0,*(ulong)((long)pSVar10.klass + 400)), plVar11 != null)) {
									fVar14 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
									pSVar10 = pSVar9.get_Item("Z");
									if ((pSVar10 != null) &&(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,0,*(ulong)((long)pSVar10.klass + 400)), plVar11 != null)) {
										fVar15 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
										this.MinRange.x = fVar13;
										this.MinRange.y = fVar14;
										this.MinRange.z = fVar15;
										pSVar10 = pSVar9.get_Item("X");
										if ((pSVar10 != null) &&(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,1,*(ulong)((long)pSVar10.klass + 400)), plVar11 != null)) {
											fVar13 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390)) ;
											pSVar10 = pSVar9.get_Item("Y");
											if ((pSVar10 != null) &&(plVar11 = (long)(**(code*)((long)pSVar10.klass + 0x188))(pSVar10,1,*(ulong)((long)pSVar10.klass + 400)), plVar11 != null)) {
												fVar14 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
												pSVar9 = pSVar9.get_Item("Z");
												if ((pSVar9 != null) &&(plVar11 = (long)(**(code*)((long)pSVar9.klass + 0x188))(pSVar9,1,*(ulong)((long)pSVar9.klass + 400)), plVar11 != null)) {
													fVar15 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390));
													this.MaxRange.x = fVar13;
													this.MaxRange.y = fVar14;
													this.MaxRange.z = fVar15;
													return;
												}
											}
										}
									}
								}
							}
							break;
						}
						pSVar8 = *targetAddress;
						pSVar9 = keyframes.get_Item("Keyframes");
						if (pSVar9 == null) break;
						pSVar9 = pSVar9.get_Item(iVar12);
						__this_00 = new TitanAttackKeyframe(pSVar9);
						if (pSVar8 == null) break;
						piVar1 = &pSVar8._version;
						*piVar1 = *piVar1 + 1;
						pCVar3 = pSVar8._items;
						if (pCVar3 == null) break;
						uVar2 = pSVar8._size;
						if (uVar2 < (uint)pCVar3.Length) {
							pSVar8._size = uVar2 + 1;
							pCVar3[(int)uVar2] = __this_00;
						}
						else {
							pSVar8.AddWithResize((object)__this_00);
						}
						iVar12 = iVar12 + 1;
						pSVar9 = keyframes.get_Item("Keyframes");
					} while (pSVar9 != null);
				}
			}
		}
	label_05c62400: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045DD")]
	[Address(RVA = "0x5B625D0", Offset = "0x5B615D0", VA = "0x5B625D0")]
	public bool CheckSimpleAttack(Vector3 relativePosition)
	{
		// Lifted from source/cpp/Characters/TitanAttackInfo.c (Characters.TitanAttackInfo$$CheckSimpleAttack): clean
		if (relativePosition.x < this.MinRange.x) {
			return false;
		}
		if (relativePosition.y < this.MinRange.y) {
			return false;
		}
		if (relativePosition.z < this.MinRange.z) {
			return false;
		}
		if (this.MaxRange.x < relativePosition.x) {
			return false;
		}
		if (this.MaxRange.y < relativePosition.y) {
			return false;
		}
		return relativePosition.z <= this.MaxRange.z;
	}

	[Token(Token = "0x60045DE")]
	[Address(RVA = "0x5B62620", Offset = "0x5B61620", VA = "0x5B62620")]
	public bool CheckSmartAttack(Transform titan, Vector3 worldPosition, Vector3 velocity, float attackSpeed, float size)
	{
		// Lifted from source/cpp/Characters/TitanAttackInfo.c (Characters.TitanAttackInfo$$CheckSmartAttack): 14 lines keep C-only constructs
		List<TitanAttackKeyframe> __this_00;
		object pIVar1;
		bool bVar2;
		int iVar3;
		float fVar4;
		float fVar5;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float in_XMM1_Db;
		float fVar6;
		float fVar7;
		Vector3 UVar8;
		System_Collections_Generic_List_Enumerator_T__o local_78;
		float local_58;
		float fStack_54;
		System_Collections_Generic_List_Enumerator_T__o local_40;
		byte[] local_38 = new byte[16];

		local_58 = worldPosition.z;
		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = worldPosition._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		fStack_54 = in_XMM1_Db;
		local_78._list = null;
		local_78._index = 0;
		local_78._version = 0;
		local_78._current = null;
		__this_00 = this.Keyframes;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_78 = __this_00.GetEnumerator();
		fVar4 = fStack_54;
		local_40 = &local_78;
		if (titan == null) {
			bVar2 = local_78.MoveNext();
			if (bVar2) {
				if (local_78._current != null) {
					throw new NullReferenceException();
				}
	label_05c627c3: ;
				throw new NullReferenceException();
			}
			iVar3 = 5;
			bVar2 = false;
		}
		else {
			fStack_54 = (float)local_38._0_4_;
			do {
				bVar2 = local_78.MoveNext();
				pIVar1 = local_78._current;
				if (!bVar2) {
					iVar3 = 5;
					goto label_05c6278c;
				}
				if (local_78._current == null) goto label_05c627c3;
				UVar8 = titan.TransformPoint((UnityEngine_Vector3_o) *(Vector3)((long)&local_78._current[1].klass + 4));
				fVar6 = *(float)&pIVar1[2].klass * size;
				fVar7 = (float)local_38._4_4_ - UVar8.y;
				fVar4 = local_58 - UVar8.z;
				fVar5 = fStack_54 - UVar8.x;
			} while (fVar6 * fVar6 < fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4);
			iVar3 = 4;
		}
	label_05c6278c: ;
		local_78.Dispose();
		return (bool)(iVar3 == 4 & bVar2);
	}
}
