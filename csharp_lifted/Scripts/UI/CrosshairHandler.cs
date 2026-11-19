// ==================== AoTTG2 cross-reference ====================
// Type: UI.CrosshairHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CrosshairHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CrosshairHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;
using Utility;

namespace UI;

[Token(Token = "0x2000830")]
internal class CrosshairHandler : MonoBehaviour
{
	[Token(Token = "0x2000831")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40028DD")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40028DE")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40028DF")]
		[FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x40028E0")]
		[FieldOffset(Offset = "0x28")]
		public CrosshairHandler _003C_003E4__this;

		[Token(Token = "0x40028E1")]
		[FieldOffset(Offset = "0x30")]
		private CoroutineWithData _003Ccwd_003E5__2;

		[Token(Token = "0x17000D80")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004E24")]
			[Address(RVA = "0x5C1BB70", Offset = "0x5C1AB70", VA = "0x5C1BB70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D81")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004E26")]
			[Address(RVA = "0x5C1BBC0", Offset = "0x5C1ABC0", VA = "0x5C1BBC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004E21")]
		[Address(RVA = "0x5C1B890", Offset = "0x5C1A890", VA = "0x5C1B890")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__9(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler.<LoadSkin>d__9$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004E22")]
		[Address(RVA = "0x5C1B8B0", Offset = "0x5C1A8B0", VA = "0x5C1B8B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler.<LoadSkin>d__9$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004E23")]
		[Address(RVA = "0x5C1B8C0", Offset = "0x5C1A8C0", VA = "0x5C1B8C0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler.<LoadSkin>d__9$$MoveNext): 6 lines keep C-only constructs
			String* targetAddress;
			int iVar1;
			CrosshairHandler obj;
			Texture2D pUVar2;
			RawImage pUVar4;
			bool bVar5;
			String pSVar6;
			IEnumerator target;
			CoroutineWithData pUVar7;

			iVar1 = this.__1__state;
			obj = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				pUVar7 = this._cwd_5__2;
				if (pUVar7 == null) goto label_05d1bb62;
				pUVar2 = (Texture2D)pUVar7.Result;
				if (pUVar2 == null) {
					CrosshairHandler._crosshairSkinTexture = null;
				}
				else if ((pUVar2.klass != typeof(Texture2D)) ||(CrosshairHandler._crosshairSkinTexture = pUVar2, pUVar2.klass != typeof(Texture2D))) {
					throw new InvalidCastException();
				}
				CrosshairHandler._crosshairSkinURL = this.url;
				this._cwd_5__2 = null;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				pSVar6 = this.url;
				if (pSVar6 == null) goto label_05d1bb62;
				targetAddress = &this.url;
				pSVar6 = pSVar6.Trim();
				*targetAddress = pSVar6;
				pSVar6 = *targetAddress;
				bVar5 = TextureDownloader.ValidTextureURL(pSVar6, false);
				if (!bVar5) {
					return false;
				}
				bVar5 = (*targetAddress != CrosshairHandler._crosshairSkinURL);
				if (bVar5) {
					pSVar6 = *targetAddress;
					target = TextureDownloader.DownloadTexture((MonoBehaviour)obj, pSVar6, false, 2000000, false);
					pUVar7 = new CoroutineWithData((MonoBehaviour)obj, target);
					this._cwd_5__2 = pUVar7;
					pUVar7 = this._cwd_5__2;
					if (pUVar7 != null) {
						this.__2__current = (object)pUVar7._Coroutine_k__BackingField;
						this.__1__state = 1;
						return true;
					}
					goto label_05d1bb62;
				}
			}
			if ((obj != null) &&(pUVar4 = obj._crosshairImageWhite, pUVar4 != null)) {
				pUVar4.texture = (Texture)CrosshairHandler._crosshairSkinTexture;
				pUVar4 = obj._crosshairImageRed;
				if (pUVar4 != null) {
					pUVar4.texture = (Texture)CrosshairHandler._crosshairSkinTexture;
					return false;
				}
			}
		label_05d1bb62: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004E25")]
		[Address(RVA = "0x5C1BB80", Offset = "0x5C1AB80", VA = "0x5C1BB80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_CrosshairHandler_LoadSkin_d__9_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40028D5")]
	[FieldOffset(Offset = "0x20")]
	public RawImage _crosshairImageWhite;

	[Token(Token = "0x40028D6")]
	[FieldOffset(Offset = "0x28")]
	public RawImage _crosshairImageRed;

	[Token(Token = "0x40028D7")]
	[FieldOffset(Offset = "0x30")]
	public Text _crosshairLabelWhite;

	[Token(Token = "0x40028D8")]
	[FieldOffset(Offset = "0x38")]
	public Text _crosshairLabelRed;

	[Token(Token = "0x40028D9")]
	[FieldOffset(Offset = "0x40")]
	public Image _arrowLeft;

	[Token(Token = "0x40028DA")]
	[FieldOffset(Offset = "0x48")]
	public Image _arrowRight;

	[Token(Token = "0x40028DB")]
	[FieldOffset(Offset = "0x0")]
	private static Texture2D _crosshairSkinTexture;

	[Token(Token = "0x40028DC")]
	[FieldOffset(Offset = "0x8")]
	private static string _crosshairSkinURL;

	[Token(Token = "0x6004E1D")]
	[Address(RVA = "0x5C1B280", Offset = "0x5C1A280", VA = "0x5C1B280")]
	public void Awake()
	{
		// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler$$Awake): 21 lines keep C-only constructs
		RawImage* targetAddress;
		RawImage* targetAddress_00;
		Text* targetAddress_01;
		Text* targetAddress_02;
		RawImage crosshairImageRed;
		Text crosshairLabelRed;
		UISettings pSVar1;
		StringSetting pSVar2;
		String pSVar3;
		bool bVar4;
		Transform pUVar5;
		GameObject pUVar6;
		RawImage pUVar7;
		Text pUVar8;
		Image pUVar9;
		CrosshairHandler.d__9<LoadSkin> __this_00;
		Color UVar10;

		pUVar5 = this.transform;
		pUVar6 = ElementFactory.InstantiateAndBind(pUVar5, "Prefabs/InGame/CrosshairImage");
		if (pUVar6 != null) {
			pUVar7 = pUVar6.GetComponent<RawImage>();
			targetAddress = &this._crosshairImageWhite;
			this._crosshairImageWhite = pUVar7;
			pUVar5 = this.transform;
			pUVar6 = ElementFactory.InstantiateAndBind(pUVar5, "Prefabs/InGame/CrosshairImage");
			if (pUVar6 != null) {
				pUVar7 = pUVar6.GetComponent<RawImage>();
				targetAddress_00 = &this._crosshairImageRed;
				this._crosshairImageRed = pUVar7;
				pUVar7 = this._crosshairImageRed;
				if (pUVar7 != null) {
					UVar10.b = 0.0;
					UVar10.a = 1.0;
					UVar10.r = 1.0;
					UVar10.g = 0.0;
					pUVar7.set_color(UVar10);
					if (*targetAddress != null) {
						pUVar5 = (*targetAddress).transform;
						if (pUVar5 != null) {
							pUVar5 = pUVar5.Find("DefaultLabel");
							if (pUVar5 != null) {
								pUVar8 = pUVar5.GetComponent<Text>();
								targetAddress_01 = &this._crosshairLabelWhite;
								this._crosshairLabelWhite = pUVar8;
								pUVar7 = this._crosshairImageRed;
								if (pUVar7 != null) {
									pUVar5 = pUVar7.transform;
									if (pUVar5 != null) {
										pUVar5 = pUVar5.Find("DefaultLabel");
										if (pUVar5 != null) {
											pUVar8 = pUVar5.GetComponent<Text>();
											targetAddress_02 = &this._crosshairLabelRed;
											this._crosshairLabelRed = pUVar8;
											pUVar5 = this.transform;
											pUVar6 = ElementFactory.InstantiateAndBind(pUVar5, "Prefabs/InGame/HookArrowImage");
											if (pUVar6 != null) {
												pUVar9 = pUVar6.GetComponent<Image>();
												this._arrowLeft = pUVar9;
												pUVar5 = this.transform;
												pUVar6 = ElementFactory.InstantiateAndBind(pUVar5, "Prefabs/InGame/HookArrowImage");
												if (pUVar6 != null) {
													pUVar9 = pUVar6.GetComponent<Image>();
													this._arrowRight = pUVar9;
													pUVar7 = this._crosshairImageWhite;
													if (pUVar7 != null) {
														pUVar6 = pUVar7.gameObject;
														ElementFactory.SetAnchor(pUVar6, 4, 4, (Vector2)(Vector2.zeroVector));
														if (*targetAddress_00 != null) {
															pUVar6 = (*targetAddress_00).gameObject;
															ElementFactory.SetAnchor(pUVar6, 4, 4, (Vector2)(Vector2.zeroVector));
															if (*targetAddress != null) {
																pUVar6 = (*targetAddress).gameObject ;
																if (pUVar6 != null) {
																	pUVar6.AddComponent<CrosshairScaler>();
																	if (*targetAddress_00 != null) {
																		pUVar6 = (*targetAddress_00).gameObject;
																		if (pUVar6 != null) {
																			pUVar6.AddComponent<CrosshairScaler>();
																			pUVar7 = *targetAddress;
																			crosshairImageRed = *targetAddress_00;
																			pUVar8 = *targetAddress_01;
																			crosshairLabelRed = *targetAddress_02;
																			CursorManager.UpdateCrosshair(pUVar7, crosshairImageRed, pUVar8, crosshairLabelRed, true);
																			pSVar1 = SettingsManager.UISettings;
																			if ((pSVar1 != null) &&(pSVar2 = pSVar1.CrosshairSkin, pSVar2 != null)) {
																				bVar4 = (pSVar2._value != "");
																				if (!bVar4) {
																					return;
																				}
																				pSVar1 = SettingsManager.UISettings;
																				if ((pSVar1 != null) &&(pSVar2 = pSVar1.CrosshairSkin, pSVar2 != null)) {
																					pSVar3 = pSVar2._value;
																					__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CrosshairHandler.d__9<LoadSkin>));
																					__this_00 = new CrosshairHandler.d__9<LoadSkin>(0);
																					if (__this_00 != null) {
																						__this_00.__4__this = this;
																						__this_00.url = pSVar3;
																						this.StartCoroutine((IEnumerator)__this_00);
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
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E1E")]
	[Address(RVA = "0x5C1B780", Offset = "0x5C1A780", VA = "0x5C1B780")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__9))]
	private IEnumerator LoadSkin(string url)
	{
		// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler$$LoadSkin): clean
		CrosshairHandler.d__9<LoadSkin> __this_00;

		__this_00 = new CrosshairHandler.d__9<LoadSkin>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.url = url;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004E1F")]
	[Address(RVA = "0x5C1B800", Offset = "0x5C1A800", VA = "0x5C1B800")]
	private void Update()
	{
		// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler$$Update): clean
		RawImage crosshairImageWhite;
		RawImage crosshairImageRed;
		Text crosshairLabelWhite;
		Text crosshairLabelRed;

		crosshairImageWhite = this._crosshairImageWhite;
		crosshairImageRed = this._crosshairImageRed;
		crosshairLabelWhite = this._crosshairLabelWhite;
		crosshairLabelRed = this._crosshairLabelRed;
		CursorManager.UpdateCrosshair(crosshairImageWhite, crosshairImageRed, crosshairLabelWhite, crosshairLabelRed, false);
		CursorManager.UpdateHookArrows(this._arrowLeft, this._arrowRight);
		return;
	}

	[Token(Token = "0x6004E20")]
	[Address(RVA = "0x5C1B880", Offset = "0x5C1A880", VA = "0x5C1B880")]
	public CrosshairHandler()
	{
		// Lifted from source/cpp/UI/CrosshairHandler.c (UI.CrosshairHandler$$.ctor): clean
		base();
		return;
	}
}
