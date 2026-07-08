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
		[Address(RVA = "0x43DD500", Offset = "0x43DD500", VA = "0x43DD500")]
		public NamespacePrefixForQName(string prefix, string ns)
		{
		}

		[Token(Token = "0x60014DC")]
		[Address(RVA = "0x43DE310", Offset = "0x43DE310", VA = "0x43DE310", Slot = "5")]
		public string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x60014DD")]
		[Address(RVA = "0x43DE340", Offset = "0x43DE340", VA = "0x43DE340", Slot = "6")]
		public string LookupPrefix(string namespaceName)
		{
			return null;
		}

		[Token(Token = "0x60014DE")]
		[Address(RVA = "0x43DE370", Offset = "0x43DE370", VA = "0x43DE370", Slot = "4")]
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
		[Address(RVA = "0x43DD870", Offset = "0x43DD870", VA = "0x43DD870", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000570")]
	public override Type ValueType
	{
		[Token(Token = "0x60014D0")]
		[Address(RVA = "0x43DD880", Offset = "0x43DD880", VA = "0x43DD880", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000571")]
	public override object TypedValue
	{
		[Token(Token = "0x60014D1")]
		[Address(RVA = "0x43DD8B0", Offset = "0x43DD8B0", VA = "0x43DD8B0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000572")]
	public override bool ValueAsBoolean
	{
		[Token(Token = "0x60014D2")]
		[Address(RVA = "0x43DDAA0", Offset = "0x43DDAA0", VA = "0x43DDAA0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000573")]
	public override DateTime ValueAsDateTime
	{
		[Token(Token = "0x60014D3")]
		[Address(RVA = "0x43DDBA0", Offset = "0x43DDBA0", VA = "0x43DDBA0", Slot = "9")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000574")]
	public override double ValueAsDouble
	{
		[Token(Token = "0x60014D4")]
		[Address(RVA = "0x43DDCA0", Offset = "0x43DDCA0", VA = "0x43DDCA0", Slot = "10")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000575")]
	public override int ValueAsInt
	{
		[Token(Token = "0x60014D5")]
		[Address(RVA = "0x43DDDA0", Offset = "0x43DDDA0", VA = "0x43DDDA0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000576")]
	public override long ValueAsLong
	{
		[Token(Token = "0x60014D6")]
		[Address(RVA = "0x43DDEA0", Offset = "0x43DDEA0", VA = "0x43DDEA0", Slot = "12")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000577")]
	public override string Value
	{
		[Token(Token = "0x60014D8")]
		[Address(RVA = "0x43DE1D0", Offset = "0x43DE1D0", VA = "0x43DE1D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x43DCEE0", Offset = "0x43DCEE0", VA = "0x43DCEE0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, bool value)
	{
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x43DCF60", Offset = "0x43DCF60", VA = "0x43DCF60")]
	internal XmlAtomicValue(XmlSchemaType xmlType, DateTime value)
	{
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x43DCFF0", Offset = "0x43DCFF0", VA = "0x43DCFF0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, double value)
	{
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x43DD080", Offset = "0x43DD080", VA = "0x43DD080")]
	internal XmlAtomicValue(XmlSchemaType xmlType, int value)
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x43DD100", Offset = "0x43DD100", VA = "0x43DD100")]
	internal XmlAtomicValue(XmlSchemaType xmlType, long value)
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x43DD190", Offset = "0x43DD190", VA = "0x43DD190")]
	internal XmlAtomicValue(XmlSchemaType xmlType, string value)
	{
	}

	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x43DD240", Offset = "0x43DD240", VA = "0x43DD240")]
	internal XmlAtomicValue(XmlSchemaType xmlType, string value, IXmlNamespaceResolver nsResolver)
	{
	}

	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x43DD540", Offset = "0x43DD540", VA = "0x43DD540")]
	internal XmlAtomicValue(XmlSchemaType xmlType, object value)
	{
	}

	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x43DD5F0", Offset = "0x43DD5F0", VA = "0x43DD5F0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, object value, IXmlNamespaceResolver nsResolver)
	{
	}

	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x43DD860", Offset = "0x43DD860", VA = "0x43DD860", Slot = "15")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x60014D7")]
	[Address(RVA = "0x43DDFA0", Offset = "0x43DDFA0", VA = "0x43DDFA0", Slot = "14")]
	public override object ValueAs(Type type, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x43DE2F0", Offset = "0x43DE2F0", VA = "0x43DE2F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x43DD450", Offset = "0x43DD450", VA = "0x43DD450")]
	private string GetPrefixFromQName(string value)
	{
		return null;
	}
}
