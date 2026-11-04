// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Metadata.SoapAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Metadata;

[Token(Token = "0x20003BE")]
[ComVisible(true)]
public class SoapAttribute : Attribute
{
	[Token(Token = "0x4000F2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool _useAttribute;

	[Token(Token = "0x4000F2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected string ProtXmlNamespace;

	[Token(Token = "0x4000F2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected object ReflectInfo;

	[Token(Token = "0x1700038A")]
	public virtual bool UseAttribute
	{
		[Token(Token = "0x6001E3C")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038B")]
	public virtual string XmlNamespace
	{
		[Token(Token = "0x6001E3D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E3B")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public SoapAttribute()
	{
	}

	[Token(Token = "0x6001E3E")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "9")]
	internal virtual void SetReflectionObject(object reflectionObject)
	{
	}
}
