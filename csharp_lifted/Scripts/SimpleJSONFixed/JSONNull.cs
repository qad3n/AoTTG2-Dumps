// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONNull
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONNull.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000054")]
public class JSONNull : JSONNode
{
	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNull m_StaticInstance;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x8")]
	public static bool reuseSameInstance;

	[Token(Token = "0x17000068")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x5769C00", Offset = "0x5768C00", VA = "0x5769C00", Slot = "4")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$get_Tag): clean
			return 5;
		}
	}

	[Token(Token = "0x17000069")]
	public override bool IsNull
	{
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x5769C10", Offset = "0x5768C10", VA = "0x5769C10", Slot = "15")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$get_IsNull): clean
			return true;
		}
	}

	[Token(Token = "0x1700006A")]
	public override string Value
	{
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x5769C40", Offset = "0x5768C40", VA = "0x5769C40", Slot = "9")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$get_Value): clean
			return "null";
		}
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x5769C70", Offset = "0x5768C70", VA = "0x5769C70", Slot = "10")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$set_Value): clean
			return;
		}
	}

	[Token(Token = "0x1700006B")]
	public override bool AsBool
	{
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x5769C80", Offset = "0x5768C80", VA = "0x5769C80", Slot = "39")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$get_AsBool): clean
			return false;
		}
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x5769C90", Offset = "0x5768C90", VA = "0x5769C90", Slot = "40")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$set_AsBool): clean
			return;
		}
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x5763670", Offset = "0x5762670", VA = "0x5763670")]
	public static JSONNull CreateOrGet()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$CreateOrGet): clean
		sbyte cVar1;
		uint uVar2;
		SimpleJSONFixed_JSONNull_StaticFields pSVar3;
		object __this;

		if (Il2CppMethodInitialized_07545129 == false) {
			Il2CppMethodInitialized_07545129 = true;
			uVar2 = (typeof(JSONNull)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(JSONNull)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar3 = typeof(JSONNull).static_fields;
			cVar1 = pSVar3.reuseSameInstance;
		}
		else {
			pSVar3 = (typeof(JSONNull)).static_fields;
			cVar1 = pSVar3.reuseSameInstance;
		}
		if (cVar1 != false) {
			if (((typeof(JSONNull))._2).cctor_finished_or_no_cctor == 0) {
				pSVar3 = typeof(JSONNull).static_fields;
			}
			return pSVar3.m_StaticInstance;
		}
		__this = new JSONNull();
		return (JSONNull)__this;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x5769B90", Offset = "0x5768B90", VA = "0x5769B90")]
	private JSONNull()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754512a == false) {
			Il2CppMethodInitialized_0754512a = true;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x5769C20", Offset = "0x5768C20", VA = "0x5769C20", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$GetEnumerator): 2 lines keep C-only constructs
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

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x5769CA0", Offset = "0x5768CA0", VA = "0x5769CA0", Slot = "26")]
	public override JSONNode Clone()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$Clone): 4 lines keep C-only constructs
		uint uVar1;
		JSONNode pSVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754512c == false) {
			Il2CppMethodInitialized_0754512c = true;
			uVar1 = (typeof(JSONNull)._2).cctor_finished_or_no_cctor;
			klass = typeof(JSONNull);
		}
		else {
			uVar1 = (typeof(JSONNull)._2).cctor_finished_or_no_cctor;
			klass = typeof(JSONNull);
		}
		typeof(JSONNull) = (JSONNull)klass;
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x5769D00", Offset = "0x5768D00", VA = "0x5769D00", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$Equals): 2 lines keep C-only constructs
		byte bVar1;

		if ((object)this == obj) {
			return true;
		}
		if (obj != null) {
			bVar1 = (typeof(JSONNull)._2).typeHierarchyDepth;
			if (bVar1 <= (obj.klass._2).typeHierarchyDepth) {
				return (obj.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(JSONNull);
			}
		}
		return false;
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x5769D80", Offset = "0x5768D80", VA = "0x5769D80", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$GetHashCode): clean
		return 0;
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x5769D90", Offset = "0x5768D90", VA = "0x5769D90", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNull.c (SimpleJSONFixed.JSONNull$$WriteToStringBuilder): clean
		if (aSB == null) {
			throw new NullReferenceException();
		}
		aSB.Append("null");
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/SimpleJSONFixed/JSONNull.c.

	// SimpleJSONFixed.JSONNull$$.cctor: clean
	static JSONNull()
	{
		object __this;

		__this = new JSONNull();
		JSONNull.m_StaticInstance = (JSONNull)__this;
		JSONNull.reuseSameInstance = true;
		return;
	}
}
