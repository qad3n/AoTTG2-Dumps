// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgActionRegistry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgActionRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000073")]
public sealed class AottgActionRegistry
{
	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x18")]
	private int _next;

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x5261250", Offset = "0x5260250", VA = "0x5261250")]
	public void Clear()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgActionRegistry.c (Gisketch.Aottg2UI.Code.AottgActionRegistry$$Clear): clean
		Dictionary<object, object> __this_00;

		__this_00 = (Dictionary<object, object>)this._actions;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		this._next = 0;
		return;
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x52612A0", Offset = "0x52602A0", VA = "0x52612A0")]
	public void ClearOwner(string ownerId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgActionRegistry.c (Gisketch.Aottg2UI.Code.AottgActionRegistry$$ClearOwner): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		String[] pSVar4;
		String item;
		byte puVar6;
		bool bVar7;
		String pSVar8;
		List<string> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		byte[] local_78 = new byte[8];
		String local_68;
		byte[] local_60 = new byte[16];
		String local_50;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		if (Il2CppMethodInitialized_075429ba == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_get_Keys) ;
			Il2CppMethodInitialized_075429ba = true;
		}
		local_78 = (byte[])0x0;
		local_68 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		bVar7 = String.IsNullOrEmpty(ownerId);
		if (bVar7) {
			return;
		}
		if (ownerId != null) {
			pSVar8 = ownerId.Replace(0x20, 0x2d);
			pSVar8 = String.Concat("code.", pSVar8, ".");
			__this_00 = new List<string>();
			pSVar3 = (Dictionary<object, object>)this._actions;
			if ((pSVar3 != null) &&(__this_01 = pSVar3.Keys, __this_01 != null)) {
				local_60.GetEnumerator(__this_01);
				local_68 = local_50;
				local_78 = (byte[])local_60._0_8_;
				local_60._0_8_ = null;
				local_60._8_8_ = local_78;
				puVar6 = local_78;
				if (__this_00 == null) {
					do {
						local_60._8_8_ = puVar6;
						bVar7 = local_78.MoveNext();
						if (!bVar7) goto label_05361566;
						if (local_68 == null) goto label_05361610;
						bVar7 = local_68.StartsWith(pSVar8, 5);
						puVar6 = (byte)local_60._8_8_;
					} while (!bVar7);
	label_05361561: ;
					throw new NullReferenceException();
				}
				while (true) {
					bVar7 = local_78.MoveNext();
					item = local_68;
					if (!(bVar7)) break;
					if (local_68 == null) {
	label_05361610: ;
						throw new NullReferenceException();
					}
					bVar7 = local_68.StartsWith(pSVar8, 5);
					if (bVar7) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = __this_00._items;
						if (pSVar4 == null) goto label_05361561;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar4.Length) {
							__this_00._size = uVar2 + 1;
							pSVar4[(int)uVar2] = item;
						}
						else {
							__this_00.AddWithResize((object)item);
						}
					}
				}
	label_05361566: ;
				local_78.Dispose();
				if (__this_00 != null) {
					local_48 = __this_00.GetEnumerator();
					local_60._0_8_ = null;
					local_60._8_8_ = &local_48;
					while(true) {
						bVar7 = local_48.MoveNext();
						if (!bVar7) {
							local_48.Dispose();
							return;
						}
						pSVar3 = (Dictionary<object, object>)this._actions;
						if (pSVar3 == null) break;
						pSVar3.Remove(local_48._current);
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x52616E0", Offset = "0x52606E0", VA = "0x52616E0")]
	public void ClearOwnersWithPrefix(string ownerIdPrefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgActionRegistry.c (Gisketch.Aottg2UI.Code.AottgActionRegistry$$ClearOwnersWithPrefix): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		String[] pSVar4;
		String item;
		byte puVar6;
		bool bVar7;
		String pSVar8;
		List<string> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		byte[] local_78 = new byte[8];
		String local_68;
		byte[] local_60 = new byte[16];
		String local_50;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		if (Il2CppMethodInitialized_075429bb == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_get_Keys) ;
			Il2CppMethodInitialized_075429bb = true;
		}
		local_78 = (byte[])0x0;
		local_68 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		bVar7 = String.IsNullOrEmpty(ownerIdPrefix);
		if (bVar7) {
			return;
		}
		if (ownerIdPrefix != null) {
			pSVar8 = ownerIdPrefix.Replace(0x20, 0x2d);
			pSVar8 = String.Concat("code.", pSVar8);
			__this_00 = new List<string>();
			pSVar3 = (Dictionary<object, object>)this._actions;
			if ((pSVar3 != null) &&(__this_01 = pSVar3.Keys, __this_01 != null)) {
				local_60.GetEnumerator(__this_01);
				local_68 = local_50;
				local_78 = (byte[])local_60._0_8_;
				local_60._0_8_ = null;
				local_60._8_8_ = local_78;
				puVar6 = local_78;
				if (__this_00 == null) {
					do {
						local_60._8_8_ = puVar6;
						bVar7 = local_78.MoveNext();
						if (!bVar7) goto label_05361986;
						if (local_68 == null) goto label_05361a30;
						bVar7 = local_68.StartsWith(pSVar8, 5);
						puVar6 = (byte)local_60._8_8_;
					} while (!bVar7);
	label_05361981: ;
					throw new NullReferenceException();
				}
				while (true) {
					bVar7 = local_78.MoveNext();
					item = local_68;
					if (!(bVar7)) break;
					if (local_68 == null) {
	label_05361a30: ;
						throw new NullReferenceException();
					}
					bVar7 = local_68.StartsWith(pSVar8, 5);
					if (bVar7) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = __this_00._items;
						if (pSVar4 == null) goto label_05361981;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar4.Length) {
							__this_00._size = uVar2 + 1;
							pSVar4[(int)uVar2] = item;
						}
						else {
							__this_00.AddWithResize((object)item);
						}
					}
				}
	label_05361986: ;
				local_78.Dispose();
				if (__this_00 != null) {
					local_48 = __this_00.GetEnumerator();
					local_60._0_8_ = null;
					local_60._8_8_ = &local_48;
					while(true) {
						bVar7 = local_48.MoveNext();
						if (!bVar7) {
							local_48.Dispose();
							return;
						}
						pSVar3 = (Dictionary<object, object>)this._actions;
						if (pSVar3 == null) break;
						pSVar3.Remove(local_48._current);
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x5261B00", Offset = "0x5260B00", VA = "0x5261B00")]
	public string Register(string ownerId, Action<GisketchActionContext> action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgActionRegistry.c (Gisketch.Aottg2UI.Code.AottgActionRegistry$$Register): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		String str3;
		String pSVar2;
		int local_1c;

		if (Il2CppMethodInitialized_075429bc == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item) ;
			Il2CppMethodInitialized_075429bc = true;
		}
		if (action == null) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			bVar1 = String.IsNullOrEmpty(ownerId);
			if (bVar1) {
				pSVar2 = "surface";
			}
			else {
				if (ownerId == null) goto label_05361c15;
				pSVar2 = ownerId.Replace(0x20, 0x2d);
			}
			local_1c = this._next;
			this._next = local_1c + 1;
			str3 = local_1c.ToString();
			pSVar2 = String.Concat("code.", pSVar2, ".", str3);
			__this_00 = (Dictionary<object, object>)this._actions;
			if (__this_00 == null) {
	label_05361c15: ;
				throw new NullReferenceException();
			}
			__this_00.set_Item((object)pSVar2, (object)action);
		}
		return pSVar2;
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x5261C20", Offset = "0x5260C20", VA = "0x5261C20")]
	public bool TryHandle(string actionId, GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgActionRegistry.c (Gisketch.Aottg2UI.Code.AottgActionRegistry$$TryHandle): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		bool bVar2;
		object local_20;

		local_20 = null;
		bVar1 = String.IsNullOrEmpty(actionId);
		if (!bVar1) {
			__this_00 = (Dictionary<object, object>)this._actions;
			if (__this_00 == null) {
	label_05361cc4: ;
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((object)actionId, ref local_20);
			if (bVar1) {
				if (local_20 == null) goto label_05361cc4;
				(*local_20[1].monitor)(local_20[4].klass,local_20[2].monitor);
			}
			else {
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x5261CD0", Offset = "0x5260CD0", VA = "0x5261CD0")]
	public AottgActionRegistry()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgActionRegistry.c (Gisketch.Aottg2UI.Code.AottgActionRegistry$$.ctor): 2 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, Action<GisketchActionContext>> __this_00;

		if (Il2CppMethodInitialized_075429be == false) {
			Il2CppMethodInitialized_075429be = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Action<GisketchActionContext>>));
		__this_00 = new Dictionary<object, object>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		this._actions = __this_00;
		base();
		return;
	}
}
