// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/TitanCustomSkinLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x20003C5")]
internal class TitanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003C6")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400135F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001360")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001361")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4001362")]
		[FieldOffset(Offset = "0x28")]
		public TitanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4001363")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003CskinUrls_003E5__2;

		[Token(Token = "0x4001364")]
		[FieldOffset(Offset = "0x38")]
		private int _003CpartId_003E5__3;

		[Token(Token = "0x17000298")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001805")]
			[Address(RVA = "0x5863100", Offset = "0x5862100", VA = "0x5863100", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000299")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001807")]
			[Address(RVA = "0x5863150", Offset = "0x5862150", VA = "0x5863150", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001802")]
		[Address(RVA = "0x58628E0", Offset = "0x58618E0", VA = "0x58628E0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__5(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001803")]
		[Address(RVA = "0x5862F00", Offset = "0x5861F00", VA = "0x5862F00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001804")]
		[Address(RVA = "0x5862F10", Offset = "0x5861F10", VA = "0x5862F10", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$MoveNext): 5 lines keep C-only constructs
			uint uVar1;
			int iVar2;
			TitanCustomSkinLoader __this_00;
			Object[] pSVar3;
			String pSVar4;
			bool bVar5;
			String[] pSVar6;
			BaseCustomSkinPart __this_01;
			BaseCustomSkinPart.d__11<LoadSkin> __this_02;
			Coroutine pUVar7;
			uint uVar8;
			byte[] auVar9 = new byte[16];

			iVar2 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar2 == 1) {
				this.__1__state = -1;
				goto label_0596302a;
			}
			if (iVar2 != 0) {
				return false;
			}
			this.__1__state = -1;
			pSVar3 = this.data;
			if (pSVar3 != null) {
				if ((int)pSVar3.Length == 0) {
		label_059630fb: ;
					throw new IndexOutOfRangeException();
				}
				pSVar4 = (String)pSVar3[0];
				if (pSVar4 != null) {
					if (pSVar4.klass != g_data_07556758) {
						throw new InvalidCastException();
					}
					uVar8 = 0;
					pSVar6 = pSVar4.Split(0x2c, 0);
					this._skinUrls_5__2 = pSVar6;
					this._partId_5__3 = 0;
					do {
						if (3 < (int)uVar8) {
							return false;
						}
						pSVar6 = this._skinUrls_5__2;
						if (pSVar6 == null) break;
						uVar1 = (uint)pSVar6.Length;
						if ((int)uVar8 < (int)uVar1) {
							if (uVar1 <= uVar8) goto label_059630fb;
							bVar5 = String.IsNullOrEmpty(pSVar6[(int)uVar8]);
							if (!bVar5) {
								if (__this_00 == null) break;
								auVar9 = (byte[])__this_00.GetCustomSkinPart(this._partId_5__3);
								__this_01 = auVar9._0_8_;
								if (__this_01 != null) {
									pSVar6 = this._skinUrls_5__2;
									if (pSVar6 == null) break;
									uVar8 = this._partId_5__3;
									if ((uint)pSVar6.Length <= uVar8) goto label_059630fb;
									bVar5 = __this_01.LoadCache(pSVar6[(int)uVar8]);
									if (!bVar5) {
										pSVar6 = this._skinUrls_5__2;
										if (pSVar6 == null) break;
										uVar8 = this._partId_5__3;
										if (uVar8 < (uint)pSVar6.Length) {
											pSVar4 = pSVar6[(int)uVar8];
											__this_02 = il2cpp_codegen_object_new(typeof(BaseCustomSkinPart.d__11<LoadSkin>));
											__this_02 = new Object();
											__this_02.__1__state = 0;
											__this_02.__4__this = __this_01;
											__this_02.url = pSVar4;
											pUVar7 = __this_00.StartCoroutine((IEnumerator)__this_02);
											this.__2__current = (object)pUVar7;
											this.__1__state = 1;
											return true;
										}
										goto label_059630fb;
									}
								}
							}
						}
		label_0596302a: ;
						uVar8 = this._partId_5__3 + 1;
						this._partId_5__3 = uVar8;
					} while(true);
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6001806")]
		[Address(RVA = "0x5863110", Offset = "0x5862110", VA = "0x5863110", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomSkins_TitanCustomSkinLoader_LoadSkinsFromRPC_d__5_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400135E")]
	private const string HeadBonePath = "Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head";

	[Token(Token = "0x17000296")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017FC")]
		[Address(RVA = "0x5862690", Offset = "0x5861690", VA = "0x5862690", Slot = "4")]
		get
		{
			// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader$$get_RendererIdPrefix): clean
			return "titan";
		}
	}

	[Token(Token = "0x17000297")]
	internal override bool AllowLocalFileTextures
	{
		[Token(Token = "0x60017FD")]
		[Address(RVA = "0x58626C0", Offset = "0x58616C0", VA = "0x58626C0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader$$get_AllowLocalFileTextures): clean
			Object pUVar1;
			GameObject pUVar2;
			bool bVar3;
			DummyTitan x;
			BasicTitan x_00;

			pUVar1 = (Object)this._owner;
			bVar3 = (pUVar1 != null);
			if (bVar3) {
				pUVar2 = this._owner;
				if (pUVar2 == null) goto label_0596284e;
				x = pUVar2.GetComponent<DummyTitan>();
				bVar3 = ((Object)x != null);
				if (bVar3) {
					bVar3 = PhotonNetwork.IsConnected;
					return !bVar3;
				}
			}
			pUVar1 = (Object)this._owner;
			x_00 = null;
			bVar3 = (pUVar1 != null);
			if (bVar3) {
				pUVar2 = this._owner;
				if (pUVar2 == null) goto label_0596284e;
				x_00 = pUVar2.GetComponent<BasicTitan>();
			}
			bVar3 = ((Object)x_00 != null);
			if (bVar3) {
				if (x_00 == null) {
		label_0596284e: ;
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

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x5862860", Offset = "0x5861860", VA = "0x5862860", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__5))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader$$LoadSkinsFromRPC): clean
		TitanCustomSkinLoader.d__5<LoadSkinsFromRPC> __this_00;

		__this_00 = new TitanCustomSkinLoader.d__5<LoadSkinsFromRPC>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.data = data;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x5862900", Offset = "0x5861900", VA = "0x5862900", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader$$GetCustomSkinPart): 2 lines keep C-only constructs
		bool bVar1;
		Transform pUVar2;
		List<Renderer> renderers;
		GameObject pUVar3;
		Object x;
		String pSVar4;
		String pSVar5;
		TitanCustomSkinPart __this_00;
		uint method_00;
		String* ppSVar6;
		List<Renderer> __this_01;
		BaseCustomSkinLoader pCVar7;
		int iStack_2c;

		pUVar3 = this._owner;
		if ((pUVar3 == null) ||(pUVar2 = pUVar3.transform, pUVar2 == null)) {
	label_05962d8d: ;
			throw new NullReferenceException();
		}
		__this_00 = null;
		pUVar2 = pUVar2.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
		__this_01 = renderers;
		renderers = new List<Renderer>();
		method_00 = &switchD_05962a03::switchdataD_010a57f4;
		switch(partId) {
		case 0:
			pCVar7 = (BaseCustomSkinLoader)this._owner;
			if (pCVar7 == null) goto label_05962d8d;
			pUVar2 = pCVar7.transform;
			ppSVar6 = &"Body";
			pUVar3 = pCVar7.FindChild(pUVar2, "Body");
			pCVar7.AddRendererIfExists(renderers, pUVar3);
			iStack_2c = 0;
			break;
		case 1:
			pCVar7 = (BaseCustomSkinLoader)this._owner;
			if (pCVar7 == null) goto label_05962d8d;
			pUVar2 = pCVar7.transform;
			ppSVar6 = &"Head";
			pUVar3 = pCVar7.FindChild(pUVar2, "Head");
			pCVar7.AddRendererIfExists(renderers, pUVar3);
			iStack_2c = 1;
			break;
		case 2:
			pUVar3 = __this_01.FindChild(pUVar2, "Eyes");
			__this_01.AddRendererIfExists(renderers, pUVar3);
			iStack_2c = 2;
			pSVar4 = this.get_RendererIdPrefix();
			pSVar5 = iStack_2c.ToString();
			pSVar4 = String.Concat(pSVar4, pSVar5);
			__this_00._defaultTextureScale = (Vector2)0x3f8000003f800000;
			__this_00 = new TitanCustomSkinPart();
			__this_00._loader = (BaseCustomSkinLoader)this;
			__this_00._renderers = renderers;
			__this_00._rendererId = pSVar4;
			__this_00._maxSize = 500000;
			goto label_05962c19;
		case 3:
			x = (Object)__this_01.FindChild(pUVar2, "HairSocket");
			__this_01.AddAllRenderersIfExists(renderers, (GameObject)x);
			iStack_2c = 3;
			pSVar4 = this.get_RendererIdPrefix();
			pSVar5 = iStack_2c.ToString();
			pSVar4 = String.Concat(pSVar4, pSVar5);
			pUVar2 = null;
			bVar1 = (x == null);
			if (!bVar1) {
				if (x == null) goto label_05962d8d;
				pUVar2 = x.transform;
			}
			__this_00._defaultTextureScale = (Vector2)0x3f8000003f800000;
			__this_00 = new TitanCustomSkinPart();
			__this_00._loader = (BaseCustomSkinLoader)this;
			__this_00._renderers = renderers;
			__this_00._rendererId = pSVar4;
			__this_00._maxSize = 500000;
			__this_00._textureScale = __this_00._defaultTextureScale;
			__this_00._useTransparentMaterial = false;
			__this_00._rendererRoot = pUVar2;
			goto label_05962d78;
		default: ;
			goto switchD_05962a03_default;
		}
		pSVar4 = this.get_RendererIdPrefix();
		pSVar5 = iStack_2c.ToString();
		pSVar4 = String.Concat(pSVar4, pSVar5);
		__this_00._defaultTextureScale = (Vector2)0x3f8000003f800000;
		__this_00 = new TitanCustomSkinPart();
		__this_00._loader = (BaseCustomSkinLoader)this;
		__this_00._renderers = renderers;
		__this_00._rendererId = pSVar4;
		__this_00._maxSize = 1000000;
	label_05962c19: ;
		__this_00._textureScale = __this_00._defaultTextureScale;
		__this_00._useTransparentMaterial = false;
		__this_00._rendererRoot = null;
	label_05962d78: ;
	switchD_05962a03_default: ;
		return (BaseCustomSkinPart)__this_00;
	}

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x5862DA0", Offset = "0x5861DA0", VA = "0x5862DA0")]
	private GameObject FindChild(Transform parent, string name)
	{
		// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader$$FindChild): clean
		bool bVar1;
		Transform x;
		GameObject pUVar2;

		bVar1 = ((Object)parent == null);
		if (bVar1) {
			return null;
		}
		if (parent != null) {
			x = parent.Find(name);
			bVar1 = ((Object)x == null);
			if (bVar1) {
				return null;
			}
			if (x != null) {
				return pUVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x5862E90", Offset = "0x5861E90", VA = "0x5862E90")]
	public TitanCustomSkinLoader()
	{
		// Lifted from source/cpp/CustomSkins/TitanCustomSkinLoader.c (CustomSkins.TitanCustomSkinLoader$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754592e == false) {
			Il2CppMethodInitialized_0754592e = true;
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
