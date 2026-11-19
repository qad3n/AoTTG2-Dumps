// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.FullscreenHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/FullscreenHandler.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/FullscreenHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200097B")]
internal class FullscreenHandler : MonoBehaviour
{
	[Token(Token = "0x4002FD6")]
	[FieldOffset(Offset = "0x0")]
	private static FullscreenHandler _instance;

	[Token(Token = "0x4002FD7")]
	[FieldOffset(Offset = "0x8")]
	private static Resolution _resolution;

	[Token(Token = "0x4002FD8")]
	[FieldOffset(Offset = "0x18")]
	private static bool _isFocused;

	[Token(Token = "0x60058A6")]
	[Address(RVA = "0x5D08C90", Offset = "0x5D07C90", VA = "0x5D08C90")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$Init): clean
		FullscreenHandler pAVar1;

		pAVar1 = SingletonFactory.CreateSingleton<FullscreenHandler>((object)FullscreenHandler._instance);
		FullscreenHandler._instance = pAVar1;
		return;
	}

	[Token(Token = "0x60058A7")]
	[Address(RVA = "0x5D14F60", Offset = "0x5D13F60", VA = "0x5D14F60")]
	public static void Apply(int resolutionIndex, FullScreenLevel fullscreenLevel)
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$Apply): clean
		bool bVar1;
		List<Resolution> __this;
		Resolution UVar2;

		bVar1 = MobilePlatformUtility.IsMobileRuntime();
		if (bVar1) {
			UVar2 = (Resolution)MobileFullscreenUtility.ApplyResolution(resolutionIndex);
			(FullscreenHandler._resolution) = UVar2;
			return;
		}
		__this = FullscreenHandler.GetResolutions();
		if (__this == null) {
			throw new NullReferenceException();
		}
		UVar2 = (Resolution)__this.get_Item(resolutionIndex);
		(FullscreenHandler._resolution) = UVar2;
		FullscreenHandler.SetFullscreen(fullscreenLevel);
		return;
	}

	[Token(Token = "0x60058A8")]
	[Address(RVA = "0x5D15700", Offset = "0x5D14700", VA = "0x5D15700")]
	public static int SanitizeResolutionSetting(int resolutionIndex)
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$SanitizeResolutionSetting): 4 lines keep C-only constructs
		uint uVar1;
		List<Resolution> pSVar2;
		int iVar3;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07548428 == false) {
			Il2CppMethodInitialized_07548428 = true;
			uVar1 = (typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor;
			klass = typeof(FullscreenHandler);
		}
		else {
			uVar1 = (typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor;
			klass = typeof(FullscreenHandler);
		}
		typeof(FullscreenHandler) = (FullscreenHandler)klass;
		if (uVar1 == 0) {
			pSVar2 = FullscreenHandler.GetResolutions();
		}
		else {
			pSVar2 = FullscreenHandler.GetResolutions();
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if (0 < resolutionIndex) {
		}
		if (pSVar2._size <= resolutionIndex) {
		}
		return iVar3;
	}

	[Token(Token = "0x60058A9")]
	[Address(RVA = "0x5D15790", Offset = "0x5D14790", VA = "0x5D15790")]
	public static string[] GetResolutionOptions()
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$GetResolutionOptions): 5 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		bool bVar4;
		List<string> __this;
		List<Resolution> __this_00;
		String pSVar5;
		String pSVar6;
		String[] pSVar7;
		int local_8c;
		object local_88;
		RefreshRate UStack_80;
		byte[] local_78 = new byte[8];
		object local_68;
		RefreshRate UStack_60;
		byte[] local_50 = new byte[16];
		object local_40;
		RefreshRate UStack_38;

		local_68 = null;
		UStack_60.numerator = 0;
		UStack_60.denominator = 0;
		local_78 = (byte[])0x0;
		local_88 = null;
		UStack_80.numerator = 0;
		UStack_80.denominator = 0;
		local_8c = 0;
		__this = new List<string>();
		__this_00 = FullscreenHandler.GetResolutions();
		if (__this_00 != null) {
			local_50.GetEnumerator(__this_00);
			local_68 = local_40;
			UStack_60 = UStack_38;
			local_78 = (byte[])local_50._0_8_;
			local_50._0_8_ = null;
			local_50._8_8_ = local_78;
			if (__this == null) {
				bVar4 = local_78.MoveNext();
				if (bVar4) {
					local_88 = local_68;
					UStack_80 = UStack_60;
					local_8c = local_88.width;
					pSVar5 = local_8c.ToString();
					local_8c = local_88.height ;
					pSVar6 = local_8c.ToString();
					String.Concat(pSVar5, " x ", pSVar6);
	label_05e15a6e: ;
					throw new NullReferenceException();
				}
			}
			else {
				while(true) {
					bVar4 = local_78.MoveNext();
					if (!bVar4) break;
					local_88 = local_68;
					UStack_80 = UStack_60;
					local_8c = local_88.width;
					pSVar5 = local_8c.ToString();
					local_8c = local_88.height ;
					pSVar6 = local_8c.ToString();
					pSVar5 = String.Concat(pSVar5, " x ", pSVar6);
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar7 = __this._items;
					if (pSVar7 == null) goto label_05e15a6e;
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar7.Length) {
						__this._size = uVar2 + 1;
						pSVar7[(int)uVar2] = pSVar5;
					}
					else {
						__this.AddWithResize((object)pSVar5);
					}
				}
			}
			local_78.Dispose() ;
			if (__this != null) {
				pSVar7 = (String[])__this.ToArray();
				return pSVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058AA")]
	[Address(RVA = "0x5D15060", Offset = "0x5D14060", VA = "0x5D15060")]
	private static List<Resolution> GetResolutions()
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$GetResolutions): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Resolution[] pUVar3;
		Resolution item;
		Resolution item_00;
		bool bVar5;
		List<Resolution> pSVar6;
		HashSet<string> __this;
		ulong uVar7;
		String pSVar8;
		String pSVar9;
		int iVar10;
		Resolution pUVar11;
		ulong uVar12;
		int local_74;
		Resolution[] local_70;
		Resolution local_68;
		List<Resolution> local_50;
		Resolution local_48;

		if (Il2CppMethodInitialized_0754842a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Resolution_Reverse) ;
			Il2CppMethodInitialized_0754842a = true;
		}
		local_68.m_Width = 0;
		local_68.m_Height = 0;
		local_68.m_RefreshRate.numerator = 0;
		local_68.m_RefreshRate.denominator = 0;
		local_74 = 0;
		bVar5 = MobilePlatformUtility.IsMobileRuntime();
		if (bVar5) {
			pSVar6 = MobileFullscreenUtility.GetResolutions();
			return pSVar6;
		}
		pSVar6 = new List<Resolution>();
		__this = new HashSet<string>();
		local_70 = Screen.resolutions;
		if (local_70 != null) {
			local_50 = pSVar6;
			if (__this == null) {
				if (0 < (int)local_70.Length) {
					local_68.m_Width = local_70[0].m_Width;
					local_68.m_Height = local_70[0].m_Height;
					local_68.m_RefreshRate = local_70[0].m_RefreshRate;
					local_74 = local_68.width;
					pSVar8 = local_74.ToString();
					local_74 = local_68.height ;
					pSVar9 = local_74.ToString();
					String.Concat(pSVar8, ",", pSVar9);
					throw new NullReferenceException();
				}
			}
			else {
				iVar10 = (int)local_70.Length;
				uVar7 = local_70.Length & 0xffffffff;
				if (pSVar6 == null) {
					if (iVar10 < 1) goto label_05e154fc;
					pUVar11 = local_70.m_Items;
					uVar12 = 0;
					do {
						if (uVar7 <= uVar12) goto label_05e154f7;
						local_68.m_Width = pUVar11.m_Width;
						local_68.m_Height = pUVar11.m_Height;
						local_68.m_RefreshRate = pUVar11.m_RefreshRate;
						local_74 = local_68.width;
						pSVar8 = local_74.ToString();
						local_74 = local_68.height;
						pSVar9 = local_74.ToString();
						pSVar8 = String.Concat(pSVar8, ",", pSVar9);
						bVar5 = __this.Contains((object)pSVar8);
						if (!bVar5) goto label_05e154fc;
						uVar12 = uVar12 + 1;
						uVar2 = (uint)local_70.Length;
						uVar7 = (ulong)uVar2;
						pUVar11 = pUVar11 + 1;
					} while ((long)uVar12 < (long)(int)uVar2);
				}
				else if (0 < iVar10) {
					pUVar11 = local_70.m_Items;
					uVar12 = 0;
					do {
						if (uVar7 <= uVar12) {
	label_05e154f7: ;
							throw new IndexOutOfRangeException();
						}
						local_68.m_Width = pUVar11.m_Width;
						local_68.m_Height = pUVar11.m_Height;
						local_68.m_RefreshRate = pUVar11.m_RefreshRate;
						local_74 = local_68.width;
						pSVar8 = local_74.ToString();
						local_74 = local_68.height;
						pSVar9 = local_74.ToString();
						pSVar8 = String.Concat(pSVar8, ",", pSVar9);
						bVar5 = __this.Contains((object)pSVar8);
						if (!bVar5) {
							item.m_RefreshRate = local_68.m_RefreshRate;
							item.m_Width = local_68.m_Width;
							item.m_Height = local_68.m_Height;
							piVar1 = &local_50._version;
							*piVar1 = *piVar1 + 1;
							pUVar3 = local_50._items;
							if (pUVar3 == null) goto label_05e154fc;
							uVar2 = local_50._size;
							if (uVar2 < (uint)pUVar3.Length) {
								local_50._size = uVar2 + 1;
								pUVar3[(int)uVar2].m_Width = local_68.m_Width;
								pUVar3[(int)uVar2].m_Height = local_68.m_Height;
								pUVar3[(int)uVar2].m_RefreshRate = local_68.m_RefreshRate;
							}
							else {
								local_50.AddWithResize(item);
							}
							__this.Add((object)pSVar8);
						}
						uVar12 = uVar12 + 1;
						uVar2 = (uint)local_70.Length;
						uVar7 = (ulong)uVar2;
						pUVar11 = pUVar11 + 1;
					} while ((long)uVar12 < (long)(int)uVar2);
				}
			}
			pSVar6 = local_50;
			if (local_50 != null) {
				local_50.Reverse() ;
				if (pSVar6._size == 0) {
					local_48.m_Width = 0;
					local_48.m_Height = 0;
					local_48.m_RefreshRate.numerator = 0;
					local_48.m_RefreshRate.denominator = 0;
					local_48.width = 800;
					pSVar6 = local_50;
					local_48.height = 600;
					item_00.m_RefreshRate = local_48.m_RefreshRate;
					item_00.m_Width = local_48.m_Width;
					item_00.m_Height = local_48.m_Height;
					piVar1 = &pSVar6._version;
					*piVar1 = *piVar1 + 1;
					pUVar3 = pSVar6._items;
					if (pUVar3 == null) goto label_05e154fc;
					uVar2 = pSVar6._size;
					if (uVar2 < (uint)pUVar3.Length) {
						pSVar6._size = uVar2 + 1;
						pUVar3[(int)uVar2].m_Width = local_48.m_Width;
						pUVar3[(int)uVar2].m_Height = local_48.m_Height;
						pUVar3[(int)uVar2].m_RefreshRate = local_48.m_RefreshRate;
					}
					else {
						pSVar6.AddWithResize(item_00);
					}
				}
				return pSVar6;
			}
		}
	label_05e154fc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058AB")]
	[Address(RVA = "0x5D15510", Offset = "0x5D14510", VA = "0x5D15510")]
	private static void SetFullscreen(FullScreenLevel fullscreen)
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$SetFullscreen): clean
		BaseMenu pUVar1;
		bool bVar2;
		int iVar3;
		int iVar4;
		uint uVar5;
		uint fullscreenMode;

		fullscreenMode = 3;
		if (fullscreen != 0) {
			fullscreenMode = (uint)(fullscreen == 1);
		}
		iVar3 = Screen.width;
		iVar4 = (FullscreenHandler._resolution).width;
		if (iVar3 == iVar4) {
			iVar3 = Screen.height;
			iVar4 = (FullscreenHandler._resolution).height;
			if (iVar3 == iVar4) {
				uVar5 = Screen.fullScreenMode;
				if (uVar5 == fullscreenMode) goto label_05e15636;
			}
		}
		iVar3 = (FullscreenHandler._resolution).width;
		iVar4 = (FullscreenHandler._resolution).height;
		Screen.SetResolution(iVar3, iVar4, fullscreenMode);
	label_05e15636: ;
		CursorManager.RefreshCursorLock();
		pUVar1 = UIManager.CurrentMenu;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.ApplyScale(SceneLoader.SceneName);
			return;
		}
		return;
	}

	[Token(Token = "0x60058AC")]
	[Address(RVA = "0x5D15AF0", Offset = "0x5D14AF0", VA = "0x5D15AF0")]
	public static int GetTargetFrameRate(int fpsCap)
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$GetTargetFrameRate): clean
		bool bVar1;
		int iVar2;

		if (fpsCap < 1) {
			bVar1 = MobilePlatformUtility.IsMobileRuntime();
			fpsCap = -1;
			if (bVar1) {
				if ((typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor == 0) {
					return iVar2;
				}
				return iVar2;
			}
		}
		return fpsCap;
	}

	[Token(Token = "0x60058AD")]
	[Address(RVA = "0x5D15B50", Offset = "0x5D14B50", VA = "0x5D15B50")]
	private static int GetMaxRefreshRate()
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$GetMaxRefreshRate): 2 lines keep C-only constructs
		uint uVar1;
		double dVar2;
		RefreshRate UVar3;
		Resolution[] pUVar4;
		ulong uVar5;
		ulong uVar6;
		MethodInfo method_00;
		MethodInfo method_01;
		Resolution pUVar7;
		double local_68;
		Il2CppMethodPointer local_60;
		Il2CppMethodPointer local_58;
		RefreshRate UStack_50;
		Resolution local_40;

		local_58 = (Il2CppMethodPointer)0x0;
		UStack_50.numerator = 0;
		UStack_50.denominator = 0;
		local_40 = Screen.currentResolution;
		method_00 = null;
		UVar3 = local_40.refreshRateRatio;
		pUVar4 = Screen.resolutions;
		if (pUVar4 == null) {
			throw new NullReferenceException();
		}
		local_68 = (double)UVar3.numerator / (double)((ulong)UVar3 >> 0x20);
		if (0 < (int)pUVar4.Length) {
			uVar5 = pUVar4.Length & 0xffffffff;
			pUVar7 = pUVar4.m_Items;
			uVar6 = 0;
			do {
				if (uVar5 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				local_58 = *(Il2CppMethodPointer)&pUVar7.fields;
				UStack_50 = pUVar7.m_RefreshRate;
				method_00 = null;
				UVar3 = local_58.refreshRateRatio;
				local_68 = Math.Max(local_68, (double)UVar3.numerator / (double)((ulong)UVar3 >> 0x20));
				uVar6 = uVar6 + 1;
				uVar1 = (uint)pUVar4.Length;
				uVar5 = (ulong)uVar1;
				pUVar7 = pUVar7 + 1;
			} while ((long)uVar6 < (long)(int)uVar1);
		}
		method_01 = (MethodInfo)&local_60;
		dVar2 = modf(local_68, (double)method_01, method_00);
		if (0.0 <= local_68) {
			if ((dVar2 != 0.5) || (NAN(dVar2))) {
				local_60 = (Il2CppMethodPointer)floor(local_68 + 0.5, method_01);
			}
			else if (((long)(double)local_60 & 1U) != 0) {
				local_60 = (Il2CppMethodPointer)((double)local_60 + 1.0);
			}
		}
		else if ((dVar2 != -0.5) || (NAN(dVar2))) {
			local_60 = (Il2CppMethodPointer)ceil(local_68 + -0.5, method_01);
		}
		else if (((long)(double)local_60 & 1U) != 0) {
			local_60 = (Il2CppMethodPointer)((double)local_60 + -1.0);
		}
		return (int)(double)local_60;
	}

	[Token(Token = "0x60058AE")]
	[Address(RVA = "0x5D15D40", Offset = "0x5D14D40", VA = "0x5D15D40")]
	public static void UpdateFPS()
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$UpdateFPS): clean
		int iVar1;
		uint uVar2;
		GraphicsSettings pSVar3;
		IntSetting pSVar4;
		IntSetting pSVar5;
		bool bVar6;
		int value;
		int val1;

		pSVar3 = SettingsManager.GraphicsSettings;
		if (((pSVar3 == null) ||(pSVar4 = pSVar3.FPSCap, pSVar4 == null)) ||(pSVar5 = pSVar3.MenuFPSCap, pSVar5 == null)) {
			throw new NullReferenceException();
		}
		val1 = pSVar4._value;
		value = pSVar5._value;
		iVar1 = SceneLoader.SceneName;
		if ((typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor == 0) {
			if (FullscreenHandler._isFocused != false) goto label_05e15e15;
	label_05e15e5b: ;
			if (iVar1 - 4U < 0xfffffffe) {
				if (value < 1) goto label_05e15ed3;
				val1 = value;
			}
			else {
				if (val1 < 1) {
	label_05e15ed3: ;
					val1 = 0x3c;
					goto label_05e15f9a;
				}
			}
			val1 = Math.Min(val1, 0x3c);
		}
		else {
			if (FullscreenHandler._isFocused == false) goto label_05e15e5b;
	label_05e15e15: ;
			uVar2 = (typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor;
			if (iVar1 - 4U < 0xfffffffe) {
				if (uVar2 == 0) {
				}
				if (value < 1) {
					bVar6 = MobilePlatformUtility.IsMobileRuntime();
					value = -1;
					if (bVar6) {
						value = FullscreenHandler.GetMaxRefreshRate();
					}
				}
				uVar2 = (typeof(Application)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05e15fab;
			}
			if (uVar2 == 0) {
			}
			if (val1 < 1) {
				bVar6 = MobilePlatformUtility.IsMobileRuntime();
				val1 = -1;
				if (bVar6) {
					val1 = FullscreenHandler.GetMaxRefreshRate();
				}
			}
		}
	label_05e15f9a: ;
		uVar2 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		value = val1;
	joined_r0x05e15fab: ;
		if (uVar2 == 0) {
		}
		Application.targetFrameRate = value;
		return;
	}

	[Token(Token = "0x60058AF")]
	[Address(RVA = "0x5D15FD0", Offset = "0x5D14FD0", VA = "0x5D15FD0")]
	public static void UpdateSound()
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$UpdateSound): clean
		SoundSettings pSVar1;
		BoolSetting pSVar2;
		FloatSetting pSVar3;
		float value;

		pSVar1 = SettingsManager.SoundSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.MuteMinimized, pSVar2 == null)) goto label_05e16167;
		if (pSVar2._value == false) {
			pSVar3 = pSVar1.Volume;
			if (pSVar3 == null) goto label_05e16167;
			AudioListener.volume = pSVar3._value;
			MusicManager._muted = false;
			goto label_05e16132;
		}
		if ((typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor == 0) {
			if (FullscreenHandler._isFocused == false) goto label_05e160f3;
	label_05e16080: ;
			pSVar1 = SettingsManager.SoundSettings;
			if ((pSVar1 == null) ||(pSVar3 = pSVar1.Volume, pSVar3 == null)) {
	label_05e16167: ;
				throw new NullReferenceException();
			}
			value = pSVar3._value;
		}
		else {
			if (FullscreenHandler._isFocused != false) goto label_05e16080;
	label_05e160f3: ;
			value = 0.0;
		}
		AudioListener.volume = value;
		MusicManager._muted =(bool)(FullscreenHandler._isFocused ^ 1);
	label_05e16132: ;
		MusicManager.ApplySoundSettings();
		if ((typeof(VoiceChatManager)._2).cctor_finished_or_no_cctor == 0) {
			VoiceChatManager.ApplySoundSettings();
			return;
		}
		VoiceChatManager.ApplySoundSettings();
		return;
	}

	[Token(Token = "0x60058B0")]
	[Address(RVA = "0x5D165A0", Offset = "0x5D155A0", VA = "0x5D165A0")]
	public void OnApplicationFocus(bool hasFocus)
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$OnApplicationFocus): clean


		FullscreenHandler._isFocused = hasFocus;
		FullscreenHandler.UpdateSound();
		FullscreenHandler.UpdateFPS();
		CursorManager.RefreshCursorLock();
		return;
	}

	[Token(Token = "0x60058B1")]
	[Address(RVA = "0x5D16630", Offset = "0x5D15630", VA = "0x5D16630")]
	private static bool IsWindowed()
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$IsWindowed): clean
		GraphicsSettings pSVar1;
		IntSetting pSVar2;

		pSVar1 = SettingsManager.GraphicsSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.FullScreenMode, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		return pSVar2._value == 0;
	}

	[Token(Token = "0x60058B2")]
	[Address(RVA = "0x5D16690", Offset = "0x5D15690", VA = "0x5D16690")]
	private static bool Supported()
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$Supported): clean
		int iVar1;

		iVar1 = Application.platform;
		return iVar1 == 2;
	}

	[Token(Token = "0x60058B3")]
	[Address(RVA = "0x5D166E0", Offset = "0x5D156E0", VA = "0x5D166E0")]
	public FullscreenHandler()
	{
		// Lifted from source/cpp/ApplicationManagers/FullscreenHandler.c (ApplicationManagers.FullscreenHandler$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/FullscreenHandler.c.

	// ApplicationManagers.FullscreenHandler$$.cctor: clean
	static FullscreenHandler()
	{
		FullscreenHandler._isFocused = true;
		return;
	}
}
