// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlAtomicValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000208")]
public sealed class XmlAtomicValue : XPathItem, ICloneable
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x2000209")]
	private struct Union
	{
		[Token(Token = "0x4000AE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool boolVal;

		[Token(Token = "0x4000AE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public double dblVal;

		[Token(Token = "0x4000AE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public long i64Val;

		[Token(Token = "0x4000AE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int i32Val;

		[Token(Token = "0x4000AE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DateTime dtVal;
	}

	[Token(Token = "0x200020A")]
	private class NamespacePrefixForQName : IXmlNamespaceResolver
	{
		[Token(Token = "0x4000AE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string prefix;

		[Token(Token = "0x4000AE9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string ns;

		[Token(Token = "0x60014DB")]
		[Address(RVA = "0x2655830", Offset = "0x2653E30", VA = "0x182655830")]
		public NamespacePrefixForQName(string prefix, string ns)
		{
		}

		[Token(Token = "0x60014DC")]
		[Address(RVA = "0x26557C0", Offset = "0x2653DC0", VA = "0x1826557C0", Slot = "5")]
		public string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x60014DD")]
		[Address(RVA = "0x2655800", Offset = "0x2653E00", VA = "0x182655800", Slot = "6")]
		public string LookupPrefix(string namespaceName)
		{
			return null;
		}

		[Token(Token = "0x60014DE")]
		[Address(RVA = "0x2655720", Offset = "0x2653D20", VA = "0x182655720", Slot = "4")]
		public IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
		{
			return null;
		}
	}

	[Token(Token = "0x4000ADE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private XmlSchemaType xmlType;

	[Token(Token = "0x4000ADF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object objVal;

	[Token(Token = "0x4000AE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TypeCode clrType;

	[Token(Token = "0x4000AE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Union unionVal;

	[Token(Token = "0x4000AE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private NamespacePrefixForQName nsPrefix;

	[Token(Token = "0x1700056F")]
	public override XmlSchemaType XmlType
	{
		[Token(Token = "0x60014CF")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000570")]
	public override Type ValueType
	{
		[Token(Token = "0x60014D0")]
		[Address(RVA = "0x2665350", Offset = "0x2663950", VA = "0x182665350", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000571")]
	public override object TypedValue
	{
		[Token(Token = "0x60014D1")]
		[Address(RVA = "0x2664C60", Offset = "0x2663260", VA = "0x182664C60", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000572")]
	public override bool ValueAsBoolean
	{
		[Token(Token = "0x60014D2")]
		[Address(RVA = "0x2664E50", Offset = "0x2663450", VA = "0x182664E50", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000573")]
	public override DateTime ValueAsDateTime
	{
		[Token(Token = "0x60014D3")]
		[Address(RVA = "0x2664F50", Offset = "0x2663550", VA = "0x182664F50", Slot = "9")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000574")]
	public override double ValueAsDouble
	{
		[Token(Token = "0x60014D4")]
		[Address(RVA = "0x2665050", Offset = "0x2663650", VA = "0x182665050", Slot = "10")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000575")]
	public override int ValueAsInt
	{
		[Token(Token = "0x60014D5")]
		[Address(RVA = "0x2665150", Offset = "0x2663750", VA = "0x182665150", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000576")]
	public override long ValueAsLong
	{
		[Token(Token = "0x60014D6")]
		[Address(RVA = "0x2665250", Offset = "0x2663850", VA = "0x182665250", Slot = "12")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000577")]
	public override string Value
	{
		[Token(Token = "0x60014D8")]
		[Address(RVA = "0x2665390", Offset = "0x2663990", VA = "0x182665390", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x26642F0", Offset = "0x26628F0", VA = "0x1826642F0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, bool value)
	{
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x2664B20", Offset = "0x2663120", VA = "0x182664B20")]
	internal XmlAtomicValue(XmlSchemaType xmlType, DateTime value)
	{
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x2664BC0", Offset = "0x26631C0", VA = "0x182664BC0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, double value)
	{
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x2664760", Offset = "0x2662D60", VA = "0x182664760")]
	internal XmlAtomicValue(XmlSchemaType xmlType, int value)
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x26646C0", Offset = "0x2662CC0", VA = "0x1826646C0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, long value)
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x2664A30", Offset = "0x2663030", VA = "0x182664A30")]
	internal XmlAtomicValue(XmlSchemaType xmlType, string value)
	{
	}

	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x2664480", Offset = "0x2662A80", VA = "0x182664480")]
	internal XmlAtomicValue(XmlSchemaType xmlType, string value, IXmlNamespaceResolver nsResolver)
	{
	}

	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x2664390", Offset = "0x2662990", VA = "0x182664390")]
	internal XmlAtomicValue(XmlSchemaType xmlType, object value)
	{
	}

	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x2664800", Offset = "0x2662E00", VA = "0x182664800")]
	internal XmlAtomicValue(XmlSchemaType xmlType, object value, IXmlNamespaceResolver nsResolver)
	{
	}

	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "15")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x60014D7")]
	[Address(RVA = "0x26640D0", Offset = "0x26626D0", VA = "0x1826640D0", Slot = "14")]
	public override object ValueAs(Type type, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x21B8EA0", Offset = "0x21B74A0", VA = "0x1821B8EA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x2664020", Offset = "0x2662620", VA = "0x182664020")]
	private string GetPrefixFromQName(string value)
	{
		return null;
	}
}
