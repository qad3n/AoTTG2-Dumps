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

[Token(Token = "0x2000398")]
[AttributeUsage(AttributeTargets.Field)]
[ComVisible(true)]
public sealed class SoapFieldAttribute : SoapAttribute
{
	[Token(Token = "0x4000E8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _elementName;

	[Token(Token = "0x4000E8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _isElement;

	[Token(Token = "0x1700038B")]
	public string XmlElementName
	{
		[Token(Token = "0x6001E16")]
		[Address(RVA = "0x538C110", Offset = "0x538B110", VA = "0x538C110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E15")]
	[Address(RVA = "0x538C100", Offset = "0x538B100", VA = "0x538C100")]
	public SoapFieldAttribute()
	{
	}

	[Token(Token = "0x6001E17")]
	[Address(RVA = "0x538C120", Offset = "0x538B120", VA = "0x538C120")]
	public bool IsInteropXmlElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6001E18")]
	[Address(RVA = "0x538C130", Offset = "0x538B130", VA = "0x538C130", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
