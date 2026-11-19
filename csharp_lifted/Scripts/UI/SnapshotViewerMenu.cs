// ==================== AoTTG2 cross-reference ====================
// Type: UI.SnapshotViewerMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/SnapshotViewerMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMenu.cs
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

namespace UI;

[Token(Token = "0x20008E4")]
internal class SnapshotViewerMenu : ViewerMenu
{
	[Token(Token = "0x20008E5")]
	[CompilerGenerated]
	private sealed class _003CSaveCoroutine_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002CEC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002CED")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002CEE")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotViewerMenu _003C_003E4__this;

		[Token(Token = "0x17000ECD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054AC")]
			[Address(RVA = "0x5CACD40", Offset = "0x5CABD40", VA = "0x5CACD40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000ECE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054AE")]
			[Address(RVA = "0x5CACD90", Offset = "0x5CABD90", VA = "0x5CACD90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60054A9")]
		[Address(RVA = "0x5CAC280", Offset = "0x5CAB280", VA = "0x5CAC280")]
		[DebuggerHidden]
		public _003CSaveCoroutine_003Ed__12(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60054AA")]
		[Address(RVA = "0x5CAC6E0", Offset = "0x5CAB6E0", VA = "0x5CAC6E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60054AB")]
		[Address(RVA = "0x5CAC6F0", Offset = "0x5CAB6F0", VA = "0x5CAC6F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$MoveNext): 7 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			SnapshotViewerMenu pUVar3;
			SnapshotPopup __this_00;
			Vector3[] pUVar4;
			int iVar5;
			int iVar6;
			RectTransform __this_01;
			object __this_02;
			Texture2D __this_03;
			String pSVar7;
			GisketchUIRoot __this_04;
			String title;
			String format;
			AottgToastDefinition __this_05;
			Vector3[] fourCornersArray;
			MethodInfo pMVar8;
			double dVar9;
			DateTime SVar10;
			double dVar11;
			DateTime SVar12;
			float fVar13;
			float fVar14;
			Rect source;
			DateTime SStack_60;
			ulong uStack_58;
			ulong uStack_48;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_02 = new WaitForEndOfFrame();
				this.__2__current = __this_02;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				pUVar3 = this.__4__this;
				this.__1__state = -1;
				if (((pUVar3 != null) &&(__this_00 = pUVar3._snapshotPopup, __this_00 != null)) &&(__this_01 = (RectTransform)__this_00.transform, __this_01 != null)) {
					if (__this_01.klass != typeof(RectTransform)) {
						throw new InvalidCastException();
					}
					fourCornersArray = pUVar3._captureCorners;
					__this_01.GetWorldCorners(fourCornersArray);
					pUVar4 = pUVar3._captureCorners;
					if (pUVar4 != null) {
						uVar2 = (uint)pUVar4.Length;
						if ((uVar2 == 0) || (uVar2 < 3)) {
							throw new IndexOutOfRangeException();
						}
						uStack_48 = *(sbyte*)&pUVar4[0];
						fVar13 = pUVar4[2].x;
						fVar14 = pUVar4[2].y;
						fVar13 = fVar13 - (float)uStack_48;
						uStack_58 = (Il2CppMethodPointer)(double)fVar13;
						pMVar8 = (MethodInfo)&SStack_60;
						dVar9 = modf((double)uStack_58, (double)pMVar8, (MethodInfo)fourCornersArray);
						SVar10._dateData = SStack_60._dateData;
						if (0.0 <= fVar13) {
							if ((dVar9 != 0.5) || (NAN(dVar9))) {
								SVar10._dateData = (DateTime)floor((double)uStack_58 + 0.5, pMVar8);
							}
							else if (((long)(double)SStack_60._dateData & 1U) != 0) {
								SVar10._dateData = (DateTime)((double)SStack_60._dateData + 1.0);
							}
						}
						else if ((dVar9 != -0.5) || (NAN(dVar9))) {
							SVar10._dateData = (DateTime)ceil((double)uStack_58 + -0.5, pMVar8);
						}
						else if (((long)(double)SStack_60._dateData & 1U) != 0) {
							SVar10._dateData =(DateTime)(DateTime)((double)SStack_60._dateData + -1.0);
						}
						fVar13 = uStack_48._4_4_;
						if (Il2CppMethodInitialized_07541320 == false) {
							uStack_58 = (Il2CppMethodPointer)CONCAT44(uStack_48._4_4_, uStack_48._4_4_);
							Il2CppMethodInitialized_07541320 = true;
							fVar13 = (float)uStack_58;
						}
						fVar14 = fVar14 - fVar13;
						dVar9 = (double)fVar14;
						pMVar8 = (MethodInfo)&SStack_60;
						dVar11 = modf(dVar9, (double)pMVar8, (MethodInfo)fourCornersArray);
						SVar12._dateData = SStack_60._dateData;
						if (0.0 <= fVar14) {
							if ((dVar11 != 0.5) || (NAN(dVar11))) {
								SVar12._dateData = (DateTime)floor(dVar9 + 0.5, pMVar8);
							}
							else if (((long)(double)SStack_60._dateData & 1U) != 0) {
								SVar12._dateData = (DateTime)((double)SStack_60._dateData + 1.0);
							}
						}
						else if ((dVar11 != -0.5) || (NAN(dVar11))) {
							SVar12._dateData = (DateTime)ceil(dVar9 + -0.5, pMVar8);
						}
						else if (((long)(double)SStack_60._dateData & 1U) != 0) {
							SVar12._dateData =(DateTime)(DateTime)((double)SStack_60._dateData + -1.0);
						}
						__this_03 = new Texture2D((int)(double)SVar10._dateData, (int)(double)SVar12._dateData, 3, false);
						if (__this_03 != null) {
							iVar5 = __this_03.get_width();
							iVar6 = __this_03.get_height();
							source.m_Width = (float)iVar5;
							source.m_Height = (float)iVar6;
							source._0_8_ = uStack_48;
							__this_03.ReadPixels(source, 0, 0);
							__this_03.Apply();
							SStack_60 = DateTime.Now;
							pSVar7 = SStack_60.ToString("Mdyyyy-Hms");
							pSVar7 = String.Concat(pSVar7, ".png");
							SnapshotManager.SaveSnapshotFinish(__this_03, pSVar7);
							Object.Destroy((Object)__this_03);
							__this_04 = AottgGisketchUiHost.Root;
							title = Aottg2GisketchLocale.Text("MainMenu.ToolsPopup.SnapshotViewerButton");
							format = Aottg2GisketchLocale.Text("MainMenu.SnapshotViewer.SavedToast");
							pSVar7 = SnapshotManager.SnapshotPath;
							if (pSVar7 != null) {
								pSVar7 = pSVar7.Replace("\\", "/");
								pSVar7 = String.Format(format, (object)pSVar7);
								__this_05 = new AottgToastDefinition(4, "save", title, pSVar7, "viewer.snapshot.save") ;
								if (__this_04 != null) {
									__this_04.ShowToast(__this_05);
									goto label_05dacd18;
								}
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		label_05dacd18: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x60054AD")]
		[Address(RVA = "0x5CACD50", Offset = "0x5CABD50", VA = "0x5CACD50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__12_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002CE4")]
	private const float SnapshotScale = 1.5f;

	[Token(Token = "0x4002CE5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2 KillScoreOffset;

	[Token(Token = "0x4002CE6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2 NameOffset;

	[Token(Token = "0x4002CE7")]
	[FieldOffset(Offset = "0xA0")]
	private readonly Vector3[] _captureCorners;

	[Token(Token = "0x4002CE8")]
	[FieldOffset(Offset = "0xA8")]
	private SnapshotPopup _snapshotPopup;

	[Token(Token = "0x4002CE9")]
	[FieldOffset(Offset = "0xB0")]
	private KillScorePopup _killScorePopup;

	[Token(Token = "0x4002CEA")]
	[FieldOffset(Offset = "0xB8")]
	private Text _nameLabel;

	[Token(Token = "0x4002CEB")]
	[FieldOffset(Offset = "0xC0")]
	private Texture2D _currentSnapshot;

	[Token(Token = "0x17000ECC")]
	protected override int Count
	{
		[Token(Token = "0x60054A1")]
		[Address(RVA = "0x5CABD40", Offset = "0x5CAAD40", VA = "0x5CABD40", Slot = "8")]
		get
		{
			// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu$$get_Count): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075480e9 == false) {
				Il2CppMethodInitialized_075480e9 = true;
				uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_07548116 == false) {
				Il2CppMethodInitialized_07548116 = true;
				uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(SnapshotManager))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return SnapshotManager._maxSnapshotSaveId;
			}
			return *(int)((long)(typeof(SnapshotManager)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x60054A2")]
	[Address(RVA = "0x5CABDF0", Offset = "0x5CAADF0", VA = "0x5CABDF0", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu$$Setup): 12 lines keep C-only constructs
		SnapshotPopup* targetAddress;
		KillScorePopup* targetAddress_00;
		Text* targetAddress_01;
		Vector2 UVar1;
		Vector2 UVar2;
		Vector2 offset;
		Vector2 offset_00;
		Transform pUVar3;
		GameObject pUVar4;
		SnapshotPopup pUVar5;
		KillScorePopup pUVar6;
		ElementStyle __this_00;
		Text pUVar7;

		this.Setup();
		pUVar3 = this.transform;
		pUVar4 = ElementFactory.InstantiateAndSetupPanel<SnapshotPopup>(pUVar3, "Prefabs/Snapshot/SnapshotPopup", false);
		if (pUVar4 != null) {
			pUVar5 = pUVar4.GetComponent<SnapshotPopup>();
			targetAddress = &this._snapshotPopup;
			this._snapshotPopup = pUVar5;
			pUVar5 = this._snapshotPopup;
			if (pUVar5 != null) {
				pUVar3 = pUVar5.transform;
				if (pUVar3 != null) {
					pUVar3.localScale = (Vector3)ZEXT812(0x3fc000003fc00000);
					pUVar5 = *targetAddress;
					if (pUVar5 != null) {
						pUVar3 = pUVar5.transform;
						if (pUVar3 != null) {
							pUVar3.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
							pUVar3 = this.transform ;
							pUVar6 = ElementFactory.CreateDefaultPopup<KillScorePopup>(pUVar3, false);
							targetAddress_00 = &this._killScorePopup;
							this._killScorePopup = pUVar6;
							pUVar3 = this.transform ;
							__this_00 = new ElementStyle(0x18, 120.0, 20.0, "DefaultPanel");
							pUVar4 = ElementFactory.CreateDefaultLabel(pUVar3, __this_00, "", 0, 4);
							if (pUVar4 != null) {
								pUVar7 = pUVar4.GetComponent<Text>();
								targetAddress_01 = &this._nameLabel;
								this._nameLabel = pUVar7;
								pUVar5 = this._snapshotPopup;
								if (pUVar5 != null) {
									pUVar4 = pUVar5.gameObject;
									ElementFactory.SetAnchor(pUVar4, 4, 4, (UnityEngine_Vector2_o) *(Vector2)typeof(ViewerMenu).static_fields);
									pUVar6 = *targetAddress_00;
									if (pUVar6 != null) {
										pUVar4 = pUVar6.gameObject;
										UVar1 = (ViewerMenu.ContentCenter);
										UVar2 = (SnapshotViewerMenu.KillScoreOffset);
										offset.y = UVar1.y + UVar2.y;
										offset.x = UVar1.x + UVar2.x;
										ElementFactory.SetAnchor(pUVar4, 4, 4, offset);
										pUVar7 = *targetAddress_01;
										if (pUVar7 != null) {
											pUVar4 = pUVar7.gameObject;
											UVar1 = (ViewerMenu.ContentCenter);
											UVar2 = (SnapshotViewerMenu.NameOffset);
											offset_00.y = UVar2.y + UVar1.y;
											offset_00.x = UVar2.x + UVar1.x;
											ElementFactory.SetAnchor(pUVar4, 4, 4, offset_00);
											this.ShowCurrent();
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054A3")]
	[Address(RVA = "0x5CAC180", Offset = "0x5CAB180", VA = "0x5CAC180")]
	public void Save()
	{
		// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu$$Save): clean
		int iVar1;
		SnapshotViewerMenu.d__12<SaveCoroutine> __this_00;

		iVar1 = this.get_Count();
		if (iVar1 < 1) {
			return;
		}
		__this_00 = new SnapshotViewerMenu.d__12<SaveCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x60054A4")]
	[Address(RVA = "0x5CAC210", Offset = "0x5CAB210", VA = "0x5CAC210")]
	[IteratorStateMachine(typeof(_003CSaveCoroutine_003Ed__12))]
	private IEnumerator SaveCoroutine()
	{
		// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu$$SaveCoroutine): clean
		SnapshotViewerMenu.d__12<SaveCoroutine> __this_00;

		__this_00 = new SnapshotViewerMenu.d__12<SaveCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60054A5")]
	[Address(RVA = "0x5CAC2A0", Offset = "0x5CAB2A0", VA = "0x5CAC2A0", Slot = "9")]
	protected override void Load(int index)
	{
		// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu$$Load): 3 lines keep C-only constructs
		Text pUVar1;
		SnapshotPopup pUVar2;
		KillScorePopup pUVar3;
		ProfileSettings pSVar4;
		NameSetting pSVar5;
		Texture2D pUVar6;
		bool bVar7;
		int iVar8;
		Texture2D pUVar9;
		String str2;
		String pSVar10;
		Transform __this_00;
		Texture2D* targetAddress;
		DateTime SStack_30;

		pUVar1 = this._nameLabel;
		if (pUVar1 != null) {
			pUVar1.set_text("");
			iVar8 = this.get_Count();
			if (index < iVar8) {
				pUVar9 = SnapshotManager.GetSnapshot(index);
				pUVar2 = this._snapshotPopup;
				if (pUVar2 != null) {
					pUVar2.Load(pUVar9);
					pUVar2 = this._snapshotPopup;
					if (pUVar2 != null) {
						pUVar2.ShowImmediate();
						pUVar3 = this._killScorePopup;
						iVar8 = SnapshotManager.GetDamage(index);
						if (pUVar3 != null) {
							if (iVar8 < 1) {
								iVar8 = 0;
							}
							pUVar3.ShowSnapshotViewer(iVar8);
							pSVar4 = SettingsManager.ProfileSettings;
							if ((pSVar4 != null) &&(pSVar5 = pSVar4.Name, pSVar5 != null)) {
								pUVar1 = this._nameLabel;
								pSVar10 = pSVar5._value;
								SStack_30 = DateTime.Today;
								str2 = SStack_30.ToShortDateString();
								pSVar10 = String.Concat(pSVar10, " ", str2);
								if (pUVar1 != null) {
									pUVar1.set_text(pSVar10);
									pUVar1 = this._nameLabel;
									if (pUVar1 != null) {
										__this_00 = pUVar1.transform;
										if (__this_00 != null) {
											__this_00.SetAsLastSibling();
											pUVar6 = this._currentSnapshot;
											targetAddress = &this._currentSnapshot;
											bVar7 = ((Object)pUVar6 != null);
											if (bVar7) {
												pUVar6 = *targetAddress;
												Object.Destroy((Object)pUVar6);
											}
											*targetAddress = pUVar9;
											return;
										}
									}
								}
							}
						}
					}
				}
			}
			else {
				pUVar2 = this._snapshotPopup;
				if (pUVar2 != null) {
					pUVar2.Hide();
					pUVar3 = this._killScorePopup;
					if (pUVar3 != null) {
						pUVar3.Hide();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054A6")]
	[Address(RVA = "0x5CAC570", Offset = "0x5CAB570", VA = "0x5CAC570")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu$$OnDestroy): clean
		Texture2D pUVar1;
		bool bVar2;

		pUVar1 = this._currentSnapshot;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._currentSnapshot;
			Object.Destroy((Object)pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x60054A7")]
	[Address(RVA = "0x5CAC5F0", Offset = "0x5CAB5F0", VA = "0x5CAC5F0")]
	public SnapshotViewerMenu()
	{
		// Lifted from source/cpp/UI/SnapshotViewerMenu.c (UI.SnapshotViewerMenu$$.ctor): clean
		Vector3[] pUVar1;

		pUVar1 = (Vector3[])new Vector3[4];
		this._captureCorners = pUVar1;
		if ((typeof(ViewerMenu)._2).cctor_finished_or_no_cctor == 0) {
			base();
			return;
		}
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/SnapshotViewerMenu.c.

	// UI.SnapshotViewerMenu$$.cctor: clean
	static SnapshotViewerMenu()
	{
		(SnapshotViewerMenu.KillScoreOffset) =(Vector2)0x437a000043e60000;
		(SnapshotViewerMenu.NameOffset) =(Vector2)0xc389800000000000;
		return;
	}
}
