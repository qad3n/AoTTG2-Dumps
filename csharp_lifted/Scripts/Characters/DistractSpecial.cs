// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DistractSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DistractSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DistractSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DB")]
internal class DistractSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4002061")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B6F")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042B1")]
		[Address(RVA = "0x5B0B130", Offset = "0x5B0A130", VA = "0x5B0B130", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/DistractSpecial.c (Characters.DistractSpecial$$get_ActiveTime): clean
			return 1.0;
		}
	}

	[Token(Token = "0x17000B70")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042B2")]
		[Address(RVA = "0x5B0B140", Offset = "0x5B0A140", VA = "0x5B0B140", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Characters/DistractSpecial.c (Characters.DistractSpecial$$get_GroundedOnly): clean
			return false;
		}
	}

	[Token(Token = "0x60042B3")]
	[Address(RVA = "0x5B0B150", Offset = "0x5B0A150", VA = "0x5B0B150")]
	public DistractSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/DistractSpecial.c (Characters.DistractSpecial$$.ctor): clean
		this.Range = 300.0;
		base(owner);
		this.Cooldown = 20.0;
		return;
	}

	[Token(Token = "0x60042B4")]
	[Address(RVA = "0x5B0B170", Offset = "0x5B0A170", VA = "0x5B0B170", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/DistractSpecial.c (Characters.DistractSpecial$$Activate): clean
		Human __this_00;

		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EmoteAnimation(HumanAnimations.SpecialMarco0);
		return;
	}

	[Token(Token = "0x60042B5")]
	[Address(RVA = "0x5B0B1E0", Offset = "0x5B0A1E0", VA = "0x5B0B1E0", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/DistractSpecial.c (Characters.DistractSpecial$$Deactivate): 18 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Human pCVar3;
		BaseGameManager pGVar4;
		PhotonView __this_00;
		BaseComponentCache pUVar5;
		Transform pUVar6;
		object __this_01;
		bool bVar7;
		float fVar8;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar9;
		System_Collections_Generic_HashSet_Enumerator_T__o local_98;
		byte[] local_80 = new byte[16];
		BasicTitan local_70;
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
			if (pCVar3._state != 8) {
				return;
			}
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar1) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				__this_00 = (*(ulong)((sbyte)pGVar4 + 0x48));
				if (__this_00 != null) {
					local_80.GetEnumerator((HashSet<object>)__this_00);
					local_98._current = (object)local_70;
					local_98._set = (HashSet<T>)local_80._0_8_;
					local_98._index = local_80._8_4_;
					local_98._version = local_80._12_4_;
					local_80._0_8_ = null;
					local_80._8_8_ = &local_98;
	label_05c0b320: ;
					do {
						bVar7 = local_98.MoveNext();
						__this_01 = local_98._current;
						if (!bVar7) {
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
						UVar9 = pUVar6.position;
						local_48 = UVar9.z;
						local_38._8_4_ = extraout_XMM0_Dc;
						local_38._0_8_ = UVar9._0_8_;
						local_38._12_4_ = extraout_XMM0_Dd;
						if ((BasicTitan)__this_01 == null) {
							throw new NullReferenceException();
						}
						pUVar5 = ((BasicTitan)((long)__this_01 + 0x10)).Cache;
						if (pUVar5 == null) {
							throw new NullReferenceException();
						}
						pUVar6 = pUVar5.Transform;
						if (pUVar6 == null) {
							throw new NullReferenceException();
						}
						UVar9 = pUVar6.position;
						local_58 = UVar9.z;
						local_68._8_4_ = extraout_XMM0_Dc_00;
						local_68._0_8_ = UVar9._0_8_;
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
						fVar8 = ((float)local_38._4_4_ - (float)local_68._4_4_) *((float)local_38._4_4_ - (float)local_68._4_4_) +((float)local_38._0_4_ - (float)local_68._0_4_) *((float)local_38._0_4_ - (float)local_68._0_4_) +(local_48 - local_58) * (local_48 - local_58);
						if (fVar8 < 0.0) goto label_05c0b440;
					} while (this.Range <= SQRT(fVar8));
					goto label_05c0b455;
				}
			}
		}
		throw new NullReferenceException();
	label_05c0b440: ;
		fVar8 = sqrtf(fVar8);
		if (fVar8 < this.Range) {
	label_05c0b455: ;
			__this_01.Distract((BaseCharacter)this._human);
		}
		goto label_05c0b320;
	}
}
