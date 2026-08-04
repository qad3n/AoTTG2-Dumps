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
		[Address(RVA = "0x4694E10", Offset = "0x4694E10", VA = "0x4694E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public XNamespace Namespace
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x4694E20", Offset = "0x4694E20", VA = "0x4694E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public string NamespaceName
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x468BE20", Offset = "0x468BE20", VA = "0x468BE20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4694D50", Offset = "0x4694D50", VA = "0x4694D50")]
	internal XName(XNamespace ns, string localName)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4694E30", Offset = "0x4694E30", VA = "0x4694E30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4694EA0", Offset = "0x4694EA0", VA = "0x4694EA0")]
	public static XName Get(string expandedName)
	{
		return null;
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4695620", Offset = "0x4695620", VA = "0x4695620")]
	public static XName Get(string localName, string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4695650", Offset = "0x4695650", VA = "0x4695650")]
	[CLSCompliant(false)]
	public static implicit operator XName(string expandedName)
	{
		return null;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4695660", Offset = "0x4695660", VA = "0x4695660", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4695670", Offset = "0x4695670", VA = "0x4695670", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x468B6F0", Offset = "0x468B6F0", VA = "0x468B6F0")]
	public static bool operator ==(XName left, XName right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4695680", Offset = "0x4695680", VA = "0x4695680", Slot = "4")]
	private bool System_002EIEquatable_003CSystem_002EXml_002ELinq_002EXName_003E_002EEquals(XName other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4695690", Offset = "0x4695690", VA = "0x4695690", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x46956D0", Offset = "0x46956D0", VA = "0x46956D0")]
	internal XName()
	{
	}
}
