// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ConfuseSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ConfuseSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ConfuseSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D9")]
internal class ConfuseSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x400205F")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B6B")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042A7")]
		[Address(RVA = "0x5B0A970", Offset = "0x5B09970", VA = "0x5B0A970", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/ConfuseSpecial.c (Characters.ConfuseSpecial$$get_ActiveTime): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000B6C")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042A8")]
		[Address(RVA = "0x5B0A980", Offset = "0x5B09980", VA = "0x5B0A980", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Characters/ConfuseSpecial.c (Characters.ConfuseSpecial$$get_GroundedOnly): clean
			return false;
		}
	}

	[Token(Token = "0x60042A9")]
	[Address(RVA = "0x5B0A990", Offset = "0x5B09990", VA = "0x5B0A990")]
	public ConfuseSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/ConfuseSpecial.c (Characters.ConfuseSpecial$$.ctor): clean
		this.Range = 250.0;
		base(owner);
		this.Cooldown = 30.0;
		return;
	}

	[Token(Token = "0x60042AA")]
	[Address(RVA = "0x5B0A9B0", Offset = "0x5B099B0", VA = "0x5B0A9B0", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/ConfuseSpecial.c (Characters.ConfuseSpecial$$Activate): 22 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Human pCVar3;
		BaseGameManager pGVar4;
		PhotonView __this_00;
		BaseComponentCache pUVar5;
		Transform pUVar6;
		object pIVar7;
		bool bVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar10;
		System_Collections_Generic_HashSet_Enumerator_T__o local_98;
		byte[] local_80 = new byte[16];
		object local_70;
		byte[] local_68 = new byte[16];
		float local_58;
		float local_48;
		byte[] local_38 = new byte[16];

		local_98._set = null;
		local_98._index = 0;
		local_98._version = 0;
		local_98._current = null;
		pCVar3 = this._human;
		if (pCVar3 != null) {
			pCVar3.EmoteAnimation(HumanAnimations.Dodge);
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar1) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				__this_00 = (*(ulong)((sbyte)pGVar4 + 0x48));
				if (__this_00 != null) {
					local_80.GetEnumerator((HashSet<object>)__this_00);
					local_98._current = local_70;
					local_98._set = (HashSet<T>)local_80._0_8_;
					local_98._index = local_80._8_4_;
					local_98._version = local_80._12_4_;
					local_80._0_8_ = null;
					local_80._8_8_ = &local_98;
	label_05c0ab20: ;
					do {
						bVar8 = local_98.MoveNext();
						pIVar7 = local_98._current;
						if (!bVar8) {
							local_98.Dispose();
							return;
						}
						pCVar3 = this._human;
						if (pCVar3 == null) {
							throw new NullReferenceException();
						}
						pUVar5 = pCVar3.Cache;
						if (pUVar5 == null) {
							throw new NullReferenceException();
						}
						pUVar6 = pUVar5.Transform;
						if (pUVar6 == null) {
							throw new NullReferenceException();
						}
						UVar10 = pUVar6.position;
						local_48 = UVar10.z;
						local_38._8_4_ = extraout_XMM0_Dc;
						local_38._0_8_ = UVar10._0_8_;
						local_38._12_4_ = extraout_XMM0_Dd;
						if (pIVar7 == null) {
							throw new NullReferenceException();
						}
						if (pIVar7[8].klass == null) {
							throw new NullReferenceException();
						}
						pUVar6 = (Transform)((pIVar7[8].klass)._1).name;
						if (pUVar6 == null) {
							throw new NullReferenceException();
						}
						UVar10 = pUVar6.position;
						local_58 = UVar10.z;
						local_68._8_4_ = extraout_XMM0_Dc_00;
						local_68._0_8_ = UVar10._0_8_;
						local_68._12_4_ = extraout_XMM0_Dd_00;
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar2 == 0) {
						}
						fVar9 = ((float)local_38._4_4_ - (float)local_68._4_4_) *((float)local_38._4_4_ - (float)local_68._4_4_) +((float)local_38._0_4_ - (float)local_68._0_4_) *((float)local_38._0_4_ - (float)local_68._0_4_) +(local_48 - local_58) * (local_48 - local_58);
						if (fVar9 < 0.0) goto label_05c0ac40;
					} while (this.Range <= SQRT(fVar9));
					goto label_05c0ac55;
				}
			}
		}
		throw new NullReferenceException();
	label_05c0ac40: ;
		fVar9 = sqrtf(fVar9);
		if (fVar9 < this.Range) {
	label_05c0ac55: ;
			if (*(sbyte)&pIVar7[8].monitor != false) {
				(*pIVar7.klass.vtable[0xaf].methodPtr)(pIVar7,pIVar7.klass.vtable[0xaf].method);
			}
		}
		goto label_05c0ab20;
	}

	[Token(Token = "0x60042AB")]
	[Address(RVA = "0x5B0AD30", Offset = "0x5B09D30", VA = "0x5B0AD30", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/ConfuseSpecial.c (Characters.ConfuseSpecial$$Deactivate): clean
		return;
	}
}
