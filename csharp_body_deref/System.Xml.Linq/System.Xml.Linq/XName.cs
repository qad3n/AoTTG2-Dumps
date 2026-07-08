using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Serializable]
[Token(Token = "0x200001C")]
public sealed class XName : IEquatable<XName>, ISerializable
{
	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x10")]
	private XNamespace _ns;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x18")]
	private string _localName;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x20")]
	private int _hashCode;

	[Token(Token = "0x1700001D")]
	public string LocalName
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x4344540", Offset = "0x4344540", VA = "0x4344540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public XNamespace Namespace
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x4344550", Offset = "0x4344550", VA = "0x4344550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public string NamespaceName
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x433B550", Offset = "0x433B550", VA = "0x433B550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4344480", Offset = "0x4344480", VA = "0x4344480")]
	internal XName(XNamespace ns, string localName)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4344560", Offset = "0x4344560", VA = "0x4344560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x43445D0", Offset = "0x43445D0", VA = "0x43445D0")]
	public static XName Get(string expandedName)
	{
		return null;
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4344D50", Offset = "0x4344D50", VA = "0x4344D50")]
	public static XName Get(string localName, string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4344D80", Offset = "0x4344D80", VA = "0x4344D80")]
	[CLSCompliant(false)]
	public static implicit operator XName(string expandedName)
	{
		return null;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4344D90", Offset = "0x4344D90", VA = "0x4344D90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4344DA0", Offset = "0x4344DA0", VA = "0x4344DA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x433AE20", Offset = "0x433AE20", VA = "0x433AE20")]
	public static bool operator ==(XName left, XName right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4344DB0", Offset = "0x4344DB0", VA = "0x4344DB0", Slot = "4")]
	private bool System_002EIEquatable_003CSystem_002EXml_002ELinq_002EXName_003E_002EEquals(XName other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4344DC0", Offset = "0x4344DC0", VA = "0x4344DC0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4344E00", Offset = "0x4344E00", VA = "0x4344E00")]
	internal XName()
	{
	}
}
