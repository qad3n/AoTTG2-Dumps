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
		[Address(RVA = "0x4E9EAE0", Offset = "0x4E9EAE0", VA = "0x4E9EAE0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038E")]
	public string XmlElementName
	{
		[Token(Token = "0x6001DDB")]
		[Address(RVA = "0x4E9EAF0", Offset = "0x4E9EAF0", VA = "0x4E9EAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038F")]
	public override string XmlNamespace
	{
		[Token(Token = "0x6001DDC")]
		[Address(RVA = "0x4E9EB00", Offset = "0x4E9EB00", VA = "0x4E9EB00", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000390")]
	public string XmlTypeName
	{
		[Token(Token = "0x6001DDD")]
		[Address(RVA = "0x4E9EB10", Offset = "0x4E9EB10", VA = "0x4E9EB10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000391")]
	public string XmlTypeNamespace
	{
		[Token(Token = "0x6001DDE")]
		[Address(RVA = "0x4E9EB20", Offset = "0x4E9EB20", VA = "0x4E9EB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000392")]
	internal bool IsInteropXmlElement
	{
		[Token(Token = "0x6001DDF")]
		[Address(RVA = "0x4E9EB30", Offset = "0x4E9EB30", VA = "0x4E9EB30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000393")]
	internal bool IsInteropXmlType
	{
		[Token(Token = "0x6001DE0")]
		[Address(RVA = "0x4E9EB40", Offset = "0x4E9EB40", VA = "0x4E9EB40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DD9")]
	[Address(RVA = "0x4E9EAD0", Offset = "0x4E9EAD0", VA = "0x4E9EAD0")]
	public SoapTypeAttribute()
	{
	}

	[Token(Token = "0x6001DE1")]
	[Address(RVA = "0x4E9EB50", Offset = "0x4E9EB50", VA = "0x4E9EB50", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
