// ==================== AoTTG2 cross-reference ====================
// Type: Utility.MobileFullscreenUtility
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Utility/MobileFullscreenUtility.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200090B")]
internal static class MobileFullscreenUtility
{
	[Token(Token = "0x200090C")]
	[CompilerGenerated]
	private sealed class _003CRefreshUIAfterResolutionChange_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DBF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DC0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DC1")]
		[FieldOffset(Offset = "0x20")]
		public int requestId;

		[Token(Token = "0x4002DC2")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000EEA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60055ED")]
			[Address(RVA = "0x5CE0BA0", Offset = "0x5CDFBA0", VA = "0x5CE0BA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000EEB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60055EF")]
			[Address(RVA = "0x5CE0BF0", Offset = "0x5CDFBF0", VA = "0x5CE0BF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60055EA")]
		[Address(RVA = "0x5CE08C0", Offset = "0x5CDF8C0", VA = "0x5CE08C0")]
		[DebuggerHidden]
		public _003CRefreshUIAfterResolutionChange_003Ed__15(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60055EB")]
		[Address(RVA = "0x5CE0990", Offset = "0x5CDF990", VA = "0x5CE0990", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60055EC")]
		[Address(RVA = "0x5CE09A0", Offset = "0x5CDF9A0", VA = "0x5CE09A0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			BaseMenu pUVar2;
			bool bVar3;
			int iVar4;
			object __this_00;

			iVar4 = this.__1__state;
			if (iVar4 == 1) {
				this.__1__state = -1;
				MobileFullscreenUtility.RefreshResolutionInputScale();
				iVar4 = this._i_5__2 + 1;
				this._i_5__2 = iVar4;
				if (5 < iVar4) {
					iVar4 = this.requestId;
					if ((typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor == 0) {
						iVar1 = MobileFullscreenUtility._uiRefreshRequestId;
					}
					else {
						iVar1 = MobileFullscreenUtility._uiRefreshRequestId;
					}
					if (iVar4 != iVar1) {
						return false;
					}
					if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
					}
					pUVar2 = UIManager.CurrentMenu;
					bVar3 = ((Object)pUVar2 == null);
					if (bVar3) {
						return false;
					}
					CursorManager.RefreshCursorLock();
					pUVar2 = UIManager.CurrentMenu;
					if (pUVar2 == null) {
						throw new NullReferenceException();
					}
					pUVar2.ApplyScale(SceneLoader.SceneName);
					return false;
				}
			}
			else {
				if (iVar4 != 0) {
					return false;
				}
				this.__1__state = -1;
				this._i_5__2 = 0;
			}
			__this_00 = (object)il2cpp_codegen_object_new(typeof(WaitForEndOfFrame)) ;
			__this_00 = new WaitForEndOfFrame();
			this.__2__current = __this_00;
			this.__1__state = 1;
			return true;
		}

		[Token(Token = "0x60055EE")]
		[Address(RVA = "0x5CE0BB0", Offset = "0x5CDFBB0", VA = "0x5CE0BB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Utility_MobileFullscreenUtility_RefreshUIAfterResolutionChange_d__15_System_Collections_IEnumera);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002DB7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int[] ShortSideOptions;

	[Token(Token = "0x4002DB8")]
	private const float InputReferenceShortSide = 1080f;

	[Token(Token = "0x4002DB9")]
	[FieldOffset(Offset = "0x8")]
	private static int _nativeWidth;

	[Token(Token = "0x4002DBA")]
	[FieldOffset(Offset = "0xC")]
	private static int _nativeHeight;

	[Token(Token = "0x4002DBB")]
	[FieldOffset(Offset = "0x10")]
	private static int _lastScreenWidth;

	[Token(Token = "0x4002DBC")]
	[FieldOffset(Offset = "0x14")]
	private static int _lastScreenHeight;

	[Token(Token = "0x4002DBD")]
	[FieldOffset(Offset = "0x18")]
	private static float _resolutionInputScale;

	[Token(Token = "0x4002DBE")]
	[FieldOffset(Offset = "0x1C")]
	private static int _uiRefreshRequestId;

	[Token(Token = "0x60055E1")]
	[Address(RVA = "0x5CDFC20", Offset = "0x5CDEC20", VA = "0x5CDFC20")]
	public static List<Resolution> GetResolutions()
	{
		// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility$$GetResolutions): 10 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Int32[] pSVar3;
		int iVar4;
		int iVar5;
		int iVar6;
		Display pUVar7;
		List<Resolution> __this;
		MethodInfo __this_00;
		ulong uVar8;
		MethodInfo extraout_RDX;
		MethodInfo pMVar9;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo method_01;
		ulong uVar10;
		double dVar11;
		Il2CppMethodPointer pIVar12;
		Il2CppMethodPointer pIVar13;
		Resolution local_60;
		Il2CppMethodPointer local_50;
		float local_44;
		double local_40;
		Il2CppMethodPointer local_38;

		local_60 = (Resolution)Screen.currentResolution;
		iVar4 = local_60.width;
		local_60 = (Resolution)Screen.currentResolution;
		iVar5 = local_60.height;
		if (iVar5 < iVar4) {
			iVar5 = iVar4;
		}
		local_60 = (Resolution)Screen.currentResolution;
		iVar6 = local_60.width;
		local_60 = (Resolution)Screen.currentResolution;
		iVar4 = local_60.height;
		if (iVar6 < iVar4) {
			iVar4 = iVar6;
		}
		if ((iVar5 < 1) || (iVar4 < 1)) {
			iVar4 = Screen.width;
			iVar5 = Screen.height;
			if (iVar5 < iVar4) {
				iVar5 = iVar4;
			}
			iVar6 = Screen.width;
			iVar4 = Screen.height;
			if (iVar6 < iVar4) {
				iVar4 = iVar6;
			}
			uVar1 = (typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor;
			pMVar9 = extraout_RDX_00;
		}
		else {
			uVar1 = (typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor;
			pMVar9 = extraout_RDX;
		}
		if (uVar1 == 0) {
			pMVar9 = extraout_RDX_01;
		}
		MobileFullscreenUtility.CacheNativeResolution(iVar5, iVar4);
		pUVar7 = Display.main;
		if (pUVar7 != null) {
			iVar5 = pUVar7.systemWidth;
			pUVar7 = Display.main;
			if (pUVar7 != null) {
				iVar4 = pUVar7.systemHeight;
				if (iVar4 < iVar5) {
					iVar4 = iVar5;
				}
				pUVar7 = Display.main;
				if (pUVar7 != null) {
					iVar5 = pUVar7.systemWidth;
					pUVar7 = Display.main;
					if (pUVar7 != null) {
						iVar6 = pUVar7.systemHeight;
						if (iVar6 <= iVar5) {
							iVar5 = iVar6;
						}
						MobileFullscreenUtility.CacheNativeResolution(iVar4, iVar5);
						iVar5 = MobileFullscreenUtility._nativeWidth;
						iVar4 = MobileFullscreenUtility._nativeHeight;
						__this = new List<Resolution>();
						__this_00 = new HashSet<string>();
						pMVar9 = __this_00;
						MobileFullscreenUtility.AddResolution(__this, (HashSet<string>)__this_00, iVar5, iVar4);
						pSVar3 = MobileFullscreenUtility.ShortSideOptions;
						if (pSVar3 != null) {
							if (0 < (int)pSVar3.Length) {
								local_44 = (float)iVar5 / (float)iVar4;
								uVar8 = pSVar3.Length & 0xffffffff;
								uVar10 = 0;
								do {
									if (uVar8 <= uVar10) {
										throw new IndexOutOfRangeException();
									}
									iVar5 = pSVar3[uVar10];
									if (iVar5 <= iVar4) {
										if (Il2CppMethodInitialized_07541320 == false) {
											Il2CppMethodInitialized_07541320 = true;
											uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
										}
										else {
											uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
										}
										if (uVar1 == 0) {
										}
										local_50 = (Il2CppMethodPointer)CONCAT44(local_50._4_4_, (float)iVar5 * local_44);
										local_40 = (double)((float)iVar5 * local_44);
										method_01 = (MethodInfo)&local_38;
										dVar11 = modf(local_40, (double)method_01, pMVar9);
										if (0.0 <= local_50._0_4_) {
											if ((dVar11 == 0.5) && (!NAN(dVar11))) {
												pIVar13 = (Il2CppMethodPointer)((double)local_38 + 1.0);
												goto joined_r0x05ddff81;
											}
											pIVar13 = (Il2CppMethodPointer)floor(local_40 + 0.5, method_01);
											uVar1 = (typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor;
											pIVar12 = local_50;
										}
										else {
											if ((dVar11 != -0.5) || (NAN(dVar11))) {
												pIVar12 = (Il2CppMethodPointer)ceil(local_40 + -0.5, method_01);
											}
											else {
												pIVar13 = (Il2CppMethodPointer)((double)local_38 + -1.0);
	joined_r0x05ddff81: ;
												pIVar12 = local_38;
												if (((long)(double)local_38 & 1U) != 0) {
													uVar1 = (typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor;
													pIVar12 = local_50;
													goto joined_r0x05de003d;
												}
											}
											uVar1 = (typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor;
											pIVar13 = pIVar12;
											pIVar12 = local_50;
										}
	joined_r0x05de003d: ;
										local_50 = pIVar13;
										pIVar13 = local_50;
										if (uVar1 == 0) {
											il2cpp_codegen_runtime_class_init(typeof(MobileFullscreenUtility)) ;
											pIVar13 = local_50;
											pIVar12 = local_50;
										}
										local_50 = pIVar12;
										pMVar9 = __this_00;
										MobileFullscreenUtility.AddResolution(__this, (HashSet<string>)__this_00, (int)(double)pIVar13, iVar5);
									}
									uVar10 = uVar10 + 1;
									uVar2 = (uint)pSVar3.Length;
									uVar8 = (ulong)uVar2;
								} while ((long)uVar10 < (long)(int)uVar2);
							}
							return __this;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055E2")]
	[Address(RVA = "0x5CE0310", Offset = "0x5CDF310", VA = "0x5CE0310")]
	public static Resolution ApplyResolution(int resolutionIndex)
	{
		// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility$$ApplyResolution): clean
		BaseMenu pUVar1;
		bool bVar2;
		uint width;
		int height;
		List<Resolution> __this;
		int index;
		Resolution local_28;

		if (Il2CppMethodInitialized_07548276 == false) {
			Il2CppMethodInitialized_07548276 = true;
			if ((typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor == 0) goto label_05de03bf;
	label_05de033a: ;
			__this = MobileFullscreenUtility.GetResolutions();
		}
		else {
			if ((typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor != 0) goto label_05de033a;
	label_05de03bf: ;
			__this = MobileFullscreenUtility.GetResolutions();
		}
		if (__this == null) {
	label_05de0510: ;
			throw new NullReferenceException();
		}
		index = __this._size + -1;
		if (resolutionIndex < index) {
			index = resolutionIndex;
		}
		if (resolutionIndex < 0) {
			index = 0;
		}
		local_28 = (Resolution)__this.get_Item(index);
		Screen.orientation = 3;
		width = local_28.width;
		height = local_28.height;
		Screen.SetResolution(width, height, true);
		MobileFullscreenUtility.RefreshResolutionInputScale();
		CursorManager.RefreshCursorLock();
		pUVar1 = UIManager.CurrentMenu;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 == null) goto label_05de0510;
			pUVar1.ApplyScale(SceneLoader.SceneName);
			MobileFullscreenUtility.ScheduleUIRefreshAfterResolutionChange();
		}
		return (Resolution)local_28;
	}

	[Token(Token = "0x60055E3")]
	[Address(RVA = "0x5CE07A0", Offset = "0x5CDF7A0", VA = "0x5CE07A0")]
	public static float GetResolutionInputScale()
	{
		// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility$$GetResolutionInputScale): clean
		int iVar1;
		int iVar2;

		iVar1 = MobileFullscreenUtility._lastScreenWidth;
		iVar2 = Screen.width;
		if (iVar1 == iVar2) {
			iVar1 = MobileFullscreenUtility._lastScreenHeight;
			iVar2 = Screen.height;
			if (iVar1 == iVar2) goto label_05de082e;
		}
		MobileFullscreenUtility.RefreshResolutionInputScale();
	label_05de082e: ;
		return MobileFullscreenUtility._resolutionInputScale;
	}

	[Token(Token = "0x60055E4")]
	[Address(RVA = "0x5CE01A0", Offset = "0x5CDF1A0", VA = "0x5CE01A0")]
	private static void AddResolution(List<Resolution> resolutions, HashSet<string> found, int width, int height)
	{
		// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility$$AddResolution): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Resolution[] pUVar3;
		Resolution item;
		bool bVar5;
		String pSVar6;
		String str2;
		int local_40;
		int local_3c;
		Resolution local_38;

		local_40 = height;
		local_3c = width;
		if (Il2CppMethodInitialized_07548278 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548278 = true;
		}
		pSVar6 = local_3c.ToString();
		str2 = local_40.ToString();
		pSVar6 = String.Concat(pSVar6, ",", str2);
		if (found != null) {
			bVar5 = found.Contains((object)pSVar6);
			if (bVar5) {
				return;
			}
			local_38.m_Width = 0;
			local_38.m_Height = 0;
			local_38.m_RefreshRate.numerator = 0;
			local_38.m_RefreshRate.denominator = 0;
			local_38.width = local_3c;
			local_38.height = local_40;
			if (resolutions != null) {
				item.m_RefreshRate = local_38.m_RefreshRate;
				item.m_Width = local_38.m_Width;
				item.m_Height = local_38.m_Height;
				piVar1 = &resolutions._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = resolutions._items;
				if (pUVar3 != null) {
					uVar2 = resolutions._size;
					if (uVar2 < (uint)pUVar3.Length) {
						resolutions._size = uVar2 + 1;
						pUVar3[(int)uVar2].m_Width = local_38.m_Width;
						pUVar3[(int)uVar2].m_Height = local_38.m_Height;
						pUVar3[(int)uVar2].m_RefreshRate = local_38.m_RefreshRate;
					}
					else {
						resolutions.AddWithResize(item);
					}
					found.Add((object)pSVar6);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055E5")]
	[Address(RVA = "0x5CE00C0", Offset = "0x5CDF0C0", VA = "0x5CE00C0")]
	private static void CacheNativeResolution(int width, int height)
	{
		// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility$$CacheNativeResolution): clean
		int iVar1;
		Utility_MobileFullscreenUtility_StaticFields pUVar2;
		int iVar3;

		if ((0 < width) && (0 < height)) {
			if ((typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor == 0) {
				pUVar2 = typeof(MobileFullscreenUtility).static_fields;
				iVar1 = pUVar2._nativeWidth;
			}
			else {
				pUVar2 = typeof(MobileFullscreenUtility).static_fields;
				iVar1 = pUVar2._nativeWidth;
			}
			if (0 < iVar1) {
				if (((typeof(MobileFullscreenUtility))._2).cctor_finished_or_no_cctor == 0) {
					pUVar2 = typeof(MobileFullscreenUtility).static_fields;
					iVar3 = pUVar2._nativeHeight;
				}
				else {
					iVar3 = pUVar2._nativeHeight;
				}
				if (0 < iVar3) {
					if (((typeof(MobileFullscreenUtility))._2).cctor_finished_or_no_cctor == 0) {
						pUVar2 = typeof(MobileFullscreenUtility).static_fields;
						iVar3 = pUVar2._nativeHeight;
					}
					if (height * width <= iVar3 * pUVar2._nativeWidth) {
						return;
					}
				}
			}
			pUVar2 = typeof(MobileFullscreenUtility).static_fields;
			pUVar2._nativeWidth = width;
			pUVar2._nativeHeight = height;
		}
		return;
	}

	[Token(Token = "0x60055E6")]
	[Address(RVA = "0x5CE0520", Offset = "0x5CDF520", VA = "0x5CE0520")]
	private static void RefreshResolutionInputScale()
	{
		// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility$$RefreshResolutionInputScale): clean
		uint uVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		Display pUVar5;
		float fVar6;

		iVar2 = Screen.width;
		MobileFullscreenUtility._lastScreenWidth = iVar2;
		iVar2 = Screen.height;
		MobileFullscreenUtility._lastScreenHeight = iVar2;
		pUVar5 = Display.main;
		if (pUVar5 != null) {
			iVar2 = pUVar5.systemWidth;
			pUVar5 = Display.main;
			if (pUVar5 != null) {
				iVar3 = pUVar5.systemHeight;
				if (iVar3 < iVar2) {
					iVar3 = iVar2;
				}
				pUVar5 = Display.main;
				if (pUVar5 != null) {
					iVar2 = pUVar5.systemWidth;
					pUVar5 = Display.main;
					if (pUVar5 != null) {
						iVar4 = pUVar5.systemHeight;
						if (iVar4 <= iVar2) {
							iVar2 = iVar4;
						}
						MobileFullscreenUtility.CacheNativeResolution(iVar3, iVar2);
						iVar3 = Screen.width;
						iVar2 = Screen.height;
						if (iVar3 < iVar2) {
							iVar2 = iVar3;
						}
						uVar1 = (typeof(MobileFullscreenUtility)._2).cctor_finished_or_no_cctor;
						if (iVar2 < 1) {
							fVar6 = 1.0;
							if (uVar1 == 0) {
								fVar6 = 1.0;
							}
						}
						else {
							if (uVar1 == 0) {
							}
							fVar6 = 1080.0 / (float)iVar2;
						}
						MobileFullscreenUtility._resolutionInputScale = fVar6;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055E7")]
	[Address(RVA = "0x5CE06A0", Offset = "0x5CDF6A0", VA = "0x5CE06A0")]
	private static void ScheduleUIRefreshAfterResolutionChange()
	{
		// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility$$ScheduleUIRefreshAfterResolutionChange): 1 lines keep C-only constructs
		BaseMenu __this;
		MobileFullscreenUtility.d__15<RefreshUIAfterResolutionChange> __this_00;
		int iVar1;

		iVar1 = MobileFullscreenUtility._uiRefreshRequestId + 1;
		MobileFullscreenUtility._uiRefreshRequestId = iVar1;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			iVar1 = MobileFullscreenUtility._uiRefreshRequestId;
			__this = UIManager.CurrentMenu;
		}
		else {
			__this = UIManager.CurrentMenu;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(MobileFullscreenUtility.d__15<RefreshUIAfterResolutionChange>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.requestId = iVar1;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x60055E8")]
	[Address(RVA = "0x5CE0860", Offset = "0x5CDF860", VA = "0x5CE0860")]
	[IteratorStateMachine(typeof(_003CRefreshUIAfterResolutionChange_003Ed__15))]
	private static IEnumerator RefreshUIAfterResolutionChange(int requestId)
	{
		// Lifted from source/cpp/Utility/MobileFullscreenUtility.c (Utility.MobileFullscreenUtility$$RefreshUIAfterResolutionChange): 1 lines keep C-only constructs
		MobileFullscreenUtility.d__15<RefreshUIAfterResolutionChange> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(MobileFullscreenUtility.d__15<RefreshUIAfterResolutionChange>));
		__this = new Object();
		__this.__1__state = 0;
		__this.requestId = requestId;
		return (IEnumerator)__this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/MobileFullscreenUtility.c.

	// Utility.MobileFullscreenUtility$$.cctor: clean
	static MobileFullscreenUtility()
	{
		Int32[] array;

		array = (Int32[])new int[8];
		RuntimeHelpers.InitializeArray((Array)array, FieldRva_PrivateImplementationDetails_3423A0FF744CD6C5D7ABC320BF7C5DC4BD9C9BAFD54BFDE46CC9B706D1F415AE);
		MobileFullscreenUtility.ShortSideOptions = array;
		MobileFullscreenUtility._resolutionInputScale = 1.0;
		return;
	}
}
