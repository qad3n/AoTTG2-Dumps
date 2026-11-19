// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFocusInputMode
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E2")]
public static class GisketchFocusInputMode
{
	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x0")]
	private static Vector3 _lastMousePosition;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0xC")]
	private static bool _hasMousePosition;

	[Token(Token = "0x40004B3")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private static Action m_Changed;

	[Token(Token = "0x170000AE")]
	public static GisketchInputMode Mode
	{
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x52A0F70", Offset = "0x529FF70", VA = "0x52A0F70")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$get_Mode): clean
			return GisketchFocusInputMode._Mode_k__BackingField;
		}
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x52A0FB0", Offset = "0x529FFB0", VA = "0x52A0FB0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$set_Mode): clean
			GisketchFocusInputMode._Mode_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170000AF")]
	public static bool IsNavigation
	{
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x5295820", Offset = "0x5294820", VA = "0x5295820")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$get_IsNavigation): clean
			return GisketchFocusInputMode._Mode_k__BackingField == 1;
		}
	}

	[Token(Token = "0x14000004")]
	public static event Action Changed
	{
		[Token(Token = "0x6000703")]
		[Address(RVA = "0x52A0E10", Offset = "0x529FE10", VA = "0x52A0E10")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$add_Changed): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = GisketchFocusInputMode.Changed;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&GisketchFocusInputMode.Changed, value_00, a);
				bVar2 = pSVar1 == a;
				a = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x52A0EC0", Offset = "0x529FEC0", VA = "0x52A0EC0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$remove_Changed): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = GisketchFocusInputMode.Changed;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&GisketchFocusInputMode.Changed, value_00, source);
				bVar2 = pSVar1 == source;
				source = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x5294640", Offset = "0x5293640", VA = "0x5294640")]
	public static void SetPointer()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetPointer): 4 lines keep C-only constructs
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;
		code *vtableDispatch;
		ulong in_RDX;
		ulong extraout_RDX_01;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 0) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
				in_RDX = extraout_RDX_01;
			}
			else {
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				vtableDispatch = (code)pSVar2.invoke_impl;
				(*vtableDispatch)(pSVar2.method_code,pSVar2.method,in_RDX,vtableDispatch);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x52947B0", Offset = "0x52937B0", VA = "0x52947B0")]
	public static void SetNavigation()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetNavigation): 4 lines keep C-only constructs
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;
		code *vtableDispatch;
		ulong in_RDX;
		ulong extraout_RDX_01;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 1) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
				in_RDX = extraout_RDX_01;
			}
			else {
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				vtableDispatch = (code)pSVar2.invoke_impl;
				(*vtableDispatch)(pSVar2.method_code,pSVar2.method,in_RDX,vtableDispatch);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x52A10A0", Offset = "0x52A00A0", VA = "0x52A10A0")]
	public static bool TakeTab(out bool backwards)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$TakeTab): 1 lines keep C-only constructs
		Action pSVar1;
		bool bVar2;
		bool bVar3;
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar4;

		*backwards = false;
		bVar2 = Input.GetKeyDown(9);
		if (bVar2) {
			bVar3 = Input.GetKey(0x130);
			if (bVar3) {
				*backwards = true;
			}
			else {
				bVar3 = Input.GetKey(0x12f);
				*backwards = bVar3;
			}
			pGVar4 = typeof(GisketchFocusInputMode).static_fields;
			if (pGVar4._Mode_k__BackingField != 1) {
				if (Il2CppMethodInitialized_07542bea == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFocusInputMode)) ;
					Il2CppMethodInitialized_07542bea = true;
					pGVar4 = typeof(GisketchFocusInputMode).static_fields;
				}
				pGVar4._Mode_k__BackingField = 1;
				pSVar1 = pGVar4.Changed;
				if (pSVar1 != null) {
					(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x52A11A0", Offset = "0x52A01A0", VA = "0x52A11A0")]
	public static bool Poll()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$Poll): clean
		Action pSVar1;
		bool bVar2;
		bool bVar3;
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar4;

		bVar2 = GisketchFocusInputMode.HasNavigationInput();
		if (bVar2) {
			pGVar4 = typeof(GisketchFocusInputMode).static_fields;
			if (pGVar4._Mode_k__BackingField == 1) {
				return bVar2;
			}
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar4 = typeof(GisketchFocusInputMode).static_fields;
			}
			pGVar4._Mode_k__BackingField = 1;
			pSVar1 = pGVar4.Changed;
		}
		else {
			bVar3 = GisketchFocusInputMode.HasPointerInput();
			if (!bVar3) {
				return bVar2;
			}
			pGVar4 = typeof(GisketchFocusInputMode).static_fields;
			if (pGVar4._Mode_k__BackingField == 0) {
				return bVar2;
			}
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar4 = typeof(GisketchFocusInputMode).static_fields;
			}
			pGVar4._Mode_k__BackingField = 0;
			pSVar1 = pGVar4.Changed;
		}
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		}
		return bVar2;
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x52A1520", Offset = "0x52A0520", VA = "0x52A1520")]
	public static void PollPointerOnly()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$PollPointerOnly): 6 lines keep C-only constructs
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;
		code *vtableDispatch;
		bool bVar3;
		ulong extraout_RDX;
		ulong extraout_RDX_02;
		ulong uVar4;

		bVar3 = GisketchFocusInputMode.HasPointerInput();
		if (bVar3) {
			uVar4 = extraout_RDX;
			pGVar1 = typeof(GisketchFocusInputMode).static_fields;
			if (pGVar1._Mode_k__BackingField != 0) {
				if (Il2CppMethodInitialized_07542bea == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFocusInputMode)) ;
					Il2CppMethodInitialized_07542bea = true;
					pGVar1 = typeof(GisketchFocusInputMode).static_fields;
					pGVar1._Mode_k__BackingField = 0;
					pSVar2 = pGVar1.Changed;
					uVar4 = extraout_RDX_02;
				}
				else {
					pGVar1._Mode_k__BackingField = 0;
					pSVar2 = pGVar1.Changed;
				}
				if (pSVar2 != null) {
					vtableDispatch = (code)pSVar2.invoke_impl;
					(*vtableDispatch)(pSVar2.method_code,pSVar2.method,uVar4,vtableDispatch);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x52A0FF0", Offset = "0x529FFF0", VA = "0x52A0FF0")]
	private static void SetMode(GisketchInputMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetMode): 4 lines keep C-only constructs
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;
		code *vtableDispatch;
		ulong in_RDX;
		ulong extraout_RDX_01;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != mode) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = mode;
				pSVar2 = pGVar1.Changed;
				in_RDX = extraout_RDX_01;
			}
			else {
				pGVar1._Mode_k__BackingField = mode;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				vtableDispatch = (code)pSVar2.invoke_impl;
				(*vtableDispatch)(pSVar2.method_code,pSVar2.method,in_RDX,vtableDispatch);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x52A12F0", Offset = "0x52A02F0", VA = "0x52A12F0")]
	private static bool HasNavigationInput()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$HasNavigationInput): clean
		bool bVar1;
		bool bVar2;
		float fVar3;

		bVar1 = Input.GetKeyDown(0x111);
		if (!bVar1) {
			bVar1 = Input.GetKeyDown(0x112);
			if (!bVar1) {
				bVar1 = Input.GetKeyDown(0x114);
				if (!bVar1) {
					bVar1 = Input.GetKeyDown(0x113);
					if (!bVar1) {
						bVar1 = Input.GetKeyDown(0xd);
						if (!bVar1) {
							bVar1 = Input.GetKeyDown(0x10f);
							if (!bVar1) {
								bVar1 = Input.GetKeyDown(0x20);
								if (!bVar1) {
									fVar3 = GisketchFocusInputMode.Axis("Horizontal");
									if (ABS(fVar3) <= 0.5) {
										fVar3 = GisketchFocusInputMode.Axis("Vertical");
										if (ABS(fVar3) <= 0.5) {
											fVar3 = GisketchFocusInputMode.Axis("Submit");
											bVar2 = 0.5 < ABS(fVar3);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x52A1410", Offset = "0x52A0410", VA = "0x52A1410")]
	private static bool HasPointerInput()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$HasPointerInput): clean
		uint uVar1;
		uint uVar2;
		bool bVar4;
		int iVar5;
		bool bVar6;
		Vector2 UVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		Vector3 UVar11;
		Vector3 UVar12;

		bVar4 = Input.GetMouseButtonDown(0);
		if (!bVar4) {
			bVar4 = Input.GetMouseButtonDown(1);
			if (!bVar4) {
				bVar4 = Input.GetMouseButtonDown(2);
				if (!bVar4) {
					UVar7 = Input.mouseScrollDelta;
					if (ABS(UVar7.y * UVar7.y + UVar7.x * UVar7.x) <= 0.01) {
						iVar5 = Input.touchCount;
						bVar6 = 0 < iVar5;
					}
				}
			}
		}
		if (GisketchFocusInputMode._hasMousePosition != false) {
			UVar11 = Input.mousePosition;
			uVar1 = (GisketchFocusInputMode._lastMousePosition).x;
			uVar2 = (GisketchFocusInputMode._lastMousePosition).y;
			fVar8 = UVar11.y - (float)uVar2;
			fVar9 = UVar11.z - (GisketchFocusInputMode._lastMousePosition).z;
			fVar10 = UVar11.x - (float)uVar1;
			if (0.01 < fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9) {
			}
		}
		UVar12 = (Vector3)Input.mousePosition;
		(GisketchFocusInputMode._lastMousePosition) = UVar12;
		GisketchFocusInputMode._hasMousePosition = true;
		return bVar6;
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x52A15D0", Offset = "0x52A05D0", VA = "0x52A15D0")]
	private static float Axis(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$Axis): clean
		float fVar1;

		return fVar1;
	}
}
