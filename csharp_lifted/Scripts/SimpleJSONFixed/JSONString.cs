// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONString
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONString.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000051")]
public class JSONString : JSONNode
{
	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x10")]
	private string m_Data;

	[Token(Token = "0x1700005B")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x5768F70", Offset = "0x5767F70", VA = "0x5768F70", Slot = "4")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$get_Tag): clean
			return 3;
		}
	}

	[Token(Token = "0x1700005C")]
	public override bool IsString
	{
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x5768F80", Offset = "0x5767F80", VA = "0x5768F80", Slot = "13")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$get_IsString): clean
			return true;
		}
	}

	[Token(Token = "0x1700005D")]
	public override string Value
	{
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x5768FB0", Offset = "0x5767FB0", VA = "0x5768FB0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$get_Value): clean
			return this.m_Data;
		}
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x5768FC0", Offset = "0x5767FC0", VA = "0x5768FC0", Slot = "10")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$set_Value): clean
			this.m_Data = value;
			return;
		}
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x5768F90", Offset = "0x5767F90", VA = "0x5768F90", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$GetEnumerator): 2 lines keep C-only constructs
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

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x5763600", Offset = "0x5762600", VA = "0x5763600")]
	public JSONString(string aData)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$.ctor): clean
		base();
		this.m_Data = aData;
		return;
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x5768FD0", Offset = "0x5767FD0", VA = "0x5768FD0", Slot = "26")]
	public override JSONNode Clone()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$Clone): clean
		String pSVar1;
		JSONString __this_00;

		pSVar1 = this.m_Data;
		__this_00 = new JSONString();
		__this_00.m_Data = pSVar1;
		return (JSONNode)__this_00;
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x5769070", Offset = "0x5768070", VA = "0x5769070", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$WriteToStringBuilder): 1 lines keep C-only constructs
		StringBuilder pSVar1;
		String pSVar2;
		MethodInfo method_00;

		if (aSB != null) {
			method_00 = (MethodInfo)&g_data_00000022;
			pSVar1 = aSB.Append(0x22);
			pSVar2 = this.m_Data;
			pSVar2 = JSONNode.Escape(pSVar2);
			if (pSVar1 != null) {
				pSVar1 = pSVar1.Append(pSVar2);
				if (pSVar1 != null) {
					pSVar1.Append(0x22);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x5769110", Offset = "0x5768110", VA = "0x5769110", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$Equals): 9 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Il2CppClass pIVar3;
		bool bVar4;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		String a;
		object a_00;

		if (this == (JSONString)obj) {
			return true;
		}
		if (obj == null) {
	label_0586917d: ;
			a_00 = null;
			if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor != 0) goto label_05869197;
	label_0586921e: ;
			method = extraout_RDX_00;
			if (g_data_075450d9 == false) goto label_05869230;
	label_058691a4: ;
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			pIVar3 = obj.klass;
			if (pIVar3 == g_data_07556758) {
				a = this.m_Data;
				goto label_058691e8;
			}
			bVar1 = (typeof(JSONString)._2).typeHierarchyDepth;
			method = (MethodInfo)(ulong)bVar1;
			if ((pIVar3._2).typeHierarchyDepth < bVar1) goto label_0586917d;
			a_00 = null;
			if ((pIVar3._2).typeHierarchy[(long)&method[-1].field_0x57] ==typeof(JSONString)) {
				a_00 = obj;
			}
			if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) goto label_0586921e;
	label_05869197: ;
			if (g_data_075450d9 != false) goto label_058691a4;
	label_05869230: ;
			g_data_075450d9 = true;
			uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			method = extraout_RDX_01;
		}
		if (uVar2 == 0) {
			method = extraout_RDX_02;
		}
		bVar4 = ((JSONNode)a_00 == null) ;
		if (bVar4) {
			return false;
		}
		if (a_00 == null) {
			throw new NullReferenceException();
		}
		a = this.m_Data;
		obj = (object)a_00[1].klass;
	label_058691e8: ;
		bVar4 = (a == (String)obj);
		return bVar4;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x5769270", Offset = "0x5768270", VA = "0x5769270", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$GetHashCode): clean
		String pSVar1;
		int iVar2;

		pSVar1 = this.m_Data;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x57692A0", Offset = "0x57682A0", VA = "0x57692A0", Slot = "25")]
	public override void Clear()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONString.c (SimpleJSONFixed.JSONString$$Clear): clean
		this.m_Data = "";
		return;
	}
}
