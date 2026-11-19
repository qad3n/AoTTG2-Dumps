// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gilzoide.FlexUi;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200021B")]
internal sealed class AottgGameCreateCategoryRowRuntime : MonoBehaviour
{
	[Token(Token = "0x200021C")]
	[CompilerGenerated]
	private sealed class _003CStart_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B36")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B37")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B38")]
		[FieldOffset(Offset = "0x20")]
		public AottgGameCreateCategoryRowRuntime _003C_003E4__this;

		[Token(Token = "0x17000166")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C9A")]
			[Address(RVA = "0x5D8E700", Offset = "0x5D8D700", VA = "0x5D8E700", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000167")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C9C")]
			[Address(RVA = "0x5D8E750", Offset = "0x5D8D750", VA = "0x5D8E750", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x5D8DF10", Offset = "0x5D8CF10", VA = "0x5D8DF10")]
		[DebuggerHidden]
		public _003CStart_003Ed__14(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000C98")]
		[Address(RVA = "0x5D8E690", Offset = "0x5D8D690", VA = "0x5D8E690", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000C99")]
		[Address(RVA = "0x5D8E6A0", Offset = "0x5D8D6A0", VA = "0x5D8E6A0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$MoveNext): clean
			int iVar1;
			AottgGameCreateCategoryRowRuntime __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				this.__2__current = null;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.Apply();
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0x5D8E710", Offset = "0x5D8D710", VA = "0x5D8E710", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_Start_d__14_System_Collections_IEnumera);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000B2B")]
	private const float MinRowScaleGain = 1.1f;

	[Token(Token = "0x4000B2C")]
	private const float MinWrapScale = 0.5f;

	[Token(Token = "0x4000B2D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3[] Corners;

	[Token(Token = "0x4000B2E")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _content;

	[Token(Token = "0x4000B2F")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _sidePanel;

	[Token(Token = "0x4000B30")]
	[FieldOffset(Offset = "0x30")]
	private FlexLayout _flex;

	[Token(Token = "0x4000B31")]
	[FieldOffset(Offset = "0x38")]
	private FlexLayout _contentFlex;

	[Token(Token = "0x4000B32")]
	[FieldOffset(Offset = "0x40")]
	private int _count;

	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x44")]
	private float _height;

	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x48")]
	private float _gap;

	[Token(Token = "0x4000B35")]
	[FieldOffset(Offset = "0x4C")]
	private bool _wrap;

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x5D8D3B0", Offset = "0x5D8C3B0", VA = "0x5D8D3B0")]
	public void Setup(RectTransform content, int count, float height, float gap, bool wrap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Setup): clean
		RectTransform __this_00;
		FlexLayout pGVar1;

		this._content = content;
		__this_00 = this._content;
		if (__this_00 != null) {
			__this_00.pivot = (Vector2)0x3f80000000000000;
			pGVar1 = this.GetComponent<FlexLayout>();
			this._flex = pGVar1;
			if (content != null) {
				pGVar1 = content.GetComponent<FlexLayout>();
				this._contentFlex = pGVar1;
				this._count = count;
				this._height = height;
				this._gap = gap;
				this._wrap = wrap;
				this.Apply();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x5D8D870", Offset = "0x5D8C870", VA = "0x5D8D870")]
	internal static float SpanLength(int count, float size, float gap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$SpanLength): clean
		int iVar1;

		iVar1 = 0;
		if (0 < count + -1) {
			iVar1 = count + -1;
		}
		return size * (float)count + (float)iVar1 * gap;
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x5D8DE90", Offset = "0x5D8CE90", VA = "0x5D8DE90")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$OnRectTransformDimensionsChange): clean
		this.Apply();
		return;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x5D8DEA0", Offset = "0x5D8CEA0", VA = "0x5D8DEA0")]
	[IteratorStateMachine(typeof(_003CStart_003Ed__14))]
	private IEnumerator Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Start): 1 lines keep C-only constructs
		AottgGameCreateCategoryRowRuntime.d__14<Start> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateCategoryRowRuntime.d__14<Start>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x5D8D890", Offset = "0x5D8C890", VA = "0x5D8D890")]
	private void Apply()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Apply): 8 lines keep C-only constructs
		RectTransform* targetAddress;
		FlexLayout pGVar1;
		GisketchScreenRouter pGVar2;
		GisketchView __this_00;
		RectTransform __this_01;
		bool bVar3;
		sbyte cVar4;
		int columns;
		int iVar5;
		RectTransform pUVar6;
		GisketchUIRoot x;
		Object x_00;
		YGValue value;
		YGValue GVar7;
		int iVar9;
		int iVar10;
		float fVar11;
		float fVar12;
		float value_00;
		Rect UVar13;
		Rect UVar14;
		Vector3 UVar15;
		Vector3 UVar16;
		Vector3 UVar17;
		float local_58;
		float local_48;

		pUVar6 = this._content;
		bVar3 = ((Object)pUVar6 == null);
		if (bVar3) {
			return;
		}
		pGVar1 = this._flex;
		bVar3 = ((Object)pGVar1 == null);
		if (bVar3) {
			return;
		}
		pGVar1 = this._contentFlex;
		bVar3 = ((Object)pGVar1 == null);
		if (bVar3) {
			return;
		}
		if (this._count < 1) {
			return;
		}
		pGVar1 = this._flex;
		if ((pGVar1 == null) ||(pUVar6 = pGVar1.RectTransform, pUVar6 == null)) goto label_05e8de89;
		UVar13 = pUVar6.rect;
		if (UVar13.m_Width <= 0.0) {
			return;
		}
		pUVar6 = this._sidePanel;
		targetAddress = &this._sidePanel;
		bVar3 = ((Object)pUVar6 == null);
		if (bVar3) {
			x = this.GetComponentInParent<GisketchUIRoot>() ;
			x_00 = null;
			bVar3 = ((Object)x != null);
			if (bVar3) {
				if (x == null) goto label_05e8de89;
				pGVar2 = x._Screens_k__BackingField;
				if ((pGVar2 == null) ||(__this_00 = pGVar2._active, __this_00 == null) ) {
					x_00 = null;
				}
				else {
					x_00 = (Object)__this_00.Find("brush-side-panel-base");
				}
			}
			bVar3 = (x_00 != null);
			if (bVar3) {
				if (x_00 == null) goto label_05e8de89;
				pUVar6 = x_00.GetComponent<RectTransform>();
				*targetAddress = pUVar6;
			}
		}
		pUVar6 = *targetAddress;
		value.Value = 0.0;
		value.Unit = 0;
		bVar3 = ((Object)pUVar6 != null);
		fVar12 = 0.0;
		if (bVar3) {
			pGVar1 = this._flex;
			if ((pGVar1 == null) ||(pUVar6 = pGVar1.RectTransform, pUVar6 == null)) goto label_05e8de89;
			UVar14 = pUVar6.rect;
			UVar15.x = UVar14.m_XMin;
			UVar15.y = 0.0;
			UVar15.z = 0.0;
			UVar15 = pUVar6.TransformPoint(UVar15) ;
			__this_01 = *targetAddress;
			if (__this_01 == null) goto label_05e8de89;
			UVar14 = __this_01.rect;
			UVar16.x = UVar14.m_XMin + UVar14.m_Width;
			UVar16.y = 0.0;
			UVar16.z = 0.0;
			UVar16 = __this_01.TransformPoint(UVar16);
			value.Value = 0.0;
			value.Unit = 0;
			UVar17 = pUVar6.lossyScale;
			local_48 = UVar16.x;
			local_58 = UVar15.x;
			fVar11 = (local_48 - local_58) / UVar17.x + 56.0;
			fVar12 = 0.0;
			if (0.0 <= fVar11) {
				fVar12 = fVar11;
			}
		}
		pGVar1 = this._flex;
		if (pGVar1 != null) {
			cVar4 = il2cpp_runtime_helper_03296c30(pGVar1._paddingLeft.Value, 0);
			if (cVar4 == false) {
				pGVar1 = this._flex;
				value = (YGValue)((YGValue)fVar12);
				if (pGVar1 == null) goto label_05e8de89;
				pGVar1.PaddingLeft = (YGValue)value;
			}
			fVar12 = UVar13.m_Width - fVar12;
			fVar11 = 0.0;
			if (0.0 <= fVar12) {
				fVar11 = fVar12;
			}
			if (this._wrap == false) {
				columns = this._count;
				fVar12 = 3.4028235e+38;
			}
			else {
				columns = this.WrapColumns(fVar11);
				if (this._wrap == false) {
					fVar12 = 3.4028235e+38;
				}
				else {
					fVar12 = this.AvailableHeight();
				}
			}
			fVar12 = this.Scale(columns, fVar11, fVar12);
			if ((this._wrap != false) && (fVar12 < 0.5)) {
				fVar12 = this.Scale(columns, fVar11, 3.4028235e+38);
			}
			fVar11 = this._gap;
			if ((typeof(AottgGameCreateCategoryRowRuntime)._2).cctor_finished_or_no_cctor == 0) {
			}
			iVar10 = columns + -1;
			if (iVar10 < 1) {
				iVar10 = 0;
			}
			iVar5 = this.Rows(columns);
			iVar9 = 0;
			if (0 < iVar5 + -1) {
				iVar9 = iVar5 + -1;
			}
			pUVar6 = this._content;
			if (pUVar6 != null) {
				value_00 = fVar11 * (float)iVar10 + (float)columns * 260.0;
				fVar11 = (float)iVar9 * this._gap + (float)iVar5 * this._height;
				UVar15 = pUVar6.localScale;
				cVar4 = il2cpp_runtime_helper_03296c30(UVar15.x, fVar12, 0);
				if (cVar4 != false) {
					pGVar1 = this._contentFlex;
					if (pGVar1 == null) goto label_05e8de89;
					cVar4 = il2cpp_runtime_helper_03296c30(pGVar1._width.Value, value_00, 0);
					if (cVar4 != false) {
						pGVar1 = this._contentFlex;
						if (pGVar1 == null) goto label_05e8de89;
						cVar4 = il2cpp_runtime_helper_03296c30(pGVar1._height.Value, fVar11, 0);
						if (cVar4 != false) {
							return;
						}
					}
				}
				pGVar1 = this._contentFlex;
				GVar7 = ((YGValue)value_00);
				if (pGVar1 != null) {
					pGVar1.Width = GVar7;
					pGVar1 = this._contentFlex;
					GVar7 = ((YGValue)fVar11);
					if (pGVar1 != null) {
						pGVar1.Height = GVar7;
						pUVar6 = this._content;
						if (pUVar6 != null) {
							UVar17.y = fVar12;
							UVar17.x = fVar12;
							UVar17.z = 1.0;
							pUVar6.localScale = UVar17;
							pGVar1 = this._flex;
							if (pGVar1 != null) {
								GVar7 = ((YGValue)fVar12 * fVar11 + pGVar1._paddingTop.Value);
								pGVar1.Height = GVar7;
								return;
							}
						}
					}
				}
			}
		}
	label_05e8de89: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x5D8DF30", Offset = "0x5D8CF30", VA = "0x5D8DF30")]
	private int WrapColumns(float width)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$WrapColumns): clean
		uint uVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		uint uVar5;
		float fVar6;
		float fVar7;
		float fVar8;

		fVar6 = this.AvailableHeight();
		fVar7 = this.Scale(this._count, width, fVar6);
		iVar4 = this._count;
		if (1 < iVar4) {
			iVar2 = 2;
			do {
				if (Il2CppMethodInitialized_0753e7f9 == false) {
					Il2CppMethodInitialized_0753e7f9 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				fVar8 = ceilf((float)iVar4 / (float)iVar2);
				fVar8 = this.Scale((int)fVar8, width, fVar6);
				uVar5 = -(uint)(fVar7 * 1.1 < fVar8);
				fVar7 = (float)(~uVar5 & (uint)fVar7 | (uint)fVar8 & uVar5);
				iVar2 = iVar2 + 1;
				iVar4 = this._count;
			} while (iVar2 <= iVar4);
		}
		fVar6 = this._gap;
		if (Il2CppMethodInitialized_0753e7f6 == false) {
			Il2CppMethodInitialized_0753e7f6 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (fVar7 <= 0.5) {
			fVar7 = 0.5;
		}
		fVar6 = floorf((width / fVar7 + fVar6) / (fVar6 + 260.0) + 0.001);
		iVar2 = (int)fVar6;
		iVar4 = this._count;
		if (iVar2 < iVar4) {
			iVar4 = iVar2;
		}
		if (0 < iVar2) {
		}
		return iVar3;
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x5D8E5A0", Offset = "0x5D8D5A0", VA = "0x5D8E5A0")]
	private int Rows(int columns)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Rows): clean
		int iVar1;
		uint uVar2;
		float fVar3;

		iVar1 = this._count;
		if (Il2CppMethodInitialized_0753e7f9 == false) {
			Il2CppMethodInitialized_0753e7f9 = true;
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		fVar3 = ceilf((float)iVar1 / (float)columns);
		return (int)fVar3;
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x5D8E410", Offset = "0x5D8D410", VA = "0x5D8E410")]
	private float Scale(int columns, float width, float availableHeight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Scale): 32 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		int iVar3;
		uint uVar4;
		int iVar5;
		int iVar6;
		float fVar7;
		float fVar8;
		uint in_XMM0_Db;
		uint in_XMM0_Dd;
		byte[] auVar11 = new byte[16];
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		byte[] auVar12 = new byte[16];
		uint in_XMM1_Db;
		byte[] auVar13 = new byte[16];
		byte[] auVar14 = new byte[12];

		fVar8 = this._gap;
		if ((typeof(AottgGameCreateCategoryRowRuntime)._2).cctor_finished_or_no_cctor == 0) {
			iVar3 = this._count;
		}
		else {
			iVar3 = this._count;
		}
		if (Il2CppMethodInitialized_0753e7f9 == false) {
			Il2CppMethodInitialized_0753e7f9 = true;
			uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar4 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
		}
		iVar6 = columns + -1;
		if (iVar6 < 1) {
			iVar6 = 0;
		}
		fVar7 = ceilf((float)iVar3 / (float)columns);
		iVar3 = (int)fVar7 + -1;
		iVar5 = 0;
		if (0 < iVar3) {
			iVar5 = iVar3;
		}
		uVar1 = this._height;
		uVar2 = this._gap;
		auVar13._0_4_ = fVar8 * (float)iVar6 + (float)columns * 260.0;
		auVar13._4_4_ = (float)iVar5 * (float)uVar2 + (float)(int)fVar7 * (float)uVar1;
		auVar13._8_4_ = 0;
		auVar13._12_4_ = (float)iVar5 * (float)uVar2 + 0.0;
		auVar10._4_4_ = in_XMM0_Db;
		auVar10._0_4_ = width;
		auVar10._8_4_ = in_XMM0_Db;
		auVar10._12_4_ = in_XMM0_Dd;
		auVar9._8_8_ = auVar10._8_8_;
		auVar9._4_4_ = availableHeight;
		auVar9._0_4_ = width;
		auVar11._0_12_ = auVar9._0_12_;
		auVar11._12_4_ = in_XMM1_Db;
		auVar12 = divps(auVar11, auVar13);
		if (auVar12._4_4_ <= auVar12._0_4_) {
			auVar12._4_12_ = auVar12._4_12_;
			auVar12._0_4_ = auVar12._4_4_;
		}
		auVar14 = ZEXT812(0x3f800000);
		fVar8 = auVar12._0_4_;
		if (fVar8 <= auVar14._0_4_) {
			auVar14._4_8_ = auVar14._4_8_;
			auVar14._0_4_ = fVar8;
		}
		return (float)(~-(uint)(0.01 <= fVar8) & 0x3c23d70a | auVar14._0_4_ & -(uint)(0.01 <= fVar8));
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x5D8E110", Offset = "0x5D8D110", VA = "0x5D8E110")]
	private float AvailableHeight()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$AvailableHeight): 1 lines keep C-only constructs
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		Vector3[] pUVar5;
		bool bVar6;
		ScrollRect x;
		RectTransform pUVar7;
		FlexLayout x_00;
		RectTransform pUVar8;
		float fVar9;
		Vector3 UVar10;
		Vector3 UVar11;

		x = this.GetComponentInParent<ScrollRect>();
		bVar6 = ((Object)x == null);
		if (bVar6) {
			return 3.4028235e+38;
		}
		if (x != null) {
			pUVar8 = x.m_Content;
			bVar6 = ((Object)pUVar8 == null);
			if (bVar6) {
				return 3.4028235e+38;
			}
			pUVar8 = x.m_Viewport;
			bVar6 = ((Object)pUVar8 != null);
			if (bVar6) {
				pUVar8 = x.m_Viewport;
			}
			else {
				pUVar7 = (RectTransform)x.transform;
				pUVar8 = null;
				if (pUVar7 != null) {
					if (pUVar7.klass != typeof(RectTransform)) {
						throw new InvalidCastException();
					}
					pUVar8 = pUVar7;
				}
			}
			if (pUVar8 != null) {
				pUVar8.GetWorldCorners(AottgGameCreateCategoryRowRuntime. Corners);
				pUVar5 = AottgGameCreateCategoryRowRuntime.Corners;
				if (pUVar5 != null) {
					if ((pUVar5.Length & 0xfffffffe) == 0) {
	label_05e8e3f9: ;
						throw new IndexOutOfRangeException();
					}
					pUVar8 = x.m_Content;
					if (pUVar8 != null) {
						fVar1 = pUVar5[1].y;
						fVar2 = pUVar5[0].y;
						pUVar8.GetWorldCorners(pUVar5);
						pUVar5 = AottgGameCreateCategoryRowRuntime.Corners;
						if (pUVar5 != null) {
							if ((pUVar5.Length & 0xfffffffe) == 0) goto label_05e8e3f9;
							pUVar8 = this._content;
							if (pUVar8 != null) {
								fVar3 = pUVar5[1].y;
								pUVar8.GetWorldCorners(pUVar5);
								pUVar5 = AottgGameCreateCategoryRowRuntime. Corners;
								if (pUVar5 != null) {
									if ((pUVar5.Length & 0xfffffffe) == 0) goto label_05e8e3f9;
									pUVar8 = x.m_Content;
									if (pUVar8 != null) {
										fVar4 = pUVar5[1].y;
										x_00 = pUVar8.GetComponent<FlexLayout>();
										bVar6 = ((Object)x_00 != null);
										fVar9 = 0.0;
										if (bVar6) {
											if (x_00 == null) goto label_05e8e3f4;
											fVar9 = x_00._paddingBottom.Value;
										}
										pUVar8 = this._content;
										if (pUVar8 != null) {
											UVar10 = pUVar8.lossyScale;
											pUVar8 = this._content;
											if (pUVar8 != null) {
												UVar11 = pUVar8.localScale;
												fVar9 = (((fVar1 - fVar2) - (fVar3 - fVar4)) / UVar10.y) * UVar11.y - fVar9;
												if (fVar9 < 0.0) {
													return 0.0;
												}
												return fVar9;
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
	label_05e8e3f4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x5D8E610", Offset = "0x5D8D610", VA = "0x5D8E610")]
	public AottgGameCreateCategoryRowRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$.cctor: clean
	static AottgGameCreateCategoryRowRuntime()
	{
		Vector3[] pUVar1;

		pUVar1 = (Vector3[])new Vector3[4];
		AottgGameCreateCategoryRowRuntime.Corners = pUVar1;
		return;
	}
}
