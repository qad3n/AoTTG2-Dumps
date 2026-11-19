// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONLazyCreator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONLazyCreator.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000055")]
internal class JSONLazyCreator : JSONNode
{
	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x10")]
	private JSONNode m_Node;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x18")]
	private string m_Key;

	[Token(Token = "0x1700006C")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x5769E80", Offset = "0x5768E80", VA = "0x5769E80", Slot = "4")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_Tag): clean
			return 7;
		}
	}

	[Token(Token = "0x1700006D")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x60002BD")]
		[Address(RVA = "0x5769EB0", Offset = "0x5768EB0", VA = "0x5769EB0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_Item): clean
			JSONLazyCreator __this_00;

			__this_00 = new JSONLazyCreator();
			__this_00.m_Node = (JSONNode)this;
			__this_00.m_Key = null;
			return (JSONNode)__this_00;
		}
		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x5769F60", Offset = "0x5768F60", VA = "0x5769F60", Slot = "6")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$set_Item): 2 lines keep C-only constructs
			JSONArray pSVar1;
			uint in_register_00000034;
			MethodInfo method_00;

			method_00 = (MethodInfo)CONCAT44(in_register_00000034, aIndex);
			pSVar1 = new JSONArray();
			pSVar1 = this.Set<JSONArray>((object)pSVar1);
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			pSVar1.Add(value);
			return;
		}
	}

	[Token(Token = "0x1700006E")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x5769FF0", Offset = "0x5768FF0", VA = "0x5769FF0", Slot = "7")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_Item): clean
			JSONLazyCreator __this_00;

			__this_00 = new JSONLazyCreator();
			__this_00.m_Node = (JSONNode)this;
			__this_00.m_Key = aKey;
			return (JSONNode)__this_00;
		}
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x576A0A0", Offset = "0x57690A0", VA = "0x576A0A0", Slot = "8")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$set_Item): clean
			JSONObject pSVar1;

			pSVar1 = new JSONObject();
			pSVar1 = this.Set<JSONObject>((object)pSVar1);
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			pSVar1.Add(aKey, value);
			return;
		}
	}

	[Token(Token = "0x1700006F")]
	public override int AsInt
	{
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x576A2B0", Offset = "0x57692B0", VA = "0x576A2B0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_AsInt): clean
			JSONNumber __this_00;

			__this_00 = new JSONNumber();
			__this_00.m_Data = 0.0;
			this.Set<JSONNumber>((object)__this_00);
			return 0;
		}
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x576A360", Offset = "0x5769360", VA = "0x576A360", Slot = "36")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$set_AsInt): clean
			JSONNumber __this_00;

			__this_00 = new JSONNumber();
			__this_00.m_Data = (double)value;
			this.Set<JSONNumber>((object)__this_00);
			return;
		}
	}

	[Token(Token = "0x17000070")]
	public override float AsFloat
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x576A420", Offset = "0x5769420", VA = "0x576A420", Slot = "37")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_AsFloat): clean
			JSONNumber __this_00;

			__this_00 = new JSONNumber();
			__this_00.m_Data = 0.0;
			this.Set<JSONNumber>((object)__this_00);
			return 0.0;
		}
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x576A4D0", Offset = "0x57694D0", VA = "0x576A4D0", Slot = "38")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$set_AsFloat): clean
			JSONNumber __this_00;

			__this_00 = new JSONNumber();
			__this_00.m_Data = (double)value;
			this.Set<JSONNumber>((object)__this_00);
			return;
		}
	}

	[Token(Token = "0x17000071")]
	public override double AsDouble
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x576A590", Offset = "0x5769590", VA = "0x576A590", Slot = "33")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_AsDouble): clean
			JSONNumber __this_00;

			__this_00 = new JSONNumber();
			__this_00.m_Data = 0.0;
			this.Set<JSONNumber>((object)__this_00);
			return 0.0;
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x576A640", Offset = "0x5769640", VA = "0x576A640", Slot = "34")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$set_AsDouble): clean
			JSONNumber __this_00;

			__this_00 = new JSONNumber();
			__this_00.m_Data = value;
			this.Set<JSONNumber>((object)__this_00);
			return;
		}
	}

	[Token(Token = "0x17000072")]
	public override long AsLong
	{
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x576A6F0", Offset = "0x57696F0", VA = "0x576A6F0", Slot = "41")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_AsLong): 3 lines keep C-only constructs
			sbyte cVar1;
			uint uVar2;
			String pSVar3;
			JSONString __this_00;
			MethodInfo* ppMVar4;

			if (Il2CppMethodInitialized_0754513e == false) {
				Il2CppMethodInitialized_0754513e = true;
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
				__this_00 = new JSONString();
				__this_00.m_Data = null;
				ppMVar4 = &MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber;
			}
			else {
				pSVar3 = "0";
				__this_00 = new JSONString();
				__this_00.m_Data = pSVar3;
				ppMVar4 = &MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString;
			}
			this.Set<object>((object)__this_00);
			return 0;
		}
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x576A8A0", Offset = "0x57698A0", VA = "0x576A8A0", Slot = "42")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$set_AsLong): clean
			sbyte cVar1;
			uint uVar2;
			String pSVar3;
			JSONString __this_00;
			JSONNumber __this_01;
			long local_28;

			local_28 = value;
			if (Il2CppMethodInitialized_0754513f == false) {
				Il2CppMethodInitialized_0754513f = true;
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
				__this_01 = new JSONNumber();
				__this_01.m_Data = (double)value;
				this.Set<JSONNumber>((object)__this_01);
				return;
			}
			pSVar3 = local_28.ToString();
			__this_00 = new JSONString();
			__this_00.m_Data = pSVar3;
			this.Set<JSONString>((object)__this_00);
			return;
		}
	}

	[Token(Token = "0x17000073")]
	public override ulong AsULong
	{
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x576AA70", Offset = "0x5769A70", VA = "0x576AA70", Slot = "43")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_AsULong): 3 lines keep C-only constructs
			sbyte cVar1;
			uint uVar2;
			String pSVar3;
			JSONString __this_00;
			MethodInfo* ppMVar4;

			if (Il2CppMethodInitialized_07545140 == false) {
				Il2CppMethodInitialized_07545140 = true;
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
				__this_00 = new JSONString();
				__this_00.m_Data = null;
				ppMVar4 = &MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber;
			}
			else {
				pSVar3 = "0";
				__this_00 = new JSONString();
				__this_00.m_Data = pSVar3;
				ppMVar4 = &MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString;
			}
			this.Set<object>((object)__this_00);
			return 0;
		}
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x576AC20", Offset = "0x5769C20", VA = "0x576AC20", Slot = "44")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$set_AsULong): 6 lines keep C-only constructs
			sbyte cVar1;
			uint uVar2;
			String pSVar3;
			JSONString __this_00;
			JSONNumber __this_01;
			double dVar4;
			byte[] auVar5 = new byte[16];
			double dVar6;
			ulong local_40;
			double local_38;

			local_40 = value;
			if (Il2CppMethodInitialized_07545141 == false) {
				Il2CppMethodInitialized_07545141 = true;
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
				auVar5._8_4_ = (int)(value >> 0x20);
				auVar5._0_8_ = value;
				auVar5._12_4_ = 0x45300000;
				dVar4 = (double)CONCAT44(0x43300000, (int)value) - 4503599627370496.0;
				dVar6 = auVar5._8_8_ - 1.9342813113834067e+25;
				if (Il2CppMethodInitialized_07545120 == false) {
					local_38 = dVar4;
					Il2CppMethodInitialized_07545120 = true;
					dVar4 = local_38;
				}
				__this_01 = new JSONNumber();
				__this_01.m_Data = dVar6 + dVar4;
				this.Set<JSONNumber>((object)__this_01);
				return;
			}
			pSVar3 = local_40.ToString();
			__this_00 = new JSONString();
			__this_00.m_Data = pSVar3;
			this.Set<JSONString>((object)__this_00);
			return;
		}
	}

	[Token(Token = "0x17000074")]
	public override bool AsBool
	{
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x576AE20", Offset = "0x5769E20", VA = "0x576AE20", Slot = "39")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_AsBool): clean
			JSONBool __this_00;

			__this_00 = new JSONBool();
			__this_00.m_Data = false;
			this.Set<JSONBool>((object)__this_00);
			return false;
		}
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x576AED0", Offset = "0x5769ED0", VA = "0x576AED0", Slot = "40")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$set_AsBool): clean
			JSONBool __this_00;

			__this_00 = new JSONBool();
			__this_00.m_Data = value;
			this.Set<JSONBool>((object)__this_00);
			return;
		}
	}

	[Token(Token = "0x17000075")]
	public override JSONArray AsArray
	{
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x576AF70", Offset = "0x5769F70", VA = "0x576AF70", Slot = "45")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_AsArray): clean
			JSONArray pSVar1;

			pSVar1 = new JSONArray();
			pSVar1 = this.Set<JSONArray>((object)pSVar1);
			return pSVar1;
		}
	}

	[Token(Token = "0x17000076")]
	public override JSONObject AsObject
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x576AFE0", Offset = "0x5769FE0", VA = "0x576AFE0", Slot = "46")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$get_AsObject): clean
			JSONObject pSVar1;

			pSVar1 = new JSONObject();
			pSVar1 = this.Set<JSONObject>((object)pSVar1);
			return pSVar1;
		}
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x5769E90", Offset = "0x5768E90", VA = "0x5769E90", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$GetEnumerator): 2 lines keep C-only constructs
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
		return __return_storage_ptr__;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x5766B50", Offset = "0x5765B50", VA = "0x5766B50")]
	public JSONLazyCreator(JSONNode aNode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$.ctor): clean
		base();
		this.m_Node = aNode;
		this.m_Key = null;
		return;
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x5767C70", Offset = "0x5766C70", VA = "0x5767C70")]
	public JSONLazyCreator(JSONNode aNode, string aKey)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$.ctor): clean
		base();
		this.m_Node = aNode;
		this.m_Key = aKey;
		return;
	}

	[Token(Token = "0x60002BC")]
	private T Set<T>(T aVal) where T : JSONNode
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x576A140", Offset = "0x5769140", VA = "0x576A140", Slot = "21")]
	public override void Add(JSONNode aItem)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$Add): clean
		JSONArray pSVar1;

		pSVar1 = new JSONArray();
		pSVar1 = this.Set<JSONArray>((object)pSVar1);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar1.Add(aItem);
		return;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x576A1D0", Offset = "0x57691D0", VA = "0x576A1D0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$Add): clean
		JSONObject pSVar1;

		pSVar1 = new JSONObject();
		pSVar1 = this.Set<JSONObject>((object)pSVar1);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar1.Add(aKey, aItem);
		return;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x576A270", Offset = "0x5769270", VA = "0x576A270")]
	public static bool operator ==(JSONLazyCreator a, object b)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$op_Equality): clean
		return a == (JSONLazyCreator)b || b == null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x576A280", Offset = "0x5769280", VA = "0x576A280")]
	public static bool operator !=(JSONLazyCreator a, object b)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$op_Inequality): clean
		return a != (JSONLazyCreator)b && b != null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x576A290", Offset = "0x5769290", VA = "0x576A290", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$Equals): clean
		return this == (JSONLazyCreator)obj || obj == null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x576A2A0", Offset = "0x57692A0", VA = "0x576A2A0", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$GetHashCode): clean
		return 0;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x576B050", Offset = "0x576A050", VA = "0x576B050", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c (SimpleJSONFixed.JSONLazyCreator$$WriteToStringBuilder): clean
		if (aSB == null) {
			throw new NullReferenceException();
		}
		aSB.Append("null");
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/SimpleJSONFixed/JSONLazyCreator.c.

	// SimpleJSONFixed.JSONLazyCreator$$Set<object>: clean
	private object Set_object(object aVal)
	{
		JSONNode pSVar1;
		String pSVar2;

		pSVar1 = this.m_Node;
		pSVar2 = this.m_Key;
		if (pSVar2 == null) {
			if (pSVar1 == null) goto label_0366adaa;
			pSVar1.Add((JSONNode)aVal);
		}
		else {
			if (pSVar1 == null) {
	label_0366adaa: ;
				throw new NullReferenceException();
			}
			pSVar1.Add(pSVar2, (JSONNode)aVal);
		}
		this.m_Node = null;
		return aVal;
	}
}
