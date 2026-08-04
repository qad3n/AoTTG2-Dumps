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
		[Address(RVA = "0x471AC60", Offset = "0x471AC60", VA = "0x471AC60")]
		public NamespacePrefixForQName(string prefix, string ns)
		{
		}

		[Token(Token = "0x60014DC")]
		[Address(RVA = "0x471BA70", Offset = "0x471BA70", VA = "0x471BA70", Slot = "5")]
		public string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x60014DD")]
		[Address(RVA = "0x471BAA0", Offset = "0x471BAA0", VA = "0x471BAA0", Slot = "6")]
		public string LookupPrefix(string namespaceName)
		{
			return null;
		}

		[Token(Token = "0x60014DE")]
		[Address(RVA = "0x471BAD0", Offset = "0x471BAD0", VA = "0x471BAD0", Slot = "4")]
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
		[Address(RVA = "0x471AFD0", Offset = "0x471AFD0", VA = "0x471AFD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000570")]
	public override Type ValueType
	{
		[Token(Token = "0x60014D0")]
		[Address(RVA = "0x471AFE0", Offset = "0x471AFE0", VA = "0x471AFE0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000571")]
	public override object TypedValue
	{
		[Token(Token = "0x60014D1")]
		[Address(RVA = "0x471B010", Offset = "0x471B010", VA = "0x471B010", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000572")]
	public override bool ValueAsBoolean
	{
		[Token(Token = "0x60014D2")]
		[Address(RVA = "0x471B200", Offset = "0x471B200", VA = "0x471B200", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000573")]
	public override DateTime ValueAsDateTime
	{
		[Token(Token = "0x60014D3")]
		[Address(RVA = "0x471B300", Offset = "0x471B300", VA = "0x471B300", Slot = "9")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000574")]
	public override double ValueAsDouble
	{
		[Token(Token = "0x60014D4")]
		[Address(RVA = "0x471B400", Offset = "0x471B400", VA = "0x471B400", Slot = "10")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000575")]
	public override int ValueAsInt
	{
		[Token(Token = "0x60014D5")]
		[Address(RVA = "0x471B500", Offset = "0x471B500", VA = "0x471B500", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000576")]
	public override long ValueAsLong
	{
		[Token(Token = "0x60014D6")]
		[Address(RVA = "0x471B600", Offset = "0x471B600", VA = "0x471B600", Slot = "12")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000577")]
	public override string Value
	{
		[Token(Token = "0x60014D8")]
		[Address(RVA = "0x471B930", Offset = "0x471B930", VA = "0x471B930", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x471A640", Offset = "0x471A640", VA = "0x471A640")]
	internal XmlAtomicValue(XmlSchemaType xmlType, bool value)
	{
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x471A6C0", Offset = "0x471A6C0", VA = "0x471A6C0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, DateTime value)
	{
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x471A750", Offset = "0x471A750", VA = "0x471A750")]
	internal XmlAtomicValue(XmlSchemaType xmlType, double value)
	{
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x471A7E0", Offset = "0x471A7E0", VA = "0x471A7E0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, int value)
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x471A860", Offset = "0x471A860", VA = "0x471A860")]
	internal XmlAtomicValue(XmlSchemaType xmlType, long value)
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x471A8F0", Offset = "0x471A8F0", VA = "0x471A8F0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, string value)
	{
	}

	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x471A9A0", Offset = "0x471A9A0", VA = "0x471A9A0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, string value, IXmlNamespaceResolver nsResolver)
	{
	}

	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x471ACA0", Offset = "0x471ACA0", VA = "0x471ACA0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, object value)
	{
	}

	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x471AD50", Offset = "0x471AD50", VA = "0x471AD50")]
	internal XmlAtomicValue(XmlSchemaType xmlType, object value, IXmlNamespaceResolver nsResolver)
	{
	}

	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x471AFC0", Offset = "0x471AFC0", VA = "0x471AFC0", Slot = "15")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x60014D7")]
	[Address(RVA = "0x471B700", Offset = "0x471B700", VA = "0x471B700", Slot = "14")]
	public override object ValueAs(Type type, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x471BA50", Offset = "0x471BA50", VA = "0x471BA50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x471ABB0", Offset = "0x471ABB0", VA = "0x471ABB0")]
	private string GetPrefixFromQName(string value)
	{
		return null;
	}
}
