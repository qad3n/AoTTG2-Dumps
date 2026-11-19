// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HookUseable
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/HookUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HookUseable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006AC")]
internal class HookUseable : HoldUseable
{
	[Token(Token = "0x4001E27")]
	[FieldOffset(Offset = "0x3C")]
	public bool Enabled;

	[Token(Token = "0x4001E28")]
	[FieldOffset(Offset = "0x40")]
	public List<Hook> Hooks;

	[Token(Token = "0x4001E29")]
	[FieldOffset(Offset = "0x48")]
	public bool HookBoth;

	[Token(Token = "0x4001E2A")]
	[FieldOffset(Offset = "0x50")]
	private Hook _activeHook;

	[Token(Token = "0x4001E2B")]
	[FieldOffset(Offset = "0x58")]
	private bool _left;

	[Token(Token = "0x4001E2C")]
	[FieldOffset(Offset = "0x5C")]
	private float _hookSpeed;

	[Token(Token = "0x6004097")]
	[Address(RVA = "0x5AEE0C0", Offset = "0x5AED0C0", VA = "0x5AEE0C0")]
	public HookUseable(BaseCharacter owner, bool left, bool gun)
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$.ctor): 20 lines keep C-only constructs
		List<Hook>* targetAddress;
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		Hook[] pCVar5;
		List<Hook> pSVar7;
		Hook pCVar8;

		this.Enabled = true;
		pSVar7 = new List<Hook>();
		targetAddress = &this.Hooks;
		this.Hooks = pSVar7;
		base(owner);
		this._left = left;
		this._hookSpeed = 3.0;
		pSVar7 = this.Hooks;
		uVar3 = (typeof(Hook)._2).cctor_finished_or_no_cctor;
		if (owner == null) {
			if (uVar3 == 0) {
			}
			pCVar8 = Hook.CreateHook(null, left, 0, 0.8, gun);
			if (pSVar7 == null) goto label_05bee56e;
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			pCVar5 = pSVar7._items;
			if (pCVar5 == null) goto label_05bee56e;
			uVar4 = pSVar7._size;
			if (uVar4 < (uint)pCVar5.Length) {
				pSVar7._size = uVar4 + 1;
				pCVar5[(int)uVar4] = pCVar8;
			}
			else {
				pSVar7.AddWithResize((object)pCVar8);
			}
			pSVar7 = *targetAddress;
			pCVar8 = Hook.CreateHook(null, left, 1, 0.8, gun);
			if (pSVar7 == null) goto label_05bee56e;
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			pCVar5 = pSVar7._items;
			if (pCVar5 == null) goto label_05bee56e;
			uVar4 = pSVar7._size;
			if (uVar4 < (uint)pCVar5.Length) {
				pSVar7._size = uVar4 + 1;
				pCVar5[(int)uVar4] = pCVar8;
			}
			else {
				pSVar7.AddWithResize((object)pCVar8);
			}
			pSVar7 = *targetAddress;
			pCVar8 = Hook.CreateHook(null, left, 2, 0.8, gun);
			if (pSVar7 == null) goto label_05bee56e;
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			pCVar5 = pSVar7._items;
		}
		else {
			if (uVar3 == 0) {
			}
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			if (((owner.klass._2).typeHierarchyDepth < bVar2) ||((owner.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) {
	label_05bee573: ;
				throw new InvalidCastException();
			}
			pCVar8 = Hook.CreateHook((Human)owner, left, 0, 0.8, gun);
			if (pSVar7 == null) goto label_05bee56e;
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			pCVar5 = pSVar7._items;
			if (pCVar5 == null) goto label_05bee56e;
			uVar4 = pSVar7._size;
			if (uVar4 < (uint)pCVar5.Length) {
				pSVar7._size = uVar4 + 1;
				pCVar5[(int)uVar4] = pCVar8;
			}
			else {
				pSVar7.AddWithResize((object)pCVar8);
			}
			pSVar7 = *targetAddress;
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			if (((owner.klass._2).typeHierarchyDepth < bVar2) ||((owner.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) goto label_05bee573;
			pCVar8 = Hook.CreateHook((Human)owner, left, 1, 0.8, gun);
			if (pSVar7 == null) goto label_05bee56e;
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			pCVar5 = pSVar7._items;
			if (pCVar5 == null) goto label_05bee56e;
			uVar4 = pSVar7._size;
			if (uVar4 < (uint)pCVar5.Length) {
				pSVar7._size = uVar4 + 1;
				pCVar5[(int)uVar4] = pCVar8;
			}
			else {
				pSVar7.AddWithResize((object)pCVar8);
			}
			pSVar7 = *targetAddress;
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			if (((owner.klass._2).typeHierarchyDepth < bVar2) ||((owner.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) goto label_05bee573;
			pCVar8 = Hook.CreateHook((Human)owner, left, 2, 0.8, gun);
			if (pSVar7 == null) goto label_05bee56e;
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			pCVar5 = pSVar7._items;
		}
		if (pCVar5 != null) {
			uVar4 = pSVar7._size;
			if (uVar4 < (uint)pCVar5.Length) {
				pSVar7._size = uVar4 + 1;
				pCVar5[(int)uVar4] = pCVar8;
				return;
			}
			pSVar7.AddWithResize((object)pCVar8);
			return;
		}
	label_05bee56e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004098")]
	[Address(RVA = "0x5AEE580", Offset = "0x5AED580", VA = "0x5AEE580")]
	public List<Renderer> GetRenderers()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$GetRenderers): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<Hook> __this_00;
		Renderer item;
		Renderer[] pUVar3;
		MethodInfo pMVar4;
		bool bVar5;
		List<Renderer> __this_01;
		System_Collections_Generic_List_Enumerator_object__o local_58;
		byte[] local_38 = new byte[16];
		object local_28;

		if (Il2CppMethodInitialized_07547601 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator) ;
			Il2CppMethodInitialized_07547601 = true;
		}
		__this_01 = new List<Renderer>();
		__this_00 = this.Hooks;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_38.GetEnumerator((List<object>)__this_00);
		local_58._current = local_28;
		local_58._list = (List<T>)local_38._0_8_;
		local_58._index = local_38._8_4_;
		local_58._version = local_38._12_4_;
		local_38._0_8_ = null;
		local_38._8_8_ = &local_58;
		if (__this_01 == null) {
			local_38._8_8_ = &local_58;
			bVar5 = local_58.MoveNext();
			if (bVar5) {
				if (local_58._current != null) {
	label_05bee730: ;
					throw new NullReferenceException();
				}
	label_05bee72b: ;
				throw new NullReferenceException();
			}
		}
		else {
			while (true) {
				bVar5 = local_58.MoveNext();
				pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
				if (!(bVar5)) break;
				if (local_58._current == null) goto label_05bee72b;
				item = local_58._current[4].monitor;
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = __this_01._items;
				if (pUVar3 == null) goto label_05bee730;
				uVar2 = __this_01._size;
				if (uVar2 < (uint)pUVar3.Length) {
					__this_01._size = uVar2 + 1;
					pUVar3[(int)uVar2] = item;
				}
				else {
					__this_01.AddWithResize((object)item);
				}
			}
		}
		local_58.Dispose();
		return __this_01;
	}

	[Token(Token = "0x6004099")]
	[Address(RVA = "0x5AEE7A0", Offset = "0x5AED7A0", VA = "0x5AEE7A0")]
	public bool IsHooked()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$IsHooked): clean
		Hook pCVar1;
		bool bVar2;
		bool bVar3;

		pCVar1 = this._activeHook;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this._activeHook;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.State == 2;
		}
		return bVar3;
	}

	[Token(Token = "0x600409A")]
	[Address(RVA = "0x5AEE810", Offset = "0x5AED810", VA = "0x5AEE810")]
	public bool HasHook()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$HasHook): clean
		Hook pCVar1;
		bool bVar2;
		bool bVar3;

		pCVar1 = this._activeHook;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this._activeHook;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.State != 0;
		}
		return bVar3;
	}

	[Token(Token = "0x600409B")]
	[Address(RVA = "0x5AEE880", Offset = "0x5AED880", VA = "0x5AEE880")]
	public bool IsHooking()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$IsHooking): clean
		Hook pCVar1;
		bool bVar2;
		bool bVar3;

		pCVar1 = this._activeHook;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this._activeHook;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.State == 1;
		}
		return bVar3;
	}

	[Token(Token = "0x600409C")]
	[Address(RVA = "0x5AEE8F0", Offset = "0x5AED8F0", VA = "0x5AEE8F0")]
	public bool IsReady()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$IsReady): clean
		Hook pCVar1;
		bool bVar2;
		bool bVar3;

		pCVar1 = this._activeHook;
		bVar2 = ((Object)pCVar1 == null);
		if (!bVar2) {
			pCVar1 = this._activeHook;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.State == 0;
		}
		return bVar3;
	}

	[Token(Token = "0x600409D")]
	[Address(RVA = "0x5AEE960", Offset = "0x5AED960", VA = "0x5AEE960")]
	public HookState GetHookState()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$GetHookState): clean
		Hook pCVar1;

		pCVar1 = this._activeHook;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1.State;
	}

	[Token(Token = "0x600409E")]
	[Address(RVA = "0x5AEE980", Offset = "0x5AED980", VA = "0x5AEE980")]
	public Vector3 GetHookPosition()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$GetHookPosition): clean
		Hook pCVar1;
		bool bVar2;
		Vector3 UVar3;

		pCVar1 = this._activeHook;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this._activeHook;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			UVar3 = (Vector3)pCVar1.GetHookPosition();
			return (Vector3)UVar3;
		}
		return (Vector3)(Vector3.zeroVector);
	}

	[Token(Token = "0x600409F")]
	[Address(RVA = "0x5AEEA30", Offset = "0x5AEDA30", VA = "0x5AEEA30")]
	public Vector3? GetCLHookPosition()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$GetCLHookPosition): 4 lines keep C-only constructs
		Hook pCVar1;
		System_Nullable_Vector3__Fields SVar2;
		bool bVar3;
		Vector3 value;
		System_Nullable_Vector3__Fields local_28;

		pCVar1 = this._activeHook;
		bVar3 = ((Object)pCVar1 != null);
		if (bVar3) {
			pCVar1 = this._activeHook;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			value = pCVar1.GetHookPosition();
			local_28.hasValue = false;
			local_28._1_3_ = 0;
			local_28.value.x = 0.0;
			local_28.value.y = 0.0;
			local_28.value.z = 0.0;
			local_28 = new Nullable<Vector3>(value);
		}
		else {
			local_28.hasValue = false;
			local_28._1_3_ = 0;
			local_28.value.x = 0.0;
			local_28.value.y = 0.0;
			local_28.value.z = 0.0;
		}
		SVar2.value.y = local_28.value.y;
		SVar2.value.z = local_28.value.z;
		SVar2.hasValue = local_28.hasValue;
		SVar2._1_3_ = local_28._1_3_;
		SVar2.value.x = local_28.value.x;
		return (System_Nullable_Vector3__o)SVar2;
	}

	[Token(Token = "0x60040A0")]
	[Address(RVA = "0x5AEEAE0", Offset = "0x5AEDAE0", VA = "0x5AEEAE0")]
	public bool IsHookOffset()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$IsHookOffset): clean
		Hook pCVar1;
		bool bVar2;
		bool bVar3;

		pCVar1 = this._activeHook;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this._activeHook;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.HasOffset != false;
		}
		return bVar3;
	}

	[Token(Token = "0x60040A1")]
	[Address(RVA = "0x5AEEB50", Offset = "0x5AEDB50", VA = "0x5AEEB50")]
	public Transform GetHookParent()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$GetHookParent): clean
		Hook pCVar1;

		pCVar1 = this._activeHook;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1.HookParent;
	}

	[Token(Token = "0x60040A2")]
	[Address(RVA = "0x5AEEB70", Offset = "0x5AEDB70", VA = "0x5AEEB70")]
	public BaseCharacter GetHookCharacter()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$GetHookCharacter): clean
		Hook pCVar1;

		pCVar1 = this._activeHook;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1.HookCharacter;
	}

	[Token(Token = "0x60040A3")]
	[Address(RVA = "0x5AEEB90", Offset = "0x5AEDB90", VA = "0x5AEEB90")]
	public void DisableActiveHook()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$DisableActiveHook): 3 lines keep C-only constructs
		Hook pCVar1;
		bool bVar2;
		Hook* targetAddress;

		pCVar1 = this._activeHook;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			targetAddress = &this._activeHook;
			pCVar1 = *targetAddress;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			if (pCVar1.State == 2) {
				pCVar1.SetHookState(4);
				*targetAddress = null;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60040A4")]
	[Address(RVA = "0x5AEEC20", Offset = "0x5AEDC20", VA = "0x5AEEC20")]
	public void DisableAnyHook()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$DisableAnyHook): 3 lines keep C-only constructs
		int iVar1;
		Hook pCVar2;
		bool bVar3;
		Hook* targetAddress;
		int state;

		pCVar2 = this._activeHook;
		targetAddress = &this._activeHook;
		bVar3 = ((Object)pCVar2 != null);
		if (bVar3) {
			pCVar2 = *targetAddress;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			iVar1 = pCVar2.State;
			if (iVar1 == 2) {
				state = 4;
			}
			else {
				if (iVar1 != 1) goto label_05beec99;
				state = 3;
			}
			pCVar2.SetHookState(state);
		}
	label_05beec99: ;
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x60040A5")]
	[Address(RVA = "0x5AEECC0", Offset = "0x5AEDCC0", VA = "0x5AEECC0")]
	public void MoveHookParents(Transform from, Transform to)
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$MoveHookParents): 3 lines keep C-only constructs
		List<Hook> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		if (Il2CppMethodInitialized_0754760b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator) ;
			Il2CppMethodInitialized_0754760b = true;
		}
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = this.Hooks;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_28 = (byte)&local_48;
		while(true) {
			bVar1 = local_48.MoveNext();
			if (!bVar1) {
				local_48.Dispose();
				return;
			}
			if ((Hook)local_48._current == null) break;
			local_48._current.MoveHookParent(from, to);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040A6")]
	[Address(RVA = "0x5AEEE10", Offset = "0x5AEDE10", VA = "0x5AEEE10")]
	public void DestroyHooks()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$DestroyHooks): 7 lines keep C-only constructs
		int piVar1;
		int length;
		List<Hook> pSVar2;
		Component __this_00;
		bool bVar3;
		GameObject __this_01;
		Object obj;
		byte[] local_60 = new byte[16];
		Component local_50;
		byte[] local_48 = new byte[16];
		Component local_38;

		if (Il2CppMethodInitialized_0754760c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator) ;
			Il2CppMethodInitialized_0754760c = true;
		}
		pSVar2 = this.Hooks;
		if (pSVar2 != null) {
			local_60.GetEnumerator((List<object>)pSVar2);
			local_38 = local_50;
			local_48._0_8_ = local_60._0_8_;
			local_48._8_8_ = local_60._8_8_;
			local_60._0_8_ = null;
			local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
			while(true) {
				bVar3 = local_48.MoveNext();
				__this_00 = local_38;
				if (!bVar3) break;
				if (local_38 == null) {
					throw new NullReferenceException();
				}
				__this_01 = local_38.gameObject;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				__this_01.SetActive(false);
				obj = (Object)__this_00.gameObject;
				Object.Destroy(obj);
			}
			local_48.Dispose();
			pSVar2 = this.Hooks;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar2._items, 0, length);
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040A7")]
	[Address(RVA = "0x5AEF000", Offset = "0x5AEE000", VA = "0x5AEF000", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$Activate): clean
		this.StartHook();
		return;
	}

	[Token(Token = "0x60040A8")]
	[Address(RVA = "0x5AEF8D0", Offset = "0x5AEE8D0", VA = "0x5AEF8D0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$ActiveFixedUpdate): clean
		this.StartHook();
		return;
	}

	[Token(Token = "0x60040A9")]
	[Address(RVA = "0x5AEF8E0", Offset = "0x5AEE8E0", VA = "0x5AEF8E0")]
	public void FixedUpdateMock()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$FixedUpdateMock): clean
		Hook pCVar1;
		bool bVar2;

		pCVar1 = this._activeHook;
		bVar2 = ((Object)pCVar1 == null);
		if (bVar2) {
			return;
		}
		pCVar1 = this._activeHook;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.FixedUpdateMock();
		return;
	}

	[Token(Token = "0x60040AA")]
	[Address(RVA = "0x5AEF010", Offset = "0x5AEE010", VA = "0x5AEF010")]
	private void StartHook()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$StartHook): 122 lines keep C-only constructs
		Hook* targetAddress;
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		sbyte cVar7;
		byte bVar8;
		uint uVar9;
		BaseCharacter pCVar10;
		BaseCharacter pCVar11;
		BaseCamera pCVar12;
		BaseComponentCache pUVar13;
		Transform pUVar14;
		Rigidbody __this_00;
		long lVar15;
		byte[] auVar16 = new byte[16];
		byte[] auVar17 = new byte[16];
		byte[] auVar18 = new byte[16];
		bool bVar19;
		Hook pCVar20;
		UnityEngine_Vector3_StaticFields pUVar21;
		float fVar23;
		float fVar24;
		float fVar25;
		float extraout_XMM0_Db;
		float fVar26;
		float extraout_XMM0_Db_00;
		float extraout_XMM0_Db_01;
		float extraout_XMM0_Db_02;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float fVar27;
		float extraout_XMM0_Dc_02;
		float extraout_XMM0_Dc_03;
		float fVar28;
		uint extraout_XMM0_Dc_04;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float fVar29;
		float extraout_XMM0_Dd_02;
		float extraout_XMM0_Dd_03;
		float fVar30;
		uint extraout_XMM0_Dd_04;
		float fVar31;
		float in_XMM1_Db;
		float in_XMM1_Dc;
		uint uVar32;
		float in_XMM1_Dd;
		uint uVar33;
		byte[] auVar34 = new byte[16];
		byte[] auVar35 = new byte[16];
		Vector3 UVar36;
		Vector3 relativeVelocity;
		byte[] local_c8 = new byte[8];
		float fStack_c0;
		float fStack_bc;
		UnityEngine_Vector3_StaticFields local_b0;
		ulong local_38;
		ulong uStack_30;

		pCVar20 = this._activeHook;
		targetAddress = &this._activeHook;
		bVar19 = ((Object)pCVar20 != null);
		if (bVar19) {
			if (*targetAddress == null) goto label_05bef8b8;
			if (((*targetAddress).fields).State != 0) goto label_05bef09e;
			*targetAddress = null;
			cVar7 = this.Enabled;
		}
		else {
	label_05bef09e: ;
			cVar7 = this.Enabled;
		}
		if (cVar7 == false) {
			return;
		}
		pCVar20 = *targetAddress;
		if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar19 = ((Object)pCVar20 == null);
		if (!bVar19) {
			return;
		}
		pCVar20 = this.FindAvailableHook();
		this._activeHook = pCVar20;
		pCVar10 = this._owner;
		if (pCVar10 == null) goto label_05bef8b8;
		pCVar11 = pCVar10.klass;
		bVar8 = (typeof(Human)._2).typeHierarchyDepth;
		if (((pCVar11._2).typeHierarchyDepth < bVar8) ||((pCVar11._2).typeHierarchy[(ulong)bVar8 - 1] != typeof(Human))) goto label_05bef8bd;
		UVar36 = pCVar10.GetAimPoint();
		fVar27 = UVar36.z;
		fVar24 = UVar36.x;
		fVar26 = UVar36.y;
		fVar23 = extraout_XMM0_Dc;
		fVar25 = extraout_XMM0_Dd;
		if (this.HookBoth != false) {
			pCVar12 = SceneLoader.CurrentCamera;
			if (((pCVar12 == null) ||(pUVar13 = pCVar12.Cache, pUVar13 == null)) ||(pUVar14 = pUVar13.Transform, local_b0.zeroVector.z = fVar27, local_b0.oneVector.x = in_XMM1_Db, local_b0.oneVector.y = in_XMM1_Dc, local_b0.oneVector.z = in_XMM1_Dd, pUVar14 == null)) goto label_05bef8b8;
			UVar36 = pUVar14.position;
			fVar23 = UVar36.z;
			fVar25 = UVar36.x;
			fVar27 = UVar36.y;
			if (g_data_0753e7b7 == false) {
				local_b0.leftVector.x = extraout_XMM0_Dc_00;
				local_b0.downVector._4_8_ = UVar36._0_8_;
				local_b0.leftVector.y = extraout_XMM0_Dd_00;
				local_b0.rightVector.x = in_XMM1_Db;
				local_b0.leftVector.z = fVar23;
				local_b0.rightVector.y = in_XMM1_Dc;
				local_b0.rightVector.z = in_XMM1_Dd;
				g_data_0753e7b7 = true;
				uVar9 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				fVar23 = local_b0.leftVector.z;
				in_XMM1_Db = local_b0.rightVector.x;
				in_XMM1_Dc = local_b0.rightVector.y;
				in_XMM1_Dd = local_b0.rightVector.z;
				fVar25 = local_b0.downVector.y;
				fVar27 = local_b0.downVector.z;
				fVar29 = local_b0.leftVector.x;
				fVar31 = local_b0.leftVector.y;
			}
			else {
				uVar9 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				fVar29 = extraout_XMM0_Dc_00;
				fVar31 = extraout_XMM0_Dd_00;
			}
			if (uVar9 == 0) {
				local_b0.downVector.z = fVar27;
				local_b0.downVector.y = fVar25;
				local_b0.leftVector.x = fVar29;
				local_b0.leftVector.y = fVar31;
				local_b0.rightVector.x = in_XMM1_Db;
				local_b0.leftVector.z = fVar23;
				local_b0.rightVector.y = in_XMM1_Dc;
				local_b0.rightVector.z = in_XMM1_Dd;
				fVar25 = local_b0.downVector.y;
				fVar27 = local_b0.downVector.z;
				fVar23 = local_b0.leftVector.z;
			}
			fVar25 = (fVar27 - fVar26) * (fVar27 - fVar26) + (fVar25 - fVar24) * (fVar25 - fVar24);
			fVar23 = fVar25 + (fVar23 - local_b0.zeroVector.z) * (fVar23 - local_b0.zeroVector.z);
			if (fVar23 < 0.0) {
				fVar23 = sqrtf(fVar23);
				fVar25 = extraout_XMM0_Db;
				fVar27 = extraout_XMM0_Dc_01;
				fVar29 = extraout_XMM0_Dd_01;
			}
			else {
				fVar23 = SQRT(fVar23);
				fVar27 = fVar25;
				fVar29 = fVar25;
			}
			fVar23 = fVar23 * *(float)(&g_data_0100ae98 + (ulong)(50.0 < fVar23) * 4);
			if (this._left != false) {
				fVar23 = -fVar23;
				fVar25 = -fVar25;
				fVar27 = -fVar27;
				fVar29 = -fVar29;
			}
			pCVar10 = this._owner;
			if ((pCVar10 == null) ||(pUVar13 = pCVar10.Cache, pUVar13 == null)) goto label_05bef8b8;
			local_b0.downVector.z = fVar25;
			local_b0.downVector.y = fVar23;
			local_b0.leftVector.x = fVar27;
			local_b0.leftVector.y = fVar29;
			pUVar14 = pUVar13.Transform;
			if (pUVar14 == null) goto label_05bef8b8;
			UVar36 = pUVar14.right;
			fVar24 = fVar24 + local_b0.downVector.y * UVar36.x;
			fVar26 = fVar26 + local_b0.downVector.y * UVar36.y;
			fVar23 = extraout_XMM0_Dc + local_b0.downVector.y * extraout_XMM0_Dc_02;
			fVar25 = extraout_XMM0_Dd + local_b0.downVector.y * extraout_XMM0_Dd_02;
			fVar27 = local_b0.zeroVector.z + UVar36.z * local_b0.downVector.y;
			in_XMM1_Db = local_b0.oneVector.x;
			in_XMM1_Dc = local_b0.oneVector.y;
			in_XMM1_Dd = local_b0.oneVector.z;
		}
		if ((*targetAddress == null) ||(pUVar14 = ((*targetAddress).fields).Anchor, local_b0.zeroVector.z = fVar27, local_b0.oneVector.x = in_XMM1_Db, local_b0.oneVector.y = in_XMM1_Dc, local_b0.oneVector.z = in_XMM1_Dd, pUVar14 == null)) goto label_05bef8b8;
		UVar36 = pUVar14.position;
		fVar31 = UVar36.z;
		fVar27 = UVar36.x;
		fVar29 = UVar36.y;
		if (Il2CppMethodInitialized_0753e72d == false) {
			local_b0.downVector.y = fVar31;
			local_b0.rightVector.y = extraout_XMM0_Dc_03;
			local_b0._56_8_ = UVar36._0_8_;
			local_b0.rightVector.z = extraout_XMM0_Dd_03;
			Il2CppMethodInitialized_0753e72d = true;
			local_b0.zeroVector.x = 0.0;
			local_b0.zeroVector.y = 0.0;
			fVar27 = local_b0.leftVector.z;
			fVar29 = local_b0.rightVector.x;
			fVar28 = local_b0.rightVector.y;
			fVar30 = local_b0.rightVector.z;
			fVar31 = local_b0.downVector.y;
		}
		else {
			local_b0.zeroVector.x = 0.0;
			local_b0.zeroVector.y = 0.0;
			fVar28 = extraout_XMM0_Dc_03;
			fVar30 = extraout_XMM0_Dd_03;
		}
		local_b0.zeroVector.x = 0.0;
		local_b0.zeroVector.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_b0.zeroVector.x = 0.0;
			local_b0.zeroVector.y = 0.0;
			local_b0.downVector.y = fVar31;
			local_b0.rightVector.x = fVar29;
			local_b0.leftVector.z = fVar27;
			local_b0.rightVector.y = fVar28;
			local_b0.rightVector.z = fVar30;
			Il2CppMethodInitialized_0753e729 = true;
			fVar27 = local_b0.leftVector.z;
			fVar29 = local_b0.rightVector.x;
			fVar28 = local_b0.rightVector.y;
			fVar30 = local_b0.rightVector.z;
			fVar31 = local_b0.downVector.y;
		}
		auVar34._0_4_ = fVar24 - fVar27;
		auVar34._4_4_ = fVar26 - fVar29;
		auVar34._8_4_ = fVar23 - fVar28;
		auVar34._12_4_ = fVar25 - fVar30;
		fVar23 = local_b0.zeroVector.z - fVar31;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			local_b0.zeroVector.z = local_b0.zeroVector.z - fVar31;
			fVar23 = local_b0.zeroVector.z;
		}
		fVar25 = fVar23 * fVar23 + auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
		fVar24 = 0.0;
		uVar32 = 0;
		uVar33 = 0;
		if (fVar25 < 0.0) {
			local_b0.zeroVector.z = fVar23;
			fVar25 = sqrtf(fVar25);
			fVar26 = extraout_XMM0_Db_00;
			fVar23 = local_b0.zeroVector.z;
			if (1e-05 < fVar25) goto label_05bef379;
	label_05bef341: ;
			pUVar21 = typeof(Vector3).static_fields;
			fVar23 = (pUVar21.zeroVector).z;
			fVar25 = 0.0;
			fVar26 = 0.0;
			fVar27 = 0.0;
		}
		else {
			fVar25 = SQRT(fVar25);
			fVar26 = local_b0.oneVector.x;
			if (fVar25 <= 1e-05) goto label_05bef341;
	label_05bef379: ;
			fVar23 = fVar23 / fVar25;
			auVar18._4_4_ = fVar25;
			auVar18._0_4_ = fVar25;
			auVar18._8_4_ = fVar26;
			auVar18._12_4_ = fVar26;
			auVar34 = divps(auVar34, auVar18);
			local_b0.zeroVector.x = auVar34._0_4_;
			local_b0.zeroVector.y = auVar34._4_4_;
			pUVar21 = &local_b0;
			fVar25 = local_b0.oneVector.x;
			fVar26 = local_b0.oneVector.y;
			fVar27 = local_b0.oneVector.z;
		}
		pCVar10 = this._owner;
		if ((pCVar10 == null) ||(pUVar13 = pCVar10.Cache, pUVar13 == null)) goto label_05bef8b8;
		local_b0.zeroVector.z = fVar23;
		local_b0.oneVector.x = fVar25;
		local_b0.oneVector.y = fVar26;
		local_b0.oneVector.z = fVar27;
		__this_00 = pUVar13.Rigidbody;
		if (__this_00 == null) goto label_05bef8b8;
		uVar1 = (pUVar21.zeroVector).x;
		uVar4 = (pUVar21.zeroVector).y;
		local_b0._88_16_ = ZEXT416((uint)this._hookSpeed);
		UVar36 = __this_00.linearVelocity;
		local_b0.leftVector.z = UVar36.x;
		local_b0.rightVector.x = UVar36.y;
		local_b0.rightVector.y = (float)extraout_XMM0_Dc_04;
		local_b0.rightVector.z = (float)extraout_XMM0_Dd_04;
		local_b0.downVector.z = fVar24;
		local_b0.downVector.y = UVar36.z;
		local_b0.leftVector.x = (float)uVar32;
		local_b0.leftVector.y = (float)uVar33;
		pUVar21 = typeof(Vector3).static_fields;
		local_38._0_4_ = (pUVar21.zeroVector).x;
		local_38._4_4_ = (pUVar21.zeroVector).y;
		uStack_30 = 0;
		local_b0.downVector.x = (pUVar21.zeroVector).z;
		local_b0.zeroVector.x = 0.0;
		local_b0.zeroVector.y = 0.0;
		local_c8._0_4_ = local_b0.backVector.y;
		local_c8._4_4_ = local_b0.backVector.y;
		fVar23 = local_b0.backVector.y;
		fVar25 = local_b0.backVector.y;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_b0.negativeInfinityVector.x = local_b0.backVector.y;
			local_b0.positiveInfinityVector.z = local_b0.backVector.y;
			local_b0.negativeInfinityVector.z = local_b0.backVector.y;
			local_b0.negativeInfinityVector.y = local_b0.backVector.y;
			Il2CppMethodInitialized_0753e729 = true;
			local_c8._0_4_ = local_b0.positiveInfinityVector.z;
			local_c8._4_4_ = local_b0.negativeInfinityVector.x;
			fVar23 = local_b0.negativeInfinityVector.y;
			fVar25 = local_b0.negativeInfinityVector.z;
		}
		local_c8._0_4_ = (float)uVar1 * (float)local_c8._0_4_;
		local_c8._4_4_ = (float)uVar4 * (float)local_c8._4_4_;
		local_b0.zeroVector.z = local_b0.zeroVector.z * local_b0.backVector.y;
		fStack_c0 = fVar23 * 0.0;
		fStack_bc = fVar25 * 0.0;
		local_b0.backVector.x = local_b0.zeroVector.z * local_b0.zeroVector.z +(float)local_c8._4_4_ * (float)local_c8._4_4_ + (float)local_c8._0_4_ * (float)local_c8._0_4_;
		if (local_b0.backVector.x < 0.0) {
			fVar26 = sqrtf(local_b0.backVector.x);
			fVar24 = extraout_XMM0_Db_01;
			if (1e-05 < fVar26) goto label_05bef53e;
	label_05bef4fa: ;
			pUVar21 = typeof(Vector3).static_fields;
			local_b0.backVector.y = (pUVar21.zeroVector).z;
			local_b0.positiveInfinityVector.z = (pUVar21.zeroVector).x;
			local_b0.negativeInfinityVector.x = (pUVar21.zeroVector).y;
			local_b0.negativeInfinityVector.y = 0.0;
			local_b0.negativeInfinityVector.z = 0.0;
		}
		else {
			fVar26 = SQRT(local_b0.backVector.x);
			fVar24 = local_b0.oneVector.x;
			if (fVar26 <= 1e-05) goto label_05bef4fa;
	label_05bef53e: ;
			local_b0.backVector.y = local_b0.zeroVector.z / fVar26;
			auVar17._4_4_ = fVar26;
			auVar17._0_4_ = fVar26;
			auVar17._8_4_ = fVar24;
			auVar17._12_4_ = fVar24;
			auVar34 = divps(_local_c8, auVar17);
			local_b0.zeroVector._0_8_ = auVar34._0_8_;
			local_b0.positiveInfinityVector.z = auVar34._0_4_;
			local_b0.negativeInfinityVector.x = auVar34._4_4_;
			local_b0.negativeInfinityVector.y = 0.0;
			local_b0.negativeInfinityVector.z = 0.0;
		}
		local_b0.negativeInfinityVector.y = 0.0;
		local_b0.negativeInfinityVector.z = 0.0;
		if (Il2CppMethodInitialized_0753e72d == false) {
			local_b0.negativeInfinityVector.y = 0.0;
			local_b0.negativeInfinityVector.z = 0.0;
			Il2CppMethodInitialized_0753e72d = true;
		}
		local_b0.zeroVector.x = 0.0;
		local_b0.zeroVector.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar9 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar9 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar9 == 0) {
		}
		fVar24 = local_b0.downVector.y * local_b0.downVector.y + local_b0.rightVector.x * local_b0.rightVector.x + local_b0.leftVector.z * local_b0.leftVector.z;
		if (fVar24 < 0.0) {
			fVar24 = sqrtf(fVar24);
			fVar26 = extraout_XMM0_Db_02;
			if (1e-05 < fVar24) goto label_05bef5fb;
	label_05bef5db: ;
			pUVar21 = typeof(Vector3).static_fields;
			fVar27 = (pUVar21.zeroVector).z;
		}
		else {
			fVar24 = SQRT(fVar24);
			fVar26 = local_b0.downVector.z;
			if (fVar24 <= 1e-05) goto label_05bef5db;
	label_05bef5fb: ;
			fVar27 = local_b0.downVector.y / fVar24;
			auVar16._4_4_ = fVar24;
			auVar16._0_4_ = fVar24;
			auVar16._8_4_ = fVar26;
			auVar16._12_4_ = fVar26;
			auVar34 = divps((byte[])local_b0._56_16_, auVar16);
			local_b0.zeroVector.x = auVar34._0_4_;
			local_b0.zeroVector.y = auVar34._4_4_;
			pUVar21 = &local_b0;
		}
		uVar2 = (pUVar21.zeroVector).x;
		uVar5 = (pUVar21.zeroVector).y;
		fVar24 = acosf(local_b0.negativeInfinityVector.x * (float)uVar5 + local_b0.positiveInfinityVector.z * (float)uVar2 + local_b0.backVector.y * fVar27);
		auVar35._8_8_ = uStack_30;
		auVar35._0_8_ = local_38;
		if (ABS(fVar24 * 57.29578) <= 90.0) {
			if (Mathf.Epsilon <= local_b0.backVector.x) {
				fVar24 = (local_b0.downVector.y * local_b0.zeroVector.z + local_b0.rightVector.x * (float)local_c8._4_4_ + local_b0.leftVector.z * (float)local_c8._0_4_) / local_b0.backVector.x;
				local_b0.downVector.x = local_b0.zeroVector.z * fVar24;
				auVar35._4_4_ = fVar24 * (float)local_c8._4_4_;
				auVar35._0_4_ = fVar24 * (float)local_c8._0_4_;
				auVar35._8_4_ = fVar24 * fVar23 * 0.0;
				auVar35._12_4_ = fVar24 * fVar25 * 0.0;
			}
			else {
				pUVar21 = typeof(Vector3).static_fields;
				uVar3 = (pUVar21.zeroVector).x;
				uVar6 = (pUVar21.zeroVector).y;
				auVar35._4_4_ = uVar6;
				auVar35._0_4_ = uVar3;
				auVar35._8_8_ = 0;
				local_b0.downVector.x = (pUVar21.zeroVector).z;
			}
		}
		if (*targetAddress != null) {
			UVar36.z = local_b0.zeroVector.z;
			UVar36.x = (float)local_c8._0_4_;
			UVar36.y = (float)local_c8._4_4_;
			relativeVelocity._0_8_ = auVar35._0_8_;
			relativeVelocity.z = local_b0.downVector.x;
			(*targetAddress).SetHooking(UVar36, relativeVelocity);
			pCVar10 = this._owner;
			if (pCVar10 != null) {
				bVar8 = (typeof(Human)._2).typeHierarchyDepth;
				if (((pCVar10.klass._2).typeHierarchyDepth < bVar8) ||((pCVar10.klass._2).typeHierarchy[(ulong)bVar8 - 1] != typeof(Human))) {
	label_05bef8bd: ;
					throw new InvalidCastException();
				}
				lVar15 = *(long)&(*(byte)((sbyte)pCVar10 + 0x158));
				if (lVar15 != 0) {
					fVar23 = *(float)(lVar15 + 0x28) - *(float)(lVar15 + 0x30);
					if (fVar23 <= 0.0) {
						fVar23 = 0.0;
					}
					*(float)(lVar15 + 0x28) = fVar23;
					return;
				}
			}
		}
	label_05bef8b8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040AB")]
	[Address(RVA = "0x5AEFBF0", Offset = "0x5AEEBF0", VA = "0x5AEFBF0", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$Deactivate): clean
		return;
	}

	[Token(Token = "0x60040AC")]
	[Address(RVA = "0x5AEF960", Offset = "0x5AEE960", VA = "0x5AEF960")]
	private Hook FindAvailableHook()
	{
		// Lifted from source/cpp/Characters/HookUseable.c (Characters.HookUseable$$FindAvailableHook): 7 lines keep C-only constructs
		List<Hook> pSVar1;
		bool bVar2;
		Hook pCVar3;
		byte[] local_68 = new byte[8];
		Hook local_58;
		byte[] local_48 = new byte[16];
		Hook local_38;

		if (Il2CppMethodInitialized_0754760f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator) ;
			Il2CppMethodInitialized_0754760f = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar1 = this.Hooks;
		if (pSVar1 == null) {
	label_05befb24: ;
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)pSVar1);
		local_58 = local_38;
		local_68 = (byte[])local_48._0_8_;
		local_48._0_8_ = null;
		local_48._8_8_ = local_68;
		do {
			bVar2 = local_68.MoveNext();
			if (!bVar2) {
				local_68.Dispose();
				pSVar1 = this.Hooks;
				if (pSVar1 == null) goto label_05befb24;
				local_48.GetEnumerator((List<object>)pSVar1);
				local_58 = local_38;
				local_68 = (byte[])local_48._0_8_;
				local_48._0_8_ = null;
				local_48._8_8_ = local_68;
				goto label_05befaa0;
			}
			if (local_58 == null) {
				throw new NullReferenceException();
			}
		} while (local_58.State != 0);
	label_05befac5: ;
		local_68.Dispose();
		return pCVar3;
		while(true) {
			if (local_58 == null) {
				throw new NullReferenceException();
			}
			if (local_58.State - 3U < 2) break;
	label_05befaa0: ;
			bVar2 = local_68.MoveNext();
			if (!bVar2) {
				local_68.Dispose();
				pSVar1 = this.Hooks;
				if (pSVar1 != null) {
					return pCVar3;
				}
				goto label_05befb24;
			}
		}
		goto label_05befac5;
	}
}
