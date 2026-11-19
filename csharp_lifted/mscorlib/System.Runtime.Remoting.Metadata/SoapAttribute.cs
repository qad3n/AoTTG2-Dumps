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

[Token(Token = "0x2000397")]
[ComVisible(true)]
public class SoapAttribute : Attribute
{
	[Token(Token = "0x4000E8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool _useAttribute;

	[Token(Token = "0x4000E8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected string ProtXmlNamespace;

	[Token(Token = "0x4000E8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected object ReflectInfo;

	[Token(Token = "0x17000389")]
	public virtual bool UseAttribute
	{
		[Token(Token = "0x6001E12")]
		[Address(RVA = "0x538C0D0", Offset = "0x538B0D0", VA = "0x538C0D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038A")]
	public virtual string XmlNamespace
	{
		[Token(Token = "0x6001E13")]
		[Address(RVA = "0x538C0E0", Offset = "0x538B0E0", VA = "0x538C0E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E11")]
	[Address(RVA = "0x538C0C0", Offset = "0x538B0C0", VA = "0x538C0C0")]
	public SoapAttribute()
	{
	}

	[Token(Token = "0x6001E14")]
	[Address(RVA = "0x538C0F0", Offset = "0x538B0F0", VA = "0x538C0F0", Slot = "9")]
	internal virtual void SetReflectionObject(object reflectionObject)
	{
	}
}
