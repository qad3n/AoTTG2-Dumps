using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Metadata;

[Token(Token = "0x2000390")]
[AttributeUsage(AttributeTargets.Field)]
[ComVisible(true)]
public sealed class SoapFieldAttribute : SoapAttribute
{
	[Token(Token = "0x4000F21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _elementName;

	[Token(Token = "0x4000F22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _isElement;

	[Token(Token = "0x1700038A")]
	public string XmlElementName
	{
		[Token(Token = "0x6001DD1")]
		[Address(RVA = "0x4E9E780", Offset = "0x4E9E780", VA = "0x4E9E780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DD0")]
	[Address(RVA = "0x4E9E770", Offset = "0x4E9E770", VA = "0x4E9E770")]
	public SoapFieldAttribute()
	{
	}

	[Token(Token = "0x6001DD2")]
	[Address(RVA = "0x4E9E790", Offset = "0x4E9E790", VA = "0x4E9E790")]
	public bool IsInteropXmlElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6001DD3")]
	[Address(RVA = "0x4E9E7A0", Offset = "0x4E9E7A0", VA = "0x4E9E7A0", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
