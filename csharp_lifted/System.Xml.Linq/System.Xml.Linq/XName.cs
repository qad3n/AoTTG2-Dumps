// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5FA6CA0", Offset = "0x5FA5CA0", VA = "0x5FA6CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public XNamespace Namespace
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x5FA6CB0", Offset = "0x5FA5CB0", VA = "0x5FA6CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public string NamespaceName
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x5F9DF10", Offset = "0x5F9CF10", VA = "0x5F9DF10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x5FA6BE0", Offset = "0x5FA5BE0", VA = "0x5FA6BE0")]
	internal XName(XNamespace ns, string localName)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x5FA6CC0", Offset = "0x5FA5CC0", VA = "0x5FA6CC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x5FA6D30", Offset = "0x5FA5D30", VA = "0x5FA6D30")]
	public static XName Get(string expandedName)
	{
		return null;
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x5FA73E0", Offset = "0x5FA63E0", VA = "0x5FA73E0")]
	public static XName Get(string localName, string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x5FA7410", Offset = "0x5FA6410", VA = "0x5FA7410")]
	[CLSCompliant(false)]
	public static implicit operator XName(string expandedName)
	{
		return null;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x5FA7420", Offset = "0x5FA6420", VA = "0x5FA7420", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x5FA7430", Offset = "0x5FA6430", VA = "0x5FA7430", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x5F9D880", Offset = "0x5F9C880", VA = "0x5F9D880")]
	public static bool operator ==(XName left, XName right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x5FA7440", Offset = "0x5FA6440", VA = "0x5FA7440", Slot = "4")]
	private bool System_002EIEquatable_003CSystem_002EXml_002ELinq_002EXName_003E_002EEquals(XName other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x5FA7450", Offset = "0x5FA6450", VA = "0x5FA7450", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x5FA7490", Offset = "0x5FA6490", VA = "0x5FA7490")]
	internal XName()
	{
	}
}
