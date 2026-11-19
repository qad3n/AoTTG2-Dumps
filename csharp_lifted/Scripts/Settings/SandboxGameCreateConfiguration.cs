// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SandboxGameCreateConfiguration
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/SandboxGameCreateConfiguration.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;

namespace Settings;

[Token(Token = "0x20000BD")]
internal class SandboxGameCreateConfiguration
{
	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x10")]
	private string _cachedLogicSource;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<string, BaseSetting> _cachedModeSettings;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x20")]
	private string _cachedAddonSelectionKey;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, Dictionary<string, BaseSetting>> _cachedAddonSettings;

	[Token(Token = "0x170000AD")]
	public string LastError
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x5A3CD30", Offset = "0x5A3BD30", VA = "0x5A3CD30")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$get_LastError): clean
			return this._LastError_k__BackingField;
		}
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x5A3CD40", Offset = "0x5A3BD40", VA = "0x5A3CD40")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$set_LastError): clean
			this._LastError_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170000AE")]
	public string MapDescription
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x5A3CD50", Offset = "0x5A3BD50", VA = "0x5A3CD50")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$get_MapDescription): clean
			return this._MapDescription_k__BackingField;
		}
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x5A3CD60", Offset = "0x5A3BD60", VA = "0x5A3CD60")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$set_MapDescription): clean
			this._MapDescription_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170000AF")]
	public string ModeDescription
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x5A3CD70", Offset = "0x5A3BD70", VA = "0x5A3CD70")]
		get
		{
			// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$get_ModeDescription): clean
			Dictionary<string, BaseSetting> settings;
			String pSVar1;

			settings = this._cachedModeSettings;
			if (settings == null) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				return pSVar1;
			}
			return pSVar1;
		}
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x5A3CDF0", Offset = "0x5A3BDF0", VA = "0x5A3CDF0")]
	public void Reset()
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$Reset): clean
		this._cachedLogicSource = null;
		this._cachedModeSettings = null;
		this._cachedAddonSelectionKey = null;
		this._cachedAddonSettings =null;
		this._LastError_k__BackingField = null;
		this._MapDescription_k__BackingField = (String)**(ulong*)(g_data_07556758 + 0xb8) ;
		return;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x5A3CE80", Offset = "0x5A3BE80", VA = "0x5A3CE80")]
	public string[] GetMapCategories()
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$GetMapCategories): 1 lines keep C-only constructs
		Func<string[]> __this_00;
		String[] pSVar1;

		__this_00 = new Func<string[]>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_GetMapCategories);
		return pSVar1;
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x5A3D1C0", Offset = "0x5A3C1C0", VA = "0x5A3D1C0")]
	public string[] GetMapNames(string category)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$GetMapNames): 1 lines keep C-only constructs
		SandboxGameCreateConfiguration.c__DisplayClass16_0 __this_00;
		Func<string[]> __this_01;
		String[] pSVar1;

		__this_00 = new SandboxGameCreateConfiguration.c__DisplayClass16_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.category = category;
		__this_01 = new Func<string[]>((object)__this_00, (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass16_0_GetMapNames_b__0);
		return pSVar1;
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x5A3D290", Offset = "0x5A3C290", VA = "0x5A3D290")]
	public string FindMapCategory(string mapName, string preferredCategory)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$FindMapCategory): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		String category;
		bool bVar3;
		String[] pSVar4;
		Func<string[]> __this_00;
		ulong uVar5;
		String[] source;
		ulong uVar7;

		pSVar4 = this.GetMapNames(preferredCategory);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar4, (object)mapName, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		if (!bVar3) {
			__this_00 = new Func<string[]>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_GetMapCategories);
			pSVar4 = this.SafeOptions(__this_00);
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar4.Length) {
				uVar5 = pSVar4.Length & 0xffffffff;
				uVar7 = 0;
				do {
					if (uVar5 <= uVar7) {
						throw new IndexOutOfRangeException();
					}
					category = pSVar4[uVar7];
					source = this.GetMapNames(category);
					if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_07542886 == false) goto label_05b3d44e;
	label_05b3d3f4: ;
						uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (Il2CppMethodInitialized_07542886 != false) goto label_05b3d3f4;
	label_05b3d44e: ;
						Il2CppMethodInitialized_07542886 = true;
						uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					bVar3 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (object)mapName, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
					if (bVar3) {
						return category;
					}
					uVar7 = uVar7 + 1;
					uVar2 = (uint)pSVar4.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar7 < (long)(int)uVar2);
			}
			preferredCategory = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return preferredCategory;
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x5A3D4F0", Offset = "0x5A3C4F0", VA = "0x5A3D4F0")]
	public string[] GetGameModes(InGameSet settings, out int recommendedModeCount)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$GetGameModes): 4 lines keep C-only constructs
		uint uVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		StringSetting pSVar4;
		String category;
		String mapName;
		object @object;
		bool bVar5;
		MapScript pMVar6;
		String[] pSVar7;
		Settings_SandboxGameCreateConfiguration___c_StaticFields pSVar8;
		Func<string, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o pSVar9;

		*recommendedModeCount = 0;
		if (settings == null) {
			pSVar7 = (String[])new string[0];
			return pSVar7;
		}
		pMVar6 = this.LoadMapScript(settings);
		if (pMVar6 == null) {
			throw new NullReferenceException();
		}
		bVar5 = String.IsNullOrWhiteSpace(pMVar6.Logic);
		pSVar2 = settings.General;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar3 = pSVar2.MapCategory;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = pSVar2.MapName;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		category = pSVar3._value;
		mapName = pSVar4._value;
		pSVar7 = BuiltinLevels.GetSandboxGameModes(category, mapName, !bVar5, recommendedModeCount);
		if (pSVar7 == null) {
			pSVar7 = (String[])new string[0];
			uVar1 = (typeof(SandboxGameCreateConfiguration.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(SandboxGameCreateConfiguration.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar8 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			__this_00 = pSVar8.__9__18_0;
		}
		else {
			pSVar8 = (typeof(SandboxGameCreateConfiguration.c)).static_fields;
			__this_00 = pSVar8.__9__18_0;
		}
		if (__this_00 == null) {
			if (((typeof(SandboxGameCreateConfiguration.c))._2).cctor_finished_or_no_cctor == 0) {
				pSVar8 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			}
			@object = (object)pSVar8.__9;
			__this_00 = new Func<string, bool>(@object, (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_GetGameModes_b__18_0);
			pSVar8 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			pSVar8.__9__18_0 = __this_00;
		}
		pSVar9 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar7, (System_Func_TSource__bool__o)__this_00);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar9 = Enumerable.Distinct<string>(pSVar9, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		pSVar7 = (String[])Enumerable.ToArray<string>(pSVar9);
		return pSVar7;
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x5A3DB50", Offset = "0x5A3CB50", VA = "0x5A3DB50")]
	public void ApplyMapChange(InGameSet settings)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$ApplyMapChange): 4 lines keep C-only constructs
		uint uVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		String pSVar4;
		bool bVar5;
		uint in_EAX;
		String[] source;
		ulong uStack_28;

		uStack_28._0_4_ = in_EAX;
		uStack_28 = (ulong)(uint)uStack_28;
		source = this.GetGameModes(settings, (int)((long)&uStack_28 + 4));
		if (source == null) goto label_05b3dd7b;
		if (source.Length == 0) {
			if (settings == null) goto label_05b3dd7b;
		}
		else {
			if (((settings == null) ||(pSVar2 = settings.General, pSVar2 == null)) ||(pSVar3 = pSVar2.GameMode, pSVar3 == null)) goto label_05b3dd7b;
			pSVar4 = pSVar3._value;
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07542886 != false) goto label_05b3dc25;
	label_05b3dd49: ;
				Il2CppMethodInitialized_07542886 = true;
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07542886 == false) goto label_05b3dd49;
	label_05b3dc25: ;
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar5 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (object)pSVar4, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
			if (!bVar5) {
				pSVar2 = settings.General;
				if (pSVar2 == null) goto label_05b3dd7b;
				if ((int)source.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				pSVar3 = pSVar2.GameMode;
				if (pSVar3 == null) goto label_05b3dd7b;
				pSVar3.Value = (object)source[0];
			}
		}
		pSVar2 = settings.General;
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.GameMode, pSVar3 == null)) {
	label_05b3dd7b: ;
			throw new NullReferenceException();
		}
		pSVar4 = pSVar3._value;
		bVar5 = (pSVar4 == BuiltinLevels.UseMapLogic);
		if (bVar5) {
			pSVar2 = settings.General;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.PrevGameMode, pSVar3 == null)) goto label_05b3dd7b;
			pSVar3.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return;
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x5A3DD90", Offset = "0x5A3CD90", VA = "0x5A3DD90")]
	public string[] GetAddonNames()
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$GetAddonNames): 1 lines keep C-only constructs
		Func<string[]> __this_00;
		String[] pSVar1;

		__this_00 = new Func<string[]>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_GetAddonNames);
		return pSVar1;
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x5A3DE00", Offset = "0x5A3CE00", VA = "0x5A3DE00")]
	public void Refresh(InGameSet settings)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$Refresh): clean
		MapScript script;

		this._LastError_k__BackingField = null;
		if (settings == null) {
			return;
		}
		this.NormalizeMap(settings);
		script = this.LoadMapScript(settings);
		this.NormalizeMode(settings, script);
		this.SyncModeSettings(settings, script);
		this.SyncAddonSettings(settings);
		return;
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x5A3E470", Offset = "0x5A3D470", VA = "0x5A3E470")]
	public Dictionary<string, BaseSetting> SyncModeSettings(InGameSet settings, MapScript script)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$SyncModeSettings): 3 lines keep C-only constructs
		uint uVar1;
		InGameModeSettings pSVar2;
		object key;
		bool bVar3;
		int iVar4;
		Dictionary<string, BaseSetting> pSVar5;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;
		Object[] pSVar6;
		ulong uVar7;
		Type left;
		BaseSetting pSVar8;
		Type right;
		BaseSetting source_00;
		ulong uVar9;
		BaseSetting local_48;
		Dictionary<string, BaseSetting> local_40;
		InGameSet local_38;

		local_48 = null;
		if (settings == null) {
			pSVar5 = new Dictionary<string, BaseSetting>() ;
			return pSVar5;
		}
		pSVar5 = this.GetModeDefaults(settings, script);
		pSVar2 = settings.Mode;
		if (pSVar2 != null) {
			local_40 = pSVar2.Current;
			if (local_40 == null) {
				local_40 = new Dictionary<string, BaseSetting>();
			}
			if (pSVar5 != null) {
				source = pSVar5.Keys;
				pSVar6 = Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
				if (pSVar6 != null) {
					iVar4 = (int)pSVar6.Length;
					local_38 = settings;
					if (local_40 == null) {
						if (0 < iVar4) goto label_05b3e72c;
					}
					else if (0 < iVar4) {
						uVar7 = pSVar6.Length & 0xffffffff;
						uVar9 = 0;
						do {
							if (uVar7 <= uVar9) {
								throw new IndexOutOfRangeException();
							}
							key = pSVar6[uVar9];
							bVar3 = local_40.TryGetValue(key, (object*)&local_48);
							if (bVar3) {
								if (local_48 == null) goto label_05b3e72c;
								left = local_48.GetType();
								pSVar8 = pSVar5.get_Item(key);
								if (pSVar8 == null) goto label_05b3e72c;
								right = pSVar8.GetType();
								bVar3 = (left != right);
								if (!bVar3) {
									source_00 = pSVar5.get_Item(key);
									pSVar8 = local_48;
									if ((source_00 == null) ||(local_48 == null)) goto label_05b3e72c;
									local_48.InspectorMetadata = source_00.InspectorMetadata;
									SandboxGameCreateConfiguration.CopyInspectorBounds(source_00, pSVar8);
									pSVar5.set_Item(key, (object)local_48);
								}
							}
							uVar9 = uVar9 + 1;
							uVar1 = (uint)pSVar6.Length;
							uVar7 = (ulong)uVar1;
						} while ((long)uVar9 < (long)(int)uVar1);
					}
					pSVar2 = local_38.Mode;
					if (pSVar2 != null) {
						pSVar2.Current = pSVar5;
						return pSVar5;
					}
				}
			}
		}
	label_05b3e72c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x5A3F830", Offset = "0x5A3E830", VA = "0x5A3F830")]
	public void RefreshDescriptions(InGameSet settings)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$RefreshDescriptions): 3 lines keep C-only constructs
		String* targetAddress;
		bool bVar1;
		MapScript script;
		String message;

		targetAddress = &this._LastError_k__BackingField;
		this._LastError_k__BackingField = null;
		script = this.LoadMapScript(settings);
		this.GetModeDefaults(settings, script);
		bVar1 = String.IsNullOrEmpty(this._LastError_k__BackingField);
		if (bVar1) {
			return;
		}
		message = String.Concat("Could not load experience descriptions: ", *targetAddress);
		Debug.LogError((object)message);
		return;
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x5A3F450", Offset = "0x5A3E450", VA = "0x5A3F450")]
	private Dictionary<string, BaseSetting> GetModeDefaults(InGameSet settings, MapScript script)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$GetModeDefaults): 2 lines keep C-only constructs
		Dictionary<string, BaseSetting> dictionary;
		bool bVar1;
		SandboxGameCreateConfiguration.c__DisplayClass24_0 __this_00;
		Func<string> __this_01;
		String a;
		Dictionary<string, BaseSetting> __this_02;

		__this_00 = new SandboxGameCreateConfiguration.c__DisplayClass24_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.settings = settings;
		__this_01 = new Func<string>((object)__this_00, (intptr_t) MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass24_0_GetModeDefaults_b__0);
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		a = (String)(*(code)__this_01.invoke_impl)(__this_01.method_code,__this_01.method);
		if (a == null) {
			a = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar1 = (a == BuiltinLevels.UseMapLogic);
		if ((bVar1) &&((script == null || (a = script.Logic, a == null)))) {
			a = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar1 = (this._cachedLogicSource == a);
		if ((bVar1) &&(dictionary = this._cachedModeSettings, dictionary != null)) {
			__this_02 = new Dictionary<string, BaseSetting>((IDictionary<TKey, TValue>)dictionary);
		}
		else {
			__this_02 = CustomLogicManager.GetModeSettings(a);
			if (__this_02 == null) {
				__this_02 = il2cpp_codegen_object_new(typeof(Dictionary<string, BaseSetting>)) ;
				__this_02 = new Dictionary<string, BaseSetting>();
			}
			this._cachedLogicSource = a;
			this._cachedModeSettings = __this_02;
		}
		return __this_02;
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x5A3E740", Offset = "0x5A3D740", VA = "0x5A3E740")]
	public Dictionary<string, Dictionary<string, BaseSetting>> SyncAddonSettings(InGameSet settings)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$SyncAddonSettings): 36 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		InGameGeneralSettings pSVar3;
		ListSetting<StringSetting> pSVar4;
		List<T> source;
		object pIVar5;
		String addonName;
		InGameAddonSettings pSVar6;
		object key;
		bool bVar7;
		Func<StringSetting, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		Func<StringSetting, string> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o source_01;
		System_Linq_IOrderedEnumerable_TSource__o source_02;
		System_Collections_Generic_List_TSource__o __this_02;
		String[] value;
		MethodInfo pMVar8;
		SandboxGameCreateConfiguration.c__DisplayClass25_0 __this_03;
		Func<string> __this_04;
		String value_00;
		Dictionary<string, Dictionary<string, BaseSetting>> pSVar9;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar10;
		Object[] pSVar11;
		Dictionary<object, object> pSVar12;
		ulong uVar13;
		Type left;
		BaseSetting pSVar14;
		Type right;
		BaseSetting source_03;
		Settings_SandboxGameCreateConfiguration___c_StaticFields pSVar15;
		System_Func_TSource__TKey__o __this_05;
		int iVar16;
		MethodInfo pMVar17;
		ulong uVar18;
		Dictionary<object, object> local_f0;
		Dictionary<object, object> local_e0;
		BaseSetting local_d8;
		MethodInfo local_d0;
		byte[] local_c8 = new byte[8];
		String local_b8;
		InGameSet local_a8;
		Dictionary<object, object> local_a0;
		byte[] local_98 = new byte[16];
		String local_88;
		object pIStack_80;
		int local_78;
		uint uStack_74;
		Object[] local_70;
		byte[] local_58 = new byte[8];
		String local_48;
		object pIStack_40;
		ulong local_38;

		if (Il2CppMethodInitialized_07547265 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_StringSetting_string) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass25_0_SyncAddonSettings_b__3) ;
			Il2CppMethodInitialized_07547265 = true;
		}
		local_c8 = (byte[])0x0;
		local_b8 = null;
		local_48 = null;
		pIStack_40 = null;
		local_58 = (byte[])0x0;
		local_38._0_4_ = 0;
		local_38._4_4_ = 0;
		local_a0 = null;
		local_d8 = null;
		if (settings == null) {
			pSVar9 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, BaseSetting>>));
			pSVar9 = new Dictionary<object, object>();
			return pSVar9;
		}
		pSVar3 = settings.General;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.Addons, pSVar4 == null)) goto label_05b3f253;
		source = pSVar4._value;
		if ((typeof(SandboxGameCreateConfiguration.c)._2).cctor_finished_or_no_cctor == 0) {
			pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			__this_00 = pSVar15.__9__25_0;
		}
		else {
			pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			__this_00 = pSVar15.__9__25_0;
		}
		if (__this_00 == null) {
			if (((typeof(SandboxGameCreateConfiguration.c))._2).cctor_finished_or_no_cctor == 0) {
				pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			}
			pIVar5 = (object)pSVar15.__9;
			__this_00 = new Func<StringSetting, bool>(pIVar5, (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_SyncAddonSettings_b__25_0);
			pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			pSVar15.__9__25_0 = __this_00;
		}
		source_00 = Enumerable.Where<StringSetting>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		if ((typeof(SandboxGameCreateConfiguration.c)._2).cctor_finished_or_no_cctor == 0) {
			pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			__this_01 = pSVar15.__9__25_1;
		}
		else {
			pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			__this_01 = pSVar15.__9__25_1;
		}
		if (__this_01 == null) {
			if (((typeof(SandboxGameCreateConfiguration.c))._2).cctor_finished_or_no_cctor == 0) {
				pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			}
			pIVar5 = (object)pSVar15.__9;
			__this_01 = new Func<StringSetting, string>(pIVar5, (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_SyncAddonSettings_b__25_1);
			pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			pSVar15.__9__25_1 = __this_01;
		}
		source_01 = Enumerable.Select<StringSetting, string>(source_00, (System_Func_TSource__TResult__o)__this_01);
		if ((typeof(SandboxGameCreateConfiguration.c)._2).cctor_finished_or_no_cctor == 0) {
			pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			__this_05 = (System_Func_TSource__TKey__o)pSVar15.__9__25_2;
			if (__this_05 != null) goto label_05b3eb5e;
	label_05b3f274: ;
			if ((typeof(SandboxGameCreateConfiguration.c)._2).cctor_finished_or_no_cctor == 0) {
				pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			}
			pIVar5 = (object)pSVar15.__9;
			__this_05 = new Func<string, string>(pIVar5, (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_SyncAddonSettings_b__25_2);
			pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			pSVar15.__9__25_2 = (Func<string, string>)__this_05;
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor != 0) goto label_05b3eb75;
	label_05b3f2e9: ;
			if (g_data_075435b6 != false) goto label_05b3eb82;
	label_05b3f2fb: ;
			g_data_075435b6 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar15 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			__this_05 = (System_Func_TSource__TKey__o)pSVar15.__9__25_2;
			if (__this_05 == null) goto label_05b3f274;
	label_05b3eb5e: ;
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) goto label_05b3f2e9;
	label_05b3eb75: ;
			if (g_data_075435b6 == false) goto label_05b3f2fb;
	label_05b3eb82: ;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		source_02 = Enumerable.OrderBy<string, string>((System_Collections_Generic_IEnumerable_TSource__o)source_01, __this_05, (System_Collections_Generic_IComparer_TKey__o)StringComparer.s_ordinal);
		__this_02 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source_02);
		if (__this_02 != null) {
			value = (String[])__this_02.ToArray();
			pMVar8 = (MethodInfo)String.Join("|", value);
			pMVar17 = pMVar8;
			bVar7 = (this._cachedAddonSelectionKey == (String)pMVar8);
			local_a8 = settings;
			if ((bVar7) &&(pSVar9 = this._cachedAddonSettings, pSVar9 != null)) {
				local_f0 = (Dictionary<object, object>)SandboxGameCreateConfiguration.CloneNestedDictionary(pSVar9);
			}
			else {
				local_d0 = pMVar8;
				local_f0 = (Dictionary<object, object>)il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, BaseSetting>>));
				local_f0 = new Dictionary<object, object>();
				local_98.GetEnumerator((List<object>)__this_02);
				local_b8 = local_88;
				local_c8 = (byte[])local_98._0_8_;
				while (bVar7 = local_c8.MoveNext()) {
					__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(SandboxGameCreateConfiguration.c__DisplayClass25_0));
					__this_03 = new Object();
					if (__this_03 == null) {
						throw new NullReferenceException();
					}
					__this_03.addonName = local_b8;
					__this_04 = new Func<string>((object)__this_03, (intptr_t) MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass25_0_SyncAddonSettings_b__3);
					value_00 = this.SafeContent(__this_04);
					bVar7 = String.IsNullOrEmpty(value_00);
					if (!bVar7) {
						addonName = __this_03.addonName;
						pSVar9 = CustomLogicManager.GetAddonSettingsGrouped(addonName, value_00);
						if (pSVar9 == (Dictionary<string, Dictionary<string, BaseSetting>>)0x0) {
							throw new NullReferenceException();
						}
						local_98.GetEnumerator((Dictionary<object, object>)pSVar9);
						local_38._0_4_ = local_78;
						local_38._4_4_ = uStack_74;
						local_48 = local_88;
						pIStack_40 = pIStack_80;
						local_58 = (byte[])local_98._0_8_;
						local_98._0_8_ = null;
						local_98._8_8_ = (Dictionary.Enumerator<object, object>)local_58;
						if (local_f0 == null) {
							bVar7 = local_58.MoveNext();
							if (bVar7) {
								throw new NullReferenceException();
							}
						}
						else {
							while (bVar7 = local_58.MoveNext()) {
								local_f0.set_Item((object)local_48, pIStack_40);
							}
						}
						local_58.Dispose();
					}
				}
				local_c8.Dispose();
				this._cachedAddonSelectionKey = (String)local_d0;
				this._cachedAddonSettings =(Dictionary<string, Dictionary<string, BaseSetting>>)local_f0;
				settings = local_a8;
			}
			pSVar6 = settings.Addons;
			if (pSVar6 != null) {
				local_e0 = (Dictionary<object, object>)pSVar6.Current;
				if (local_e0 == null) {
					local_e0 = (Dictionary<object, object>)il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, BaseSetting>>));
					local_e0 = new Dictionary<object, object>();
				}
				if (local_f0 != null) {
					pSVar10 = local_f0.Keys;
					pSVar11 = Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar10);
					if (pSVar11 != null) {
						iVar16 = (int)pSVar11.Length;
						if (local_e0 == null) {
							if (0 < iVar16) goto label_05b3f253;
						}
						else if (0 < iVar16) {
							pMVar17 = (MethodInfo)(pSVar11.Length & 0xffffffff);
							pMVar8 = null;
							local_70 = pSVar11;
							do {
								if (pMVar17 <= pMVar8) {
	label_05b3f393: ;
									throw new IndexOutOfRangeException();
								}
								pIVar5 = local_70[(long)pMVar8];
								local_d0 = pMVar8;
								bVar7 = local_e0.TryGetValue(pIVar5, (object*)&local_a0);
								if (bVar7) {
									pSVar12 = (Dictionary<object, object>)local_f0.get_Item(pIVar5);
									if (pSVar12 == null) goto label_05b3f253;
									pSVar10 = pSVar12.Keys;
									pSVar11 = Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar10);
									if (pSVar11 == null) goto label_05b3f253;
									if (0 < (int)pSVar11.Length) {
										uVar13 = pSVar11.Length & 0xffffffff;
										uVar18 = 0;
										do {
											if (uVar13 <= uVar18) goto label_05b3f393;
											if (local_a0 == null) goto label_05b3f253;
											key = pSVar11[uVar18];
											bVar7 = local_a0.TryGetValue(key, (object*)&local_d8);
											if (bVar7) {
												if (local_d8 == null) goto label_05b3f253;
												left = local_d8.GetType();
												pSVar12 = (Dictionary<object, object>)local_f0.get_Item(pIVar5);
												if ((pSVar12 == null) ||(pSVar14 = pSVar12.get_Item(key), pSVar14 == null)) goto label_05b3f253;
												right = pSVar14.GetType();
												bVar7 = (left != right);
												if (!bVar7) {
													pSVar12 = (Dictionary<object, object>)local_f0.get_Item(pIVar5);
													if (((pSVar12 == null) ||(source_03 = pSVar12.get_Item(key), pSVar14 = local_d8, source_03 == null)) ||(local_d8 == null)) goto label_05b3f253;
													local_d8.InspectorMetadata = source_03.InspectorMetadata;
													SandboxGameCreateConfiguration.CopyInspectorBounds(source_03, pSVar14);
													pSVar12 = (Dictionary<object, object>)local_f0.get_Item(pIVar5);
													if (pSVar12 == null) goto label_05b3f253;
													pSVar12.set_Item(key, (object)local_d8);
												}
											}
											uVar18 = uVar18 + 1;
											uVar2 = (uint)pSVar11.Length;
											uVar13 = (ulong)uVar2;
										} while ((long)uVar18 < (long)(int)uVar2);
									}
								}
								pMVar8 = (MethodInfo)((long)&local_d0.methodPointer + 1);
								uVar2 = (uint)local_70.Length;
								pMVar17 = (MethodInfo)(ulong)uVar2;
							} while ((long)pMVar8 < (long)(int)uVar2);
						}
						pSVar6 = local_a8.Addons;
						if (pSVar6 != null) {
							pSVar6.Current =(Dictionary<string, Dictionary<string, BaseSetting>>)local_f0;
							return (Dictionary<string, Dictionary<string, BaseSetting>>)local_f0;
						}
					}
				}
			}
		}
	label_05b3f253: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x5A3FCE0", Offset = "0x5A3ECE0", VA = "0x5A3FCE0")]
	public static void ApplyMiscDefaults(InGameMiscSettings misc)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$ApplyMiscDefaults): clean
		BoolSetting pSVar1;
		FloatSetting __this;
		IntSetting __this_00;

		if (misc == null) {
			return;
		}
		pSVar1 = misc.EndlessRespawnEnabled;
		if (pSVar1 != null) {
			pSVar1.Value = false;
			__this = misc.EndlessRespawnTime;
			if (__this != null) {
				__this.Value = 5.0;
				pSVar1 = misc.ThunderspearPVP;
				if (pSVar1 != null) {
					pSVar1.Value = false;
					__this_00 = misc.PVP;
					if (__this_00 != null) {
						__this_00.Value = 0;
						pSVar1 = misc.AllowBlades;
						if (pSVar1 != null) {
							pSVar1.Value = true;
							pSVar1 = misc.AllowAHSS;
							if (pSVar1 != null) {
								pSVar1.Value = true;
								pSVar1 = misc.AllowAPG;
								if (pSVar1 != null) {
									pSVar1.Value = true;
									pSVar1 = misc.AllowThunderspears;
									if (pSVar1 != null) {
										pSVar1.Value = true;
										pSVar1 = misc.AllowUnarmed;
										if (pSVar1 != null) {
											pSVar1.Value = false;
											pSVar1 = misc.AllowCivilian;
											if (pSVar1 != null) {
												pSVar1.Value = false;
												pSVar1 = misc.AllowPlayerTitans;
												if (pSVar1 != null) {
													pSVar1.Value = true;
													pSVar1 = misc.AllowShifterSpecials;
													if (pSVar1 != null) {
														pSVar1.Value = true;
														pSVar1 = misc.AllowShifters;
														if (pSVar1 != null) {
															pSVar1.Value = false;
															pSVar1 = misc.AllowVoteKicking;
															if (pSVar1 != null) {
																pSVar1.Value = false;
																pSVar1 = misc.Horses;
																if (pSVar1 != null) {
																	pSVar1.Value = false;
																	pSVar1 = misc.APGPVP;
																	if (pSVar1 != null) {
																		pSVar1.Value = false;
																		pSVar1 = misc.RealismMode;
																		if (pSVar1 != null) {
																			pSVar1.Value = false;
																			pSVar1 = misc.GlobalMinimapDisable;
																			if (pSVar1 != null) {
																				pSVar1.Value = false;
																				return;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x5A3FF10", Offset = "0x5A3EF10", VA = "0x5A3FF10")]
	public static void CopyInspectorBounds(BaseSetting source, BaseSetting destination)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$CopyInspectorBounds): 3 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;
		BaseSetting pSVar4;

		if (source != null) {
			pSVar3 = source.klass;
			bVar1 = (pSVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if ((((bVar2 <= bVar1) && (destination != null)) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(IntSetting))) &&((bVar2 <= (destination.klass._2).typeHierarchyDepth &&((destination.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(IntSetting))))) {
				(*(ulong)((sbyte)destination + 0x20)) = (*(ulong)((sbyte)source + 0x20));
				return;
			}
			bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if (bVar2 <= bVar1) {
				pSVar4 = null;
				if ((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting)) {
					pSVar4 = source;
				}
				if (((destination != null) && (pSVar4 != null)) &&((bVar2 <= (destination.klass._2).typeHierarchyDepth &&((destination.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(FloatSetting))))) {
					(*(ulong)((sbyte)destination + 0x20)) = (*(ulong)((sbyte)pSVar4 + 0x20));
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x5A3DE70", Offset = "0x5A3CE70", VA = "0x5A3DE70")]
	private void NormalizeMap(InGameSet settings)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$NormalizeMap): 4 lines keep C-only constructs
		InGameGeneralSettings pSVar1;
		StringSetting pSVar2;
		bool bVar3;
		Func<string[]> __this_00;
		String[] pSVar4;
		String* ppSVar5;

		__this_00 = new Func<string[]>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_GetMapCategories);
		pSVar4 = this.SafeOptions(__this_00);
		if (pSVar4 != null) {
			if (pSVar4.Length == 0) {
				return;
			}
			if (((settings == null) ||(pSVar1 = settings.General, pSVar1 == null)) ||(pSVar2 = pSVar1.MapCategory, pSVar2 == null)) goto label_05b3e057;
			bVar3 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar4, (object)pSVar2._value);
			if (!bVar3) {
				pSVar1 = settings.General;
				if (pSVar1 == null) goto label_05b3e057;
				if ((int)pSVar4.Length == 0) goto label_05b3e05c;
				pSVar2 = pSVar1.MapCategory;
				if (pSVar2 == null) goto label_05b3e057;
				pSVar2.Value = (object)pSVar4[0];
			}
			pSVar1 = settings.General;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.MapCategory, pSVar2 != null)) {
				pSVar4 = this.GetMapNames(pSVar2._value);
				pSVar1 = settings.General;
				if ((pSVar1 != null) &&(pSVar2 = pSVar1.MapName, pSVar2 != null)) {
					bVar3 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar4, (object)pSVar2._value);
					if (bVar3) {
						return;
					}
					pSVar1 = settings.General;
					if ((pSVar1 != null) && (pSVar4 != null)) {
						pSVar2 = pSVar1.MapName;
						if (pSVar4.Length == 0) {
							ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
						}
						else {
							if ((int)pSVar4.Length == 0) {
	label_05b3e05c: ;
								throw new IndexOutOfRangeException();
							}
							ppSVar5 = pSVar4.m_Items;
						}
						if (pSVar2 != null) {
							pSVar2.Value = (object)*ppSVar5;
							return;
						}
					}
				}
			}
		}
	label_05b3e057: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x5A3E070", Offset = "0x5A3D070", VA = "0x5A3E070")]
	private void NormalizeMode(InGameSet settings, MapScript script)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$NormalizeMode): 5 lines keep C-only constructs
		SandboxGameCreateConfiguration.c__DisplayClass29_0 targetAddress;
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		StringSetting pSVar4;
		StringSetting pSVar5;
		String category;
		String mapName;
		String gameMode;
		InGameMiscSettings settings_00;
		InGameModeSettings pSVar6;
		bool bVar7;
		SandboxGameCreateConfiguration.c__DisplayClass29_0 __this_00;
		Func<string[]> __this_01;
		String[] source;
		Dictionary<string, BaseSetting> __this_02;
		MethodInfo method_01;
		String* ppSVar8;

		__this_00 = new SandboxGameCreateConfiguration.c__DisplayClass29_0();
		if (__this_00 != null) {
			targetAddress = &__this_00.fields;
			__this_00.settings = settings;
			__this_00.script = script;
			__this_01 = new Func<string[]>((object)__this_00, (intptr_t) MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass29_0_NormalizeMode_b__0);
			source = this.SafeOptions(__this_01);
			pSVar1 = __this_00.settings;
			if (((pSVar1 != null) &&(pSVar2 = pSVar1.General, pSVar2 != null)) &&(pSVar3 = pSVar2.GameMode, pSVar3 != null)) {
				bVar7 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (object)pSVar3._value);
				if (!bVar7) {
					if (((targetAddress.settings == null) ||(pSVar2 = targetAddress.settings.General, pSVar2 == null)) || (source == null)) goto label_05b3e431;
					pSVar3 = pSVar2.GameMode;
					if (source.Length == 0) {
						ppSVar8 = *(String**)(g_data_07556758 + 0xb8);
					}
					else {
						if ((int)source.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						ppSVar8 = source.m_Items;
					}
					if (pSVar3 == null) goto label_05b3e431;
					pSVar3.Value = (object)*ppSVar8;
				}
				if (((targetAddress.settings != null) &&(pSVar2 = targetAddress.settings.General, pSVar2 != null)) &&((pSVar3 = pSVar2.GameMode, pSVar3 != null &&(pSVar4 = pSVar2.PrevGameMode, pSVar4 != null)))) {
					method_01 = (MethodInfo)pSVar4._value;
					bVar7 = (pSVar3._value != (String)method_01);
					if (bVar7) {
						if (targetAddress.settings == null) goto label_05b3e431;
						SandboxGameCreateConfiguration.ApplyMiscDefaults(targetAddress.settings.Misc);
						pSVar1 = targetAddress.settings;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						pSVar2 = pSVar1.General;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						pSVar3 = pSVar2.MapCategory;
						if (pSVar3 == null) {
							throw new NullReferenceException();
						}
						pSVar4 = pSVar2.MapName;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						pSVar5 = pSVar2.GameMode;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						category = pSVar3._value;
						mapName = pSVar4._value;
						gameMode = pSVar5._value;
						settings_00 = pSVar1.Misc;
						BuiltinLevels.LoadSandboxMiscSettings(category, mapName, gameMode, settings_00);
						if (targetAddress.settings == null) goto label_05b3e431;
						pSVar6 = targetAddress.settings.Mode;
						__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, BaseSetting>));
						__this_02 = new Dictionary<object, object>();
						if (pSVar6 == null) goto label_05b3e431;
						pSVar6.Current = __this_02;
					}
					if ((((targetAddress.settings != null) &&(pSVar2 = targetAddress.settings.General, pSVar2 != null)) &&(pSVar3 = pSVar2.GameMode, pSVar3 != null)) &&(pSVar4 = pSVar2.PrevGameMode, pSVar4 != null)) {
						pSVar4.Value = (object)pSVar3._value;
						return;
					}
				}
			}
		}
	label_05b3e431: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x5A3D890", Offset = "0x5A3C890", VA = "0x5A3D890")]
	private MapScript LoadMapScript(InGameSet settings)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$LoadMapScript): 2 lines keep C-only constructs
		String* targetAddress;
		InGameGeneralSettings pSVar1;
		StringSetting pSVar2;
		StringSetting pSVar3;
		String name;
		MapScriptOptions pMVar4;
		bool bVar5;
		MapScript __this_00;
		String pSVar6;

		__this_00 = new MapScript();
		targetAddress = &this._MapDescription_k__BackingField;
		this._MapDescription_k__BackingField = (String)**(ulong*)(g_data_07556758 + 0xb8) ;
		if (settings == null) {
			throw new NullReferenceException();
		}
		pSVar1 = settings.General;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pSVar1.MapCategory;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar3 = pSVar1.MapName;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pSVar6 = pSVar2._value;
		name = pSVar3._value;
		pSVar6 = BuiltinLevels.LoadMap(pSVar6, name);
		bVar5 = String.IsNullOrWhiteSpace(pSVar6);
		if (bVar5) {
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
		}
		else {
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Deserialize(pSVar6, false);
		}
		pMVar4 = __this_00.Options;
		if ((pMVar4 == null) ||(pSVar6 = pMVar4.Description, pSVar6 == null)) {
			pSVar6 = (String)**(long*)(g_data_07556758 + 0xb8);
		}
		this._MapDescription_k__BackingField = pSVar6;
		return __this_00;
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x5A3CEF0", Offset = "0x5A3BEF0", VA = "0x5A3CEF0")]
	private string[] SafeOptions(Func<string[]> getter)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$SafeOptions): 4 lines keep C-only constructs
		uint uVar1;
		object @object;
		object source;
		Settings_SandboxGameCreateConfiguration___c_StaticFields pSVar2;
		Func<string, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o pSVar3;
		String[] pSVar4;

		if (getter == null) {
			throw new NullReferenceException();
		}
		source = (object)(*(code)getter.invoke_impl)(getter.method_code);
		if (source == null) {
			source = new string[0];
			uVar1 = (typeof(SandboxGameCreateConfiguration.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(SandboxGameCreateConfiguration.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			__this_00 = pSVar2.__9__31_0;
		}
		else {
			pSVar2 = (typeof(SandboxGameCreateConfiguration.c)).static_fields;
			__this_00 = pSVar2.__9__31_0;
		}
		if (__this_00 == null) {
			if (((typeof(SandboxGameCreateConfiguration.c))._2).cctor_finished_or_no_cctor == 0) {
				pSVar2 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			}
			@object = (object)pSVar2.__9;
			__this_00 = new Func<string, bool>(@object, (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_SafeOptions_b__31_0);
			pSVar2 = typeof(SandboxGameCreateConfiguration.c).static_fields;
			pSVar2.__9__31_0 = __this_00;
		}
		pSVar3 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = Enumerable.Distinct<string>(pSVar3, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		pSVar4 = (String[])Enumerable.ToArray<string>(pSVar3);
		return pSVar4;
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x5A3F900", Offset = "0x5A3E900", VA = "0x5A3F900")]
	private string SafeContent(Func<string> getter)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$SafeContent): clean
		String pSVar1;

		if (getter == null) {
			throw new NullReferenceException();
		}
		pSVar1 = (String)(*(code)getter.invoke_impl)(getter.method_code,getter.method);
		if (pSVar1 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return pSVar1;
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x5A3DAD0", Offset = "0x5A3CAD0", VA = "0x5A3DAD0")]
	private void SetError(Exception exception)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$SetError): 2 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		String* targetAddress;

		bVar1 = String.IsNullOrEmpty(this._LastError_k__BackingField);
		if (bVar1) {
			targetAddress = &this._LastError_k__BackingField;
			if (exception == null) {
				pSVar2 = "Unable to load Sandbox content.";
			}
			else {
				pSVar2 = exception.get_Message();
			}
			*targetAddress = pSVar2;
			return;
		}
		return;
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x5A3F7F0", Offset = "0x5A3E7F0", VA = "0x5A3F7F0")]
	private static void PreserveInspectorMetadata(BaseSetting source, BaseSetting destination)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$PreserveInspectorMetadata): clean


		if ((source == null) || (destination == null)) {
			throw new NullReferenceException();
		}
		destination.InspectorMetadata = source.InspectorMetadata;
		SandboxGameCreateConfiguration.CopyInspectorBounds(source, destination);
		return;
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x5A3F9D0", Offset = "0x5A3E9D0", VA = "0x5A3F9D0")]
	private static Dictionary<string, BaseSetting> CloneDictionary(Dictionary<string, BaseSetting> source)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$CloneDictionary): clean
		Dictionary<string, BaseSetting> __this;

		if (source == null) {
			__this = new Dictionary<string, BaseSetting>() ;
		}
		else {
			__this = new Dictionary<string, BaseSetting>((IDictionary<TKey, TValue>)source);
		}
		return __this;
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x5A3FA60", Offset = "0x5A3EA60", VA = "0x5A3FA60")]
	private static Dictionary<string, Dictionary<string, BaseSetting>> CloneNestedDictionary(Dictionary<string, Dictionary<string, BaseSetting>> source)
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$CloneNestedDictionary): 5 lines keep C-only constructs
		object pIVar1;
		object dictionary;
		bool bVar2;
		Dictionary<string, Dictionary<string, BaseSetting>> __this;
		Dictionary<string, BaseSetting> pSVar3;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_68;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_38;

		local_68._current.key = null;
		local_68._current.value = null;
		local_68._dictionary = null;
		local_68._version = 0;
		local_68._index = 0;
		local_68._getEnumeratorRetType = 0;
		local_68._36_4_ = 0;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, BaseSetting>>));
		__this = new Dictionary<object, object>();
		if (source != null) {
			local_68 = source.GetEnumerator();
			local_38 = &local_68;
			if (__this == null) {
				bVar2 = local_68.MoveNext();
				pIVar1 = local_68._current.value;
				if (bVar2) {
					pSVar3 = new Dictionary<string, BaseSetting>((IDictionary<TKey, TValue>)pIVar1);
					throw new NullReferenceException();
				}
			}
			else {
				while(true) {
					bVar2 = local_68.MoveNext();
					dictionary = local_68._current.value;
					pIVar1 = local_68._current.key;
					if (!bVar2) break;
					pSVar3 = new Dictionary<string, BaseSetting>((IDictionary<TKey, TValue>)dictionary);
					__this.set_Item(pIVar1, (object)pSVar3);
				}
			}
			local_68.Dispose();
		}
		return __this;
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x5A40020", Offset = "0x5A3F020", VA = "0x5A40020")]
	public SandboxGameCreateConfiguration()
	{
		// Lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c (Settings.SandboxGameCreateConfiguration$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/SandboxGameCreateConfiguration.c.

	// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass24_0$$.ctor: clean
	private void c__DisplayClass24_0__ctor()
	{
		base();
		return;
	}

	// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass25_0$$.ctor: clean
	private void c__DisplayClass25_0__ctor()
	{
		base();
		return;
	}

	// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass29_0$$.ctor: clean
	private void c__DisplayClass29_0__ctor()
	{
		base();
		return;
	}

	// Settings.SandboxGameCreateConfiguration.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new SandboxGameCreateConfiguration.c();
		SandboxGameCreateConfiguration.c.__9 =(SandboxGameCreateConfiguration.c)__this;
		return;
	}

	// Settings.SandboxGameCreateConfiguration.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Settings.SandboxGameCreateConfiguration.<>c$$<GetGameModes>b__18_0: clean
	private bool c__GetGameModes_b__18_0(String value)
	{
		bool bVar1;

		bVar1 = String.IsNullOrWhiteSpace(value);
		return !bVar1;
	}

	// Settings.SandboxGameCreateConfiguration.<>c$$<SyncAddonSettings>b__25_0: clean
	private bool c__SyncAddonSettings_b__25_0(StringSetting item)
	{
		bool bVar1;

		if (item == null) {
			return false;
		}
		bVar1 = String.IsNullOrWhiteSpace(item._value);
		return !bVar1;
	}

	// Settings.SandboxGameCreateConfiguration.<>c$$<SyncAddonSettings>b__25_1: clean
	private String c__SyncAddonSettings_b__25_1(StringSetting item)
	{
		if (item == null) {
			throw new NullReferenceException();
		}
		return item._value;
	}

	// Settings.SandboxGameCreateConfiguration.<>c$$<SyncAddonSettings>b__25_2: clean
	private String c__SyncAddonSettings_b__25_2(String value)
	{
		return value;
	}

	// Settings.SandboxGameCreateConfiguration.<>c$$<SafeOptions>b__31_0: clean
	private bool c__SafeOptions_b__31_0(String value)
	{
		bool bVar1;

		bVar1 = String.IsNullOrWhiteSpace(value);
		return !bVar1;
	}

	// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass16_0$$<GetMapNames>b__0: clean
	private String[] c__DisplayClass16_0__GetMapNames_b__0()
	{
		uint uVar1;
		String category;
		String[] pSVar2;

		if (Il2CppMethodInitialized_07547272 == false) {
			Il2CppMethodInitialized_07547272 = true;
			category = this.category;
		}
		else {
			category = this.category;
		}
		if (category == null) {
			category = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = ((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass24_0$$<GetModeDefaults>b__0: clean
	private String c__DisplayClass24_0__GetModeDefaults_b__0()
	{
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		String pSVar4;

		pSVar1 = this.settings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(pSVar3 = pSVar2.GameMode, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		pSVar4 = pSVar3._value;
		if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = BuiltinLevels.LoadLogic(pSVar4);
			return pSVar4;
		}
		pSVar4 = BuiltinLevels.LoadLogic(pSVar4);
		return pSVar4;
	}

	// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass25_0$$<SyncAddonSettings>b__3: clean
	private String c__DisplayClass25_0__SyncAddonSettings_b__3()
	{
		String pSVar1;

		pSVar1 = this.addonName;
		if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = BuiltinLevels.LoadAddon(pSVar1);
			return pSVar1;
		}
		pSVar1 = BuiltinLevels.LoadAddon(pSVar1);
		return pSVar1;
	}

	// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass29_0$$<NormalizeMode>b__0: clean
	private String[] c__DisplayClass29_0__NormalizeMode_b__0()
	{
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		StringSetting pSVar4;
		MapScript pMVar5;
		String category;
		String mapName;
		bool bVar6;
		String[] pSVar7;
		int local_1c;

		local_1c = 0;
		pSVar1 = this.settings;
		if ((((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(pSVar3 = pSVar2.MapCategory, pSVar3 == null)) ||((pSVar4 = pSVar2.MapName, pSVar4 == null ||(pMVar5 = this.script, pMVar5 == null)))) {
			throw new NullReferenceException();
		}
		category = pSVar3._value;
		mapName = pSVar4._value;
		bVar6 = String.IsNullOrWhiteSpace(pMVar5.Logic);
		pSVar7 = BuiltinLevels.GetSandboxGameModes(category, mapName, !bVar6, ref local_1c);
		return pSVar7;
	}
}
