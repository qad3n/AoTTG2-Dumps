// ==================== AoTTG2 cross-reference ====================
// Type: UI.MainBackgroundMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MainBackgroundMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainBackgroundMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000880")]
internal class MainBackgroundMenu : BaseMenu
{
	[Token(Token = "0x2000881")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishBackground_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B0C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B0D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B0E")]
		[FieldOffset(Offset = "0x20")]
		public MainBackgroundMenu _003C_003E4__this;

		[Token(Token = "0x17000E2D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005111")]
			[Address(RVA = "0x5C57A70", Offset = "0x5C56A70", VA = "0x5C57A70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000E2E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005113")]
			[Address(RVA = "0x5C57AC0", Offset = "0x5C56AC0", VA = "0x5C57AC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600510E")]
		[Address(RVA = "0x5C57920", Offset = "0x5C56920", VA = "0x5C57920")]
		[DebuggerHidden]
		public _003CWaitAndFinishBackground_003Ed__12(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600510F")]
		[Address(RVA = "0x5C57960", Offset = "0x5C56960", VA = "0x5C57960", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005110")]
		[Address(RVA = "0x5C57970", Offset = "0x5C56970", VA = "0x5C57970", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$MoveNext): clean
			int iVar1;
			MainBackgroundMenu pUVar2;
			MainMenuBackgroundPanel pUVar3;
			LoadingBackgroundPanel __this_00;
			WaitForSeconds __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_01 = new WaitForSeconds(1.5);
				this.__2__current = (object)__this_01;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				if (((pUVar2 != null) &&(pUVar3 = pUVar2._mainBackgroundPanelFront, pUVar3 != null)) && (__this_00 = (LoadingBackgroundPanel)pUVar2._mainBackgroundPanelBack, __this_00 != null)) {
					__this_00.SetBackground(false, pUVar3.BackgroundIndex, "MainBackgrounds");
					pUVar3 = pUVar2._mainBackgroundPanelFront;
					if (pUVar3 != null) {
						pUVar3.HideImmediate();
						goto label_05d57a5a;
					}
				}
				throw new NullReferenceException();
			}
		label_05d57a5a: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6005112")]
		[Address(RVA = "0x5C57A80", Offset = "0x5C56A80", VA = "0x5C57A80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002B07")]
	[FieldOffset(Offset = "0x98")]
	public MainMenuBackgroundPanel _mainBackgroundPanelBack;

	[Token(Token = "0x4002B08")]
	[FieldOffset(Offset = "0xA0")]
	public MainMenuBackgroundPanel _mainBackgroundPanelFront;

	[Token(Token = "0x4002B09")]
	[FieldOffset(Offset = "0xA8")]
	private Vector2 currentVelocity;

	[Token(Token = "0x4002B0A")]
	[FieldOffset(Offset = "0xB0")]
	public float smoothTime;

	[Token(Token = "0x4002B0B")]
	[FieldOffset(Offset = "0xB4")]
	public float backgroundScale;

	[Token(Token = "0x6005105")]
	[Address(RVA = "0x5C571B0", Offset = "0x5C561B0", VA = "0x5C571B0", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu$$Setup): clean
		this.SetupMainBackground();
		return;
	}

	[Token(Token = "0x6005106")]
	[Address(RVA = "0x5C571C0", Offset = "0x5C561C0", VA = "0x5C571C0")]
	private void SetupMainBackground()
	{
		// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu$$SetupMainBackground): 11 lines keep C-only constructs
		MainMenuBackgroundPanel* targetAddress;
		MainMenuBackgroundPanel* targetAddress_00;
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		LoadingBackgroundPanel __this_00;
		UnityEngine_Vector3_StaticFields pUVar6;
		Transform pUVar7;
		MainMenuBackgroundPanel pUVar8;
		RectTransform pUVar9;
		GameObject pUVar10;
		ParallaxEffect pPVar11;
		Vector3 value;
		Vector3 value_00;

		pUVar7 = this.transform;
		pUVar8 = ElementFactory.CreateDefaultPopup<MainMenuBackgroundPanel>(pUVar7, false);
		targetAddress = &this._mainBackgroundPanelBack;
		this._mainBackgroundPanelBack = pUVar8;
		pUVar7 = this.transform;
		pUVar8 = ElementFactory.CreateDefaultPopup<MainMenuBackgroundPanel>(pUVar7, false);
		targetAddress_00 = &this._mainBackgroundPanelFront;
		this._mainBackgroundPanelFront = pUVar8;
		__this_00 = (LoadingBackgroundPanel)this._mainBackgroundPanelBack;
		if (__this_00 != null) {
			__this_00.SetRandomBackground(false, true);
			if (*targetAddress != null) {
				pUVar9 = (*targetAddress).GetComponent<RectTransform>();
				if (pUVar9 != null) {
					pUVar6 = typeof(Vector3).static_fields;
					fVar1 = this.backgroundScale;
					value.z = (pUVar6.oneVector).z * fVar1;
					uVar2 = (pUVar6.oneVector).x;
					uVar4 = (pUVar6.oneVector).y;
					value.x = fVar1 * (float)uVar2;
					value.y = fVar1 * (float)uVar4;
					pUVar9.localScale = value;
					pUVar8 = this._mainBackgroundPanelFront;
					if (pUVar8 != null) {
						pUVar9 = pUVar8.GetComponent<RectTransform>();
						if (pUVar9 != null) {
							pUVar6 = typeof(Vector3).static_fields;
							fVar1 = this.backgroundScale;
							value_00.z = (pUVar6.oneVector).z * fVar1;
							uVar3 = (pUVar6.oneVector).x;
							uVar5 = (pUVar6.oneVector).y;
							value_00.x = fVar1 * (float)uVar3;
							value_00.y = fVar1 * (float)uVar5;
							pUVar9.localScale = value_00;
							pUVar8 = this._mainBackgroundPanelBack;
							if (pUVar8 != null) {
								pUVar8.ShowImmediate();
								pUVar8 = *targetAddress;
								if ((pUVar8 != null) &&(*targetAddress_00 != null)) {
									((*targetAddress_00).fields).BackgroundIndex = pUVar8.BackgroundIndex;
									pUVar10 = pUVar8.gameObject;
									if (pUVar10 != null) {
										pPVar11 = pUVar10.AddComponent<ParallaxEffect>();
										if (pPVar11 != null) {
											pPVar11.scale = 1.1;
											pPVar11.parallaxIntensity = 0.5;
											pPVar11.smoothTime = 0.6;
											if (*targetAddress_00 != null) {
												pUVar10 = (*targetAddress_00).gameObject;
												if (pUVar10 != null) {
													pPVar11 = pUVar10.AddComponent<ParallaxEffect>();
													if (pPVar11 != null) {
														pPVar11.scale = 1.1;
														pPVar11.parallaxIntensity = 0.5;
														pPVar11.smoothTime = 0.6;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005107")]
	[Address(RVA = "0x5C57470", Offset = "0x5C56470", VA = "0x5C57470")]
	private void AddParallaxEffect(GameObject target, float intensity)
	{
		// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu$$AddParallaxEffect): 1 lines keep C-only constructs
		ParallaxEffect pPVar1;

		if (Il2CppMethodInitialized_07547f38 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect) ;
			Il2CppMethodInitialized_07547f38 = true;
		}
		if (target != null) {
			pPVar1 = target.AddComponent<ParallaxEffect>();
			if (pPVar1 != null) {
				pPVar1.parallaxIntensity = intensity;
				pPVar1.smoothTime = 0.6;
				pPVar1.scale = 1.1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005108")]
	[Address(RVA = "0x5C574E0", Offset = "0x5C564E0", VA = "0x5C574E0")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu$$Update): 28 lines keep C-only constructs
		Vector2 currentVelocity;
		MainMenuBackgroundPanel pUVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		RectTransform pUVar5;
		RectTransform pUVar6;
		float fVar7;
		float fVar9;
		Vector2 UVar8;
		float fVar10;
		ulong extraout_XMM0_Qb;
		float fVar11;
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		Vector3 UVar14;
		Vector2 UStack_80;
		Vector2 UStack_78;
		int iStack_6c;
		byte[] auStack_68 = new byte[16];
		float fStack_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		byte[] auStack_48 = new byte[24];

		UVar14 = Input.mousePosition;
		fStack_58 = UVar14.x;
		fStack_54 = UVar14.y;
		fStack_50 = (float)extraout_XMM0_Qb;
		fStack_4c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
		auStack_68 = ZEXT416((uint)this.backgroundScale);
		iVar2 = Screen.width;
		auStack_48._0_16_ = ZEXT416((uint)this.backgroundScale);
		iVar3 = Screen.height;
		iStack_6c = Screen.width;
		iVar4 = Screen.height;
		pUVar1 = this._mainBackgroundPanelBack;
		if (pUVar1 != null) {
			pUVar5 = pUVar1.GetComponent<RectTransform>();
			pUVar1 = this._mainBackgroundPanelBack;
			if (pUVar1 != null) {
				pUVar6 = pUVar1.GetComponent<RectTransform>();
				if (pUVar6 != null) {
					fVar7 = (float)(iVar2 / 2) * ((float)auStack_68._0_4_ + -1.0);
					fVar9 = (float)(iVar3 / 2) * ((float)auStack_48._0_4_ + -1.0);
					fVar10 = ((float)auStack_68._4_4_ + 0.0) * 0.0;
					fVar11 = ((float)auStack_48._4_4_ + 0.0) * 0.0;
					auVar12._0_4_ = (float)iStack_6c;
					auVar12._4_4_ = (float)iVar4;
					auVar12._8_8_ = 0;
					auVar13._4_4_ = fStack_54;
					auVar13._0_4_ = fStack_58;
					auVar13._8_4_ = fStack_50;
					auVar13._12_4_ = fStack_4c;
					auVar13 = divps(auVar13, auVar12);
					fStack_58 = (fVar7 + fVar7) * auVar13._0_4_ - fVar7;
					fStack_54 = (fVar9 + fVar9) * auVar13._4_4_ - fVar9;
					fStack_50 = (fVar10 + fVar10) * auVar13._8_4_ - fVar10;
					fStack_4c = (fVar11 + fVar11) * auVar13._12_4_ - fVar11;
					UStack_78 = pUVar6.anchoredPosition;
					currentVelocity = &this.currentVelocity;
					auStack_68._0_4_ = this.smoothTime;
					UStack_80.y = fStack_54;
					UStack_80.x = fStack_58;
					fVar7 = Time.deltaTime;
					UVar8 = Vector2.SmoothDamp(ref UStack_78, ref UStack_80, currentVelocity, (float)auStack_68._0_4_, INFINITY, fVar7);
					if (pUVar5 != null) {
						pUVar5.anchoredPosition = UVar8;
						pUVar1 = this._mainBackgroundPanelFront;
						if (pUVar1 != null) {
							pUVar5 = pUVar1.GetComponent<RectTransform>();
							pUVar1 = this._mainBackgroundPanelFront;
							if (pUVar1 != null) {
								pUVar6 = pUVar1.GetComponent<RectTransform>();
								if (pUVar6 != null) {
									UStack_78 = pUVar6.anchoredPosition;
									auStack_68._0_4_ = this.smoothTime;
									UStack_80.y = fStack_54;
									UStack_80.x = fStack_58;
									fVar7 = Time.deltaTime;
									UVar8 = Vector2.SmoothDamp(ref UStack_78, ref UStack_80, currentVelocity, (float)auStack_68._0_4_, INFINITY, fVar7);
									if (pUVar5 != null) {
										pUVar5.anchoredPosition = UVar8;
										return;
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

	[Token(Token = "0x6005109")]
	[Address(RVA = "0x5C57730", Offset = "0x5C56730", VA = "0x5C57730")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu$$GetConstrainedTargetPosition): 11 lines keep C-only constructs
		int iVar1;
		int iVar2;
		float fVar3;
		Vector2 UVar4;
		float fVar6;
		ulong in_XMM0_Qb;
		byte[] auVar5 = new byte[16];
		byte[] auVar7 = new byte[16];

		fVar3 = this.backgroundScale;
		iVar1 = Screen.width;
		fVar6 = this.backgroundScale;
		iVar2 = Screen.height;
		fVar3 = (float)(iVar1 / 2) * (fVar3 + -1.0);
		fVar6 = (float)(iVar2 / 2) * (fVar6 + -1.0);
		iVar1 = Screen.width;
		iVar2 = Screen.height;
		auVar5._0_4_ = (float)iVar1;
		auVar5._4_4_ = (float)iVar2;
		auVar5._8_8_ = 0;
		auVar7._8_8_ = in_XMM0_Qb;
		auVar7._0_8_ = mousePosition;
		auVar7 = divps(auVar7, auVar5);
		UVar4.x = (fVar3 + fVar3) * auVar7._0_4_ - fVar3;
		UVar4.y = (fVar6 + fVar6) * auVar7._4_4_ - fVar6;
		return (Vector2)UVar4;
	}

	[Token(Token = "0x600510A")]
	[Address(RVA = "0x5C577E0", Offset = "0x5C567E0", VA = "0x5C577E0")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu$$MapRange): clean
		return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
	}

	[Token(Token = "0x600510B")]
	[Address(RVA = "0x5C57800", Offset = "0x5C56800", VA = "0x5C57800")]
	public void ChangeMainBackground()
	{
		// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu$$ChangeMainBackground): clean
		LoadingBackgroundPanel __this_00;
		MainMenuBackgroundPanel pUVar1;
		MainBackgroundMenu.d__12<WaitAndFinishBackground> __this_01;

		__this_00 = (LoadingBackgroundPanel)this._mainBackgroundPanelFront;
		if (__this_00 != null) {
			__this_00.SetRandomBackground(false, false);
			pUVar1 = this._mainBackgroundPanelFront;
			if (pUVar1 != null) {
				pUVar1.Show();
				__this_01 = new MainBackgroundMenu.d__12<WaitAndFinishBackground>();
				__this_01.__1__state = 0;
				__this_01.__4__this = this;
				this.StartCoroutine((IEnumerator)__this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600510C")]
	[Address(RVA = "0x5C578B0", Offset = "0x5C568B0", VA = "0x5C578B0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishBackground_003Ed__12))]
	private IEnumerator WaitAndFinishBackground()
	{
		// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu$$WaitAndFinishBackground): clean
		MainBackgroundMenu.d__12<WaitAndFinishBackground> __this_00;

		__this_00 = new MainBackgroundMenu.d__12<WaitAndFinishBackground>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600510D")]
	[Address(RVA = "0x5C57940", Offset = "0x5C56940", VA = "0x5C57940")]
	public MainBackgroundMenu()
	{
		// Lifted from source/cpp/UI/MainBackgroundMenu.c (UI.MainBackgroundMenu$$.ctor): clean
		this.smoothTime = 0.3;
		this.backgroundScale = 1.1;
		base();
		return;
	}
}
