// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONNumber
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONNumber.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000052")]
public class JSONNumber : JSONNode
{
	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x10")]
	private double m_Data;

	[Token(Token = "0x1700005E")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x57692E0", Offset = "0x57682E0", VA = "0x57692E0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$get_Tag): clean
			return 4;
		}
	}

	[Token(Token = "0x1700005F")]
	public override bool IsNumber
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x57692F0", Offset = "0x57682F0", VA = "0x57692F0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$get_IsNumber): clean
			return true;
		}
	}

	[Token(Token = "0x17000060")]
	public override string Value
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x5769320", Offset = "0x5768320", VA = "0x5769320", Slot = "9")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$get_Value): clean
			CultureInfo provider;
			String pSVar1;

			provider = CultureInfo.InvariantCulture;
			pSVar1 = (this.m_Data).ToString((IFormatProvider)provider);
			return pSVar1;
		}
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x5769380", Offset = "0x5768380", VA = "0x5769380", Slot = "10")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$set_Value): clean
			bool bVar1;
			CultureInfo provider;
			JSONNumber SStack_18;

			SStack_18.m_Data = 0.0;
			provider = CultureInfo.InvariantCulture;
			bVar1 = Double.TryParse(value, 0xa7, (IFormatProvider)provider, ref SStack_18.m_Data);
			if (bVar1) {
				this.m_Data = SStack_18.m_Data;
			}
			return;
		}
	}

	[Token(Token = "0x17000061")]
	public override double AsDouble
	{
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x5769400", Offset = "0x5768400", VA = "0x5769400", Slot = "33")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$get_AsDouble): clean
			return this.m_Data;
		}
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x5769410", Offset = "0x5768410", VA = "0x5769410", Slot = "34")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$set_AsDouble): clean
			this.m_Data = value;
			return;
		}
	}

	[Token(Token = "0x17000062")]
	public override long AsLong
	{
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x5769420", Offset = "0x5768420", VA = "0x5769420", Slot = "41")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$get_AsLong): clean
			return (long)this.m_Data;
		}
		[Token(Token = "0x6000291")]
		[Address(RVA = "0x5769430", Offset = "0x5768430", VA = "0x5769430", Slot = "42")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$set_AsLong): clean
			this.m_Data = (double)value;
			return;
		}
	}

	[Token(Token = "0x17000063")]
	public override ulong AsULong
	{
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x5769440", Offset = "0x5768440", VA = "0x5769440", Slot = "43")]
		get
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$get_AsULong): clean
			double dVar1;
			ulong uVar2;

			dVar1 = this.m_Data;
			if (0.0 <= dVar1) {
				uVar2 = (long)(dVar1 - 9.223372036854776e+18) & (long)dVar1 >> 0x3f | (long)dVar1;
			}
			return uVar2;
		}
		[Token(Token = "0x6000293")]
		[Address(RVA = "0x5769480", Offset = "0x5768480", VA = "0x5769480", Slot = "44")]
		set
		{
			// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$set_AsULong): 5 lines keep C-only constructs
			byte[] auVar1 = new byte[16];

			auVar1._8_4_ = (int)(value >> 0x20);
			auVar1._0_8_ = value;
			auVar1._12_4_ = 0x45300000;
			this.m_Data =(auVar1._8_8_ - 1.9342813113834067e+25) +((double)CONCAT44(0x43300000, (int)value) - 4503599627370496.0);
			return;
		}
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x5769300", Offset = "0x5768300", VA = "0x5769300", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$GetEnumerator): 2 lines keep C-only constructs
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

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x5763980", Offset = "0x5762980", VA = "0x5763980")]
	public JSONNumber(double aData)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$.ctor): clean
		base();
		this.m_Data = aData;
		return;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x57694B0", Offset = "0x57684B0", VA = "0x57694B0")]
	public JSONNumber(string aData)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$.ctor): clean
		base();
		this.set_Value(aData);
		return;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x5769520", Offset = "0x5768520", VA = "0x5769520", Slot = "26")]
	public override JSONNode Clone()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$Clone): clean
		double dVar1;
		JSONNumber __this_00;

		dVar1 = this.m_Data;
		__this_00 = new JSONNumber();
		__this_00.m_Data = dVar1;
		return (JSONNode)__this_00;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x57695C0", Offset = "0x57685C0", VA = "0x57695C0", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$WriteToStringBuilder): clean
		String value;

		value = this.get_Value();
		if (aSB == null) {
			throw new NullReferenceException();
		}
		aSB.Append(value);
		return;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x57695F0", Offset = "0x57685F0", VA = "0x57695F0")]
	private static bool IsNumeric(object value)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$IsNumeric): 1 lines keep C-only constructs
		Il2CppClass pIVar1;
		bool bVar2;

		if (value == null) {
			return false;
		}
		pIVar1 = value.klass;
		if ((((((pIVar1 != g_data_07556710) && (pIVar1 != g_data_07556718)) && (pIVar1 != g_data_07556740)) &&((pIVar1 != g_data_07556748 && (pIVar1 != typeof(Decimal))))) &&((pIVar1 != g_data_07556730 && ((pIVar1 != g_data_07556738 && (pIVar1 != g_data_07556700)))))) &&((pIVar1 != g_data_07556708 && (pIVar1 != g_data_075566f8)))) {
			bVar2 = pIVar1 == g_data_075566e0;
		}
		return bVar2;
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x5769680", Offset = "0x5768680", VA = "0x5769680", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$Equals): 9 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		bool bVar3;
		Il2CppClass pIVar4;
		Il2CppClass extraout_RDX;
		Il2CppClass extraout_RDX_00;
		Il2CppClass extraout_RDX_01;
		JSONNumber a;
		double dVar5;

		if (obj == null) {
	label_058697eb: ;
			bVar3 = false;
		}
		else {
			if (this == (JSONNumber)obj) {
				return true;
			}
			pIVar4 = obj.klass;
			bVar1 = (typeof(JSONNumber)._2).typeHierarchyDepth;
			if ((pIVar4._2).typeHierarchyDepth < bVar1) {
				a = null;
				if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor != 0) goto label_0586973a;
	label_05869806: ;
				pIVar4 = extraout_RDX;
				if (g_data_075450d9 != false) goto label_05869747;
	label_05869818: ;
				g_data_075450d9 = true;
				uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
				pIVar4 = extraout_RDX_00;
			}
			else {
				pIVar4 = (Il2CppClass)(pIVar4._2).typeHierarchy;
				a = null;
				if (*(JSONNumber*)((long)(pIVar4.vtable + -0x14) + (ulong)bVar1 * 8) == typeof(JSONNumber)) {
					a = (JSONNumber)obj;
				}
				if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) goto label_05869806;
	label_0586973a: ;
				if (g_data_075450d9 == false) goto label_05869818;
	label_05869747: ;
				uVar2 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				pIVar4 = extraout_RDX_01;
			}
			bVar3 = ((JSONNode)a == null);
			if (bVar3) {
				pIVar4 = obj.klass;
				if ((((((pIVar4 != g_data_07556710) && (pIVar4 != g_data_07556718)) && (pIVar4 != g_data_07556740)) &&((pIVar4 != g_data_07556748 && (pIVar4 != typeof(Decimal))))) &&((pIVar4 != g_data_07556730 && ((pIVar4 != g_data_07556738 && (pIVar4 != g_data_07556700)))))) &&((pIVar4 != g_data_07556708 && ((pIVar4 != g_data_075566f8 && (pIVar4 != g_data_075566e0)))))) goto label_058697eb;
				dVar5 = Convert.ToDouble(obj);
				a = this;
			}
			else {
				if (a == null) {
					throw new NullReferenceException();
				}
				dVar5 = this.m_Data;
			}
			bVar3 = (bool)(-(dVar5 == a.m_Data) & 1);
		}
		return bVar3;
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x5769890", Offset = "0x5768890", VA = "0x5769890", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$GetHashCode): 1 lines keep C-only constructs
		double dVar1;
		double dVar2;

		dVar1 = this.m_Data;
		dVar2 = (double)((ulong)dVar1 & 0x7ff0000000000000);
		if ((-(long)dVar1 & 0x7ff0000000000000U) != 0) {
			dVar2 = dVar1;
		}
		return (uint)((ulong)dVar2 >> 0x20) ^ SUB84(dVar2, 0);
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x57698C0", Offset = "0x57688C0", VA = "0x57698C0", Slot = "25")]
	public override void Clear()
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSONNumber.c (SimpleJSONFixed.JSONNumber$$Clear): clean
		this.m_Data = 0.0;
		return;
	}
}
