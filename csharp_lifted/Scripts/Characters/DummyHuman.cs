// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DummyHuman
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DummyHuman.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/DummyHuman.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomSkins;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006A6")]
internal class DummyHuman : DummyCharacter
{
	[Token(Token = "0x20006A9")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinCoroutine_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001E06")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001E07")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001E08")]
		[FieldOffset(Offset = "0x20")]
		public DummyHuman _003C_003E4__this;

		[Token(Token = "0x17000B1F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600407A")]
			[Address(RVA = "0x5AE9D10", Offset = "0x5AE8D10", VA = "0x5AE9D10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B20")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600407C")]
			[Address(RVA = "0x5AE9D60", Offset = "0x5AE8D60", VA = "0x5AE9D60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004077")]
		[Address(RVA = "0x5AE7710", Offset = "0x5AE6710", VA = "0x5AE7710")]
		[DebuggerHidden]
		public _003CLoadSkinCoroutine_003Ed__9(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman.<LoadSkinCoroutine>d__9$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004078")]
		[Address(RVA = "0x5AE7900", Offset = "0x5AE6900", VA = "0x5AE7900", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004079")]
		[Address(RVA = "0x5AE7910", Offset = "0x5AE6910", VA = "0x5AE7910", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman.<LoadSkinCoroutine>d__9$$MoveNext): 41 lines keep C-only constructs
			HumanCustomSkinLoader* ppCVar1;
			il2cpp_array_size_t piVar2;
			int iVar3;
			int index;
			DummyHuman __this_00;
			HumanSetup pCVar4;
			CustomSkinSettings pSVar5;
			HumanCustomSkinSettings pSVar6;
			BoolSetting pSVar7;
			IntSetting pSVar8;
			ListSetting<T> obj;
			FloatSetting pSVar11;
			StringSetting pSVar12;
			DummyHuman.d__9<LoadSkinCoroutine> pCVar13;
			bool bVar14;
			bool bVar15;
			GameObject pUVar16;
			HumanCustomSkinLoader pCVar17;
			Object __this_01;
			String pSVar18;
			List<object> __this_02;
			BaseSetting obj_00;
			String[] value;
			Characters_DummyHuman___c_StaticFields pCVar20;
			Func<string, bool> __this_03;
			Object[] pSVar21;
			object pIVar22;
			object pIVar23;
			IEnumerator routine;
			Coroutine pUVar24;
			String pSVar26;
			float fVar28;
			float fVar29;
			HumanCustomSet pSStack_60;
			ulong uStack_58;
			object pIStack_50;
			float[] afStack_48 = new float[2];
			HumanCustomSkinLoader* ppCStack_40;
			DummyHuman.d__9<LoadSkinCoroutine> pCStack_38;

			uStack_58 = 0;
			pIStack_50 = null;
			pSStack_60 = null;
			afStack_48[0] = 0.0;
			iVar3 = this.__1__state;
			if (iVar3 == 2) {
				this.__1__state = -1;
				return false;
			}
			__this_00 = this.__4__this;
			if (iVar3 != 1) {
				if (iVar3 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (__this_00 != null) {
					__this_00._isLoadingSkins = true;
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
				goto label_05be975e;
			}
			this.__1__state = -1;
			new string[0x17];
			if (__this_00 == null) goto label_05be975e;
			pCVar17 = __this_00._customSkinLoader;
			ppCVar1 = &__this_00._customSkinLoader;
			bVar14 = ((Object)pCVar17 == null);
			if (bVar14) {
				pUVar16 = __this_00.gameObject;
				if (pUVar16 == null) goto label_05be975e;
				pCVar17 = pUVar16.AddComponent<HumanCustomSkinLoader>();
				*ppCVar1 = pCVar17;
			}
			pCVar4 = __this_00.Setup;
			bVar14 = ((Object)pCVar4 == null);
			if (bVar14) {
				__this_01 = (Object)__this_00.gameObject;
				if (__this_01 != null) {
					pSVar18 = __this_01.name;
					pSVar18 = String.Concat("HumanSetup not ready for skin loading on ", pSVar18);
					Debug.LogWarning((object)pSVar18);
					__this_00._isLoadingSkins = false;
					return false;
				}
				goto label_05be975e;
			}
			pSVar5 = SettingsManager.CustomSkinSettings;
			ppCStack_40 = ppCVar1;
			pCStack_38 = this;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			pSVar6 = pSVar5.Human;
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			pSVar7 = pSVar6.GlobalSkinOverridesEnabled;
			if (pSVar7 == null) {
				throw new NullReferenceException();
			}
			uStack_58 = CONCAT71(uStack_58._1_7_, pSVar7._value);
			pSVar7 = pSVar6.SetSpecificSkinsEnabled;
			if (pSVar7 == null) {
				throw new NullReferenceException();
			}
			bVar14 = pSVar7._value;
			pCVar4 = __this_00.Setup;
			if (pCVar4 == null) {
				pSStack_60 = null;
			}
			else {
				pSStack_60 = pCVar4.CustomSet;
			}
			pIStack_50 = null;
			if ((uStack_58 & 1) != 0) {
				pSVar5 = SettingsManager.CustomSkinSettings;
				if (pSVar5 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar5.Human;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				pSVar8 = pSVar6.LastGlobalPresetIndex;
				if (pSVar8 == null) {
					throw new NullReferenceException();
				}
				obj = pSVar6.Sets;
				if (obj == null) {
					throw new NullReferenceException();
				}
				index = pSVar8._value;
				__this_02 = (List<object>)obj.GetItems();
				if (-1 < index) {
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					if (index < __this_02._size) {
						obj_00 = __this_02.get_Item(index);
						pIStack_50 = il2cpp_codegen_is_inst_class((object)obj_00, typeof(HumanCustomSkinSet));
						il2cpp_codegen_is_inst_class((object)obj_00, typeof(HumanCustomSkinSet));
					}
				}
			}
			value = (String[])new string[0x17];
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be7dc0;
		label_05be7e08: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be7e1e: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be7e3a;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[10].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[10].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be7e08;
		label_05be7dc0: ;
				pSVar12 = pSStack_60.SkinHorse;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be7e08;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be7e1e;
				}
			}
		label_05be7e3a: ;
			if (value == null) {
				throw new NullReferenceException();
			}
			if ((int)value.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			value[0] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be7e90;
		label_05be7ed8: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be7eee: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be7f0a;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[4].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[4].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be7ed8;
		label_05be7e90: ;
				pSVar12 = pSStack_60.SkinHair;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be7ed8;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be7eee;
				}
			}
		label_05be7f0a: ;
			piVar2 = &value.Length;
			if ((*piVar2 & 0xfffffffe) == 0) {
				throw new IndexOutOfRangeException();
			}
			value[1] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be7f5e;
		label_05be7fa6: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be7fbc: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be7fd8;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[5].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[5].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be7fa6;
		label_05be7f5e: ;
				pSVar12 = pSStack_60.SkinEye;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be7fa6;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be7fbc;
				}
			}
		label_05be7fd8: ;
			if ((uint)*piVar2 < 3) {
				throw new IndexOutOfRangeException();
			}
			value[2] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8025;
		label_05be806d: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8083: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be809f;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[5].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[5].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be806d;
		label_05be8025: ;
				pSVar12 = pSStack_60.SkinGlass;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be806d;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8083;
				}
			}
		label_05be809f: ;
			if ((*piVar2 & 0xfffffffc) == 0) {
				throw new IndexOutOfRangeException();
			}
			value[3] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be80ef;
		label_05be8137: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be814d: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8169;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[6].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[6].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8137;
		label_05be80ef: ;
				pSVar12 = pSStack_60.SkinFace;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8137;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be814d;
				}
			}
		label_05be8169: ;
			if ((uint)*piVar2 < 5) {
				throw new IndexOutOfRangeException();
			}
			value[4] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be81b6;
		label_05be81fe: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8214: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8230;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[6].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[6].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be81fe;
		label_05be81b6: ;
				pSVar12 = pSStack_60.SkinSkin;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be81fe;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8214;
				}
			}
		label_05be8230: ;
			if ((uint)*piVar2 < 6) {
				throw new IndexOutOfRangeException();
			}
			value[5] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be827d;
		label_05be82c5: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be82db: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be82f7;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[7].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[7].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be82c5;
		label_05be827d: ;
				pSVar12 = pSStack_60.SkinCostume;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be82c5;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be82db;
				}
			}
		label_05be82f7: ;
			if ((uint)*piVar2 < 7) {
				throw new IndexOutOfRangeException();
			}
			value[6] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8344;
		label_05be838c: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be83a2: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be83be;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[7].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[7].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be838c;
		label_05be8344: ;
				pSVar12 = pSStack_60.SkinLogo;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be838c;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be83a2;
				}
			}
		label_05be83be: ;
			if ((*piVar2 & 0xfffffff8) == 0) {
				throw new IndexOutOfRangeException();
			}
			value[7] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8411;
		label_05be8459: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be846f: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be848b;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[8].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[8].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8459;
		label_05be8411: ;
				pSVar12 = pSStack_60.SkinGearL;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8459;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be846f;
				}
			}
		label_05be848b: ;
			if ((uint)*piVar2 < 9) {
				throw new IndexOutOfRangeException();
			}
			value[8] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be84db;
		label_05be8523: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8539: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8555;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[8].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[8].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8523;
		label_05be84db: ;
				pSVar12 = pSStack_60.SkinGearR;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8523;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8539;
				}
			}
		label_05be8555: ;
			if ((uint)*piVar2 < 10) {
				throw new IndexOutOfRangeException();
			}
			value[9] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be85a5;
		label_05be85ed: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8603: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be861f;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[9].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[9].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be85ed;
		label_05be85a5: ;
				pSVar12 = pSStack_60.SkinGas;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be85ed;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8603;
				}
			}
		label_05be861f: ;
			if ((uint)*piVar2 < 0xb) {
				throw new IndexOutOfRangeException();
			}
			value[10] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be866f;
		label_05be86b7: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be86cd: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be86e9;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[9].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[9].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be86b7;
		label_05be866f: ;
				pSVar12 = pSStack_60.SkinHoodie;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be86b7;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be86cd;
				}
			}
		label_05be86e9: ;
			if ((uint)*piVar2 < 0xc) {
				throw new IndexOutOfRangeException();
			}
			value[0xb] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8739;
		label_05be8781: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8797: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be87b3;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[10].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[10].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8781;
		label_05be8739: ;
				pSVar12 = pSStack_60.SkinWeaponTrail;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8781;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8797;
				}
			}
		label_05be87b3: ;
			if ((uint)*piVar2 < 0xd) {
				throw new IndexOutOfRangeException();
			}
			value[0xc] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8809;
		label_05be8851: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8867: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8883;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[0xb].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[0xb].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8851;
		label_05be8809: ;
				pSVar12 = pSStack_60.SkinThunderspearL;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8851;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8867;
				}
			}
		label_05be8883: ;
			if ((uint)*piVar2 < 0xe) {
				throw new IndexOutOfRangeException();
			}
			value[0xd] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be88d9;
		label_05be8921: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8937: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8953;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[0xb].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[0xb].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8921;
		label_05be88d9: ;
				pSVar12 = pSStack_60.SkinThunderspearR;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8921;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8937;
				}
			}
		label_05be8953: ;
			if ((uint)*piVar2 < 0xf) {
				throw new IndexOutOfRangeException();
			}
			value[0xe] = pSVar26;
			if (pIStack_50 == null) {
				fVar28 = 1.0;
				if (pSStack_60 != null) goto label_05be89b0;
		label_05be89d2: ;
				afStack_48[0] = 1.0;
			}
			else {
				if (pIStack_50[0xc].monitor == null) {
					throw new NullReferenceException();
				}
				fVar28 = *(float)((long)pIStack_50[0xc].monitor + 0x1c);
				if (pSStack_60 == null) goto label_05be89d2;
		label_05be89b0: ;
				pSVar11 = pSStack_60.SkinHookLTiling;
				if (pSVar11 == null) {
					throw new NullReferenceException();
				}
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be89d2;
				afStack_48[0] = pSVar11._value;
			}
			fVar29 = afStack_48[0];
			if (pIStack_50 != null) {
				fVar29 = fVar28;
			}
			if ((char)uStack_58 != false) {
				afStack_48[0] = fVar29;
			}
			pSVar18 = afStack_48.ToString();
			if ((*piVar2 & 0xfffffff0) == 0) {
				throw new IndexOutOfRangeException();
			}
			value[0xf] = pSVar18;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8a5a;
		label_05be8aa2: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8ab8: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8ad4;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[0xc].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[0xc].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8aa2;
		label_05be8a5a: ;
				pSVar12 = pSStack_60.SkinHookL;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8aa2;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8ab8;
				}
			}
		label_05be8ad4: ;
			if ((uint)*piVar2 < 0x11) {
				throw new IndexOutOfRangeException();
			}
			value[0x10] = pSVar26;
			if (pIStack_50 == null) {
				fVar28 = 1.0;
				if (pSStack_60 != null) goto label_05be8b31;
		label_05be8b53: ;
				afStack_48[0] = 1.0;
			}
			else {
				if (pIStack_50[0xd].monitor == null) {
					throw new NullReferenceException();
				}
				fVar28 = *(float)((long)pIStack_50[0xd].monitor + 0x1c);
				if (pSStack_60 == null) goto label_05be8b53;
		label_05be8b31: ;
				pSVar11 = pSStack_60.SkinHookRTiling;
				if (pSVar11 == null) {
					throw new NullReferenceException();
				}
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8b53;
				afStack_48[0] = pSVar11._value;
			}
			fVar29 = afStack_48[0];
			if (pIStack_50 != null) {
				fVar29 = fVar28;
			}
			if ((char)uStack_58 != false) {
				afStack_48[0] = fVar29;
			}
			pSVar18 = afStack_48.ToString();
			if ((uint)*piVar2 < 0x12) {
				throw new IndexOutOfRangeException();
			}
			value[0x11] = pSVar18;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8bd8;
		label_05be8c20: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8c36: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8c52;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[0xd].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[0xd].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8c20;
		label_05be8bd8: ;
				pSVar12 = pSStack_60.SkinHookR;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8c20;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8c36;
				}
			}
		label_05be8c52: ;
			if ((uint)*piVar2 < 0x13) {
				throw new IndexOutOfRangeException();
			}
			value[0x12] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8ca8;
		label_05be8cf0: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8d06: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8d22;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[0xe].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[0xe].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8cf0;
		label_05be8ca8: ;
				pSVar12 = pSStack_60.SkinHat;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8cf0;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8d06;
				}
			}
		label_05be8d22: ;
			if ((uint)*piVar2 < 0x14) {
				throw new IndexOutOfRangeException();
			}
			value[0x13] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8d78;
		label_05be8dc0: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8dd6: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8df2;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[0xe].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[0xe].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8dc0;
		label_05be8d78: ;
				pSVar12 = pSStack_60.SkinHead;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8dc0;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8dd6;
				}
			}
		label_05be8df2: ;
			if ((uint)*piVar2 < 0x15) {
				throw new IndexOutOfRangeException();
			}
			value[0x14] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8e48;
		label_05be8e90: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
		label_05be8ea6: ;
					pSVar26 = pSVar18;
					if (bVar15 == false) goto label_05be8ec2;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[0xf].klass == null) {
					throw new NullReferenceException();
				}
				pSVar26 = ((pIStack_50[0xf].klass)._1).byval_arg.data;
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8e90;
		label_05be8e48: ;
				pSVar12 = pSStack_60.SkinBack;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8e90;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar15 = String.IsNullOrEmpty(pSVar26))) {
					bVar15 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8ea6;
				}
			}
		label_05be8ec2: ;
			if ((uint)*piVar2 < 0x16) {
				throw new IndexOutOfRangeException();
			}
			value[0x15] = pSVar26;
			if (pIStack_50 == null) {
				pSVar26 = null;
				pSVar18 = pSVar26;
				if (pSStack_60 != null) goto label_05be8f18;
		label_05be8f60: ;
				if (((char)uStack_58 != false) && (pIStack_50 != null)) {
					bVar14 = String.IsNullOrEmpty(pSVar18);
		label_05be8f76: ;
					pSVar26 = pSVar18;
					if (bVar14 == false) goto label_05be8f92;
				}
				pSVar26 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pIStack_50[0xf].monitor == null) {
					throw new NullReferenceException();
				}
				pSVar26 = *(String*)((long)pIStack_50[0xf].monitor + 0x20);
				pSVar18 = pSVar26;
				if (pSStack_60 == null) goto label_05be8f60;
		label_05be8f18: ;
				pSVar12 = pSStack_60.SkinCloak;
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = pSVar26;
				if ((bVar14 == false) || (pSStack_60 == null)) goto label_05be8f60;
				pSVar18 = pSVar12._value;
				if ((((char)uStack_58 == false) || (pIStack_50 == null)) ||(bVar14 = String.IsNullOrEmpty(pSVar26))) {
					bVar14 = String.IsNullOrEmpty(pSVar18);
					goto label_05be8f76;
				}
			}
		label_05be8f92: ;
			if ((uint)*piVar2 < 0x17) {
				throw new IndexOutOfRangeException();
			}
			value[0x16] = pSVar26;
			pSVar18 = String.Join(",", value);
			__this_00._isLoadingSkins = false;
			pCVar20 = typeof(DummyHuman.c).static_fields;
			__this_03 = pCVar20.__9__9_0;
			if (__this_03 == null) {
				if ((typeof(DummyHuman.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar20 = typeof(DummyHuman.c).static_fields;
				}
				pIVar22 = (object)pCVar20.__9;
				__this_03 = new Func<string, bool>(pIVar22, (intptr_t)MethodInfo_Characters_DummyHuman_c_LoadSkinCoroutine_b__9_0);
				pCVar20 = typeof(DummyHuman.c).static_fields;
				pCVar20.__9__9_0 = __this_03;
			}
			bVar14 = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)value, (System_Func_TSource__bool__o)__this_03);
			if (bVar14) {
				pCVar17 = *ppCStack_40;
				pSVar21 = (Object[])new object[2];
				afStack_48[1] = -NAN;
				pIVar22 = (object)(afStack_48 + 1);
				if (pSVar21 != null) {
					if ((pIVar22 != null) &&(pIVar23 = il2cpp_vm_Object_IsInst(pIVar22, (((pSVar21.obj).klass)._1).element_class), pIVar23 == null)) {
		label_05be92c2: ;
						pIVar22 = new ArrayTypeMismatchException();
						throw pIVar22;
					}
					if ((int)pSVar21.Length != 0) {
						pSVar21[0] = pIVar22;
						if ((pSVar18 != null) &&(pIVar22 = il2cpp_vm_Object_IsInst((object)pSVar18, (((pSVar21.obj).klass)._1).element_class), pIVar22 == null)) goto label_05be92c2;
						if ((pSVar21.Length & 0xfffffffe) != 0) {
							pSVar21[1] = (object)pSVar18;
							if (pCVar17 != null) {
								routine = pCVar17.LoadSkinsFromRPC(pSVar21);
								pUVar24 = __this_00.StartCoroutine(routine);
								pCVar13 = pCStack_38;
								pCStack_38.__2__current = (object)pUVar24;
								pCVar13.__1__state = 2;
								return true;
							}
							goto label_05be975e;
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
			else {
				pCVar4 = __this_00.Setup;
				if (pCVar4 != null) {
					pCVar4.Load(pCVar4.CustomSet, pCVar4.Weapon, false);
					ppCVar1 = ppCStack_40;
					pCVar17 = *ppCStack_40;
					bVar14 = ((Object)pCVar17 != null);
					if (bVar14) {
						pCVar17 = *ppCVar1;
						Object.Destroy((Object)pCVar17);
					}
					pUVar16 = __this_00.gameObject;
					if (pUVar16 != null) {
						pCVar17 = pUVar16.AddComponent<HumanCustomSkinLoader>();
						*ppCVar1 = pCVar17;
						return false;
					}
				}
			}
		label_05be975e: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600407B")]
		[Address(RVA = "0x5AE9D20", Offset = "0x5AE8D20", VA = "0x5AE9D20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001DFC")]
	[FieldOffset(Offset = "0x30")]
	public HumanComponentCache Cache;

	[Token(Token = "0x4001DFD")]
	[FieldOffset(Offset = "0x38")]
	public HumanSetup Setup;

	[Token(Token = "0x4001DFE")]
	[FieldOffset(Offset = "0x40")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4001DFF")]
	[FieldOffset(Offset = "0x48")]
	private bool _isLoadingSkins;

	[Token(Token = "0x600406B")]
	[Address(RVA = "0x5AE67D0", Offset = "0x5AE57D0", VA = "0x5AE67D0", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman$$Awake): 7 lines keep C-only constructs
		HumanComponentCache* targetAddress;
		HumanSetup* targetAddress_00;
		Rigidbody pUVar1;
		bool bVar2;
		GameObject pUVar3;
		AnimationHandler __this_00;
		HumanComponentCache pCVar4;
		HumanSetup pCVar5;

		pUVar3 = this.gameObject;
		__this_00 = new AnimationHandler(pUVar3);
		this.Animation = __this_00;
		pUVar3 = this.gameObject;
		pCVar4 = new HumanComponentCache(pUVar3);
		targetAddress = &this.Cache;
		this.Cache = pCVar4;
		pCVar4 = this.Cache;
		if ((pCVar4 != null) &&(pUVar1 = pCVar4.Rigidbody, pUVar1 != null)) {
			pUVar1.freezeRotation = true;
			if ((*targetAddress != null) &&(pUVar1 = ((*targetAddress).fields).Rigidbody, pUVar1 != null)) {
				pUVar1.useGravity = false;
				if (*targetAddress != null) {
					pUVar1 = ((*targetAddress).fields).Rigidbody;
					if (pUVar1 != null) {
						pUVar1.linearVelocity = (Vector3)(Vector3.zeroVector);
						pUVar3 = this.gameObject;
						if (pUVar3 != null) {
							pCVar5 = pUVar3.GetComponent<HumanSetup>();
							targetAddress_00 = &this.Setup;
							this.Setup = pCVar5;
							pCVar5 = this.Setup;
							bVar2 = ((Object)pCVar5 == null);
							if (!bVar2) {
								return;
							}
							pUVar3 = this.gameObject;
							if (pUVar3 != null) {
								pCVar5 = pUVar3.AddComponent<HumanSetup>();
								*targetAddress_00 = pCVar5;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600406C")]
	[Address(RVA = "0x5AE71E0", Offset = "0x5AE61E0", VA = "0x5AE71E0")]
	protected void Start()
	{
		// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman$$Start): 2 lines keep C-only constructs
		bool bVar1;
		GameObject __this_00;
		HumanCustomSkinLoader pCVar2;
		HumanCustomSkinLoader* targetAddress;

		pCVar2 = this._customSkinLoader;
		bVar1 = ((Object)pCVar2 == null);
		if (bVar1) {
			__this_00 = this.gameObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			targetAddress = &this._customSkinLoader;
			pCVar2 = __this_00.AddComponent<HumanCustomSkinLoader>();
			*targetAddress = pCVar2;
			return;
		}
		return;
	}

	[Token(Token = "0x600406D")]
	[Address(RVA = "0x5AE7290", Offset = "0x5AE6290", VA = "0x5AE7290", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman$$GetIdleAnimation): clean
		int iVar1;
		int iVar2;
		uint uVar3;
		HumanSetup pCVar4;
		HumanCustomSet pSVar5;
		IntSetting pSVar6;

		pCVar4 = this.Setup;
		if (((pCVar4 == null) ||(pSVar5 = pCVar4.CustomSet, pSVar5 == null)) ||(pSVar6 = pSVar5.Sex, pSVar6 == null)) {
			throw new NullReferenceException();
		}
		iVar1 = pSVar6._value;
		iVar2 = pCVar4.Weapon;
		if (iVar2 != 3) {
			if (iVar2 == 2) {
				uVar3 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
				if (iVar1 == 0) {
					if (uVar3 == 0) {
					}
					return HumanAnimations.IdleTSM;
				}
				if (uVar3 == 0) {
				}
				return HumanAnimations.IdleTSF;
			}
			if (iVar2 != 1) {
				uVar3 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
				if (iVar1 == 0) {
					if (uVar3 == 0) {
					}
					return HumanAnimations.IdleM;
				}
				if (uVar3 == 0) {
				}
				return HumanAnimations.IdleF;
			}
		}
		uVar3 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		if (iVar1 == 0) {
			if (uVar3 == 0) {
			}
			return HumanAnimations.IdleAHSSM;
		}
		if (uVar3 == 0) {
		}
		return HumanAnimations.IdleAHSSF;
	}

	[Token(Token = "0x600406E")]
	[Address(RVA = "0x5AE73F0", Offset = "0x5AE63F0", VA = "0x5AE73F0", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman$$GetEmoteAnimation): 3 lines keep C-only constructs
		String pSVar1;
		bool bVar2;
		long lVar3;
		String* ppSVar4;

		bVar2 = (emote == "Salute");
		if (bVar2) {
			lVar3 = 0x228;
		}
		else {
			bVar2 = (emote == "Dance");
			if (bVar2) {
				lVar3 = 0x1d8;
			}
			else {
				bVar2 = (emote == "Flip");
				if (bVar2) {
					ppSVar4 = &HumanAnimations.Dodge;
					goto label_05be74fc;
				}
				bVar2 = (emote == "Wave");
				if (bVar2) {
					lVar3 = 0x240;
				}
				else {
					bVar2 = (emote == "Nod");
					if (bVar2) {
						lVar3 = 0x238;
					}
					else {
						bVar2 = (emote == "Shake");
						if (bVar2) {
							lVar3 = 0x230;
						}
						else {
							bVar2 = (emote == "Eat");
							if (!bVar2) {
								return pSVar1;
							}
							lVar3 = 0x1f0;
						}
					}
				}
			}
		}
		ppSVar4 = (String*)((long)&HumanAnimations.HorseMount + lVar3);
	label_05be74fc: ;
		return *ppSVar4;
	}

	[Token(Token = "0x600406F")]
	[Address(RVA = "0x5AE7620", Offset = "0x5AE6620", VA = "0x5AE7620")]
	public void LoadSkin()
	{
		// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman$$LoadSkin): clean
		DummyHuman.d__9<LoadSkinCoroutine> __this_00;

		if (this._isLoadingSkins != false) {
			return;
		}
		__this_00 = new DummyHuman.d__9<LoadSkinCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6004070")]
	[Address(RVA = "0x5AE76A0", Offset = "0x5AE66A0", VA = "0x5AE76A0")]
	[IteratorStateMachine(typeof(_003CLoadSkinCoroutine_003Ed__9))]
	private IEnumerator LoadSkinCoroutine()
	{
		// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman$$LoadSkinCoroutine): clean
		DummyHuman.d__9<LoadSkinCoroutine> __this_00;

		__this_00 = new DummyHuman.d__9<LoadSkinCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004071")]
	[Address(RVA = "0x5AE7730", Offset = "0x5AE6730", VA = "0x5AE7730")]
	public DummyHuman()
	{
		// Lifted from source/cpp/Characters/DummyHuman.c (Characters.DummyHuman$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/DummyHuman.c.

	// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetSkinValue|9_1: clean
	private static String LoadSkinCoroutine_g__GetSkinValue_9_1(String globalValue, String presetValue)
	{
		bool bVar1;

		bVar1 = param_3.usePresetSkins;
		if ((bVar1 == false) || (param_3.presetSet == null)) {
			if ((param_3.useGlobalOverrides == false) ||(param_3.globalSet == null)) {
				if ((bVar1 == false) || (param_3.presetSet == null)) goto label_05be77ae;
				goto label_05be779d;
			}
			bVar1 = String.IsNullOrEmpty(globalValue);
		}
		else {
			if ((param_3.useGlobalOverrides != false) &&((param_3.globalSet != null &&(bVar1 = String.IsNullOrEmpty(globalValue), !bVar1)))) {
				return globalValue;
			}
	label_05be779d: ;
			bVar1 = String.IsNullOrEmpty(presetValue);
			globalValue = presetValue;
		}
		if (!bVar1) {
			return globalValue;
		}
	label_05be77ae: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetFloatValue|9_2: clean
	private static float LoadSkinCoroutine_g__GetFloatValue_9_2(float globalValue, float presetValue)
	{
		bool bVar1;

		bVar1 = param_3.usePresetSkins;
		if ((bVar1 == false) || (param_3.presetSet == null)) {
			if (((param_3.useGlobalOverrides == false) ||(param_3.globalSet == null)) &&((bVar1 == false ||(globalValue = presetValue, param_3.presetSet == null)))) {
				return 1.0;
			}
		}
		else if ((param_3.useGlobalOverrides == false) ||(param_3.globalSet == null)) {
			return presetValue;
		}
		return globalValue;
	}

	// Characters.DummyHuman.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new DummyHuman.c();
		DummyHuman.c.__9 = (DummyHuman.c)__this;
		return;
	}

	// Characters.DummyHuman.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Characters.DummyHuman.<>c$$<LoadSkinCoroutine>b__9_0: clean
	private bool c__LoadSkinCoroutine_b__9_0(String url)
	{
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(url);
		if (bVar1) {
			return false;
		}
		bVar1 = (url != "1");
		return bVar1;
	}
}
