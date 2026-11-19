// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.SkyboxCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/SkyboxCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/SkyboxCustomSkinLoader.cs
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

[Token(Token = "0x20003C2")]
internal class SkyboxCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003C3")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001352")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001353")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001354")]
		[FieldOffset(Offset = "0x20")]
		public SkyboxCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4001355")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4001356")]
		[FieldOffset(Offset = "0x30")]
		private List<int>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000294")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60017F9")]
			[Address(RVA = "0x5862630", Offset = "0x5861630", VA = "0x5862630", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000295")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60017FB")]
			[Address(RVA = "0x5862680", Offset = "0x5861680", VA = "0x5862680", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x5861E90", Offset = "0x5860E90", VA = "0x5861E90")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__4(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60017F6")]
		[Address(RVA = "0x5862180", Offset = "0x5861180", VA = "0x5862180", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.IDisposable.Dispose): clean
			int iVar1;

			iVar1 = this.__1__state;
			if ((iVar1 != 1) && (iVar1 != -3)) {
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x60017F7")]
		[Address(RVA = "0x58621D0", Offset = "0x58611D0", VA = "0x58621D0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$MoveNext): 15 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			SkyboxCustomSkinLoader __this_00;
			Object[] pSVar3;
			String url;
			Il2CppType handle;
			SkyboxCustomSkinLoader.d__4<LoadSkinsFromRPC> pCVar4;
			SkyboxCustomSkinLoader.d__4<LoadSkinsFromRPC>* ppCVar5;
			bool bVar6;
			Material pUVar7;
			Type enumType;
			IEnumerable source;
			System_Collections_Generic_IEnumerable_TResult__o source_00;
			System_Collections_Generic_List_TSource__o __this_01;
			BaseCustomSkinPart __this_02;
			BaseCustomSkinPart.d__11<LoadSkin> __this_03;
			Coroutine pUVar8;
			Il2CppType* method_00;
			byte[] auVar9 = new byte[16];
			SkyboxCustomSkinLoader.d__4<LoadSkinsFromRPC> pCStack_78;
			byte puStack_68;
			System_Collections_Generic_List_Enumerator_T__o SStack_60;

			pCStack_78 = this;
			if (Il2CppMethodInitialized_07545927 == false) {
				method_00 = &TypeRef_CustomSkins_SkyboxCustomSkinPartId;
				Il2CppMethodInitialized_07545927 = true;
			}
			puStack_68 = (byte)&pCStack_78;
			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -3;
				ppCVar5 = &pCStack_78;
				if (__this_00 == null) {
					bVar6 = (this.__7__wrap1).MoveNext();
					if (bVar6) {
						throw new NullReferenceException();
					}
					goto label_059624ed;
				}
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				puStack_68 = (byte)&pCStack_78;
				pUVar7 = SkyboxCustomSkinLoader.CreateSkyboxMaterial();
				SkyboxCustomSkinLoader.SkyboxMaterial = pUVar7;
				handle = TypeRef_CustomSkins_SkyboxCustomSkinPartId;
				enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				source = (IEnumerable)Enum.GetValues(enumType);
				source_00 = Enumerable.Cast<int>(source);
				__this_01 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				SStack_60 = __this_01.GetEnumerator();
				*(object*)&pCStack_78.__7__wrap1._current = SStack_60._current;
				pCStack_78.__7__wrap1._list = SStack_60._list;
				pCStack_78.__7__wrap1._index = SStack_60._index;
				pCStack_78.__7__wrap1._version = SStack_60._version;
				pCStack_78.__1__state = -3;
				ppCVar5 = (SkyboxCustomSkinLoader.d__4<LoadSkinsFromRPC>*)puStack_68;
			}
			while (true) {
				puStack_68 = (byte)ppCVar5;
				bVar6 = (pCStack_78.__7__wrap1).MoveNext();
				if (!(bVar6)) break;
				uVar2 = pCStack_78.__7__wrap1._current;
				auVar9 = (byte[])__this_00.GetCustomSkinPart(uVar2);
				__this_02 = auVar9._0_8_;
				pSVar3 = pCStack_78.data;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				if ((uint)pSVar3.Length <= uVar2) {
					throw new IndexOutOfRangeException();
				}
				url = (String)pSVar3[(int)uVar2];
				if ((url != null) && (url.klass != g_data_07556758)) {
					throw new InvalidCastException();
				}
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				bVar6 = __this_02.LoadCache(url);
				ppCVar5 = (SkyboxCustomSkinLoader.d__4<LoadSkinsFromRPC>*)puStack_68;
				if (!bVar6) {
					__this_03 = new BaseCustomSkinPart.d__11<LoadSkin>();
					__this_03.__1__state = 0;
					__this_03.__4__this = __this_02;
					__this_03.url = url;
					pUVar8 = __this_00.StartCoroutine((IEnumerator)__this_03);
					pCStack_78.__2__current = (object)pUVar8;
					pCStack_78.__1__state = 1;
					return true;
				}
			}
		label_059624ed: ;
			pCVar4 = pCStack_78;
			pCVar4.__1__state = -1;
			(pCVar4.__7__wrap1).Dispose();
			pCStack_78.__7__wrap1._list = null;
			pCStack_78.__7__wrap1._index = 0;
			pCStack_78.__7__wrap1._version = 0;
			*(ulong)&pCStack_78.__7__wrap1._current = 0;
			return false;
		}

		[Token(Token = "0x60017F8")]
		[Address(RVA = "0x58625F0", Offset = "0x58615F0", VA = "0x58625F0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x60017FA")]
		[Address(RVA = "0x5862640", Offset = "0x5861640", VA = "0x5862640", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomSkins_SkyboxCustomSkinLoader_LoadSkinsFromRPC_d__4_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001351")]
	[FieldOffset(Offset = "0x0")]
	public static Material SkyboxMaterial;

	[Token(Token = "0x17000293")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017EF")]
		[Address(RVA = "0x5861D30", Offset = "0x5860D30", VA = "0x5861D30", Slot = "4")]
		get
		{
			// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader$$get_RendererIdPrefix): clean
			return "skybox";
		}
	}

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x5861D60", Offset = "0x5860D60", VA = "0x5861D60")]
	public static Material CreateSkyboxMaterial()
	{
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader$$CreateSkyboxMaterial): clean
		String path;
		Material pUVar1;

		path = ResourcePaths.Weather;
		pUVar1 = ResourceManager.InstantiateAsset<Material>(path, "Skyboxes/EmptySkybox", true, false);
		return pUVar1;
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x5861E10", Offset = "0x5860E10", VA = "0x5861E10", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__4))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader$$LoadSkinsFromRPC): clean
		SkyboxCustomSkinLoader.d__4<LoadSkinsFromRPC> __this_00;

		__this_00 = new SkyboxCustomSkinLoader.d__4<LoadSkinsFromRPC>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.data = data;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x5861EB0", Offset = "0x5860EB0", VA = "0x5861EB0", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader$$GetCustomSkinPart): 3 lines keep C-only constructs
		Material pUVar1;
		String pSVar2;
		String pSVar3;
		String str1;
		SkyboxCustomSkinPart __this_00;
		Enum SStack_40;

		pUVar1 = SkyboxCustomSkinLoader.SkyboxMaterial;
		SStack_40.klass = (Enum)typeof(SkyboxCustomSkinPartId);
		SStack_40.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_40.ToString();
		pSVar2 = String.Concat("_", pSVar2, "Tex") ;
		SStack_40.klass = (Enum)CONCAT44(SStack_40.klass._4_4_, partId);
		pSVar3 = this.get_RendererIdPrefix();
		str1 = SStack_40.ToString();
		pSVar3 = String.Concat(pSVar3, str1);
		__this_00 = new SkyboxCustomSkinPart((BaseCustomSkinLoader)this, null, pSVar3, 2000000, (System_Nullable_Vector2__o)ZEXT812(0), false);
		__this_00._skyboxMaterial = pUVar1;
		__this_00._textureName = pSVar2;
		return (BaseCustomSkinPart)__this_00;
	}

	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x5862020", Offset = "0x5861020", VA = "0x5862020")]
	public string PartIdToTextureName(SkyboxCustomSkinPartId partId)
	{
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader$$PartIdToTextureName): 1 lines keep C-only constructs
		String pSVar1;
		Enum local_20;

		local_20.klass = (Enum)typeof(SkyboxCustomSkinPartId);
		local_20.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = local_20.ToString();
		pSVar1 = String.Concat("_", pSVar1, "Tex") ;
		return pSVar1;
	}

	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x5862110", Offset = "0x5861110", VA = "0x5862110")]
	public SkyboxCustomSkinLoader()
	{
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinLoader.c (CustomSkins.SkyboxCustomSkinLoader$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545926 == false) {
			Il2CppMethodInitialized_07545926 = true;
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
