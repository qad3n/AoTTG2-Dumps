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

[Token(Token = "0x20003C2")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface)]
[ComVisible(true)]
public sealed class SoapTypeAttribute : SoapAttribute
{
	[Token(Token = "0x4000F36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool _useAttribute;

	[Token(Token = "0x4000F37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _xmlElementName;

	[Token(Token = "0x4000F38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _xmlNamespace;

	[Token(Token = "0x4000F39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _xmlTypeName;

	[Token(Token = "0x4000F3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _xmlTypeNamespace;

	[Token(Token = "0x4000F3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool _isType;

	[Token(Token = "0x4000F3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private bool _isElement;

	[Token(Token = "0x1700038F")]
	public override bool UseAttribute
	{
		[Token(Token = "0x6001E49")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000390")]
	public string XmlElementName
	{
		[Token(Token = "0x6001E4A")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000391")]
	public override string XmlNamespace
	{
		[Token(Token = "0x6001E4B")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000392")]
	public string XmlTypeName
	{
		[Token(Token = "0x6001E4C")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000393")]
	public string XmlTypeNamespace
	{
		[Token(Token = "0x6001E4D")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000394")]
	internal bool IsInteropXmlElement
	{
		[Token(Token = "0x6001E4E")]
		[Address(RVA = "0x1A08FC0", Offset = "0x1A075C0", VA = "0x181A08FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000395")]
	internal bool IsInteropXmlType
	{
		[Token(Token = "0x6001E4F")]
		[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E48")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public SoapTypeAttribute()
	{
	}

	[Token(Token = "0x6001E50")]
	[Address(RVA = "0x1A08D90", Offset = "0x1A07390", VA = "0x181A08D90", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
