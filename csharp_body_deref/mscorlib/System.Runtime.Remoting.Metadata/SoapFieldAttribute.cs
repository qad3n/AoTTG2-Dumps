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

[Token(Token = "0x20003BF")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Field)]
public sealed class SoapFieldAttribute : SoapAttribute
{
	[Token(Token = "0x4000F2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _elementName;

	[Token(Token = "0x4000F2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _isElement;

	[Token(Token = "0x1700038C")]
	public string XmlElementName
	{
		[Token(Token = "0x6001E40")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E3F")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public SoapFieldAttribute()
	{
	}

	[Token(Token = "0x6001E41")]
	[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
	public bool IsInteropXmlElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6001E42")]
	[Address(RVA = "0x1A08AE0", Offset = "0x1A070E0", VA = "0x181A08AE0", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
