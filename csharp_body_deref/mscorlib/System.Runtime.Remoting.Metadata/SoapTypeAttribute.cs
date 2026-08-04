// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Metadata.SoapTypeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Metadata;

[Token(Token = "0x2000393")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface)]
[ComVisible(true)]
public sealed class SoapTypeAttribute : SoapAttribute
{
	[Token(Token = "0x4000F29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool _useAttribute;

	[Token(Token = "0x4000F2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _xmlElementName;

	[Token(Token = "0x4000F2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _xmlNamespace;

	[Token(Token = "0x4000F2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _xmlTypeName;

	[Token(Token = "0x4000F2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _xmlTypeNamespace;

	[Token(Token = "0x4000F2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool _isType;

	[Token(Token = "0x4000F2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private bool _isElement;

	[Token(Token = "0x1700038D")]
	public override bool UseAttribute
	{
		[Token(Token = "0x6001DDA")]
		[Address(RVA = "0x3B84600", Offset = "0x3B84600", VA = "0x3B84600", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038E")]
	public string XmlElementName
	{
		[Token(Token = "0x6001DDB")]
		[Address(RVA = "0x3B84610", Offset = "0x3B84610", VA = "0x3B84610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038F")]
	public override string XmlNamespace
	{
		[Token(Token = "0x6001DDC")]
		[Address(RVA = "0x3B84620", Offset = "0x3B84620", VA = "0x3B84620", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000390")]
	public string XmlTypeName
	{
		[Token(Token = "0x6001DDD")]
		[Address(RVA = "0x3B84630", Offset = "0x3B84630", VA = "0x3B84630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000391")]
	public string XmlTypeNamespace
	{
		[Token(Token = "0x6001DDE")]
		[Address(RVA = "0x3B84640", Offset = "0x3B84640", VA = "0x3B84640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000392")]
	internal bool IsInteropXmlElement
	{
		[Token(Token = "0x6001DDF")]
		[Address(RVA = "0x3B84650", Offset = "0x3B84650", VA = "0x3B84650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000393")]
	internal bool IsInteropXmlType
	{
		[Token(Token = "0x6001DE0")]
		[Address(RVA = "0x3B84660", Offset = "0x3B84660", VA = "0x3B84660")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DD9")]
	[Address(RVA = "0x3B845F0", Offset = "0x3B845F0", VA = "0x3B845F0")]
	public SoapTypeAttribute()
	{
	}

	[Token(Token = "0x6001DE1")]
	[Address(RVA = "0x3B84670", Offset = "0x3B84670", VA = "0x3B84670", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
