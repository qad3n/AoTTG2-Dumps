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

[Token(Token = "0x200039B")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface)]
[ComVisible(true)]
public sealed class SoapTypeAttribute : SoapAttribute
{
	[Token(Token = "0x4000E96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool _useAttribute;

	[Token(Token = "0x4000E97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _xmlElementName;

	[Token(Token = "0x4000E98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _xmlNamespace;

	[Token(Token = "0x4000E99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _xmlTypeName;

	[Token(Token = "0x4000E9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _xmlTypeNamespace;

	[Token(Token = "0x4000E9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool _isType;

	[Token(Token = "0x4000E9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private bool _isElement;

	[Token(Token = "0x1700038E")]
	public override bool UseAttribute
	{
		[Token(Token = "0x6001E1F")]
		[Address(RVA = "0x538C460", Offset = "0x538B460", VA = "0x538C460", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038F")]
	public string XmlElementName
	{
		[Token(Token = "0x6001E20")]
		[Address(RVA = "0x538C470", Offset = "0x538B470", VA = "0x538C470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000390")]
	public override string XmlNamespace
	{
		[Token(Token = "0x6001E21")]
		[Address(RVA = "0x538C480", Offset = "0x538B480", VA = "0x538C480", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000391")]
	public string XmlTypeName
	{
		[Token(Token = "0x6001E22")]
		[Address(RVA = "0x538C490", Offset = "0x538B490", VA = "0x538C490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000392")]
	public string XmlTypeNamespace
	{
		[Token(Token = "0x6001E23")]
		[Address(RVA = "0x538C4A0", Offset = "0x538B4A0", VA = "0x538C4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000393")]
	internal bool IsInteropXmlElement
	{
		[Token(Token = "0x6001E24")]
		[Address(RVA = "0x538C4B0", Offset = "0x538B4B0", VA = "0x538C4B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000394")]
	internal bool IsInteropXmlType
	{
		[Token(Token = "0x6001E25")]
		[Address(RVA = "0x538C4C0", Offset = "0x538B4C0", VA = "0x538C4C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E1E")]
	[Address(RVA = "0x538C450", Offset = "0x538B450", VA = "0x538C450")]
	public SoapTypeAttribute()
	{
	}

	[Token(Token = "0x6001E26")]
	[Address(RVA = "0x538C4D0", Offset = "0x538B4D0", VA = "0x538C4D0", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
