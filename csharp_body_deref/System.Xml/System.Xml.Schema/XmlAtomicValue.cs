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
		[Address(RVA = "0x6022F10", Offset = "0x6021F10", VA = "0x6022F10")]
		public NamespacePrefixForQName(string prefix, string ns)
		{
		}

		[Token(Token = "0x60014DC")]
		[Address(RVA = "0x6023D20", Offset = "0x6022D20", VA = "0x6023D20", Slot = "5")]
		public string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x60014DD")]
		[Address(RVA = "0x6023D50", Offset = "0x6022D50", VA = "0x6023D50", Slot = "6")]
		public string LookupPrefix(string namespaceName)
		{
			return null;
		}

		[Token(Token = "0x60014DE")]
		[Address(RVA = "0x6023D80", Offset = "0x6022D80", VA = "0x6023D80", Slot = "4")]
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
		[Address(RVA = "0x6023280", Offset = "0x6022280", VA = "0x6023280", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000570")]
	public override Type ValueType
	{
		[Token(Token = "0x60014D0")]
		[Address(RVA = "0x6023290", Offset = "0x6022290", VA = "0x6023290", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000571")]
	public override object TypedValue
	{
		[Token(Token = "0x60014D1")]
		[Address(RVA = "0x60232C0", Offset = "0x60222C0", VA = "0x60232C0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000572")]
	public override bool ValueAsBoolean
	{
		[Token(Token = "0x60014D2")]
		[Address(RVA = "0x60234B0", Offset = "0x60224B0", VA = "0x60234B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000573")]
	public override DateTime ValueAsDateTime
	{
		[Token(Token = "0x60014D3")]
		[Address(RVA = "0x60235B0", Offset = "0x60225B0", VA = "0x60235B0", Slot = "9")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000574")]
	public override double ValueAsDouble
	{
		[Token(Token = "0x60014D4")]
		[Address(RVA = "0x60236B0", Offset = "0x60226B0", VA = "0x60236B0", Slot = "10")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000575")]
	public override int ValueAsInt
	{
		[Token(Token = "0x60014D5")]
		[Address(RVA = "0x60237B0", Offset = "0x60227B0", VA = "0x60237B0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000576")]
	public override long ValueAsLong
	{
		[Token(Token = "0x60014D6")]
		[Address(RVA = "0x60238B0", Offset = "0x60228B0", VA = "0x60238B0", Slot = "12")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000577")]
	public override string Value
	{
		[Token(Token = "0x60014D8")]
		[Address(RVA = "0x6023BE0", Offset = "0x6022BE0", VA = "0x6023BE0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x60228F0", Offset = "0x60218F0", VA = "0x60228F0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, bool value)
	{
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x6022970", Offset = "0x6021970", VA = "0x6022970")]
	internal XmlAtomicValue(XmlSchemaType xmlType, DateTime value)
	{
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x6022A00", Offset = "0x6021A00", VA = "0x6022A00")]
	internal XmlAtomicValue(XmlSchemaType xmlType, double value)
	{
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x6022A90", Offset = "0x6021A90", VA = "0x6022A90")]
	internal XmlAtomicValue(XmlSchemaType xmlType, int value)
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x6022B10", Offset = "0x6021B10", VA = "0x6022B10")]
	internal XmlAtomicValue(XmlSchemaType xmlType, long value)
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x6022BA0", Offset = "0x6021BA0", VA = "0x6022BA0")]
	internal XmlAtomicValue(XmlSchemaType xmlType, string value)
	{
	}

	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x6022C50", Offset = "0x6021C50", VA = "0x6022C50")]
	internal XmlAtomicValue(XmlSchemaType xmlType, string value, IXmlNamespaceResolver nsResolver)
	{
	}

	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x6022F50", Offset = "0x6021F50", VA = "0x6022F50")]
	internal XmlAtomicValue(XmlSchemaType xmlType, object value)
	{
	}

	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x6023000", Offset = "0x6022000", VA = "0x6023000")]
	internal XmlAtomicValue(XmlSchemaType xmlType, object value, IXmlNamespaceResolver nsResolver)
	{
	}

	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x6023270", Offset = "0x6022270", VA = "0x6023270", Slot = "15")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x60014D7")]
	[Address(RVA = "0x60239B0", Offset = "0x60229B0", VA = "0x60239B0", Slot = "14")]
	public override object ValueAs(Type type, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x6023D00", Offset = "0x6022D00", VA = "0x6023D00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x6022E60", Offset = "0x6021E60", VA = "0x6022E60")]
	private string GetPrefixFromQName(string value)
	{
		return null;
	}
}
