// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SupplySpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SupplySpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SupplySpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E7")]
internal class SupplySpecial : BaseEmoteSpecial
{
	[Token(Token = "0x17000B7A")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042E9")]
		[Address(RVA = "0x5B0F6A0", Offset = "0x5B0E6A0", VA = "0x5B0F6A0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/SupplySpecial.c (Characters.SupplySpecial$$get_ActiveTime): clean
			return 0.5;
		}
	}

	[Token(Token = "0x17000B7B")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042EA")]
		[Address(RVA = "0x5B0F6B0", Offset = "0x5B0E6B0", VA = "0x5B0F6B0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Characters/SupplySpecial.c (Characters.SupplySpecial$$get_GroundedOnly): clean
			return false;
		}
	}

	[Token(Token = "0x60042EB")]
	[Address(RVA = "0x5B0F6C0", Offset = "0x5B0E6C0", VA = "0x5B0F6C0")]
	public SupplySpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/SupplySpecial.c (Characters.SupplySpecial$$.ctor): clean
		base(owner);
		this.UsesLeft = -1;
		this.MaxUses = 1;
		this.Cooldown = 300.0;
		this.SetCooldownLeft(300.0);
		return;
	}

	[Token(Token = "0x60042EC")]
	[Address(RVA = "0x5B0F700", Offset = "0x5B0E700", VA = "0x5B0F700", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/SupplySpecial.c (Characters.SupplySpecial$$Activate): clean
		Human __this_00;

		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EmoteAnimation(HumanAnimations.EmoteWave);
		return;
	}

	[Token(Token = "0x60042ED")]
	[Address(RVA = "0x5B0F770", Offset = "0x5B0E770", VA = "0x5B0F770", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/SupplySpecial.c (Characters.SupplySpecial$$CanUse): clean
		Human pCVar1;
		bool bVar2;
		bool bVar3;

		bVar2 = this.CanUse();
		if (bVar2) {
			bVar2 = this.get_GroundedOnly();
			pCVar1 = this._human;
			if (bVar2) {
				if (pCVar1 == null) goto label_05c0f7f1;
				if (pCVar1.Grounded == false) {
					return false;
				}
			}
			else if (pCVar1 == null) goto label_05c0f7f1;
			bVar2 = pCVar1.CanEmote();
			if (bVar2) {
				pCVar1 = this._human;
				if (pCVar1 == null) {
	label_05c0f7f1: ;
					throw new NullReferenceException();
				}
				if (pCVar1.InMountedCombat == false) {
					bVar3 = pCVar1.Grounded != false;
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x60042EE")]
	[Address(RVA = "0x5B0F800", Offset = "0x5B0E800", VA = "0x5B0F800", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/SupplySpecial.c (Characters.SupplySpecial$$Deactivate): 24 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		Human pCVar4;
		BaseComponentCache pUVar5;
		Transform pUVar6;
		String name;
		float fVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float fVar10;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float fVar11;
		Quaternion rotation;
		Vector3 UVar12;
		Vector3 UVar13;
		Vector3 UStack_68;
		byte[] auStack_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		byte[] auStack_48 = new byte[8];
		float fStack_40;
		float fStack_3c;
		byte[] auStack_38 = new byte[16];
		Quaternion UStack_28;

		pCVar4 = this._human;
		if (((pCVar4 != null) &&(pUVar5 = pCVar4.Cache, pUVar5 != null)) &&(pUVar6 = pUVar5.Transform, pUVar6 != null)) {
			UStack_28 = pUVar6.rotation;
			UVar12 = Quaternion.Internal_ToEulerRad(ref UStack_28);
			UVar13.x = UVar12.x * 57.29578;
			UVar13.y = UVar12.y * 57.29578;
			UVar13.z = UVar12.z * 57.29578;
			UVar12 = Quaternion.Internal_MakePositive(UVar13);
			auStack_38._8_4_ = extraout_XMM0_Dc;
			auStack_38._0_8_ = UVar12._0_8_;
			auStack_38._12_4_ = extraout_XMM0_Dd;
			pCVar4 = this._human;
			if (((pCVar4 != null) &&(pUVar5 = pCVar4.Cache, pUVar5 != null)) &&(pUVar6 = pUVar5.Transform, pUVar6 != null)) {
				name = SpawnablePrefabs.Supply;
				UVar12 = pUVar6.position;
				pCVar4 = this._human;
				if ((pCVar4 != null) &&(pUVar5 = pCVar4.Cache, pUVar5 != null)) {
					fStack_50 = (float)extraout_XMM0_Dc_00;
					auStack_58 = (byte[])UVar12._0_8_;
					fStack_4c = (float)extraout_XMM0_Dd_00;
					pUVar6 = pUVar5.Transform;
					if (pUVar6 != null) {
						UVar13 = pUVar6.forward;
						fVar8 = UVar13.x;
						fVar9 = UVar13.y;
						fVar10 = extraout_XMM0_Dc_01;
						fVar11 = extraout_XMM0_Dd_01;
						if (g_data_0753e72c == false) {
							fStack_40 = extraout_XMM0_Dc_01;
							auStack_48 = UVar13._0_8_;
							fStack_3c = extraout_XMM0_Dd_01;
							g_data_0753e72c = true;
							fVar8 = (float)auStack_48._0_4_;
							fVar9 = (float)auStack_48._4_4_;
							fVar10 = fStack_40;
							fVar11 = fStack_3c;
						}
						uVar2 = (Vector3.upVector).x;
						uVar3 = (Vector3.upVector).y;
						fVar1 = (Vector3.upVector).z;
						auStack_58._4_4_ = (float)uVar3 * 0.5 + (float)auStack_58._4_4_ + fVar9 + fVar9;
						auStack_58._0_4_ = (float)uVar2 * 0.5 + (float)auStack_58._0_4_ + fVar8 + fVar8;
						fStack_50 = fStack_50 + fVar10 + fVar10 + 0.0;
						fStack_4c = fStack_4c + fVar11 + fVar11 + 0.0;
						UStack_68.x = 0.0;
						UStack_68.y = (float)auStack_38._4_4_ * 0.017453292;
						UStack_68.z = 1.5707964;
						rotation = Quaternion.Internal_FromEulerRad(ref UStack_68);
						UVar12.z = fVar1 * 0.5 + UVar12.z + UVar13.z + UVar13.z;
						UVar12.x = (float)auStack_58._0_4_;
						UVar12.y = (float)auStack_58._4_4_;
						SpawnableSpawner.Spawn(name, UVar12, rotation, 1.0, null);
						this.UsesLeft = -1;
						this.SetCooldownLeft(this.Cooldown);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042EF")]
	[Address(RVA = "0x5B0FA30", Offset = "0x5B0EA30", VA = "0x5B0FA30", Slot = "5")]
	public override void Reset()
	{
		// Lifted from source/cpp/Characters/SupplySpecial.c (Characters.SupplySpecial$$Reset): clean
		this.Reset();
		this.SetCooldownLeft(0.0);
		return;
	}
}
