// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Diagnostics;
using Gisketch.Aottg2UI.Styling;
using Gisketch.Aottg2UI.Virtualization;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000091")]
public sealed class GisketchGridPickerRuntime : MonoBehaviour, IGisketchVirtualContentSource
{
	[Token(Token = "0x2000092")]
	private sealed class CardSlot
	{
		[Token(Token = "0x4000319")]
		[FieldOffset(Offset = "0x10")]
		public readonly GameObject Root;

		[Token(Token = "0x400031A")]
		[FieldOffset(Offset = "0x18")]
		public readonly RectTransform Rect;

		[Token(Token = "0x400031B")]
		[FieldOffset(Offset = "0x20")]
		public readonly Button Button;

		[Token(Token = "0x400031C")]
		[FieldOffset(Offset = "0x28")]
		public readonly Image Thumbnail;

		[Token(Token = "0x400031D")]
		[FieldOffset(Offset = "0x30")]
		public readonly TextMeshProUGUI Label;

		[Token(Token = "0x6000496")]
		[Address(RVA = "0x526F470", Offset = "0x526E470", VA = "0x526F470")]
		public CardSlot(GameObject root, RectTransform rect, Button button, Image thumbnail, TextMeshProUGUI label)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.CardSlot$$.ctor): clean
			base();
			this.Root = root;
			this.Rect = rect;
			this.Button = button;
			this.Thumbnail = thumbnail;
			this.Label = label;
			return;
		}
	}

	[Token(Token = "0x2000093")]
	private sealed class ThumbnailTarget : MonoBehaviour
	{
		[Token(Token = "0x400031E")]
		[FieldOffset(Offset = "0x20")]
		public string ResourcePath;

		[Token(Token = "0x400031F")]
		[FieldOffset(Offset = "0x28")]
		public int Generation;

		[Token(Token = "0x6000497")]
		[Address(RVA = "0x5270130", Offset = "0x526F130", VA = "0x5270130")]
		public ThumbnailTarget()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.ThumbnailTarget$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x2000094")]
	private sealed class CardSlotHost : MonoBehaviour
	{
		[Token(Token = "0x4000320")]
		[FieldOffset(Offset = "0x20")]
		public CardSlot Slot;

		[Token(Token = "0x6000498")]
		[Address(RVA = "0x5270140", Offset = "0x526F140", VA = "0x5270140")]
		public CardSlotHost()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.CardSlotHost$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x2000095")]
	private readonly struct ThumbnailLoad
	{
		[Token(Token = "0x4000321")]
		[FieldOffset(Offset = "0x0")]
		public readonly Image Image;

		[Token(Token = "0x4000322")]
		[FieldOffset(Offset = "0x8")]
		public readonly string ResourcePath;

		[Token(Token = "0x4000323")]
		[FieldOffset(Offset = "0x10")]
		public readonly int Generation;

		[Token(Token = "0x6000499")]
		[Address(RVA = "0x526FBB0", Offset = "0x526EBB0", VA = "0x526FBB0")]
		public ThumbnailLoad(Image image, string resourcePath, int generation)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.ThumbnailLoad$$.ctor): clean
			this.Image = image;
			this.ResourcePath = resourcePath;
			this.Generation = generation;
			return;
		}
	}

	[Token(Token = "0x2000099")]
	[CompilerGenerated]
	private sealed class _003CBuildCards_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400032D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400032E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400032F")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x4000330")]
		[FieldOffset(Offset = "0x28")]
		private GisketchUiPerfLog.Scope _003C_003E7__wrap1;

		[Token(Token = "0x4000331")]
		[FieldOffset(Offset = "0x48")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x1700008F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60004A4")]
			[Address(RVA = "0x52709F0", Offset = "0x526F9F0", VA = "0x52709F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__33$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000090")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004A6")]
			[Address(RVA = "0x5270A40", Offset = "0x526FA40", VA = "0x5270A40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__33$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x526DB90", Offset = "0x526CB90", VA = "0x526DB90")]
		[DebuggerHidden]
		public _003CBuildCards_003Ed__33(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__33$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x5270380", Offset = "0x526F380", VA = "0x5270380", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__33$$System.IDisposable.Dispose): clean
			int iVar1;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				(this.__7__wrap1).Dispose();
				return;
			}
			return;
		}

		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x52703A0", Offset = "0x526F3A0", VA = "0x52703A0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__33$$MoveNext): 14 lines keep C-only constructs
			int iVar1;
			GisketchGridPickerRuntime __this_00;
			GisketchGridPicker.RuntimeDefinition pGVar2;
			GisketchGridPickerItem[] pGVar3;
			GisketchGridPickerItem item;
			uint uVar4;
			String pSVar5;
			String[] values;
			String pSVar6;
			GisketchGridPicker.RuntimeDefinition pGVar7;
			uint index;
			List<GisketchGridPickerItem> pSVar8;
			uint local_a4;
			GisketchGridPickerRuntime.d__33<BuildCards> local_a0;
			GisketchGridPickerRuntime.d__33<BuildCards>* local_90;
			GisketchGridPickerItem local_88;
			byte[] local_40 = new byte[32];

			local_a0 = this;
			local_a4 = 0;
			local_90 = &local_a0;
			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -3;
				uVar4 = this._i_5__3;
				index = uVar4 + 1;
				goto label_05370796;
			}
			if (iVar1 == 0) {
				this.__1__state = -1;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pGVar2 = __this_00._definition;
				if (pGVar2 == null) {
					pGVar7 = *(GisketchGridPicker.RuntimeDefinition*)(g_data_07556758 + 0xb8);
				}
				else {
					pGVar7 = &pGVar2.fields;
				}
				pSVar5 = String.Concat(pGVar7.Id, " query='", __this_00._query, "'");
				GisketchUiPerfLog.Time((GisketchUiPerfLog.Scope)local_40, "GridPicker.BuildCards", pSVar5);
				local_88.Sprite = (String)local_40._16_8_;
				local_88.Keywords = (String)local_40._24_8_;
				local_88.Key = (String)local_40._0_8_;
				local_88.Label = (String)local_40._8_8_;
				local_a0.__7__wrap1._startMs = local_40._16_8_;
				local_a0.__7__wrap1._enabled = (bool)local_40[0x18];
				local_a0.__7__wrap1._hotLoop = (bool)local_40[0x19];
				*(undefined6)&local_a0.__7__wrap1.field_0x1a = local_40._26_6_;
				local_a0.__7__wrap1._area = (String)local_40._0_8_;
				local_a0.__7__wrap1._detail = (String)local_40._8_8_;
				local_a0.__1__state = -3;
				values = (String[])new string[5];
				pGVar2 = __this_00._definition;
				if (pGVar2 == null) {
					pGVar7 = *(GisketchGridPicker.RuntimeDefinition*)(g_data_07556758 + 0xb8);
				}
				else {
					pGVar7 = &pGVar2.fields;
				}
				if (values == null) {
					throw new NullReferenceException();
				}
				if ((int)values.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				values[0] = pGVar7.Id;
				if ((values.Length & 0xfffffffe) == 0) {
					throw new IndexOutOfRangeException();
				}
				values[1] = " filtered=";
				pSVar8 = __this_00._filtered;
				if (pSVar8 == null) {
					throw new NullReferenceException();
				}
				local_a4 = pSVar8._size;
				pSVar5 = local_a4.ToString();
				if ((uint)values.Length < 3) {
					throw new IndexOutOfRangeException();
				}
				values[2] = pSVar5;
				if ((values.Length & 0xfffffffc) == 0) {
					throw new IndexOutOfRangeException();
				}
				values[3] = " total=";
				pGVar2 = __this_00._definition;
				local_a4 = 0;
				if ((pGVar2 != null) &&(pGVar3 = pGVar2.Items, pGVar3 != null) ) {
					local_a4 = (uint)pGVar3.Length;
				}
				pSVar5 = local_a4.ToString();
				if ((uint)values.Length < 5) {
					throw new IndexOutOfRangeException();
				}
				values[4] = pSVar5;
				pSVar5 = String.Concat(values);
				index = 0;
				GisketchUiPerfLog.Mark("GridPicker.BuildCards", pSVar5);
				local_a0._i_5__3 = 0;
				while(true) {
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pSVar8 = __this_00._filtered;
					if (pSVar8 == null) {
						throw new NullReferenceException();
					}
					if (pSVar8._size <= (int)index) break;
					local_88 = pSVar8.get_Item(index);
					item.Label = local_88.Label;
					item.Key = local_88.Key;
					item.Sprite = local_88.Sprite;
					item.Keywords = local_88.Keywords;
					__this_00.CreateCard(item, (int32_t)pSVar8);
					uVar4 = local_a0._i_5__3;
					local_a4 = uVar4 + 1;
					this = local_a0;
					index = local_a4;
					if ((0x17 < (int)local_a4) && ((local_a4 / 0xc) * -0xc + uVar4 == -1)) {
						pGVar2 = __this_00._definition;
						if (pGVar2 == null) {
							pGVar7 = *(GisketchGridPicker.RuntimeDefinition*)(g_data_07556758 + 0xb8);
						}
						else {
							pGVar7 = &pGVar2.fields;
						}
						pSVar5 = pGVar7.Id;
						pSVar6 = local_a4.ToString();
						pSVar5 = String.Concat(pSVar5, " yield built=", pSVar6);
						GisketchUiPerfLog.Mark("GridPicker.BuildCards", pSVar5);
						local_a0.__2__current = null;
						local_a0.__1__state = 1;
						return true;
					}
		label_05370796: ;
					this._i_5__3 = index;
					local_a4 = uVar4;
				}
				__this_00._build = null;
				pGVar2 = __this_00._definition;
				if (pGVar2 == null) {
					pGVar7 = *(GisketchGridPicker.RuntimeDefinition*)(g_data_07556758 + 0xb8);
					pSVar8 = __this_00._filtered;
				}
				else {
					pGVar7 = &pGVar2.fields;
					pSVar8 = __this_00._filtered;
				}
				if (pSVar8 == null) {
					throw new NullReferenceException();
				}
				pSVar5 = pGVar7.Id;
				local_a4 = pSVar8._size;
				pSVar6 = local_a4.ToString();
				pSVar5 = String.Concat(pSVar5, " complete built=", pSVar6);
				GisketchUiPerfLog.Mark("GridPicker.BuildCards", pSVar5);
				local_a0.__1__state = -1;
				(local_a0.__7__wrap1).Dispose();
				local_a0.__7__wrap1._startMs = 0;
				local_a0.__7__wrap1._enabled = false;
				local_a0.__7__wrap1._hotLoop = false;
				*(undefined6)&local_a0.__7__wrap1.field_0x1a = 0;
				local_a0.__7__wrap1._area = null;
				local_a0.__7__wrap1._detail = null;
			}
			return false;
		}

		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x52709D0", Offset = "0x526F9D0", VA = "0x52709D0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__33$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x5270A00", Offset = "0x526FA00", VA = "0x5270A00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__33$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_BuildCards_d__33_System_Collections_IEnumerator);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200009A")]
	[CompilerGenerated]
	private sealed class _003CLoadThumbnails_003Ed__56 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000332")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000333")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000334")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x4000335")]
		[FieldOffset(Offset = "0x28")]
		public int generation;

		[Token(Token = "0x4000336")]
		[FieldOffset(Offset = "0x2C")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x4000337")]
		[FieldOffset(Offset = "0x30")]
		private ThumbnailLoad _003Cload_003E5__3;

		[Token(Token = "0x4000338")]
		[FieldOffset(Offset = "0x48")]
		private ResourceRequest _003Crequest_003E5__4;

		[Token(Token = "0x17000091")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60004AA")]
			[Address(RVA = "0x5270E90", Offset = "0x526FE90", VA = "0x5270E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__56$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000092")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004AC")]
			[Address(RVA = "0x5270EE0", Offset = "0x526FEE0", VA = "0x5270EE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__56$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x526FBE0", Offset = "0x526EBE0", VA = "0x526FBE0")]
		[DebuggerHidden]
		public _003CLoadThumbnails_003Ed__56(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__56$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x5270A50", Offset = "0x526FA50", VA = "0x5270A50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__56$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x5270A60", Offset = "0x526FA60", VA = "0x5270A60", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__56$$MoveNext): 8 lines keep C-only constructs
			int piVar1;
			GisketchGridPickerRuntime.ThumbnailLoad targetAddress;
			uint uVar2;
			int index;
			GisketchGridPickerRuntime pGVar3;
			GisketchGridPicker.RuntimeDefinition pGVar4;
			List<string> __this_00;
			String[] pSVar5;
			List<GisketchGridPickerRuntime.ThumbnailLoad> __this_01;
			String pSVar6;
			Image __this_02;
			bool bVar7;
			Object pUVar8;
			ResourceRequest pUVar9;
			uint method_00;
			Object x;
			Sprite pUStack_50;
			GisketchGridPickerRuntime.ThumbnailLoad GStack_48;

			pUStack_50 = null;
			uVar2 = this.__1__state;
			if (uVar2 < 5) {
				pGVar3 = this.__4__this;
				method_00 = &switchD_05370b00::switchdataD_01010930;
				switch(uVar2) {
				case 0:
					this.__1__state = -1;
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				case 1:
					this.__1__state = -1;
					this._index_5__2 = 0;
					break;
				case 2:
					this.__1__state = -1;
					break;
				case 3:
					this.__1__state = -1;
					bVar7 = GisketchGridPickerRuntime.IsCurrent((GisketchGridPickerRuntime.ThumbnailLoad)this._load_5__3, this.generation);
					if (bVar7) {
						pUVar9 = this._request_5__4;
						if (pUVar9 == null) goto label_05370e89;
						pUVar8 = pUVar9.asset;
						x = null;
						if (pUVar8 != null) {
							method_00 = (uint)&typeof(Sprite);
							x = null;
							if (pUVar8.klass == (Object)typeof(Sprite)) {
								x = pUVar8;
							}
						}
						bVar7 = (x == null);
						if (!bVar7) {
							pSVar6 = this._load_5__3.ResourcePath;
							GisketchSpriteLoader.Store(pSVar6, (Sprite)x);
							if ((pGVar3 == null) ||(pGVar4 = pGVar3._definition, pGVar4 == null)) goto label_05370e89;
							if (pGVar4.ReleaseThumbnails != false) {
								__this_00 = pGVar3._loadedThumbnails;
								if (__this_00 == null) goto label_05370e89;
								pSVar6 = this._load_5__3.ResourcePath;
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar5 = __this_00._items;
								if (pSVar5 == null) goto label_05370e89;
								uVar2 = __this_00._size;
								if (uVar2 < (uint)pSVar5.Length) {
									method_00 = (uint)(ulong)(uVar2 + 1);
									__this_00._size = uVar2 + 1;
									pSVar5[(int)uVar2] = pSVar6;
								}
								else {
									__this_00.AddWithResize((object)pSVar6);
								}
							}
							__this_02 = this._load_5__3.Image;
							if (__this_02 != null) {
								__this_02.sprite = (Sprite)x;
								GisketchGridPickerRuntime.FadeIn(this._load_5__3.Image, this._load_5__3.ResourcePath, this.generation);
								this.__2__current = null;
								this.__1__state = 4;
								return true;
							}
							goto label_05370e89;
						}
					}
					break;
				case 4:
					this.__1__state = -1;
					this._load_5__3.Image = null;
					this._load_5__3.ResourcePath = null;
					*(ulong)&this._load_5__3.Generation = 0;
					this._request_5__4 = null;
				}
				if (pGVar3 == null) {
		label_05370e89: ;
					throw new NullReferenceException();
				}
				if (this.generation == pGVar3._thumbnailGeneration) {
					targetAddress = &this._load_5__3;
					do {
						__this_01 = pGVar3._thumbnailLoads;
						if (__this_01 == null) goto label_05370e89;
						index = this._index_5__2;
						if (__this_01._size <= index) {
							if (pGVar3._build == null) {
								pGVar3._thumbnailLoader = null;
								return false;
							}
							this.__2__current = null;
							this.__1__state = 2;
							return true;
						}
						this._index_5__2 = index + 1;
						GStack_48 = __this_01.get_Item(index);
						this._load_5__3.Generation = GStack_48.Generation;
						*(uint)&this._load_5__3.field_0x14 = GStack_48._20_4_;
						targetAddress.Image = GStack_48.Image;
						this._load_5__3.ResourcePath = GStack_48.ResourcePath;
						bVar7 = GisketchGridPickerRuntime.IsCurrent((GisketchGridPickerRuntime.ThumbnailLoad)targetAddress.fields, this.generation);
						if (bVar7) {
							pSVar6 = this._load_5__3.ResourcePath;
							bVar7 = GisketchSpriteLoader.TryGetCached(pSVar6, ref pUStack_50);
							if (!bVar7) {
								pUVar9 = Resources.LoadAsync<Sprite>(this._load_5__3.ResourcePath);
								this._request_5__4 = pUVar9;
								this.__2__current = (object)this._request_5__4;
								this.__1__state = 3;
								return true;
							}
							GisketchGridPickerRuntime.ShowLoaded(targetAddress.Image, pUStack_50);
						}
					} while (this.generation == pGVar3._thumbnailGeneration);
				}
			}
			return false;
		}

		[Token(Token = "0x60004AB")]
		[Address(RVA = "0x5270EA0", Offset = "0x526FEA0", VA = "0x5270EA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__56$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_LoadThumbnails_d__56_System_Collections_IEnumer);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000307")]
	private const int ImmediateItems = 24;

	[Token(Token = "0x4000308")]
	private const int BatchSize = 12;

	[Token(Token = "0x4000309")]
	private const int VirtualizationThreshold = 80;

	[Token(Token = "0x400030A")]
	private const int OverscanRows = 2;

	[Token(Token = "0x400030B")]
	private const float Gap = 10f;

	[Token(Token = "0x400030C")]
	private const float ThumbnailFadeSeconds = 0.12f;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x20")]
	private GisketchGridPicker.RuntimeDefinition _definition;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<GameObject> _cards;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<ThumbnailLoad> _thumbnailLoads;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x40")]
	private readonly List<string> _loadedThumbnails;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x48")]
	private readonly List<GisketchGridPickerItem> _filtered;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x50")]
	private string _query;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x58")]
	private Coroutine _build;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x60")]
	private Coroutine _thumbnailLoader;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x68")]
	private GisketchVirtualContentRuntime _virtualContent;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x70")]
	private int _thumbnailGeneration;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x74")]
	private bool _virtualized;

	[Token(Token = "0x1700008A")]
	public string Id
	{
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x526C4B0", Offset = "0x526B4B0", VA = "0x526C4B0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$get_Id): clean
			GisketchGridPicker.RuntimeDefinition pGVar1;

			pGVar1 = this._definition;
			if (pGVar1 == null) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			return pGVar1.Id;
		}
	}

	[Token(Token = "0x1700008B")]
	internal bool IsVirtualized
	{
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x526CB80", Offset = "0x526BB80", VA = "0x526CB80")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$get_IsVirtualized): clean
			return this._virtualized;
		}
	}

	[Token(Token = "0x1700008C")]
	internal int LiveCardCount
	{
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x526CB90", Offset = "0x526BB90", VA = "0x526CB90")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$get_LiveCardCount): clean
			GisketchVirtualContentRuntime pGVar1;
			List<GameObject> pSVar2;
			bool bVar3;
			int iVar4;

			if (this._virtualized != false) {
				pGVar1 = this._virtualContent;
				bVar3 = ((Object)pGVar1 != null);
				if (bVar3) {
					pGVar1 = this._virtualContent;
					if (pGVar1 != null) {
						return iVar4;
					}
					goto label_0536cc1c;
				}
			}
			pSVar2 = this._cards;
			if (pSVar2 != null) {
				return pSVar2._size;
			}
		label_0536cc1c: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700008D")]
	private int Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EItemCount
	{
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x526CC30", Offset = "0x526BC30", VA = "0x526CC30", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource.get_ItemCount): clean
			List<GisketchGridPickerItem> pSVar1;

			pSVar1 = this._filtered;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1._size;
		}
	}

	[Token(Token = "0x1700008E")]
	private GisketchVirtualContentMetrics Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EMetrics
	{
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x526CC70", Offset = "0x526BC70", VA = "0x526CC70", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource.get_Metrics): clean
			float itemWidth;
			float itemHeight;
			float viewportHeight;
			int columns;
			GisketchGridPicker.RuntimeDefinition pGVar1;

			pGVar1 = this._definition;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			itemWidth = pGVar1.ItemWidth;
			itemHeight = pGVar1.ItemHeight;
			viewportHeight = pGVar1.ViewportHeight;
			columns = pGVar1.Columns;
			__return_storage_ptr__.Gap = 0.0;
			__return_storage_ptr__.ViewportHeight = 0.0;
			__return_storage_ptr__.VirtualizationThreshold = 0;
			__return_storage_ptr__.OverscanRows = 0;
			__return_storage_ptr__.Mode = 0;
			__return_storage_ptr__.Columns = 0;
			__return_storage_ptr__.ItemWidth = 0.0;
			__return_storage_ptr__.ItemHeight = 0.0;
			__return_storage_ptr__ = new GisketchVirtualContentMetrics(1, itemWidth, itemHeight, 10.0, viewportHeight, columns, 0x50, 2);
			return __return_storage_ptr__;
		}
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x526BD50", Offset = "0x526AD50", VA = "0x526BD50")]
	internal void Setup(GisketchGridPicker.RuntimeDefinition definition, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Setup): 16 lines keep C-only constructs
		GisketchGridPicker.RuntimeDefinition* targetAddress;
		int iVar1;
		String detail;
		GisketchGridPickerItem[] pGVar2;
		String* ppSVar3;
		GameObject pUVar4;
		GisketchVirtualContentRuntime pGVar5;
		String[] values;
		GisketchGridPicker.RuntimeDefinition pGVar6;
		String pSVar7;
		MethodInfo method_00;
		int local_7c;
		GisketchUiPerfLog.Scope local_78;
		GisketchUiPerfLog.Scope local_50;

		pSVar7 = "GridPicker.Setup";
		local_78._startMs._0_4_ = 0;
		local_78._startMs._4_2_ = 0;
		local_78._startMs._6_2_ = 0;
		local_78._enabled = false;
		local_78._hotLoop = false;
		local_78._26_6_ = 0;
		local_78._area = null;
		local_78._detail = null;
		local_7c = 0;
		if (definition == null) {
			ppSVar3 = &"null";
		}
		else {
			ppSVar3 = &definition.Id;
		}
		detail = ((GisketchGridPicker.RuntimeDefinition)ppSVar3).Id;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_50 = GisketchUiPerfLog.Time(pSVar7, detail);
		local_78._startMs = local_50._startMs;
		local_78._enabled = local_50._enabled;
		local_78._hotLoop = local_50._hotLoop;
		local_78._26_6_ = local_50._26_6_;
		local_78._area = local_50._area;
		local_78._detail = local_50._detail;
		local_50._area = null;
		local_50._detail = (String)&local_78;
		targetAddress = &this._definition;
		this._definition = definition;
		this._theme = theme;
		if ((*targetAddress == null) ||(pGVar2 = ((*targetAddress).fields).Items, pGVar2 == null)) {
			this._virtualized = false;
		}
		else {
			iVar1 = (int)pGVar2.Length;
			this._virtualized = 0x4f < iVar1;
			if (0x4f < iVar1) {
				pUVar4 = this.gameObject;
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pGVar5 = pUVar4.AddComponent<GisketchVirtualContentRuntime>() ;
				this._virtualContent = pGVar5;
				goto label_0536bf17;
			}
		}
		this.AddGridLayout(definition);
	label_0536bf17: ;
		pUVar4 = this.gameObject;
		if (pUVar4 == null) {
			throw new NullReferenceException();
		}
		pUVar4.AddComponent<LayoutElement>();
		values = (String[])new string[0xb];
		if (*targetAddress == null) {
			pGVar6 = *(GisketchGridPicker.RuntimeDefinition*)(g_data_07556758 + 0xb8);
		}
		else {
			pGVar6 = &(*targetAddress).fields;
		}
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		values[0] = pGVar6.Id;
		if ((values.Length & 0xfffffffe) == 0) {
			throw new IndexOutOfRangeException();
		}
		values[1] = " items=";
		local_7c = 0;
		if ((*targetAddress != null) &&(pGVar2 = ((*targetAddress).fields).Items, pGVar2 != null)) {
			local_7c = (int32_t)pGVar2.Length;
		}
		pSVar7 = local_7c.ToString();
		if ((uint)values.Length < 3) {
			throw new IndexOutOfRangeException();
		}
		values[2] = pSVar7;
		if ((values.Length & 0xfffffffc) == 0) {
			throw new IndexOutOfRangeException();
		}
		values[3] = " columns=";
		if (definition == null) {
			throw new NullReferenceException();
		}
		pSVar7 = (definition.Columns).ToString();
		if ((uint)values.Length < 5) {
			throw new IndexOutOfRangeException();
		}
		values[4] = pSVar7;
		if ((uint)values.Length < 6) {
			throw new IndexOutOfRangeException();
		}
		values[5] = " item=";
		pSVar7 = (definition.ItemWidth).ToString();
		if ((uint)values.Length < 7) {
			throw new IndexOutOfRangeException();
		}
		values[6] = pSVar7;
		if ((values.Length & 0xfffffff8) == 0) {
			throw new IndexOutOfRangeException();
		}
		values[7] = "x";
		pSVar7 = (definition.ItemHeight).ToString();
		if ((uint)values.Length < 9) {
			throw new IndexOutOfRangeException();
		}
		values[8] = pSVar7;
		if ((uint)values.Length < 10) {
			throw new IndexOutOfRangeException();
		}
		values[9] = " virtualized=";
		pSVar7 = (this._virtualized).ToString();
		if ((uint)values.Length < 0xb) {
			throw new IndexOutOfRangeException();
		}
		values[10] = pSVar7;
		method_00 = (MethodInfo)String.Concat(values);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("GridPicker.Setup", (String)method_00);
		this.Rebuild();
		local_78.Dispose();
		return;
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x526C4E0", Offset = "0x526B4E0", VA = "0x526C4E0")]
	public void SetQuery(string query)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$SetQuery): clean
		bool bVar1;
		ScrollRect __this_00;

		if (query == null) {
			query = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar1 = String.Equals(this._query, query, 5);
		if (!bVar1) {
			this._query = query;
			this.Rebuild();
			__this_00 = this.GetComponentInParent<ScrollRect>();
			bVar1 = ((Object)__this_00 != null);
			if (bVar1) {
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.StopMovement();
				__this_00.verticalNormalizedPosition = 1.0;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x526CDB0", Offset = "0x526BDB0", VA = "0x526CDB0")]
	private void Rebuild()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Rebuild): 25 lines keep C-only constructs
		int piVar1;
		Coroutine* targetAddress;
		Coroutine* ppUVar2;
		int iVar3;
		GisketchGridPicker.RuntimeDefinition pGVar4;
		List<GameObject> pSVar5;
		List<GisketchGridPickerRuntime.ThumbnailLoad> pSVar6;
		List<GisketchGridPickerItem> pSVar7;
		GisketchVirtualContentRuntime __this_00;
		String obj;
		bool bVar8;
		String[] values;
		GisketchGridPicker.RuntimeDefinition pGVar9;
		String pSVar10;
		GisketchGridPickerRuntime.d__56<LoadThumbnails> pGVar11;
		Coroutine pUVar12;
		GisketchGridPickerRuntime.d__33<BuildCards> __this_01;
		MethodInfo pMVar13;
		int local_b4;
		long local_b0;
		GisketchUiPerfLog.Scope local_a8;
		String local_88;
		Coroutine* local_70;
		GisketchUiPerfLog.Scope local_60;
		GisketchUiPerfLog.Scope local_58;

		local_58._startMs = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		local_88.klass = null;
		local_88.monitor = null;
		local_88._stringLength = 0;
		local_88._firstChar = 0;
		local_88._6_2_ = 0;
		values = (String[])new string[7];
		pGVar4 = this._definition;
		if (pGVar4 == null) {
			pGVar9 = *(GisketchGridPicker.RuntimeDefinition*)(g_data_07556758 + 0xb8);
		}
		else {
			pGVar9 = &pGVar4.fields;
		}
		if (values == null) {
	label_0536d3cd: ;
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = pGVar9.Id;
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = " query='";
				if (2 < (uint)values.Length) {
					values[2] = this._query;
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = "' oldCards=";
						pSVar5 = this._cards;
						if (pSVar5 == null) goto label_0536d3cd;
						local_b4 = pSVar5._size;
						pSVar10 = local_b4.ToString();
						if (4 < (uint)values.Length) {
							values[4] = pSVar10;
							pMVar13 = (MethodInfo *)" virtualSlots=";
							if (5 < (uint)values.Length) {
								values[5] = " virtualSlots=";
								local_b4 = this.LiveCardCount;
								pSVar10 = local_b4.ToString();
								if (6 < (uint)values.Length) {
									values[6] = pSVar10;
									pSVar10 = String.Concat(values);
									local_a8 = GisketchUiPerfLog.Time("GridPicker.Rebuild", pSVar10);
									local_58._startMs = local_a8._startMs;
									local_58._enabled = local_a8._enabled;
									local_58._hotLoop = local_a8._hotLoop;
									local_58._26_6_ = local_a8._26_6_;
									local_58._area = local_a8._area;
									local_58._detail = local_a8._detail;
									local_60 = &local_58;
									piVar1 = &this._thumbnailGeneration;
									*piVar1 = *piVar1 + 1;
									pUVar12 = this._build;
									if (pUVar12 != null) {
										this.StopCoroutine(pUVar12);
									}
									pUVar12 = this._thumbnailLoader;
									if (pUVar12 != null) {
										this.StopCoroutine(pUVar12);
									}
									targetAddress = &this._build;
									*targetAddress = null;
									ppUVar2 = &this._thumbnailLoader;
									*ppUVar2 = null;
									pSVar6 = this._thumbnailLoads;
									if (pSVar6 == (List<GisketchGridPickerRuntime.ThumbnailLoad>)0x0) {
										throw new NullReferenceException();
									}
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									iVar3 = pSVar6._size;
									pSVar6._size = 0;
									if (0 < iVar3) {
										Array.Clear((Array)pSVar6._items, 0, iVar3);
									}
									this.FilterItems();
									pSVar7 = this._filtered;
									if (pSVar7 == null) {
										throw new NullReferenceException();
									}
									this.UpdateHeight(pSVar7._size);
									if (this._virtualized == false) {
										pSVar5 = this._cards;
										if (pSVar5 == null) {
											throw new NullReferenceException();
										}
										local_70 = ppUVar2;
										local_a8 = pSVar5.GetEnumerator();
										local_88._stringLength = (undefined4)local_a8._startMs;
										local_88._firstChar = local_a8._startMs._4_2_;
										local_88._6_2_ = local_a8._startMs._6_2_;
										local_88.klass = (String)local_a8._area;
										local_88.monitor = local_a8._detail;
										local_a8._area = null;
										local_b0 = 0;
										local_a8._detail = &local_88;
										while (true) {
											bVar8 = local_88.MoveNext();
											obj = local_88;
											if (!(bVar8)) break;
											Object.Destroy((Object)obj);
										}
										local_88.Dispose();
										ppUVar2 = local_70;
										if (local_b0 != 0) {
											throw;
										}
										pSVar5 = this._cards;
										if (pSVar5 == null) {
											throw new NullReferenceException();
										}
										piVar1 = &pSVar5._version;
										*piVar1 = *piVar1 + 1;
										iVar3 = pSVar5._size;
										pSVar5._size = 0;
										if (0 < iVar3) {
											Array.Clear((Array)pSVar5._items, 0, iVar3);
										}
										__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.d__33<BuildCards>));
										__this_01 = new Object();
										__this_01.__1__state = 0;
										__this_01.__4__this = this;
										pUVar12 = this.StartCoroutine((IEnumerator)__this_01);
										*targetAddress = pUVar12;
										pGVar4 = this._definition;
										if (pGVar4 == null) {
											throw new NullReferenceException();
										}
										if (pGVar4.LazyLoadThumbnails != false) {
											iVar3 = this._thumbnailGeneration;
											pGVar11 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.d__56<LoadThumbnails>));
											pGVar11 = new Object();
											pGVar11.__1__state = 0;
											pGVar11.__4__this = this;
											pGVar11.generation = iVar3;
											pUVar12 = this.StartCoroutine((IEnumerator)pGVar11);
											*ppUVar2 = pUVar12;
										}
									}
									else {
										__this_00 = this._virtualContent;
										if (__this_00 == null) {
											throw new NullReferenceException();
										}
										__this_00.Setup((IGisketchVirtualContentSource)this);
										pGVar4 = this._definition;
										if (pGVar4 == null) {
											throw new NullReferenceException();
										}
										if (pGVar4.LazyLoadThumbnails != false) {
											iVar3 = this._thumbnailGeneration;
											pGVar11 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.d__56<LoadThumbnails>));
											pGVar11 = new Object();
											pGVar11.__1__state = 0;
											pGVar11.__4__this = this;
											pGVar11.generation = iVar3;
											pUVar12 = this.StartCoroutine((IEnumerator)pGVar11);
											*ppUVar2 = pUVar12;
										}
									}
									local_58.Dispose();
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x526DB20", Offset = "0x526CB20", VA = "0x526DB20")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$OnDestroy): clean
		List<string> resourcePaths;

		resourcePaths = this._loadedThumbnails;
		if (resourcePaths == null) {
			throw new NullReferenceException();
		}
		if (resourcePaths._size == 0) {
			return;
		}
		GisketchSpriteLoader.Release((IEnumerable<string>)resourcePaths);
		Resources.UnloadUnusedAssets();
		return;
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x526D4C0", Offset = "0x526C4C0", VA = "0x526D4C0")]
	private void StopBuilds()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$StopBuilds): 4 lines keep C-only constructs
		Coroutine* targetAddress;
		Coroutine* targetAddress_00;
		Coroutine pUVar1;

		pUVar1 = this._build;
		if (pUVar1 != null) {
			this.StopCoroutine(pUVar1);
		}
		targetAddress = &this._build;
		targetAddress_00 = &this._thumbnailLoader;
		pUVar1 = this._thumbnailLoader;
		if (pUVar1 != null) {
			this.StopCoroutine(pUVar1);
		}
		*targetAddress = null;
		*targetAddress_00 = null;
		return;
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x526DAB0", Offset = "0x526CAB0", VA = "0x526DAB0")]
	[IteratorStateMachine(typeof(_003CBuildCards_003Ed__33))]
	private IEnumerator BuildCards()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BuildCards): 1 lines keep C-only constructs
		GisketchGridPickerRuntime.d__33<BuildCards> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.d__33<BuildCards>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x526D520", Offset = "0x526C520", VA = "0x526D520")]
	private void FilterItems()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$FilterItems): 9 lines keep C-only constructs
		int piVar1;
		GisketchGridPickerItem pGVar2;
		String* ppSVar3;
		uint uVar4;
		List<GisketchGridPickerItem> pSVar5;
		GisketchGridPicker.RuntimeDefinition pGVar6;
		String pSVar7;
		String pSVar8;
		String pSVar9;
		String pSVar10;
		GisketchGridPickerItem[] pGVar11;
		GisketchGridPickerItem item;
		bool bVar13;
		int iVar14;
		GisketchGridPickerItem[] pGVar15;
		String[] values;
		String pSVar16;
		ulong uVar17;
		String* ppSVar18;
		ulong uVar19;

		pSVar5 = this._filtered;
		if (pSVar5 != null) {
			piVar1 = &pSVar5._version;
			*piVar1 = *piVar1 + 1;
			iVar14 = pSVar5._size;
			pSVar5._size = 0;
			if (0 < iVar14) {
				Array.Clear((Array)pSVar5._items, 0, iVar14);
			}
			pGVar6 = this._definition;
			if (pGVar6 != null) {
				pGVar15 = pGVar6.Items;
				if (pGVar15 == null) {
					pGVar15 = (GisketchGridPickerItem[])new GisketchGridPickerItem[0];
					if (pGVar15 == null) goto label_0536d80b;
				}
				if (0 < (int)pGVar15.Length) {
					uVar17 = pGVar15.Length & 0xffffffff;
					ppSVar18 = &pGVar15[0].Keywords;
					uVar19 = 0;
					do {
						if (uVar17 <= uVar19) {
	label_0536d806: ;
							throw new IndexOutOfRangeException();
						}
						pGVar2 = (GisketchGridPickerItem)(ppSVar18 + -3);
						pSVar7 = pGVar2.Key;
						pSVar8 = ppSVar18[-2];
						pSVar9 = ppSVar18[-1];
						pSVar10 = *ppSVar18;
						values = (String[])new string[5];
						if (values == null) goto label_0536d80b;
						if ((int)values.Length == 0) goto label_0536d806;
						values[0] = pSVar8;
						if ((values.Length & 0xfffffffe) == 0) goto label_0536d806;
						values[1] = " ";
						if ((uint)values.Length < 3) goto label_0536d806;
						values[2] = pSVar7;
						if ((values.Length & 0xfffffffc) == 0) goto label_0536d806;
						values[3] = " ";
						if ((uint)values.Length < 5) goto label_0536d806;
						values[4] = pSVar10;
						pSVar16 = String.Concat(values);
						if (pSVar16 == null) goto label_0536d80b;
						pSVar16 = pSVar16.Trim();
						bVar13 = String.IsNullOrWhiteSpace(this._query);
						if (bVar13) {
	label_0536d777: ;
							pSVar5 = this._filtered;
							if (pSVar5 == null) goto label_0536d80b;
							piVar1 = &pSVar5._version;
							*piVar1 = *piVar1 + 1;
							pGVar11 = pSVar5._items;
							if (pGVar11 == null) goto label_0536d80b;
							uVar4 = pSVar5._size;
							if (uVar4 < (uint)pGVar11.Length) {
								pSVar5._size = uVar4 + 1;
								ppSVar3 = &pGVar11[(int)uVar4].Sprite;
								*ppSVar3 = pSVar9;
								ppSVar3[1] = pSVar10;
								pGVar11[(int)uVar4].Key = pSVar7;
								pGVar11[(int)uVar4].Label = pSVar8;
							}
							else {
								item.Keywords = pSVar10;
								item.Key = pGVar2.Key;
								item.Label = pGVar2.Label;
								item.Sprite = pGVar2.Sprite;
								pSVar5.AddWithResize(item);
							}
						}
						else {
							if (pSVar16 == null) goto label_0536d80b;
							iVar14 = pSVar16.IndexOf(this._query, 5);
							if (-1 < iVar14) goto label_0536d777;
						}
						uVar19 = uVar19 + 1;
						uVar4 = (uint)pGVar15.Length;
						uVar17 = (ulong)uVar4;
						ppSVar18 = ppSVar18 + 4;
					} while ((long)uVar19 < (long)(int)uVar4);
				}
				return;
			}
		}
	label_0536d80b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x526DBB0", Offset = "0x526CBB0", VA = "0x526DBB0")]
	private void BindCardSlot(CardSlot slot, GisketchGridPickerItem item, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BindCardSlot): 11 lines keep C-only constructs
		GisketchGridPickerRuntime.CardSlot* targetAddress;
		GisketchGridPickerRuntime.CardSlot pGVar1;
		GameObject __this_00;
		GisketchGridPicker.RuntimeDefinition pGVar2;
		Object __this_01;
		TextMeshProUGUI pTVar3;
		Button pUVar4;
		Button.ButtonClickedEvent __this_02;
		UnityEvent __this_03;
		GisketchGridPickerRuntime.c__DisplayClass35_0 __this_04;
		String str2;
		String pSVar5;
		UnityAction __this_05;
		Image image;
		GisketchGridPickerItem targetAddress_00;

		__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.c__DisplayClass35_0));
		__this_04 = new Object();
		if (__this_04 != null) {
			__this_04.__4__this = this;
			targetAddress = &__this_04.slot;
			__this_04.slot = slot;
			targetAddress_00 = &__this_04.item;
			__this_04.item.Sprite = item.Sprite;
			__this_04.item.Keywords = item.Keywords;
			__this_04.item.Key = item.Key;
			__this_04.item.Label = item.Label;
			pGVar1 = __this_04.slot;
			if (pGVar1 == null) {
				return;
			}
			__this_00 = pGVar1.Root;
			if (__this_00 != null) {
				__this_00.SetActive(true);
				if ((*targetAddress != null) &&(pGVar2 = this._definition, pGVar2 != null)) {
					__this_01 = (Object)((*targetAddress).fields).Root;
					pSVar5 = pGVar2.Id;
					str2 = GisketchGridPickerRuntime.SafeId(targetAddress_00.Key) ;
					pSVar5 = String.Concat(pSVar5, "-item-", str2);
					if (__this_01 != null) {
						__this_01.name = pSVar5;
						if ((*targetAddress != null) &&(pTVar3 = ((*targetAddress).fields).Label, pTVar3 != null)) {
							pTVar3.set_text(__this_04.item.Label);
							pGVar1 = __this_04.slot;
							if ((pGVar1 != null) &&((pUVar4 = pGVar1.Button, pUVar4 != null &&(__this_02 = pUVar4.m_OnClick, __this_02 != null)))) {
								__this_02.RemoveAllListeners();
								if ((*targetAddress != null) &&(pUVar4 = ((*targetAddress).fields).Button, pUVar4 != null)) {
									__this_03 = (UnityEvent)pUVar4.m_OnClick;
									__this_05 = new UnityAction((object)__this_04, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_c__DisplayClass35_0_BindCardSlot_b__0);
									if (__this_03 != null) {
										__this_03.AddListener(__this_05);
										if (*targetAddress != null) {
											image = ((*targetAddress).fields).Thumbnail;
											this.SetThumbnail(image, (GisketchGridPickerItem)targetAddress_00.fields, this._thumbnailGeneration);
											this.EnsureThumbnailLoader();
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

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x526CCF0", Offset = "0x526BCF0", VA = "0x526CCF0")]
	private void AddGridLayout(GisketchGridPicker.RuntimeDefinition definition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$AddGridLayout): clean
		Vector2 value;
		GameObject __this_00;
		GridLayoutGroup __this_01;

		__this_00 = this.gameObject;
		if (__this_00 != null) {
			__this_01 = __this_00.AddComponent<GridLayoutGroup>();
			if ((definition != null) &&(__this_01 != null)) {
				value.x = definition.ItemWidth;
				value.y = definition.ItemHeight;
				__this_01.cellSize = value;
				__this_01.spacing = (Vector2)0x4120000041200000;
				__this_01.constraint = 1;
				__this_01.constraintCount = definition.Columns;
				__this_01.startAxis = 0;
				__this_01.childAlignment = 0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x526D810", Offset = "0x526C810", VA = "0x526D810")]
	private void UpdateHeight(int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$UpdateHeight): clean
		GisketchGridPicker.RuntimeDefinition pGVar1;
		bool bVar2;
		LayoutElement pUVar3;
		FlexLayout __this_00;
		YGValue value;
		int iVar4;
		float fVar5;

		pUVar3 = this.GetComponent<LayoutElement>();
		pGVar1 = this._definition;
		if ((pGVar1 == null) ||(pUVar3 == null)) goto label_0536da2f;
		iVar4 = pGVar1.Columns;
		pUVar3.set_preferredWidth((float)(iVar4 + -1) * 10.0 + (float)iVar4 * pGVar1.ItemWidth);
		pGVar1 = this._definition;
		if (pGVar1 == null) goto label_0536da2f;
		iVar4 = pGVar1.Columns;
		if (Il2CppMethodInitialized_0753e7f9 == false) {
			Il2CppMethodInitialized_0753e7f9 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_0536d91f;
	label_0536d8eb: ;
			pGVar1 = this._definition;
		}
		else {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_0536d8eb;
	label_0536d91f: ;
			pGVar1 = this._definition;
		}
		if (pGVar1 != null) {
			fVar5 = ceilf((float)count / (float)iVar4);
			iVar4 = 0;
			if (0 < (int)fVar5 + -1) {
				iVar4 = (int)fVar5 + -1;
			}
			pUVar3.set_preferredHeight((float)iVar4 * 10.0 + (float)(int)fVar5 * pGVar1.ItemHeight);
			__this_00 = this.GetComponent<FlexLayout>();
			bVar2 = ((Object)__this_00 != null);
			if (!bVar2) {
				return;
			}
			fVar5 = pUVar3.get_preferredHeight();
			value = ((YGValue)fVar5);
			if (__this_00 != null) {
				__this_00.Height = value;
				return;
			}
		}
	label_0536da2f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x526E210", Offset = "0x526D210", VA = "0x526E210")]
	private float HeightFor(int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$HeightFor): clean
		uint uVar1;
		GisketchGridPicker.RuntimeDefinition pGVar2;
		int iVar3;
		float fVar4;

		pGVar2 = this._definition;
		if (pGVar2 != null) {
			iVar3 = pGVar2.Columns;
			if (Il2CppMethodInitialized_0753e7f9 == false) {
				Il2CppMethodInitialized_0753e7f9 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pGVar2 = this._definition;
			}
			else {
				pGVar2 = this._definition;
			}
			if (pGVar2 != null) {
				fVar4 = ceilf((float)count / (float)iVar3);
				iVar3 = 0;
				if (0 < (int)fVar4 + -1) {
					iVar3 = (int)fVar4 + -1;
				}
				return (float)iVar3 * 10.0 + (float)(int)fVar4 * pGVar2.ItemHeight;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x526E2D0", Offset = "0x526D2D0", VA = "0x526E2D0")]
	private int RowCount(int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$RowCount): clean
		int iVar1;
		uint uVar2;
		GisketchGridPicker.RuntimeDefinition pGVar3;
		float fVar4;

		pGVar3 = this._definition;
		if (pGVar3 == null) {
			throw new NullReferenceException();
		}
		iVar1 = pGVar3.Columns;
		if (Il2CppMethodInitialized_0753e7f9 == false) {
			Il2CppMethodInitialized_0753e7f9 = true;
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		fVar4 = ceilf((float)count / (float)iVar1);
		return (int)fVar4;
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x526E350", Offset = "0x526D350", VA = "0x526E350")]
	private GameObject CreateCard(GisketchGridPickerItem item, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$CreateCard): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		GisketchGridPicker.RuntimeDefinition pGVar3;
		List<GameObject> __this_00;
		GameObject item_00;
		GameObject[] pUVar4;
		String str2;
		String pSVar5;
		GisketchGridPickerRuntime.CardSlot slot;
		MethodInfo pMVar6;
		uint in_register_00000034;

		pMVar6 = (MethodInfo)CONCAT44(in_register_00000034, index);
		pGVar3 = this._definition;
		if (pGVar3 != null) {
			pSVar5 = pGVar3.Id;
			str2 = GisketchGridPickerRuntime.SafeId(item.Key);
			pSVar5 = String.Concat(pSVar5, "-item-", str2);
			slot = this.CreateCardObject(pSVar5);
			if ((slot != null) &&(__this_00 = this._cards, __this_00 != null )) {
				item_00 = slot.Root;
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar4 = __this_00._items;
				if (pUVar4 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pUVar4.Length) {
						__this_00._size = uVar2 + 1;
						pUVar4[(int)uVar2] = item_00;
					}
					else {
						__this_00.AddWithResize((object)item_00);
					}
					this.BindStaticCard(slot, item);
					return slot.Root;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x526EC60", Offset = "0x526DC60", VA = "0x526EC60")]
	private CardSlot CreateSlot(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$CreateSlot): 1 lines keep C-only constructs
		GisketchGridPicker.RuntimeDefinition pGVar1;
		GameObject pUVar2;
		String str2;
		String pSVar3;
		Il2CppClass pIVar4;
		LayoutElement pUVar5;
		object pIVar6;
		int local_14;

		pGVar1 = this._definition;
		if (pGVar1 != null) {
			pSVar3 = pGVar1.Id;
			str2 = local_14.ToString();
			pSVar3 = String.Concat(pSVar3, "-slot-", str2);
			pIVar4 = (Il2CppClass)this.CreateCardObject(pSVar3);
			if ((pIVar4 != null) &&(pUVar2 = ((GisketchGridPickerRuntime.CardSlot)&(pIVar4._1).name). Root, pUVar2 != null)) {
				pUVar5 = pUVar2.AddComponent<LayoutElement>();
				if (pUVar5 != null) {
					pUVar5.set_ignoreLayout(true);
					pUVar2 = ((GisketchGridPickerRuntime.CardSlot)&(pIVar4._1).name). Root;
					if (pUVar2 != null) {
						pIVar6 = pUVar2.AddComponent<GisketchGridPickerRuntime.CardSlotHost>();
						if (pIVar6 != null) {
							pIVar6[2].klass = pIVar4;
							return (GisketchGridPickerRuntime.CardSlot)pIVar4;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x526E460", Offset = "0x526D460", VA = "0x526E460")]
	private CardSlot CreateCardObject(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$CreateCardObject): 6 lines keep C-only constructs
		Vector2 value;
		Nullable<bool> SVar1;
		uint uVar2;
		GisketchGridPicker.RuntimeDefinition pGVar3;
		GisketchTheme pGVar4;
		Nullable<float> SVar5;
		Il2CppType handle;
		bool worn;
		Type[] pSVar6;
		Type pSVar7;
		object pIVar8;
		GameObject pUVar9;
		Transform pUVar10;
		Transform pUVar11;
		RectTransform pUVar12;
		Image pUVar13;
		Button __this_00;
		GisketchStyleDefinition pGVar14;
		Material material;
		GisketchButtonRelief __this_01;
		TextMeshProUGUI pTVar15;
		GisketchGridPickerRuntime.CardSlot __this_02;
		String token;
		bool reliefGradient;
		float fVar16;
		float fVar17;
		Color UVar18;
		Nullable<float> local_68;
		GameObject local_60;
		float local_54;
		GameObject local_50;
		Button local_48;
		RectTransform local_40;
		RectTransform local_38;

		pSVar6 = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar6 != null) {
			if ((pSVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class), pIVar8 == null)) {
	label_0536eac4: ;
				pIVar8 = new ArrayTypeMismatchException();
				throw pIVar8;
			}
			if ((int)pSVar6.Length == 0) {
	label_0536eabf: ;
				throw new IndexOutOfRangeException();
			}
			pSVar6[0] = pSVar7;
			pUVar9 = new GameObject(name, pSVar6);
			if (pUVar9 != null) {
				pUVar10 = pUVar9.transform;
				pUVar11 = this.transform;
				if (pUVar10 != null) {
					pUVar10.SetParent(pUVar11, false);
					pUVar12 = pUVar9.GetComponent<RectTransform>();
					pGVar3 = this._definition;
					if ((pGVar3 != null) &&(pUVar12 != null)) {
						value.x = pGVar3.ItemWidth;
						value.y = pGVar3.ItemHeight;
						local_38 = pUVar12;
						pUVar12.sizeDelta = value;
						pUVar13 = pUVar9.AddComponent<Image>();
						pGVar4 = this._theme;
						if ((pGVar4 != null) &&(UVar18 = pGVar4.GetColor("shadow", (Color)(ZEXT816(0x3ea3d70a00000000) << 0x40)), pUVar13 != null)) {
							pUVar13.set_color(UVar18);
							__this_00 = pUVar9.AddComponent<Button>();
							if (__this_00 != null) {
								local_48 = __this_00;
								__this_00.transition = 0;
								local_60 = pUVar9;
								pUVar9.AddComponent<GisketchDisabledSelectableOpacity>();
								pSVar6 = (Type[])new Type[1];
								pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
								if (pSVar6 != null) {
									if ((pSVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class), pIVar8 == null)) goto label_0536eac4;
									if ((int)pSVar6.Length == 0) goto label_0536eabf;
									pSVar6[0] = pSVar7;
									pUVar9 = new GameObject("AoTTG Button Face", pSVar6);
									if (pUVar9 != null) {
										pUVar10 = pUVar9.transform;
										pUVar11 = local_60.transform;
										if (pUVar10 != null) {
											pUVar10.SetParent(pUVar11, false);
											pUVar12 = pUVar9.GetComponent<RectTransform>();
											GisketchGridPickerRuntime.Stretch(pUVar12);
											pGVar4 = this._theme;
											if (pGVar4 != null) {
												token = null;
												pGVar14 = pGVar4.GetStyle("gridPickerItem");
												pUVar13 = pUVar9.AddComponent<Image>();
												pGVar4 = this._theme;
												if (pGVar14 != null) {
													token = pGVar14.background;
												}
												if ((pGVar4 != null) &&(UVar18.b = 1.0, UVar18.a = 1.0, UVar18.r = 1.0, UVar18.g = 1.0, UVar18 = pGVar4.GetColor(token, UVar18), pUVar13 != null)) {
													local_50 = pUVar9;
													local_40 = pUVar12;
													pUVar13.set_color(UVar18);
													if (pGVar14 == null) {
														local_68.hasValue = false;
														local_68._1_3_ = 0;
														local_68.value = 0.0;
														local_68 = new Nullable<float>(0.0);
														worn = true;
														reliefGradient = false;
														uVar2 = (typeof(GisketchSurfaceMaterial)._2). cctor_finished_or_no_cctor;
														fVar16 = 0.0;
														SVar5 = local_68;
														fVar17 = local_54;
													}
													else {
														reliefGradient = pGVar14.reliefGradient.value;
														SVar1 = pGVar14.worn;
														worn = 0xff < (ushort)SVar1 || SVar1.hasValue == false;
														SVar5 = pGVar14.wornStainScale;
														uVar2 = (typeof(GisketchSurfaceMaterial)._2). cctor_finished_or_no_cctor;
														fVar16 = pGVar14.relief.value;
														fVar17 = local_54;
													}
													local_54 = fVar16;
													fVar16 = local_54;
													if (uVar2 == 0) {
														fVar16 = local_54;
														fVar17 = local_54;
													}
													local_54 = fVar17;
													material = GisketchSurfaceMaterial.Instance(fVar16, reliefGradient, worn, (Nullable<float>)SVar5, false, false);
													GisketchSurfaceMaterialOwner.Assign((Graphic)pUVar13, material);
													local_48.targetGraphic = (Graphic)pUVar13;
													__this_01 = local_60.AddComponent<GisketchButtonRelief>();
													if (pGVar14 == null) {
														local_68.hasValue = false;
														local_68._1_3_ = 0;
														local_68.value = 0.0;
														local_68 = new Nullable<float>(0.0);
														fVar17 = 0.0;
														SVar5 = local_68;
														pUVar9 = local_50;
													}
													else {
														fVar17 = pGVar14.relief.value;
														SVar5 = pGVar14.pressDepth;
														pUVar9 = local_50;
													}
													local_50 = pUVar9;
													if (__this_01 != null) {
														__this_01.Setup(pUVar13, local_40, fVar17, null, (Nullable<float>)SVar5);
														pGVar3 = this._definition;
														if (pGVar3 != null) {
															if ((pGVar3.ThumbnailWidth <= 0.0) ||(pGVar3.ThumbnailHeight <= 0.0)) {
																pUVar13 = null;
															}
															else {
																pUVar10 = pUVar9.transform;
																pUVar13 = this.BuildThumbnail(pUVar10);
															}
															pUVar10 = pUVar9.transform;
															pTVar15 = this.BuildLabel(pUVar10);
															__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.CardSlot));
															__this_02 = new Object();
															__this_02.Root = local_60;
															__this_02.Rect = local_38;
															__this_02.Button = local_48;
															__this_02.Thumbnail = pUVar13;
															__this_02.Label = pTVar15;
															return __this_02;
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

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x526EAE0", Offset = "0x526DAE0", VA = "0x526EAE0")]
	private void BindStaticCard(CardSlot slot, GisketchGridPickerItem item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BindStaticCard): 6 lines keep C-only constructs
		GisketchGridPickerRuntime.CardSlot* targetAddress;
		GisketchGridPickerRuntime.CardSlot pGVar1;
		TextMeshProUGUI pTVar2;
		Button pUVar3;
		UnityEvent __this_00;
		GisketchGridPickerRuntime.c__DisplayClass43_0 __this_01;
		UnityAction __this_02;
		GisketchGridPickerItem targetAddress_00;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.c__DisplayClass43_0));
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			targetAddress = &__this_01.slot;
			__this_01.slot = slot;
			targetAddress_00 = &__this_01.item;
			__this_01.item.Sprite = item.Sprite;
			__this_01.item.Keywords = item.Keywords;
			__this_01.item.Key = item.Key;
			__this_01.item.Label = item.Label;
			pGVar1 = __this_01.slot;
			if ((pGVar1 != null) &&(pTVar2 = pGVar1.Label, pTVar2 != null)) {
				pTVar2.set_text(__this_01.item.Label);
				pGVar1 = __this_01.slot;
				if ((pGVar1 != null) &&(pUVar3 = pGVar1.Button, pUVar3 != null)) {
					__this_00 = (UnityEvent)pUVar3.m_OnClick;
					__this_02 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_c__DisplayClass43_0_BindStaticCard_b__0);
					if (__this_00 != null) {
						__this_00.AddListener(__this_02);
						pGVar1 = *targetAddress;
						if (pGVar1 != null) {
							this.SetThumbnail(pGVar1.Thumbnail, (GisketchGridPickerItem)targetAddress_00.fields, this._thumbnailGeneration);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x526F510", Offset = "0x526E510", VA = "0x526F510", Slot = "7")]
	private GameObject Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ECreateSlot(Transform parent, int slotIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource.CreateSlot): clean
		GisketchGridPickerRuntime.CardSlot pGVar1;

		pGVar1 = this.CreateSlot(slotIndex);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		return pGVar1.Root;
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x526F530", Offset = "0x526E530", VA = "0x526F530", Slot = "6")]
	private string Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EItemId(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource.ItemId): 1 lines keep C-only constructs
		GisketchGridPicker.RuntimeDefinition pGVar1;
		String str2;
		String pSVar2;
		MethodInfo method_00;
		GisketchGridPickerItem GStack_30;

		if (itemIndex < 0) {
	label_0536f5ce: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		method_00 = (MethodInfo)this._filtered;
		if (method_00 != null) {
			if (*(int)&method_00.name <= itemIndex) goto label_0536f5ce;
			pGVar1 = this._definition;
			if (pGVar1 != null) {
				pSVar2 = pGVar1.Id;
				GStack_30 = method_00.get_Item(itemIndex);
				str2 = GisketchGridPickerRuntime.SafeId(GStack_30.Key);
				pSVar2 = String.Concat(pSVar2, "-item-", str2);
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x526F600", Offset = "0x526E600", VA = "0x526F600", Slot = "8")]
	private void Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EBindSlot(GameObject slotRoot, int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource.BindSlot): clean
		List<GisketchGridPickerItem> __this_00;
		GisketchGridPickerItem item;
		GisketchGridPickerRuntime.CardSlot slot;
		int index;
		GisketchGridPickerItem GStack_38;

		slot = GisketchGridPickerRuntime.Slot(slotRoot);
		if ((-1 < itemIndex) && (slot != null)) {
			__this_00 = this._filtered;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			if (itemIndex < __this_00._size) {
				GStack_38 = __this_00.get_Item(itemIndex);
				item.Label = GStack_38.Label;
				item.Key = GStack_38.Key;
				item.Sprite = GStack_38.Sprite;
				item.Keywords = GStack_38.Keywords;
				this.BindCardSlot(slot, item, index);
			}
		}
		return;
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x526F750", Offset = "0x526E750", VA = "0x526F750", Slot = "9")]
	private void Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EUnbindSlot(GameObject slotRoot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource.UnbindSlot): clean
		Button pUVar1;
		Button.ButtonClickedEvent __this_00;
		GisketchGridPickerRuntime.CardSlot pGVar2;

		pGVar2 = GisketchGridPickerRuntime.Slot(slotRoot);
		if (pGVar2 == null) {
			return;
		}
		pUVar1 = pGVar2.Button;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.m_OnClick, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.RemoveAllListeners();
		return;
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x526F790", Offset = "0x526E790", VA = "0x526F790", Slot = "10")]
	private bool Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ECanRecycleSlot(GameObject slot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource.CanRecycleSlot): clean
		return true;
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x526F7A0", Offset = "0x526E7A0", VA = "0x526F7A0", Slot = "11")]
	private bool Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ETryGetSearchTargetItemIndex(string targetId, out int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource.TryGetSearchTargetItemIndex): 4 lines keep C-only constructs
		int iVar1;
		GisketchGridPickerRuntime pGVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		List<GisketchGridPickerItem> pSVar5;
		VirtualInvokeData pVVar6;
		String a;
		ulong uVar7;
		int itemIndex_00;
		long lVar8;

		*itemIndex = -1;
		pSVar5 = this._filtered;
		if (pSVar5 != null) {
			itemIndex_00 = 0;
			do {
				iVar1 = pSVar5._size;
				if (iVar1 <= itemIndex_00) {
	label_0536f8b1: ;
					return itemIndex_00 < iVar1;
				}
				pGVar2 = this.klass;
				uVar7 = (ulong)(pGVar2._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar3 = (pGVar2._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar8) == typeof(IGisketchVirtualContentSource)) {
							pVVar6 = (VirtualInvokeData)(&(pGVar2.vtable)._0_Equals + (*(int)((long)&pIVar3.offset + lVar8) + 2));
							goto label_0536f878;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath((object)this, (Il2CppClass)typeof(IGisketchVirtualContentSource), 2);
	label_0536f878: ;
				a = (*pVVar6.methodPtr)((object)this,itemIndex_00,pVVar6.method);
				bVar4 = String.Equals(a, targetId, 5);
				if (bVar4) {
					*itemIndex = itemIndex_00;
					goto label_0536f8b1;
				}
				itemIndex_00 = itemIndex_00 + 1;
				pSVar5 = this._filtered;
			} while (pSVar5 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x526F8D0", Offset = "0x526E8D0", VA = "0x526F8D0", Slot = "12")]
	private bool Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ETryResolveSearchTarget(string targetId, int itemIndex, GameObject slotRoot, out GameObject target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource.TryResolveSearchTarget): clean
		Object x;
		bool bVar1;
		String a;
		GameObject pUVar2;

		bVar1 = ((Object)slotRoot != null);
		pUVar2 = null;
		if (bVar1) {
			if (slotRoot == null) {
				throw new NullReferenceException();
			}
			a = slotRoot.name;
			bVar1 = String.Equals(a, targetId, 5);
			pUVar2 = null;
			if (bVar1) {
				pUVar2 = slotRoot;
			}
		}
		*target = pUVar2;
		x = (Object)*target;
		bVar1 = (x != null);
		return bVar1;
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x526E150", Offset = "0x526D150", VA = "0x526E150")]
	private void EnsureThumbnailLoader()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$EnsureThumbnailLoader): 1 lines keep C-only constructs
		int iVar1;
		GisketchGridPicker.RuntimeDefinition pGVar2;
		GisketchGridPickerRuntime.d__56<LoadThumbnails> __this_00;
		Coroutine pUVar3;

		pGVar2 = this._definition;
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		if ((pGVar2.LazyLoadThumbnails == false) ||(this._thumbnailLoader != null)) {
			return;
		}
		iVar1 = this._thumbnailGeneration;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.d__56<LoadThumbnails>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.generation = iVar1;
		pUVar3 = this.StartCoroutine((IEnumerator)__this_00);
		this._thumbnailLoader = pUVar3;
		return;
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x526F6A0", Offset = "0x526E6A0", VA = "0x526F6A0")]
	private static CardSlot Slot(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Slot): clean
		bool bVar1;
		Object x;
		GisketchGridPickerRuntime.CardSlot pGVar2;

		x = null;
		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) goto label_0536f74a;
			x = (Object)root.GetComponent<GisketchGridPickerRuntime.CardSlotHost>() ;
		}
		bVar1 = (x != null);
		if (bVar1) {
			if (x == null) {
	label_0536f74a: ;
				throw new NullReferenceException();
			}
			pGVar2 = (*(ulong)((sbyte)x + 0x20));
		}
		return pGVar2;
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x526EE60", Offset = "0x526DE60", VA = "0x526EE60")]
	private Image BuildThumbnail(Transform parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BuildThumbnail): 1 lines keep C-only constructs
		Vector2 value;
		GisketchGridPicker.RuntimeDefinition pGVar1;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		RectTransform __this_02;
		Image __this_03;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) {
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_00 = new GameObject("AoTTG Grid Thumbnail", components);
			if (__this_00 != null) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					__this_01.SetParent(parent, false);
					__this_02 = __this_00.GetComponent<RectTransform>();
					if (__this_02 != null) {
						__this_02.anchorMin = (Vector2)0x3f8000003f000000;
						__this_02.anchorMax = (Vector2)0x3f8000003f000000;
						__this_02.pivot = (Vector2)0x3f8000003f000000;
						pGVar1 = this._definition;
						if (pGVar1 != null) {
							value.x = pGVar1.ThumbnailWidth;
							value.y = pGVar1.ThumbnailHeight;
							__this_02.sizeDelta = value;
							__this_02.anchoredPosition = (Vector2)0xc140000000000000;
							__this_03 = __this_00.AddComponent<Image>() ;
							if (__this_03 != null) {
								__this_03.preserveAspect = true;
								__this_03.set_raycastTarget(false);
								__this_00.AddComponent<GisketchGridPickerRuntime.ThumbnailTarget>();
								return __this_03;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x526DEA0", Offset = "0x526CEA0", VA = "0x526DEA0")]
	private void SetThumbnail(Image image, GisketchGridPickerItem item, int generation)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$SetThumbnail): 5 lines keep C-only constructs
		GisketchGridPicker.RuntimeDefinition pGVar1;
		bool bVar2;
		bool bVar3;
		Object pUVar4;
		Sprite value;
		_func_32 vtableDispatch;
		MethodInfo pMVar5;
		ulong uVar6;
		Color UVar7;
		Color UVar8;
		Sprite local_38;

		local_38 = null;
		bVar2 = ((Object)image == null);
		if (bVar2) {
			return;
		}
		if (image == null) {
	label_0536e14b: ;
			throw new NullReferenceException();
		}
		pUVar4 = (Object)image.GetComponent<GisketchGridPickerRuntime.ThumbnailTarget>() ;
		bVar3 = (pUVar4 != null);
		bVar2 = true;
		if (bVar3) {
			if (pUVar4 == null) goto label_0536e14b;
			if ((int)(*(ulong)((sbyte)pUVar4 + 0x28)) == generation) {
				bVar2 = String.Equals((*(ulong)((sbyte)pUVar4 + 0x20)), item.Sprite, 4);
				bVar2 = !bVar2;
			}
		}
		bVar3 = (pUVar4 != null);
		if (bVar3) {
			if (pUVar4 == null) goto label_0536e14b;
			(*(ulong)((sbyte)pUVar4 + 0x20)) = item.Sprite;
			*(int)&(*(ulong)((sbyte)pUVar4 + 0x28)) = generation;
		}
		pGVar1 = this._definition;
		if (pGVar1 == null) goto label_0536e14b;
		if (pGVar1.LazyLoadThumbnails == false) {
			value = GisketchSpriteLoader.Load(item.Sprite);
			image.sprite = value;
		}
		else {
			bVar3 = String.IsNullOrEmpty(item.Sprite);
			if (bVar3) {
				image.sprite = null;
				vtableDispatch = (image.klass.vtable)._23_set_color.methodPtr;
				pMVar5 = (image.klass.vtable)._23_set_color.method;
				uVar6 = 0x3f800000;
				goto label_0536e08c;
			}
			if (bVar2) {
	label_0536e0c9: ;
				bVar2 = GisketchSpriteLoader.TryGetCached(item.Sprite, ref local_38);
				if (bVar2) {
					GisketchGridPickerRuntime.ShowLoaded(image, local_38);
				}
				else {
					image.sprite = null;
					UVar8.b = 1.0;
					UVar8.a = 0.0;
					UVar8.r = 1.0;
					UVar8.g = 1.0;
					image.set_color(UVar8);
					this.QueueThumbnail(image, item.Sprite, generation);
				}
				return;
			}
			pUVar4 = (Object)image.m_Sprite;
			bVar2 = (pUVar4 != null);
			if (!bVar2) goto label_0536e0c9;
		}
		vtableDispatch = (image.klass.vtable)._23_set_color.methodPtr;
		pMVar5 = (image.klass.vtable)._23_set_color.method;
		uVar6 = 0x3f8000003f800000;
	label_0536e08c: ;
		UVar7.b = (float)(int)uVar6;
		UVar7.a = (float)(int)((ulong)uVar6 >> 0x20);
		UVar7.r = 1.0;
		UVar7.g = 1.0;
		(*vtableDispatch)(image,UVar7,pMVar5);
		return;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x526FA60", Offset = "0x526EA60", VA = "0x526FA60")]
	private void QueueThumbnail(Image image, string resourcePath, int generation)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$QueueThumbnail): 5 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GisketchGridPickerRuntime.ThumbnailLoad> __this_00;
		GisketchGridPickerRuntime.ThumbnailLoad[] pGVar3;
		GisketchGridPickerRuntime.ThumbnailLoad item;
		bool bVar5;
		Image local_40;
		String pSStack_38;
		ulong uStack_30;

		bVar5 = ((Object)image == null);
		if ((bVar5) || (bVar5 = String.IsNullOrEmpty(resourcePath))) {
			return;
		}
		__this_00 = this._thumbnailLoads;
		pSStack_38 = null;
		uStack_30 = 0;
		local_40 = image;
		pSStack_38 = resourcePath;
		uStack_30 = CONCAT44(uStack_30._4_4_, generation);
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pGVar3 = __this_00._items;
			if (pGVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pGVar3.Length) {
					__this_00._size = uVar2 + 1;
					*(ulong)&pGVar3[(int)uVar2].Generation = uStack_30;
					pGVar3[(int)uVar2].Image = local_40;
					pGVar3[(int)uVar2].ResourcePath = pSStack_38;
					return;
				}
				item.ResourcePath = pSStack_38;
				item.Image = local_40;
				item._16_8_ = uStack_30;
				__this_00.AddWithResize(item);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x526DA40", Offset = "0x526CA40", VA = "0x526DA40")]
	[IteratorStateMachine(typeof(_003CLoadThumbnails_003Ed__56))]
	private IEnumerator LoadThumbnails(int generation)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$LoadThumbnails): 1 lines keep C-only constructs
		GisketchGridPickerRuntime.d__56<LoadThumbnails> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.d__56<LoadThumbnails>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.generation = generation;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x526FC00", Offset = "0x526EC00", VA = "0x526FC00")]
	private static bool IsCurrent(ThumbnailLoad load, int generation)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$IsCurrent): clean
		bool bVar1;
		Object x;

		if (load.Generation != generation) {
			return false;
		}
		bVar1 = ((Object)load.Image == null);
		if (bVar1) {
			return false;
		}
		if (load.Image != null) {
			x = (Object)load.Image.GetComponent<GisketchGridPickerRuntime.ThumbnailTarget>();
			bVar1 = (x == null);
			if (bVar1) {
				return true;
			}
			if (x != null) {
				if ((int)(*(ulong)((sbyte)x + 0x28)) == generation) {
					bVar1 = String.Equals((*(ulong)((sbyte)x + 0x20)), load.ResourcePath, 4);
					return bVar1;
				}
				return false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x526F9A0", Offset = "0x526E9A0", VA = "0x526F9A0")]
	private static void ShowLoaded(Image image, Sprite sprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$ShowLoaded): clean
		bool bVar1;
		Color UVar2;

		bVar1 = ((Object)image == null);
		if (!bVar1) {
			bVar1 = ((Object)sprite == null);
			if (!bVar1) {
				if (image == null) {
					throw new NullReferenceException();
				}
				image.sprite = sprite;
				UVar2.b = 1.0;
				UVar2.a = 1.0;
				UVar2.r = 1.0;
				UVar2.g = 1.0;
				image.set_color(UVar2);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x526FCF0", Offset = "0x526ECF0", VA = "0x526FCF0")]
	private static void FadeIn(Image image, string resourcePath, int generation)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$FadeIn): 3 lines keep C-only constructs
		GisketchGridPickerRuntime.c__DisplayClass59_0 targetAddress;
		Image pUVar1;
		bool bVar2;
		GisketchGridPickerRuntime.c__DisplayClass59_0 __this;
		TweenCallback<float> __this_00;
		Tweener pDVar3;
		Color UVar4;
		Color UVar5;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchGridPickerRuntime.c__DisplayClass59_0));
		__this = new Object();
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.image = image;
			__this.resourcePath = resourcePath;
			__this.generation = generation;
			pUVar1 = __this.image;
			bVar2 = ((Object)pUVar1 == null);
			if (bVar2) {
				return;
			}
			pUVar1 = targetAddress.image;
			if (pUVar1 != null) {
				UVar4 = pUVar1.get_color();
				pUVar1 = targetAddress.image;
				if (pUVar1 != null) {
					UVar5.a = 0.0;
					UVar5.r = UVar4.r;
					UVar5.g = UVar4.g;
					UVar5.b = UVar4.b;
					pUVar1.set_color(UVar5);
					__this_00 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_c__DisplayClass59_0_FadeIn_b__0);
					pDVar3 = DOVirtual.Float(0.0, 1.0, 0.12, __this_00);
					pDVar3 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar3, true);
					GisketchMotionDriver.Track((Tween)pDVar3, false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x526FED0", Offset = "0x526EED0", VA = "0x526FED0")]
	private static bool IsCurrent(Image image, string resourcePath, int generation)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$IsCurrent): clean
		bool bVar1;
		bool bVar2;
		Object x;

		x = null;
		bVar1 = ((Object)image != null);
		if (bVar1) {
			if (image == null) goto label_0536ffa5;
			x = (Object)image.GetComponent<GisketchGridPickerRuntime.ThumbnailTarget>();
		}
		bVar1 = (x == null);
		if (!bVar1) {
			if (x == null) {
	label_0536ffa5: ;
				throw new NullReferenceException();
			}
			if ((int)(*(ulong)((sbyte)x + 0x28)) == generation) {
				bVar1 = String.Equals((*(ulong)((sbyte)x + 0x20)), resourcePath, 4);
				return bVar1;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x526F0B0", Offset = "0x526E0B0", VA = "0x526F0B0")]
	private TextMeshProUGUI BuildLabel(Transform parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BuildLabel): 1 lines keep C-only constructs
		GisketchGridPicker.RuntimeDefinition pGVar1;
		GisketchTheme __this_00;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject __this_01;
		Transform __this_02;
		RectTransform __this_03;
		TextMeshProUGUI __this_04;
		TMP_FontAsset value;
		int value_00;
		Vector2 value_01;
		Color UVar3;
		Vector2 local_68;
		Vector2 local_58;
		Vector2 local_48;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) {
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_01 = new GameObject("AoTTG Grid Label", components);
			if (__this_01 != null) {
				__this_02 = __this_01.transform;
				if (__this_02 != null) {
					__this_02.SetParent(parent, false);
					__this_03 = __this_01.GetComponent<RectTransform>();
					pGVar1 = this._definition;
					if (pGVar1 != null) {
						if ((pGVar1.ThumbnailWidth <= 0.0) || (pGVar1.ThumbnailHeight <= 0.0)) {
							if (__this_03 == null) goto label_0536f44a;
							__this_03.anchorMin = (Vector2)(Vector2.zeroVector);
							value_01 = (Vector2.oneVector);
							local_68.x = 0.5;
							local_68.y = 0.5;
							local_58.x = 16.0;
							local_58.y = 4.0;
							local_48.x = -16.0;
							local_48.y = -4.0;
							value_00 = 0x1001;
						}
						else {
							if (__this_03 == null) goto label_0536f44a;
							__this_03.anchorMin = (Vector2)0x0;
							value_01.x = 1.0;
							value_01.y = 0.0;
							local_68.x = 0.5;
							local_68.y = 0.0;
							local_58.x = 6.0;
							local_58.y = 8.0;
							local_48.x = -6.0;
							local_48.y = 34.0;
							value_00 = 0x202;
						}
						__this_03.anchorMax = (Vector2)value_01;
						__this_03.pivot = (Vector2)local_68;
						__this_03.offsetMin = (Vector2)local_58;
						__this_03.offsetMax = (Vector2)local_48;
						__this_04 = __this_01.AddComponent<TextMeshProUGUI>();
						if (__this_04 != null) {
							__this_04.fontSize = 15.0;
							value = GisketchTypography.Resolve("text", 500, (String)**(ulong*)(g_data_07556758 + 0xb8));
							__this_04.font = value;
							__this_00 = this._theme;
							if (__this_00 != null) {
								UVar3.b = 1.0;
								UVar3.a = 1.0;
								UVar3.r = 1.0;
								UVar3.g = 1.0;
								UVar3 = __this_00.GetColor("textMuted", UVar3);
								__this_04.set_color(UVar3);
								__this_04.alignment = value_00;
								__this_04.enableWordWrapping = false;
								__this_04.overflowMode = 1;
								__this_04.set_raycastTarget(false);
								return __this_04;
							}
						}
					}
				}
			}
		}
	label_0536f44a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x526ED60", Offset = "0x526DD60", VA = "0x526ED60")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Stretch): clean
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(Vector2.zeroVector);
		rect.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x526DE10", Offset = "0x526CE10", VA = "0x526DE10")]
	private static string SafeId(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$SafeId): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return "item";
		}
		if (value != null) {
			pSVar2 = value.Replace(" ", "-");
			if (pSVar2 != null) {
				pSVar2 = pSVar2.ToLowerInvariant();
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x526CCD0", Offset = "0x526BCD0", VA = "0x526CCD0")]
	private int ItemCount()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$ItemCount): clean
		GisketchGridPicker.RuntimeDefinition pGVar1;
		GisketchGridPickerItem[] pGVar2;
		int iVar3;

		pGVar1 = this._definition;
		if ((pGVar1 != null) &&(pGVar2 = pGVar1.Items, pGVar2 != null)) {
		}
		return iVar3;
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x526FFB0", Offset = "0x526EFB0", VA = "0x526FFB0")]
	public GisketchGridPickerRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c (Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$.ctor): 1 lines keep C-only constructs
		List<GameObject> __this_00;
		List<GisketchGridPickerRuntime.ThumbnailLoad> __this_01;
		List<string> __this_02;
		List<GisketchGridPickerItem> __this_03;

		__this_00 = new List<GameObject>();
		this._cards = __this_00;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<GisketchGridPickerRuntime.ThumbnailLoad>));
		__this_01 = new List<GisketchGridPickerRuntime.ThumbnailLoad>();
		this._thumbnailLoads = __this_01;
		__this_02 = new List<string>();
		this._loadedThumbnails = __this_02;
		__this_03 = new List<GisketchGridPickerItem>();
		this._filtered = __this_03;
		this._query = (String)**(ulong*)(g_data_07556758 + 0xb8);
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c.

	// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass35_0$$.ctor: clean
	private void c__DisplayClass35_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass43_0$$.ctor: clean
	private void c__DisplayClass43_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass59_0$$.ctor: clean
	private void c__DisplayClass59_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass35_0$$<BindCardSlot>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass35_0__BindCardSlot_b__0()
	{
		GisketchGridPickerRuntime pGVar1;
		GisketchGridPicker.RuntimeDefinition pGVar2;
		Action<GisketchActionContext, GisketchGridPickerItem> pSVar3;
		GisketchGridPickerRuntime.CardSlot pGVar4;
		Object __this_00;
		String elementId;
		GisketchActionContext GStack_38;

		pGVar1 = this.__4__this;
		if ((pGVar1 != null) &&(pGVar2 = pGVar1._definition, pGVar2 != null)) {
			pSVar3 = pGVar2.Select;
			if (pSVar3 == null) {
				return;
			}
			pGVar4 = this.slot;
			if ((pGVar4 != null) &&(__this_00 = (Object)pGVar4.Root, __this_00 != null)) {
				elementId = __this_00.name;
				pGVar4 = this.slot;
				if (pGVar4 != null) {
					GStack_38.Node = null;
					GStack_38.InputSource = 0;
					GStack_38._28_4_ = 0;
					GStack_38.ElementId = null;
					GStack_38.GameObject = null;
					GStack_38 = new GisketchActionContext(elementId, pGVar4.Root, null);
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass43_0$$<BindStaticCard>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass43_0__BindStaticCard_b__0()
	{
		GisketchGridPickerRuntime pGVar1;
		GisketchGridPicker.RuntimeDefinition pGVar2;
		Action<GisketchActionContext, GisketchGridPickerItem> pSVar3;
		GisketchGridPickerRuntime.CardSlot pGVar4;
		Object __this_00;
		String elementId;
		GisketchActionContext GStack_38;

		pGVar1 = this.__4__this;
		if ((pGVar1 != null) &&(pGVar2 = pGVar1._definition, pGVar2 != null)) {
			pSVar3 = pGVar2.Select;
			if (pSVar3 == null) {
				return;
			}
			pGVar4 = this.slot;
			if ((pGVar4 != null) &&(__this_00 = (Object)pGVar4.Root, __this_00 != null)) {
				elementId = __this_00.name;
				pGVar4 = this.slot;
				if (pGVar4 != null) {
					GStack_38.Node = null;
					GStack_38.InputSource = 0;
					GStack_38._28_4_ = 0;
					GStack_38.ElementId = null;
					GStack_38.GameObject = null;
					GStack_38 = new GisketchActionContext(elementId, pGVar4.Root, null);
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass59_0$$<FadeIn>b__0: clean
	private void c__DisplayClass59_0__FadeIn_b__0(float value)
	{
		Image pUVar1;
		bool bVar2;
		Color UVar3;
		Color UVar4;

		pUVar1 = this.image;
		bVar2 = ((Object)pUVar1 == null);
		if (!bVar2) {
			bVar2 = GisketchGridPickerRuntime.IsCurrent(this.image, this.resourcePath, this.generation);
			if (bVar2) {
				pUVar1 = this.image;
				if (pUVar1 != null) {
					UVar3 = pUVar1.get_color();
					pUVar1 = this.image;
					if (pUVar1 != null) {
						UVar4.a = value;
						UVar4.b = UVar3.b;
						UVar4.r = UVar3.r;
						UVar4.g = UVar3.g;
						pUVar1.set_color(UVar4);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}
}
