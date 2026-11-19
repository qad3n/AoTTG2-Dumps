// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanPlayerController
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Controllers/HumanPlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/HumanPlayerController.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000683")]
internal class HumanPlayerController : BasePlayerController, IHumanController
{
	[Token(Token = "0x4001D37")]
	[FieldOffset(Offset = "0x58")]
	protected Human _human;

	[Token(Token = "0x4001D38")]
	[FieldOffset(Offset = "0x60")]
	protected float _reelOutScrollTimeLeft;

	[Token(Token = "0x4001D39")]
	[FieldOffset(Offset = "0x64")]
	protected float _reelInScrollCooldownLeft;

	[Token(Token = "0x4001D3A")]
	[FieldOffset(Offset = "0x68")]
	protected float _reelInScrollCooldown;

	[Token(Token = "0x4001D3B")]
	[FieldOffset(Offset = "0x70")]
	protected HumanInputSettings _humanInput;

	[Token(Token = "0x4001D3C")]
	[FieldOffset(Offset = "0x78")]
	protected Dictionary<HumanDashDirection, KeybindSetting> _dashKeys;

	[Token(Token = "0x4001D3D")]
	[FieldOffset(Offset = "0x80")]
	protected Dictionary<HumanDashDirection, float> _dashTimes;

	[Token(Token = "0x4001D3E")]
	[FieldOffset(Offset = "0x0")]
	protected static LayerMask HookMask;

	[Token(Token = "0x4001D3F")]
	[FieldOffset(Offset = "0x88")]
	private HashSet<HumanState> _illegalWeaponStates;

	[Token(Token = "0x6003EEF")]
	[Address(RVA = "0x5AAAAE0", Offset = "0x5AA9AE0", VA = "0x5AAAAE0", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$Awake): clean
		InputSettings pSVar1;
		Human pCVar2;
		HumanInputSettings method_00;

		this.Awake();
		pCVar2 = this.GetComponent<Human>();
		this._human = pCVar2;
		pSVar1 = SettingsManager.InputSettings;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		method_00 = pSVar1.Human;
		this._humanInput = method_00;
		this.SetupDash();
		return;
	}

	[Token(Token = "0x6003EF0")]
	[Address(RVA = "0x5AAAB80", Offset = "0x5AA9B80", VA = "0x5AAAB80")]
	private void SetupDash()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$SetupDash): 2 lines keep C-only constructs
		InputSettings pSVar1;
		GeneralInputSettings pSVar2;
		Dictionary<HumanDashDirection, KeybindSetting> __this_00;
		Dictionary<HumanDashDirection, float> __this_01;

		pSVar1 = SettingsManager.InputSettings;
		if (pSVar1 != null) {
			pSVar2 = pSVar1.General;
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<HumanDashDirection, KeybindSetting>));
			__this_00 = new Dictionary<Int32Enum, object>();
			if ((pSVar2 != null) &&(__this_00 != null)) {
				__this_00.Add(1, (object)pSVar2.Forward);
				__this_00.Add(2, (object)pSVar2.Back);
				__this_00.Add(3, (object)pSVar2.Left);
				__this_00.Add(4, (object)pSVar2.Right);
				this._dashKeys = __this_00;
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<HumanDashDirection, float>));
				__this_01 = new Dictionary<Int32Enum, float>();
				if (__this_01 != null) {
					__this_01.Add(1, -1.0);
					__this_01.Add(2, -1.0);
					__this_01.Add(3, -1.0);
					__this_01.Add(4, -1.0);
					this._dashTimes = __this_01;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EF1")]
	[Address(RVA = "0x5AAAD70", Offset = "0x5AA9D70", VA = "0x5AAAD70", Slot = "6")]
	protected override void Update()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$Update): clean
		Human pCVar1;

		pCVar1 = this._human;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		if (pCVar1.FinishSetup == false) {
			return;
		}
		this.Update();
		return;
	}

	[Token(Token = "0x6003EF2")]
	[Address(RVA = "0x5AAADA0", Offset = "0x5AA9DA0", VA = "0x5AAADA0", Slot = "8")]
	protected override void UpdateMovementInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$UpdateMovementInput): 4 lines keep C-only constructs
		bool pbVar1;
		byte bVar2;
		byte bVar3;
		int iVar4;
		Human pCVar5;
		HumanInputSettings pSVar6;
		KeybindSetting pSVar7;
		Human pCVar8;
		GeneralInputSettings pSVar9;
		BaseCharacter pCVar10;
		BaseUseable pCVar11;
		BaseUseable pCVar12;
		AnimationHandler pCVar13;
		bool bVar14;
		bool bVar15;
		uint uVar16;
		int forward;
		uint right;
		int iVar17;
		float fVar18;
		float fVar19;
		ulong uStack_30;

		uStack_30 = 0;
		if (inMenu) {
	label_05baae21: ;
			if (this._autorun != false) {
				return;
			}
			pCVar5 = this._human;
			if (pCVar5 != null) {
				pCVar5.HasDirection = false;
				return;
			}
			goto label_05bab2fb;
		}
		pCVar5 = this._human;
		if (pCVar5 == null) goto label_05bab2fb;
		if ((pCVar5.Dead != false) || (pCVar5._state == 0xf)) goto label_05baae21;
		pSVar6 = this._humanInput;
		if ((pSVar6 == null) ||(pSVar7 = pSVar6.HorseWalk, pSVar7 == null)) goto label_05bab2fb;
		bVar14 = pSVar7.GetKey(false);
		if (bVar14) {
			pCVar8 = this._human;
			if (pCVar8 == null) goto label_05bab2fb;
			bVar14 = true;
			if (pCVar8.MountState != 1) goto label_05baae89;
		}
		else {
	label_05baae89: ;
			pSVar6 = this._humanInput;
			if ((pSVar6 == null) ||(pSVar7 = pSVar6.Walk, pSVar7 == null)) goto label_05bab2fb;
			bVar14 = false;
			bVar15 = pSVar7.GetKey(false);
			if (bVar15) {
				pCVar8 = this._human;
				if (pCVar8 == null) goto label_05bab2fb;
				bVar14 = pCVar8.MountState == 0;
			}
		}
		pCVar5.IsWalk = bVar14;
		pCVar5 = this._human;
		if (pCVar5 == null) goto label_05bab2fb;
		if (pCVar5.MountState != 1) {
			iVar4 = pCVar5._state;
			if (pCVar5.Grounded == false) {
				if (iVar4 == 8) {
					return;
				}
				if (iVar4 == 9) {
					pCVar11 = pCVar5.Special;
					if (pCVar11 == null) {
						return;
					}
					pCVar12 = pCVar11.klass;
					bVar2 = (pCVar12._2).typeHierarchyDepth;
					bVar3 = (typeof(DownStrikeSpecial)._2).typeHierarchyDepth;
					if ((bVar2 < bVar3) ||((pCVar12._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(DownStrikeSpecial))) {
						bVar3 = (typeof(StockSpecial)._2).typeHierarchyDepth;
						if (bVar2 < bVar3) {
							return;
						}
						if ((pCVar12._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(StockSpecial) ) {
							return;
						}
					}
				}
				pCVar13 = pCVar5.Animation;
				if (pCVar13 == null) goto label_05bab2fb;
				bVar14 = pCVar13.IsPlaying("dash");
				if (bVar14) {
					return;
				}
				pCVar5 = this._human;
				if ((pCVar5 == null) ||(pCVar13 = pCVar5.Animation, pCVar13 == null)) goto label_05bab2fb;
				bVar14 = pCVar13.IsPlaying("jump");
				if (bVar14) {
					return;
				}
				pCVar5 = this._human;
				if (pCVar5 == null) goto label_05bab2fb;
				bVar14 = pCVar5.IsFiringThunderspear();
				if (bVar14) {
					return;
				}
			}
			else if (iVar4 != 0) {
				return;
			}
		}
		pSVar9 = this._generalInput;
		if ((pSVar9 == null) ||(pSVar7 = pSVar9.Autorun, pSVar7 == null)) goto label_05bab2fb;
		bVar14 = pSVar7.GetKeyDown(false);
		if (bVar14) {
			pbVar1 = &this._autorun;
			*pbVar1 = (bool)(*pbVar1 ^ 1);
		}
		pSVar9 = this._generalInput;
		if ((pSVar9 == null) ||(pSVar7 = pSVar9.Forward, pSVar7 == null)) goto label_05bab2fb;
		bVar14 = false;
		bVar15 = pSVar7.GetKey(false);
		if (bVar15) {
			iVar17 = 1;
		}
		else {
			pSVar9 = this._generalInput;
			if ((pSVar9 == null) ||(pSVar7 = pSVar9.Back, pSVar7 == null)) goto label_05bab2fb;
			bVar15 = pSVar7.GetKey(false);
			bVar14 = !bVar15;
			iVar17 = -(uint)bVar15;
		}
		pSVar9 = this._generalInput;
		if ((pSVar9 == null) ||(pSVar7 = pSVar9.Left, pSVar7 == null)) goto label_05bab2fb;
		bVar15 = pSVar7.GetKey(false);
		uVar16 = 0xffffffff;
		if (bVar15) {
	label_05baafc2: ;
			this._autorun = false;
			bVar14 = true;
	label_05baafc8: ;
			right = uVar16;
		}
		else {
			pSVar9 = this._generalInput;
			if ((pSVar9 == null) ||(pSVar7 = pSVar9.Right, pSVar7 == null)) goto label_05bab2fb;
			bVar15 = pSVar7.GetKey(false);
			uVar16 = (uint)bVar15;
			if ((!bVar14) || (bVar15)) goto label_05baafc2;
			right = 0;
			bVar14 = this._autorun == false;
			if (bVar14) goto label_05baafc8;
		}
		forward = 1;
		if (bVar14) {
			forward = iVar17;
		}
		pCVar10 = this._character;
		if (forward == 0 && right == 0) {
			if (pCVar10 != null) {
				pCVar10.HasDirection = false;
				pCVar5 = this._human;
				if (pCVar5 != null) {
					pCVar5.TargetMagnitude = 0.0;
					return;
				}
			}
			goto label_05bab2fb;
		}
		fVar18 = this.GetTargetAngle(forward, right);
		if (pCVar10 == null) goto label_05bab2fb;
		pCVar10.TargetAngle = fVar18;
		pCVar10 = this._character;
		if (pCVar10 == null) goto label_05bab2fb;
		pCVar10.HasDirection = true;
		fVar19 = (float)(int)right;
		fVar18 = (float)forward;
		uStack_30 = (ulong)(uint)fVar19;
		fVar18 = fVar18 * fVar18 + fVar19 * fVar19 + 0.0;
		if (fVar18 < 0.0) {
			fVar19 = sqrtf(fVar18);
		}
		else {
			fVar19 = SQRT(fVar18);
		}
		if (fVar19 <= 0.95) {
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05bab287;
	label_05bab254: ;
				if (0.0 <= fVar18) goto label_05bab261;
	label_05bab299: ;
				fVar18 = sqrtf(fVar18);
			}
			else {
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05bab254;
	label_05bab287: ;
				if (fVar18 < 0.0) goto label_05bab299;
	label_05bab261: ;
				fVar18 = SQRT(fVar18);
			}
			fVar19 = 0.0;
			if (0.25 <= fVar18) {
				fVar19 = (float)il2cpp_runtime_helper_0599adc0(&uStack_30, 0);
			}
		}
		else {
			fVar19 = 1.0;
		}
		pCVar5 = this._human;
		if (pCVar5 != null) {
			if ((((pCVar5.IsWalk != false) && (pCVar5.MountState == 0)) &&(pCVar5._state == 0)) && (pCVar5.Grounded != false)) {
				fVar19 = fVar19 * 0.25;
			}
			pCVar5.TargetMagnitude = fVar19;
			return;
		}
	label_05bab2fb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EF3")]
	[Address(RVA = "0x5AAB300", Offset = "0x5AAA300", VA = "0x5AAB300", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$UpdateUI): 201 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		byte bVar7;
		byte bVar8;
		int iVar9;
		uint uVar10;
		BaseCamera pCVar11;
		Camera pUVar12;
		Rigidbody __this_00;
		BaseComponentCache pUVar13;
		Transform pUVar14;
		BoolSetting pSVar15;
		IntSetting pSVar16;
		AbilitySettings pSVar17;
		InGameSet pSVar18;
		InGameMiscSettings pSVar19;
		BaseUseable pCVar20;
		BaseUseable pCVar21;
		byte[] auVar22 = new byte[16];
		byte[] auVar23 = new byte[16];
		float pfVar24;
		Ray ray;
		float fVar25;
		float fVar26;
		bool bVar27;
		int iVar28;
		Human pCVar29;
		String pSVar30;
		String str0;
		UISettings pSVar31;
		String* ppSVar32;
		JSONNode pSVar33;
		UnityEngine_Vector3_StaticFields pUVar34;
		Vector3 pUVar35;
		float fVar36;
		float fVar37;
		float fVar38;
		float fVar39;
		float extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		float fVar40;
		float extraout_XMM0_Db_01;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		float extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dc_05;
		uint extraout_XMM0_Dc_06;
		uint extraout_XMM0_Dc_07;
		float extraout_XMM0_Dc_08;
		uint extraout_XMM0_Dc_09;
		uint extraout_XMM0_Dc_10;
		uint extraout_XMM0_Dc_11;
		float extraout_XMM0_Dc_12;
		float fVar41;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		float extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		uint extraout_XMM0_Dd_05;
		uint extraout_XMM0_Dd_06;
		uint extraout_XMM0_Dd_07;
		float extraout_XMM0_Dd_08;
		uint extraout_XMM0_Dd_09;
		uint extraout_XMM0_Dd_10;
		uint extraout_XMM0_Dd_11;
		float extraout_XMM0_Dd_12;
		float fVar42;
		uint uVar43;
		uint uVar44;
		float fVar45;
		byte[] auVar46 = new byte[12];
		byte[] auVar47 = new byte[16];
		byte[] auVar48 = new byte[16];
		Quaternion UVar49;
		Quaternion rotation;
		Vector3 UVar50;
		Vector3 UVar51;
		Vector3 origin;
		Vector3 position;
		Vector3 position_00;
		Vector3 position_01;
		Vector3 direction;
		Vector3 direction_00;
		float fStack_1d8;
		float fStack_1d4;
		float fStack_1d0;
		float fStack_1cc;
		float fStack_1c8;
		float fStack_1b0;
		float fStack_1ac;
		byte[] auStack_1a8 = new byte[8];
		float fStack_1a0;
		float fStack_19c;
		float fStack_18c;
		byte[] auStack_188 = new byte[8];
		float fStack_180;
		float fStack_17c;
		byte[] auStack_178 = new byte[8];
		float fStack_170;
		float fStack_16c;
		float fStack_160;
		int iStack_15c;
		UnityEngine_Vector3_StaticFields UStack_158;
		byte[] auStack_d8 = new byte[8];
		float fStack_d0;
		float fStack_cc;
		byte[] auStack_c8 = new byte[8];
		float fStack_c0;
		float fStack_bc;
		ulong uStack_b8;
		ulong uStack_b0;
		ulong uStack_a8;
		byte[] auStack_98 = new byte[16];
		float fStack_88;
		float fStack_84;
		float fStack_80;
		float fStack_7c;
		byte[] auStack_78 = new byte[16];
		RaycastHit UStack_68;

		UStack_68.m_UV.x = 0.0;
		UStack_68.m_UV.y = 0.0;
		UStack_68.m_Collider.m_Data = (EntityId)0x0;
		UStack_68.m_Normal.y = 0.0;
		UStack_68.m_Normal.z = 0.0;
		UStack_68.m_FaceID = 0;
		UStack_68.m_Distance = 0.0;
		UStack_68.m_Point.x = 0.0;
		UStack_68.m_Point.y = 0.0;
		UStack_68.m_Point.z = 0.0;
		UStack_68.m_Normal.x = 0.0;
		fStack_1b0 = 0.0;
		iStack_15c = 0;
		fStack_1ac = 0.0;
		fStack_160 = 0.0;
		UStack_158.positiveInfinityVector.x = 0.0;
		UStack_158.positiveInfinityVector.y = 0.0;
		UStack_158.positiveInfinityVector.z = 0.0;
		UStack_158.negativeInfinityVector.x = 0.0;
		UStack_158.negativeInfinityVector.y = 0.0;
		UStack_158.negativeInfinityVector.z = 0.0;
		UStack_158.rightVector.y = 0.0;
		UStack_158.rightVector.z = 0.0;
		UStack_158.forwardVector.x = 0.0;
		UStack_158.forwardVector.y = 0.0;
		UStack_158.forwardVector.z = 0.0;
		UStack_158.backVector.x = 0.0;
		uStack_b8 = 0;
		uStack_b0 = 0;
		uStack_a8 = 0;
		pCVar11 = SceneLoader.CurrentCamera;
		if (pCVar11 == null) goto label_05bac912;
		pUVar12 = pCVar11.Camera;
		UVar50 = CursorManager.GetInGameMousePosition();
		if (pUVar12 == null) goto label_05bac912;
		UStack_158 = pUVar12.ScreenPointToRay(UVar50);
		pSVar30 = "???";
		pCVar29 = this._human;
		if (pCVar29 == null) goto label_05bac912;
		str0 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		if (pCVar29.CarryState == 1) {
			UStack_158.forwardVector.z = UStack_158.oneVector.y;
			UStack_158.backVector.x = UStack_158.oneVector.z;
			UStack_158.forwardVector.y = UStack_158.oneVector.x;
			UStack_158.forwardVector.x = UStack_158.zeroVector.z;
			UStack_158.rightVector.y = UStack_158.zeroVector.x;
			UStack_158.rightVector.z = UStack_158.zeroVector.y;
			pCVar29 = pCVar29.Carrier;
			bVar27 = ((Object)pCVar29 != null);
			if (!bVar27) {
				UStack_158.negativeInfinityVector.y = UStack_158.forwardVector.z;
				UStack_158.negativeInfinityVector.z = UStack_158.backVector.x;
				UStack_158.positiveInfinityVector.x = UStack_158.rightVector.y;
				UStack_158.positiveInfinityVector.y = UStack_158.rightVector.z;
				UStack_158.positiveInfinityVector.z = UStack_158.forwardVector.x;
				UStack_158.negativeInfinityVector.x = UStack_158.forwardVector.y;
				pCVar29 = this._human;
				if (pCVar29 == null) goto label_05bac912;
				goto label_05bab6e7;
			}
			pCVar29 = this._human;
			if (pCVar29 == null) goto label_05bac912;
			pCVar29 = pCVar29.Carrier;
			if (pCVar29 == null) goto label_05bac912;
			fVar42 = pCVar29.CarryVelocity.x;
			uVar1 = pCVar29.CarryVelocity.y;
			uVar4 = pCVar29.CarryVelocity.z;
			fVar42 = (float)uVar4 * (float)uVar4 + fVar42 * fVar42 + (float)uVar1 * (float)uVar1;
			pUVar35 = (Vector3)&UStack_158.rightVector.y;
			if (fVar42 < 0.0) goto label_05bab68b;
	label_05bab759: ;
			fStack_1b0 = SQRT(fVar42);
		}
		else {
			UStack_158.negativeInfinityVector.y = UStack_158.oneVector.y;
			UStack_158.negativeInfinityVector.z = UStack_158.oneVector.z;
			UStack_158.negativeInfinityVector.x = UStack_158.oneVector.x;
			UStack_158.positiveInfinityVector.z = UStack_158.zeroVector.z;
			UStack_158.positiveInfinityVector.x = UStack_158.zeroVector.x;
			UStack_158.positiveInfinityVector.y = UStack_158.zeroVector.y;
	label_05bab6e7: ;
			pUVar13 = pCVar29.Cache;
			if ((pUVar13 == null) ||(__this_00 = pUVar13.Rigidbody, __this_00 == null)) goto label_05bac912;
			UVar50 = __this_00.linearVelocity;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar10 == 0) {
			}
			fVar42 = UVar50.z * UVar50.z + UVar50.y * UVar50.y + UVar50.x * UVar50.x;
			pUVar35 = &UStack_158.positiveInfinityVector;
			if (0.0 <= fVar42) goto label_05bab759;
	label_05bab68b: ;
			fStack_1b0 = sqrtf(fVar42);
		}
		uStack_a8._0_4_ = (*(uint)((sbyte)pUVar35 + 0x30));
		uStack_a8._4_4_ = (*(uint)((sbyte)pUVar35 + 0x34));
		fVar42 = pUVar35.y;
		uStack_b8._0_4_ = pUVar35.x;
		uStack_b8._4_4_ = pUVar35.y;
		pfVar24 = &pUVar35.z;
		fStack_1d0 = *pfVar24;
		fStack_1cc = (*(uint)((sbyte)pUVar35 + 0x2c));
		uStack_b0 = *(ulong)pfVar24;
		iVar28 = (HumanPlayerController.HookMask).value;
		fStack_1c8 = 1000.0;
		ray.m_Origin.z = (float)(undefined4)uStack_b0;
		ray.m_Direction.x = (float)uStack_b0._4_4_;
		ray.m_Origin.x = (float)(undefined4)uStack_b8;
		ray.m_Origin.y = (float)uStack_b8._4_4_;
		ray.m_Direction.y = (float)(undefined4)uStack_a8;
		ray.m_Direction.z = (float)uStack_a8._4_4_;
		bVar27 = Physics.Raycast(ray, ref UStack_68, 1000.0, iVar28);
		if (bVar27) {
			UVar50 = UStack_68.point;
			pCVar29 = this._human;
			if (pCVar29 == null) goto label_05bac912;
			pUVar13 = pCVar29.Cache;
			if (pUVar13 == null) goto label_05bac912;
			pUVar14 = pUVar13.Transform;
			if (pUVar14 == null) goto label_05bac912;
			UVar51 = pUVar14.position;
			auVar46._0_8_ = UVar51._0_8_;
			auVar46._8_4_ = extraout_XMM0_Dc;
			auVar48._12_4_ = extraout_XMM0_Dd;
			auVar48._0_12_ = auVar46;
			fStack_1d8 = UVar50.x;
			fStack_1d4 = UVar50.y;
			fVar45 = UVar51.z;
			fVar37 = UVar51.x;
			if (Il2CppMethodInitialized_0753e729 == false) {
				auStack_1a8._4_4_ = UVar51.x;
				auStack_1a8._0_4_ = UVar51.z;
				fStack_1a0 = fVar42;
				fStack_19c = UVar51.y;
				_auStack_178 = auVar48;
				Il2CppMethodInitialized_0753e729 = true;
				fVar45 = (float)auStack_1a8._0_4_;
				fVar37 = (float)auStack_1a8._4_4_;
				auVar46 = _auStack_178;
			}
			fStack_1d4 = fStack_1d4 - auVar46._4_4_;
			fVar45 = UVar50.z - fVar45;
			fStack_1c8 = fStack_1d4 * fStack_1d4 + (fStack_1d8 - fVar37) * (fStack_1d8 - fVar37) + fVar45 * fVar45;
			fVar42 = 0.0;
			fStack_1d0 = 0.0;
			fStack_1cc = 0.0;
			if (fStack_1c8 < 0.0) {
				fStack_1c8 = sqrtf(fStack_1c8);
			}
			else {
				fStack_1c8 = SQRT(fStack_1c8);
			}
			iStack_15c = (int32_t)fStack_1c8;
			pSVar30 = iStack_15c.ToString();
		}
		pSVar31 = SettingsManager.UISettings;
		if (pSVar31 == null) goto label_05bac912;
		pSVar15 = pSVar31.ShowCrosshairDistance;
		if (pSVar15 == null) goto label_05bac912;
		fStack_1d4 = fVar42;
		if (pSVar15._value != false) {
			str0 = String.Concat(str0, pSVar30);
			pSVar31 = SettingsManager.UISettings;
			fStack_1d4 = fVar42;
			if (pSVar31 == null) goto label_05bac912;
		}
		pSVar16 = pSVar31.Speedometer;
		if (pSVar16 == null) goto label_05bac912;
		iVar9 = pSVar16._value;
		if (iVar9 == 2) {
			bVar27 = (str0 != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar27) {
				str0 = String.Concat(str0, "\n");
			}
			fVar42 = fStack_1b0;
			fStack_1ac = fStack_1b0;
			pCVar29 = this._human;
			if (pCVar29 == null) goto label_05bac912;
			pCVar20 = pCVar29.Weapon;
			if (pCVar20 == null) goto label_05babd10;
			pCVar21 = pCVar20.klass;
			bVar8 = (pCVar21._2).typeHierarchyDepth;
			bVar7 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((bVar8 < bVar7) ||((pCVar21._2).typeHierarchy[(ulong)bVar7 - 1] != typeof(BladeWeapon))) {
				bVar7 = (typeof(AHSSWeapon)._2).typeHierarchyDepth;
				if ((bVar7 <= bVar8) &&((pCVar21._2).typeHierarchy[(ulong)bVar7 - 1] == typeof(AHSSWeapon))) {
					pSVar33 = CharacterData.HumanWeaponInfo;
					if (pSVar33 == null) goto label_05bac912;
					ppSVar32 = &"AHSS";
					goto label_05babcab;
				}
				bVar7 = (typeof(APGWeapon)._2).typeHierarchyDepth;
				if ((bVar7 <= bVar8) &&((pCVar21._2).typeHierarchy[(ulong)bVar7 - 1] == typeof(APGWeapon))) {
					pSVar33 = CharacterData.HumanWeaponInfo;
					if (pSVar33 == null) goto label_05bac912;
					ppSVar32 = &"APG";
					goto label_05babcab;
				}
				bVar7 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
				if ((bVar7 <= bVar8) &&((pCVar21._2).typeHierarchy[(ulong)bVar7 - 1] ==typeof(ThunderspearWeapon))) {
					pSVar18 = SettingsManager.InGameCurrent;
					if ((pSVar18 == null) ||((pSVar19 = pSVar18.Misc, pSVar19 == null ||(pSVar15 = pSVar19.ThunderspearPVP, pSVar15 == null)))) goto label_05bac912;
					if (pSVar15._value == false) {
						pSVar33 = CharacterData.HumanWeaponInfo;
						if (pSVar33 == null) goto label_05bac912;
						ppSVar32 = &"Thunderspear";
						goto label_05babcab;
					}
				}
			}
			else {
				pSVar33 = CharacterData.HumanWeaponInfo;
				if (pSVar33 == null) goto label_05bac912;
				ppSVar32 = &"Blade";
	label_05babcab: ;
				pSVar33 = pSVar33.get_Item(*ppSVar32);
				if ((pSVar33 == null) ||(pSVar33 = pSVar33.get_Item("DamageMultiplier"), pSVar33 == null)) goto label_05bac912;
				fVar45 = pSVar33.get_AsFloat();
				fStack_1d4 = 0.0;
				fStack_1d0 = 0.0;
				fStack_1cc = 0.0;
				fStack_1b0 = (float)(int)(fVar42 * fVar45);
			}
	label_05babd10: ;
			if (fStack_1b0 <= 10.0) {
				fStack_1b0 = 10.0;
			}
			fStack_1b0 = fStack_1b0 / 100.0;
			pSVar30 = fStack_1b0.ToString("F1");
			str0 = String.Concat(str0, pSVar30, "K");
			pCVar29 = this._human;
			if (pCVar29 == null) goto label_05bac912;
			pCVar20 = pCVar29.Special;
			if (pCVar20 != null) {
				pCVar21 = pCVar20.klass;
				bVar8 = (typeof(AHSSTwinShot)._2).typeHierarchyDepth;
				if ((bVar8 <= (pCVar21._2).typeHierarchyDepth) &&((pCVar21._2).typeHierarchy[(ulong)bVar8 - 1] == typeof(AHSSTwinShot))) {
					fStack_1ac = (float)(int)fStack_1ac;
					if (fStack_1ac <= 10.0) {
						fStack_1ac = 10.0;
					}
					fStack_1ac = fStack_1ac / 100.0;
					pSVar30 = fStack_1ac.ToString("F1");
					str0 = String.Concat(str0, " | ", pSVar30, "K");
				}
			}
		}
		else if (iVar9 == 1) {
			bVar27 = (str0 != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar27) {
				str0 = String.Concat(str0, "\n");
			}
			pSVar30 = fStack_1b0.ToString("F1");
			str0 = String.Concat(str0, pSVar30, " u/s");
		}
		pSVar17 = SettingsManager.AbilitySettings;
		if (pSVar17 == null) goto label_05bac912;
		pSVar15 = pSVar17.CursorCooldown;
		if (pSVar15 == null) goto label_05bac912;
		fVar42 = fStack_1d4;
		if (pSVar15._value == false) {
	label_05babe5a: ;
			uVar10 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar18 = SettingsManager.InGameCurrent;
			if (pSVar18 == null) goto label_05bac912;
			pSVar19 = pSVar18.Misc;
			if (pSVar19 == null) goto label_05bac912;
			pSVar15 = pSVar19.ThunderspearPVP;
			if (pSVar15 == null) goto label_05bac912;
			if (pSVar15._value == false) goto label_05babe5a;
			pCVar29 = this._human;
			if (pCVar29 == null) goto label_05bac912;
			pCVar20 = pCVar29.Weapon;
			if (pCVar20 != null) {
				pCVar21 = pCVar20.klass;
				bVar8 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
				if (bVar8 <= (pCVar21._2).typeHierarchyDepth) {
					if ((pCVar21._2).typeHierarchy[(ulong)bVar8 - 1] !=typeof(ThunderspearWeapon)) goto label_05babe5a;
					bVar27 = (str0 != (String)**(ulong*)(g_data_07556758 + 0xb8));
					if (bVar27) {
						str0 = String.Concat(str0, "\n");
					}
					pCVar29 = this._human;
					if ((pCVar29 == null) ||(pCVar20 = pCVar29.Weapon, pCVar20 == null)) goto label_05bac912;
					bVar8 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
					if (((pCVar20.klass._2).typeHierarchyDepth < bVar8) ||((pCVar20.klass._2).typeHierarchy[(ulong)bVar8 - 1] !=typeof(ThunderspearWeapon))) {
						throw new InvalidCastException();
					}
					fVar45 = pCVar20.Cooldown;
					fVar37 = Time.time;
					fStack_160 = pCVar20.Cooldown;
					fVar42 = 0.0;
					fStack_1d0 = 0.0;
					fStack_1cc = 0.0;
					fVar45 = fVar45 - (fVar37 - pCVar20._lastUseTime);
					if (fVar45 <= fStack_160) {
						fStack_160 = fVar45;
					}
					fStack_160 = (float)(-(uint)(0.0 <= fVar45) & (uint)fStack_160);
					if (fStack_160 <= 0.0) {
						str0 = String.Concat(str0, "<color=#008000>READY</color>");
					}
					else {
						pSVar30 = fStack_160.ToString("F2");
						str0 = String.Concat(str0, "<color=#FF0000>", pSVar30, "</color>");
					}
					uVar10 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
					goto joined_r0x05babe65;
				}
			}
			uVar10 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
	joined_r0x05babe65: ;
		if (uVar10 == 0) {
		}
		CursorManager.SetCrosshairText(str0);
		CursorManager.SetCrosshairColor(fStack_1c8 <= 120.0);
		pSVar31 = SettingsManager.UISettings;
		if (pSVar31 == null) goto label_05bac912;
		pSVar15 = pSVar31.ShowCrosshairArrows;
		if (pSVar15 == null) goto label_05bac912;
		if (pSVar15._value == false) {
			return;
		}
		pCVar29 = this._human;
		if (pCVar29 == null) goto label_05bac912;
		UVar50 = pCVar29.GetAimPoint();
		fVar45 = UVar50.z;
		pCVar11 = SceneLoader.CurrentCamera;
		if (pCVar11 == null) goto label_05bac912;
		pUVar13 = pCVar11.Cache;
		if (pUVar13 == null) goto label_05bac912;
		pUVar14 = pUVar13.Transform;
		if (pUVar14 == null) goto label_05bac912;
		fVar39 = fVar42;
		fVar40 = fStack_1d0;
		fVar41 = fStack_1cc;
		UVar51 = pUVar14.position;
		fVar37 = UVar51.z;
		fVar36 = UVar51.x;
		fVar38 = UVar51.y;
		if (g_data_0753e7b7 == false) {
			fStack_1a0 = (float)extraout_XMM0_Dc_01;
			auStack_1a8 = (byte[])UVar51._0_8_;
			fStack_19c = (float)extraout_XMM0_Dd_01;
			auStack_178._4_4_ = fVar39;
			auStack_178._0_4_ = fVar37;
			fStack_170 = fVar40;
			fStack_16c = fVar41;
			g_data_0753e7b7 = true;
			uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			fVar37 = (float)auStack_178._0_4_;
			fVar39 = (float)auStack_178._4_4_;
			fVar40 = fStack_170;
			fVar41 = fStack_16c;
			fVar36 = (float)auStack_1a8._0_4_;
			fVar38 = (float)auStack_1a8._4_4_;
			fVar25 = fStack_1a0;
			fVar26 = fStack_19c;
		}
		else {
			uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			fVar25 = (float)extraout_XMM0_Dc_01;
			fVar26 = (float)extraout_XMM0_Dd_01;
		}
		if (uVar10 == 0) {
			auStack_1a8._4_4_ = fVar38;
			auStack_1a8._0_4_ = fVar36;
			fStack_1a0 = fVar25;
			fStack_19c = fVar26;
			auStack_178._4_4_ = fVar39;
			auStack_178._0_4_ = fVar37;
			fStack_170 = fVar40;
			fStack_16c = fVar41;
			fVar36 = (float)auStack_1a8._0_4_;
			fVar38 = (float)auStack_1a8._4_4_;
			fVar37 = (float)auStack_178._0_4_;
		}
		fStack_1d8 = UVar50.x;
		fStack_1d4 = UVar50.y;
		fVar39 = (fVar38 - fStack_1d4) * (fVar38 - fStack_1d4) + (fVar36 - fStack_1d8) * (fVar36 - fStack_1d8);
		fVar37 = fVar39 + (fVar37 - fVar45) * (fVar37 - fVar45);
		if (fVar37 < 0.0) {
			fVar37 = sqrtf(fVar37);
			fVar39 = extraout_XMM0_Db;
			fVar40 = extraout_XMM0_Dc_02;
			fVar41 = extraout_XMM0_Dd_02;
		}
		else {
			fVar37 = SQRT(fVar37);
			fVar40 = fVar39;
			fVar41 = fVar39;
		}
		pCVar29 = this._human;
		if (pCVar29 == null) goto label_05bac912;
		pUVar13 = pCVar29.Cache;
		if (pUVar13 == null) goto label_05bac912;
		auStack_178._4_4_ = fVar39;
		auStack_178._0_4_ = fVar37;
		fStack_170 = fVar40;
		fStack_16c = fVar41;
		pUVar14 = pUVar13.Transform;
		if (pUVar14 == null) goto label_05bac912;
		UVar50 = pUVar14.right;
		pCVar29 = this._human;
		if (pCVar29 == null) goto label_05bac912;
		pUVar13 = pCVar29.Cache;
		if (pUVar13 == null) goto label_05bac912;
		fStack_180 = (float)extraout_XMM0_Dc_03;
		auStack_188 = (byte[])UVar50._0_8_;
		fStack_17c = (float)extraout_XMM0_Dd_03;
		auStack_1a8._0_4_ = UVar50.z;
		pUVar14 = pUVar13.Transform;
		if (pUVar14 == null) goto label_05bac912;
		UVar50 = pUVar14.right;
		pCVar11 = SceneLoader.CurrentCamera;
		if (pCVar11 == null) goto label_05bac912;
		fStack_c0 = (float)extraout_XMM0_Dc_04;
		auStack_c8 = UVar50._0_8_;
		fStack_bc = (float)extraout_XMM0_Dd_04;
		pUVar12 = pCVar11.Camera;
		if (pUVar12 == null) goto label_05bac912;
		fStack_88 = (float)auStack_178._0_4_ * *(float)(&g_data_0100ae98 + (ulong)(50.0 < fVar37) * 4);
		auStack_178._0_4_ = fStack_88;
		UVar51.x = fStack_1d8 - (float)auStack_188._0_4_ * fStack_88;
		UVar51.y = fStack_1d4 - (float)auStack_188._4_4_ * fStack_88;
		UVar51.z = fVar45 - (float)auStack_1a8._0_4_ * fStack_88;
		auStack_188._4_4_ = UVar51.y;
		auStack_188._0_4_ = UVar51.x;
		fStack_180 = extraout_XMM0_Dc_00 - fStack_180 * fStack_88;
		fStack_17c = extraout_XMM0_Dd_00 - fStack_17c * fStack_88;
		auStack_1a8._4_4_ = fVar42;
		auStack_1a8._0_4_ = UVar51.z;
		fStack_1a0 = fStack_1d0;
		fStack_19c = fStack_1cc;
		fStack_84 = fStack_88;
		fStack_80 = fStack_88;
		fStack_7c = fStack_88;
		UVar51 = pUVar12.WorldToScreenPoint(UVar51);
		UStack_158.leftVector.z = extraout_XMM0_Dc_05;
		UStack_158.leftVector._0_8_ = UVar51._0_8_;
		UStack_158.rightVector.x = extraout_XMM0_Dd_05;
		UVar51 = CursorManager.GetInGameMousePosition();
		fVar37 = atan2f(UStack_158.leftVector.y - UVar51.y, UStack_158.leftVector.x - UVar51.x);
		uVar43 = 0;
		uVar44 = 0;
		UStack_158.zeroVector.x = 0.0;
		UStack_158.zeroVector.y = 0.0;
		UStack_158.zeroVector.z = fVar37 * 57.29578 * 0.017453292;
		pUVar34 = &UStack_158;
		UVar49 = Quaternion.Internal_FromEulerRad(ref pUVar34.zeroVector);
		pCVar29 = this._human;
		if (pCVar29 == null) goto label_05bac912;
		pUVar13 = pCVar29.Cache;
		if (pUVar13 == null) goto label_05bac912;
		auStack_78._8_4_ = uVar43;
		auStack_78._0_8_ = UVar49._8_8_;
		auStack_78._12_4_ = uVar44;
		UStack_158.downVector.y = (float)extraout_XMM0_Dc_06;
		UStack_158._32_8_ = UVar49._0_8_;
		UStack_158.downVector.z = (float)extraout_XMM0_Dd_06;
		pUVar14 = pUVar13.Transform;
		if (pUVar14 == null) goto label_05bac912;
		UVar51 = pUVar14.position;
		pCVar29 = this._human;
		if (pCVar29 == null) goto label_05bac912;
		pUVar13 = pCVar29.Cache;
		if (pUVar13 == null) goto label_05bac912;
		auStack_98._8_4_ = extraout_XMM0_Dc_07;
		auStack_98._0_8_ = UVar51._0_8_;
		auStack_98._12_4_ = extraout_XMM0_Dd_07;
		pUVar14 = pUVar13.Transform;
		UStack_158.upVector.y = UVar51.z;
		if (pUVar14 == null) goto label_05bac912;
		UVar51 = pUVar14.position;
		fVar37 = UVar51.x;
		fVar39 = UVar51.y;
		if (g_data_0753e72d == false) {
			fStack_d0 = extraout_XMM0_Dc_08;
			auStack_d8 = (byte[])UVar51._0_8_;
			fStack_cc = extraout_XMM0_Dd_08;
			fStack_18c = UVar51.z;
			g_data_0753e72d = true;
			UStack_158.zeroVector.x = 0.0;
			UStack_158.zeroVector.y = 0.0;
			fVar37 = (float)auStack_d8._0_4_;
			fVar39 = (float)auStack_d8._4_4_;
			fVar40 = fStack_d0;
			fVar41 = fStack_cc;
			fVar38 = fStack_18c;
			fVar36 = fStack_18c;
		}
		else {
			UStack_158.zeroVector.x = 0.0;
			UStack_158.zeroVector.y = 0.0;
			fVar40 = extraout_XMM0_Dc_08;
			fVar41 = extraout_XMM0_Dd_08;
			fVar38 = UVar51.z;
			fVar36 = fStack_18c;
		}
		fStack_18c = fVar38;
		UStack_158.zeroVector.x = 0.0;
		UStack_158.zeroVector.y = 0.0;
		fVar38 = fStack_18c;
		if (Il2CppMethodInitialized_0753e729 == false) {
			UStack_158.zeroVector.x = 0.0;
			UStack_158.zeroVector.y = 0.0;
			auStack_d8._4_4_ = fVar39;
			auStack_d8._0_4_ = fVar37;
			fStack_d0 = fVar40;
			fStack_cc = fVar41;
			Il2CppMethodInitialized_0753e729 = true;
			fVar37 = (float)auStack_d8._0_4_;
			fVar39 = (float)auStack_d8._4_4_;
			fVar40 = fStack_d0;
			fVar41 = fStack_cc;
			fVar38 = fStack_18c;
			fVar36 = fStack_18c;
		}
		fStack_18c = fVar36;
		auStack_188._0_4_ = (float)auStack_188._0_4_ - fVar37;
		auStack_188._4_4_ = (float)auStack_188._4_4_ - fVar39;
		fStack_180 = fStack_180 - fVar40;
		fStack_17c = fStack_17c - fVar41;
		auStack_1a8._0_4_ = (float)auStack_1a8._0_4_ - fVar38;
		uVar43 = auStack_1a8._4_4_;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			uVar43 = auStack_1a8._4_4_;
		}
		fVar37 = (float)auStack_1a8._0_4_ * (float)auStack_1a8._0_4_ + auStack_188._4_4_ * auStack_188._4_4_ + auStack_188._0_4_ * auStack_188._0_4_;
		if (fVar37 < 0.0) {
			auStack_1a8._4_4_ = uVar43;
			fVar37 = sqrtf(fVar37);
			uVar43 = extraout_XMM0_Db_00;
			if (1e-05 < fVar37) goto label_05bac294;
	label_05bac25a: ;
			pUVar34 = typeof(Vector3).static_fields;
			auStack_1a8._0_4_ = (pUVar34.zeroVector).z;
			auStack_1a8._4_4_ = 0;
			fStack_1a0 = 0.0;
			fStack_19c = 0.0;
		}
		else {
			fVar37 = SQRT(fVar37);
			auStack_1a8._4_4_ = uVar43;
			if (fVar37 <= 1e-05) goto label_05bac25a;
	label_05bac294: ;
			auStack_1a8._0_4_ = (float)auStack_1a8._0_4_ / fVar37;
			auVar23._4_4_ = fVar37;
			auVar23._0_4_ = fVar37;
			auVar23._8_4_ = uVar43;
			auVar23._12_4_ = uVar43;
			auVar48 = divps(_auStack_188, auVar23);
			UStack_158.zeroVector.x = auVar48._0_4_;
			UStack_158.zeroVector.y = auVar48._4_4_;
		}
		uVar2 = (pUVar34.zeroVector).x;
		uVar5 = (pUVar34.zeroVector).y;
		auStack_188._4_4_ = uVar5;
		auStack_188._0_4_ = uVar2;
		iVar28 = (HumanPlayerController.HookMask).value;
		origin.z = UStack_158.upVector.y;
		origin.x = (float)auStack_98._0_4_;
		origin.y = (float)auStack_98._4_4_;
		direction.z = (float)auStack_1a8._0_4_;
		direction.x = (float)auStack_188._0_4_;
		direction.y = (float)auStack_188._4_4_;
		bVar27 = Physics.Raycast(origin, direction, 120.0, iVar28);
		UVar49.z = (float)auStack_78._0_4_;
		UVar49.w = (float)auStack_78._4_4_;
		UVar49.x = UStack_158.upVector.z;
		UVar49.y = UStack_158.downVector.x;
		position.z = 0.0;
		position.x = UStack_158.leftVector.x;
		position.y = UStack_158.leftVector.y;
		CursorManager.SetHookArrow(true, position, UVar49, bVar27);
		pCVar11 = SceneLoader.CurrentCamera;
		if ((pCVar11 != null) &&(pUVar12 = pCVar11.Camera, pUVar12 != null)) {
			fVar37 = fStack_80 * fStack_c0;
			fVar39 = fStack_7c * fStack_bc;
			position_00.x = fStack_1d8 + fStack_88 * (float)auStack_c8._0_4_;
			position_00.y = fStack_1d4 + fStack_84 * (float)auStack_c8._4_4_;
			position_00.z = fVar45 + (float)auStack_178._0_4_ * UVar50.z;
			UVar50 = pUVar12.WorldToScreenPoint(position_00);
			fStack_1a0 = (float)extraout_XMM0_Dc_09;
			auStack_1a8 = (byte[])UVar50._0_8_;
			fStack_19c = (float)extraout_XMM0_Dd_09;
			UVar50 = CursorManager.GetInGameMousePosition();
			fVar45 = atan2f((float)auStack_1a8._4_4_ - UVar50.y, (float)auStack_1a8._0_4_ - UVar50.x);
			uVar43 = 0;
			uVar44 = 0;
			UStack_158.zeroVector.x = 0.0;
			UStack_158.zeroVector.y = 0.0;
			UStack_158.zeroVector.z = fVar45 * 57.29578 * 0.017453292;
			pUVar34 = &UStack_158;
			UVar49 = Quaternion.Internal_FromEulerRad(ref pUVar34.zeroVector);
			pCVar29 = this._human;
			if ((pCVar29 != null) &&(pUVar13 = pCVar29.Cache, pUVar13 != null)) {
				fStack_180 = (float)uVar43;
				auStack_188 = (byte[])UVar49._8_8_;
				fStack_17c = (float)uVar44;
				fStack_170 = (float)extraout_XMM0_Dc_10;
				auStack_178 = (byte[])UVar49._0_8_;
				fStack_16c = (float)extraout_XMM0_Dd_10;
				pUVar14 = pUVar13.Transform;
				if (pUVar14 != null) {
					UVar50 = pUVar14.position;
					pCVar29 = this._human;
					if ((pCVar29 != null) &&(pUVar13 = pCVar29.Cache, pUVar13 != null)) {
						auStack_c8._0_4_ = UVar50.z;
						UStack_158.leftVector.z = extraout_XMM0_Dc_11;
						UStack_158.leftVector._0_8_ = UVar50._0_8_;
						UStack_158.rightVector.x = extraout_XMM0_Dd_11;
						pUVar14 = pUVar13.Transform;
						if (pUVar14 != null) {
							UVar50 = pUVar14.position;
							fVar45 = UVar50.x;
							fVar40 = UVar50.y;
							if (g_data_0753e72d == false) {
								UStack_158.downVector.y = extraout_XMM0_Dc_12;
								UStack_158._32_8_ = UVar50._0_8_;
								UStack_158.downVector.z = extraout_XMM0_Dd_12;
								g_data_0753e72d = true;
								UStack_158.zeroVector.x = 0.0;
								UStack_158.zeroVector.y = 0.0;
								fVar45 = UStack_158.upVector.z;
								fVar40 = UStack_158.downVector.x;
								fVar41 = UStack_158.downVector.y;
								fVar36 = UStack_158.downVector.z;
							}
							else {
								UStack_158.zeroVector.x = 0.0;
								UStack_158.zeroVector.y = 0.0;
								fVar41 = extraout_XMM0_Dc_12;
								fVar36 = extraout_XMM0_Dd_12;
							}
							UStack_158.zeroVector.x = 0.0;
							UStack_158.zeroVector.y = 0.0;
							if (Il2CppMethodInitialized_0753e729 == false) {
								UStack_158.zeroVector.x = 0.0;
								UStack_158.zeroVector.y = 0.0;
								UStack_158.downVector.x = fVar40;
								UStack_158.upVector.z = fVar45;
								UStack_158.downVector.y = fVar41;
								UStack_158.downVector.z = fVar36;
								Il2CppMethodInitialized_0753e729 = true;
								fVar45 = UStack_158.upVector.z;
								fVar40 = UStack_158.downVector.x;
								fVar41 = UStack_158.downVector.y;
								fVar36 = UStack_158.downVector.z;
							}
							auVar47._0_4_ = position_00.x - fVar45;
							auVar47._4_4_ = position_00.y - fVar40;
							auVar47._8_4_ = (extraout_XMM0_Dc_00 + fVar37) - fVar41;
							auVar47._12_4_ = (extraout_XMM0_Dd_00 + fVar39) - fVar36;
							fVar45 = position_00.z - UVar50.z;
							fVar37 = fVar45 * fVar45 + auVar47._4_4_ * auVar47._4_4_ + auVar47._0_4_ * auVar47._0_4_;
							if (fVar37 < 0.0) {
								fVar37 = sqrtf(fVar37);
								fVar42 = extraout_XMM0_Db_01;
							}
							else {
								fVar37 = SQRT(fVar37);
							}
							if (1e-05 < fVar37) {
								fVar45 = fVar45 / fVar37;
								auVar22._4_4_ = fVar37;
								auVar22._0_4_ = fVar37;
								auVar22._8_4_ = fVar42;
								auVar22._12_4_ = fVar42;
								auVar48 = divps(auVar47, auVar22);
								UStack_158.zeroVector.x = auVar48._0_4_;
								UStack_158.zeroVector.y = auVar48._4_4_;
							}
							else {
								pUVar34 = typeof(Vector3).static_fields;
								fVar45 = (pUVar34.zeroVector).z;
							}
							uVar3 = (pUVar34.zeroVector).x;
							uVar6 = (pUVar34.zeroVector).y;
							direction_00.y = (float)uVar6;
							direction_00.x = (float)uVar3;
							iVar28 = (HumanPlayerController.HookMask).value;
							UVar50.z = (float)auStack_c8._0_4_;
							UVar50.x = UStack_158.leftVector.x;
							UVar50.y = UStack_158.leftVector.y;
							direction_00.z = fVar45;
							bVar27 = Physics.Raycast(UVar50, direction_00, 120.0, iVar28);
							rotation.z = (float)auStack_188._0_4_;
							rotation.w = (float)auStack_188._4_4_;
							rotation.x = (float)auStack_178._0_4_;
							rotation.y = (float)auStack_178._4_4_;
							position_01.z = 0.0;
							position_01.x = (float)auStack_1a8._0_4_;
							position_01.y = (float)auStack_1a8._4_4_;
							CursorManager.SetHookArrow(false, position_01, rotation, bVar27);
							return;
						}
					}
				}
			}
		}
	label_05bac912: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EF4")]
	[Address(RVA = "0x5AAC970", Offset = "0x5AAB970", VA = "0x5AAC970")]
	private Quaternion GetHookArrowRotation(bool left, Vector3 position)
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$GetHookArrowRotation): 6 lines keep C-only constructs
		float fVar1;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Quaternion UVar2;
		Vector3 UVar3;
		Vector3 local_28;
		byte[] local_18 = new byte[24];

		local_18._8_4_ = in_XMM0_Dc;
		local_18._0_8_ = position._0_8_;
		local_18._12_4_ = in_XMM0_Dd;
		UVar3 = CursorManager.GetInGameMousePosition();
		fVar1 = atan2f((float)local_18._4_4_ - UVar3.y, (float)local_18._0_4_ - UVar3.x);
		local_28.x = 0.0;
		local_28.y = 0.0;
		local_28.z = fVar1 * 57.29578 * 0.017453292;
		UVar2 = (Quaternion)Quaternion.Internal_FromEulerRad(ref local_28);
		return (Quaternion)UVar2;
	}

	[Token(Token = "0x6003EF5")]
	[Address(RVA = "0x5AACA00", Offset = "0x5AABA00", VA = "0x5AACA00")]
	private void UpdateHookInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$UpdateHookInput): 3 lines keep C-only constructs
		byte bVar1;
		HumanSetup __this_00;
		HumanStats pCVar2;
		HumanInputSettings pSVar3;
		KeybindSetting pSVar4;
		HookUseable pCVar5;
		HookUseable pCVar6;
		BaseUseable pCVar7;
		BaseUseable pCVar8;
		String pSVar9;
		bool bVar10;
		bool bVar11;
		bool bVar12;
		bool bVar13;
		bool bVar14;
		bool bVar15;
		PhotonMessageInfo PVar16;
		bool bVar17;
		bool bVar18;
		bool bVar19;
		bool bVar20;
		bool bVar21;
		bool bVar22;
		Human pCVar23;
		bool bVar24;
		byte bVar25;
		bool bVar26;
		bool bVar27;
		bool bVar28;
		bool bVar29;
		PhotonMessageInfo local_48;

		if (inMenu) {
			return;
		}
		pCVar23 = this._human;
		if ((pCVar23 == null) ||(__this_00 = pCVar23.Setup, __this_00 == null)) goto label_05bacf4c;
		bVar17 = __this_00.HasODM;
		if (!bVar17) {
			return;
		}
		pCVar23 = this._human;
		if (pCVar23 == null) goto label_05bacf4c;
		bVar25 = 0;
		if ((pCVar23._state | 8U) != 0xf) {
			pCVar2 = pCVar23.Stats;
			if (pCVar2 == null) goto label_05bacf4c;
			if ((0.0 < pCVar2.CurrentGas) &&((pCVar23.MountState != 2 || (pCVar23.CanMountedAttack != false)))) {
				bVar25 = pCVar23.Dead ^ 1;
			}
		}
		pSVar3 = this._humanInput;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.HookBoth, pSVar4 == null)) goto label_05bacf4c;
		bVar17 = pSVar4.GetKey(false);
		pSVar3 = this._humanInput;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.HookLeft, pSVar4 == null)) goto label_05bacf4c;
		bVar18 = pSVar4.GetKey(false);
		pSVar3 = this._humanInput;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.HookRight, pSVar4 == null)) goto label_05bacf4c;
		bVar19 = pSVar4.GetKey(false);
		pCVar23 = this._human;
		if ((pCVar23 == null) ||(pCVar5 = pCVar23.HookLeft, pCVar5 == null)) goto label_05bacf4c;
		bVar20 = pCVar5.HasHook();
		bVar21 = true;
		if (!bVar20) {
			pCVar23 = this._human;
			if ((pCVar23 == null) ||(pCVar5 = pCVar23.HookRight, pCVar5 == null)) goto label_05bacf4c;
			bVar21 = pCVar5.HasHook();
		}
		pCVar23 = this._human;
		if (pCVar23 == null) goto label_05bacf4c;
		bVar20 = pCVar23.CancelHookBothKey == false;
		if (!bVar20 && !bVar17) {
			pCVar23.CancelHookBothKey = false;
		}
		bVar10 = bVar20;
		bVar11 = bVar17;
		bVar29 = (bVar10 || bVar11) && (bVar20 && bVar17);
		bVar26 = pCVar23.CancelHookLeftKey == false;
		if (!bVar26 && !bVar18) {
			pCVar23.CancelHookLeftKey = false;
		}
		bVar12 = bVar26;
		bVar13 = bVar18;
		bVar24 = (bVar12 || bVar13) && (bVar26 && bVar18);
		bVar27 = pCVar23.CancelHookRightKey == false;
		if (!bVar27 && !bVar19) {
			pCVar23.CancelHookRightKey = false;
		}
		bVar14 = bVar27;
		bVar15 = bVar19;
		bVar22 = (bVar14 || bVar15) && (bVar27 && bVar19);
		pCVar5 = pCVar23.HookLeft;
		if (pCVar5 == null) goto label_05bacf4c;
		pCVar5.HookBoth = (!bVar12 && !bVar13 || (!bVar26 || !bVar18)) && bVar29;
		pCVar6 = pCVar23.HookRight;
		if (pCVar6 == null) goto label_05bacf4c;
		pCVar6.HookBoth = (!bVar14 && !bVar15 || (!bVar27 || !bVar19)) && bVar29;
		if (bVar25 == 0) {
			bVar24 = false;
		}
		else {
			if (Il2CppMethodInitialized_075474af == false) {
				Il2CppMethodInitialized_075474af = true;
				pCVar23 = this._human;
				if (pCVar23 == null) goto label_05bacf4c;
			}
			if ((pCVar23._state == 9) &&(pCVar7 = pCVar23.Special, pCVar7 != null)) {
				pCVar8 = pCVar7.klass;
				bVar1 = (typeof(Spin3Special)._2).typeHierarchyDepth;
				if ((pCVar8._2).typeHierarchyDepth < bVar1) goto label_05bacc96;
				bVar28 = (pCVar8._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Spin3Special) ;
				bVar29 = bVar28 || bVar24;
				bVar24 = bVar28 != bVar29;
				if ((bVar29) || (!bVar10 && !bVar11 || (!bVar20 || !bVar17))) goto label_05baccff;
			}
			else {
	label_05bacc96: ;
				if ((!bVar10 && !bVar11 || (!bVar20 || !bVar17)) || (bVar12 || bVar13) && (bVar26 && bVar18)) goto label_05baccff;
			}
			pCVar6 = pCVar23.HookLeft;
			if (pCVar6 == null) goto label_05bacf4c;
			bVar29 = pCVar6.IsHooked();
			bVar24 = true;
			if (!bVar29) {
				bVar24 = (bool)(bVar21 ^ 1);
			}
			if (!bVar10 && !bVar11 || (!bVar20 || !bVar17)) goto label_05bacf4c;
		}
	label_05baccff: ;
		pCVar5.SetInput(bVar24) ;
		pCVar23 = this._human;
		if (pCVar23 == null) goto label_05bacf4c;
		pCVar5 = pCVar23.HookRight;
		if (bVar25 == 0) {
			bVar22 = false;
		}
		else {
			if (Il2CppMethodInitialized_075474af == false) {
				Il2CppMethodInitialized_075474af = true;
				pCVar23 = this._human;
				if (pCVar23 == null) goto label_05bacf4c;
			}
			if ((pCVar23._state == 9) &&(pCVar7 = pCVar23.Special, pCVar7 != null)) {
				pCVar8 = pCVar7.klass;
				bVar25 = (typeof(Spin3Special)._2).typeHierarchyDepth;
				if ((pCVar8._2).typeHierarchyDepth < bVar25) goto label_05bacd8e;
				bVar29 = (pCVar8._2).typeHierarchy[(ulong)bVar25 - 1] ==typeof(Spin3Special);
				bVar22 = bVar29 != (bVar29 || bVar22);
				if ((bVar29 || (bVar14 || bVar15) && (bVar27 && bVar19)) || (!bVar10 && !bVar11 || (!bVar20 || !bVar17)) ) goto label_05bacdc0;
			}
			else {
	label_05bacd8e: ;
				if ((!bVar10 && !bVar11 || (!bVar20 || !bVar17)) || (bVar14 || bVar15) && (bVar27 && bVar19)) goto label_05bacdc0;
			}
			pCVar6 = pCVar23.HookRight;
			if (pCVar6 == null) goto label_05bacf4c;
			bVar22 = pCVar6.IsHooked();
			bVar22 = bVar21 == false || bVar22;
		}
	label_05bacdc0: ;
		if (pCVar5 != null) {
			pCVar5.SetInput(bVar22);
			pCVar23 = this._human;
			if ((pCVar23 != null) &&(pCVar2 = pCVar23.Stats, pCVar2 != null)) {
				if ((0.0 < pCVar2.CurrentGas) ||((!bVar10 && !bVar11 || (!bVar20 || !bVar17)) &&((!bVar12 && !bVar13 || (!bVar26 || !bVar18)) && (!bVar14 && !bVar15 || (!bVar27 || !bVar19))))) {
					return;
				}
				pSVar3 = this._humanInput;
				if ((pSVar3 != null) &&(pSVar4 = pSVar3.HookLeft, pSVar4 != null)) {
					bVar17 = pSVar4.GetKeyDown(false);
					if (!bVar17) {
						pSVar3 = this._humanInput;
						if ((pSVar3 == null) ||(pSVar4 = pSVar3.HookRight, pSVar4 == null)) goto label_05bacf4c;
						bVar17 = pSVar4.GetKeyDown(false);
						if (!bVar17) {
							pSVar3 = this._humanInput;
							if ((pSVar3 == null) ||(pSVar4 = pSVar3.HookBoth, pSVar4 == null)) goto label_05bacf4c;
							bVar17 = pSVar4.GetKeyDown(false);
							if (!bVar17) {
								return;
							}
						}
					}
					pCVar23 = this._human;
					pSVar9 = HumanSounds.NoGas;
					local_48 = Util.CreateLocalPhotonInfo();
					if (pCVar23 != null) {
						PVar16.Sender = local_48.Sender;
						PVar16.timeInt = local_48.timeInt;
						PVar16._4_4_ = local_48._4_4_;
						PVar16.photonView = local_48.photonView;
						pCVar23.PlaySoundRPC(pSVar9, PVar16);
						return;
					}
				}
			}
		}
	label_05bacf4c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EF6")]
	[Address(RVA = "0x5AACFE0", Offset = "0x5AABFE0", VA = "0x5AACFE0")]
	private void TestScore()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$TestScore): clean
		HumanInputSettings pSVar1;
		KeybindSetting pSVar2;
		InGameMenu pUVar3;
		bool bVar4;

		pSVar1 = this._humanInput;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.HookLeft, pSVar2 == null)) goto label_05bad0e1;
		bVar4 = pSVar2.GetKeyDown(false);
		if (bVar4) {
			pUVar3 = this._inGameMenu;
			if (pUVar3 == null) goto label_05bad0e1;
			pUVar3.ShowKillFeed("test", "test", 100, "Thunderspear") ;
			pUVar3 = this._inGameMenu;
			if (pUVar3 == null) goto label_05bad0e1;
			pUVar3.ShowKillScore(100, false);
		}
		pSVar1 = this._humanInput;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.HookRight, pSVar2 != null)) {
			bVar4 = pSVar2.GetKeyDown(false);
			if (!bVar4) {
				return;
			}
			pUVar3 = this._inGameMenu;
			if (pUVar3 != null) {
				pUVar3.ShowKillFeed("test", "test", 3000, "Thunderspear");
				pUVar3 = this._inGameMenu;
				if (pUVar3 != null) {
					pUVar3.ShowKillScore(3000, false);
					return;
				}
			}
		}
	label_05bad0e1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EF7")]
	[Address(RVA = "0x5AAD0F0", Offset = "0x5AAC0F0", VA = "0x5AAD0F0", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$UpdateActionInput): 48 lines keep C-only constructs
		Human* ppCVar1;
		byte bVar2;
		byte bVar3;
		uint item;
		int iVar4;
		Human pCVar5;
		HashSet<HumanState> __this_00;
		HumanInputSettings pSVar6;
		KeybindSetting pSVar7;
		ThunderspearWeapon __this_01;
		Il2CppClass* ppIVar8;
		BaseMenu pUVar9;
		ChatPanel __this_02;
		BaseUseable pCVar10;
		BaseUseable pCVar11;
		Horse pCVar12;
		Transform pUVar13;
		BaseComponentCache pUVar14;
		PhotonView __this_03;
		bool bVar15;
		bool bVar16;
		InGameMenu pUVar17;
		Object[] parameters;
		KeybindSetting* ppSVar18;
		MethodInfo __this_04;
		byte bVar20;
		byte bVar21;
		float fVar22;
		Vector3 UVar23;
		Vector3 UVar24;
		float fStack_48;

		bVar21 = 0;
		this.UpdateActionInput(inMenu);
		this.UpdateHookInput(inMenu);
		this.UpdateReelInput(false);
		this.UpdateDashInput(inMenu);
		this.UpdateSheatheInput(inMenu);
		pCVar5 = this._human;
		if (pCVar5 == null) goto label_05badc78;
		ppCVar1 = &this._human;
		if (pCVar5.IsAttackableState != false) {
			__this_00 = this._illegalWeaponStates;
			if (__this_00 == null) goto label_05badc78;
			item = pCVar5._state;
			bVar15 = __this_00.Contains(item);
			if ((!bVar15) && (!inMenu)) {
				pCVar5 = *ppCVar1;
				if (pCVar5 == null) goto label_05badc78;
				if (pCVar5.Dead == false) {
					bVar21 = pCVar5.Sheathed ^ 1;
				}
			}
		}
		bVar15 = this.SwapTSInput();
		pSVar6 = this._humanInput;
		if (bVar15) {
			if (pSVar6 == null) goto label_05badc78;
			ppSVar18 = &pSVar6.AttackSpecial;
		}
		else {
			if (pSVar6 == null) goto label_05badc78;
			ppSVar18 = &pSVar6.AttackDefault;
		}
		__this_04 = (MethodInfo)*ppSVar18;
		bVar15 = this.SwapTSInput();
		pSVar6 = this._humanInput;
		if (bVar15) {
			if (pSVar6 == null) goto label_05badc78;
			ppSVar18 = &pSVar6.AttackDefault;
		}
		else {
			if (pSVar6 == null) goto label_05badc78;
			ppSVar18 = &pSVar6.AttackSpecial;
		}
		pCVar5 = *ppCVar1;
		if (pCVar5 == null) goto label_05badc78;
		pSVar7 = *ppSVar18;
		pCVar5._gunArmAim = false;
		__this_01 = (ThunderspearWeapon)pCVar5.Weapon;
		if (bVar21 == 0) {
			if (__this_01 == null) goto label_05badc78;
			__this_01.SetInput(false);
		}
		else {
			if (__this_01 != null) {
				bVar21 = (__this_01.klass._2).typeHierarchyDepth;
				bVar2 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((((bVar2 <= bVar21) &&(ppIVar8 = (__this_01.klass._2).typeHierarchy, ppIVar8[(ulong)bVar2 - 1] == typeof(AmmoWeapon))) &&(__this_01.RoundLeft == 0)) &&(((bVar2 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth, bVar21 < bVar2 ||(ppIVar8[(ulong)bVar2 - 1] != typeof(ThunderspearWeapon))) ||(bVar15 = __this_01.HasActiveProjectile(), !bVar15)) )) {
					if (__this_04 == null) goto label_05badc78;
					bVar15 = __this_04.GetKeyDown(false);
					if (bVar15) {
						pCVar5 = *ppCVar1;
						if (pCVar5 == null) goto label_05badc78;
						if (pCVar5._state == 0) {
							pCVar5.Reload();
						}
					}
					goto label_05bad483;
				}
			}
			pUVar9 = UIManager.CurrentMenu;
			if (pUVar9 == null) goto label_05badc78;
			bVar21 = (typeof(InGameMenu)._2).typeHierarchyDepth;
			if (((pUVar9.klass._2).typeHierarchyDepth < bVar21) ||((pUVar9.klass._2).typeHierarchy[(ulong)bVar21 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			__this_02 = (ChatPanel)(*(ulong)((sbyte)pUVar9 + 0xd0));
			bVar15 = ((Object)__this_02 != null);
			if (bVar15) {
				if (__this_02 == null) goto label_05badc78;
				bVar15 = __this_02.IsPointerOverChatUI();
				if (bVar15) {
					if ((*ppCVar1 != null) &&(pCVar10 = ((*ppCVar1).fields).Weapon, pCVar10 != null)) {
						pCVar10.SetInput(false);
						return;
					}
					goto label_05badc78;
				}
			}
			if ((*ppCVar1 == null) ||(pCVar10 = ((*ppCVar1).fields).Weapon, pCVar10 == null)) goto label_05badc78;
			pCVar11 = pCVar10.klass;
			bVar21 = (typeof(AHSSWeapon)._2).typeHierarchyDepth;
			if (((pCVar11._2).typeHierarchyDepth < bVar21) ||((pCVar11._2).typeHierarchy[(ulong)bVar21 - 1] != typeof(AHSSWeapon))) {
				pCVar10.ReadInput((KeybindSetting)__this_04);
				goto label_05bad483;
			}
			if (__this_04 == null) goto label_05badc78;
			bVar15 = __this_04.Contains(0x143);
			if (bVar15) {
				pUVar17 = this._inGameMenu;
				if (pUVar17 == null) goto label_05badc78;
				if (pUVar17.SkipAHSSInput == false) goto label_05bad743;
	label_05bad791: ;
				pUVar17.SkipAHSSInput = false;
			}
			else {
	label_05bad743: ;
				bVar15 = __this_04.GetKeyUp(false);
				pCVar5 = *ppCVar1;
				if (bVar15) {
					if ((pCVar5 == null) ||(pCVar10 = pCVar5.Weapon, pCVar10 == null)) goto label_05badc78;
					pCVar10.SetInput(true);
					pUVar17 = this._inGameMenu;
					if (pUVar17 == null) goto label_05badc78;
					goto label_05bad791;
				}
				if ((pCVar5 == null) ||(pCVar10 = pCVar5.Weapon, pCVar10 == null)) goto label_05badc78;
				pCVar10.SetInput(false);
			}
			pCVar5 = *ppCVar1;
			bVar16 = __this_04.GetKey(false);
			bVar15 = true;
			if (!bVar16) {
				if ((*ppCVar1 == null) ||(pCVar10 = ((*ppCVar1).fields).Weapon, pCVar10 == null)) goto label_05badc78;
				bVar15 = pCVar10.IsActive;
			}
			if (pCVar5 == null) goto label_05badc78;
			pCVar5._gunArmAim = bVar15;
		}
	label_05bad483: ;
		if (*ppCVar1 == null) goto label_05badc78;
		if (((*ppCVar1).fields).Special != null) {
			bVar15 = this.IsSheathedWeaponSpecial();
			pCVar5 = this._human;
			if (pCVar5 == null) goto label_05badc78;
			bVar16 = pCVar5.IsAttackableState;
			bVar21 = 0;
			pCVar10 = pCVar5.Special;
			if (bVar16 != false && !bVar15) {
				if (pCVar10 == null) {
	label_05bad52f: ;
					if (pCVar5._state == 7) goto label_05bad564;
				}
				else {
					pCVar11 = pCVar10.klass;
					bVar2 = (pCVar11._2).typeHierarchyDepth;
					bVar20 = (typeof(EscapeSpecial)._2).typeHierarchyDepth;
					if (((bVar2 < bVar20) ||((pCVar11._2).typeHierarchy[(ulong)bVar20 - 1] !=typeof(EscapeSpecial))) &&((bVar20 = (typeof(ShifterTransformSpecial)._2).typeHierarchyDepth, bVar2 < bVar20 ||((pCVar11._2).typeHierarchy[(ulong)bVar20 - 1] !=typeof(ShifterTransformSpecial))))) goto label_05bad52f;
				}
				if ((((pCVar5.CarryState != 1) && (iVar4 = pCVar5._state, iVar4 != 1)) &&(iVar4 != 8)) && ((iVar4 != 9 && (!inMenu)))) {
					bVar21 = pCVar5.Dead ^ 1;
				}
			}
	label_05bad564: ;
			if (pCVar10 == null) goto label_05badc78;
			pCVar11 = pCVar10.klass;
			bVar2 = (pCVar11._2).typeHierarchyDepth;
			bVar20 = (typeof(BaseHoldAttackSpecial)._2).typeHierarchyDepth;
			if ((bVar2 < bVar20) ||(ppIVar8 = (pCVar11._2).typeHierarchy,(ppIVar8[(ulong)bVar20 - 1] != typeof(BaseHoldAttackSpecial) || bVar16 == false) || bVar15)) {
	label_05bad5b3: ;
				bVar20 = 0;
			}
			else {
				iVar4 = pCVar5._state;
				bVar20 = 0;
				if ((iVar4 != 7) && (iVar4 != 8)) {
					if (iVar4 == 1) {
						bVar3 = (typeof(StockSpecial)._2).typeHierarchyDepth;
						if (bVar2 < bVar3) goto label_05bad5b3;
						if (ppIVar8[(ulong)bVar3 - 1] != typeof(StockSpecial)) goto label_05bad5b9;
					}
					if ((pCVar5.CarryState != 1) && (!inMenu)) {
						bVar20 = pCVar5.Dead ^ 1;
					}
				}
			}
	label_05bad5b9: ;
			if (bVar21 == 0 && bVar20 == 0) {
				pCVar10.SetInput(false);
			}
			else {
				bVar21 = (typeof(AHSSTwinShot)._2).typeHierarchyDepth;
				if ((bVar2 < bVar21) ||((pCVar11._2).typeHierarchy[(ulong)bVar21 - 1] != typeof(AHSSTwinShot))) {
					pCVar10.ReadInput(pSVar7);
				}
				else {
					if (pSVar7 == null) goto label_05badc78;
					bVar15 = pSVar7.GetKeyUp(false);
					pCVar10.SetInput(bVar15);
				}
			}
		}
		if (inMenu) {
			return;
		}
		pCVar5 = *ppCVar1;
		if (pCVar5 == null) goto label_05badc78;
		if (pCVar5.Dead != false) {
			return;
		}
		if (pCVar5._state == 0xf) {
			return;
		}
		iVar4 = pCVar5.MountState;
		if (iVar4 == 1) {
			pSVar6 = this._humanInput;
			if ((pSVar6 == null) ||(pSVar7 = pSVar6.HorseMount, pSVar7 == null)) goto label_05badc78;
			bVar15 = pSVar7.GetKeyDown(false);
			if (bVar15) {
				pCVar5 = *ppCVar1;
				if (pCVar5 == null) goto label_05badc78;
				if (pCVar5._state != 0) goto label_05bad8fa;
				pCVar5.Unmount(false);
			}
			else {
	label_05bad8fa: ;
				pSVar6 = this._humanInput;
				if ((pSVar6 == null) ||(pSVar7 = pSVar6.HorseJump, pSVar7 == null)) goto label_05badc78;
				bVar15 = pSVar7.GetKeyDown(false);
				if (bVar15) {
					if ((*ppCVar1 == null) ||(pCVar12 = ((*ppCVar1).fields).Horse, pCVar12 == null)) goto label_05badc78;
					pCVar12.Jump();
				}
			}
			pCVar5 = *ppCVar1;
			if (pCVar5 != null) {
				if (pCVar5._state != 0) {
					return;
				}
				if (pCVar5.IsAttackableState == false) {
					return;
				}
				pSVar6 = this._humanInput;
				if ((pSVar6 != null) &&(pSVar7 = pSVar6.Reload, pSVar7 != null)) {
					bVar15 = pSVar7.GetKeyDown(false);
					if (!bVar15) {
						return;
					}
					if (*ppCVar1 != null) {
						(*ppCVar1).Reload();
						return;
					}
				}
			}
			goto label_05badc78;
		}
		if (iVar4 != 0) {
			return;
		}
		bVar15 = pCVar5.CanJump();
		if (bVar15) {
			pSVar6 = this._humanInput;
			if ((pSVar6 == null) ||(pSVar7 = pSVar6.Jump, pSVar7 == null)) goto label_05badc78;
			bVar15 = pSVar7.GetKeyDown(false);
			if (!bVar15) {
				pSVar6 = this._humanInput;
				if ((pSVar6 == null) ||(pSVar7 = pSVar6.HorseMount, pSVar7 == null)) goto label_05badc78;
				bVar15 = pSVar7.GetKeyDown(false);
				if (bVar15) {
					if (*ppCVar1 == null) goto label_05badc78;
					pCVar12 = ((*ppCVar1).fields).Horse;
					bVar15 = ((Object)pCVar12 != null);
					if (bVar15) {
						pCVar5 = *ppCVar1;
						if (pCVar5 == null) goto label_05badc78;
						if (pCVar5.MountState == 0) {
							pCVar12 = pCVar5.Horse;
							if (((pCVar12 == null) ||(pUVar14 = pCVar12.Cache, pUVar14 == null)) ||(pUVar13 = pUVar14.Transform, pUVar13 == null)) goto label_05badc78;
							UVar23 = pUVar13.position;
							if (((*ppCVar1 == null) ||(pUVar14 = ((*ppCVar1).fields).Cache, pUVar14 == null)) ||(pUVar13 = pUVar14.Transform, pUVar13 == null)) goto label_05badc78;
							UVar24 = pUVar13.position;
							fStack_48 = UVar23.x;
							fVar22 = (float)il2cpp_runtime_helper_05956b50(fStack_48, UVar23.z, UVar24.x, UVar24.z, 0);
							if (fVar22 < 15.0) {
								pCVar5 = *ppCVar1;
								if (pCVar5 == null) goto label_05badc78;
								if (pCVar5.HasDirection == false) {
									pCVar5.MountHorse();
									pCVar5 = *ppCVar1;
									goto joined_r0x05badc72;
								}
							}
						}
					}
				}
				pSVar6 = this._humanInput;
				if ((pSVar6 == null) ||(pSVar7 = pSVar6.Dodge, pSVar7 == null)) goto label_05badc78;
				bVar15 = pSVar7.GetKeyDown(false);
				if (bVar15) {
					pCVar5 = *ppCVar1;
					if (pCVar5 == null) goto label_05badc78;
					fVar22 = pCVar5.TargetAngle;
					if (pCVar5.HasDirection != false) {
						fVar22 = fVar22 + 180.0;
					}
					pCVar5.Dodge(fVar22);
				}
				goto label_05badafd;
			}
			if (*ppCVar1 == null) goto label_05badc78;
			(*ppCVar1).Jump();
			pCVar5 = *ppCVar1;
		}
		else {
	label_05badafd: ;
			pCVar5 = *ppCVar1;
		}
	joined_r0x05badc72: ;
		if (pCVar5 != null) {
			if (pCVar5._state == 0) {
				pSVar6 = this._humanInput;
				if ((pSVar6 == null) ||(pSVar7 = pSVar6.Reload, pSVar7 == null)) goto label_05badc78;
				bVar15 = pSVar7.GetKeyDown(false);
				if (bVar15) {
					if (*ppCVar1 == null) goto label_05badc78;
					(*ppCVar1).Reload();
				}
			}
			if (*ppCVar1 != null) {
				if (((*ppCVar1).fields).CarryState != 1) {
					return;
				}
				pSVar6 = this._humanInput;
				if ((pSVar6 != null) &&(pSVar7 = pSVar6.HorseMount, pSVar7 != null)) {
					bVar15 = pSVar7.GetKeyDown(false);
					if (!bVar15) {
						return;
					}
					if ((*ppCVar1 != null) &&(pUVar14 = ((*ppCVar1).fields).Cache, pUVar14 != null)) {
						__this_03 = pUVar14.PhotonView;
						parameters = (Object[])new object[0];
						if (__this_03 != null) {
							__this_03.RPC("UncarryRPC", 0, parameters);
							return;
						}
					}
				}
			}
		}
	label_05badc78: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EF8")]
	[Address(RVA = "0x5AAF110", Offset = "0x5AAE110", VA = "0x5AAF110")]
	private bool SwapTSInput()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$SwapTSInput): 1 lines keep C-only constructs
		byte bVar1;
		Human pCVar2;
		BaseUseable pCVar3;
		BaseUseable pCVar4;
		HumanInputSettings pSVar5;
		BoolSetting pSVar6;

		pCVar2 = this._human;
		if (pCVar2 == null) {
	label_05baf19d: ;
			throw new NullReferenceException();
		}
		pCVar3 = pCVar2.Weapon;
		if (pCVar3 != null) {
			pCVar4 = pCVar3.klass;
			bVar1 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar4._2).typeHierarchyDepth) &&((pCVar4._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(ThunderspearWeapon)) ) {
				pSVar5 = this._humanInput;
				if ((pSVar5 != null) &&(pSVar6 = pSVar5.SwapTSAttackSpecial, pSVar6 != null)) {
					return pSVar6._value != false;
				}
				goto label_05baf19d;
			}
		}
		return false;
	}

	[Token(Token = "0x6003EF9")]
	[Address(RVA = "0x5AAEF70", Offset = "0x5AADF70", VA = "0x5AAEF70")]
	private KeybindSetting GetAttackInput()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$GetAttackInput): clean
		HumanInputSettings pSVar1;
		bool bVar2;

		bVar2 = this.SwapTSInput();
		pSVar1 = this._humanInput;
		if (bVar2) {
			if (pSVar1 != null) {
				return pSVar1.AttackSpecial;
			}
		}
		else if (pSVar1 != null) {
			return pSVar1.AttackDefault;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EFA")]
	[Address(RVA = "0x5AAEFB0", Offset = "0x5AADFB0", VA = "0x5AAEFB0")]
	private KeybindSetting GetSpecialInput()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$GetSpecialInput): clean
		HumanInputSettings pSVar1;
		bool bVar2;

		bVar2 = this.SwapTSInput();
		pSVar1 = this._humanInput;
		if (bVar2) {
			if (pSVar1 != null) {
				return pSVar1.AttackDefault;
			}
		}
		else if (pSVar1 != null) {
			return pSVar1.AttackSpecial;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EFB")]
	[Address(RVA = "0x5AAEFF0", Offset = "0x5AADFF0", VA = "0x5AAEFF0")]
	private bool IsSheathedWeaponSpecial()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$IsSheathedWeaponSpecial): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Human pCVar3;
		BaseUseable pCVar4;
		BaseUseable pCVar5;

		pCVar3 = this._human;
		if (pCVar3 == null) {
			throw new NullReferenceException();
		}
		if ((pCVar3.Sheathed == false) ||(pCVar4 = pCVar3.Special, pCVar4 == null)) {
			return false;
		}
		pCVar5 = pCVar4.klass;
		bVar1 = (pCVar5._2).typeHierarchyDepth;
		bVar2 = (typeof(BaseAttackSpecial)._2).typeHierarchyDepth;
		if ((((bVar2 <= bVar1) &&((pCVar5._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BaseAttackSpecial))) || ((bVar2 = (typeof(DownStrikeSpecial)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pCVar5._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(DownStrikeSpecial))))) ||((bVar2 = (typeof(StockSpecial)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pCVar5._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(StockSpecial))))) {
			return true;
		}
		bVar2 = (typeof(AHSSTwinShot)._2).typeHierarchyDepth;
		if (bVar1 < bVar2) {
			return false;
		}
		return (pCVar5._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(AHSSTwinShot);
	}

	[Token(Token = "0x6003EFC")]
	[Address(RVA = "0x5AAEED0", Offset = "0x5AADED0", VA = "0x5AAEED0")]
	private void UpdateSheatheInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$UpdateSheatheInput): 7 lines keep C-only constructs
		Human pCVar1;
		HumanInputSettings pSVar2;
		KeybindSetting __this_00;
		bool bVar3;
		KeybindSetting* ppSVar4;
		undefined7 in_register_00000031;

		if ((int)(MethodInfo)CONCAT71(in_register_00000031, inMenu) != 0) {
			return;
		}
		pCVar1 = this._human;
		if (pCVar1 != null) {
			if (pCVar1.Dead != false) {
				return;
			}
			if (pCVar1.Sheathed == false) {
				return;
			}
			bVar3 = this.SwapTSInput();
			pSVar2 = this._humanInput;
			if (bVar3) {
				if (pSVar2 == null) goto label_05baef60;
				ppSVar4 = &pSVar2.AttackSpecial;
			}
			else {
				if (pSVar2 == null) goto label_05baef60;
				ppSVar4 = &pSVar2.AttackDefault;
			}
			if (*ppSVar4 != null) {
				bVar3 = (*ppSVar4).GetKeyDown(false);
				if (!bVar3) {
					pSVar2 = this._humanInput;
					if ((pSVar2 == null) ||(__this_00 = pSVar2.Reload, __this_00 == null)) goto label_05baef60;
					bVar3 = __this_00.GetKeyDown(false);
					if (!bVar3) {
						return;
					}
				}
				pCVar1 = this._human;
				if (pCVar1 != null) {
					pCVar1.SetSheathed(false);
					return;
				}
			}
		}
	label_05baef60: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EFD")]
	[Address(RVA = "0x5AAF1B0", Offset = "0x5AAE1B0", VA = "0x5AAF1B0")]
	private void ToggleUI()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$ToggleUI): clean
		bool bVar1;
		Object x;
		Canvas __this_00;
		Canvas __this_01;

		x = (Object)GameObject.Find("DefaultMenu(Clone)");
		bVar1 = (x != null);
		if (bVar1) {
			if (x != null) {
				__this_00 = x.GetComponent<Canvas>();
				__this_01 = x.GetComponent<Canvas>();
				if (__this_01 != null) {
					bVar1 = __this_01.enabled;
					if (__this_00 != null) {
						__this_00.enabled = !bVar1;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6003EFE")]
	[Address(RVA = "0x5AADC90", Offset = "0x5AACC90", VA = "0x5AADC90")]
	private void UpdateReelInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$UpdateReelInput): 10 lines keep C-only constructs
		HumanInputSettings pSVar1;
		KeybindSetting pSVar2;
		List<InputKey> pSVar3;
		InputSettings pSVar4;
		FloatSetting pSVar5;
		InputKey pSVar6;
		bool bVar7;
		bool bVar8;
		Human pCVar9;
		float fVar10;
		float fVar11;
		byte[] local_68 = new byte[8];
		InputKey local_58;
		byte[] local_48 = new byte[16];
		InputKey local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		fVar11 = this._reelOutScrollTimeLeft;
		fVar10 = Time.deltaTime;
		fVar11 = fVar11 - fVar10;
		this._reelOutScrollTimeLeft = fVar11;
		if (fVar11 <= 0.0) {
			pCVar9 = this._human;
			if (pCVar9 == null) goto label_05bae132;
			pCVar9.ReelOutAxis = 0.0;
		}
		pSVar1 = this._humanInput;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.ReelIn, pSVar2 == null)) goto label_05bae132;
		bVar7 = pSVar2.GetKey(false);
		if (bVar7) {
			pCVar9 = this._human;
			if (pCVar9 == null) goto label_05bae132;
			if (pCVar9._reelInWaitForRelease == false) {
				pCVar9.ReelInAxis = -1.0;
			}
			this._reelInScrollCooldownLeft = this._reelInScrollCooldown;
		}
		else {
			fVar11 = this._reelInScrollCooldownLeft;
			fVar10 = Time.deltaTime;
			this._reelInScrollCooldownLeft = fVar11 - fVar10;
			pSVar1 = this._humanInput;
			if (((pSVar1 == null) ||(pSVar2 = pSVar1.ReelIn, pSVar2 == null)) ||(pSVar3 = pSVar2.InputKeys, pSVar3 == null)) goto label_05bae132;
			local_48.GetEnumerator((List<object>)pSVar3);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
			bVar7 = false;
			while (bVar8 = local_68.MoveNext()) {
				if (local_58 == null) {
					throw new NullReferenceException();
				}
				bVar8 = local_58.IsWheel();
				if (bVar8) {
					bVar7 = true;
				}
			}
			local_68.Dispose();
			pSVar1 = this._humanInput;
			if (((pSVar1 == null) ||(pSVar2 = pSVar1.ReelIn, pSVar2 == null)) ||(pSVar3 = pSVar2.InputKeys, pSVar3 == null)) goto label_05bae132;
			local_48.GetEnumerator((List<object>)pSVar3);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			if (!bVar7) {
				local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
	label_05badfa1: ;
				bVar7 = local_68.MoveNext();
				if (bVar7) {
					if (local_58 != null) {
						bVar7 = local_58.IsWheel();
						if (bVar7) goto code_r0x05badfca;
						pCVar9 = this._human;
						if (pCVar9 != null) goto label_05badf9a;
						goto label_05badf78;
					}
					goto label_05bae128;
				}
				goto label_05badfe4;
			}
			local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
	label_05badf15: ;
			while (true) {
				bVar7 = local_68.MoveNext();
				pSVar6 = local_58;
				if (!(bVar7)) break;
				if (local_58 == null) {
	label_05bae128: ;
					throw new NullReferenceException();
				}
				bVar7 = local_58.IsWheel();
				if (!bVar7) goto label_05badf60;
				if (this._reelInScrollCooldownLeft <= 0.0) {
					pCVar9 = this._human;
					if (pCVar9 == null) {
	label_05badfdf: ;
						throw new NullReferenceException();
					}
					goto label_05badf0e;
				}
			}
	label_05badfe4: ;
			local_68.Dispose();
		}
		pSVar1 = this._humanInput;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.ReelOut, pSVar2 != null)) &&(pSVar3 = pSVar2.InputKeys, pSVar3 != null)) {
			local_48.GetEnumerator((List<object>)pSVar3);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
			while(true) {
				do {
					do {
						bVar7 = local_68.MoveNext();
						pSVar6 = local_58;
						if (!bVar7) {
							local_68.Dispose();
							return;
						}
						if (local_58 == null) {
							throw new NullReferenceException();
						}
						bVar7 = local_58.GetKey();
					} while (!bVar7);
					pCVar9 = this._human;
					if (pCVar9 == null) {
						throw new NullReferenceException();
					}
					pCVar9.ReelOutAxis = 1.0;
					bVar7 = pSVar6.IsWheel();
				} while (!bVar7);
				pSVar4 = SettingsManager.InputSettings;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				pSVar1 = pSVar4.Human;
				if (pSVar1 == null) break;
				pSVar5 = pSVar1.ReelOutScrollSmoothing;
				if (pSVar5 == null) {
					throw new NullReferenceException();
				}
				this._reelOutScrollTimeLeft = pSVar5._value;
			}
			throw new NullReferenceException();
		}
	label_05bae132: ;
		throw new NullReferenceException();
	code_r0x05badfca: ;
		if (this._reelInScrollCooldownLeft <= 0.0) {
			pCVar9 = this._human;
			if (pCVar9 == null) goto label_05badfdf;
	label_05badf9a: ;
			pCVar9._reelInWaitForRelease = false;
		}
		goto label_05badfa1;
	label_05badf60: ;
		bVar7 = pSVar6.GetKeyUp();
		if (bVar7) {
			pCVar9 = this._human;
			if (pCVar9 == null) {
	label_05badf78: ;
				throw new NullReferenceException();
			}
	label_05badf0e: ;
			pCVar9._reelInWaitForRelease = false;
		}
		goto label_05badf15;
	}

	[Token(Token = "0x6003EFF")]
	[Address(RVA = "0x5AAE270", Offset = "0x5AAD270", VA = "0x5AAE270")]
	private void UpdateDashInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$UpdateDashInput): 200 lines keep C-only constructs
		Human pCVar1;
		HumanInputSettings pSVar2;
		Dictionary<HumanDashDirection, KeybindSetting> pSVar3;
		HumanStats pCVar4;
		OmniDashPerk pCVar5;
		DivisivePowerPerk pAVar6;
		BaseCamera pCVar7;
		Camera pUVar8;
		BaseComponentCache pUVar9;
		Transform pUVar10;
		VerticalDashPerk pCVar11;
		InputSettings pSVar12;
		BoolSetting pSVar13;
		Dictionary<HumanDashDirection, float> pSVar14;
		System_Nullable_Vector3__o percentPower;
		System_Nullable_Vector3__o percentPower_00;
		ulong uVar15;
		bool bVar16;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar17;
		KeybindSetting pSVar18;
		int iVar19;
		float fVar20;
		float fVar21;
		ulong uVar22;
		ulong uVar23;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar24;
		Vector3 value;
		Vector3 direction;
		Vector3 value_00;
		Vector3 direction_00;
		Vector3 direction_01;
		byte[] local_e8 = new byte[12];
		float fStack_dc;
		float fStack_d8;
		float fStack_d4;
		ulong local_c8;
		ulong local_b8;
		ulong local_a8;
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		ulong local_78;
		byte[] local_68 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_60;
		object local_58;
		Quaternion local_48;

		local_68 = (byte[])0x0;
		local_58 = null;
		local_b8 = 0;
		local_48 = (Quaternion)ZEXT816(0);
		pCVar1 = this._human;
		unique0x10002263 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
		uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
		uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
		local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
		if (pCVar1 == null) goto label_05baeeae;
		if (pCVar1.Grounded != false) {
			return;
		}
		iVar19 = pCVar1._state;
		if (iVar19 == 3) {
			return;
		}
		if (pCVar1.MountState != 0) {
			return;
		}
		if (iVar19 == 7) {
			return;
		}
		if (pCVar1.CarryState == 1) {
			return;
		}
		if (iVar19 == 0xf) {
			return;
		}
		if (iVar19 == 8) {
			return;
		}
		if (iVar19 == 10) {
			return;
		}
		if (inMenu) {
			return;
		}
		if (pCVar1.Dead != false) {
			return;
		}
		pSVar2 = this._humanInput;
		unique0x1000226b =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
		uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
		uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
		local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
		if (pSVar2 == null) goto label_05baeeae;
		pSVar18 = pSVar2.Dash;
		unique0x10002273 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
		uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
		uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
		local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
		if (pSVar18 == null) goto label_05baeeae;
		iVar19 = 0;
		bVar16 = pSVar18.GetKeyDown(false);
		unique0x10002433 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
		local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
		if (bVar16) {
			pSVar3 = this._dashKeys;
			uVar23 = local_c8;
			uVar15 = local_78;
			if (pSVar3 == null) goto label_05baeeae;
			pSVar17 = pSVar3.Keys;
			unique0x10002283 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
			uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
			uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
			local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
			if (pSVar17 == null) goto label_05baeeae;
			local_e8.GetEnumerator(pSVar17);
			local_58 = (object)CONCAT44(fStack_d4, fStack_d8);
			pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
			local_68 = (byte[])local_e8._0_8_;
			local_e8._0_8_ = null;
			unique0x1000225b =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_68;
			do {
				bVar16 = local_68.MoveNext();
				if (!bVar16) {
					il2cpp_runtime_helper_02fd8780(local_e8);
					goto label_05bae500;
				}
				pSVar3 = this._dashKeys;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				iVar19 = (int32_t)local_58;
				pSVar18 = pSVar3.get_Item((int32_t)local_58);
				if (pSVar18 == null) {
					throw new NullReferenceException();
				}
				bVar16 = pSVar18.GetKey(false);
			} while (!bVar16);
			il2cpp_runtime_helper_02fd8780(local_e8);
			local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
			if (iVar19 == 0) {
	label_05bae500: ;
				pCVar1 = this._human;
				uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
				uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
				local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
				if (pCVar1 == null) goto label_05baeeae;
				pCVar4 = pCVar1.Stats;
				uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
				uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
				local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
				if (pCVar4 == null) goto label_05baeeae;
				pCVar5 = pCVar4.OmniDashPerk;
				uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
				uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
				local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
				if (pCVar5 == null) goto label_05baeeae;
				bVar16 = pCVar5.CanUse();
				if (bVar16) {
					pCVar1 = this._human;
					uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
					uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
					local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
					if (pCVar1 == null) goto label_05baeeae;
					pCVar4 = pCVar1.Stats;
					uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
					uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
					local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
					if (pCVar4 == null) goto label_05baeeae;
					pAVar6 = (DivisivePowerPerk)pCVar4.OmniDashPerk;
					uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
					uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
					local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
					if (pAVar6 == null) goto label_05baeeae;
					bVar16 = pAVar6.PerkEnabled;
					if (bVar16) {
						pCVar7 = SceneLoader.CurrentCamera;
						uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
						uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pCVar7 == null) goto label_05baeeae;
						pUVar8 = pCVar7.Camera;
						UVar24 = CursorManager.GetInGameMousePosition();
						uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
						uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pUVar8 == null) goto label_05baeeae;
						local_e8.ScreenPointToRay(pUVar8, UVar24);
						local_b8 = CONCAT44(fStack_d8, fStack_dc);
						fVar21 = fStack_d4;
						uVar22 = il2cpp_runtime_helper_059d80e0(&local_b8);
						pCVar1 = this._human;
						uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
						uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pCVar1 == null) goto label_05baeeae;
						pUVar9 = pCVar1.Cache;
						uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
						uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pUVar9 == null) goto label_05baeeae;
						pUVar10 = pUVar9.Transform;
						uVar23 = uVar22;
						uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
						local_a8 = CONCAT44(local_a8._4_4_, fVar21);
						if (pUVar10 == null) goto label_05baeeae;
						local_a8._0_4_ = fVar21;
						local_c8 = uVar22;
						UVar24 = pUVar10.right;
						fVar21 = (float)local_a8;
						local_b8 = il2cpp_runtime_helper_05bbcf50((float)local_c8, (float)local_a8, UVar24.x, UVar24.z, 0);
						uVar22 = il2cpp_runtime_helper_059d80e0(&local_b8);
						pCVar1 = this._human;
						uVar23 = local_c8;
						uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pCVar1 == null) goto label_05baeeae;
						pUVar9 = pCVar1.Cache;
						uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pUVar9 == null) goto label_05baeeae;
						local_88._0_4_ = fVar21;
						pUVar10 = pUVar9.Transform;
						uVar15 = uVar22;
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pUVar10 == null) goto label_05baeeae;
						local_78 = uVar22;
						UVar24 = pUVar10.forward;
						pCVar1 = this._human;
						uVar23 = local_c8;
						uVar15 = local_78;
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pCVar1 == null) goto label_05baeeae;
						pUVar9 = pCVar1.Cache;
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pUVar9 == null) goto label_05baeeae;
						local_98._8_4_ = extraout_XMM0_Dc;
						local_98._0_8_ = UVar24._0_8_;
						local_98._12_4_ = extraout_XMM0_Dd;
						pUVar10 = pUVar9.Transform;
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pUVar10 == null) goto label_05baeeae;
						pUVar10.right;
						fVar20 = (float)il2cpp_runtime_helper_059fb780(local_98._0_4_, UVar24.z, (float)local_78, local_88._0_4_, 0);
						fVar20 = fVar20 / 90.0;
						fVar21 = 1.0;
						if (fVar20 <= 1.0) {
							fVar21 = fVar20;
						}
						local_88 = ZEXT416(-(uint)(0.0 <= fVar20) & (uint)fVar21);
						uVar22 = il2cpp_runtime_helper_05bbd010(0);
						local_98._0_4_ = fVar21;
						if (0.0 < (float)local_88._0_4_) {
							pCVar1 = this._human;
							uVar23 = local_c8;
							uVar15 = local_78;
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pCVar1 == null) goto label_05baeeae;
							pCVar4 = pCVar1.Stats;
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pCVar4 == null) goto label_05baeeae;
							pAVar6 = (DivisivePowerPerk)pCVar4.OmniDashPerk;
							uVar15 = uVar22;
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pAVar6 == null) goto label_05baeeae;
							local_78 = uVar22;
							fVar21 = pAVar6.GetPowerRatio();
							uVar22 = CONCAT44(fVar21, (float)local_78);
						}
						pCVar1 = this._human;
						iVar19 = 0;
						UVar24.z = (float)local_a8;
						UVar24.x = (float)(int)local_c8;
						UVar24.y = (float)(int)((ulong)local_c8 >> 0x20);
						local_78 = uVar22;
						fVar21 = this.GetTargetAngle(UVar24);
						local_e8._0_8_ = null;
						local_e8._8_4_ = 0.0;
						fStack_dc = 0.0;
						value.z = (float)local_98._0_4_;
						value.x = (float)local_78;
						value.y = (float)local_78._4_4_;
						local_e8 = new Nullable<Vector3>(value);
						unique0x1000232b =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
						uVar23 = local_c8;
						uVar15 = local_78;
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pCVar1 == null) goto label_05baeeae;
						percentPower.value.y = (float)local_e8._8_4_;
						percentPower.hasValue = (bool)local_e8[0];
						percentPower._1_3_ = local_e8._1_3_;
						percentPower.value.x = (float)local_e8._4_4_;
						percentPower.value.z = fStack_dc;
						direction_00.z = (float)local_a8;
						direction_00.x = (float)local_c8;
						direction_00.y = (float)local_c8._4_4_;
						bVar16 = pCVar1.DashVertical(fVar21, direction_00, percentPower);
						unique0x10002443 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (bVar16) {
							pCVar1 = this._human;
							unique0x10002333 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
							uVar23 = local_c8;
							uVar15 = local_78;
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pCVar1 == null) goto label_05baeeae;
							pCVar4 = pCVar1.Stats;
							unique0x1000233b =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pCVar4 == null) goto label_05baeeae;
							pCVar5 = pCVar4.OmniDashPerk;
							unique0x10002343 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pCVar5 == null) goto label_05baeeae;
							pCVar5.OnUse((float)local_88._0_4_);
							unique0x1000244b =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						}
						goto label_05baebb4;
					}
				}
				pCVar1 = this._human;
				uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
				uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
				local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
				if (pCVar1 == null) goto label_05baeeae;
				pCVar4 = pCVar1.Stats;
				uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
				uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
				local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
				if (pCVar4 == null) goto label_05baeeae;
				pCVar11 = pCVar4.VerticalDashPerk;
				uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
				uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
				local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
				if (pCVar11 == null) goto label_05baeeae;
				bVar16 = pCVar11.CanUse();
				iVar19 = 0;
				local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
				if (bVar16) {
					pCVar1 = this._human;
					uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
					uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
					local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
					if (pCVar1 == null) goto label_05baeeae;
					pCVar4 = pCVar1.Stats;
					uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
					uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
					local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
					if (pCVar4 == null) goto label_05baeeae;
					pAVar6 = (DivisivePowerPerk)pCVar4.VerticalDashPerk;
					uVar23 = local_c8;
					uVar15 = local_78;
					local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
					if (pAVar6 == null) goto label_05baeeae;
					iVar19 = 0;
					bVar16 = pAVar6.PerkEnabled;
					local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
					if (bVar16) {
						pCVar1 = this._human;
						uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
						uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pCVar1 == null) goto label_05baeeae;
						pCVar4 = pCVar1.Stats;
						uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
						uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pCVar4 == null) goto label_05baeeae;
						pAVar6 = (DivisivePowerPerk)pCVar4.OmniDashPerk;
						uVar23 = local_c8;
						uVar15 = local_78;
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (pAVar6 == null) goto label_05baeeae;
						iVar19 = 0;
						bVar16 = pAVar6.PerkEnabled;
						local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
						if (!bVar16) {
							pCVar7 = SceneLoader.CurrentCamera;
							uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
							uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pCVar7 == null) goto label_05baeeae;
							pUVar9 = pCVar7.Cache;
							uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
							uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pUVar9 == null) goto label_05baeeae;
							pUVar10 = pUVar9.Transform;
							uVar23 = local_c8;
							uVar15 = local_78;
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pUVar10 == null) goto label_05baeeae;
							local_48 = pUVar10.rotation;
							uVar22 = il2cpp_runtime_helper_05bbd050(&local_48, 0);
							pCVar7 = SceneLoader.CurrentCamera;
							uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
							uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pCVar7 == null) goto label_05baeeae;
							pUVar8 = pCVar7.Camera;
							local_c8 = uVar22;
							UVar24 = CursorManager.GetInGameMousePosition();
							uVar23 = local_c8;
							uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
							local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
							if (pUVar8 == null) goto label_05baeeae;
							fVar21 = (float)(~-(uint)((float)local_c8 < 0.0) & (uint)(float)local_c8 |(uint)((float)local_c8 + 360.0) & -(uint)((float)local_c8 < 0.0));
							local_c8._0_4_ =(float)(~-(uint)(fVar21 < 360.0) & (uint)(fVar21 + -360.0) | -(uint)(fVar21 < 360.0) & (uint)fVar21);
							local_e8.ScreenPointToRay(pUVar8, UVar24);
							local_b8 = CONCAT44(fStack_d8, fStack_dc);
							fVar21 = fStack_d4;
							local_88._0_8_ = il2cpp_runtime_helper_059d80e0(&local_b8);
							local_88._8_4_ = extraout_XMM0_Dc_00;
							local_88._12_4_ = extraout_XMM0_Dd_00;
							local_98._0_4_ = fVar21;
							uVar22 = il2cpp_runtime_helper_05bbd010(0);
							fVar20 = 0.0;
							local_78._0_4_ = fVar21;
							if (((float)local_c8 <= 0.0) || (180.0 <= (float)local_c8)) {
								pCVar1 = this._human;
								uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
								uVar15 = CONCAT44(local_78._4_4_, fVar21);
								local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
								if (pCVar1 == null) goto label_05baeeae;
								pCVar4 = pCVar1.Stats;
								uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
								uVar15 = CONCAT44(local_78._4_4_, fVar21);
								local_a8 = CONCAT44(local_a8._4_4_, (float)local_a8);
								if (pCVar4 == null) goto label_05baeeae;
								pAVar6 = (DivisivePowerPerk)pCVar4.OmniDashPerk;
								uVar23 = CONCAT44(local_c8._4_4_, (float)local_c8);
								uVar15 = CONCAT44(local_78._4_4_, fVar21);
								local_a8 = uVar22;
								if (pAVar6 == null) goto label_05baeeae;
								fVar21 = pAVar6.GetPowerRatio();
								uVar22 = CONCAT44(fVar21, (float)local_a8);
								fVar20 = 1.0;
							}
							pCVar1 = this._human;
							direction.z = (float)local_98._0_4_;
							direction.x = (float)local_88._0_4_;
							direction.y = (float)local_88._4_4_;
							local_a8 = uVar22;
							fVar21 = this.GetTargetAngle(direction);
							local_88._0_4_ = fVar21;
							if (((float)local_c8 <= 0.0) || (180.0 <= (float)local_c8)) {
								uVar23 = il2cpp_runtime_helper_05bbcf10(0);
							}
							else {
								uVar23 = il2cpp_runtime_helper_05bbd070(0);
							}
							iVar19 = 0;
							local_98._0_4_ = (float)local_c8;
							local_e8._0_8_ = null;
							local_e8._8_4_ = 0.0;
							fStack_dc = 0.0;
							value_00.z = (float)local_78;
							value_00.x = (float)(int)local_a8;
							value_00.y = (float)(int)((ulong)local_a8 >> 0x20);
							local_c8 = uVar23;
							local_e8 = new Nullable<Vector3>(value_00);
							unique0x10002403 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
							uVar23 = local_c8;
							uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
							if (pCVar1 == null) goto label_05baeeae;
							percentPower_00.value.y = (float)local_e8._8_4_;
							percentPower_00.hasValue = (bool)local_e8[0];
							percentPower_00._1_3_ = local_e8._1_3_;
							percentPower_00.value.x = (float)local_e8._4_4_;
							percentPower_00.value.z = fStack_dc;
							direction_01.z = (float)local_98._0_4_;
							direction_01.x = (float)local_c8;
							direction_01.y = (float)local_c8._4_4_;
							bVar16 = pCVar1.DashVertical((float)local_88._0_4_, direction_01, percentPower_00);
							unique0x1000246b =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
							if (bVar16) {
								pCVar1 = this._human;
								unique0x1000240b =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
								uVar23 = local_c8;
								uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
								if (pCVar1 == null) goto label_05baeeae;
								pCVar4 = pCVar1.Stats;
								unique0x10002413 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
								uVar15 = CONCAT44(local_78._4_4_, (float)local_78);
								if (pCVar4 == null) goto label_05baeeae;
								pCVar11 = pCVar4.VerticalDashPerk;
								unique0x1000241b =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)CONCAT44(fStack_dc, local_e8._8_4_);
								uVar15 = local_78;
								if (pCVar11 == null) goto label_05baeeae;
								pCVar11.OnUse(fVar20);
								iVar19 = 0;
							}
						}
					}
				}
			}
		}
	label_05baebb4: ;
		pSVar12 = SettingsManager.InputSettings;
		uVar23 = local_c8;
		uVar15 = local_78;
		if (pSVar12 != null) {
			pSVar2 = pSVar12.Human;
			if (pSVar2 != null) {
				pSVar13 = pSVar2.DashDoubleTap;
				if (pSVar13 != null) {
					if (pSVar13._value == false) {
	label_05baee86: ;
						if (iVar19 != 0) {
							pCVar1 = this._human;
							fVar21 = this.GetDashAngle(iVar19);
							uVar23 = local_c8;
							uVar15 = local_78;
							if (pCVar1 == null) goto label_05baeeae;
							pCVar1.Dash(fVar21);
						}
						return;
					}
					pSVar3 = this._dashKeys;
					if (pSVar3 != null) {
						pSVar17 = pSVar3.Keys;
						uVar23 = local_c8;
						uVar15 = local_78;
						if (pSVar17 != null) {
							local_e8.GetEnumerator(pSVar17);
							local_58 = (object)CONCAT44(fStack_d4, fStack_d8);
							local_68 = (byte[])local_e8._0_8_;
							local_e8._0_8_ = null;
							unique0x10002423 =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_68;
							do {
								local_a8._0_4_ = (float)iVar19;
								do {
									while(true) {
										do {
											bVar16 = local_68.MoveNext();
											if (!bVar16) {
												il2cpp_runtime_helper_02fd87b0(local_e8);
												iVar19 = (int)(float)local_a8;
												goto label_05baee86;
											}
											pSVar14 = this._dashTimes;
											if (pSVar14 == null) {
												throw new NullReferenceException();
											}
											iVar19 = (int32_t)local_58;
											fVar21 = pSVar14.get_Item((int32_t)local_58);
											if (0.0 <= fVar21) {
												pSVar14 = this._dashTimes;
												if (pSVar14 == null ) {
													throw new NullReferenceException();
												}
												fVar21 = pSVar14.get_Item(iVar19);
												local_c8._0_4_ = fVar21;
												fVar21 = Time.deltaTime;
												pSVar14.set_Item(iVar19, (float)local_c8 + fVar21);
												pSVar14 = this._dashTimes;
												if (pSVar14 == null ) {
													throw new NullReferenceException();
												}
												fVar21 = pSVar14.get_Item(iVar19);
												if (0.2 < fVar21) {
													pSVar14 = this._dashTimes;
													if (pSVar14 ==null) {
														throw new NullReferenceException();
													}
													pSVar14.set_Item(iVar19, -1.0);
												}
											}
											pSVar3 = this._dashKeys;
											if (pSVar3 == null) {
												throw new NullReferenceException();
											}
											pSVar18 = pSVar3.get_Item(iVar19);
											if (pSVar18 == null) {
												throw new NullReferenceException();
											}
											bVar16 = pSVar18.GetKeyDown(false);
										} while (!bVar16);
										pSVar14 = this._dashTimes;
										if (pSVar14 == null) {
											throw new NullReferenceException();
										}
										fVar21 = pSVar14.get_Item(iVar19);
										pSVar14 = this._dashTimes;
										if ((fVar21 != -1.0) || (NAN(fVar21))) break;
										if (pSVar14 == null) {
											throw new NullReferenceException();
										}
										pSVar14.set_Item(iVar19, 0.0);
									}
									if (pSVar14 == null) {
										throw new NullReferenceException();
									}
									fVar21 = pSVar14.get_Item(iVar19);
								} while (fVar21 <= 0.0);
							} while(true);
						}
					}
				}
			}
		}
	label_05baeeae: ;
		local_c8 = uVar23;
		local_78 = uVar15;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F00")]
	[Address(RVA = "0x5AAF280", Offset = "0x5AAE280", VA = "0x5AAF280")]
	private float GetDashAngle(HumanDashDirection direction)
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$GetDashAngle): clean
		float fVar1;

		switch(direction) {
		case 1:
			fVar1 = this.GetTargetAngle(1, 0);
			return fVar1;
		case 2:
			fVar1 = this.GetTargetAngle(-1, 0);
			return fVar1;
		case 3:
			fVar1 = this.GetTargetAngle(0, -1);
			return fVar1;
		case 4:
			fVar1 = this.GetTargetAngle(0, 1);
			return fVar1;
		default: ;
			return 0.0;
		}
	}

	[Token(Token = "0x6003F01")]
	[Address(RVA = "0x5AACF60", Offset = "0x5AABF60", VA = "0x5AACF60")]
	private bool IsSpin3Special()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$IsSpin3Special): 1 lines keep C-only constructs
		byte bVar1;
		Human pCVar2;
		BaseUseable pCVar3;
		BaseUseable pCVar4;

		pCVar2 = this._human;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		if ((pCVar2._state == 9) &&(pCVar3 = pCVar2.Special, pCVar3 != null)) {
			pCVar4 = pCVar3.klass;
			bVar1 = (typeof(Spin3Special)._2).typeHierarchyDepth;
			if (bVar1 <= (pCVar4._2).typeHierarchyDepth) {
				return (pCVar4._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Spin3Special);
			}
		}
		return false;
	}

	[Token(Token = "0x6003F02")]
	[Address(RVA = "0x5AAF2E0", Offset = "0x5AAE2E0", VA = "0x5AAF2E0", Slot = "10")]
	public bool MovingLeft()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$MovingLeft): clean
		InputSettings pSVar1;
		GeneralInputSettings pSVar2;
		KeybindSetting __this_00;
		bool bVar3;

		pSVar1 = SettingsManager.InputSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(__this_00 = pSVar2.Left, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return bVar3;
	}

	[Token(Token = "0x6003F03")]
	[Address(RVA = "0x5AAF340", Offset = "0x5AAE340", VA = "0x5AAF340", Slot = "11")]
	public bool MovingRight()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$MovingRight): clean
		InputSettings pSVar1;
		GeneralInputSettings pSVar2;
		KeybindSetting __this_00;
		bool bVar3;

		pSVar1 = SettingsManager.InputSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(__this_00 = pSVar2.Right, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return bVar3;
	}

	[Token(Token = "0x6003F04")]
	[Address(RVA = "0x5AAF3A0", Offset = "0x5AAE3A0", VA = "0x5AAF3A0", Slot = "12")]
	public bool UsingGas()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$UsingGas): clean
		InputSettings pSVar1;
		HumanInputSettings pSVar2;
		KeybindSetting __this_00;
		bool bVar3;

		pSVar1 = SettingsManager.InputSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.Human, pSVar2 == null)) ||(__this_00 = pSVar2.Jump, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return bVar3;
	}

	[Token(Token = "0x6003F05")]
	[Address(RVA = "0x5AAF400", Offset = "0x5AAE400", VA = "0x5AAF400", Slot = "13")]
	public bool HookingLeft()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$HookingLeft): clean
		InputSettings pSVar1;
		HumanInputSettings pSVar2;
		KeybindSetting __this_00;
		bool bVar3;

		pSVar1 = SettingsManager.InputSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.Human, pSVar2 == null)) ||(__this_00 = pSVar2.HookLeft, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return bVar3;
	}

	[Token(Token = "0x6003F06")]
	[Address(RVA = "0x5AAF460", Offset = "0x5AAE460", VA = "0x5AAF460", Slot = "14")]
	public bool HookingRight()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$HookingRight): clean
		InputSettings pSVar1;
		HumanInputSettings pSVar2;
		KeybindSetting __this_00;
		bool bVar3;

		pSVar1 = SettingsManager.InputSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.Human, pSVar2 == null)) ||(__this_00 = pSVar2.HookRight, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return bVar3;
	}

	[Token(Token = "0x6003F07")]
	[Address(RVA = "0x5AAF4C0", Offset = "0x5AAE4C0", VA = "0x5AAF4C0", Slot = "15")]
	public bool HookingBoth()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$HookingBoth): clean
		InputSettings pSVar1;
		HumanInputSettings pSVar2;
		KeybindSetting __this_00;
		bool bVar3;

		pSVar1 = SettingsManager.InputSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.Human, pSVar2 == null)) ||(__this_00 = pSVar2.HookBoth, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return bVar3;
	}

	[Token(Token = "0x6003F08")]
	[Address(RVA = "0x5AAF520", Offset = "0x5AAE520", VA = "0x5AAF520", Slot = "16")]
	public Vector3 GetAimPoint()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$GetAimPoint): 12 lines keep C-only constructs
		Human __this_00;
		Ray ray;
		bool bVar1;
		int layerMask;
		Vector3 UVar2;
		Vector3 UVar3;
		float fStack_7c;
		float fStack_78;
		Ray local_70;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		RaycastHit local_38;

		local_38.m_UV.x = 0.0;
		local_38.m_UV.y = 0.0;
		local_38.m_Collider.m_Data = (EntityId)0x0;
		local_38.m_Normal.y = 0.0;
		local_38.m_Normal.z = 0.0;
		local_38.m_FaceID = 0;
		local_38.m_Distance = 0.0;
		local_38.m_Point.x = 0.0;
		local_38.m_Point.y = 0.0;
		local_38.m_Point.z = 0.0;
		local_38.m_Normal.x = 0.0;
		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_70 = __this_00.GetAimRayAfterHumanCheap();
		local_48._0_4_ = local_70.m_Origin.x;
		local_48._4_4_ = local_70.m_Origin.y;
		local_48._8_8_ = 0;
		local_58._0_4_ = local_70.m_Direction.x;
		local_58._4_4_ = local_70.m_Direction.y;
		local_58._8_8_ = 0;
		layerMask = (Human.AimMask).value;
		fStack_7c = local_58._0_4_;
		fStack_78 = local_58._4_4_;
		ray.m_Direction.z = local_70.m_Direction.z;
		ray.m_Direction.y = fStack_78;
		ray.m_Direction.x = fStack_7c;
		ray.m_Origin.z = local_70.m_Origin.z;
		ray.m_Origin.x = (float)local_48._0_4_;
		ray.m_Origin.y = (float)local_48._4_4_;
		bVar1 = Physics.Raycast(ray, ref local_38, 1000.0, layerMask);
		if (bVar1) {
			UVar2 = (Vector3)local_38.point;
			return (Vector3)UVar2;
		}
		UVar3.x = (float)local_48._0_4_ + (float)local_58._0_4_ * 1000.0;
		UVar3.y = (float)local_48._4_4_ + (float)local_58._4_4_ * 1000.0;
		UVar3.z = local_70.m_Origin.z + local_70.m_Direction.z * 1000.0;
		return (Vector3)UVar3;
	}

	[Token(Token = "0x6003F09")]
	[Address(RVA = "0x5AAF6A0", Offset = "0x5AAE6A0", VA = "0x5AAF6A0")]
	public HumanPlayerController()
	{
		// Lifted from source/cpp/Controllers/HumanPlayerController.c (Controllers.HumanPlayerController$$.ctor): 2 lines keep C-only constructs
		HashSet<HumanState> __this_00;

		if (Il2CppMethodInitialized_075474b7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor) ;
			Il2CppMethodInitialized_075474b7 = true;
		}
		this._reelInScrollCooldown = 0.2;
		__this_00 = il2cpp_codegen_object_new(typeof(HashSet<HumanState>)) ;
		__this_00 = new HashSet<Int32Enum>();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add(7);
		__this_00.Add(10);
		__this_00.Add(8);
		__this_00.Add(4);
		__this_00.Add(9);
		__this_00.Add(0xf);
		this._illegalWeaponStates = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Controllers/HumanPlayerController.c.

	// Controllers.HumanPlayerController$$.cctor: clean
	static HumanPlayerController()
	{
		uint uVar1;
		LayerMask UVar3;
		Int32[] layers;

		layers = (Int32[])new int[5];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)layers.Length;
		if (uVar1 != 0) {
			layers[0] = PhysicsLayer.TitanMovebox;
			if ((((uVar1 != 1) && (layers[1] = PhysicsLayer.TitanPushbox, 2 < uVar1)) &&(layers[2] = PhysicsLayer.MapObjectEntities, uVar1 != 3)) &&(layers[3] = PhysicsLayer.MapObjectProjectiles, 4 < uVar1)) {
				layers[4] = PhysicsLayer.MapObjectAll;
				UVar3 = PhysicsLayer.GetMask(layers);
				(HumanPlayerController.HookMask).m_Mask =(int32_t)UVar3.m_Mask;
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
