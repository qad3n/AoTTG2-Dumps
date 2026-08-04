// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Metadata.SoapFieldAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B842A0", Offset = "0x3B842A0", VA = "0x3B842A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DD0")]
	[Address(RVA = "0x3B84290", Offset = "0x3B84290", VA = "0x3B84290")]
	public SoapFieldAttribute()
	{
	}

	[Token(Token = "0x6001DD2")]
	[Address(RVA = "0x3B842B0", Offset = "0x3B842B0", VA = "0x3B842B0")]
	public bool IsInteropXmlElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6001DD3")]
	[Address(RVA = "0x3B842C0", Offset = "0x3B842C0", VA = "0x3B842C0", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
