// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONBool
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONBool.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000053")]
public class JSONBool : JSONNode
{
	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x10")]
	private bool m_Data;

	[Token(Token = "0x17000064")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x57698D0", Offset = "0x57688D0", VA = "0x57698D0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$get_Tag): clean
			return 6;
		}
	}

	[Token(Token = "0x17000065")]
	public override bool IsBoolean
	{
		[Token(Token = "0x600029D")]
		[Address(RVA = "0x57698E0", Offset = "0x57688E0", VA = "0x57698E0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$get_IsBoolean): clean
			return true;
		}
	}

	[Token(Token = "0x17000066")]
	public override string Value
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x5769910", Offset = "0x5768910", VA = "0x5769910", Slot = "9")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$get_Value): clean
			String pSVar1;

			return pSVar1;
		}
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x5769940", Offset = "0x5768940", VA = "0x5769940", Slot = "10")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$set_Value): 4 lines keep C-only constructs
			bool bVar1;
			ulong in_RAX;
			ulong uStack_18;

			uStack_18 = in_RAX & 0xffffffffffffff;
			bVar1 = Boolean.TryParse(value, (bool)((long)&uStack_18 + 7));
			if (bVar1) {
				this.m_Data = uStack_18._7_1_;
			}
			return;
		}
	}

	[Token(Token = "0x17000067")]
	public override bool AsBool
	{
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x5769990", Offset = "0x5768990", VA = "0x5769990", Slot = "39")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$get_AsBool): clean
			return this.m_Data;
		}
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x57699A0", Offset = "0x57689A0", VA = "0x57699A0", Slot = "40")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$set_AsBool): clean
			this.m_Data = value;
			return;
		}
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x57698F0", Offset = "0x57688F0", VA = "0x57698F0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$GetEnumerator): 2 lines keep C-only constructs
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

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x57640F0", Offset = "0x57630F0", VA = "0x57640F0")]
	public JSONBool(bool aData)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$.ctor): clean
		base();
		this.m_Data = aData;
		return;
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x57699B0", Offset = "0x57689B0", VA = "0x57699B0")]
	public JSONBool(string aData)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$.ctor): clean
		base();
		this.set_Value(aData);
		return;
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x5769A20", Offset = "0x5768A20", VA = "0x5769A20", Slot = "26")]
	public override JSONNode Clone()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$Clone): clean
		bool bVar1;
		JSONBool __this_00;

		bVar1 = this.m_Data;
		__this_00 = new JSONBool();
		__this_00.m_Data = bVar1;
		return (JSONNode)__this_00;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x5769AB0", Offset = "0x5768AB0", VA = "0x5769AB0", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$WriteToStringBuilder): 2 lines keep C-only constructs
		String* ppSVar1;

		if (aSB == null) {
			throw new NullReferenceException();
		}
		if (this.m_Data == false) {
			ppSVar1 = &"false";
		}
		else {
			ppSVar1 = &"true";
		}
		aSB.Append(*ppSVar1);
		return;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x5769B20", Offset = "0x5768B20", VA = "0x5769B20", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$Equals): 2 lines keep C-only constructs
		bool bVar1;
		sbyte pcVar2;

		if ((obj == null) || (obj.klass != g_data_075566f0)) {
			return false;
		}
		bVar1 = this.m_Data;
		pcVar2 = il2cpp_vm_Object_Unbox(obj);
		return bVar1 == (bool)*pcVar2;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x5769B50", Offset = "0x5768B50", VA = "0x5769B50", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$GetHashCode): clean
		int iVar1;

		return iVar1;
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x5769B80", Offset = "0x5768B80", VA = "0x5769B80", Slot = "25")]
	public override void Clear()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONBool.c (SimpleJSONFixed.JSONBool$$Clear): clean
		this.m_Data = false;
		return;
	}
}
