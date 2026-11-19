// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.ErenCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/ErenCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/ErenCustomSkinLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x20003BC")]
internal class ErenCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003BD")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001328")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001329")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400132A")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x400132B")]
		[FieldOffset(Offset = "0x28")]
		public ErenCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x1700028D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60017E0")]
			[Address(RVA = "0x5860180", Offset = "0x585F180", VA = "0x5860180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700028E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60017E2")]
			[Address(RVA = "0x58601D0", Offset = "0x585F1D0", VA = "0x58601D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x585FE80", Offset = "0x585EE80", VA = "0x585FE80")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60017DE")]
		[Address(RVA = "0x5860010", Offset = "0x585F010", VA = "0x5860010", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60017DF")]
		[Address(RVA = "0x5860020", Offset = "0x585F020", VA = "0x5860020", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$MoveNext): 4 lines keep C-only constructs
			int iVar1;
			ErenCustomSkinLoader __this_00;
			Object[] pSVar2;
			String url;
			bool bVar3;
			BaseCustomSkinPart __this_01;
			BaseCustomSkinPart.d__11<LoadSkin> __this_02;
			Coroutine pUVar4;
			int iVar5;
			byte[] auVar6 = new byte[16];

			iVar1 = this.__1__state;
			bVar3 = false;
			if (iVar1 == 1) {
				iVar5 = -1;
		label_05960152: ;
				this.__1__state = iVar5;
				return bVar3;
			}
			if (iVar1 != 0) {
				return false;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			pSVar2 = this.data;
			if (pSVar2 != null) {
				if ((int)pSVar2.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				url = (String)pSVar2[0];
				if ((url != null) && (url.klass != g_data_07556758)) {
					throw new InvalidCastException();
				}
				if (__this_00 != null) {
					auVar6 = (byte[])__this_00.GetCustomSkinPart(0);
					__this_01 = auVar6._0_8_;
					if (__this_01 != null) {
						bVar3 = __this_01.LoadCache(url);
						if (bVar3) {
							return false;
						}
						__this_02 = new BaseCustomSkinPart.d__11<LoadSkin>();
						__this_02.__1__state = 0;
						__this_02.__4__this = __this_01;
						__this_02.url = url;
						pUVar4 = __this_00.StartCoroutine((IEnumerator)__this_02);
						this.__2__current = (object)pUVar4;
						bVar3 = true;
						iVar5 = 1;
						goto label_05960152;
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60017E1")]
		[Address(RVA = "0x5860190", Offset = "0x585F190", VA = "0x5860190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomSkins_ErenCustomSkinLoader_LoadSkinsFromRPC_d__2_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x1700028C")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017D9")]
		[Address(RVA = "0x585FDD0", Offset = "0x585EDD0", VA = "0x585FDD0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader$$get_RendererIdPrefix): clean
			return "eren";
		}
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x585FE00", Offset = "0x585EE00", VA = "0x585FE00", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader$$LoadSkinsFromRPC): clean
		ErenCustomSkinLoader.d__2<LoadSkinsFromRPC> __this_00;

		__this_00 = new ErenCustomSkinLoader.d__2<LoadSkinsFromRPC>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.data = data;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x585FEA0", Offset = "0x585EEA0", VA = "0x585FEA0", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader$$GetCustomSkinPart): 1 lines keep C-only constructs
		List<Renderer> renderers;
		String pSVar1;
		String str1;
		BaseCustomSkinPart __this_00;
		List<Renderer> __this_01;
		int iStack_24;

		__this_01 = renderers;
		renderers = new List<Renderer>();
		if (partId == 0) {
			__this_01.AddAllRenderers(renderers, this._owner);
			iStack_24 = 0;
			pSVar1 = this.get_RendererIdPrefix();
			str1 = iStack_24.ToString();
			pSVar1 = String.Concat(pSVar1, str1);
			__this_00 = new BaseCustomSkinPart((BaseCustomSkinLoader)this, renderers, pSVar1, 2000000, (System_Nullable_Vector2__o)ZEXT812(0), false);
		}
		else {
		}
		return __this_00;
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x585FFA0", Offset = "0x585EFA0", VA = "0x585FFA0")]
	public ErenCustomSkinLoader()
	{
		// Lifted from source/cpp/CustomSkins/ErenCustomSkinLoader.c (CustomSkins.ErenCustomSkinLoader$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754591a == false) {
			Il2CppMethodInitialized_0754591a = true;
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
