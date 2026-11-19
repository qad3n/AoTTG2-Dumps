// ==================== AoTTG2 cross-reference ====================
// Type: Weather.ThunderWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/ThunderWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/ThunderWeatherEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000034")]
internal class ThunderWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x0")]
	public static List<List<LightningParticle>> LightningPool;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x6C")]
	protected float _lightningWaitTime;

	[Token(Token = "0x4000113")]
	private const int MaxLightningParticles = 4;

	[Token(Token = "0x1700001D")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x57568E0", Offset = "0x57558E0", VA = "0x57568E0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Weather/ThunderWeatherEffect.c (Weather.ThunderWeatherEffect$$get__positionOffset): clean
			uint uVar1;
			uint uVar2;
			Vector3 UVar4;

			uVar1 = (Vector3.upVector).x;
			uVar2 = (Vector3.upVector).y;
			UVar4.x = (float)uVar1 * 0.0;
			UVar4.y = (float)uVar2 * 0.0;
			UVar4.z = (Vector3.upVector).z * 0.0;
			return (Vector3)UVar4;
		}
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x5756930", Offset = "0x5755930", VA = "0x5756930")]
	public static void OnFinishInit()
	{
		// Lifted from source/cpp/Weather/ThunderWeatherEffect.c (Weather.ThunderWeatherEffect$$OnFinishInit): 5 lines keep C-only constructs
		int piVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
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
		GraphicsSettings pSVar16;
		IntSetting pSVar17;
		String path;
		LineRenderer __this;
		LightningParticle[] pWVar18;
		List<List<LightningParticle>> __this_00;
		List<LightningParticle>[] pSVar19;
		int iVar20;
		UnityEngine_Vector3_StaticFields pUVar21;
		List<LightningParticle> __this_01;
		GameObject __this_02;
		MethodInfo pMVar22;
		Object target;
		List<Vector3> __this_03;
		int iVar23;
		int index;
		float fVar26;
		float fVar27;
		Vector3 start;
		Vector3 UVar28;
		float local_98;

		iVar20 = 0;
		while(true) {
			pUVar21 = typeof(Vector3).static_fields;
			uVar6 = (pUVar21.upVector).x;
			uVar10 = (pUVar21.upVector).y;
			fVar2 = (pUVar21.upVector).z;
			if (Il2CppMethodInitialized_07544d56 == false) {
				Il2CppMethodInitialized_07544d56 = true;
				pUVar21 = typeof(Vector3).static_fields;
			}
			uVar7 = (pUVar21.rightVector).x;
			uVar11 = (pUVar21.rightVector).y;
			fVar3 = (pUVar21.rightVector).z;
			fVar26 = Random.Range(-1000.0, 1000.0);
			pUVar21 = typeof(Vector3).static_fields;
			uVar8 = (pUVar21.downVector).x;
			uVar12 = (pUVar21.downVector).y;
			fVar4 = (pUVar21.downVector).z;
			if (Il2CppMethodInitialized_07544d56 == false) {
				Il2CppMethodInitialized_07544d56 = true;
				pUVar21 = typeof(Vector3).static_fields;
			}
			uVar9 = (pUVar21.rightVector).x;
			uVar13 = (pUVar21.rightVector).y;
			fVar5 = (pUVar21.rightVector).z;
			fVar27 = Random.Range(-1000.0, 1000.0);
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar14 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar14 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar14 == 0) {
			}
			pSVar16 = SettingsManager.GraphicsSettings;
			if ((pSVar16 == null) ||(pSVar17 = pSVar16.WeatherEffects, pSVar17 == null)) break;
			start.x = (float)uVar6 * 1500.0 + (float)uVar7 * fVar26;
			start.y = (float)uVar10 * 1500.0 + (float)uVar11 * fVar26;
			local_98 = (float)(pSVar17._value == 2 ^ 9);
			__this_01 = new List<LightningParticle>();
			iVar23 = 0;
			do {
				path = ResourcePaths.Weather;
				__this_02 = ResourceManager.InstantiateAsset<GameObject>(path, "Prefabs/LightningParticle", false, false);
				if ((__this_02 == null) ||(pMVar22 = (MethodInfo)__this_02.AddComponent<LightningParticle>(), pMVar22 == null)) goto label_05856f5a;
				target = (Object)pMVar22.gameObject;
				Object.DontDestroyOnLoad(target);
				UVar28.y = (float)uVar12 * 300.0 + (float)uVar13 * fVar27;
				UVar28.x = (float)uVar8 * 300.0 + (float)uVar9 * fVar27;
				start.z = fVar2 * 1500.0 + fVar3 * fVar26;
				UVar28.z = fVar4 * 300.0 + fVar5 * fVar27;
				__this_03 = LightningParticle.GenerateLightningBoltPositions(start, UVar28, (int32_t)local_98, 0.0);
				if ((__this_03 == null) ||((LineRenderer)pMVar22.parameters == null)) goto label_05856f5a;
				(pMVar22.parameters).SetVertexCount(__this_03._size);
				if (0 < __this_03._size) {
					index = 0;
					do {
						__this = (LineRenderer)pMVar22.parameters;
						UVar28 = __this_03.get_Item(index);
						if (__this == null) goto label_05856f5a;
						__this.SetPosition(index, UVar28);
						index = index + 1;
					} while (index < __this_03._size);
				}
				if (__this_01 == null) goto label_05856f5a;
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pWVar18 = __this_01._items;
				if (pWVar18 == null) goto label_05856f5a;
				uVar15 = __this_01._size;
				if (uVar15 < (uint)pWVar18.Length) {
					__this_01._size = uVar15 + 1;
					pWVar18[(int)uVar15] = (LightningParticle)pMVar22;
				}
				else {
					__this_01.AddWithResize((object)pMVar22);
				}
				pMVar22.Disable();
				iVar23 = iVar23 + 1;
			} while (iVar23 != 4);
			pMVar22 = MethodInfo_System_Collections_Generic_List_List_LightningParticle_Add;
			__this_00 = ThunderWeatherEffect.LightningPool;
			if (__this_00 == null) break;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar19 = __this_00._items;
			if (pSVar19 == null) break;
			uVar15 = __this_00._size;
			if (uVar15 < (uint)pSVar19.Length) {
				__this_00._size = uVar15 + 1;
				pSVar19[(int)uVar15] = __this_01;
			}
			else {
				__this_00.AddWithResize((object)__this_01);
			}
			iVar20 = iVar20 + 1;
			if (iVar20 == 10) {
				return;
			}
		}
	label_05856f5a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x5756F60", Offset = "0x5755F60", VA = "0x5756F60", Slot = "8")]
	public override void Randomize()
	{
		// Lifted from source/cpp/Weather/ThunderWeatherEffect.c (Weather.ThunderWeatherEffect$$Randomize): clean
		return;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x5756F70", Offset = "0x5755F70", VA = "0x5756F70", Slot = "11")]
	public override void Setup(Transform parent)
	{
		// Lifted from source/cpp/Weather/ThunderWeatherEffect.c (Weather.ThunderWeatherEffect$$Setup): clean
		this.Setup(parent);
		return;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x5756F80", Offset = "0x5755F80", VA = "0x5756F80", Slot = "10")]
	public override void SetLevel(float level)
	{
		// Lifted from source/cpp/Weather/ThunderWeatherEffect.c (Weather.ThunderWeatherEffect$$SetLevel): 1 lines keep C-only constructs
		this._level = level;
		if (0.0 < level) {
			this.SetActiveAudio(SUB14(0.5 <= level, 0), 1.0);
			return;
		}
		return;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x5756FC0", Offset = "0x5755FC0", VA = "0x5756FC0")]
	protected void FixedUpdate()
	{
		// Lifted from source/cpp/Weather/ThunderWeatherEffect.c (Weather.ThunderWeatherEffect$$FixedUpdate): clean
		float fVar1;
		float fVar2;

		fVar2 = this._lightningWaitTime;
		fVar1 = Time.fixedDeltaTime;
		fVar2 = fVar2 - fVar1;
		this._lightningWaitTime = fVar2;
		if (0.0 < fVar2) {
			return;
		}
		fVar2 = this._level * -15.0 + 20.0;
		this._lightningWaitTime = fVar2;
		fVar2 = Random.Range(fVar2 * 0.5, fVar2 * 1.5);
		this._lightningWaitTime = fVar2;
		this.CreateLightning();
		return;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x5757040", Offset = "0x5756040", VA = "0x5757040")]
	protected void CreateLightning()
	{
		// Lifted from source/cpp/Weather/ThunderWeatherEffect.c (Weather.ThunderWeatherEffect$$CreateLightning): 12 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		List<List<LightningParticle>> __this_00;
		BaseCamera pCVar4;
		Camera __this_01;
		LineRenderer __this_02;
		int iVar5;
		List<object> __this_03;
		UnityEngine_Vector3_StaticFields pUVar6;
		Transform pUVar7;
		LightningParticle.d__20<StrikeCoroutine> __this_04;
		LightningParticle pWVar8;
		GameObject __this_05;
		int index;
		float fVar9;
		float fVar10;
		uint uVar11;
		uint extraout_XMM0_Db;
		byte[] auVar12 = new byte[16];
		Quaternion rotation;
		Vector3 UVar13;
		Vector3 UVar14;
		float fStack_70;
		Vector3 UStack_58;
		float fStack_48;

		if (Il2CppMethodInitialized_0754507c == false) {
			Il2CppMethodInitialized_0754507c = true;
			if ((typeof(ThunderWeatherEffect)._2).cctor_finished_or_no_cctor != 0) goto label_0585706d;
	label_058570d7: ;
			__this_00 = ThunderWeatherEffect.LightningPool;
		}
		else {
			if ((typeof(ThunderWeatherEffect)._2).cctor_finished_or_no_cctor == 0) goto label_058570d7;
	label_0585706d: ;
			__this_00 = ThunderWeatherEffect.LightningPool;
		}
		if (__this_00 == null) goto label_0585754f;
		iVar5 = Random.Range(0, __this_00._size);
		__this_03 = (List<object>)__this_00.get_Item(iVar5);
		iVar5 = Random.Range(1, 4);
		pCVar4 = SceneLoader.CurrentCamera;
		if ((pCVar4 == null) ||(__this_01 = pCVar4.Camera, __this_01 == null)) goto label_0585754f;
		fStack_48 = __this_01.fieldOfView;
		pUVar7 = this._parent;
		if (pUVar7 == null) goto label_0585754f;
		UVar13 = pUVar7.forward;
		pUVar7 = this._parent;
		if (pUVar7 == null) goto label_0585754f;
		UVar14 = pUVar7.forward;
		fStack_70 = UVar14.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			UStack_58.x = 0.0;
			UStack_58.y = 0.0;
			if (g_data_0753e729 != false) goto label_058571ba;
	label_0585751b: ;
			UStack_58.x = 0.0;
			UStack_58.y = 0.0;
			g_data_0753e729 = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			UStack_58.x = 0.0;
			UStack_58.y = 0.0;
			if (g_data_0753e729 == false) goto label_0585751b;
	label_058571ba: ;
			UStack_58.x = 0.0;
			UStack_58.y = 0.0;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		fVar10 = UVar13.x;
		uVar11 = 0;
		fVar9 = fStack_70 * fStack_70 + fVar10 * fVar10 + 0.0;
		if (fVar9 < 0.0) {
			fVar9 = sqrtf(fVar9);
			uVar11 = extraout_XMM0_Db;
			if (fVar9 <= 1e-05) goto label_05857201;
	label_0585722d: ;
			fStack_70 = fStack_70 / fVar9;
			auVar12._4_4_ = fVar9;
			auVar12._0_4_ = fVar9;
			auVar12._8_4_ = uVar11;
			auVar12._12_4_ = uVar11;
			auVar12 = divps(ZEXT416((uint)fVar10), auVar12);
			UStack_58.x = auVar12._0_4_;
			UStack_58.y = auVar12._4_4_;
			pUVar6 = (UnityEngine_Vector3_StaticFields)&UStack_58;
		}
		else {
			fVar9 = SQRT(fVar9);
			if (1e-05 < fVar9) goto label_0585722d;
	label_05857201: ;
			pUVar6 = typeof(Vector3).static_fields;
			fStack_70 = (pUVar6.zeroVector).z;
		}
		uVar1 = (pUVar6.zeroVector).x;
		uVar2 = (pUVar6.zeroVector).y;
		fVar10 = Random.Range(fStack_48 * -0.5, fStack_48 * 0.5);
		if (Il2CppMethodInitialized_0753e72c == false) {
			fStack_48 = fVar10;
			Il2CppMethodInitialized_0753e72c = true;
			fVar10 = fStack_48;
		}
		pUVar6 = typeof(Vector3).static_fields;
		UStack_58.x = (pUVar6.upVector).x;
		UStack_58.y = (pUVar6.upVector).y;
		UStack_58.z = (pUVar6.upVector).z;
		rotation = Quaternion.Internal_AngleAxis(fVar10, ref UStack_58);
		UVar13.z = fStack_70;
		UVar13.x = (float)uVar1;
		UVar13.y = (float)uVar2;
		(rotation * UVar13);
		fStack_48 = Random.Range(900.0, 1400.0);
		pUVar7 = this.transform;
		if (pUVar7 == null) {
	label_0585754f: ;
			throw new NullReferenceException();
		}
		UVar13 = pUVar7.position;
		if (0 < iVar5) {
			if (__this_03 == null) goto label_0585754f;
			fStack_70 = fStack_70 * fStack_48;
			fVar10 = (float)uVar1 * fStack_48;
			fVar9 = (float)uVar2 * fStack_48;
			index = 0;
			do {
				pWVar8 = __this_03.get_Item(index);
				if ((pWVar8 == null) ||(pUVar7 = pWVar8.transform, pUVar7 == null)) goto label_0585754f;
				UVar14.z = fStack_70 + UVar13.z;
				UVar14.x = fVar10 + UVar13.x;
				UVar14.y = fVar9 + UVar13.y;
				pUVar7.position = UVar14;
				pWVar8 = __this_03.get_Item(index);
				if ((pWVar8 == null) ||(pUVar7 = pWVar8.transform, pUVar7 == null)) goto label_0585754f;
				pUVar7.LookAt(this._parent);
				pWVar8 = __this_03.get_Item(index);
				if ((pWVar8 == null) ||(__this_02 = pWVar8._lineRenderer, __this_02 == null)) goto label_0585754f;
				__this_02.SetColors((Color)ZEXT816(0), (Color)ZEXT816(0));
				__this_05 = pWVar8.gameObject;
				if (__this_05 == null) goto label_0585754f;
				__this_05.SetActive(true);
				pWVar8 = __this_03.get_Item(index);
				if (pWVar8 == null) goto label_0585754f;
				__this_04 = new LightningParticle.d__20<StrikeCoroutine>();
				__this_04.__1__state = 0;
				__this_04.__4__this = pWVar8;
				__this_04.sound = index == 0;
				pWVar8.StartCoroutine((IEnumerator)__this_04);
				index = index + 1;
			} while (iVar5 != index);
		}
		return;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x5757560", Offset = "0x5756560", VA = "0x5757560")]
	public ThunderWeatherEffect()
	{
		// Lifted from source/cpp/Weather/ThunderWeatherEffect.c (Weather.ThunderWeatherEffect$$.ctor): clean
		this._lightningWaitTime = 15.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Weather/ThunderWeatherEffect.c.

	// Weather.ThunderWeatherEffect$$.cctor: clean
	static ThunderWeatherEffect()
	{
		List<List<LightningParticle>> __this;

		__this = new List<List<LightningParticle>>();
		ThunderWeatherEffect.LightningPool = __this;
		return;
	}
}
