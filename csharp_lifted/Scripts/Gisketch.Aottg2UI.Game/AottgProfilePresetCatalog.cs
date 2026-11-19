// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000320")]
internal static class AottgProfilePresetCatalog
{
	[Token(Token = "0x4000FB5")]
	private const string DefaultAvatar = "Gisketch1";

	[Token(Token = "0x4000FB6")]
	private const string DefaultBanner = "MainBackground2Texture";

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x57FC190", Offset = "0x57FB190", VA = "0x57FC190")]
	public static AottgProfilePreset[] Avatars()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Avatars): 16 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		AottgProfilePreset item;
		bool bVar6;
		sbyte cVar7;
		List<AottgProfilePreset> __this;
		JSONNode pSVar8;
		object pIVar9;
		VirtualInvokeData pVVar10;
		String pSVar11;
		String pSVar12;
		String pSVar13;
		AottgProfilePreset[] pGVar14;
		ulong uVar15;
		long lVar17;
		object local_a8;
		int local_9c;
		GisketchUiPerfLog.Scope local_98;
		object* local_70;
		GisketchUiPerfLog.Scope local_60;
		GisketchUiPerfLog.Scope local_58;

		local_58._startMs = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		local_a8 = null;
		local_9c = 0;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_98 = GisketchUiPerfLog.Time("ProfilePresetCatalog.Avatars", "load");
		local_58._startMs = local_98._startMs;
		local_58._enabled = local_98._enabled;
		local_58._hotLoop = local_98._hotLoop;
		local_58._26_6_ = local_98._26_6_;
		local_58._area = local_98._area;
		local_58._detail = local_98._detail;
		local_60 = &local_58;
		__this = new List<AottgProfilePreset>();
		pSVar8 = AottgProfilePresetCatalog.LoadJson("Data/Info/ProfileIconInfo");
		bVar6 = (pSVar8 != null);
		if (bVar6) {
			if (pSVar8 == null) {
				throw new NullReferenceException();
			}
			pSVar8 = pSVar8.get_Item("Icons");
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar8 = null;
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = (pSVar8 != null);
		if (bVar6) {
			if (pSVar8 == null) {
				throw new NullReferenceException();
			}
			pIVar9 = (object)pSVar8.get_Children();
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIVar9.klass;
			uVar15 = (ulong)(pIVar4._2).interface_offsets_count;
			pIVar9 = pIVar9.Dispose();
			local_70 = &local_a8;
	joined_r0x058fc4a8: ;
			do {
				local_a8 = pIVar9;
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = pIVar9.klass;
				uVar15 = (ulong)(pIVar4._2).interface_offsets_count;
				cVar7 = pIVar9.Dispose();
				pIVar9 = local_a8;
				if (cVar7 == false) {
					if (local_a8 == null) goto label_058fc7cf;
					pIVar4 = local_a8.klass;
					uVar15 = (ulong)(pIVar4._2).interface_offsets_count;
					if (uVar15 == 0) goto label_058fc79f;
					pIVar5 = (pIVar4._1).interfaceOffsets;
					lVar17 = 0;
					goto label_058fc790;
				}
				if (local_a8 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = local_a8.klass;
				uVar15 = (ulong)(pIVar4._2).interface_offsets_count;
				pIVar9 = pIVar9.Dispose();
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pSVar11 = (String)(*pIVar9.klass.vtable[9].methodPtr)(pIVar9);
				bVar6 = String.IsNullOrEmpty(pSVar11);
				pIVar9 = local_a8;
			} while (bVar6);
			bVar6 = String.IsNullOrEmpty(pSVar11);
			if (bVar6) {
				pSVar12 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pSVar11 == null) {
					throw new NullReferenceException();
				}
				pSVar12 = pSVar11.Replace("MainBackground", "Main Background ");
			}
			pSVar13 = String.Concat("UI/Icons/Profile/", pSVar11, "Icon");
			local_98._detail = null;
			local_98._startMs = 0;
			local_98._area = pSVar11;
			local_98._detail = pSVar12;
			local_98._startMs = (int64_t)pSVar13;
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pGVar14 = __this._items;
				if (pGVar14 != null) {
					uVar3 = __this._size;
					if (uVar3 < (uint)pGVar14.Length) {
						__this._size = uVar3 + 1;
						pGVar14[(int)uVar3].Sprite = (String)local_98._startMs;
						pGVar14[(int)uVar3].Key = local_98._area;
						pGVar14[(int)uVar3].Label = local_98._detail;
						pIVar9 = local_a8;
					}
					else {
						item.Label = local_98._detail;
						item.Key = local_98._area;
						item.Sprite = (String)local_98._startMs;
						__this.AddWithResize(item);
						pIVar9 = local_a8;
					}
					goto joined_r0x058fc4a8;
				}
			}
			throw new NullReferenceException();
		}
		goto label_058fc7cf;
		while (true) {
			lVar17 = lVar17 + 0x10;
			if (!(uVar15 * 0x10 != lVar17)) break;
	label_058fc790: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar17) == typeof(IDisposable)) {
				pVVar10 = pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar17);
				goto label_058fc7bd;
			}
		}
	label_058fc79f: ;
	label_058fc7bd: ;
		pIVar9.Dispose();
	label_058fc7cf: ;
		if (__this == null) {
			throw new NullReferenceException();
		}
		if (__this._size < 1) {
			pGVar14 = (AottgProfilePreset[])new AottgProfilePreset[1];
			pSVar12 = "UI/Icons/Profile/Gisketch1Icon";
			pSVar11 = "Gisketch";
			local_98._detail = null;
			local_98._startMs = 0;
			local_98._area = "Gisketch1";
			local_98._detail = pSVar11;
			local_98._startMs = (int64_t)pSVar12;
			if (pGVar14 == null) {
				throw new NullReferenceException();
			}
			if ((int)pGVar14.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pGVar14[0].Sprite = (String)local_98._startMs;
			pGVar14[0].Key = local_98._area;
			pGVar14[0].Label = local_98._detail;
		}
		else {
			pGVar14 = __this.ToArray();
			if (pGVar14 == null) {
				throw new NullReferenceException();
			}
		}
		local_9c = (int32_t)pGVar14.Length;
		pSVar11 = local_9c.ToString();
		pSVar11 = String.Concat("count=", pSVar11);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("ProfilePresetCatalog.Avatars", pSVar11);
		local_58.Dispose();
		return pGVar14;
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x57FCA20", Offset = "0x57FBA20", VA = "0x57FCA20")]
	public static AottgProfilePreset[] Banners()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Banners): 16 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		AottgProfilePreset item;
		bool bVar6;
		sbyte cVar7;
		List<AottgProfilePreset> __this;
		JSONNode pSVar8;
		object pIVar9;
		VirtualInvokeData pVVar10;
		String pSVar11;
		String pSVar12;
		String pSVar13;
		AottgProfilePreset[] pGVar14;
		ulong uVar15;
		long lVar17;
		object local_a8;
		int local_9c;
		GisketchUiPerfLog.Scope local_98;
		object* local_70;
		GisketchUiPerfLog.Scope local_60;
		GisketchUiPerfLog.Scope local_58;

		local_58._startMs = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		local_a8 = null;
		local_9c = 0;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_98 = GisketchUiPerfLog.Time("ProfilePresetCatalog.Banners", "load");
		local_58._startMs = local_98._startMs;
		local_58._enabled = local_98._enabled;
		local_58._hotLoop = local_98._hotLoop;
		local_58._26_6_ = local_98._26_6_;
		local_58._area = local_98._area;
		local_58._detail = local_98._detail;
		local_60 = &local_58;
		__this = new List<AottgProfilePreset>();
		pSVar8 = AottgProfilePresetCatalog.LoadJson("Data/Info/BannerInfo");
		bVar6 = (pSVar8 != null);
		if (bVar6) {
			if (pSVar8 == null) {
				throw new NullReferenceException();
			}
			pSVar8 = pSVar8.get_Item("Banners");
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar8 = null;
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = (pSVar8 != null);
		if (bVar6) {
			if (pSVar8 == null) {
				throw new NullReferenceException();
			}
			pIVar9 = (object)pSVar8.get_Children();
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIVar9.klass;
			uVar15 = (ulong)(pIVar4._2).interface_offsets_count;
			pIVar9 = pIVar9.Dispose();
			local_70 = &local_a8;
	joined_r0x058fcd48: ;
			do {
				local_a8 = pIVar9;
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = pIVar9.klass;
				uVar15 = (ulong)(pIVar4._2).interface_offsets_count;
				cVar7 = pIVar9.Dispose();
				pIVar9 = local_a8;
				if (cVar7 == false) {
					if (local_a8 == null) goto label_058fd08f;
					pIVar4 = local_a8.klass;
					uVar15 = (ulong)(pIVar4._2).interface_offsets_count;
					if (uVar15 == 0) goto label_058fd05f;
					pIVar5 = (pIVar4._1).interfaceOffsets;
					lVar17 = 0;
					goto label_058fd050;
				}
				if (local_a8 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = local_a8.klass;
				uVar15 = (ulong)(pIVar4._2).interface_offsets_count;
				pIVar9 = pIVar9.Dispose();
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pSVar11 = (String)(*pIVar9.klass.vtable[9].methodPtr)(pIVar9);
				bVar6 = String.IsNullOrEmpty(pSVar11);
				pIVar9 = local_a8;
			} while (bVar6);
			if (pSVar11 == null) {
				throw new NullReferenceException();
			}
			pSVar12 = pSVar11.Replace("Texture", "");
			bVar6 = String.IsNullOrEmpty(pSVar12);
			if (bVar6) {
				pSVar12 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar12 = pSVar12.Replace("MainBackground", "Main Background ");
			}
			pSVar13 = String.Concat("UI/Backgrounds/", pSVar11);
			local_98._detail = null;
			local_98._startMs = 0;
			local_98._area = pSVar11;
			local_98._detail = pSVar12;
			local_98._startMs = (int64_t)pSVar13;
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pGVar14 = __this._items;
				if (pGVar14 != null) {
					uVar3 = __this._size;
					if (uVar3 < (uint)pGVar14.Length) {
						__this._size = uVar3 + 1;
						pGVar14[(int)uVar3].Sprite = (String)local_98._startMs;
						pGVar14[(int)uVar3].Key = local_98._area;
						pGVar14[(int)uVar3].Label = local_98._detail;
						pIVar9 = local_a8;
					}
					else {
						item.Label = local_98._detail;
						item.Key = local_98._area;
						item.Sprite = (String)local_98._startMs;
						__this.AddWithResize(item);
						pIVar9 = local_a8;
					}
					goto joined_r0x058fcd48;
				}
			}
			throw new NullReferenceException();
		}
		goto label_058fd08f;
		while (true) {
			lVar17 = lVar17 + 0x10;
			if (!(uVar15 * 0x10 != lVar17)) break;
	label_058fd050: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar17) == typeof(IDisposable)) {
				pVVar10 = pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar17);
				goto label_058fd07d;
			}
		}
	label_058fd05f: ;
	label_058fd07d: ;
		pIVar9.Dispose();
	label_058fd08f: ;
		if (__this == null) {
			throw new NullReferenceException();
		}
		if (__this._size < 1) {
			pGVar14 = (AottgProfilePreset[])new AottgProfilePreset[1];
			pSVar12 = "UI/Backgrounds/MainBackground2Texture";
			pSVar11 = "Main Background 2";
			local_98._detail = null;
			local_98._startMs = 0;
			local_98._area = "MainBackground2Texture";
			local_98._detail = pSVar11;
			local_98._startMs = (int64_t)pSVar12;
			if (pGVar14 == null) {
				throw new NullReferenceException();
			}
			if ((int)pGVar14.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pGVar14[0].Sprite = (String)local_98._startMs;
			pGVar14[0].Key = local_98._area;
			pGVar14[0].Label = local_98._detail;
		}
		else {
			pGVar14 = __this.ToArray();
			if (pGVar14 == null) {
				throw new NullReferenceException();
			}
		}
		local_9c = (int32_t)pGVar14.Length;
		pSVar11 = local_9c.ToString();
		pSVar11 = String.Concat("count=", pSVar11);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("ProfilePresetCatalog.Banners", pSVar11);
		local_58.Dispose();
		return pGVar14;
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x5804C80", Offset = "0x5803C80", VA = "0x5804C80")]
	public static string AvatarSprite(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AvatarSprite): 1 lines keep C-only constructs
		AottgProfilePreset[] presets;
		String pSVar1;
		String* method_00;

		if (Il2CppMethodInitialized_07545649 == false) {
			method_00 = &"UI/Icons/Profile/";
			Il2CppMethodInitialized_07545649 = true;
		}
		presets = AottgProfilePresetCatalog.Avatars();
		pSVar1 = AottgProfilePresetCatalog.AllowedKey(key, presets, "Gisketch1");
		pSVar1 = String.Concat("UI/Icons/Profile/", pSVar1, "Icon") ;
		return pSVar1;
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x5804DA0", Offset = "0x5803DA0", VA = "0x5804DA0")]
	public static string BannerSprite(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$BannerSprite): 1 lines keep C-only constructs
		AottgProfilePreset[] presets;
		String pSVar1;
		String* method_00;

		if (Il2CppMethodInitialized_0754564a == false) {
			method_00 = &"UI/Backgrounds/";
			Il2CppMethodInitialized_0754564a = true;
		}
		presets = AottgProfilePresetCatalog.Banners();
		pSVar1 = AottgProfilePresetCatalog.AllowedKey(key, presets, "MainBackground2Texture");
		pSVar1 = String.Concat("UI/Backgrounds/", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x600139D")]
	[Address(RVA = "0x5804E00", Offset = "0x5803E00", VA = "0x5804E00")]
	public static string PublicAvatarSprite(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$PublicAvatarSprite): 2 lines keep C-only constructs
		bool bVar1;
		AottgProfilePreset[] presets;
		String* ppSVar2;
		String pSStack_18;

		pSStack_18 = null;
		presets = AottgProfilePresetCatalog.Avatars();
		ppSVar2 = &pSStack_18;
		bVar1 = AottgProfilePresetCatalog.TryPresetSprite(key, presets, ref pSStack_18);
		if (!bVar1) {
			ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
		}
		return *ppSVar2;
	}

	[Token(Token = "0x600139E")]
	[Address(RVA = "0x5804F10", Offset = "0x5803F10", VA = "0x5804F10")]
	public static string PublicBannerSprite(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$PublicBannerSprite): 2 lines keep C-only constructs
		bool bVar1;
		AottgProfilePreset[] presets;
		String* ppSVar2;
		String pSStack_18;

		pSStack_18 = null;
		presets = AottgProfilePresetCatalog.Banners();
		ppSVar2 = &pSStack_18;
		bVar1 = AottgProfilePresetCatalog.TryPresetSprite(key, presets, ref pSStack_18);
		if (!bVar1) {
			ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
		}
		return *ppSVar2;
	}

	[Token(Token = "0x600139F")]
	[Address(RVA = "0x5804F60", Offset = "0x5803F60", VA = "0x5804F60")]
	public static string FirstAvatarKey()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstAvatarKey): 1 lines keep C-only constructs
		AottgProfilePreset[] pGVar1;
		String pSVar2;
		String* ppSVar3;

		if (g_data_0754564b == false) {
			ppSVar3 = &"Gisketch1";
			g_data_0754564b = true;
		}
		pGVar1 = AottgProfilePresetCatalog.Avatars();
		pSVar2 = "Gisketch1";
		if ((pGVar1 != null) && (pGVar1.Length != 0)) {
			if ((int)pGVar1.Length == 0) {
				throw new IndexOutOfRangeException();
			}
		}
		return pSVar2;
	}

	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x5804FE0", Offset = "0x5803FE0", VA = "0x5804FE0")]
	public static string FirstBannerKey()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstBannerKey): 1 lines keep C-only constructs
		AottgProfilePreset[] pGVar1;
		String pSVar2;
		String* ppSVar3;

		if (g_data_0754564c == false) {
			ppSVar3 = &"MainBackground2Texture";
			g_data_0754564c = true;
		}
		pGVar1 = AottgProfilePresetCatalog.Banners();
		pSVar2 = "MainBackground2Texture";
		if ((pGVar1 != null) && (pGVar1.Length != 0)) {
			if ((int)pGVar1.Length == 0) {
				throw new IndexOutOfRangeException();
			}
		}
		return pSVar2;
	}

	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x5804E50", Offset = "0x5803E50", VA = "0x5804E50")]
	private static bool TryPresetSprite(string key, AottgProfilePreset[] presets, out string sprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$TryPresetSprite): 3 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		bool bVar3;
		ulong uVar4;
		String* ppSVar5;
		ulong uVar6;

		*sprite = (String)**(ulong*)(g_data_07556758 + 0xb8);
		bVar3 = String.IsNullOrEmpty(key);
		if (((!bVar3) && (presets != null)) &&(0 < (int)presets.Length)) {
			uVar4 = presets.Length & 0xffffffff;
			ppSVar5 = &presets[0].Sprite;
			uVar6 = 0;
			do {
				if (uVar4 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				pSVar2 = *ppSVar5;
				bVar3 = (((AottgProfilePreset)(ppSVar5 + -2)).Key == key);
				if (bVar3) {
					*sprite = pSVar2;
					return true;
				}
				uVar6 = uVar6 + 1;
				uVar1 = (uint)presets.Length;
				uVar4 = (ulong)uVar1;
				ppSVar5 = ppSVar5 + 3;
			} while ((long)uVar6 < (long)(int)uVar1);
		}
		return false;
	}

	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x5804D00", Offset = "0x5803D00", VA = "0x5804D00")]
	private static string AllowedKey(string key, AottgProfilePreset[] presets, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AllowedKey): clean
		bool bVar1;
		ulong uVar2;
		ulong uVar3;
		AottgProfilePreset pGVar4;

		bVar1 = String.IsNullOrEmpty(key);
		if (bVar1) {
			if (presets == null) {
				return fallback;
			}
			uVar2 = presets.Length;
		}
		else {
			if (presets == null) {
				throw new NullReferenceException();
			}
			uVar2 = presets.Length;
			if (0 < (int)uVar2) {
				pGVar4 = presets.m_Items;
				uVar3 = 0;
				do {
					if ((uVar2 & 0xffffffff) <= uVar3) goto label_05904d8b;
					bVar1 = (pGVar4.Key == key);
					if (bVar1) {
						return key;
					}
					uVar3 = uVar3 + 1;
					uVar2 = presets.Length;
					pGVar4 = pGVar4 + 1;
				} while ((long)uVar3 < (long)(int)uVar2);
			}
		}
		if (uVar2 != 0) {
			if ((int)uVar2 == 0) {
	label_05904d8b: ;
				throw new IndexOutOfRangeException();
			}
		}
		return fallback;
	}

	[Token(Token = "0x60013A3")]
	[Address(RVA = "0x5804FB0", Offset = "0x5803FB0", VA = "0x5804FB0")]
	private static string FirstKey(AottgProfilePreset[] presets, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstKey): clean
		if ((presets != null) && (presets.Length != 0)) {
			if ((int)presets.Length == 0) {
				throw new IndexOutOfRangeException();
			}
		}
		return fallback;
	}

	[Token(Token = "0x60013A4")]
	[Address(RVA = "0x5804990", Offset = "0x5803990", VA = "0x5804990")]
	private static JSONNode LoadJson(string path)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$LoadJson): 8 lines keep C-only constructs
		String area;
		bool bVar1;
		Object x;
		String pSVar2;
		String pSVar3;
		JSONNode pSVar4;
		int iVar5;
		int local_7c;
		GisketchUiPerfLog.Scope local_78;
		GisketchUiPerfLog.Scope local_50;

		local_78._startMs._0_4_ = 0;
		local_78._startMs._4_2_ = 0;
		local_78._startMs._6_2_ = 0;
		local_78._enabled = false;
		local_78._hotLoop = false;
		local_78._26_6_ = 0;
		local_78._area = null;
		local_78._detail = null;
		local_7c = 0;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_50 = GisketchUiPerfLog.Time("ProfilePresetCatalog.LoadJson", path);
		local_78._startMs = local_50._startMs;
		local_78._enabled = local_50._enabled;
		local_78._hotLoop = local_50._hotLoop;
		local_78._26_6_ = local_50._26_6_;
		local_78._area = local_50._area;
		local_78._detail = local_50._detail;
		local_50._area = null;
		local_50._detail = (String)&local_78;
		x = (Object)Resources.Load<TextAsset>(path);
		iVar5 = 0;
		bVar1 = (x != null);
		area = "ProfilePresetCatalog.LoadJson";
		pSVar3 = " bytes=";
		if (bVar1) {
			if (x == null) {
				throw new NullReferenceException();
			}
			iVar5 = 0;
			pSVar2 = x.text;
			if (pSVar2 != null) {
				pSVar2 = x.text;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				iVar5 = pSVar2._stringLength;
			}
		}
		local_7c = iVar5;
		pSVar2 = local_7c.ToString();
		pSVar3 = String.Concat(path, pSVar3, pSVar2);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark(area, pSVar3);
		bVar1 = (x != null);
		if (bVar1) {
			if (x == null) {
				throw new NullReferenceException();
			}
			pSVar3 = x.text;
		}
		else {
		}
		local_78.Dispose();
		return pSVar4;
	}

	[Token(Token = "0x60013A5")]
	[Address(RVA = "0x5804C00", Offset = "0x5803C00", VA = "0x5804C00")]
	private static string Label(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c (Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Label): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(key);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (key == null) {
			throw new NullReferenceException();
		}
		pSVar2 = key.Replace("MainBackground", "Main Background ");
		return pSVar2;
	}
}
