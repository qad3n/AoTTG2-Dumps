// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONArray
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONArray.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x200004C")]
public class JSONArray : JSONNode
{
	[Token(Token = "0x200004D")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__24 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001BE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001BF")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001C0")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001C1")]
		[FieldOffset(Offset = "0x28")]
		public JSONArray _003C_003E4__this;

		[Token(Token = "0x40001C2")]
		[FieldOffset(Offset = "0x30")]
		private List<JSONNode>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000050")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000259")]
			[Address(RVA = "0x5767960", Offset = "0x5766960", VA = "0x5767960", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000051")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600025B")]
			[Address(RVA = "0x57679B0", Offset = "0x57669B0", VA = "0x57679B0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x6000255")]
		[Address(RVA = "0x5767430", Offset = "0x5766430", VA = "0x5767430")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__24(int _003C_003E1__state)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray.<get_Children>d__24$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6000256")]
		[Address(RVA = "0x5767700", Offset = "0x5766700", VA = "0x5767700", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.IDisposable.Dispose): clean
			int iVar1;

			iVar1 = this.__1__state;
			if ((iVar1 != 1) && (iVar1 != -3)) {
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x6000257")]
		[Address(RVA = "0x5767750", Offset = "0x5766750", VA = "0x5767750", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray.<get_Children>d__24$$MoveNext): 5 lines keep C-only constructs
			int iVar1;
			JSONArray pSVar2;
			List<object> __this_00;
			JSONArray.d__24<get_Children> pSVar3;
			JSONArray.d__24<get_Children>* ppSVar4;
			bool bVar5;
			JSONArray.d__24<get_Children> local_58;
			byte local_48;
			System_Collections_Generic_List_Enumerator_T__o local_40;

			local_58 = this;
			local_48 = (byte)&local_58;
			iVar1 = this.__1__state;
			ppSVar4 = &local_58;
			if (iVar1 != 1) {
				if (iVar1 != 0) {
					return false;
				}
				pSVar2 = this.__4__this;
				this.__1__state = -1;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				__this_00 = (List<object>)pSVar2.m_List;
				if (__this_00 == null) {
					local_48 = (byte)&local_58;
					throw new NullReferenceException();
				}
				local_48 = (byte)&local_58;
				local_40 = __this_00.GetEnumerator();
				local_58.__7__wrap1._current = (JSONNode)local_40._current;
				local_58.__7__wrap1._list = local_40._list;
				local_58.__7__wrap1._index = local_40._index;
				local_58.__7__wrap1._version = local_40._version;
				this = local_58;
				ppSVar4 = (JSONArray.d__24<get_Children>*)local_48;
			}
			local_48 = (byte)ppSVar4;
			this.__1__state = -3;
			bVar5 = (this.__7__wrap1).MoveNext();
			pSVar3 = local_58;
			if (bVar5) {
				local_58.__2__current = local_58.__7__wrap1._current;
				local_58.__1__state = 1;
				return true;
			}
			pSVar3.__1__state = -1;
			(pSVar3.__7__wrap1).Dispose();
			local_58.__7__wrap1._list = null;
			local_58.__7__wrap1._index = 0;
			local_58.__7__wrap1._version = 0;
			local_58.__7__wrap1._current = null;
			return false;
		}

		[Token(Token = "0x6000258")]
		[Address(RVA = "0x5767920", Offset = "0x5766920", VA = "0x5767920")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray.<get_Children>d__24$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x600025A")]
		[Address(RVA = "0x5767970", Offset = "0x5766970", VA = "0x5767970", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_SimpleJSONFixed_JSONArray_get_Children_d__24_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x600025C")]
		[Address(RVA = "0x57679C0", Offset = "0x57669C0", VA = "0x57679C0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			JSONArray.d__24<get_Children> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = new JSONArray.d__24<get_Children>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			__this_00.__4__this = this.__4__this;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x600025D")]
		[Address(RVA = "0x5767A60", Offset = "0x5766A60", VA = "0x5767A60", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x10")]
	private List<JSONNode> m_List;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x18")]
	private bool inline;

	[Token(Token = "0x17000049")]
	public override bool Inline
	{
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x5766980", Offset = "0x5765980", VA = "0x5766980", Slot = "18")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$get_Inline): clean
			return this.field1_0x8;
		}
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x5766990", Offset = "0x5765990", VA = "0x5766990", Slot = "19")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$set_Inline): clean
			this.field1_0x8 = value;
			return;
		}
	}

	[Token(Token = "0x1700004A")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x57669A0", Offset = "0x57659A0", VA = "0x57669A0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$get_Tag): clean
			return 1;
		}
	}

	[Token(Token = "0x1700004B")]
	public override bool IsArray
	{
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x57669B0", Offset = "0x57659B0", VA = "0x57669B0", Slot = "16")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$get_IsArray): clean
			return true;
		}
	}

	[Token(Token = "0x1700004C")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x5766A50", Offset = "0x5765A50", VA = "0x5766A50", Slot = "5")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$get_Item): 1 lines keep C-only constructs
			List<object> __this_00;
			JSONNode pSVar1;
			JSONLazyCreator __this_01;

			if (Il2CppMethodInitialized_075450f4 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count) ;
				Il2CppMethodInitialized_075450f4 = true;
			}
			if (-1 < aIndex) {
				__this_00 = (List<object>)this.m_List;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				if (aIndex < __this_00._size) {
					return pSVar1;
				}
			}
			__this_01 = new JSONLazyCreator();
			__this_01.m_Node = (JSONNode)this;
			__this_01.m_Key = null;
			return (JSONNode)__this_01;
		}
		[Token(Token = "0x6000249")]
		[Address(RVA = "0x5766BD0", Offset = "0x5765BD0", VA = "0x5766BD0", Slot = "6")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$set_Item): 3 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			List<object> __this_00;
			Object[] pSVar3;
			bool bVar4;

			if (Il2CppMethodInitialized_075450f5 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count) ;
				Il2CppMethodInitialized_075450f5 = true;
			}
			if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar4 = (value == null);
			if (bVar4) {
				value = (JSONNode)JSONNull.CreateOrGet();
			}
			__this_00 = (List<object>)this.m_List;
			if (aIndex < 0) {
				if (__this_00 == null) goto label_05866cf6;
			}
			else {
				if (__this_00 == null) goto label_05866cf6;
				if (aIndex < __this_00._size) {
					__this_00.set_Item(aIndex, (object)value);
					return;
				}
			}
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this_00._items;
			if (pSVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this_00._size = uVar2 + 1;
					pSVar3[(int)uVar2] = (object)value;
					return;
				}
				__this_00.AddWithResize((object)value);
				return;
			}
		label_05866cf6: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700004D")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x600024A")]
		[Address(RVA = "0x5766D00", Offset = "0x5765D00", VA = "0x5766D00", Slot = "7")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$get_Item): clean
			JSONLazyCreator __this_00;

			__this_00 = new JSONLazyCreator();
			__this_00.m_Node = (JSONNode)this;
			__this_00.m_Key = null;
			return (JSONNode)__this_00;
		}
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x5766DB0", Offset = "0x5765DB0", VA = "0x5766DB0", Slot = "8")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$set_Item): 2 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			List<object> __this_00;
			Object[] pSVar3;
			bool bVar4;

			if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar4 = (value == null);
			if (bVar4) {
				value = (JSONNode)JSONNull.CreateOrGet();
			}
			__this_00 = (List<object>)this.m_List;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_00._items;
				if (pSVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this_00._size = uVar2 + 1;
						pSVar3[(int)uVar2] = (object)value;
						return;
					}
					__this_00.AddWithResize((object)value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700004E")]
	public override int Count
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x5766EB0", Offset = "0x5765EB0", VA = "0x5766EB0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$get_Count): 1 lines keep C-only constructs
			List<JSONNode> pSVar1;

			if (Il2CppMethodInitialized_075450f8 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count) ;
				Il2CppMethodInitialized_075450f8 = true;
			}
			pSVar1 = this.m_List;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1._size;
		}
	}

	[Token(Token = "0x1700004F")]
	public override IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x57673C0", Offset = "0x57663C0", VA = "0x57673C0", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__24))]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$get_Children): clean
			int iVar1;
			JSONArray.d__24<get_Children> __this_00;

			__this_00 = new JSONArray.d__24<get_Children>();
			__this_00.__1__state = -2;
			iVar1 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar1;
			__this_00.__4__this = this;
			return (IEnumerable<JSONNode>)__this_00;
		}
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x57669C0", Offset = "0x57659C0", VA = "0x57669C0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$GetEnumerator): 3 lines keep C-only constructs
		List<object> __this_00;
		System_Collections_Generic_List_Enumerator_T__o SStack_28;

		__this_00 = (List<object>)this.m_List;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_28 = __this_00.GetEnumerator();
		*(ulong)&__return_storage_ptr__.fields = 0;
		__return_storage_ptr__.m_Array._list = SStack_28._list;
		__return_storage_ptr__.m_Array._index = SStack_28._index;
		__return_storage_ptr__.m_Array._version = SStack_28._version;
		__return_storage_ptr__.m_Array._current =(JSONNode)SStack_28._current;
		__return_storage_ptr__.type = 1;
		__return_storage_ptr__.m_Object._dictionary =null;
		__return_storage_ptr__.m_Object._version = 0;
		__return_storage_ptr__.m_Object._index = 0;
		__return_storage_ptr__.m_Object._current.key = null;
		__return_storage_ptr__.m_Object._current.value = null;
		*(ulong)&__return_storage_ptr__.m_Object._getEnumeratorRetType = 0;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x5766EF0", Offset = "0x5765EF0", VA = "0x5766EF0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$Add): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<object> __this_00;
		Object[] pSVar3;
		bool bVar4;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar4 = (aItem == null);
		if (bVar4) {
			aItem = (JSONNode)JSONNull.CreateOrGet();
		}
		__this_00 = (List<object>)this.m_List;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this_00._items;
			if (pSVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this_00._size = uVar2 + 1;
					pSVar3[(int)uVar2] = (object)aItem;
					return;
				}
				__this_00.AddWithResize((object)aItem);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x5766FF0", Offset = "0x5765FF0", VA = "0x5766FF0", Slot = "23")]
	public override JSONNode Remove(int aIndex)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$Remove): 1 lines keep C-only constructs
		List<object> pSVar1;
		JSONNode pSVar2;

		if (Il2CppMethodInitialized_075450fa == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count) ;
			Il2CppMethodInitialized_075450fa = true;
		}
		if (aIndex < 0) {
			return null;
		}
		pSVar1 = (List<object>)this.m_List;
		if (pSVar1 != null) {
			if (pSVar1._size <= aIndex) {
				return null;
			}
			pSVar1 = (List<object>)this.m_List;
			if (pSVar1 != null) {
				pSVar1.RemoveAt(aIndex);
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x5767090", Offset = "0x5766090", VA = "0x5767090", Slot = "24")]
	public override JSONNode Remove(JSONNode aNode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$Remove): clean
		List<object> __this_00;

		__this_00 = (List<object>)this.m_List;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove((object)aNode);
		return aNode;
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x57670F0", Offset = "0x57660F0", VA = "0x57670F0", Slot = "25")]
	public override void Clear()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$Clear): 2 lines keep C-only constructs
		int piVar1;
		int length;
		List<JSONNode> pSVar2;

		pSVar2 = this.m_List;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar2._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar2._size;
		pSVar2._size = 0;
		if (length < 1) {
			return;
		}
		Array.Clear((Array)pSVar2._items, 0, length);
		return;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x5767140", Offset = "0x5766140", VA = "0x5767140", Slot = "26")]
	public override JSONNode Clone()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$Clone): 7 lines keep C-only constructs
		List<object> pSVar1;
		List<object> __this_00;
		object a;
		bool bVar2;
		int value;
		JSONArray __this_01;
		JSONNode pSVar3;
		byte[] auStack_60 = new byte[16];
		object pIStack_50;
		System_Collections_Generic_List_Enumerator_object__o SStack_48;

		__this_01 = new JSONArray();
		if ((__this_01 != null) &&(pSVar1 = (List<object>)this.m_List, pSVar1 != null)) {
			__this_00 = (List<object>)__this_01.m_List;
			value = pSVar1.Capacity;
			if (__this_00 != null) {
				__this_00.Capacity = value;
				pSVar1 = (List<object>)this.m_List;
				if (pSVar1 != null) {
					auStack_60.GetEnumerator(pSVar1);
					SStack_48._current = pIStack_50;
					SStack_48._list = (List<T>)auStack_60._0_8_;
					SStack_48._index = auStack_60._8_4_;
					SStack_48._version = auStack_60._12_4_;
					auStack_60._0_8_ = null;
					auStack_60._8_8_ = &SStack_48;
					while(true) {
						while(true) {
							bVar2 = SStack_48.MoveNext();
							a = SStack_48._current;
							if (!bVar2) {
								SStack_48.Dispose();
								return (JSONNode)__this_01;
							}
							if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
							}
							if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
							}
							bVar2 = ((JSONNode)a == null);
							if (!bVar2) break;
							__this_01.Add(null);
						}
						if (a == null) break;
						pSVar3 = (*(((SimpleJSONFixed_JSONNode_VTable)a.klass.vtable)._26_Clone).methodPtr)(a,(((SimpleJSONFixed_JSONNode_VTable)a.klass.vtable)._26_Clone).method);
						__this_01.Add(pSVar3);
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x5767460", Offset = "0x5766460", VA = "0x5767460", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$WriteToStringBuilder): 3 lines keep C-only constructs
		int iVar1;
		List<object> pSVar2;
		JSONNode pSVar3;
		StringBuilder __this_00;
		uint in_register_0000000c;
		ulong uVar4;
		ulong uVar5;
		uint repeatCount;
		int iVar6;
		int iStack_40;

		uVar4 = CONCAT44(in_register_0000000c, aIndentInc);
		if (Il2CppMethodInitialized_075450ff == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count) ;
			Il2CppMethodInitialized_075450ff = true;
		}
		if (aSB == null) goto label_058676f8;
		aSB.Append(0x5b);
		pSVar2 = (List<object>)this.m_List;
		if (pSVar2 == null) goto label_058676f8;
		iVar1 = pSVar2._size;
		uVar5 = 0;
		if (this.field1_0x8 == false) {
			uVar5 = (ulong)(uint)aMode;
		}
		iStack_40 = (int)uVar5;
		if (iVar1 < 1) {
	label_058676b1: ;
			if (iStack_40 != 1) goto label_058676db;
		}
		else {
			repeatCount = aIndentInc + aIndent;
			if (iStack_40 != 1) {
				pSVar3 = pSVar2.get_Item(0);
				if (pSVar3 == null) goto label_058676f8;
				pSVar3.unknown(aSB, (ulong)repeatCount, uVar4, uVar5);
				if (iVar1 == 1) goto label_058676db;
				iVar6 = 1;
				do {
					aSB.Append(0x2c);
					pSVar2 = (List<object>)this.m_List;
					if ((pSVar2 == null) ||(pSVar3 = pSVar2.get_Item(iVar6), pSVar3 == null)) goto label_058676f8;
					pSVar3.unknown(aSB, (ulong)repeatCount, uVar4, uVar5);
					iVar6 = iVar6 + 1;
				} while (iVar1 != iVar6);
				goto label_058676b1;
			}
			aSB.AppendLine();
			aSB.Append(0x20, repeatCount);
			pSVar2 = (List<object>)this.m_List;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.get_Item(0), pSVar3 == null)) goto label_058676f8;
			iVar6 = 1;
			pSVar3.unknown(aSB, (ulong)repeatCount, uVar4, 1);
			if (iVar1 != 1) {
				do {
					aSB.Append(0x2c);
					aSB.AppendLine();
					aSB.Append(0x20, repeatCount);
					pSVar2 = (List<object>)this.m_List;
					if ((pSVar2 == null) ||(pSVar3 = pSVar2.get_Item(iVar6), pSVar3 == null)) goto label_058676f8;
					pSVar3.unknown(aSB, (ulong)repeatCount, uVar4, 1);
					iVar6 = iVar6 + 1;
				} while (iVar1 != iVar6);
				goto label_058676b1;
			}
		}
		__this_00 = aSB.AppendLine();
		if (__this_00 == null) {
	label_058676f8: ;
			throw new NullReferenceException();
		}
		__this_00.Append(0x20, aIndent);
	label_058676db: ;
		aSB.Append(0x5d);
		return;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x5765320", Offset = "0x5764320", VA = "0x5765320")]
	public JSONArray()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONArray.c (SimpleJSONFixed.JSONArray$$.ctor): clean
		List<object> __this_00;

		__this_00 = new List<JSONNode>();
		this.m_List = (List<JSONNode>)__this_00;
		base();
		return;
	}
}
