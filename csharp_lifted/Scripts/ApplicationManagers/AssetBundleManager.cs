// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AssetBundleManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/AssetBundleManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/AssetBundleManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UI;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Rendering;
using UnityEngine.Video;

namespace ApplicationManagers;

[Token(Token = "0x2000970")]
public class AssetBundleManager : MonoBehaviour
{
	[Token(Token = "0x2000972")]
	[CompilerGenerated]
	private sealed class _003CConfirmVideoPlayerUrls_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F7C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F7D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F7E")]
		[FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4002F7F")]
		[FieldOffset(Offset = "0x28")]
		private InGameMenu _003Cmenu_003E5__2;

		[Token(Token = "0x4002F80")]
		[FieldOffset(Offset = "0x30")]
		private List<VideoPlayer> _003CvideoPlayers_003E5__3;

		[Token(Token = "0x17000F3E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005869")]
			[Address(RVA = "0x5D0EAB0", Offset = "0x5D0DAB0", VA = "0x5D0EAB0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F3F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600586B")]
			[Address(RVA = "0x5D0EB00", Offset = "0x5D0DB00", VA = "0x5D0EB00", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005866")]
		[Address(RVA = "0x5D0B1D0", Offset = "0x5D0A1D0", VA = "0x5D0B1D0")]
		[DebuggerHidden]
		public _003CConfirmVideoPlayerUrls_003Ed__18(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005867")]
		[Address(RVA = "0x5D0E310", Offset = "0x5D0D310", VA = "0x5D0E310", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005868")]
		[Address(RVA = "0x5D0E320", Offset = "0x5D0D320", VA = "0x5D0E320", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$MoveNext): 19 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			int iVar3;
			Dictionary<object, object> __this_00;
			VideoPlayer __this_01;
			VideoPlayer[] pUVar4;
			String[] pSVar5;
			CustomAssetVideoUrlPopup pUVar6;
			bool bVar8;
			uint uVar9;
			int iVar10;
			InGameMenu pUVar11;
			Object pUVar12;
			List<VideoPlayer> pSVar13;
			List<string> urls;
			String[] pSVar14;
			Object[] pSVar15;
			String pSVar16;
			uint uVar17;
			InGameMenu pUVar18;
			uint uVar19;
			InGameMenu* ppUVar20;
			System_Collections_Generic_List_Enumerator_T__o SStack_78;
			AssetBundleManager.d__18<ConfirmVideoPlayerUrls> pAStack_60;
			InGameMenu* ppUStack_58;
			Object pUStack_50;
			List<VideoPlayer>* ppSStack_48;
			byte puStack_38;

			SStack_78._list = null;
			SStack_78._index = 0;
			SStack_78._version = 0;
			SStack_78._current = null;
			iVar3 = this.__1__state;
			if (iVar3 == 1) {
				this.__1__state = -1;
				pUVar11 = this._menu_5__2;
			}
			else {
				if (iVar3 != 0) {
					return false;
				}
				this.__1__state = -1;
				if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
					pUVar11 = (InGameMenu)UIManager.CurrentMenu;
					if (pUVar11 != null) goto label_05e0e487;
		label_05e0e5a5: ;
					this._menu_5__2 = null;
		label_05e0e5ef: ;
					ppUVar20 = &this._menu_5__2;
					pUVar11 = *ppUVar20;
				}
				else {
					pUVar11 = (InGameMenu)UIManager.CurrentMenu;
					if (pUVar11 == null) goto label_05e0e5a5;
		label_05e0e487: ;
					bVar2 = (typeof(InGameMenu)._2).typeHierarchyDepth;
					if ((((BaseMenu)pUVar11.klass)._2).typeHierarchyDepth < bVar2) {
						pUVar18 = null;
					}
					else {
						pUVar18 = null;
						if ((((BaseMenu)pUVar11.klass)._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(InGameMenu)) {
							pUVar18 = pUVar11;
						}
					}
					ppUVar20 = &this._menu_5__2;
					this._menu_5__2 = pUVar18;
					if ((((BaseMenu)pUVar11.klass)._2).typeHierarchyDepth < bVar2) goto label_05e0e5ef;
					pUVar11 = *ppUVar20;
				}
				if (pUVar11 == null) {
					return false;
				}
				if (((typeof(AssetBundleManager))._2).cctor_finished_or_no_cctor == 0 ) {
				}
				__this_00 = (Dictionary<object, object>)AssetBundleManager._bundles;
				if (__this_00 == null) goto label_05e0e9f4;
				pUVar12 = (Object)__this_00.get_Item((object)this.bundle);
				bVar8 = (pUVar12 == null);
				if (bVar8) {
					return false;
				}
				ppUStack_58 = &this._menu_5__2;
				pSVar13 = new List<VideoPlayer>();
				ppSStack_48 = &this._videoPlayers_5__3;
				this._videoPlayers_5__3 = pSVar13;
				urls = new List<string>();
				if ((pUVar12 == null) ||(pAStack_60 = this, pUStack_50 = pUVar12, pSVar14 = pUVar12.GetAllAssetNames(), pSVar14 == null)) goto label_05e0e9f4;
				uVar9 = (uint)pSVar14.Length;
				if (0 < (int)uVar9) {
					uVar19 = 0;
					do {
						if (uVar9 <= uVar19) {
		label_05e0e9f9: ;
							throw new IndexOutOfRangeException();
						}
						pSVar16 = pSVar14[(int)uVar19];
						if (pSVar16 == null) goto label_05e0e9f4;
						bVar8 = pSVar16.EndsWith(".prefab");
						if (bVar8) {
							pUVar12 = (Object)pUStack_50.LoadAsset<GameObject>(pSVar16);
							bVar8 = (pUVar12 == null);
							if (!bVar8) {
								if ((pUVar12 == null) ||(pSVar15 = pUVar12.GetComponentsInChildren<VideoPlayer>(true), pSVar15 == null)) goto label_05e0e9f4;
								uVar9 = (uint)pSVar15.Length;
								if (0 < (int)uVar9) {
									uVar17 = 0;
									do {
										if (uVar9 <= uVar17) goto label_05e0e9f9;
										__this_01 = (VideoPlayer)pSVar15[(int)uVar17];
										if (__this_01 == null) goto label_05e0e9f4;
										iVar10 = __this_01.source;
										if (iVar10 == 1) {
											pSVar16 = __this_01.url;
											bVar8 = String.IsNullOrEmpty(pSVar16);
											if (!bVar8) {
												pSVar13 = *ppSStack_48;
												if (pSVar13 == null) goto label_05e0e9f4;
												piVar1 = &pSVar13._version;
												*piVar1 = *piVar1 + 1;
												pUVar4 = pSVar13._items;
												if (pUVar4 == null) goto label_05e0e9f4;
												uVar9 = pSVar13._size;
												if (uVar9 < (uint)pUVar4.Length) {
													pSVar13._size = uVar9 + 1;
													pUVar4[(int)uVar9] = __this_01;
												}
												else {
													pSVar13.AddWithResize((object)__this_01);
												}
												pSVar16 = __this_01.url;
												if (urls == null) goto label_05e0e9f4;
												bVar8 = urls.Contains((object)pSVar16);
												if (!bVar8) {
													pSVar16 = __this_01.url;
													piVar1 = &urls._version;
													*piVar1 = *piVar1 + 1;
													pSVar5 = urls._items;
													if (pSVar5 == null) goto label_05e0e9f4;
													uVar9 = urls._size;
													if (uVar9 < (uint)pSVar5.Length) {
														urls._size = uVar9 + 1;
														pSVar5[(int)uVar9] = pSVar16;
													}
													else {
														urls.AddWithResize((object)pSVar16);
													}
												}
											}
										}
										uVar17 = uVar17 + 1;
										uVar9 = (uint)pSVar15.Length;
									} while ((int)uVar17 < (int)uVar9);
								}
							}
						}
						uVar19 = uVar19 + 1;
						uVar9 = (uint)pSVar14.Length;
					} while ((int)uVar19 < (int)uVar9);
				}
				this = pAStack_60;
				if (urls == null) goto label_05e0e9f4;
				if (urls._size == 0) {
					return false;
				}
				if ((*ppUStack_58 == null) ||(pUVar6 = ((*ppUStack_58).fields)._customAssetVideoUrlPopup, pUVar6 == null)) goto label_05e0e9f4;
				pUVar6.Show(urls);
				pUVar11 = this._menu_5__2;
			}
			if (pUVar11 != null) {
				pUVar6 = pUVar11._customAssetVideoUrlPopup;
				if (pUVar6 != null) {
					if (pUVar6.Done == false) {
						this.__2__current = null;
						this.__1__state = 1;
						return true;
					}
					if (pUVar6.Result != 1) {
						pSVar13 = this._videoPlayers_5__3;
						if (pSVar13 == null) goto label_05e0e9f4;
						SStack_78 = pSVar13.GetEnumerator() ;
						puStack_38 = (byte)&SStack_78;
						while (bVar8 = SStack_78.MoveNext()) {
							if ((VideoPlayer)SStack_78._current ==null) {
								throw new NullReferenceException();
							}
							SStack_78._current.url = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						SStack_78.Dispose();
					}
					return false;
				}
			}
		label_05e0e9f4: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600586A")]
		[Address(RVA = "0x5D0EAC0", Offset = "0x5D0DAC0", VA = "0x5D0EAC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AssetBundleManager_ConfirmVideoPlayerUrls_d__18_System_Collections_IEnumerat);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000973")]
	[CompilerGenerated]
	private sealed class _003CDownloadBundleFile_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F81")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F82")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F83")]
		[FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x4002F84")]
		[FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002F85")]
		[FieldOffset(Offset = "0x30")]
		private int _003Credirects_003E5__2;

		[Token(Token = "0x4002F86")]
		[FieldOffset(Offset = "0x38")]
		private UnityWebRequest _003Crequest_003E5__3;

		[Token(Token = "0x4002F87")]
		[FieldOffset(Offset = "0x40")]
		private UnityWebRequestAsyncOperation _003Cop_003E5__4;

		[Token(Token = "0x17000F40")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005870")]
			[Address(RVA = "0x5D0F1D0", Offset = "0x5D0E1D0", VA = "0x5D0F1D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F41")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005872")]
			[Address(RVA = "0x5D0F220", Offset = "0x5D0E220", VA = "0x5D0F220", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600586C")]
		[Address(RVA = "0x5D0AF50", Offset = "0x5D09F50", VA = "0x5D0AF50")]
		[DebuggerHidden]
		public _003CDownloadBundleFile_003Ed__15(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600586D")]
		[Address(RVA = "0x5D0EB10", Offset = "0x5D0DB10", VA = "0x5D0EB10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.IDisposable.Dispose): clean
			int iVar1;
			UnityWebRequest obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = this._request_5__3;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x600586E")]
		[Address(RVA = "0x5D0EBC0", Offset = "0x5D0DBC0", VA = "0x5D0EBC0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$MoveNext): 8 lines keep C-only constructs
			String pSVar1;
			Il2CppClass pIVar2;
			Il2CppRuntimeInterfaceOffsetPair pIVar3;
			AssetBundleManager.d__15<DownloadBundleFile> pAVar4;
			bool bVar5;
			int iVar6;
			UnityWebRequest pUVar7;
			DownloadHandlerFile __this_00;
			UnityWebRequestAsyncOperation pUVar8;
			long iVar9;
			String location;
			VirtualInvokeData pVVar10;
			ulong uVar11;
			MethodInfo method_00;
			ulong uVar12;
			long lVar13;
			AssetBundleManager.d__15<DownloadBundleFile> local_30;
			AssetBundleManager.d__15<DownloadBundleFile>* local_20;

			local_30 = this;
			local_20 = &local_30;
			iVar6 = this.__1__state;
			if (iVar6 == 1) {
				this.__1__state = -3;
				goto label_05e0ed41;
			}
			if (iVar6 != 0) {
				return false;
			}
			this.__1__state = -1;
			this._redirects_5__2 = 0;
			do {
				pSVar1 = this.url;
				pUVar7 = new UnityWebRequest(pSVar1);
				local_30._request_5__3 = pUVar7;
				local_30.__1__state = -3;
				pUVar7 = local_30._request_5__3;
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				pUVar7.redirectLimit = 0;
				pSVar1 = local_30.path;
				pUVar7 = local_30._request_5__3;
				__this_00 = new DownloadHandlerFile(pSVar1);
				if ((__this_00 == null) ||(__this_00.removeFileOnAbort = true, pUVar7 == null)) {
					throw new NullReferenceException();
				}
				pUVar7.downloadHandler = (DownloadHandler)__this_00;
				pUVar7 = local_30._request_5__3;
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = pUVar7.SendWebRequest();
				local_30._op_5__4 = pUVar8;
				this = local_30;
		label_05e0ed41: ;
				pUVar8 = this._op_5__4;
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				bVar5 = pUVar8.isDone;
				pUVar7 = local_30._request_5__3;
				if (!bVar5) {
					if (pUVar7 == null) {
						throw new NullReferenceException();
					}
					uVar11 = pUVar7.downloadedBytes;
					if (uVar11 < 0x3b9aca01) {
						local_30.__2__current = null;
						local_30.__1__state = 1;
						return true;
					}
		label_05e0ef7e: ;
					pAVar4 = local_30;
					pAVar4.__1__state = -1;
					pUVar7 = pAVar4._request_5__3;
					if (pUVar7 == null) {
						return false;
					}
					pIVar2 = (Il2CppClass)pUVar7.klass;
					uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar12 == 0) goto label_05e0eff3;
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar13 = 0;
					goto label_05e0efe0;
				}
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				iVar9 = pUVar7.responseCode;
				method_00 = (MethodInfo)(iVar9 - 300);
				if ((MethodInfo)0xffffffffffffff9b < method_00) goto label_05e0ef7e;
				if (iVar9 - 400U < 0xffffffffffffff9c) {
		label_05e0eed9: ;
					pAVar4 = local_30;
					pAVar4.__1__state = -1;
					pUVar7 = pAVar4._request_5__3;
					if (pUVar7 != null) {
						pIVar2 = (Il2CppClass)pUVar7.klass;
						uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar12 == 0) goto label_05e0ef53;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar13 = 0;
						goto label_05e0ef40;
					}
					break;
				}
				pUVar7 = local_30._request_5__3;
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				pSVar1 = local_30.url;
				location = pUVar7.GetResponseHeader("Location");
				pAVar4 = local_30;
				bVar5 = AssetBundleManager.TryGetRedirectUrl(pSVar1, location, ref pAVar4.url);
				if (!bVar5) goto label_05e0eed9;
				local_30._op_5__4 = null;
				pAVar4 = local_30;
				pAVar4.__1__state = -1;
				pUVar7 = pAVar4._request_5__3;
				if (pUVar7 != null) {
					pIVar2 = (Il2CppClass)pUVar7.klass;
					uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
					pUVar7.Dispose();
				}
				local_30._request_5__3 = null;
				iVar6 = local_30._redirects_5__2 + 1;
				local_30._redirects_5__2 = iVar6;
				this = local_30;
			} while (iVar6 < 4);
			goto label_05e0f042;
			while (true) {
				lVar13 = lVar13 + 0x10;
				if (!(uVar12 * 0x10 != lVar13)) break;
		label_05e0efe0: ;
				if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar13) == typeof(IDisposable)) {
					pVVar10 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
					goto label_05e0f07c;
				}
			}
		label_05e0eff3: ;
		label_05e0f07c: ;
			pUVar7.Dispose();
			return false;
			while (true) {
				lVar13 = lVar13 + 0x10;
				if (!(uVar12 * 0x10 != lVar13)) break;
		label_05e0ef40: ;
				if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar13) == typeof(IDisposable)) {
					pVVar10 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
					goto label_05e0f039;
				}
			}
		label_05e0ef53: ;
		label_05e0f039: ;
			pUVar7.Dispose();
		label_05e0f042: ;
			bVar5 = File.Exists(local_30.path);
			if (bVar5) {
				File.Delete(local_30.path);
				return false;
			}
			return false;
		}

		[Token(Token = "0x600586F")]
		[Address(RVA = "0x5D0F130", Offset = "0x5D0E130", VA = "0x5D0F130")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$<>m__Finally1): clean
			UnityWebRequest obj;

			this.__1__state = -1;
			obj = this._request_5__3;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x6005871")]
		[Address(RVA = "0x5D0F1E0", Offset = "0x5D0E1E0", VA = "0x5D0F1E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15_System_Collections_IEnumerator_R);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000974")]
	[CompilerGenerated]
	private sealed class _003CLoadBundle_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F88")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F89")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F8A")]
		[FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4002F8B")]
		[FieldOffset(Offset = "0x28")]
		public bool editor;

		[Token(Token = "0x4002F8C")]
		[FieldOffset(Offset = "0x30")]
		public string url;

		[Token(Token = "0x4002F8D")]
		[FieldOffset(Offset = "0x38")]
		private string _003Cpath_003E5__2;

		[Token(Token = "0x4002F8E")]
		[FieldOffset(Offset = "0x40")]
		private InGameMenu _003Cmenu_003E5__3;

		[Token(Token = "0x17000F42")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005876")]
			[Address(RVA = "0x5D0FA30", Offset = "0x5D0EA30", VA = "0x5D0FA30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F43")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005878")]
			[Address(RVA = "0x5D0FA80", Offset = "0x5D0EA80", VA = "0x5D0FA80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005873")]
		[Address(RVA = "0x5D0AEB0", Offset = "0x5D09EB0", VA = "0x5D0AEB0")]
		[DebuggerHidden]
		public _003CLoadBundle_003Ed__14(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005874")]
		[Address(RVA = "0x5D0F230", Offset = "0x5D0E230", VA = "0x5D0F230", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005875")]
		[Address(RVA = "0x5D0F240", Offset = "0x5D0E240", VA = "0x5D0F240", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$MoveNext): 4 lines keep C-only constructs
			CustomAssetUrlPopup pUVar1;
			Dictionary<object, object> pSVar2;
			BaseMenu obj;
			bool bVar3;
			String pSVar4;
			AssetBundleManager.d__15<DownloadBundleFile> __this_00;
			AssetBundle pUVar5;
			Object pUVar6;
			AssetBundleManager.d__18<ConfirmVideoPlayerUrls> __this_01;
			String pSVar7;
			object pIVar8;
			InGameMenu pUVar9;

			switch(this.__1__state) {
			case 0:
				this.__1__state = -1;
				pSVar4 = this.bundle;
				bVar3 = Util.IsValidFileName(pSVar4);
				if (!bVar3) {
					return false;
				}
				pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
				if (pSVar2 == null) break;
				bVar3 = pSVar2.ContainsKey((object)this.bundle);
				if (bVar3) {
					pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
					if (pSVar2 == null) break;
					pUVar6 = (Object)pSVar2.get_Item((object)this.bundle);
					bVar3 = (pUVar6 != null);
					if (bVar3) {
						return false;
					}
				}
				pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
				if (pSVar2 == null) break;
				pSVar2.set_Item((object)this.bundle, null);
				if (this.editor == false) {
					pSVar4 = String.Concat(FolderPaths.CustomAssetsLocal, "/", this.bundle);
					bVar3 = File.Exists(pSVar4);
					if (!bVar3) {
						pSVar4 = String.Concat(FolderPaths.CustomAssetsWeb, "/", this.bundle);
						this._path_5__2 = pSVar4;
						bVar3 = File.Exists(this._path_5__2);
						if (bVar3) {
							pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
							pSVar4 = this.bundle;
							pUVar5 = AssetBundle.LoadFromFile(this._path_5__2);
							if (pSVar2 != null) {
								pSVar2.set_Item((object)pSVar4, (object)pUVar5);
								pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
								if (pSVar2 != null) {
									pUVar6 = (Object)pSVar2.get_Item((object)this.bundle);
									bVar3 = (pUVar6 != null);
									if (bVar3) {
										pSVar4 = this.bundle;
										pIVar8 = (object)AssetBundleManager.ConfirmVideoPlayerUrls(pSVar4);
										this.__2__current = pIVar8;
										this.__1__state = 2;
										return true;
									}
									return false;
								}
							}
							break;
						}
						pSVar4 = this.url;
						bVar3 = AssetBundleManager.IsValidRemoteBundleUrl(pSVar4);
						if (!bVar3) {
							return false;
						}
						obj = UIManager.CurrentMenu;
						pUVar9 = (InGameMenu)il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
						this._menu_5__3 = pUVar9;
						il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
						pUVar9 = this._menu_5__3;
						if ((pUVar9 == null) ||(pUVar1 = pUVar9._customAssetUrlPopup, pUVar1 == null)) break;
						pUVar1.Show(this.url);
						pUVar9 = this._menu_5__3;
						goto joined_r0x05e0f4d5;
					}
				}
				pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
				pSVar4 = this.bundle;
				if ((typeof(FolderPaths)._2).cctor_finished_or_no_cctor == 0) {
					pSVar7 = this.bundle;
				}
				else {
					pSVar7 = pSVar4;
				}
				pSVar7 = String.Concat(FolderPaths.CustomAssetsLocal, "/", pSVar7);
				pUVar5 = AssetBundle.LoadFromFile(pSVar7);
				if (pSVar2 != null) {
					pSVar2.set_Item((object)pSVar4, (object)pUVar5);
					pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
					if (pSVar2 != null) {
						pUVar6 = (Object)pSVar2.get_Item((object)this.bundle);
						bVar3 = (pUVar6 != null);
						if (bVar3) {
							pSVar4 = this.bundle;
							pIVar8 = (object)AssetBundleManager.ConfirmVideoPlayerUrls(pSVar4);
							this.__2__current = pIVar8;
							this.__1__state = 1;
							return true;
						}
						return false;
					}
				}
				break;
			case 1:
			case 2:
				this.__1__state = -1;
				return false;
			case 3:
				this.__1__state = -1;
				pUVar9 = this._menu_5__3;
		joined_r0x05e0f4d5: ;
				if ((pUVar9 != null) &&(pUVar1 = pUVar9._customAssetUrlPopup, pUVar1 != null)) {
					if (pUVar1.Done == false) {
						this.__2__current = null;
						this.__1__state = 3;
					}
					else {
						if (pUVar1.Confirmed == false) {
		label_05e0f681: ;
							this._menu_5__3 = null;
							this._path_5__2 = null;
							return false;
						}
						pSVar4 = this.url;
						pSVar7 = this._path_5__2;
						if (((typeof(AssetBundleManager))._2).cctor_finished_or_no_cctor == 0) {
						}
						__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AssetBundleManager.d__15<DownloadBundleFile>));
						__this_00 = new Object();
						__this_00.__1__state = 0;
						__this_00.url = pSVar4;
						__this_00.path = pSVar7;
						this.__2__current = (object)__this_00;
						this.__1__state = 4;
					}
					return true;
				}
				break;
			case 4:
				this.__1__state = -1;
				bVar3 = File.Exists(this._path_5__2);
				if (!bVar3) {
					return false;
				}
				pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
				pSVar4 = this.bundle;
				pUVar5 = AssetBundle.LoadFromFile(this._path_5__2);
				if (pSVar2 != null) {
					pSVar2.set_Item((object)pSVar4, (object)pUVar5);
					pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
					if (pSVar2 != null) {
						pUVar6 = (Object)pSVar2.get_Item((object)this.bundle);
						bVar3 = (pUVar6 == null);
						if (!bVar3) {
							pSVar4 = this.bundle;
							__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AssetBundleManager.d__18<ConfirmVideoPlayerUrls>)) ;
							__this_01 = new Object();
							__this_01.__1__state = 0;
							__this_01.bundle = pSVar4;
							this.__2__current = (object)__this_01;
							this.__1__state = 5;
							return true;
						}
						File.Delete(this._path_5__2);
						goto label_05e0f681;
					}
				}
				break;
			case 5:
				this.__1__state = -1;
				goto label_05e0f681;
			default: ;
				return false;
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005877")]
		[Address(RVA = "0x5D0FA40", Offset = "0x5D0EA40", VA = "0x5D0FA40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AssetBundleManager_LoadBundle_d__14_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002F71")]
	[FieldOffset(Offset = "0x0")]
	private static AssetBundleManager _instance;

	[Token(Token = "0x4002F72")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Dictionary<string, UnityEngine.Object>> _cache;

	[Token(Token = "0x4002F73")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, AssetBundle> _bundles;

	[Token(Token = "0x4002F74")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<Material, Material> _convertedMaterials;

	[Token(Token = "0x4002F75")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ShaderTagId LightModeTag;

	[Token(Token = "0x4002F76")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string[] UniversalLightModes;

	[Token(Token = "0x4002F77")]
	private const string ErrorShaderName = "Hidden/InternalErrorShader";

	[Token(Token = "0x4002F78")]
	private const int MaxBundleRedirects = 3;

	[Token(Token = "0x4002F79")]
	private const ulong MaxBundleBytes = 1000000000uL;

	[Token(Token = "0x4002F7A")]
	[FieldOffset(Offset = "0x30")]
	private static Type[] AllowedComponents;

	[Token(Token = "0x6005850")]
	[Address(RVA = "0x5D08E60", Offset = "0x5D07E60", VA = "0x5D08E60")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$Init): clean
		AssetBundleManager pAVar1;

		pAVar1 = SingletonFactory.CreateSingleton<AssetBundleManager>((object)AssetBundleManager._instance);
		AssetBundleManager._instance = pAVar1;
		AssetBundleManager.ClearTemp();
		FolderPaths.TryCreateDirectory(FolderPaths.CustomAssetsLocal);
		FolderPaths.TryCreateDirectory(FolderPaths.CustomAssetsWeb);
		return;
	}

	[Token(Token = "0x6005851")]
	[Address(RVA = "0x5D0A9C0", Offset = "0x5D099C0", VA = "0x5D0A9C0")]
	private void OnApplicationQuit()
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$OnApplicationQuit): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075483ed == false) {
			Il2CppMethodInitialized_075483ed = true;
			uVar1 = (typeof(AssetBundleManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AssetBundleManager);
		}
		else {
			uVar1 = (typeof(AssetBundleManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AssetBundleManager);
		}
		typeof(AssetBundleManager) = (AssetBundleManager)klass;
		if (uVar1 == 0) {
			AssetBundleManager.ClearTemp();
			return;
		}
		AssetBundleManager.ClearTemp();
		return;
	}

	[Token(Token = "0x6005852")]
	[Address(RVA = "0x5D0A860", Offset = "0x5D09860", VA = "0x5D0A860")]
	private static void ClearTemp()
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$ClearTemp): clean
		bool bVar1;

		bVar1 = Directory.Exists(FolderPaths.CustomAssetsWeb);
		if (bVar1) {
			Directory.Delete(FolderPaths.CustomAssetsWeb, true);
		}
		return;
	}

	[Token(Token = "0x6005853")]
	[Address(RVA = "0x5D0AA20", Offset = "0x5D09A20", VA = "0x5D0AA20")]
	public static void Clear()
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$Clear): 9 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Object x;
		object obj;
		bool bVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o pSVar3;
		byte[] local_80 = new byte[16];
		Object local_70;
		byte[] local_68 = new byte[8];
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o pSStack_60;
		Object local_58;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;

		local_68 = (byte[])0x0;
		local_58 = null;
		local_48._dictionary = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._currentValue = null;
		pSVar1 = (Dictionary<object, object>)AssetBundleManager._cache;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pSVar1 = (Dictionary<object, object>)AssetBundleManager._bundles;
			if (pSVar1 != null) {
				pSVar3 = pSVar1.Values;
				if (pSVar3 != null) {
					local_80.GetEnumerator(pSVar3);
					local_58 = local_70;
					local_68 = (byte[])local_80._0_8_;
					pSStack_60 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_80._8_8_;
					local_80._0_8_ = null;
					local_80._8_8_ =(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_68;
					while(true) {
						bVar2 = local_68.MoveNext();
						x = local_58;
						if (!bVar2) break;
						bVar2 = (x != null);
						if (bVar2) {
							if (x == null) {
								throw new NullReferenceException();
							}
							x.Unload(true);
						}
					}
					local_68.Dispose();
					pSVar1 = (Dictionary<object, object>)AssetBundleManager._bundles;
					if (pSVar1 != null) {
						pSVar1.Clear();
						pSVar1 = (Dictionary<object, object>)AssetBundleManager._convertedMaterials;
						if (pSVar1 != null) {
							pSVar3 = pSVar1.Values;
							if (pSVar3 != null) {
								local_48 = pSVar3.GetEnumerator();
								local_80._0_8_ = null;
								local_80._8_8_ = &local_48;
								while(true) {
									bVar2 = local_48.MoveNext();
									obj = local_48._currentValue;
									if (!bVar2) break;
									Object.Destroy((Object)obj);
								}
								local_48.Dispose();
								pSVar1 = (Dictionary<object, object>)AssetBundleManager._convertedMaterials;
								if (pSVar1 != null) {
									pSVar1.Clear();
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005854")]
	[Address(RVA = "0x5D0AE20", Offset = "0x5D09E20", VA = "0x5D0AE20")]
	[IteratorStateMachine(typeof(_003CLoadBundle_003Ed__14))]
	public static IEnumerator LoadBundle(string bundle, string url, bool editor)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$LoadBundle): clean
		AssetBundleManager.d__14<LoadBundle> __this;

		__this = new AssetBundleManager.d__14<LoadBundle>();
		__this.__1__state = 0;
		__this.bundle = bundle;
		__this.url = url;
		__this.editor = editor;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6005855")]
	[Address(RVA = "0x5D0AED0", Offset = "0x5D09ED0", VA = "0x5D0AED0")]
	[IteratorStateMachine(typeof(_003CDownloadBundleFile_003Ed__15))]
	private static IEnumerator DownloadBundleFile(string url, string path)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$DownloadBundleFile): 1 lines keep C-only constructs
		AssetBundleManager.d__15<DownloadBundleFile> __this;

		__this = il2cpp_codegen_object_new(typeof(AssetBundleManager.d__15<DownloadBundleFile>)) ;
		__this = new Object();
		__this.__1__state = 0;
		__this.url = url;
		__this.path = path;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6005856")]
	[Address(RVA = "0x5D0AF70", Offset = "0x5D09F70", VA = "0x5D0AF70")]
	private static bool TryGetRedirectUrl(string url, string location, out string redirectUrl)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$TryGetRedirectUrl): 1 lines keep C-only constructs
		String url_00;
		bool bVar1;
		bool bVar2;
		Uri __this;
		MethodInfo method_00;
		Uri local_30;

		local_30 = null;
		*redirectUrl = null;
		bVar1 = String.IsNullOrEmpty(location);
		if (!bVar1) {
			__this = new Uri(url);
			bVar1 = Uri.TryCreate(__this, location, ref local_30);
			if (bVar1) {
				if (local_30 == null) {
					throw new NullReferenceException();
				}
				method_00 = (MethodInfo)local_30.AbsoluteUri;
				*redirectUrl = (String)method_00;
				url_00 = *redirectUrl;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6005857")]
	[Address(RVA = "0x5D0B080", Offset = "0x5D0A080", VA = "0x5D0B080")]
	internal static bool IsValidRemoteBundleUrl(string url)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$IsValidRemoteBundleUrl): clean
		bool bVar1;
		bool bVar2;
		String pSVar3;
		Uri local_20;

		local_20 = null;
		bVar2 = false;
		bVar1 = Uri.TryCreate(url, 1, ref local_20);
		if (bVar1) {
			if (local_20 == null) {
	label_05e0b152: ;
				throw new NullReferenceException();
			}
			pSVar3 = local_20.Scheme;
			bVar2 = false;
			bVar1 = (pSVar3 == Uri.UriSchemeHttps);
			if (bVar1) {
				if (local_20 == null) goto label_05e0b152;
				pSVar3 = local_20.Host;
				bVar2 = String.IsNullOrEmpty(pSVar3);
				bVar2 = !bVar2;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6005858")]
	[Address(RVA = "0x5D0B160", Offset = "0x5D0A160", VA = "0x5D0B160")]
	[IteratorStateMachine(typeof(_003CConfirmVideoPlayerUrls_003Ed__18))]
	private static IEnumerator ConfirmVideoPlayerUrls(string bundle)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$ConfirmVideoPlayerUrls): 1 lines keep C-only constructs
		AssetBundleManager.d__18<ConfirmVideoPlayerUrls> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AssetBundleManager.d__18<ConfirmVideoPlayerUrls>));
		__this = new Object();
		__this.__1__state = 0;
		__this.bundle = bundle;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6005859")]
	[Address(RVA = "0x5D0B1F0", Offset = "0x5D0A1F0", VA = "0x5D0B1F0")]
	public static List<string> GetAssetListFromBundle(string bundle)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$GetAssetListFromBundle): 2 lines keep C-only constructs
		int piVar1;
		Dictionary<object, object> pSVar2;
		bool bVar4;
		uint uVar5;
		List<string> __this;
		Object x;
		AssetBundle __this_00;
		String[] pSVar6;
		String pSVar7;
		String[] pSVar8;
		uint uVar9;

		__this = new List<string>();
		pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
		if (pSVar2 != null) {
			bVar4 = pSVar2.ContainsKey((object)bundle);
			if (!bVar4) {
				return __this;
			}
			pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
			if (pSVar2 != null) {
				x = (Object)pSVar2.get_Item((object)bundle);
				bVar4 = (x == null);
				if (bVar4) {
					return __this;
				}
				pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
				if (((pSVar2 != null) &&(__this_00 = pSVar2.get_Item((object)bundle), __this_00 != null)) &&(pSVar6 = __this_00.GetAllAssetNames(), pSVar6 != null)) {
					uVar5 = (uint)pSVar6.Length;
					if ((int)uVar5 < 1) {
						return __this;
					}
					uVar9 = 0;
					do {
						if (uVar5 <= uVar9) {
	label_05e0b52b: ;
							throw new IndexOutOfRangeException();
						}
						if ((pSVar6[(int)uVar9] == null) ||(pSVar7 = (pSVar6[(int)uVar9]).Trim(), pSVar7 == null)) break;
						bVar4 = pSVar7.EndsWith(".prefab");
						if (bVar4) {
							bVar4 = pSVar7.Contains(0x2f);
							if (bVar4) {
								pSVar8 = pSVar7.Split(0x2f, 0);
								if (pSVar8 == null) break;
								uVar5 = (uint)pSVar8.Length;
								if (uVar5 == 0) goto label_05e0b52b;
								pSVar7 = *(String*)((long)pSVar8.m_Items + ((long)(((ulong)uVar5 << 0x20) + -0x100000000) >> 0x1d));
								if (pSVar7 == null) break;
							}
							pSVar7 = pSVar7.Substring(0, pSVar7._stringLength + -7);
							pSVar7 = String.Concat("Custom/", bundle, "/", pSVar7);
							if (__this == null) break;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar8 = __this._items;
							if (pSVar8 == null) break;
							uVar5 = __this._size;
							if (uVar5 < (uint)pSVar8.Length) {
								__this._size = uVar5 + 1;
								pSVar8[(int)uVar5] = pSVar7;
							}
							else {
								__this.AddWithResize((object)pSVar7);
							}
						}
						uVar9 = uVar9 + 1;
						uVar5 = (uint)pSVar6.Length;
						if ((int)uVar5 <= (int)uVar9) {
							return __this;
						}
					} while(true);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600585A")]
	[Address(RVA = "0x5D0B530", Offset = "0x5D0A530", VA = "0x5D0B530")]
	public static List<string> GetAssetList()
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$GetAssetList): 8 lines keep C-only constructs
		Dictionary<object, object> __this;
		object pIVar1;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSVar2;
		bool bVar3;
		List<string> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		List<string> collection;
		MethodInfo pMVar4;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_58;
		byte local_38;

		local_58._dictionary = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._currentKey = null;
		__this_00 = new List<string>();
		__this = (Dictionary<object, object>)AssetBundleManager._bundles;
		if (__this != null) {
			__this_01 = __this.Keys;
			local_38 = (byte)&local_58;
			if (__this_01 != null) {
				local_58 = __this_01.GetEnumerator();
				pSVar2 = &local_58;
				if (__this_00 == null) {
					pMVar4 = MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_MoveNext;
					bVar3 = local_58.MoveNext();
					pIVar1 = local_58._currentKey;
					if (bVar3) {
						AssetBundleManager.GetAssetListFromBundle((String)pIVar1);
						throw new NullReferenceException();
					}
				}
				else {
					while (true) {
						local_38 = (byte)pSVar2;
						pMVar4 = MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_MoveNext;
						bVar3 = local_58.MoveNext();
						pIVar1 = local_58._currentKey;
						if (!(bVar3)) break;
						collection = AssetBundleManager.GetAssetListFromBundle((String)pIVar1);
						__this_00.AddRange((IEnumerable<T>)collection);
						pSVar2 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_38;
					}
				}
				local_58.Dispose();
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600585B")]
	[Address(RVA = "0x5D0B790", Offset = "0x5D0A790", VA = "0x5D0B790")]
	public static bool LoadedBundle(string bundle)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$LoadedBundle): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		Object x;

		if (Il2CppMethodInitialized_075483f7 == false) {
			Il2CppMethodInitialized_075483f7 = true;
			uVar1 = (typeof(AssetBundleManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AssetBundleManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
		}
		else {
			pSVar2 = *(Dictionary<object, object>*)((long)(typeof(AssetBundleManager)).static_fields + 0x10);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)bundle);
			if (!bVar3) {
				return false;
			}
			pSVar2 = (Dictionary<object, object>)AssetBundleManager._bundles;
			if (pSVar2 != null) {
				x = (Object)pSVar2.get_Item((object)bundle);
				bVar3 = (x != null);
				return bVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600585C")]
	[Address(RVA = "0x5D0B8C0", Offset = "0x5D0A8C0", VA = "0x5D0B8C0")]
	public static UnityEngine.Object LoadAsset(string bundle, string name)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$LoadAsset): 6 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		Object pUVar3;
		AssetBundle __this;
		Volume x;
		String pSVar4;
		Il2CppClass klass;
		Exception __this_00;
		MethodInfo lastManagedFrame;

		if (Il2CppMethodInitialized_075483f8 == false) {
			Il2CppMethodInitialized_075483f8 = true;
			if ((typeof(AssetBundleManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e0b97e;
	label_05e0b8f2: ;
			pSVar1 = (Dictionary<object, object>)AssetBundleManager._bundles;
		}
		else {
			if ((typeof(AssetBundleManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e0b8f2;
	label_05e0b97e: ;
			pSVar1 = (Dictionary<object, object>)AssetBundleManager._bundles;
		}
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)bundle);
			if (!bVar2) {
	label_05e0bb18: ;
				pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Custom bundle not loaded: ");
				pSVar4 = String.Concat(pSVar4, bundle);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_00 = (Exception)il2cpp_codegen_object_new(klass);
				__this_00 = new Exception(pSVar4);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_AssetBundleManager_LoadAsset);
				throw (object)__this_00;
			}
			pSVar1 = (Dictionary<object, object>)AssetBundleManager._bundles;
			if (pSVar1 != null) {
				pUVar3 = (Object)pSVar1.get_Item((object)bundle);
				bVar2 = (pUVar3 == null);
				if (bVar2) goto label_05e0bb18;
				pSVar1 = (Dictionary<object, object>)AssetBundleManager._bundles;
				if ((pSVar1 != null) &&(__this = pSVar1.get_Item((object)bundle), __this != null)) {
					pUVar3 = __this.LoadAsset(name);
					if ((pUVar3 != null) &&(name = (String)typeof(GameObject), pUVar3.klass != (Object)typeof(GameObject))) {
						throw new InvalidCastException();
					}
					AssetBundleManager.ValidateCustomPrefab((GameObject)pUVar3);
					AssetBundleManager.ConvertBuiltinPipelineMaterials((GameObject)pUVar3);
					ResourceManager.HideUnsupportedMeshParticles((GameObject)pUVar3);
					if (pUVar3 != null) {
						x = pUVar3.GetComponentInChildren<Volume>(true);
						bVar2 = ((Object)x != null);
						if (bVar2) {
							PostProcessingManager.EnableCustomVolumes();
						}
						return pUVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600585D")]
	[Address(RVA = "0x5D0C200", Offset = "0x5D0B200", VA = "0x5D0C200")]
	private static void ConvertBuiltinPipelineMaterials(GameObject prefab)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$ConvertBuiltinPipelineMaterials): 2 lines keep C-only constructs
		byte bVar1;
		Renderer __this;
		Terrain __this_00;
		bool bVar2;
		uint uVar3;
		Object[] pSVar4;
		Material[] value;
		ulong uVar5;
		MethodInfo pMVar6;
		object pIVar7;
		Material pUVar8;
		Shader shader;
		uint uVar9;
		ulong uVar10;
		long lVar11;

		if ((prefab != null) &&(pSVar4 = prefab.GetComponentsInChildren<Renderer>(true), pSVar4 != null)) {
			uVar3 = (uint)pSVar4.Length;
			if (0 < (int)uVar3) {
				uVar9 = 0;
				do {
					if (uVar3 <= uVar9) goto label_05e0c560;
					__this = (Renderer)pSVar4[(int)uVar9];
					if (__this == null) goto label_05e0c574;
					pMVar6 = null;
					value = __this.sharedMaterials;
					if (value == null) goto label_05e0c574;
					if (0 < (int)value.Length) {
						uVar5 = value.Length & 0xffffffff;
						lVar11 = 0x20;
						uVar10 = 0;
						do {
							if (uVar5 <= uVar10) goto label_05e0c560;
							pUVar8 = value[uVar10];
							pMVar6 = (MethodInfo)AssetBundleManager.ConvertBuiltinPipelineMaterial(pUVar8);
							if ((pMVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pMVar6, (((value.obj).klass)._1).element_class), pIVar7 == null)) {
								pIVar7 = new ArrayTypeMismatchException();
								throw pIVar7;
							}
							if ((uint)value.Length <= uVar10) goto label_05e0c560;
							value[uVar10] = (Material)pMVar6;
							uVar10 = uVar10 + 1;
							uVar3 = (uint)value.Length;
							uVar5 = (ulong)uVar3;
							lVar11 = lVar11 + 8;
						} while ((long)uVar10 < (long)(int)uVar3);
					}
					__this.sharedMaterials = value;
					uVar9 = uVar9 + 1;
					uVar3 = (uint)pSVar4.Length;
				} while ((int)uVar9 < (int)uVar3);
			}
			pSVar4 = prefab.GetComponentsInChildren<Terrain>(true);
			if (pSVar4 != null) {
				uVar3 = (uint)pSVar4.Length;
				if (0 < (int)uVar3) {
					uVar9 = 0;
					do {
						if (uVar3 <= uVar9) {
	label_05e0c560: ;
							throw new IndexOutOfRangeException();
						}
						__this_00 = (Terrain)pSVar4[(int)uVar9];
						if (__this_00 == null) goto label_05e0c574;
						pUVar8 = __this_00.materialTemplate;
						bVar2 = ((Object)pUVar8 == null);
						if (bVar2) {
	label_05e0c4e0: ;
							pUVar8 = (Material)ResourceManager.LoadAsset("Map/Materials", "TerrainMaterial", true, false);
							if (pUVar8 != null) {
								bVar1 = (typeof(Material)._2).typeHierarchyDepth;
								if (((pUVar8.klass._2).typeHierarchyDepth < bVar1) ||((pUVar8.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Material))) {
									throw new InvalidCastException();
								}
							}
							__this_00.materialTemplate = pUVar8;
							__this_00.drawInstanced = false;
						}
						else {
							pUVar8 = __this_00.materialTemplate;
							if (pUVar8 == null) goto label_05e0c574;
							pMVar6 = null;
							shader = pUVar8.shader;
							if ((typeof(AssetBundleManager)._2).cctor_finished_or_no_cctor == 0) {
								bVar2 = AssetBundleManager.IsBuiltinPipelineShader(shader);
								if (bVar2) goto label_05e0c4e0;
							}
							else {
								bVar2 = AssetBundleManager.IsBuiltinPipelineShader(shader);
								if (bVar2) goto label_05e0c4e0;
							}
						}
						uVar9 = uVar9 + 1;
						uVar3 = (uint)pSVar4.Length;
					} while ((int)uVar9 < (int)uVar3);
				}
				return;
			}
		}
	label_05e0c574: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600585E")]
	[Address(RVA = "0x5D0C640", Offset = "0x5D0B640", VA = "0x5D0C640")]
	private static Material ConvertBuiltinPipelineMaterial(Material material)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$ConvertBuiltinPipelineMaterial): 2 lines keep C-only constructs
		byte bVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		Shader shader;
		String pSVar4;
		Material pUVar5;
		Material __this;
		Texture value;
		float value_00;
		Vector2 UVar7;
		Color value_01;
		Material local_30;

		local_30 = null;
		bVar3 = ((Object)material == null);
		if (bVar3) {
			return material;
		}
		if (material != null) {
			shader = material.shader;
			if ((typeof(AssetBundleManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = AssetBundleManager.IsBuiltinPipelineShader(shader);
			}
			else {
				bVar3 = AssetBundleManager.IsBuiltinPipelineShader(shader);
			}
			if (!bVar3) {
				return material;
			}
			if (((typeof(AssetBundleManager))._2).cctor_finished_or_no_cctor == 0 ) {
			}
			pSVar2 = (Dictionary<object, object>)AssetBundleManager._convertedMaterials;
			if (pSVar2 != null) {
				bVar3 = pSVar2.TryGetValue((object)material, (object*)&local_30);
				if (!bVar3) {
					pSVar4 = AssetBundleManager.GetBasicMaterialName(material);
					pUVar5 = (Material)ResourceManager.LoadAsset("Map/Materials", pSVar4, true, false) ;
					if (pUVar5 != null) {
						bVar1 = (typeof(Material)._2).typeHierarchyDepth;
						if (((pUVar5.klass._2).typeHierarchyDepth < bVar1) ||((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Material))) {
							throw new InvalidCastException();
						}
					}
					__this = new Material(pUVar5);
					local_30 = __this;
					pSVar4 = material.name;
					if (__this == null) goto label_05e0c9b8;
					__this.name = pSVar4;
					bVar3 = material.HasProperty("_Color");
					pUVar5 = local_30;
					if (bVar3) {
						value_01 = material.GetColor("_Color");
						if (pUVar5 == null) goto label_05e0c9b8;
						pUVar5.color = value_01;
					}
					bVar3 = material.HasProperty("_MainTex");
					pUVar5 = local_30;
					if (bVar3) {
						value = material.mainTexture;
						if (pUVar5 == null) goto label_05e0c9b8;
						pUVar5.mainTexture = value;
						pUVar5 = local_30;
						UVar7 = material.mainTextureScale;
						if (pUVar5 == null) goto label_05e0c9b8;
						pUVar5.mainTextureScale = UVar7;
						pUVar5 = local_30;
						UVar7 = material.mainTextureOffset;
						if (pUVar5 == null) goto label_05e0c9b8;
						pUVar5.mainTextureOffset = UVar7;
					}
					bVar3 = material.HasProperty("_Cutoff");
					pUVar5 = local_30;
					if (bVar3) {
						value_00 = material.GetFloat("_Cutoff");
						if (pUVar5 == null) goto label_05e0c9b8;
						pUVar5.SetFloat("_Cutoff", value_00);
					}
					pSVar2 = (Dictionary<object, object>)AssetBundleManager._convertedMaterials;
					if (pSVar2 == null) goto label_05e0c9b8;
					pSVar2.Add((object)material, (object)local_30);
				}
				return local_30;
			}
		}
	label_05e0c9b8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600585F")]
	[Address(RVA = "0x5D0C9D0", Offset = "0x5D0B9D0", VA = "0x5D0C9D0")]
	private static bool IsBuiltinPipelineShader(Shader shader)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$IsBuiltinPipelineShader): 6 lines keep C-only constructs
		String[] array;
		bool bVar1;
		bool bVar2;
		int iVar3;
		ShaderTagId UVar4;
		ulong in_RAX;
		String pSVar5;
		AssetBundleManager.c__DisplayClass25_0 __this;
		Predicate<T> match;
		int passIndex;
		ulong local_38;

		local_38._4_4_ = (uint)((ulong)in_RAX >> 0x20);
		local_38 = (ulong)local_38._4_4_ << 0x20;
		if (shader == null) {
	label_05e0cbc9: ;
			throw new NullReferenceException();
		}
		pSVar5 = shader.name;
		bVar1 = (pSVar5 == "Hidden/InternalErrorShader");
		bVar2 = true;
		if ((!bVar1) && (bVar1 = shader.isSupported)) {
			passIndex = 0;
			iVar3 = shader.passCount;
			if (0 < iVar3) {
				do {
					__this = il2cpp_codegen_object_new(typeof(AssetBundleManager.c__DisplayClass25_0));
					__this = new Object();
					UVar4 = shader.FindPassTagValue(passIndex, (ShaderTagId)(AssetBundleManager.LightModeTag). fields.m_Id);
					local_38 = CONCAT44(local_38._4_4_, UVar4.m_Id);
					pSVar5 = local_38.name;
					if (__this == null) goto label_05e0cbc9;
					__this.lightMode = pSVar5;
					bVar2 = String.IsNullOrEmpty(__this.lightMode);
					if (bVar2) {
						return false;
					}
					array = AssetBundleManager.UniversalLightModes;
					match = new Predicate<string>((object)__this, (intptr_t) MethodInfo_ApplicationManagers_AssetBundleManager_c__DisplayClass25_0_IsBuiltinPipelineShader_b__0);
					bVar2 = Array.Exists<string>((Object[])array, match);
					if (bVar2) {
						return false;
					}
					passIndex = passIndex + 1;
					iVar3 = shader.passCount;
				} while (passIndex < iVar3);
			}
			iVar3 = shader.passCount;
			bVar2 = 0 < iVar3;
		}
		return bVar2;
	}

	[Token(Token = "0x6005860")]
	[Address(RVA = "0x5D0CE30", Offset = "0x5D0BE30", VA = "0x5D0CE30")]
	private static string GetBasicMaterialName(Material material)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$GetBasicMaterialName): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		Object pUVar3;
		String pSVar4;
		String* ppSVar5;
		float fVar6;

		if (((material == null) ||(pUVar3 = (Object)material.shader, pUVar3 == null)) ||(pSVar4 = pUVar3.name, pSVar4 == null)) {
	label_05e0cfae: ;
			throw new NullReferenceException();
		}
		bVar1 = pSVar4.Contains("Particle");
		if (!bVar1) {
			iVar2 = material.renderQueue;
			if (iVar2 < 0x9c5) {
				iVar2 = material.renderQueue;
				if (iVar2 < 0x992) {
					ppSVar5 = &"BasicMaterial";
				}
				else {
					ppSVar5 = &"CutoutMaterial";
				}
			}
			else {
				ppSVar5 = &"TransparentMaterial";
			}
			goto label_05e0cfa5;
		}
		pUVar3 = (Object)material.shader;
		if ((pUVar3 == null) ||(pSVar4 = pUVar3.name, pSVar4 == null)) goto label_05e0cfae;
		bVar1 = pSVar4.Contains("Add");
		if (!bVar1) {
			bVar1 = material.HasProperty("_DstBlend");
			ppSVar5 = &"ParticleMaterial";
			if (!bVar1) goto label_05e0cfa5;
			fVar6 = material.GetFloat("_DstBlend");
			if ((fVar6 != 1.0) || (NAN(fVar6))) goto label_05e0cfa5;
		}
		ppSVar5 = &"ParticleAdditiveMaterial";
	label_05e0cfa5: ;
		return *ppSVar5;
	}

	[Token(Token = "0x6005861")]
	[Address(RVA = "0x5D0BB80", Offset = "0x5D0AB80", VA = "0x5D0BB80")]
	public static void ValidateCustomPrefab(GameObject prefab)
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$ValidateCustomPrefab): 14 lines keep C-only constructs
		byte bVar1;
		Animation __this;
		Type[] pSVar2;
		Animation pUVar3;
		Il2CppType handle;
		bool bVar5;
		sbyte cVar6;
		uint uVar7;
		Type pSVar8;
		Component[] pUVar9;
		ulong uVar10;
		Type pSVar11;
		object pIVar12;
		AnimationState __this_00;
		AnimationClip pUVar14;
		AnimationEvent[] pUVar15;
		Object x;
		RuntimeAnimatorController __this_01;
		AnimationClip[] pUVar16;
		String pSVar17;
		String str0;
		String str2;
		Il2CppClass pIVar18;
		Exception __this_02;
		MethodInfo lastManagedFrame;
		uint uVar19;
		ulong uVar21;
		object local_60;
		object local_58;
		Component[] local_50;
		object* local_40;
		object* local_38;

		handle = TypeRef_UnityEngine_Component;
		local_60 = null;
		local_58 = null;
		pSVar8 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if ((prefab == null) ||(pUVar9 = prefab.GetComponentsInChildren(pSVar8, true), pUVar9 == null)) {
	label_05e0c130: ;
			throw new NullReferenceException();
		}
		if ((int)pUVar9.Length < 1) {
			return;
		}
		uVar10 = pUVar9.Length & 0xffffffff;
		uVar21 = 0;
		local_50 = pUVar9;
	label_05e0bcb7: ;
		if (uVar10 <= uVar21) {
	label_05e0c127: ;
			throw new IndexOutOfRangeException();
		}
		__this = (Animation)local_50[uVar21];
		pSVar2 = AssetBundleManager.AllowedComponents;
		if (pSVar2 == null) goto label_05e0c130;
		uVar7 = (uint)pSVar2.Length;
		if (__this == null) {
			if ((int)uVar7 < 1) {
	label_05e0c135: ;
				pSVar8 = __this.GetType();
				pSVar17 = (String)pSVar8.unknown();
				str0 = il2cpp_codegen_get_runtime_metadata(&"Disallowed component (");
				str2 = il2cpp_codegen_get_runtime_metadata(&")");
				pSVar17 = String.Concat(str0, pSVar17, str2);
				pIVar18 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_02 = (Exception)il2cpp_codegen_object_new(pIVar18);
				__this_02 = new Exception(pSVar17);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_AssetBundleManager_ValidateCustomPrefab);
				throw (object)__this_02;
			}
			goto label_05e0c130;
		}
		if ((int)uVar7 < 1) goto label_05e0c135;
		uVar19 = 0;
		while(true) {
			if (uVar7 <= uVar19) goto label_05e0c127;
			pSVar8 = pSVar2[(int)uVar19];
			pSVar11 = __this.GetType();
			if (pSVar8 == null) goto label_05e0c130;
			bVar5 = pSVar8.IsAssignableFrom(pSVar11);
			if (bVar5) break;
			uVar19 = uVar19 + 1;
			uVar7 = (uint)pSVar2.Length;
			if ((int)uVar7 <= (int)uVar19) goto label_05e0c135;
		}
		pUVar3 = __this.klass;
		if (pUVar3 == typeof(Animation)) {
			pIVar12 = (object)__this.GetEnumerator();
			local_40 = &local_60;
			local_38 = &local_58;
			do {
				local_60 = pIVar12;
				if (pIVar12 == null) {
					throw new NullReferenceException();
				}
				pIVar18 = pIVar12.klass;
				uVar10 = (ulong)(pIVar18._2).interface_offsets_count;
				cVar6 = pIVar12.Dispose();
				pIVar12 = local_60;
				if (cVar6 == false) goto label_05e0bf20;
				if (local_60 == null) {
					throw new NullReferenceException();
				}
				pIVar18 = local_60.klass;
				uVar10 = (ulong)(pIVar18._2).interface_offsets_count;
				__this_00 = (AnimationState)pIVar12.Dispose();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				if (__this_00.klass != typeof(AnimationState)) {
					throw new InvalidCastException();
				}
				pUVar14 = __this_00.clip;
				pUVar15 = (AnimationEvent[])new AnimationEvent[0];
				if (pUVar14 == null) {
					throw new NullReferenceException();
				}
				pUVar14.events = pUVar15;
				pIVar12 = local_60;
			} while(true);
		}
		bVar1 = (typeof(Animator)._2).typeHierarchyDepth;
		if ((bVar1 <= (pUVar3._2).typeHierarchyDepth) &&((pUVar3._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Animator))) {
			x = (Object)__this.runtimeAnimatorController;
			bVar5 = (x != null);
			if (bVar5) {
				__this_01 = __this.runtimeAnimatorController;
				if ((__this_01 != null) &&(pUVar16 = __this_01.animationClips, pUVar16 != null)) {
					uVar7 = (uint)pUVar16.Length;
					if (0 < (int)uVar7) {
						uVar19 = 0;
						do {
							if (uVar7 <= uVar19) goto label_05e0c127;
							pUVar14 = pUVar16[(int)uVar19];
							pUVar15 = (AnimationEvent[])new AnimationEvent[0];
							if (pUVar14 == null) goto label_05e0c130;
							pUVar14.events = pUVar15;
							uVar19 = uVar19 + 1;
							uVar7 = (uint)pUVar16.Length;
						} while ((int)uVar19 < (int)uVar7);
					}
					goto label_05e0bca0;
				}
				goto label_05e0c130;
			}
		}
	label_05e0bca0: ;
		uVar21 = uVar21 + 1;
		uVar7 = (uint)local_50.Length;
		uVar10 = (ulong)uVar7;
		if ((long)(int)uVar7 <= (long)uVar21) {
			return;
		}
		goto label_05e0bcb7;
	label_05e0bf20: ;
		pIVar12 = (local_60 as IDisposable);
		local_58 = pIVar12;
		if (pIVar12 != null) {
			pIVar18 = pIVar12.klass;
			uVar10 = (ulong)(pIVar18._2).interface_offsets_count;
			pIVar12.Dispose();
		}
		goto label_05e0bca0;
	}

	[Token(Token = "0x6005862")]
	[Address(RVA = "0x5D0CFD0", Offset = "0x5D0BFD0", VA = "0x5D0CFD0")]
	public AssetBundleManager()
	{
		// Lifted from source/cpp/ApplicationManagers/AssetBundleManager.c (ApplicationManagers.AssetBundleManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/AssetBundleManager.c.

	// ApplicationManagers.AssetBundleManager.<>c__DisplayClass25_0$$.ctor: clean
	private void c__DisplayClass25_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.AssetBundleManager$$.cctor: 56 lines keep C-only constructs
	static AssetBundleManager()
	{
		il2cpp_array_size_t piVar1;
		ApplicationManagers_AssetBundleManager_StaticFields pAVar2;
		Il2CppType handle;
		ulong in_RAX;
		Dictionary<string, Dictionary<string, Object>> __this;
		Dictionary<string, AssetBundle> __this_00;
		Dictionary<Material, Material> __this_01;
		String[] pSVar3;
		Type[] pSVar4;
		Type pSVar5;
		object pIVar6;
		ulong local_28;

		local_28._4_4_ = (uint)((ulong)in_RAX >> 0x20);
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, Object>>));
		__this = new Dictionary<object, object>();
		pAVar2 = typeof(AssetBundleManager).static_fields;
		pAVar2._cache = __this;
		__this_00 = new Dictionary<string, AssetBundle>();
		pAVar2 = typeof(AssetBundleManager).static_fields;
		pAVar2._bundles = __this_00;
		__this_01 = new Dictionary<Material, Material>();
		pAVar2 = typeof(AssetBundleManager).static_fields;
		pAVar2._convertedMaterials = __this_01;
		local_28 = (ulong)local_28._4_4_ << 0x20;
		local_28 = new ShaderTagId("LightMode");
		(AssetBundleManager.LightModeTag).m_Id =(int32_t)local_28._0_4_;
		pSVar3 = (String[])new string[5];
		if (pSVar3 == null) {
	label_05e0e2eb: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar3.Length != 0) {
			pSVar3[0] = "SRPDefaultUnlit";
			if ((pSVar3.Length & 0xfffffffe) == 0) goto label_05e0e2d7;
			pSVar3[1] = "UniversalForward";
			if ((uint)pSVar3.Length < 3) goto label_05e0e2d7;
			pSVar3[2] = "UniversalForwardOnly";
			if ((pSVar3.Length & 0xfffffffc) == 0) goto label_05e0e2d7;
			pSVar3[3] = "UniversalGBuffer";
			if ((uint)pSVar3.Length < 5) goto label_05e0e2d7;
			pSVar3[4] = "Universal2D";
			pAVar2 = typeof(AssetBundleManager).static_fields;
			pAVar2.UniversalLightModes = pSVar3;
			pSVar4 = (Type[])new Type[0x2c];
			handle = TypeRef_UnityEngine_Transform;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (pSVar4 == null) goto label_05e0e2eb;
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((int)pSVar4.Length == 0) goto label_05e0e2d7;
			pSVar4[0] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Collider);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			piVar1 = &pSVar4.Length;
			if ((*piVar1 & 0xfffffffe) == 0) goto label_05e0e2d7;
			pSVar4[1] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_MeshFilter);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 3) goto label_05e0e2d7;
			pSVar4[2] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Animation);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((*piVar1 & 0xfffffffc) == 0) goto label_05e0e2d7;
			pSVar4[3] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Animator);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 5) goto label_05e0e2d7;
			pSVar4[4] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioSource);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 6) goto label_05e0e2d7;
			pSVar4[5] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioClip);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 7) goto label_05e0e2d7;
			pSVar4[6] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioChorusFilter);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((*piVar1 & 0xfffffff8) == 0) goto label_05e0e2d7;
			pSVar4[7] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioDistortionFilter);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 9) goto label_05e0e2d7;
			pSVar4[8] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioEchoFilter);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 10) goto label_05e0e2d7;
			pSVar4[9] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioHighPassFilter) ;
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0xb) goto label_05e0e2d7;
			pSVar4[10] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioListener);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0xc) goto label_05e0e2d7;
			pSVar4[0xb] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioLowPassFilter);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0xd) goto label_05e0e2d7;
			pSVar4[0xc] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioReverbFilter);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0xe) goto label_05e0e2d7;
			pSVar4[0xd] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_AudioReverbZone);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0xf) goto label_05e0e2d7;
			pSVar4[0xe] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_ParticleSystem);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((*piVar1 & 0xfffffff0) == 0) goto label_05e0e2d7;
			pSVar4[0xf] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_ParticleSystemForceField);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x11) goto label_05e0e2d7;
			pSVar4[0x10] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_LensFlare);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x12) goto label_05e0e2d7;
			pSVar4[0x11] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Rendering_LensFlareComponentSRP);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x13) goto label_05e0e2d7;
			pSVar4[0x12] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Rendering_Volume);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x14) goto label_05e0e2d7;
			pSVar4[0x13] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_LineRenderer);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x15) goto label_05e0e2d7;
			pSVar4[0x14] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Projector);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x16) goto label_05e0e2d7;
			pSVar4[0x15] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_TrailRenderer);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x17) goto label_05e0e2d7;
			pSVar4[0x16] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Renderer);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x18) goto label_05e0e2d7;
			pSVar4[0x17] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Terrain);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x19) goto label_05e0e2d7;
			pSVar4[0x18] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_ArticulationBody);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x1a) goto label_05e0e2d7;
			pSVar4[0x19] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CharacterController) ;
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x1b) goto label_05e0e2d7;
			pSVar4[0x1a] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Cloth);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x1c) goto label_05e0e2d7;
			pSVar4[0x1b] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_ConstantForce);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x1d) goto label_05e0e2d7;
			pSVar4[0x1c] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Joint);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x1e) goto label_05e0e2d7;
			pSVar4[0x1d] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Rigidbody);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x1f) goto label_05e0e2d7;
			pSVar4[0x1e] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Light);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((*piVar1 & 0xffffffe0) == 0) goto label_05e0e2d7;
			pSVar4[0x1f] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Rendering_Universal_UniversalAdditionalLightData);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x21) goto label_05e0e2d7;
			pSVar4[0x20] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_LODGroup);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x22) goto label_05e0e2d7;
			pSVar4[0x21] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Video_VideoPlayer);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x23) goto label_05e0e2d7;
			pSVar4[0x22] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_WindZone);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x24) goto label_05e0e2d7;
			pSVar4[0x23] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_ReflectionProbe);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x25) goto label_05e0e2d7;
			pSVar4[0x24] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Skybox);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x26) goto label_05e0e2d7;
			pSVar4[0x25] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_LightProbeGroup);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x27) goto label_05e0e2d7;
			pSVar4[0x26] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_LightProbeProxyVolume);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x28) goto label_05e0e2d7;
			pSVar4[0x27] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_OcclusionArea);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x29) goto label_05e0e2d7;
			pSVar4[0x28] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_OcclusionPortal);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if ((uint)*piVar1 < 0x2a) goto label_05e0e2d7;
			pSVar4[0x29] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Rendering_SortingGroup);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05e0e2dc;
			}
			if (0x2a < (uint)*piVar1) {
				pSVar4[0x2a] = pSVar5;
				pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_TextMesh);
				if (pSVar5 != null) {
					pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
					if (pIVar6 == null) {
	label_05e0e2dc: ;
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
				}
				if (0x2b < (uint)*piVar1) {
					pSVar4[0x2b] = pSVar5;
					pAVar2 = typeof(AssetBundleManager).static_fields;
					pAVar2.AllowedComponents = pSVar4;
					return;
				}
			}
		}
	label_05e0e2d7: ;
		throw new IndexOutOfRangeException();
	}

	// ApplicationManagers.AssetBundleManager.<>c__DisplayClass25_0$$<IsBuiltinPipelineShader>b__0: clean
	private bool c__DisplayClass25_0__IsBuiltinPipelineShader_b__0(String mode)
	{
		bool bVar1;

		bVar1 = String.Equals(mode, this.lightMode, 5);
		return bVar1;
	}
}
