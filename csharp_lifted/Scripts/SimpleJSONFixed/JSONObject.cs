// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONObject.c
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

[Token(Token = "0x200004E")]
public class JSONObject : JSONNode
{
	[Token(Token = "0x2000050")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__27 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x28")]
		public JSONObject _003C_003E4__this;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0x30")]
		private Dictionary<string, JSONNode>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000059")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000279")]
			[Address(RVA = "0x5768E60", Offset = "0x5767E60", VA = "0x5768E60", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700005A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600027B")]
			[Address(RVA = "0x5768EB0", Offset = "0x5767EB0", VA = "0x5768EB0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x6000275")]
		[Address(RVA = "0x57687F0", Offset = "0x57677F0", VA = "0x57687F0")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__27(int _003C_003E1__state)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject.<get_Children>d__27$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6000276")]
		[Address(RVA = "0x5768BE0", Offset = "0x5767BE0", VA = "0x5768BE0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.IDisposable.Dispose): clean
			int iVar1;

			iVar1 = this.__1__state;
			if ((iVar1 != 1) && (iVar1 != -3)) {
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x6000277")]
		[Address(RVA = "0x5768C30", Offset = "0x5767C30", VA = "0x5768C30", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject.<get_Children>d__27$$MoveNext): 7 lines keep C-only constructs
			int iVar1;
			JSONObject pSVar2;
			Dictionary<object, object> __this_00;
			JSONObject.d__27<get_Children> pSVar3;
			JSONObject.d__27<get_Children>* ppSVar4;
			bool bVar5;
			JSONObject.d__27<get_Children> local_78;
			byte local_68;
			System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;

			local_78 = this;
			local_68 = (byte)&local_78;
			iVar1 = this.__1__state;
			ppSVar4 = &local_78;
			if (iVar1 != 1) {
				if (iVar1 != 0) {
					return false;
				}
				pSVar2 = this.__4__this;
				this.__1__state = -1;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				__this_00 = (Dictionary<object, object>)pSVar2.m_Dict;
				if (__this_00 == null) {
					local_68 = (byte)&local_78;
					throw new NullReferenceException();
				}
				local_68 = (byte)&local_78;
				local_60 = __this_00.GetEnumerator();
				local_78.__7__wrap1._getEnumeratorRetType = local_60._getEnumeratorRetType;
				*(uint)&local_78.__7__wrap1.field_0x24 = local_60._36_4_;
				local_78.__7__wrap1._current.key = local_60._current.key;
				local_78.__7__wrap1._current.value = local_60._current.value;
				local_78.__7__wrap1._dictionary = local_60._dictionary;
				local_78.__7__wrap1._version = local_60._version;
				local_78.__7__wrap1._index = local_60._index;
				this = local_78;
				ppSVar4 = (JSONObject.d__27<get_Children>*)local_68;
			}
			local_68 = (byte)ppSVar4;
			this.__1__state = -3;
			bVar5 = (this.__7__wrap1).MoveNext();
			pSVar3 = local_78;
			if (bVar5) {
				local_78.__2__current =(JSONNode)local_78.__7__wrap1._current.value;
				local_78.__1__state = 1;
				return true;
			}
			pSVar3.__1__state = -1;
			(pSVar3.__7__wrap1).Dispose();
			local_78.__7__wrap1._current.key = null;
			local_78.__7__wrap1._current.value = null;
			local_78.__7__wrap1._dictionary =null;
			local_78.__7__wrap1._version = 0;
			local_78.__7__wrap1._index = 0;
			*(ulong)&local_78.__7__wrap1._getEnumeratorRetType = 0;
			return false;
		}

		[Token(Token = "0x6000278")]
		[Address(RVA = "0x5768E20", Offset = "0x5767E20", VA = "0x5768E20")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject.<get_Children>d__27$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x600027A")]
		[Address(RVA = "0x5768E70", Offset = "0x5767E70", VA = "0x5768E70", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_SimpleJSONFixed_JSONObject_get_Children_d__27_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x5768EC0", Offset = "0x5767EC0", VA = "0x5768EC0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;
			JSONObject.d__27<get_Children> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(JSONObject.d__27<get_Children>)) ;
			__this_00 = new Object();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			__this_00.__4__this = this.__4__this;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x600027D")]
		[Address(RVA = "0x5768F60", Offset = "0x5767F60", VA = "0x5768F60", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<string, JSONNode> m_Dict;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x18")]
	private bool inline;

	[Token(Token = "0x17000052")]
	public override bool Inline
	{
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x5767A70", Offset = "0x5766A70", VA = "0x5767A70", Slot = "18")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$get_Inline): clean
			return this.field1_0x8;
		}
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x5767A80", Offset = "0x5766A80", VA = "0x5767A80", Slot = "19")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$set_Inline): clean
			this.field1_0x8 = value;
			return;
		}
	}

	[Token(Token = "0x17000053")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x5767A90", Offset = "0x5766A90", VA = "0x5767A90", Slot = "4")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$get_Tag): clean
			return 2;
		}
	}

	[Token(Token = "0x17000054")]
	public override bool IsObject
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x5767AA0", Offset = "0x5766AA0", VA = "0x5767AA0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$get_IsObject): clean
			return true;
		}
	}

	[Token(Token = "0x17000055")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x5767B60", Offset = "0x5766B60", VA = "0x5767B60", Slot = "7")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$get_Item): clean
			Dictionary<object, object> pSVar1;
			bool bVar2;
			JSONNode pSVar3;
			JSONLazyCreator __this_00;

			pSVar1 = (Dictionary<object, object>)this.m_Dict;
			if (pSVar1 != null) {
				bVar2 = pSVar1.ContainsKey((object)aKey);
				if (!bVar2) {
					__this_00 = new JSONLazyCreator();
					__this_00.m_Node = (JSONNode)this;
					__this_00.m_Key = aKey;
					return (JSONNode)__this_00;
				}
				pSVar1 = (Dictionary<object, object>)this.m_Dict;
				if (pSVar1 != null) {
					pSVar3 = pSVar1.get_Item((object)aKey);
					return pSVar3;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x5767CF0", Offset = "0x5766CF0", VA = "0x5767CF0", Slot = "8")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$set_Item): clean
			Dictionary<object, object> pSVar1;
			bool bVar2;

			if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar2 = (value == null);
			if (bVar2) {
				value = (JSONNode)JSONNull.CreateOrGet();
			}
			pSVar1 = (Dictionary<object, object>)this.m_Dict;
			if (pSVar1 != null) {
				bVar2 = pSVar1.ContainsKey((object)aKey);
				pSVar1 = (Dictionary<object, object>)this.m_Dict;
				if (bVar2) {
					if (pSVar1 != null) {
						pSVar1.set_Item((object)aKey, (object)value);
						return;
					}
				}
				else if (pSVar1 != null) {
					pSVar1.Add((object)aKey, (object)value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000056")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x5767E00", Offset = "0x5766E00", VA = "0x5767E00", Slot = "5")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$get_Item): 1 lines keep C-only constructs
			Dictionary<object, object> __this_00;
			int iVar1;
			KeyValuePair<object, object> SVar2;

			if (-1 < aIndex) {
				__this_00 = (Dictionary<object, object>)this.m_Dict;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				iVar1 = __this_00.Count;
				if (aIndex < iVar1) {
					SVar2 = Enumerable.ElementAt<KeyValuePair<string, JSONNode>>((System_Collections_Generic_IEnumerable_TSource__o)this.m_Dict, aIndex);
					return (JSONNode)SVar2.value;
				}
			}
			return null;
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x5767E90", Offset = "0x5766E90", VA = "0x5767E90", Slot = "6")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$set_Item): 1 lines keep C-only constructs
			Dictionary<object, object> pSVar1;
			bool bVar2;
			int iVar3;
			KeyValuePair<object, object> SVar4;

			if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar2 = (value == null);
			if (bVar2) {
				value = (JSONNode)JSONNull.CreateOrGet();
			}
			if (aIndex < 0) {
				return;
			}
			pSVar1 = (Dictionary<object, object>)this.m_Dict;
			if (pSVar1 != null) {
				iVar3 = pSVar1.Count;
				if (iVar3 <= aIndex) {
					return;
				}
				SVar4 = Enumerable.ElementAt<KeyValuePair<string, JSONNode>>((System_Collections_Generic_IEnumerable_TSource__o)this.m_Dict, aIndex);
				pSVar1 = (Dictionary<object, object>)this.m_Dict;
				if (pSVar1 != null) {
					pSVar1.set_Item(SVar4.key, (object)value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000057")]
	public override int Count
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x5767FA0", Offset = "0x5766FA0", VA = "0x5767FA0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$get_Count): clean
			Dictionary<object, object> __this_00;
			int iVar1;

			__this_00 = (Dictionary<object, object>)this.m_Dict;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
	}

	[Token(Token = "0x17000058")]
	public override IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x5768780", Offset = "0x5767780", VA = "0x5768780", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__27))]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$get_Children): 1 lines keep C-only constructs
			int iVar1;
			JSONObject.d__27<get_Children> __this_00;

			__this_00 = il2cpp_codegen_object_new(typeof(JSONObject.d__27<get_Children>)) ;
			__this_00 = new Object();
			__this_00.__1__state = -2;
			iVar1 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar1;
			__this_00.__4__this = this;
			return (IEnumerable<JSONNode>)__this_00;
		}
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x5767AB0", Offset = "0x5766AB0", VA = "0x5767AB0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$GetEnumerator): 4 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_38;

		__this_00 = (Dictionary<object, object>)this.m_Dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_38 = __this_00.GetEnumerator();
		__return_storage_ptr__.m_Array._list = null;
		__return_storage_ptr__.m_Array._index = 0;
		__return_storage_ptr__.m_Array._version = 0;
		__return_storage_ptr__.m_Object._current.value = null;
		*(ulong)&__return_storage_ptr__.m_Object._getEnumeratorRetType = 0;
		__return_storage_ptr__.m_Object._version = 0;
		__return_storage_ptr__.m_Object._index = 0;
		__return_storage_ptr__.m_Object._current.key = null;
		*(ulong)&__return_storage_ptr__.fields = 0;
		__return_storage_ptr__.m_Object._dictionary =null;
		__return_storage_ptr__.m_Array._current = null;
		__return_storage_ptr__.m_Object._dictionary = SStack_38._dictionary;
		__return_storage_ptr__.m_Object._version = SStack_38._version;
		__return_storage_ptr__.m_Object._index = SStack_38._index;
		__return_storage_ptr__.m_Object._current.key = SStack_38._current.key;
		__return_storage_ptr__.m_Object._current.value = SStack_38._current.value;
		__return_storage_ptr__.m_Object._getEnumeratorRetType = SStack_38._getEnumeratorRetType;
		*(uint)&__return_storage_ptr__.m_Object.field_0x24 = SStack_38._36_4_;
		__return_storage_ptr__.type = 2;
		__return_storage_ptr__.m_Array._list = null;
		__return_storage_ptr__.m_Array._index = 0;
		__return_storage_ptr__.m_Array._version = 0;
		__return_storage_ptr__.m_Array._current = null;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x5767FE0", Offset = "0x5766FE0", VA = "0x5767FE0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$Add): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String key;
		Guid SStack_30;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar2 = (aItem == null);
		if (bVar2) {
			aItem = (JSONNode)JSONNull.CreateOrGet();
		}
		pSVar1 = (Dictionary<object, object>)this.m_Dict;
		if (aKey == null) {
			SStack_30 = Guid.NewGuid();
			key = SStack_30.ToString();
			if (pSVar1 != null) {
				pSVar1.Add((object)key, (object)aItem);
				return;
			}
		}
		else if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)aKey);
			pSVar1 = (Dictionary<object, object>)this.m_Dict;
			if (bVar2) {
				if (pSVar1 != null) {
					pSVar1.set_Item((object)aKey, (object)aItem);
					return;
				}
			}
			else if (pSVar1 != null) {
				pSVar1.Add((object)aKey, (object)aItem);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x5768150", Offset = "0x5767150", VA = "0x5768150", Slot = "22")]
	public override JSONNode Remove(string aKey)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$Remove): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		JSONNode pSVar3;

		pSVar1 = (Dictionary<object, object>)this.m_Dict;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)aKey);
			if (!bVar2) {
				return null;
			}
			pSVar1 = (Dictionary<object, object>)this.m_Dict;
			if (pSVar1 != null) {
				pSVar3 = pSVar1.get_Item((object)aKey);
				pSVar1 = (Dictionary<object, object>)this.m_Dict;
				if (pSVar1 != null) {
					pSVar1.Remove((object)aKey);
					return pSVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x5768200", Offset = "0x5767200", VA = "0x5768200", Slot = "23")]
	public override JSONNode Remove(int aIndex)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$Remove): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		int iVar2;
		KeyValuePair<object, object> SVar3;

		if (aIndex < 0) {
			return null;
		}
		pSVar1 = (Dictionary<object, object>)this.m_Dict;
		if (pSVar1 != null) {
			iVar2 = pSVar1.Count;
			if (iVar2 <= aIndex) {
				return null;
			}
			SVar3 = Enumerable.ElementAt<KeyValuePair<string, JSONNode>>((System_Collections_Generic_IEnumerable_TSource__o)this.m_Dict, aIndex);
			pSVar1 = (Dictionary<object, object>)this.m_Dict;
			if (pSVar1 != null) {
				pSVar1.Remove(SVar3.key);
				return (JSONNode)SVar3.value;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x57682C0", Offset = "0x57672C0", VA = "0x57682C0", Slot = "24")]
	public override JSONNode Remove(JSONNode aNode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$Remove): 4 lines keep C-only constructs
		Dictionary<string, JSONNode> source;
		Dictionary<object, object> __this_00;
		JSONObject.c__DisplayClass21_0 __this_01;
		Func<T, TResult> __this_02;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		KeyValuePair<object, object> SVar1;

		__this_01 = new JSONObject.c__DisplayClass21_0();
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		__this_01.aNode = aNode;
		source = this.m_Dict;
		__this_02 = (Func<T, TResult>)il2cpp_codegen_object_new(typeof(Func<KeyValuePair<string, JSONNode>, bool>)) ;
		__this_02 = new Func<KeyValuePair<object, object>, bool>((object)__this_01, (intptr_t)MethodInfo_SimpleJSONFixed_JSONObject_c__DisplayClass21_0_Remove_b__0);
		source_00 = Enumerable.Where<KeyValuePair<string, JSONNode>>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_02);
		SVar1 = Enumerable.First<KeyValuePair<string, JSONNode>>(source_00);
		__this_00 = (Dictionary<object, object>)this.m_Dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove(SVar1.key);
		return __this_01.aNode;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x5768480", Offset = "0x5767480", VA = "0x5768480", Slot = "25")]
	public override void Clear()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$Clear): clean
		Dictionary<object, object> __this_00;

		__this_00 = (Dictionary<object, object>)this.m_Dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x57684C0", Offset = "0x57674C0", VA = "0x57684C0", Slot = "26")]
	public override JSONNode Clone()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$Clone): 6 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		object pIVar1;
		bool bVar2;
		JSONObject __this_01;
		JSONNode pSVar3;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;
		byte puStack_28;

		SStack_58._current.key = null;
		SStack_58._current.value = null;
		SStack_58._dictionary = null;
		SStack_58._version = 0;
		SStack_58._index = 0;
		SStack_58._getEnumeratorRetType = 0;
		SStack_58._36_4_ = 0;
		__this_01 = new JSONObject();
		__this_00 = (Dictionary<object, object>)this.m_Dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_58 = __this_00.GetEnumerator();
		puStack_28 = (byte)&SStack_58;
		if (__this_01 == null) {
			puStack_28 = (byte)&SStack_58;
			bVar2 = SStack_58.MoveNext();
			if (bVar2) {
				if (SStack_58._current.value != null) {
					(*(SStack_58._current.value).klass.vtable[0x1a].methodPtr)(SStack_58._current.value,(SStack_58._current.value).klass.vtable[0x1a].method);
					throw new NullReferenceException();
				}
	label_05868631: ;
				throw new NullReferenceException();
			}
		}
		else {
			while (true) {
				bVar2 = SStack_58.MoveNext();
				pIVar1 = SStack_58._current.key;
				if (!(bVar2)) break;
				if (SStack_58._current.value == null) goto label_05868631;
				pSVar3 = (JSONNode)(*(SStack_58._current.value).klass.vtable[0x1a].methodPtr)(SStack_58._current.value,(SStack_58._current.value).klass.vtable[0x1a].method);
				__this_01.Add((String)pIVar1, pSVar3);
			}
		}
		SStack_58.Dispose();
		return (JSONNode)__this_01;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x57686B0", Offset = "0x57676B0", VA = "0x57686B0", Slot = "28")]
	public override bool HasKey(string aKey)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$HasKey): clean
		Dictionary<object, object> __this_00;
		bool bVar1;

		__this_00 = (Dictionary<object, object>)this.m_Dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.ContainsKey((object)aKey);
		return bVar1;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x5768700", Offset = "0x5767700", VA = "0x5768700", Slot = "29")]
	public override JSONNode GetValueOrDefault(string aKey, JSONNode aDefault)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$GetValueOrDefault): clean
		Dictionary<object, object> __this_00;
		bool bVar1;
		object pIStack_20;

		pIStack_20 = null;
		__this_00 = (Dictionary<object, object>)this.m_Dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue((object)aKey, ref pIStack_20);
		if (bVar1) {
			aDefault = (JSONNode)pIStack_20;
		}
		return (JSONNode)(object)aDefault;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x5768820", Offset = "0x5767820", VA = "0x5768820", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$WriteToStringBuilder): 10 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		object pIVar1;
		bool bVar2;
		StringBuilder pSVar3;
		String pSVar4;
		uint in_register_0000000c;
		bool bVar5;
		MethodInfo method_00;
		byte[] auStack_88 = new byte[8];
		String pSStack_78;
		object pIStack_70;
		ulong uStack_68;
		byte[] auStack_58 = new byte[16];
		String pSStack_48;
		object pIStack_40;
		int iStack_38;
		uint uStack_34;

		pSStack_78 = null;
		pIStack_70 = null;
		auStack_88 = (byte[])0x0;
		uStack_68._0_4_ = 0;
		uStack_68._4_4_ = 0;
		if (aSB != null) {
			aSB.Append(0x7b);
			if (this.field1_0x8 != false) {
				aMode = 0;
			}
			__this_00 = (Dictionary<object, object>)this.m_Dict;
			if (__this_00 != null) {
				auStack_58.GetEnumerator(__this_00);
				uStack_68._0_4_ = iStack_38;
				uStack_68._4_4_ = uStack_34;
				pSStack_78 = pSStack_48;
				pIStack_70 = pIStack_40;
				auStack_88 = (byte[])auStack_58._0_8_;
				auStack_58._0_8_ = null;
				auStack_58._8_8_ = auStack_88;
				bVar5 = true;
				while(true) {
					bVar2 = auStack_88.MoveNext();
					pIVar1 = pIStack_70;
					pSVar4 = pSStack_78;
					if (!bVar2) break;
					if (!bVar5) {
						aSB.Append(0x2c);
					}
					if (aMode == 1) {
						aSB.AppendLine();
						aSB.Append(0x20, aIndentInc + aIndent);
					}
					method_00 = (MethodInfo)&g_data_00000022;
					pSVar3 = aSB.Append(0x22);
					pSVar4 = JSONNode.Escape(pSVar4);
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3 = pSVar3.Append(pSVar4);
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3.Append(0x22);
					if (aMode == 0) {
						aSB.Append(0x3a);
					}
					else {
						aSB.Append(" : ");
					}
					if (pIVar1 == null) {
						throw new NullReferenceException();
					}
					bVar5 = false;
					(*pIVar1.klass.vtable[0x1f].methodPtr)(pIVar1,aSB,(ulong)(uint)(aIndentInc + aIndent),CONCAT44(in_register_0000000c, aIndentInc),(ulong)(uint)aMode,pIVar1.klass.vtable[0x1f].method);
				}
				auStack_88.Dispose();
				if (aMode == 1) {
					pSVar3 = aSB.AppendLine();
					if (pSVar3 == null) goto label_05868aef;
					pSVar3.Append(0x20, aIndent);
				}
				aSB.Append(0x7d);
				return;
			}
		}
	label_05868aef: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x5765280", Offset = "0x5764280", VA = "0x5765280")]
	public JSONObject()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONObject.c (SimpleJSONFixed.JSONObject$$.ctor): clean
		Dictionary<string, JSONNode> __this_00;

		__this_00 = new Dictionary<string, JSONNode>();
		this.m_Dict = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/SimpleJSONFixed/JSONObject.c.

	// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$<Remove>b__0: clean
	private bool c__DisplayClass21_0__Remove_b__0(KeyValuePair<string, JSONNode> k)
	{
		object b;
		bool bVar1;

		b = (object)this.aNode;
		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = (k.value == b);
		return bVar1;
	}
}
