// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/HumanCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/HumanCustomSkinLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x20003BF")]
internal class HumanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003C0")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001332")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001333")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001334")]
		[FieldOffset(Offset = "0x20")]
		public HumanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4001335")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4001336")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003CskinUrls_003E5__2;

		[Token(Token = "0x4001337")]
		[FieldOffset(Offset = "0x38")]
		private int _003CpartId_003E5__3;

		[Token(Token = "0x17000291")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60017EC")]
			[Address(RVA = "0x5861CD0", Offset = "0x5860CD0", VA = "0x5861CD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000292")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60017EE")]
			[Address(RVA = "0x5861D20", Offset = "0x5860D20", VA = "0x5861D20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x5860400", Offset = "0x585F400", VA = "0x5860400")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__8(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x5861620", Offset = "0x5860620", VA = "0x5861620", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x5861630", Offset = "0x5860630", VA = "0x5861630", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$MoveNext): 6 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			HumanCustomSkinLoader __this_00;
			Object[] pSVar3;
			object obj;
			CustomSkinSettings pSVar4;
			HumanCustomSkinSettings pSVar5;
			BoolSetting pSVar6;
			GameObject pUVar7;
			bool bVar8;
			int piVar9;
			String[] pSVar10;
			BaseCustomSkinPart __this_01;
			BaseCustomSkinPart.d__11<LoadSkin> __this_02;
			Coroutine pUVar11;
			Human x;
			HumanSetup __this_03;
			uint uVar12;
			float result;
			String pSVar13;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				goto label_05961a2c;
			}
			if (iVar1 != 0) {
				return false;
			}
			this.__1__state = -1;
			pSVar3 = this.data;
			if (pSVar3 == null) goto label_05961aba;
			if ((int)pSVar3.Length == 0) {
		label_05961abf: ;
				throw new IndexOutOfRangeException();
			}
			if ((__this_00 == null) ||(obj = pSVar3[0], obj == null)) goto label_05961aba;
			if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
		label_05961764: ;
				throw new InvalidCastException();
			}
			piVar9 = il2cpp_vm_Object_Unbox(obj);
			__this_00._horseViewId = *piVar9;
			pSVar3 = this.data;
			if (pSVar3 == null) goto label_05961aba;
			if ((pSVar3.Length & 0xfffffffe) == 0) goto label_05961abf;
			pSVar13 = (String)pSVar3[1];
			if (pSVar13 == null) goto label_05961aba;
			if (pSVar13.klass != g_data_07556758) goto label_05961764;
			uVar12 = 0;
			pSVar10 = pSVar13.Split(0x2c, 0);
			this._skinUrls_5__2 = pSVar10;
			this._partId_5__3 = 0;
		label_05961a34: ;
			if (0x16 < (int)uVar12) goto label_05961a4d;
			pSVar10 = this._skinUrls_5__2;
			if (pSVar10 == null) goto label_05961aba;
			uVar2 = (uint)pSVar10.Length;
			if ((int)uVar2 <= (int)uVar12) goto label_05961a4d;
			if (0x12 < uVar12) goto switchD_05961782_caseD_1;
			switch((ulong)uVar12) {
			case 0:
				if (__this_00 != null) {
					if (-1 < __this_00._horseViewId) goto label_0596184a;
					goto label_05961a2c;
				}
				goto label_05961aba;
			case 10:
				pSVar4 = SettingsManager.CustomSkinSettings;
				if ((pSVar4 == null) ||((pSVar5 = pSVar4.Human, pSVar5 == null ||(pSVar6 = pSVar5.GasEnabled, pSVar6 == null)))) goto label_05961aba;
				if (pSVar6._value == false) goto label_05961a2c;
				break;
			case 0xc:
				if ((__this_00 == null) ||(pUVar7 = __this_00._owner, pUVar7 == null)) goto label_05961aba;
				x = pUVar7.GetComponent<Human>();
				bVar8 = ((Object)x != null);
				if (!bVar8) goto label_0596184a;
				if (x == null) goto label_05961aba;
				bVar8 = x.enabled;
				if ((bVar8) &&(bVar8 = x.IsMine(), !bVar8)) goto label_05961a2c;
				goto label_0596184a;
			case 0xf:
				if (0xf < uVar2) {
					if (__this_00 != null) {
						pSVar13 = pSVar10[0xf];
						result = &__this_00._hookLTiling;
						goto label_05961a25;
					}
					goto label_05961aba;
				}
				goto label_05961abf;
			case 0x10:
			case 0x12:
				pSVar4 = SettingsManager.CustomSkinSettings;
				if (((pSVar4 == null) ||(pSVar5 = pSVar4.Human, pSVar5 == null)) ||(pSVar6 = pSVar5.HookEnabled, pSVar6 == null)) goto label_05961aba;
				if (pSVar6._value == false) goto label_05961a2c;
				if (uVar12 == 0x11) goto switchD_05961782_caseD_11;
				break;
			case 0x11:
		switchD_05961782_caseD_11: ;
				if (uVar12 < uVar2) {
					if (__this_00 != null) {
						pSVar13 = pSVar10[uVar12];
						result = &__this_00._hookRTiling;
		label_05961a25: ;
						Single.TryParse(pSVar13, result);
						goto label_05961a2c;
					}
					goto label_05961aba;
				}
				goto label_05961abf;
			}
		switchD_05961782_caseD_1: ;
			if (__this_00 == null) goto label_05961aba;
		label_0596184a: ;
			__this_01 = __this_00.GetCustomSkinPart(this._partId_5__3);
			if (__this_01 != null) {
				pSVar10 = this._skinUrls_5__2;
				if (pSVar10 == null) goto label_05961aba;
				uVar12 = this._partId_5__3;
				if ((uint)pSVar10.Length <= uVar12) goto label_05961abf;
				bVar8 = String.IsNullOrEmpty(pSVar10[(int)uVar12]);
				if (bVar8) {
					__this_01.ResetToDefault();
				}
				else {
					pSVar10 = this._skinUrls_5__2;
					if (pSVar10 == null) goto label_05961aba;
					uVar12 = this._partId_5__3;
					if ((uint)pSVar10.Length <= uVar12) goto label_05961abf;
					bVar8 = __this_01.LoadCache(pSVar10[(int)uVar12]);
					if (!bVar8) {
						pSVar10 = this._skinUrls_5__2;
						if (pSVar10 == null) goto label_05961aba;
						uVar12 = this._partId_5__3;
						if (uVar12 < (uint)pSVar10.Length) {
							pSVar13 = pSVar10[(int)uVar12];
							__this_02 = new BaseCustomSkinPart.d__11<LoadSkin>();
							__this_02.__1__state = 0;
							__this_02.__4__this = __this_01;
							__this_02.url = pSVar13;
							pUVar11 = __this_00.StartCoroutine((IEnumerator)__this_02);
							this.__2__current = (object)pUVar11;
							this.__1__state = 1;
							return true;
						}
						goto label_05961abf;
					}
				}
			}
		label_05961a2c: ;
			uVar12 = this._partId_5__3 + 1;
			this._partId_5__3 = uVar12;
			goto label_05961a34;
		label_05961a4d: ;
			if ((__this_00 != null) &&(pUVar7 = __this_00._owner, pUVar7 != null)) {
				__this_03 = pUVar7.GetComponent<HumanSetup>();
				bVar8 = ((Object)__this_03 != null);
				if (bVar8) {
					if (__this_03 == null) goto label_05961aba;
					__this_03.ReapplyCharacterEffectsToExistingParts();
				}
				__this_00.Finished = true;
				return false;
			}
		label_05961aba: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60017ED")]
		[Address(RVA = "0x5861CE0", Offset = "0x5860CE0", VA = "0x5861CE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomSkins_HumanCustomSkinLoader_LoadSkinsFromRPC_d__8_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400132E")]
	[FieldOffset(Offset = "0x28")]
	private int _horseViewId;

	[Token(Token = "0x400132F")]
	[FieldOffset(Offset = "0x2C")]
	private float _hookLTiling;

	[Token(Token = "0x4001330")]
	[FieldOffset(Offset = "0x30")]
	private float _hookRTiling;

	[Token(Token = "0x4001331")]
	[FieldOffset(Offset = "0x34")]
	public bool Finished;

	[Token(Token = "0x1700028F")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x58601E0", Offset = "0x585F1E0", VA = "0x58601E0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader$$get_RendererIdPrefix): clean
			return "human";
		}
	}

	[Token(Token = "0x17000290")]
	internal override bool AllowLocalFileTextures
	{
		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x5860210", Offset = "0x585F210", VA = "0x5860210", Slot = "5")]
		get
		{
			// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader$$get_AllowLocalFileTextures): clean
			Object pUVar1;
			GameObject pUVar2;
			bool bVar3;
			DummyHuman x;
			Human x_00;

			pUVar1 = (Object)this._owner;
			bVar3 = (pUVar1 != null);
			if (bVar3) {
				pUVar2 = this._owner;
				if (pUVar2 == null) goto label_0596036f;
				x = pUVar2.GetComponent<DummyHuman>();
				bVar3 = ((Object)x != null);
				if (bVar3) {
					return true;
				}
			}
			pUVar1 = (Object)this._owner;
			x_00 = null;
			bVar3 = (pUVar1 != null);
			if (bVar3) {
				pUVar2 = this._owner;
				if (pUVar2 == null) goto label_0596036f;
				x_00 = pUVar2.GetComponent<Human>();
			}
			bVar3 = ((Object)x_00 != null);
			if (bVar3) {
				if (x_00 == null) {
		label_0596036f: ;
					throw new NullReferenceException();
				}
				bVar3 = x_00.enabled;
				if (bVar3) {
					bVar3 = x_00.IsMine();
					return bVar3;
				}
			}
			return false;
		}
	}

	[Token(Token = "0x60017E5")]
	[Address(RVA = "0x5860380", Offset = "0x585F380", VA = "0x5860380", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__8))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader$$LoadSkinsFromRPC): clean
		HumanCustomSkinLoader.d__8<LoadSkinsFromRPC> __this_00;

		__this_00 = new HumanCustomSkinLoader.d__8<LoadSkinsFromRPC>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.data = data;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60017E6")]
	[Address(RVA = "0x5860420", Offset = "0x585F420", VA = "0x5860420")]
	public BaseCustomSkinPart GetCustomSkinPartPublic(int partId)
	{
		// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPartPublic): clean
		BaseCustomSkinPart pCVar1;

		return pCVar1;
	}

	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x5860440", Offset = "0x585F440", VA = "0x5860440", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPart): 16 lines keep C-only constructs
		Object pUVar1;
		HumanSetupMeshes __this_00;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		HookUseable pCVar4;
		HumanSetupTextures __this_01;
		bool bVar5;
		DummyHuman x;
		Human pCVar6;
		HumanSetup pCVar7;
		String pSVar8;
		List<Renderer> renderers;
		PhotonView __this_02;
		Transform __this_03;
		GameObject pUVar9;
		BaseCustomSkinLoader pCVar10;
		List<MeleeWeaponTrail> __this_04;
		WeaponTrailCustomSkinPart __this_05;
		List<Renderer> pSVar11;
		HookCustomSkinPart __this_06;
		HumanCostumeCustomSkinPart* ppCVar12;
		String pSVar13;
		BaseCustomSkinPart* ppCVar14;
		BaseCustomSkinPart __this_07;
		String str1;
		HumanHairCustomSkinPart __this_08;
		uint method_00;
		String* ppSVar15;
		HumanCustomSkinLoader pCVar16;
		HumanSetup __this_09;
		int iVar17;
		int iStack_44;
		HumanCustomSkinLoader pCStack_40;
		float fStack_34;

		pUVar9 = this._owner;
		if (pUVar9 == null) goto label_059614ba;
		x = pUVar9.GetComponent<DummyHuman>();
		bVar5 = ((Object)x != null);
		if (bVar5) {
			if (x == null) goto label_059614ba;
			pCVar7 = x.Setup;
		}
		else {
			pUVar9 = this._owner;
			if (pUVar9 == null) goto label_059614ba;
			pCVar6 = pUVar9.GetComponent<Human>();
			bVar5 = ((Object)pCVar6 != null);
			if (bVar5) {
				if (pCVar6 == null) goto label_059614ba;
				pCVar7 = pCVar6.Setup;
				bVar5 = ((Object)pCVar7 != null);
				if (bVar5) {
					pCVar7 = pCVar6.Setup;
					goto label_0596064a;
				}
			}
			pUVar9 = this._owner;
			if (pUVar9 == null) goto label_059614ba;
			pCVar7 = pUVar9.GetComponent<HumanSetup>();
		}
	label_0596064a: ;
		bVar5 = ((Object)pCVar7 == null);
		if (bVar5) {
			pUVar1 = (Object)this._owner;
			if (pUVar1 != null) {
				pSVar8 = pUVar1.name;
				pSVar8 = String.Concat("Could not find HumanSetup component on ", pSVar8);
				Debug.LogError((object)pSVar8);
				return null;
			}
			goto label_059614ba;
		}
		pCStack_40 = this;
		pSVar11 = renderers;
		renderers = new List<Renderer>();
		pCVar16 = pCStack_40;
		method_00 = &switchD_05960705::switchdataD_010a574c;
		switch(partId) {
		case 0:
			iVar17 = pCStack_40._horseViewId;
			if (-1 < iVar17) {
				__this_02 = PhotonView.Find(iVar17);
				bVar5 = ((Object)__this_02 != null);
				if (bVar5) {
					if (__this_02 == null) goto label_059614ba;
					pUVar9 = __this_02.gameObject ;
					__this_02.AddRenderersMatchingName(renderers, pUVar9, "Body");
				}
			}
			iStack_44 = 0;
			pSVar8 = (String)pCVar16.unknown() ;
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			bVar5 = false;
			goto label_0596132b;
		case 1:
			if (pCVar7 != null) {
				pSVar11.AddRendererIfExists(renderers, pCVar7._part_hair);
				pSVar11.AddRendererIfExists(renderers, pCVar7._part_hair_1);
				pCVar16 = pCStack_40;
				__this_00 = pCVar7._meshes;
				if (__this_00 != null) {
					pSVar8 = __this_00.GetHairMesh();
					bVar5 = (pSVar8 == (String)**(ulong*)(g_data_07556758 + 0xb8)) ;
					if (bVar5) {
						pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else {
						__this_01 = pCVar7._textures;
						if (__this_01 == null) goto label_059614ba;
						pSVar8 = __this_01.GetHairTexture();
					}
					iStack_44 = 1;
					pSVar13 = pCVar16.get_RendererIdPrefix();
					str1 = iStack_44.ToString();
					pSVar13 = String.Concat(pSVar13, str1);
					__this_08 = new HumanHairCustomSkinPart((BaseCustomSkinLoader)pCVar16, renderers, pSVar13, 1000000, (System_Nullable_Vector2__o)ZEXT812(0), true);
					__this_08._hairTexture = pSVar8;
					__this_08._setup = pCVar7;
					return (BaseCustomSkinPart)__this_08;
				}
			}
			goto label_059614ba;
		case 2:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_eye);
			iStack_44 = 2;
			goto label_059608ca;
		case 3:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_glass);
			iStack_44 = 3;
			goto label_059608ca;
		case 4:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_face);
			iStack_44 = 4;
	label_059608ca: ;
			pCVar16 = pCStack_40;
			pSVar8 = (String)pCStack_40.unknown();
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			bVar5 = true;
			iVar17 = 500000;
			break;
		case 5:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_hand_l);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_hand_r);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_head);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_chest);
			pCVar16 = pCStack_40;
			iStack_44 = 5;
			pSVar8 = (String)pCStack_40.unknown();
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			ppCVar14 = (BaseCustomSkinPart*)&typeof(HumanCostumeCustomSkinPart);
			goto label_0596130a;
		case 6:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_arm_l);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_arm_r);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_leg);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_chest_2);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_chest_3);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_upper_body);
			pCVar16 = pCStack_40;
			iStack_44 = 6;
			pSVar8 = (String)pCStack_40.unknown();
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			bVar5 = true;
			iVar17 = 2000000;
			break;
		case 7:
			if (((pCVar7 == null) ||(pSVar2 = pCVar7.CustomSet, pSVar2 == null)) ||(pSVar3 = pSVar2.Cape, pSVar3 == null)) goto label_059614ba;
			if (pSVar3._value != 2) {
				pSVar11.AddRendererIfExists(renderers, pCVar7._part_cape);
			}
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_brand_1);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_brand_2);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_brand_3);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_brand_4);
			iStack_44 = 7;
			pSVar8 = (String)pCVar16.unknown() ;
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			bVar5 = true;
			iVar17 = 500000;
			break;
		case 8:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_3dmg);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_belt);
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_gas_l);
			pCVar16 = pCStack_40;
			if (pCVar7.Weapon != 2) {
				pSVar11.AddRendererIfExists(renderers, pCVar7._part_blade_l);
			}
			iStack_44 = 8;
			goto label_059612d1;
		case 9:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddRendererIfExists(renderers, pCVar7._part_gas_r);
			pCVar16 = pCStack_40;
			if (pCVar7.Weapon != 2) {
				pSVar11.AddRendererIfExists(renderers, pCVar7._part_blade_r);
			}
			iStack_44 = 9;
			pSVar8 = (String)pCVar16.unknown() ;
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			ppCVar12 = (HumanCostumeCustomSkinPart*)&typeof(BaseCustomSkinPart);
			goto label_0596127a;
		case 10:
			pUVar9 = pCStack_40._owner;
			if ((pUVar9 == null) ||(__this_03 = pUVar9.transform, __this_03 == null)) goto label_059614ba;
			ppSVar15 = &"3dmg_smoke";
			pCVar10 = (BaseCustomSkinLoader)__this_03.Find("3dmg_smoke");
			bVar5 = ((Object)pCVar10 != null);
			if (bVar5) {
				if (pCVar10 == null) goto label_059614ba;
				pUVar9 = pCVar10.gameObject;
				pCVar10.AddRendererIfExists(renderers, pUVar9);
			}
			iStack_44 = 10;
			pSVar8 = (String)pCVar16.unknown() ;
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			bVar5 = false;
			goto label_05960e40;
		case 0xb:
			if (pCVar7 == null) goto label_059614ba;
			pUVar1 = (Object)pCVar7._part_chest_1;
			bVar5 = (pUVar1 != null);
			if (bVar5) {
				pUVar1 = (Object)pCVar7._part_chest_1;
				if ((pUVar1 == null) ||(pCVar10 = (BaseCustomSkinLoader)pUVar1.name, pCVar10 == null)) goto label_059614ba;
				ppSVar15 = &"char_cap";
				bVar5 = pCVar10.Contains("char_cap");
				if (bVar5) {
					pCVar10.AddRendererIfExists(renderers, pCVar7._part_chest_1);
				}
			}
			iStack_44 = 0xb;
			pSVar8 = (String)pCVar16.unknown() ;
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			bVar5 = true;
	label_05960e40: ;
			iVar17 = 500000;
			break;
		case 0xc:
			__this_04 = new List<MeleeWeaponTrail>();
			pCVar16 = pCStack_40;
			if (pCVar7 != null) {
				if (pCVar7.Weapon == 0) {
					if (__this_04 == null) goto label_059614ba;
					il2cpp_runtime_helper_02fd3a00(__this_04, pCVar7.LeftTrail, MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Add);
					il2cpp_runtime_helper_02fd3a00(__this_04, pCVar7.RightTrail, MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Add);
				}
				iStack_44 = 0xc;
				pSVar8 = pCVar16.get_RendererIdPrefix();
				pSVar13 = iStack_44.ToString();
				pSVar8 = String.Concat(pSVar8, pSVar13);
				__this_05 = new WeaponTrailCustomSkinPart((BaseCustomSkinLoader)pCVar16, null, pSVar8, 500000, (System_Nullable_Vector2__o)ZEXT812(0), true);
				__this_05._weaponTrails = __this_04;
				return (BaseCustomSkinPart)__this_05;
			}
	label_059614ba: ;
			throw new NullReferenceException();
		case 0xd:
			if (pCVar7 == null) goto label_059614ba;
			if (pCVar7.Weapon == 2) {
				pCVar10 = (BaseCustomSkinLoader)pCVar7._part_blade_l;
				bVar5 = ((Object)pCVar10 != null);
				if (bVar5) {
					pCVar10.AddRendererIfExists(renderers, pCVar7._part_blade_l);
				}
			}
			iStack_44 = 0xd;
			goto label_05961004;
		case 0xe:
			if (pCVar7 == null) goto label_059614ba;
			if (pCVar7.Weapon == 2) {
				pCVar10 = (BaseCustomSkinLoader)pCVar7._part_blade_r;
				bVar5 = ((Object)pCVar10 != null);
				if (bVar5) {
					pCVar10.AddRendererIfExists(renderers, pCVar7._part_blade_r);
				}
			}
			iStack_44 = 0xe;
	label_05961004: ;
			pSVar8 = (String)pCVar16.unknown() ;
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			bVar5 = true;
			goto label_0596132b;
		default: ;
			goto switchD_05960705_caseD_f;
		case 0x10:
			pUVar9 = pCStack_40._owner;
			if (pUVar9 == null) goto label_059614ba;
			pCVar6 = pUVar9.GetComponent<Human>();
			bVar5 = ((Object)pCVar6 != null);
			if (bVar5) {
				if (pCVar6 == null) goto label_059614ba;
				bVar5 = pCVar6.enabled;
				if ((bVar5) && (pCVar4 = pCVar6.HookLeft, pCVar4 != null)) {
					pSVar11 = pCVar4.GetRenderers();
					pCVar16 = pCStack_40;
					pSVar8 = pCStack_40.GetRendererId(0x10);
					fStack_34 = pCVar16._hookLTiling;
	label_05961198: ;
					goto label_059613e9;
				}
			}
			pSVar11 = new List<Renderer>();
			pCVar16 = pCStack_40;
			pSVar8 = pCStack_40.GetRendererId(0x10);
			fStack_34 = pCVar16._hookLTiling;
			goto label_059613bb;
		case 0x12:
			pUVar9 = pCStack_40._owner;
			if (pUVar9 == null) goto label_059614ba;
			pCVar6 = pUVar9.GetComponent<Human>();
			bVar5 = ((Object)pCVar6 != null);
			if (bVar5) {
				if (pCVar6 == null) goto label_059614ba;
				bVar5 = pCVar6.enabled;
				if ((bVar5) && (pCVar4 = pCVar6.HookRight, pCVar4 != null)) {
					pSVar11 = pCVar4.GetRenderers();
					pCVar16 = pCStack_40;
					pSVar8 = pCStack_40.GetRendererId(0x12);
					fStack_34 = pCVar16._hookRTiling;
					goto label_05961198;
				}
			}
			pSVar11 = new List<Renderer>();
			pCVar16 = pCStack_40;
			pSVar8 = pCStack_40.GetRendererId(0x12);
			fStack_34 = pCVar16._hookRTiling;
	label_059613bb: ;
	label_059613e9: ;
			__this_06 = new HookCustomSkinPart((BaseCustomSkinLoader)pCVar16, pSVar11, pSVar8, 500000, (System_Nullable_Vector2__o)ZEXT812(0), true);
			__this_06._tiling = fStack_34;
			return (BaseCustomSkinPart)__this_06;
		case 0x13:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddAllRenderersIfExists(renderers, pCVar7._part_hat);
			iStack_44 = 0x13;
			goto label_0596123b;
		case 0x14:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddAllRenderersIfExists(renderers, pCVar7._part_head_decor);
			iStack_44 = 0x14;
			goto label_0596123b;
		case 0x15:
			if (pCVar7 == null) goto label_059614ba;
			pSVar11.AddAllRenderersIfExists(renderers, pCVar7._part_back);
			iStack_44 = 0x15;
	label_0596123b: ;
			pCVar16 = pCStack_40;
			pSVar8 = (String)pCStack_40.unknown();
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			ppCVar12 = &typeof(HumanCostumeCustomSkinPart);
	label_0596127a: ;
			__this_07 = (BaseCustomSkinPart)il2cpp_codegen_object_new((Il2CppClass)*ppCVar12);
	label_05961328: ;
			bVar5 = true;
	label_0596132b: ;
			iVar17 = 1000000;
			break;
		case 0x16:
			if (pCVar7 == null) goto label_059614ba;
			__this_09 = pCVar7;
			bVar5 = pCVar7.HasCloak;
			pCVar16 = pCStack_40;
			if (bVar5) {
				__this_09.AddRendererIfExists(renderers, pCVar7._part_cape);
			}
			iStack_44 = 0x16;
	label_059612d1: ;
			pSVar8 = (String)pCVar16.unknown() ;
			pSVar13 = iStack_44.ToString();
			pSVar8 = String.Concat(pSVar8, pSVar13);
			ppCVar14 = &typeof(BaseCustomSkinPart);
	label_0596130a: ;
			__this_07 = (BaseCustomSkinPart)il2cpp_codegen_object_new((Il2CppClass)*ppCVar14);
			goto label_05961328;
		}
		__this_07 = new BaseCustomSkinPart((BaseCustomSkinLoader)pCVar16, renderers, pSVar8, iVar17, (System_Nullable_Vector2__o)ZEXT812(0), bVar5);
	switchD_05960705_caseD_f: ;
		return __this_07;
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x58615B0", Offset = "0x58605B0", VA = "0x58615B0")]
	public HumanCustomSkinLoader()
	{
		// Lifted from source/cpp/CustomSkins/HumanCustomSkinLoader.c (CustomSkins.HumanCustomSkinLoader$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754591f == false) {
			Il2CppMethodInitialized_0754591f = true;
			uVar1 = (typeof(BaseCustomSkinLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BaseCustomSkinLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}
}
