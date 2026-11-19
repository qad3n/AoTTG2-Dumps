// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.BaseCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/BaseCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/BaseCustomSkinPart.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace CustomSkins;

[Token(Token = "0x20003C8")]
internal class BaseCustomSkinPart
{
	[Token(Token = "0x20003CA")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001375")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001376")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001377")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x4001378")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseCustomSkinPart _003C_003E4__this;

		[Token(Token = "0x4001379")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private string _003Cid_003E5__2;

		[Token(Token = "0x400137A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private CoroutineWithData _003Ccwd_003E5__3;

		[Token(Token = "0x1700029A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600181B")]
			[Address(RVA = "0x5864C80", Offset = "0x5863C80", VA = "0x5864C80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700029B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600181D")]
			[Address(RVA = "0x5864CD0", Offset = "0x5863CD0", VA = "0x5864CD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001818")]
		[Address(RVA = "0x5863610", Offset = "0x5862610", VA = "0x5863610")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__11(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001819")]
		[Address(RVA = "0x5864150", Offset = "0x5863150", VA = "0x5864150", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600181A")]
		[Address(RVA = "0x5864160", Offset = "0x5863160", VA = "0x5864160", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$MoveNext): 9 lines keep C-only constructs
			String* targetAddress;
			int iVar1;
			int iVar2;
			BaseCustomSkinPart __this_00;
			BaseCustomSkinLoader pCVar3;
			String str2;
			Dictionary<object, object> pSVar4;
			Texture texture;
			GraphicsSettings pSVar5;
			BoolSetting pSVar6;
			bool bVar7;
			bool bVar8;
			String pSVar9;
			Material material;
			TextureDownloader.d__10<DownloadTexture> __this_01;
			CoroutineWithData pUVar10;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 != 2) {
				if (iVar1 == 1) {
					this.__1__state = -1;
				}
				else {
					if (iVar1 != 0) {
						return false;
					}
					this.__1__state = -1;
					pSVar9 = this.url;
					if (pSVar9 == null) goto label_05964727;
					targetAddress = &this.url;
					pSVar9 = pSVar9.Trim();
					*targetAddress = pSVar9;
					if (*targetAddress == null) goto label_05964727;
					bVar7 = (*targetAddress).Contains("http://");
					if (bVar7) {
						if (*targetAddress == null) goto label_05964727;
						pSVar9 = (*targetAddress).Replace("http://", "https://");
						*targetAddress = pSVar9;
					}
					if (__this_00 == null) goto label_05964727;
					bVar7 = __this_00.IsValidPart();
					if (!bVar7) {
						return false;
					}
					pCVar3 = __this_00._loader;
					if (pCVar3 == null) goto label_05964727;
					pSVar9 = *targetAddress;
					bVar7 = pCVar3.get_AllowLocalFileTextures();
					if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) {
					}
					bVar7 = TextureDownloader.ValidTextureURL(pSVar9, bVar7);
					if (!bVar7) {
						return false;
					}
					pSVar9 = __this_00._rendererId;
					str2 = *targetAddress;
					method = (MethodInfo)String.Concat(pSVar9, ",", str2);
					this._id_5__2 = (String)method;
				}
				pSVar9 = this._id_5__2;
				if ((typeof(MaterialCache)._2).cctor_finished_or_no_cctor == 0) {
					bVar7 = MaterialCache.IsDownloading(pSVar9);
				}
				else {
					bVar7 = MaterialCache.IsDownloading(pSVar9);
				}
				if (bVar7) {
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
				if (__this_00 == null) goto label_05964727;
				bVar7 = __this_00.LoadCache(this.url);
				if (bVar7) {
					return false;
				}
				pSVar9 = this._id_5__2;
				pCVar3 = __this_00._loader;
				if ((typeof(MaterialCache)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_07545950 != false) goto label_0596444e;
		label_05964593: ;
					g_data_07545950 = true;
					if ((typeof(MaterialCache)._2).cctor_finished_or_no_cctor != 0) goto label_0596445f;
		label_059645c3: ;
					pSVar4 = (Dictionary<object, object>)MaterialCache._idToDownloadOwner;
				}
				else {
					if (g_data_07545950 == false) goto label_05964593;
		label_0596444e: ;
					if ((typeof(MaterialCache)._2).cctor_finished_or_no_cctor == 0) goto label_059645c3;
		label_0596445f: ;
					pSVar4 = (Dictionary<object, object>)MaterialCache._idToDownloadOwner;
				}
				if (pSVar4 != null) {
					pSVar4.set_Item((object)pSVar9, (object)pCVar3);
					pSVar5 = SettingsManager.GraphicsSettings;
					if (((pSVar5 != null) &&(pSVar6 = pSVar5.MipmapEnabled, pSVar6 != null)) &&(pCVar3 = __this_00._loader, pCVar3 != null)) {
						bVar7 = pSVar6._value;
						pSVar9 = this.url;
						iVar2 = __this_00._maxSize;
						bVar8 = pCVar3.get_AllowLocalFileTextures();
						__this_01 = new TextureDownloader.d__10<DownloadTexture>();
						__this_01.__1__state = 0;
						__this_01.url = pSVar9;
						__this_01.mipmap = bVar7;
						__this_01.maxSize = iVar2;
						__this_01.allowLocalFile = bVar8;
						pUVar10 = new CoroutineWithData((MonoBehaviour)pCVar3, (IEnumerator)__this_01);
						this._cwd_5__3 = pUVar10;
						pUVar10 = this._cwd_5__3;
						if (pUVar10 != null) {
							this.__2__current = (object)pUVar10._Coroutine_k__BackingField;
							this.__1__state = 2;
							return true;
						}
					}
				}
				goto label_05964727;
			}
			this.__1__state = -1;
			pSVar9 = this._id_5__2;
			if ((typeof(MaterialCache)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545951 != false) goto label_05964384;
		label_0596448a: ;
				g_data_07545951 = true;
				if ((typeof(MaterialCache)._2).cctor_finished_or_no_cctor != 0) goto label_05964395;
		label_059644ba: ;
				pSVar4 = (Dictionary<object, object>)MaterialCache._idToDownloadOwner;
			}
			else {
				if (g_data_07545951 == false) goto label_0596448a;
		label_05964384: ;
				if ((typeof(MaterialCache)._2).cctor_finished_or_no_cctor == 0) goto label_059644ba;
		label_05964395: ;
				pSVar4 = (Dictionary<object, object>)MaterialCache._idToDownloadOwner;
			}
			if ((pSVar4 == null) ||(pSVar4.Remove((object)pSVar9), __this_00 == null)) {
		label_05964727: ;
				throw new NullReferenceException();
			}
			bVar7 = __this_00.IsValidPart();
			if (bVar7) {
				pUVar10 = this._cwd_5__3;
				if (pUVar10 == null) goto label_05964727;
				texture = (Texture)pUVar10.Result;
				if ((texture != null) &&(texture.klass != (Texture)typeof(Texture2D))) {
					throw new InvalidCastException();
				}
				pSVar9 = this._id_5__2;
				material = __this_00.SetNewTexture((Texture2D)texture);
				MaterialCache.SetMaterial(pSVar9, material, texture);
			}
			return false;
		}

		[Token(Token = "0x600181C")]
		[Address(RVA = "0x5864C90", Offset = "0x5863C90", VA = "0x5864C90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400136A")]
	protected const string CharacterEffectShaderName = "Custom/CharacterEffectShader";

	[Token(Token = "0x400136B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected BaseCustomSkinLoader _loader;

	[Token(Token = "0x400136C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected List<Renderer> _renderers;

	[Token(Token = "0x400136D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected string _rendererId;

	[Token(Token = "0x400136E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected int _maxSize;

	[Token(Token = "0x400136F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	protected Vector2 _textureScale;

	[Token(Token = "0x4001370")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	protected readonly Vector2 _defaultTextureScale;

	[Token(Token = "0x4001371")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	protected bool _useTransparentMaterial;

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x585EC60", Offset = "0x585DC60", VA = "0x585EC60")]
	public BaseCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale, bool useTransparentMaterial = false)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$.ctor): 1 lines keep C-only constructs
		Vector2 UVar1;
		System_Nullable_Vector2__Fields local_40;

		local_40.value.y = textureScale.value.y;
		local_40._0_8_ = textureScale._0_8_;
		this._defaultTextureScale = (Vector2)0x3f8000003f800000;
		base();
		this._loader = loader;
		this._renderers = renderers;
		this._rendererId = rendererId;
		this._maxSize = maxSize;
		if (textureScale.hasValue == false) {
			this._textureScale = this._defaultTextureScale;
		}
		else {
			UVar1 = (Vector2)local_40.Value;
			this._textureScale = UVar1;
		}
		this._useTransparentMaterial = useTransparentMaterial;
		return;
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x585EF30", Offset = "0x585DF30", VA = "0x585EF30")]
	public bool LoadCache(string url)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$LoadCache): clean
		BaseCustomSkinLoader pCVar2;
		bool bVar3;
		String pSVar4;
		Material pUVar5;
		MethodInfo pMVar6;

		if (url == null) {
	label_0595f0dd: ;
			throw new NullReferenceException();
		}
		pSVar4 = url.ToLower();
		bVar3 = (pSVar4 == BaseCustomSkinLoader.TransparentURL);
		if (bVar3) {
			this.DisableRenderers();
		}
		else {
			bVar3 = this.IsValidPart();
			if (!bVar3) {
				return true;
			}
			pCVar2 = this._loader;
			if (pCVar2 == null) goto label_0595f0dd;
			bVar3 = pCVar2.get_AllowLocalFileTextures();
			if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = TextureDownloader.ValidTextureURL(url, bVar3);
			if (!bVar3) {
				return true;
			}
			pSVar4 = this._rendererId;
			pMVar6 = (MethodInfo *)",";
			pSVar4 = String.Concat(pSVar4, ",", url);
			bVar3 = MaterialCache.ContainsKey(pSVar4);
			if (!bVar3) {
				return false;
			}
			pUVar5 = MaterialCache.GetMaterial(pSVar4);
			this.SetMaterial(pUVar5);
		}
		return true;
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x5863540", Offset = "0x5862540", VA = "0x5863540")]
	protected bool IsCharacterEffectMaterial(Material material)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$IsCharacterEffectMaterial): clean
		bool bVar1;
		Object pUVar2;
		String a;

		bVar1 = ((Object)material != null);
		if (!bVar1) {
			return false;
		}
		if (material != null) {
			pUVar2 = (Object)material.shader;
			bVar1 = (pUVar2 != null);
			if (!bVar1) {
				return false;
			}
			pUVar2 = (Object)material.shader;
			if (pUVar2 != null) {
				a = pUVar2.name;
				bVar1 = (a == "Custom/CharacterEffectShader");
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600180B")]
	[Address(RVA = "0x585F0F0", Offset = "0x585E0F0", VA = "0x585F0F0")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__11))]
	public IEnumerator LoadSkin(string url)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$LoadSkin): 1 lines keep C-only constructs
		BaseCustomSkinPart.d__11<LoadSkin> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(BaseCustomSkinPart.d__11<LoadSkin>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.url = url;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600180C")]
	[Address(RVA = "0x5863630", Offset = "0x5862630", VA = "0x5863630", Slot = "4")]
	protected virtual bool IsValidPart()
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$IsValidPart): 3 lines keep C-only constructs
		List<Renderer> __this_00;
		object x;
		bool bVar1;
		bool bVar2;
		int iVar3;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		byte puStack_30;

		if (Il2CppMethodInitialized_07545933 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Count) ;
			Il2CppMethodInitialized_07545933 = true;
		}
		SStack_58._list = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._current = null;
		__this_00 = this._renderers;
		if ((__this_00 == null) || (__this_00._size == 0)) {
			bVar1 = false;
		}
		else {
			SStack_58 = __this_00.GetEnumerator();
			puStack_30 = (byte)&SStack_58;
			do {
				bVar1 = SStack_58.MoveNext();
				x = SStack_58._current;
				if (!bVar1) {
					iVar3 = 7;
					goto label_05963738;
				}
				bVar2 = ((Object)x != null);
			} while (!bVar2);
			iVar3 = 6;
	label_05963738: ;
			SStack_58.Dispose();
			bVar1 = iVar3 == 6 && bVar1;
		}
		return bVar1;
	}

	[Token(Token = "0x600180D")]
	[Address(RVA = "0x58637D0", Offset = "0x58627D0", VA = "0x58637D0", Slot = "5")]
	protected virtual void DisableRenderers()
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$DisableRenderers): 2 lines keep C-only constructs
		List<Renderer> __this_00;
		object x;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if (this._useTransparentMaterial != false) {
			this.SetMaterial(MaterialCache.TransparentMaterial);
			return;
		}
		__this_00 = this._renderers;
		if (__this_00 != null) {
			local_48 = __this_00.GetEnumerator();
			local_28 = (byte)&local_48;
			while(true) {
				bVar1 = local_48.MoveNext();
				x = local_48._current;
				if (!bVar1) break;
				bVar1 = ((Object)x != null);
				if (bVar1) {
					if ((Object)x == null) {
						throw new NullReferenceException();
					}
					x.enabled = false;
				}
			}
			local_48.Dispose();
		}
		return;
	}

	[Token(Token = "0x600180E")]
	[Address(RVA = "0x58639B0", Offset = "0x58629B0", VA = "0x58639B0", Slot = "6")]
	protected virtual void SetMaterial(Material material)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$SetMaterial): 2 lines keep C-only constructs
		List<Renderer> __this_00;
		object x;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this_00 = this._renderers;
		if (__this_00 != null) {
			local_58 = __this_00.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar1 = local_58.MoveNext();
				x = local_58._current;
				if (!bVar1) break;
				bVar1 = ((Object)x != null);
				if (bVar1) {
					if ((Object)x == null) {
						throw new NullReferenceException();
					}
					x.material = material;
				}
			}
			local_58.Dispose();
		}
		return;
	}

	[Token(Token = "0x600180F")]
	[Address(RVA = "0x5863B40", Offset = "0x5862B40", VA = "0x5863B40", Slot = "7")]
	protected virtual Material CreateMaterial()
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$CreateMaterial): 8 lines keep C-only constructs
		List<Renderer> source;
		object pIVar1;
		bool bVar2;
		Func<Renderer, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		CustomSkins_BaseCustomSkinPart___c_StaticFields pCVar3;
		Func<Renderer, Material> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o source_01;
		Func<Material, bool> __this_02;
		Material pUVar4;
		Material __this_03;

		source = this._renderers;
		if ((typeof(BaseCustomSkinPart.c)._2).cctor_finished_or_no_cctor == 0) {
			pCVar3 = typeof(BaseCustomSkinPart.c).static_fields;
			__this_00 = pCVar3.__9__15_0;
		}
		else {
			pCVar3 = typeof(BaseCustomSkinPart.c).static_fields;
			__this_00 = pCVar3.__9__15_0;
		}
		if (__this_00 == null) {
			if (((typeof(BaseCustomSkinPart.c))._2).cctor_finished_or_no_cctor == 0) {
				pCVar3 = typeof(BaseCustomSkinPart.c).static_fields;
			}
			pIVar1 = (object)pCVar3.__9;
			__this_00 = new Func<Renderer, bool>(pIVar1, (intptr_t)MethodInfo_CustomSkins_BaseCustomSkinPart_c_CreateMaterial_b__15_0);
			pCVar3 = typeof(BaseCustomSkinPart.c).static_fields;
			pCVar3.__9__15_0 = __this_00;
		}
		source_00 = Enumerable.Where<Renderer>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		if ((typeof(BaseCustomSkinPart.c)._2).cctor_finished_or_no_cctor == 0) {
			pCVar3 = typeof(BaseCustomSkinPart.c).static_fields;
			__this_01 = pCVar3.__9__15_1;
		}
		else {
			pCVar3 = typeof(BaseCustomSkinPart.c).static_fields;
			__this_01 = pCVar3.__9__15_1;
		}
		if (__this_01 == null) {
			if (((typeof(BaseCustomSkinPart.c))._2).cctor_finished_or_no_cctor == 0) {
				pCVar3 = typeof(BaseCustomSkinPart.c).static_fields;
			}
			pIVar1 = (object)pCVar3.__9;
			__this_01 = new Func<Renderer, Material>(pIVar1, (intptr_t)MethodInfo_CustomSkins_BaseCustomSkinPart_c_CreateMaterial_b__15_1);
			pCVar3 = typeof(BaseCustomSkinPart.c).static_fields;
			pCVar3.__9__15_1 = __this_01;
		}
		source_01 = Enumerable.Select<Renderer, Material>(source_00, (System_Func_TSource__TResult__o)__this_01);
		__this_02 = new Func<Material, bool>((object)this, (intptr_t)MethodInfo_CustomSkins_BaseCustomSkinPart_CreateMaterial_b__15_2);
		pUVar4 = Enumerable.FirstOrDefault<Material>((System_Collections_Generic_IEnumerable_TSource__o)source_01, (System_Func_TSource__bool__o)__this_02);
		bVar2 = ((Object)pUVar4 != null);
		if (bVar2) {
			__this_03 = new Material(pUVar4);
			return __this_03;
		}
		pUVar4 = HumanSetupMaterials.GetCustomSkinMaterial();
		return pUVar4;
	}

	[Token(Token = "0x6001810")]
	[Address(RVA = "0x5863E30", Offset = "0x5862E30", VA = "0x5863E30", Slot = "8")]
	protected virtual Material SetNewTexture(Texture2D texture)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$SetNewTexture): 1 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		List<Renderer> pSVar3;
		bool bVar4;
		Object x;
		Renderer __this_00;
		Material pUVar5;
		float fVar6;
		float fVar8;
		Vector2 UVar7;
		Vector2 value;

		if (Il2CppMethodInitialized_07545937 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Count) ;
			Il2CppMethodInitialized_07545937 = true;
		}
		pSVar3 = this._renderers;
		if ((pSVar3 != null) && (pSVar3._size != 0)) {
			x = (Object)pSVar3.get_Item(0);
			bVar4 = (x == null);
			if (!bVar4) {
				pSVar3 = this._renderers;
				if ((pSVar3 != null) &&(__this_00 = pSVar3.get_Item(0), __this_00 != null)) {
					pUVar5 = __this_00.sharedMaterial;
					bVar4 = ((Object)pUVar5 == null);
					if (bVar4) {
						return null;
					}
					pUVar5 = this.CreateMaterial();
					if (pUVar5 != null) {
						pUVar5.mainTexture = (Texture)texture;
						UVar1 = this._textureScale;
						UVar2 = this._defaultTextureScale;
						fVar6 = UVar1.x - UVar2.x;
						fVar8 = UVar1.y - UVar2.y;
						if (9.9999994e-11 <= fVar8 * fVar8 + fVar6 * fVar6) {
							UVar7 = pUVar5.mainTextureScale;
							UVar1 = this._textureScale;
							value.x = UVar7.x * UVar1.x;
							value.y = UVar7.y * UVar1.y;
							pUVar5.mainTextureScale = value;
							pUVar5.mainTextureOffset = (Vector2)0x0;
						}
						this.SetMaterial(pUVar5);
						return pUVar5;
					}
				}
				throw new NullReferenceException();
			}
		}
		return null;
	}

	[Token(Token = "0x6001811")]
	[Address(RVA = "0x5863FE0", Offset = "0x5862FE0", VA = "0x5863FE0")]
	public string GetRendererId()
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$GetRendererId): clean
		return this._rendererId;
	}

	[Token(Token = "0x6001812")]
	[Address(RVA = "0x5861AD0", Offset = "0x5860AD0", VA = "0x5861AD0")]
	public void ResetToDefault()
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c (CustomSkins.BaseCustomSkinPart$$ResetToDefault): 6 lines keep C-only constructs
		List<Renderer> __this_00;
		object x;
		bool bVar1;
		Material pUVar2;
		byte[] local_60 = new byte[16];
		Object local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		bVar1 = this.IsValidPart();
		if ((bVar1) &&(__this_00 = this._renderers, __this_00 != null )) {
			local_60.GetEnumerator((List<object>)__this_00);
			local_48._current = (object)local_50;
			local_48._list = (List<T>)local_60._0_8_;
			local_48._index = local_60._8_4_;
			local_48._version = local_60._12_4_;
			local_60._0_8_ = null;
			local_60._8_8_ = &local_48;
			while(true) {
				bVar1 = local_48.MoveNext();
				x = local_48._current;
				if (!bVar1) break;
				bVar1 = ((Object)x != null);
				if (bVar1) {
					if ((Object)x == null) {
						throw new NullReferenceException();
					}
					x.enabled = true;
					pUVar2 = x.sharedMaterial;
					bVar1 = ((Object)pUVar2 != null);
					if (bVar1) {
						pUVar2 = x.sharedMaterial;
						x.material = pUVar2;
					}
				}
			}
			local_48.Dispose();
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomSkins/BaseCustomSkinPart.c.

	// CustomSkins.BaseCustomSkinPart$$<CreateMaterial>b__15_2: clean
	private bool CreateMaterial_b__15_2(Material material)
	{
		bool bVar1;
		bool bVar2;
		BaseCustomSkinPart __this_00;

		bVar2 = false;
		__this_00 = (BaseCustomSkinPart)material;
		bVar1 = ((Object)material != null);
		if (bVar1) {
			bVar2 = __this_00.IsCharacterEffectMaterial(material);
			bVar2 = !bVar2;
		}
		return bVar2;
	}

	// CustomSkins.BaseCustomSkinPart.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(BaseCustomSkinPart.c)) ;
		__this = new Object();
		BaseCustomSkinPart.c.__9 =(BaseCustomSkinPart.c)__this;
		return;
	}

	// CustomSkins.BaseCustomSkinPart.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomSkins.BaseCustomSkinPart.<>c$$<CreateMaterial>b__15_0: clean
	private bool c__CreateMaterial_b__15_0(Renderer renderer)
	{
		bool bVar1;

		bVar1 = ((Object)renderer != null);
		return bVar1;
	}

	// CustomSkins.BaseCustomSkinPart.<>c$$<CreateMaterial>b__15_1: clean
	private Material c__CreateMaterial_b__15_1(Renderer renderer)
	{
		Material pUVar1;

		if (renderer == null) {
			throw new NullReferenceException();
		}
		return pUVar1;
	}
}
