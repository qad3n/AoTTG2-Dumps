// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONNode
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONNode.c
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

[Token(Token = "0x2000044")]
public abstract class JSONNode
{
	[Token(Token = "0x2000045")]
	public struct Enumerator
	{
		[Token(Token = "0x2000046")]
		private enum Type
		{
			[Token(Token = "0x40001AC")]
			None,
			[Token(Token = "0x40001AD")]
			Array,
			[Token(Token = "0x40001AE")]
			Object
		}

		[Token(Token = "0x40001A8")]
		[FieldOffset(Offset = "0x0")]
		private Type type;

		[Token(Token = "0x40001A9")]
		[FieldOffset(Offset = "0x8")]
		private Dictionary<string, JSONNode>.Enumerator m_Object;

		[Token(Token = "0x40001AA")]
		[FieldOffset(Offset = "0x30")]
		private List<JSONNode>.Enumerator m_Array;

		[Token(Token = "0x1700003F")]
		public bool IsValid
		{
			[Token(Token = "0x6000218")]
			[Address(RVA = "0x5765410", Offset = "0x5764410", VA = "0x5765410")]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.Enumerator$$get_IsValid): clean
				return this.type != 0;
			}
		}

		[Token(Token = "0x17000040")]
		public KeyValuePair<string, JSONNode> Current
		{
			[Token(Token = "0x600021B")]
			[Address(RVA = "0x57654B0", Offset = "0x57644B0", VA = "0x57654B0")]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.Enumerator$$get_Current): clean
				int iVar1;
				KeyValuePair<string, JSONNode> SVar2;
				object value;
				object key;
				KeyValuePair<object, object> local_18;

				iVar1 = this.type;
				if (iVar1 == 2) {
					local_18.key = this.m_Object._current.key;
					local_18.value = this.m_Object._current.value;
				}
				else {
					if (iVar1 == 1) {
						key = (object)**(ulong*)(g_data_07556758 + 0xb8);
						value = (object)this.m_Array._current;
					}
					else {
						key = (object)**(ulong*)(g_data_07556758 + 0xb8);
						value = null;
					}
					local_18.value = null;
					local_18.key = null;
					local_18 = new KeyValuePair<object, object>(key, value);
				}
				SVar2.value = (JSONNode)local_18.value;
				SVar2.key = (String)local_18.key;
				return (KeyValuePair<string, JSONNode>)SVar2;
			}
		}

		[Token(Token = "0x6000219")]
		[Address(RVA = "0x5765420", Offset = "0x5764420", VA = "0x5765420")]
		public Enumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.Enumerator$$.ctor): 1 lines keep C-only constructs
			this.type = 1;
			this.m_Object._dictionary = null;
			this.m_Object._version = 0;
			this.m_Object._index = 0;
			this.m_Object._current.key = null;
			this.m_Object._current.value = null;
			*(ulong)&this.m_Object._getEnumeratorRetType = 0;
			this.m_Array._list = aArrayEnum._list;
			this.m_Array._index = aArrayEnum._index;
			this.m_Array._version = aArrayEnum._version;
			this.m_Array._current = aArrayEnum._current;
			return;
		}

		[Token(Token = "0x600021A")]
		[Address(RVA = "0x5765460", Offset = "0x5764460", VA = "0x5765460")]
		public Enumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.Enumerator$$.ctor): 1 lines keep C-only constructs
			this.type = 2;
			this.m_Object._dictionary = aDictEnum._dictionary;
			this.m_Object._version = aDictEnum._version;
			this.m_Object._index = aDictEnum._index;
			this.m_Object._current.key = aDictEnum._current.key;
			this.m_Object._current.value = aDictEnum._current.value;
			this.m_Object._getEnumeratorRetType = aDictEnum._getEnumeratorRetType;
			*(uint)&this.m_Object.field_0x24 = aDictEnum._36_4_;
			this.m_Array._list = null;
			this.m_Array._index = 0;
			this.m_Array._version = 0;
			this.m_Array._current = null;
			return;
		}

		[Token(Token = "0x600021C")]
		[Address(RVA = "0x5765580", Offset = "0x5764580", VA = "0x5765580")]
		public bool MoveNext()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.Enumerator$$MoveNext): clean
			int iVar1;
			bool bVar2;

			iVar1 = this.type;
			if (iVar1 == 2) {
				return bVar2;
			}
			if (iVar1 == 1) {
				return bVar2;
			}
			return false;
		}
	}

	[Token(Token = "0x2000047")]
	public struct ValueEnumerator
	{
		[Token(Token = "0x40001AF")]
		[FieldOffset(Offset = "0x0")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000041")]
		public JSONNode Current
		{
			[Token(Token = "0x6000220")]
			[Address(RVA = "0x5765770", Offset = "0x5764770", VA = "0x5765770")]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.ValueEnumerator$$get_Current): clean
				KeyValuePair<string, JSONNode> SVar1;

				SVar1 = this.Current;
				return SVar1.value;
			}
		}

		[Token(Token = "0x600021D")]
		[Address(RVA = "0x57655F0", Offset = "0x57645F0", VA = "0x57655F0")]
		public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor): 6 lines keep C-only constructs
			JSONNode.Enumerator pSVar1;
			List<T>[] local_20 = new List<T>[2];
			JSONNode local_10;

			local_20[0] = aArrayEnum._list;
			local_20[1] = (List<T>)aArrayEnum._8_8_;
			local_10 = aArrayEnum._current;
			this.m_Enumerator.m_Array._current = local_10;
			this.m_Enumerator.m_Array._list = local_20[0];
			*(List<T>*)&this.m_Enumerator.m_Array._index = local_20[1];
			*(object*)((long)&this.m_Enumerator.m_Object._current + 8) =null;
			*(ulong)&this.m_Enumerator.m_Object._getEnumeratorRetType = 0;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Object._version = 0;
			pSVar1.m_Object._index = 0;
			this.m_Enumerator.m_Object._current.key = null;
			*(ulong)&this.m_Enumerator = 1;
			this.m_Enumerator.m_Object._dictionary =null;
			return;
		}

		[Token(Token = "0x600021E")]
		[Address(RVA = "0x5765680", Offset = "0x5764680", VA = "0x5765680")]
		public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor): 8 lines keep C-only constructs
			JSONNode.Enumerator pSVar1;
			Dictionary<TKey, TValue>[] apSStack_50 = new Dictionary<TKey, TValue>[2];
			object pIStack_40;
			object local_38;
			int iStack_30;
			uint uStack_2c;

			apSStack_50[0] = aDictEnum._dictionary;
			apSStack_50[1] = (Dictionary<TKey, TValue>)aDictEnum._8_8_;
			pIStack_40 = aDictEnum._current.key;
			local_38 = aDictEnum._current.value;
			iStack_30 = aDictEnum._getEnumeratorRetType;
			uStack_2c = aDictEnum._36_4_;
			this.m_Enumerator.m_Array._list = null;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Array._index = 0;
			pSVar1.m_Array._version = 0;
			*(object*)((long)&this.m_Enumerator.m_Object._current + 8) = local_38;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Object._getEnumeratorRetType = iStack_30;
			*(uint)&pSVar1.m_Object.field_0x24 = uStack_2c;
			*(Dictionary<TKey, TValue>*)&this.m_Enumerator.m_Object._version = apSStack_50[1];
			this.m_Enumerator.m_Object._current.key = pIStack_40;
			*(ulong)&this.m_Enumerator = 2;
			this.m_Enumerator.m_Object._dictionary = apSStack_50[0];
			this.m_Enumerator.m_Array._current = null;
			return;
		}

		[Token(Token = "0x600021F")]
		[Address(RVA = "0x5765730", Offset = "0x5764730", VA = "0x5765730")]
		public ValueEnumerator(Enumerator aEnumerator)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor): 6 lines keep C-only constructs
			JSONNode.Enumerator pSVar1;

			this.m_Enumerator.m_Array._current = aEnumerator.m_Array._current;
			this.m_Enumerator.m_Array._list = aEnumerator.m_Array._list;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Array._index = aEnumerator.m_Array._index;
			pSVar1.m_Array._version = aEnumerator.m_Array._version;
			*(object*)((long)&this.m_Enumerator.m_Object._current + 8) = aEnumerator.m_Object._current.value;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Object._getEnumeratorRetType = aEnumerator.m_Object._getEnumeratorRetType;
			*(uint)&pSVar1.m_Object.field_0x24 = aEnumerator.m_Object._36_4_;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Object._version = aEnumerator.m_Object._version;
			pSVar1.m_Object._index = aEnumerator.m_Object._index;
			this.m_Enumerator.m_Object._current.key = aEnumerator.m_Object._current.key;
			this.m_Enumerator.type = aEnumerator.type;
			*(uint)&this.m_Enumerator.field_0x4 = aEnumerator._4_4_;
			this.m_Enumerator.m_Object._dictionary = aEnumerator.m_Object._dictionary;
			return;
		}

		[Token(Token = "0x6000221")]
		[Address(RVA = "0x57657A0", Offset = "0x57647A0", VA = "0x57657A0")]
		public bool MoveNext()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.ValueEnumerator$$MoveNext): clean
			int iVar1;
			bool bVar2;

			iVar1 = this.m_Enumerator.type;
			if (iVar1 == 2) {
				return bVar2;
			}
			if (iVar1 == 1) {
				return bVar2;
			}
			return false;
		}

		[Token(Token = "0x6000222")]
		[Address(RVA = "0x5765810", Offset = "0x5764810", VA = "0x5765810")]
		public ValueEnumerator GetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.ValueEnumerator$$GetEnumerator): 12 lines keep C-only constructs
			Dictionary<TKey, TValue> pSVar1;
			object pIVar2;
			object pIVar3;
			JSONNode.Enumerator pSVar4;
			int iVar5;
			int iVar6;
			int iVar7;
			uint uVar8;
			int iVar9;
			int iVar10;
			int iVar11;
			uint uVar12;

			__return_storage_ptr__.m_Enumerator.m_Array._current =this.m_Enumerator.m_Array._current;
			iVar11 = this.m_Enumerator.type;
			uVar12 = *(uint)&this.m_Enumerator.field_0x4;
			pSVar1 = this.m_Enumerator.m_Object._dictionary;
			pSVar4 = &this.m_Enumerator;
			iVar9 = pSVar4.m_Object._version;
			iVar10 = pSVar4.m_Object._index;
			pIVar2 = this.m_Enumerator.m_Object._current.key;
			pIVar3 = *(object*)((long)&this.m_Enumerator.m_Object._current + 8) ;
			pSVar4 = &this.m_Enumerator;
			iVar7 = pSVar4.m_Object._getEnumeratorRetType;
			uVar8 = *(uint)&pSVar4.m_Object.field_0x24;
			pSVar4 = &this.m_Enumerator;
			iVar5 = pSVar4.m_Array._index;
			iVar6 = pSVar4.m_Array._version;
			__return_storage_ptr__.m_Enumerator.m_Array._list =this.m_Enumerator.m_Array._list;
			pSVar4 = &__return_storage_ptr__.m_Enumerator;
			pSVar4.m_Array._index = iVar5;
			pSVar4.m_Array._version = iVar6;
			*(object*)((long)&__return_storage_ptr__.m_Enumerator.m_Object._current + 8) = pIVar3;
			pSVar4 = &__return_storage_ptr__.m_Enumerator;
			pSVar4.m_Object._getEnumeratorRetType = iVar7;
			*(uint)&pSVar4.m_Object.field_0x24 = uVar8;
			pSVar4 = &__return_storage_ptr__.m_Enumerator;
			pSVar4.m_Object._version = iVar9;
			pSVar4.m_Object._index = iVar10;
			__return_storage_ptr__.m_Enumerator.m_Object._current.key = pIVar2;
			__return_storage_ptr__.m_Enumerator.type = iVar11;
			*(uint)&__return_storage_ptr__.m_Enumerator.field_0x4 = uVar12;
			__return_storage_ptr__.m_Enumerator.m_Object._dictionary = pSVar1;
			return __return_storage_ptr__;
		}
	}

	[Token(Token = "0x2000048")]
	public struct KeyEnumerator
	{
		[Token(Token = "0x40001B0")]
		[FieldOffset(Offset = "0x0")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000042")]
		public string Current
		{
			[Token(Token = "0x6000226")]
			[Address(RVA = "0x57659C0", Offset = "0x57649C0", VA = "0x57659C0")]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.KeyEnumerator$$get_Current): clean
				KeyValuePair<string, JSONNode> SVar1;

				SVar1 = this.Current;
				return SVar1.key;
			}
		}

		[Token(Token = "0x6000223")]
		[Address(RVA = "0x5765840", Offset = "0x5764840", VA = "0x5765840")]
		public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor): 6 lines keep C-only constructs
			JSONNode.Enumerator pSVar1;
			List<T>[] local_20 = new List<T>[2];
			JSONNode local_10;

			local_20[0] = aArrayEnum._list;
			local_20[1] = (List<T>)aArrayEnum._8_8_;
			local_10 = aArrayEnum._current;
			this.m_Enumerator.m_Array._current = local_10;
			this.m_Enumerator.m_Array._list = local_20[0];
			*(List<T>*)&this.m_Enumerator.m_Array._index = local_20[1];
			*(object*)((long)&this.m_Enumerator.m_Object._current + 8) =null;
			*(ulong)&this.m_Enumerator.m_Object._getEnumeratorRetType = 0;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Object._version = 0;
			pSVar1.m_Object._index = 0;
			this.m_Enumerator.m_Object._current.key = null;
			*(ulong)&this.m_Enumerator = 1;
			this.m_Enumerator.m_Object._dictionary =null;
			return;
		}

		[Token(Token = "0x6000224")]
		[Address(RVA = "0x57658D0", Offset = "0x57648D0", VA = "0x57658D0")]
		public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor): 8 lines keep C-only constructs
			JSONNode.Enumerator pSVar1;
			Dictionary<TKey, TValue>[] apSStack_50 = new Dictionary<TKey, TValue>[2];
			object pIStack_40;
			object local_38;
			int iStack_30;
			uint uStack_2c;

			apSStack_50[0] = aDictEnum._dictionary;
			apSStack_50[1] = (Dictionary<TKey, TValue>)aDictEnum._8_8_;
			pIStack_40 = aDictEnum._current.key;
			local_38 = aDictEnum._current.value;
			iStack_30 = aDictEnum._getEnumeratorRetType;
			uStack_2c = aDictEnum._36_4_;
			this.m_Enumerator.m_Array._list = null;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Array._index = 0;
			pSVar1.m_Array._version = 0;
			*(object*)((long)&this.m_Enumerator.m_Object._current + 8) = local_38;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Object._getEnumeratorRetType = iStack_30;
			*(uint)&pSVar1.m_Object.field_0x24 = uStack_2c;
			*(Dictionary<TKey, TValue>*)&this.m_Enumerator.m_Object._version = apSStack_50[1];
			this.m_Enumerator.m_Object._current.key = pIStack_40;
			*(ulong)&this.m_Enumerator = 2;
			this.m_Enumerator.m_Object._dictionary = apSStack_50[0];
			this.m_Enumerator.m_Array._current = null;
			return;
		}

		[Token(Token = "0x6000225")]
		[Address(RVA = "0x5765980", Offset = "0x5764980", VA = "0x5765980")]
		public KeyEnumerator(Enumerator aEnumerator)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor): 6 lines keep C-only constructs
			JSONNode.Enumerator pSVar1;

			this.m_Enumerator.m_Array._current = aEnumerator.m_Array._current;
			this.m_Enumerator.m_Array._list = aEnumerator.m_Array._list;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Array._index = aEnumerator.m_Array._index;
			pSVar1.m_Array._version = aEnumerator.m_Array._version;
			*(object*)((long)&this.m_Enumerator.m_Object._current + 8) = aEnumerator.m_Object._current.value;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Object._getEnumeratorRetType = aEnumerator.m_Object._getEnumeratorRetType;
			*(uint)&pSVar1.m_Object.field_0x24 = aEnumerator.m_Object._36_4_;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Object._version = aEnumerator.m_Object._version;
			pSVar1.m_Object._index = aEnumerator.m_Object._index;
			this.m_Enumerator.m_Object._current.key = aEnumerator.m_Object._current.key;
			this.m_Enumerator.type = aEnumerator.type;
			*(uint)&this.m_Enumerator.field_0x4 = aEnumerator._4_4_;
			this.m_Enumerator.m_Object._dictionary = aEnumerator.m_Object._dictionary;
			return;
		}

		[Token(Token = "0x6000227")]
		[Address(RVA = "0x57659F0", Offset = "0x57649F0", VA = "0x57659F0")]
		public bool MoveNext()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.KeyEnumerator$$MoveNext): clean
			int iVar1;
			bool bVar2;

			iVar1 = this.m_Enumerator.type;
			if (iVar1 == 2) {
				return bVar2;
			}
			if (iVar1 == 1) {
				return bVar2;
			}
			return false;
		}

		[Token(Token = "0x6000228")]
		[Address(RVA = "0x5765A60", Offset = "0x5764A60", VA = "0x5765A60")]
		public KeyEnumerator GetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.KeyEnumerator$$GetEnumerator): 12 lines keep C-only constructs
			Dictionary<TKey, TValue> pSVar1;
			object pIVar2;
			object pIVar3;
			JSONNode.Enumerator pSVar4;
			int iVar5;
			int iVar6;
			int iVar7;
			uint uVar8;
			int iVar9;
			int iVar10;
			int iVar11;
			uint uVar12;

			__return_storage_ptr__.m_Enumerator.m_Array._current =this.m_Enumerator.m_Array._current;
			iVar11 = this.m_Enumerator.type;
			uVar12 = *(uint)&this.m_Enumerator.field_0x4;
			pSVar1 = this.m_Enumerator.m_Object._dictionary;
			pSVar4 = &this.m_Enumerator;
			iVar9 = pSVar4.m_Object._version;
			iVar10 = pSVar4.m_Object._index;
			pIVar2 = this.m_Enumerator.m_Object._current.key;
			pIVar3 = *(object*)((long)&this.m_Enumerator.m_Object._current + 8) ;
			pSVar4 = &this.m_Enumerator;
			iVar7 = pSVar4.m_Object._getEnumeratorRetType;
			uVar8 = *(uint)&pSVar4.m_Object.field_0x24;
			pSVar4 = &this.m_Enumerator;
			iVar5 = pSVar4.m_Array._index;
			iVar6 = pSVar4.m_Array._version;
			__return_storage_ptr__.m_Enumerator.m_Array._list =this.m_Enumerator.m_Array._list;
			pSVar4 = &__return_storage_ptr__.m_Enumerator;
			pSVar4.m_Array._index = iVar5;
			pSVar4.m_Array._version = iVar6;
			*(object*)((long)&__return_storage_ptr__.m_Enumerator.m_Object._current + 8) = pIVar3;
			pSVar4 = &__return_storage_ptr__.m_Enumerator;
			pSVar4.m_Object._getEnumeratorRetType = iVar7;
			*(uint)&pSVar4.m_Object.field_0x24 = uVar8;
			pSVar4 = &__return_storage_ptr__.m_Enumerator;
			pSVar4.m_Object._version = iVar9;
			pSVar4.m_Object._index = iVar10;
			__return_storage_ptr__.m_Enumerator.m_Object._current.key = pIVar2;
			__return_storage_ptr__.m_Enumerator.type = iVar11;
			*(uint)&__return_storage_ptr__.m_Enumerator.field_0x4 = uVar12;
			__return_storage_ptr__.m_Enumerator.m_Object._dictionary = pSVar1;
			return __return_storage_ptr__;
		}
	}

	[Token(Token = "0x2000049")]
	public class LinqEnumerator : IEnumerator<KeyValuePair<string, JSONNode>>, IEnumerator, IDisposable, IEnumerable<KeyValuePair<string, JSONNode>>, IEnumerable
	{
		[Token(Token = "0x40001B1")]
		[FieldOffset(Offset = "0x10")]
		private JSONNode m_Node;

		[Token(Token = "0x40001B2")]
		[FieldOffset(Offset = "0x18")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000043")]
		public KeyValuePair<string, JSONNode> Current
		{
			[Token(Token = "0x600022A")]
			[Address(RVA = "0x5765A90", Offset = "0x5764A90", VA = "0x5765A90", Slot = "4")]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.LinqEnumerator$$get_Current): clean
				KeyValuePair<string, JSONNode> SVar1;

				SVar1 = (KeyValuePair<string, JSONNode>)(this.m_Enumerator).Current;
				return (KeyValuePair<string, JSONNode>)SVar1;
			}
		}

		[Token(Token = "0x17000044")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600022B")]
			[Address(RVA = "0x5765AA0", Offset = "0x5764AA0", VA = "0x5765AA0", Slot = "7")]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.LinqEnumerator$$System.Collections.IEnumerator.get_Current): clean
				object pIVar1;

				return pIVar1;
			}
		}

		[Token(Token = "0x6000229")]
		[Address(RVA = "0x5762EA0", Offset = "0x5761EA0", VA = "0x5762EA0")]
		internal LinqEnumerator(JSONNode aNode)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.LinqEnumerator$$.ctor): 8 lines keep C-only constructs
			uint uVar1;
			JSONNode pSVar2;
			JSONNode.Enumerator pSVar3;
			bool bVar4;
			ulong local_68;
			Dictionary<TKey, TValue> pSStack_60;
			ulong local_58;
			object pIStack_50;
			object local_48;
			ulong uStack_40;
			List<T> local_38;
			ulong uStack_30;
			JSONNode local_28;

			base();
			this.m_Node = aNode;
			pSVar2 = this.m_Node;
			if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
			}
			if (Il2CppMethodInitialized_075450d9 == false) {
				Il2CppMethodInitialized_075450d9 = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(JSONNode))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar4 = (pSVar2 == null);
			if (!bVar4) {
				pSVar2 = this.m_Node;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				local_68.unknown(pSVar2);
				this.m_Enumerator.m_Array._current = local_28;
				this.m_Enumerator.m_Array._list = local_38;
				pSVar3 = &this.m_Enumerator;
				pSVar3.m_Array._index = (undefined4)uStack_30;
				pSVar3.m_Array._version = uStack_30._4_4_;
				this.m_Enumerator.m_Object._current.value = local_48;
				*(ulong)&this.m_Enumerator.m_Object._getEnumeratorRetType = uStack_40;
				pSVar3 = &this.m_Enumerator;
				pSVar3.m_Object._version = (undefined4)local_58;
				pSVar3.m_Object._index = local_58._4_4_;
				this.m_Enumerator.m_Object._current.key = pIStack_50;
				*(ulong)&this.m_Enumerator = local_68;
				this.m_Enumerator.m_Object._dictionary = pSStack_60;
			}
			return;
		}

		[Token(Token = "0x600022C")]
		[Address(RVA = "0x5765B00", Offset = "0x5764B00", VA = "0x5765B00", Slot = "6")]
		public bool MoveNext()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.LinqEnumerator$$MoveNext): clean
			int iVar1;
			bool bVar2;

			iVar1 = this.m_Enumerator.type;
			if (iVar1 == 2) {
				return bVar2;
			}
			if (iVar1 == 1) {
				return bVar2;
			}
			return false;
		}

		[Token(Token = "0x600022D")]
		[Address(RVA = "0x5765B70", Offset = "0x5764B70", VA = "0x5765B70", Slot = "5")]
		public void Dispose()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.LinqEnumerator$$Dispose): 5 lines keep C-only constructs
			JSONNode.Enumerator pSVar1;

			this.m_Node = null;
			this.m_Enumerator.m_Array._list = null;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Array._index = 0;
			pSVar1.m_Array._version = 0;
			*(object*)((long)&this.m_Enumerator.m_Object._current + 8) =null;
			*(ulong)&this.m_Enumerator.m_Object._getEnumeratorRetType = 0;
			pSVar1 = &this.m_Enumerator;
			pSVar1.m_Object._version = 0;
			pSVar1.m_Object._index = 0;
			this.m_Enumerator.m_Object._current.key = null;
			*(ulong)&this.m_Enumerator = 0;
			this.m_Enumerator.m_Object._dictionary =null;
			this.m_Enumerator.m_Array._current = null;
			return;
		}

		[Token(Token = "0x600022E")]
		[Address(RVA = "0x5765BB0", Offset = "0x5764BB0", VA = "0x5765BB0", Slot = "9")]
		public IEnumerator<KeyValuePair<string, JSONNode>> GetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.LinqEnumerator$$GetEnumerator): clean
			JSONNode aNode;
			JSONNode.LinqEnumerator __this_00;

			aNode = this.m_Node;
			__this_00 = new JSONNode.LinqEnumerator(aNode);
			return (IEnumerator<KeyValuePair<string, JSONNode>>)__this_00;
		}

		[Token(Token = "0x600022F")]
		[Address(RVA = "0x5765C00", Offset = "0x5764C00", VA = "0x5765C00", Slot = "8")]
		public void Reset()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.LinqEnumerator$$Reset): 8 lines keep C-only constructs
			uint uVar1;
			JSONNode pSVar2;
			JSONNode.Enumerator pSVar3;
			bool bVar4;
			ulong local_60;
			Dictionary<TKey, TValue> pSStack_58;
			ulong local_50;
			object pIStack_48;
			object local_40;
			ulong uStack_38;
			List<T> local_30;
			ulong uStack_28;
			JSONNode local_20;

			pSVar2 = this.m_Node;
			if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
			}
			if (Il2CppMethodInitialized_075450d9 == false) {
				Il2CppMethodInitialized_075450d9 = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(JSONNode))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar4 = (pSVar2 == null);
			if (!bVar4) {
				pSVar2 = this.m_Node;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				local_60.unknown(pSVar2);
				this.m_Enumerator.m_Array._current = local_20;
				this.m_Enumerator.m_Array._list = local_30;
				pSVar3 = &this.m_Enumerator;
				pSVar3.m_Array._index = (undefined4)uStack_28;
				pSVar3.m_Array._version = uStack_28._4_4_;
				this.m_Enumerator.m_Object._current.value = local_40;
				*(ulong)&this.m_Enumerator.m_Object._getEnumeratorRetType = uStack_38;
				pSVar3 = &this.m_Enumerator;
				pSVar3.m_Object._version = (undefined4)local_50;
				pSVar3.m_Object._index = local_50._4_4_;
				this.m_Enumerator.m_Object._current.key = pIStack_48;
				*(ulong)&this.m_Enumerator = local_60;
				this.m_Enumerator.m_Object._dictionary = pSStack_58;
			}
			return;
		}

		[Token(Token = "0x6000230")]
		[Address(RVA = "0x5765D20", Offset = "0x5764D20", VA = "0x5765D20", Slot = "10")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.LinqEnumerator$$System.Collections.IEnumerable.GetEnumerator): clean
			JSONNode aNode;
			JSONNode.LinqEnumerator __this_00;

			aNode = this.m_Node;
			__this_00 = new JSONNode.LinqEnumerator(aNode);
			return (IEnumerator)__this_00;
		}
	}

	[Token(Token = "0x200004A")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__43 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001B3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001B4")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001B5")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000045")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000234")]
			[Address(RVA = "0x5765DA0", Offset = "0x5764DA0", VA = "0x5765DA0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000046")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000236")]
			[Address(RVA = "0x5765DF0", Offset = "0x5764DF0", VA = "0x5765DF0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x6000231")]
		[Address(RVA = "0x5762C40", Offset = "0x5761C40", VA = "0x5762C40")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__43(int _003C_003E1__state)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_Children>d__43$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6000232")]
		[Address(RVA = "0x5765D70", Offset = "0x5764D70", VA = "0x5765D70", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000233")]
		[Address(RVA = "0x5765D80", Offset = "0x5764D80", VA = "0x5765D80", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_Children>d__43$$MoveNext): clean
			if (this.__1__state == 0) {
				this.__1__state = -1;
				return false;
			}
			return false;
		}

		[Token(Token = "0x6000235")]
		[Address(RVA = "0x5765DB0", Offset = "0x5764DB0", VA = "0x5765DB0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONNode_get_Children_d__43_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x6000237")]
		[Address(RVA = "0x5765E00", Offset = "0x5764E00", VA = "0x5765E00", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			JSONNode.d__43<get_Children> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator<JSONNode>)this;
			}
			__this_00 = new JSONNode.d__43<get_Children>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator<JSONNode>)__this_00;
		}

		[Token(Token = "0x6000238")]
		[Address(RVA = "0x5765E80", Offset = "0x5764E80", VA = "0x5765E80", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerable.GetEnumerator): clean
			int iVar1;
			int iVar2;
			JSONNode.d__43<get_Children> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = new JSONNode.d__43<get_Children>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator)__this_00;
		}
	}

	[Token(Token = "0x200004B")]
	[CompilerGenerated]
	private sealed class _003Cget_DeepChildren_003Ed__45 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001B6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001B7")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001B8")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001B9")]
		[FieldOffset(Offset = "0x28")]
		public JSONNode _003C_003E4__this;

		[Token(Token = "0x40001BA")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerator<JSONNode> _003C_003E7__wrap1;

		[Token(Token = "0x40001BB")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerator<JSONNode> _003C_003E7__wrap2;

		[Token(Token = "0x17000047")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x600023E")]
			[Address(RVA = "0x5766870", Offset = "0x5765870", VA = "0x5766870", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000048")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000240")]
			[Address(RVA = "0x57668C0", Offset = "0x57658C0", VA = "0x57668C0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x5762CE0", Offset = "0x5761CE0", VA = "0x5762CE0")]
		[DebuggerHidden]
		public _003Cget_DeepChildren_003Ed__45(int _003C_003E1__state)
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x600023A")]
		[Address(RVA = "0x5765F00", Offset = "0x5764F00", VA = "0x5765F00", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.IDisposable.Dispose): clean
			uint uVar1;
			object pIVar2;

			uVar1 = this.__1__state;
			if ((uVar1 & 0xfffffffe) == 0xfffffffc) {
				if (uVar1 != 0xfffffffc) goto label_05866006;
				if (Il2CppMethodInitialized_075450f1 != false) goto label_05865f40;
		label_05865f79: ;
				Il2CppMethodInitialized_075450f1 = true;
				this.__1__state = -3;
				pIVar2 = (object)this.__7__wrap2;
			}
			else {
				if (uVar1 != 1) {
					return;
				}
				if (Il2CppMethodInitialized_075450f1 == false) goto label_05865f79;
		label_05865f40: ;
				this.__1__state = -3;
				pIVar2 = (object)this.__7__wrap2;
			}
			if (pIVar2 != null) {
				pIVar2.Dispose();
			}
		label_05866006: ;
			this.__1__state = -1;
			pIVar2 = (object)this.__7__wrap1;
			if (pIVar2 != null) {
				pIVar2.Dispose();
			}
			return;
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x5766100", Offset = "0x5765100", VA = "0x5766100", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$MoveNext): 15 lines keep C-only constructs
			int iVar1;
			JSONNode pSVar2;
			Il2CppClass pIVar3;
			Il2CppRuntimeInterfaceOffsetPair pIVar4;
			JSONNode.d__45<get_DeepChildren> pSVar5;
			JSONNode.d__45<get_DeepChildren>* ppSVar6;
			bool bVar7;
			int iVar8;
			object pIVar9;
			VirtualInvokeData pVVar10;
			JSONNode.d__45<get_DeepChildren> pSVar11;
			ulong uVar12;
			long lVar13;
			JSONNode.d__45<get_DeepChildren> pSStack_28;
			byte puStack_18;

			pSStack_28 = this;
			puStack_18 = (byte)&pSStack_28;
			iVar1 = this.__1__state;
			ppSVar6 = &pSStack_28;
			if (iVar1 == 1) goto label_05866392;
			if (iVar1 != 0) {
				return false;
			}
			pSVar2 = this.__4__this;
			this.__1__state = -1;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			puStack_18 = (byte)&pSStack_28;
			pIVar9 = (object)pSVar2.get_Children();
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = pIVar9.klass;
			uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
			pIVar9 = pIVar9.MoveNext();
			pSStack_28.__7__wrap1 = (IEnumerator<JSONNode>)pIVar9;
			pSStack_28.__1__state = -3;
			do {
				pIVar9 = (object)pSStack_28.__7__wrap1;
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIVar9.klass;
				uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
				bVar7 = pIVar9.MoveNext();
				pSVar11 = pSStack_28;
				if (!bVar7) {
					pSVar11.__1__state = -1;
					pIVar9 = (object)pSVar11.__7__wrap1;
					if (pIVar9 == null) goto label_0586667b;
					pIVar3 = pIVar9.klass;
					uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar12 == 0) goto label_058665b3;
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar13 = 0;
					break;
				}
				pIVar9 = (object)pSStack_28.__7__wrap1;
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIVar9.klass;
				uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
				pIVar9 = pIVar9.MoveNext();
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pSVar11 = new JSONNode.d__45<get_DeepChildren>();
				pSVar11.__1__state = -2;
				iVar8 = Environment.CurrentManagedThreadId;
				pSVar11.__l__initialThreadId = iVar8;
				pSVar11.__4__this = (JSONNode)pIVar9;
				pSVar5 = pSVar11.klass;
				uVar12 = (ulong)(pSVar5._2).interface_offsets_count;
				pIVar9 = pSVar11.MoveNext();
				pSStack_28.__7__wrap2 = (IEnumerator<JSONNode>)pIVar9;
				this = pSStack_28;
				ppSVar6 = (JSONNode.d__45<get_DeepChildren>*)puStack_18;
		label_05866392: ;
				puStack_18 = (byte)ppSVar6;
				this.__1__state = -4;
				pIVar9 = (object)this.__7__wrap2;
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIVar9.klass;
				uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
				bVar7 = pIVar9.MoveNext();
				pSVar11 = pSStack_28;
				if (bVar7) {
					pIVar9 = (object)pSStack_28.__7__wrap2;
					if (pIVar9 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = pIVar9.klass;
					uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar12 == 0) goto label_0586660f;
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar13 = 0;
					goto label_05866600;
				}
				pSVar11.__1__state = -3;
				pIVar9 = (object)pSVar11.__7__wrap2;
				if (pIVar9 != null) {
					pIVar3 = pIVar9.klass;
					uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
					pIVar9.MoveNext();
				}
				pSStack_28.__7__wrap2 = null;
			} while(true);
			while (true) {
				lVar13 = lVar13 + 0x10;
				if (!(uVar12 * 0x10 != lVar13)) break;
				if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar13) == typeof(IDisposable)) {
					pVVar10 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar13);
					goto label_05866672;
				}
			}
		label_058665b3: ;
		label_05866672: ;
			pIVar9.MoveNext();
		label_0586667b: ;
			pSStack_28.__7__wrap1 = null;
			return false;
			while (true) {
				lVar13 = lVar13 + 0x10;
				if (!(uVar12 * 0x10 != lVar13)) break;
		label_05866600: ;
				if (*(IEnumerator<JSONNode>*)((long)&pIVar4.interfaceType + lVar13) == typeof(IEnumerator<JSONNode>)) {
					pVVar10 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar13);
					goto label_05866631;
				}
			}
		label_0586660f: ;
		label_05866631: ;
			pIVar9 = pIVar9.MoveNext();
			pSStack_28.__2__current = (JSONNode)pIVar9;
			pSStack_28.__1__state = 1;
			return true;
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x57667D0", Offset = "0x57657D0", VA = "0x57667D0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally1): clean
			object obj;

			this.__1__state = -1;
			obj = (object)this.__7__wrap1;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x5766730", Offset = "0x5765730", VA = "0x5766730")]
		private void _003C_003Em__Finally2()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally2): clean
			object obj;

			this.__1__state = -3;
			obj = (object)this.__7__wrap2;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x5766880", Offset = "0x5765880", VA = "0x5766880", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x57668D0", Offset = "0x57658D0", VA = "0x57668D0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			JSONNode.d__45<get_DeepChildren> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = new JSONNode.d__45<get_DeepChildren>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			__this_00.__4__this = this.__4__this;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x6000242")]
		[Address(RVA = "0x5766970", Offset = "0x5765970", VA = "0x5766970", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x0")]
	public static bool forceASCII;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x1")]
	public static readonly bool longAsString;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x2")]
	public static bool allowLineComments;

	[Token(Token = "0x40001A7")]
	[ThreadStatic]
	private static StringBuilder m_EscapeBuilder;

	[Token(Token = "0x17000025")]
	public abstract JSONNodeType Tag
	{
		[Token(Token = "0x60001CF")]
		get;
	}

	[Token(Token = "0x17000026")]
	public virtual JSONNode this[int aIndex]
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x5762A20", Offset = "0x5761A20", VA = "0x5762A20", Slot = "5")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_Item): clean
			return null;
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x5762A30", Offset = "0x5761A30", VA = "0x5762A30", Slot = "6")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_Item): clean
			return;
		}
	}

	[Token(Token = "0x17000027")]
	public virtual JSONNode this[string aKey]
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x5762A40", Offset = "0x5761A40", VA = "0x5762A40", Slot = "7")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_Item): clean
			return null;
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x5762A50", Offset = "0x5761A50", VA = "0x5762A50", Slot = "8")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_Item): clean
			return;
		}
	}

	[Token(Token = "0x17000028")]
	public virtual string Value
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x5762A60", Offset = "0x5761A60", VA = "0x5762A60", Slot = "9")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_Value): clean
			return "";
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x5762A90", Offset = "0x5761A90", VA = "0x5762A90", Slot = "10")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_Value): clean
			return;
		}
	}

	[Token(Token = "0x17000029")]
	public virtual int Count
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x5762AA0", Offset = "0x5761AA0", VA = "0x5762AA0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_Count): clean
			return 0;
		}
	}

	[Token(Token = "0x1700002A")]
	public virtual bool IsNumber
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x5762AB0", Offset = "0x5761AB0", VA = "0x5762AB0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_IsNumber): clean
			return false;
		}
	}

	[Token(Token = "0x1700002B")]
	public virtual bool IsString
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x5762AC0", Offset = "0x5761AC0", VA = "0x5762AC0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_IsString): clean
			return false;
		}
	}

	[Token(Token = "0x1700002C")]
	public virtual bool IsBoolean
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x5762AD0", Offset = "0x5761AD0", VA = "0x5762AD0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_IsBoolean): clean
			return false;
		}
	}

	[Token(Token = "0x1700002D")]
	public virtual bool IsNull
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x5762AE0", Offset = "0x5761AE0", VA = "0x5762AE0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_IsNull): clean
			return false;
		}
	}

	[Token(Token = "0x1700002E")]
	public virtual bool IsArray
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x5762AF0", Offset = "0x5761AF0", VA = "0x5762AF0", Slot = "16")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_IsArray): clean
			return false;
		}
	}

	[Token(Token = "0x1700002F")]
	public virtual bool IsObject
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x5762B00", Offset = "0x5761B00", VA = "0x5762B00", Slot = "17")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_IsObject): clean
			return false;
		}
	}

	[Token(Token = "0x17000030")]
	public virtual bool Inline
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x5762B10", Offset = "0x5761B10", VA = "0x5762B10", Slot = "18")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_Inline): clean
			return false;
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x5762B20", Offset = "0x5761B20", VA = "0x5762B20", Slot = "19")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_Inline): clean
			return;
		}
	}

	[Token(Token = "0x17000031")]
	public virtual IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x5762BF0", Offset = "0x5761BF0", VA = "0x5762BF0", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__43))]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_Children): clean
			int iVar1;
			JSONNode.d__43<get_Children> __this_00;

			__this_00 = new JSONNode.d__43<get_Children>();
			__this_00.__1__state = -2;
			iVar1 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar1;
			return (IEnumerable<JSONNode>)__this_00;
		}
	}

	[Token(Token = "0x17000032")]
	public IEnumerable<JSONNode> DeepChildren
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x5762C70", Offset = "0x5761C70", VA = "0x5762C70")]
		[IteratorStateMachine(typeof(_003Cget_DeepChildren_003Ed__45))]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_DeepChildren): clean
			int iVar1;
			JSONNode.d__45<get_DeepChildren> __this_00;

			__this_00 = new JSONNode.d__45<get_DeepChildren>();
			__this_00.__1__state = -2;
			iVar1 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar1;
			__this_00.__4__this = this;
			return (IEnumerable<JSONNode>)__this_00;
		}
	}

	[Token(Token = "0x17000033")]
	public IEnumerable<KeyValuePair<string, JSONNode>> Linq
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x5762E50", Offset = "0x5761E50", VA = "0x5762E50")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_Linq): clean
			JSONNode.LinqEnumerator __this_00;

			__this_00 = new JSONNode.LinqEnumerator(this);
			return (IEnumerable<KeyValuePair<string, JSONNode>>)__this_00;
		}
	}

	[Token(Token = "0x17000034")]
	public KeyEnumerator Keys
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x5762FE0", Offset = "0x5761FE0", VA = "0x5762FE0")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_Keys): 8 lines keep C-only constructs
			JSONNode.Enumerator pSVar1;
			ulong local_50;
			Dictionary<TKey, TValue> pSStack_48;
			ulong local_40;
			object pIStack_38;
			object local_30;
			ulong uStack_28;
			List<T> local_20;
			ulong uStack_18;
			JSONNode local_10;

			local_50.unknown(this);
			__return_storage_ptr__.m_Enumerator.m_Array._current = local_10;
			__return_storage_ptr__.m_Enumerator.m_Array._list = local_20;
			pSVar1 = &__return_storage_ptr__.m_Enumerator;
			pSVar1.m_Array._index = (undefined4)uStack_18;
			pSVar1.m_Array._version = uStack_18._4_4_;
			__return_storage_ptr__.m_Enumerator.m_Object._current.value = local_30;
			*(ulong)&__return_storage_ptr__.m_Enumerator.m_Object._getEnumeratorRetType = uStack_28;
			pSVar1 = &__return_storage_ptr__.m_Enumerator;
			pSVar1.m_Object._version = (undefined4)local_40;
			pSVar1.m_Object._index = local_40._4_4_;
			__return_storage_ptr__.m_Enumerator.m_Object._current.key = pIStack_38;
			*(ulong)&__return_storage_ptr__.m_Enumerator = local_50;
			__return_storage_ptr__.m_Enumerator.m_Object._dictionary = pSStack_48;
			return __return_storage_ptr__;
		}
	}

	[Token(Token = "0x17000035")]
	public ValueEnumerator Values
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x5763040", Offset = "0x5762040", VA = "0x5763040")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_Values): 8 lines keep C-only constructs
			JSONNode.Enumerator pSVar1;
			ulong local_50;
			Dictionary<TKey, TValue> pSStack_48;
			ulong local_40;
			object pIStack_38;
			object local_30;
			ulong uStack_28;
			List<T> local_20;
			ulong uStack_18;
			JSONNode local_10;

			local_50.unknown(this);
			__return_storage_ptr__.m_Enumerator.m_Array._current = local_10;
			__return_storage_ptr__.m_Enumerator.m_Array._list = local_20;
			pSVar1 = &__return_storage_ptr__.m_Enumerator;
			pSVar1.m_Array._index = (undefined4)uStack_18;
			pSVar1.m_Array._version = uStack_18._4_4_;
			__return_storage_ptr__.m_Enumerator.m_Object._current.value = local_30;
			*(ulong)&__return_storage_ptr__.m_Enumerator.m_Object._getEnumeratorRetType = uStack_28;
			pSVar1 = &__return_storage_ptr__.m_Enumerator;
			pSVar1.m_Object._version = (undefined4)local_40;
			pSVar1.m_Object._index = local_40._4_4_;
			__return_storage_ptr__.m_Enumerator.m_Object._current.key = pIStack_38;
			*(ulong)&__return_storage_ptr__.m_Enumerator = local_50;
			__return_storage_ptr__.m_Enumerator.m_Object._dictionary = pSStack_48;
			return __return_storage_ptr__;
		}
	}

	[Token(Token = "0x17000036")]
	public virtual double AsDouble
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x57630A0", Offset = "0x57620A0", VA = "0x57630A0", Slot = "33")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_AsDouble): clean
			bool bVar1;
			String s;
			CultureInfo provider;
			double local_10;

			local_10 = 0.0;
			s = this.get_Value();
			provider = CultureInfo.InvariantCulture;
			bVar1 = Double.TryParse(s, 0xa7, (IFormatProvider)provider, ref local_10);
			if (bVar1) {
				return local_10;
			}
			return 0.0;
		}
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x5763140", Offset = "0x5762140", VA = "0x5763140", Slot = "34")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_AsDouble): clean
			CultureInfo provider;
			String pSVar1;
			double local_10;

			local_10 = value;
			provider = CultureInfo.InvariantCulture;
			pSVar1 = local_10.ToString((IFormatProvider)provider);
			this.set_Value(pSVar1);
			return;
		}
	}

	[Token(Token = "0x17000037")]
	public virtual int AsInt
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x57631C0", Offset = "0x57621C0", VA = "0x57631C0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_AsInt): clean
			double dVar1;

			dVar1 = this.get_AsDouble();
			return (int)dVar1;
		}
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x57631E0", Offset = "0x57621E0", VA = "0x57631E0", Slot = "36")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_AsInt): clean
			this.set_AsDouble((double)value);
			return;
		}
	}

	[Token(Token = "0x17000038")]
	public virtual float AsFloat
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x5763200", Offset = "0x5762200", VA = "0x5763200", Slot = "37")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_AsFloat): clean
			double dVar1;

			dVar1 = this.get_AsDouble();
			return (float)dVar1;
		}
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x5763220", Offset = "0x5762220", VA = "0x5763220", Slot = "38")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_AsFloat): clean
			this.set_AsDouble((double)value);
			return;
		}
	}

	[Token(Token = "0x17000039")]
	public virtual bool AsBool
	{
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x5763240", Offset = "0x5762240", VA = "0x5763240", Slot = "39")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_AsBool): 4 lines keep C-only constructs
			bool bVar1;
			ulong in_RAX;
			String pSVar2;
			ulong uStack_18;

			uStack_18 = in_RAX & 0xffffffffffffff;
			pSVar2 = this.get_Value();
			bVar1 = Boolean.TryParse(pSVar2, (bool)((long)&uStack_18 + 7));
			if (bVar1) {
				return uStack_18._7_1_ != false;
			}
			pSVar2 = this.get_Value();
			bVar1 = String.IsNullOrEmpty(pSVar2);
			return !bVar1;
		}
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x57632D0", Offset = "0x57622D0", VA = "0x57632D0", Slot = "40")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_AsBool): 2 lines keep C-only constructs
			String* ppSVar1;

			if (this == null) {
				throw new NullReferenceException();
			}
			if (value) {
				ppSVar1 = &"true";
			}
			else {
				ppSVar1 = &"false";
			}
			this.set_Value(*ppSVar1);
			return;
		}
	}

	[Token(Token = "0x1700003A")]
	public virtual long AsLong
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x5763340", Offset = "0x5762340", VA = "0x5763340", Slot = "41")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_AsLong): clean
			bool bVar1;
			String s;
			long iVar2;
			long local_10;

			local_10 = 0;
			s = this.get_Value();
			bVar1 = Int64.TryParse(s, ref local_10);
			if (bVar1) {
			}
			return iVar2;
		}
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x5763390", Offset = "0x5762390", VA = "0x5763390", Slot = "42")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_AsLong): clean
			String pSVar1;
			long local_10;

			local_10 = value;
			pSVar1 = local_10.ToString();
			this.set_Value(pSVar1);
			return;
		}
	}

	[Token(Token = "0x1700003B")]
	public virtual ulong AsULong
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x57633D0", Offset = "0x57623D0", VA = "0x57633D0", Slot = "43")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_AsULong): clean
			bool bVar1;
			String s;
			ulong uVar2;
			ulong local_10;

			local_10 = 0;
			s = this.get_Value();
			bVar1 = UInt64.TryParse(s, ref local_10);
			if (bVar1) {
			}
			return uVar2;
		}
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x5763420", Offset = "0x5762420", VA = "0x5763420", Slot = "44")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$set_AsULong): clean
			String pSVar1;
			ulong local_10;

			local_10 = value;
			pSVar1 = local_10.ToString();
			this.set_Value(pSVar1);
			return;
		}
	}

	[Token(Token = "0x1700003C")]
	public virtual JSONArray AsArray
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x5763460", Offset = "0x5762460", VA = "0x5763460", Slot = "45")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_AsArray): 2 lines keep C-only constructs
			byte bVar1;
			JSONArray pSVar2;

			if (this != null) {
				bVar1 = (typeof(JSONArray)._2).typeHierarchyDepth;
				if (bVar1 <= (this.klass._2).typeHierarchyDepth) {
					if ((this.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(JSONArray)) {
					}
					return pSVar2;
				}
			}
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public virtual JSONObject AsObject
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x57634C0", Offset = "0x57624C0", VA = "0x57634C0", Slot = "46")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_AsObject): 2 lines keep C-only constructs
			byte bVar1;
			JSONObject pSVar2;

			if (this != null) {
				bVar1 = (typeof(JSONObject)._2).typeHierarchyDepth;
				if (bVar1 <= (this.klass._2).typeHierarchyDepth) {
					if ((this.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(JSONObject)) {
					}
					return pSVar2;
				}
			}
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	internal static StringBuilder EscapeBuilder
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x5764270", Offset = "0x5763270", VA = "0x5764270")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$get_EscapeBuilder): 6 lines keep C-only constructs
			uint uVar1;
			long lVar2;
			long plVar3;
			ulong puVar4;
			StringBuilder __this;

			if (Il2CppMethodInitialized_075450da == false) {
				Il2CppMethodInitialized_075450da = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				plVar3 = (long)il2cpp_runtime_helper_030d6080(typeof(JSONNode));
				lVar2 = *plVar3;
			}
			else {
				plVar3 = (long)il2cpp_runtime_helper_030d6080();
				lVar2 = *plVar3;
			}
			if (lVar2 == 0) {
				__this = new StringBuilder();
				puVar4 = (ulong)il2cpp_runtime_helper_030d6080(typeof(JSONNode));
				*puVar4 = __this;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(JSONNode))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			puVar4 = (ulong)il2cpp_runtime_helper_030d6080(typeof(JSONNode));
			return (StringBuilder)*puVar4;
		}
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x5762B30", Offset = "0x5761B30", VA = "0x5762B30", Slot = "20")]
	public virtual void Add(string aKey, JSONNode aItem)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Add): clean
		return;
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x5762B40", Offset = "0x5761B40", VA = "0x5762B40", Slot = "21")]
	public virtual void Add(JSONNode aItem)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Add): clean
		this.Add("", aItem);
		return;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x5762BA0", Offset = "0x5761BA0", VA = "0x5762BA0", Slot = "22")]
	public virtual JSONNode Remove(string aKey)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Remove): clean
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x5762BB0", Offset = "0x5761BB0", VA = "0x5762BB0", Slot = "23")]
	public virtual JSONNode Remove(int aIndex)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Remove): clean
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x5762BC0", Offset = "0x5761BC0", VA = "0x5762BC0", Slot = "24")]
	public virtual JSONNode Remove(JSONNode aNode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Remove): clean
		return aNode;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x5762BD0", Offset = "0x5761BD0", VA = "0x5762BD0", Slot = "25")]
	public virtual void Clear()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Clear): clean
		return;
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x5762BE0", Offset = "0x5761BE0", VA = "0x5762BE0", Slot = "26")]
	public virtual JSONNode Clone()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Clone): clean
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x5762D10", Offset = "0x5761D10", VA = "0x5762D10", Slot = "28")]
	public virtual bool HasKey(string aKey)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$HasKey): clean
		return false;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x5762D20", Offset = "0x5761D20", VA = "0x5762D20", Slot = "29")]
	public virtual JSONNode GetValueOrDefault(string aKey, JSONNode aDefault)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$GetValueOrDefault): clean
		return aDefault;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x5762D30", Offset = "0x5761D30", VA = "0x5762D30", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$ToString): clean
		StringBuilder __this_00;
		String pSVar1;

		__this_00 = new StringBuilder();
		this.unknown(__this_00, 0, 0, 0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x5762DC0", Offset = "0x5761DC0", VA = "0x5762DC0", Slot = "30")]
	public virtual string ToString(int aIndent)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$ToString): clean
		StringBuilder __this_00;
		String pSVar1;

		__this_00 = new StringBuilder();
		this.unknown(__this_00, 0, (ulong)(uint)aIndent, 1);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x60001EC")]
	internal abstract void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode);

	[Token(Token = "0x60001ED")]
	public abstract Enumerator GetEnumerator();

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x5763520", Offset = "0x5762520", VA = "0x5763520")]
	public static implicit operator JSONNode(string s)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		JSONString __this;
		JSONNode pSVar1;

		if (s == null) {
			if ((typeof(JSONNull)._2).cctor_finished_or_no_cctor == 0) {
				return pSVar1;
			}
			pSVar1 = (JSONNode)JSONNull.CreateOrGet();
			return pSVar1;
		}
		__this = new JSONString();
		__this.m_Data = s;
		return (JSONNode)__this;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x5763740", Offset = "0x5762740", VA = "0x5763740")]
	public static implicit operator string(JSONNode d)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		bool bVar1;
		String pSVar2;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = (d == null);
		if (bVar1) {
			return null;
		}
		if (d == null) {
			throw new NullReferenceException();
		}
		return pSVar2;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x57638F0", Offset = "0x57628F0", VA = "0x57638F0")]
	public static implicit operator JSONNode(double n)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		JSONNumber __this;

		__this = new JSONNumber();
		__this.m_Data = n;
		return (JSONNode)__this;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x57639E0", Offset = "0x57629E0", VA = "0x57639E0")]
	public static implicit operator double(JSONNode d)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		double dVar1;
		bool bVar2;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar2 = (d == null);
		if (bVar2) {
			return 0.0;
		}
		if (d == null) {
			throw new NullReferenceException();
		}
		return dVar1;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x5763A50", Offset = "0x5762A50", VA = "0x5763A50")]
	public static implicit operator JSONNode(float n)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		JSONNumber __this;

		__this = new JSONNumber();
		__this.m_Data = (double)n;
		return (JSONNode)__this;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x5763AF0", Offset = "0x5762AF0", VA = "0x5763AF0")]
	public static implicit operator float(JSONNode d)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		bool bVar1;
		float fVar2;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = (d == null);
		if (bVar1) {
			return 0.0;
		}
		if (d == null) {
			throw new NullReferenceException();
		}
		return fVar2;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x5763B60", Offset = "0x5762B60", VA = "0x5763B60")]
	public static implicit operator JSONNode(int n)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		JSONNumber __this;

		__this = new JSONNumber();
		__this.m_Data = (double)n;
		return (JSONNode)__this;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x5763BF0", Offset = "0x5762BF0", VA = "0x5763BF0")]
	public static implicit operator int(JSONNode d)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		bool bVar1;
		int iVar2;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = (d == null);
		if (bVar1) {
			return 0;
		}
		if (d == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x5763C60", Offset = "0x5762C60", VA = "0x5763C60")]
	public static implicit operator JSONNode(long n)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		sbyte cVar1;
		uint uVar2;
		String pSVar3;
		JSONString __this;
		long iStack_20;

		iStack_20 = n;
		if (Il2CppMethodInitialized_075450d1 == false) {
			Il2CppMethodInitialized_075450d1 = true;
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = JSONNode.longAsString;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(JSONNode)).static_fields + 1);
		}
		if (cVar1 == false) {
			__this = new JSONString();
			__this.m_Data = (String)(double)n;
		}
		else {
			pSVar3 = iStack_20.ToString();
			__this = new JSONString();
			__this.m_Data = pSVar3;
		}
		return (JSONNode)__this;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x5763DE0", Offset = "0x5762DE0", VA = "0x5763DE0")]
	public static implicit operator long(JSONNode d)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		bool bVar1;
		long iVar2;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = (d == null);
		if (bVar1) {
			return 0;
		}
		if (d == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x5763E50", Offset = "0x5762E50", VA = "0x5763E50")]
	public static implicit operator JSONNode(ulong n)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): 6 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		String pSVar3;
		JSONString __this;
		double dVar4;
		byte[] auVar5 = new byte[16];
		double dVar6;
		ulong local_30;
		double local_28;

		local_30 = n;
		if (Il2CppMethodInitialized_075450d3 == false) {
			Il2CppMethodInitialized_075450d3 = true;
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = JSONNode.longAsString;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(JSONNode)).static_fields + 1);
		}
		if (cVar1 == false) {
			auVar5._8_4_ = (int)(n >> 0x20);
			auVar5._0_8_ = n;
			auVar5._12_4_ = 0x45300000;
			dVar4 = (double)CONCAT44(0x43300000, (int)n) - 4503599627370496.0;
			dVar6 = auVar5._8_8_ - 1.9342813113834067e+25;
			if (Il2CppMethodInitialized_07545120 == false) {
				local_28 = dVar4;
				Il2CppMethodInitialized_07545120 = true;
				dVar4 = local_28;
			}
			__this = new JSONString();
			__this.m_Data = (String)(dVar6 + dVar4);
		}
		else {
			pSVar3 = local_30.ToString();
			__this = new JSONString();
			__this.m_Data = pSVar3;
		}
		return (JSONNode)__this;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x5764000", Offset = "0x5763000", VA = "0x5764000")]
	public static implicit operator ulong(JSONNode d)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		bool bVar1;
		ulong uVar2;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = (d == null);
		if (bVar1) {
			return 0;
		}
		if (d == null) {
			throw new NullReferenceException();
		}
		return uVar2;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x5764070", Offset = "0x5763070", VA = "0x5764070")]
	public static implicit operator JSONNode(bool b)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		JSONBool __this;

		__this = new JSONBool();
		__this.m_Data = b;
		return (JSONNode)__this;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x5764150", Offset = "0x5763150", VA = "0x5764150")]
	public static implicit operator bool(JSONNode d)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		bool bVar1;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = (d == null);
		if (bVar1) {
			return false;
		}
		if (d == null) {
			throw new NullReferenceException();
		}
		bVar1 = d.get_AsBool();
		return bVar1;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x57641C0", Offset = "0x57631C0", VA = "0x57641C0")]
	public static implicit operator JSONNode(KeyValuePair<string, JSONNode> aKeyValue)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Implicit): clean
		return aKeyValue.value;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x57637B0", Offset = "0x57627B0", VA = "0x57637B0")]
	public static bool operator ==(JSONNode a, object b)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Equality): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		JSONNode pSVar3;
		Il2CppClass pIVar4;
		bool bVar5;
		bool bVar6;

		if ((object)a == b) {
			bVar5 = true;
		}
		else {
			bVar6 = true;
			if (a != null) {
				pSVar3 = a.klass;
				bVar1 = (pSVar3._2).typeHierarchyDepth;
				bVar2 = (typeof(JSONNull)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(JSONNull))) {
					bVar2 = (typeof(JSONLazyCreator)._2).typeHierarchyDepth;
					if (bVar1 < bVar2) {
						bVar6 = false;
					}
					else {
						bVar6 = (pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(JSONLazyCreator);
					}
				}
			}
			bVar5 = true;
			if (b != null) {
				bVar5 = true;
				pIVar4 = b.klass;
				bVar1 = (pIVar4._2).typeHierarchyDepth;
				bVar2 = (typeof(JSONNull)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(JSONNull))) {
					bVar2 = (typeof(JSONLazyCreator)._2).typeHierarchyDepth;
					bVar5 = false;
					if (bVar2 <= bVar1) {
						bVar5 = (pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(JSONLazyCreator);
					}
				}
			}
			bVar5 = (bool)(bVar5 & bVar6);
			if (bVar6 == false && bVar5 == false) {
				if (a == null) {
					throw new NullReferenceException();
				}
				bVar5 = a.Equals(b);
				return bVar5;
			}
		}
		return bVar5;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x57641F0", Offset = "0x57631F0", VA = "0x57641F0")]
	public static bool operator !=(JSONNode a, object b)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$op_Inequality): clean
		bool bVar1;

		if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = (a == b);
		return !bVar1;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x5764250", Offset = "0x5763250", VA = "0x5764250", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Equals): clean
		return (object)this == obj;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x5764260", Offset = "0x5763260", VA = "0x5764260", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$GetHashCode): clean
		int iVar1;

		return iVar1;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x5764370", Offset = "0x5763370", VA = "0x5764370")]
	internal static string Escape(string aText)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Escape): 6 lines keep C-only constructs
		sbyte cVar1;
		ushort value;
		int iVar2;
		ulong in_RAX;
		StringBuilder __this;
		String* ppSVar3;
		StringBuilder __this_00;
		String pSVar4;
		int iVar5;
		int value_00;
		ulong uStack_38;

		uStack_38 = in_RAX;
		uStack_38 = uStack_38 & 0xffffffffffff;
		__this = JSONNode.EscapeBuilder;
		if (__this != null) {
			__this.Length = 0;
			iVar2 = __this.Capacity;
			if (aText != null) {
				iVar5 = aText._stringLength;
				value_00 = iVar5 / 10 + iVar5;
				if (iVar2 < value_00) {
					__this.Capacity = value_00;
					iVar5 = aText._stringLength;
				}
				if (iVar5 < 1) {
	label_058645d7: ;
					pSVar4 = __this.ToString();
					__this.Length = 0;
					return pSVar4;
				}
				iVar5 = 0;
	label_058644a0: ;
				value = aText.get_Chars(iVar5);
				switch(value) {
				case 8:
					ppSVar3 = &"\\b";
					break;
				case 9:
					ppSVar3 = &"\\t";
					break;
				case 10:
					ppSVar3 = &"\\n";
					break;
				case 0xb:
				case 0xe:
				case 0xf:
				case 0x10:
				case 0x11:
				case 0x12:
				case 0x13:
				case 0x14:
				case 0x15:
				case 0x16:
				case 0x17:
				case 0x18:
				case 0x19:
				case 0x1a:
				case 0x1b:
				case 0x1c:
				case 0x1d:
				case 0x1e:
				case 0x1f:
				case 0x20:
				case 0x21:
	switchD_058644c2_caseD_b: ;
					if (value < 0x20) {
	label_0586457f: ;
						uStack_38 = CONCAT26(value, (undefined6)uStack_38);
						__this_00 = __this.Append("\\u");
						pSVar4 = (((long)&uStack_38 + 6)).ToString("X4");
						if (__this_00 != null) goto label_05864546;
						goto label_0586460b;
					}
					if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
						cVar1 = JSONNode.forceASCII;
					}
					else {
						cVar1 = JSONNode.forceASCII;
					}
					if ((cVar1 != false) && (0x7f < value)) goto label_0586457f;
					__this.Append(value);
					iVar5 = iVar5 + 1;
					if (aText._stringLength <= iVar5) goto label_058645d7;
					goto label_058644a0;
				case 0xc:
					ppSVar3 = &"\\f";
					break;
				case 0xd:
					ppSVar3 = &"\\r";
					break;
				case 0x22:
					ppSVar3 = &"\\\"";
					break;
				default: ;
					if (value != 0x5c) goto switchD_058644c2_caseD_b;
					ppSVar3 = &"\\\\";
				}
				pSVar4 = *ppSVar3;
				__this_00 = __this;
	label_05864546: ;
				__this_00.Append(pSVar4);
				iVar5 = iVar5 + 1;
				if (aText._stringLength <= iVar5) goto label_058645d7;
				goto label_058644a0;
			}
		}
	label_0586460b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x5764610", Offset = "0x5763610", VA = "0x5764610")]
	private static JSONNode ParseElement(string token, bool quoted)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$ParseElement): 4 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		CultureInfo provider;
		JSONNumber __this;
		String a;
		undefined7 in_register_00000031;
		MethodInfo pMVar3;
		double local_28;
		double local_20;

		pMVar3 = (MethodInfo)CONCAT71(in_register_00000031, quoted);
		local_28 = 0.0;
		if (quoted) {
			return pSVar2;
		}
		if (token == null) {
			throw new NullReferenceException();
		}
		if (token._stringLength < 6) {
			a = token.ToLower();
			bVar1 = (a == "false");
			if (!bVar1) {
				bVar1 = (a == "true");
				if (!bVar1) {
					bVar1 = (a == "null");
					if (bVar1) {
						pSVar2 = (JSONNode)JSONNull.CreateOrGet();
						return pSVar2;
					}
					goto label_058646bd;
				}
			}
			bVar1 = (a == "true");
			__this = new JSONNumber();
			*(bool)&__this.m_Data = bVar1;
		}
		else {
	label_058646bd: ;
			provider = CultureInfo.InvariantCulture;
			pMVar3 = (MethodInfo)&g_data_000000a7;
			bVar1 = Double.TryParse(token, 0xa7, (IFormatProvider)provider, ref local_28);
			if (bVar1) {
				local_20 = local_28;
				__this = new JSONNumber();
				__this.m_Data = local_20;
			}
			else {
				__this = (JSONNumber)((JSONNode)token);
			}
		}
		return (JSONNode)__this;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x57648F0", Offset = "0x57638F0", VA = "0x57648F0")]
	public static JSONNode Parse(string aJSON)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$Parse): 8 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		byte quoted;
		byte bVar3;
		bool bVar4;
		bool bVar5;
		bool bVar6;
		ushort uVar7;
		int iVar8;
		Stack<object> __this;
		StringBuilder __this_00;
		JSONObject __this_01;
		String pSVar9;
		JSONNode pSVar10;
		Il2CppClass pIVar11;
		Exception __this_02;
		MethodInfo pMVar12;
		uint puVar13;
		String* metadataPointer;
		uint uVar14;
		uint index;
		JSONNode pSStack_58;
		String pSStack_48;

		__this = new Stack<JSONNode>();
		__this_00 = new StringBuilder();
		if (aJSON != null) {
			index = 0;
			if (aJSON._stringLength < 1) {
				pSStack_58 = null;
				bVar6 = false;
				quoted = false;
			}
			else {
				pSStack_48 = "";
				bVar5 = false;
				quoted = false;
				bVar6 = false;
				pSStack_58 = null;
				do {
					uVar7 = aJSON.get_Chars(index);
					uVar14 = index;
					bVar4 = bVar5;
					if (uVar7 < 0x30) {
						if (uVar7 < 0x21) {
							bVar4 = true;
							switch(uVar7) {
							case 9:
							case 0x20:
								if (!bVar6) goto label_05864a50;
								break;
							case 10:
							case 0xd:
								goto switchD_05864aa0_caseD_a;
							}
						}
						else {
							if (uVar7 == 0x22) {
								bVar3 = ~bVar6;
								bVar6 = (bool)(bVar3 & 1);
								quoted = quoted | bVar3;
								goto label_05864a50;
							}
							if (uVar7 == 0x2c) {
								if (bVar6) goto switchD_05864aa0_caseD_b;
								if (__this_00 == null) goto label_0586520b;
								iVar8 = __this_00.Length;
								if (0 < iVar8 || (bool)quoted != false) {
									pSVar9 = __this_00.ToString();
									if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
									}
									pSVar10 = JSONNode.ParseElement(pSVar9, (bool)quoted);
									if (pSStack_58 == null) goto label_0586520b;
									pSStack_58.Add(pSStack_48, pSVar10);
								}
								pSStack_48 = "";
								goto label_05864dbf;
							}
							if (uVar7 == 0x2f) {
								if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
									cVar1 = JSONNode.allowLineComments;
								}
								else {
									cVar1 = JSONNode.allowLineComments;
								}
								if (((cVar1 != false) && (!bVar6)) &&(uVar14 = index + 1, (int)uVar14 < aJSON._stringLength)) {
									uVar7 = aJSON.get_Chars(uVar14);
									if (uVar7 == 0x2f) {
										do {
											index = uVar14;
											if (aJSON._stringLength <= (int)index) break;
											uVar7 = aJSON.get_Chars(index);
											if (uVar7 == 10) break;
											uVar7 = aJSON.get_Chars(index);
											uVar14 = index + 1;
										} while (uVar7 != 0xd);
										goto label_05865008;
									}
								}
								uVar7 = aJSON.get_Chars(index);
								if (__this_00 != null) {
									__this_00.Append(uVar7);
	label_05865008: ;
									uVar14 = index;
									goto switchD_05864aa0_caseD_a;
								}
								goto label_0586520b;
							}
						}
					}
					else {
						if (0x5d < uVar7) {
							if (uVar7 != 0xfeff) {
								if (uVar7 == 0x7d) goto switchD_05864ad7_caseD_5d;
								if ((uVar7 == 0x7b) && (!bVar6)) {
									__this_01 = new JSONArray();
									goto joined_r0x05864ba7;
								}
								goto switchD_05864aa0_caseD_b;
							}
							goto label_05864a50;
						}
						puVar13 = &switchD_05864ad7::switchdataD_010a5460;
						switch(uVar7) {
						case 0x3a:
							if (!bVar6) {
								if (__this_00 != null) {
									pSStack_48 = __this_00.ToString();
	label_05864dbf: ;
									quoted = 0;
									__this_00.Length = 0;
									goto label_05864a50;
								}
								goto label_0586520b;
							}
							break;
						case 0x5b:
							if (bVar6) break;
							__this_01 = new JSONArray();
	joined_r0x05864ba7: ;
							if (__this != null) {
								__this.Push((object)__this_01);
								if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
									if (Il2CppMethodInitialized_075450d9 != false) goto label_05864e4b;
	label_05865029: ;
									Il2CppMethodInitialized_075450d9 = true;
									uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
								}
								else {
									if (Il2CppMethodInitialized_075450d9 == false) goto label_05865029;
	label_05864e4b: ;
									uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
								}
								if (uVar2 == 0) {
								}
								bVar5 = (pSStack_58 == null);
								if (!bVar5) {
									pSVar10 = __this.Peek();
									if (pSStack_58 == null) goto label_0586520b;
									pSStack_58.Add(pSStack_48, pSVar10);
								}
								if (__this_00 != null) {
									pSStack_48 = "";
									__this_00.Length = 0;
									pSStack_58 = __this.Peek();
									bVar4 = false;
									goto switchD_05864aa0_caseD_a;
								}
							}
							goto label_0586520b;
						case 0x5c:
							uVar14 = index + 1;
							if (!bVar6) goto switchD_05864aa0_caseD_a;
							uVar7 = aJSON.get_Chars(uVar14);
							if (uVar7 < 0x67) {
								if (uVar7 == 0x62) {
									if (__this_00 == null) goto label_0586520b;
									uVar7 = 8;
								}
								else {
									if (uVar7 != 0x66) goto switchD_058650aa_caseD_6f;
									if (__this_00 == null) goto label_0586520b;
									uVar7 = 0xc;
								}
							}
							else {
								switch(uVar7) {
								case 0x6e:
									if (__this_00 == null) goto label_0586520b;
									uVar7 = 10;
									break;
								default: ;
	switchD_058650aa_caseD_6f: ;
									if (__this_00 == null) goto label_0586520b;
									break;
								case 0x72:
									if (__this_00 == null) goto label_0586520b;
									uVar7 = 0xd;
									break;
								case 0x74:
									if (__this_00 == null) goto label_0586520b;
									uVar7 = 9;
									break;
								case 0x75:
									pSVar9 = aJSON.Substring(index + 2, 4);
									iVar8 = Int32.Parse(pSVar9, 0x200);
									if (__this_00 != null) {
										__this_00.Append((uint16_t)iVar8);
										index = index + 5;
										goto label_05865008;
									}
									goto label_0586520b;
								}
							}
							__this_00.Append(uVar7);
							goto switchD_05864aa0_caseD_a;
						case 0x5d:
	switchD_05864ad7_caseD_5d: ;
							if (!bVar6) {
								if (__this == null) goto label_0586520b;
								if (__this._size != 0) {
									__this.Pop();
									if (__this_00 == null) goto label_0586520b;
									iVar8 = __this_00.Length;
									if (0 < iVar8 || (bool)quoted != false) {
										pSVar9 = __this_00.ToString();
										if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
										}
										pSVar10 = JSONNode.ParseElement(pSVar9, (bool)quoted);
										if (pSStack_58 == null) goto label_0586520b;
										pSStack_58.Add(pSStack_48, pSVar10);
									}
									if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
										if (Il2CppMethodInitialized_075450d9 != false) goto label_05864c91;
	label_0586506a: ;
										Il2CppMethodInitialized_075450d9 = true;
										uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
									}
									else {
										if (Il2CppMethodInitialized_075450d9 == false) goto label_0586506a;
	label_05864c91: ;
										uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
									}
									if (uVar2 == 0) {
									}
									bVar4 = (pSStack_58 == null);
									if (!bVar4) {
										if (pSStack_58 == null) goto label_0586520b;
										pSStack_58.set_Inline(!bVar5);
									}
									pSStack_48 = "";
									__this_00.Length = 0;
									if (0 < __this._size) {
										pSStack_58 = __this.Peek();
									}
									quoted = 0;
									goto label_05864a50;
								}
								pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
								__this_02 = (Exception)il2cpp_codegen_object_new(pIVar11);
								metadataPointer = &"JSON Parse: Too many closing brackets";
								goto label_0586524e;
							}
						}
					}
	switchD_05864aa0_caseD_b: ;
					uVar7 = aJSON.get_Chars(index);
					if (__this_00 == null) goto label_0586520b;
					__this_00.Append(uVar7);
	label_05864a50: ;
					bVar4 = bVar5;
	switchD_05864aa0_caseD_a: ;
					bVar5 = bVar4;
					index = uVar14 + 1;
				} while ((int)index < aJSON._stringLength);
			}
			if (bVar6) {
				pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_02 = (Exception)il2cpp_codegen_object_new(pIVar11);
				metadataPointer = &"JSON Parse: Quotation marks seems to be messed up.";
	label_0586524e: ;
				pSVar9 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
				__this_02 = new Exception(pSVar9);
				pMVar12 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONNode_Parse);
				throw (object)__this_02;
			}
			if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar6 = (pSStack_58 == null);
			if (!bVar6) {
				return pSStack_58;
			}
			if (__this_00 != null) {
				pSVar9 = __this_00.ToString();
				if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
				}
				pSVar10 = JSONNode.ParseElement(pSVar9, (bool)quoted);
				return pSVar10;
			}
		}
	label_0586520b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x57653C0", Offset = "0x57643C0", VA = "0x57653C0")]
	protected JSONNode()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNode.c (SimpleJSONFixed.JSONNode$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/SimpleJSONFixed/JSONNode.c.

	// SimpleJSONFixed.JSONNode$$.cctor: clean
	static JSONNode()
	{

		JSONNode.forceASCII = false;
		JSONNode.longAsString = true;
		JSONNode.allowLineComments = true;
		return;
	}
}
