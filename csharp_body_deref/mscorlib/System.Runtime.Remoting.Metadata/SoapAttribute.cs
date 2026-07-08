using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Metadata;

[Token(Token = "0x200038F")]
[ComVisible(true)]
public class SoapAttribute : Attribute
{
	[Token(Token = "0x4000F1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool _useAttribute;

	[Token(Token = "0x4000F1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected string ProtXmlNamespace;

	[Token(Token = "0x4000F20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected object ReflectInfo;

	[Token(Token = "0x17000388")]
	public virtual bool UseAttribute
	{
		[Token(Token = "0x6001DCD")]
		[Address(RVA = "0x4E9E740", Offset = "0x4E9E740", VA = "0x4E9E740", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000389")]
	public virtual string XmlNamespace
	{
		[Token(Token = "0x6001DCE")]
		[Address(RVA = "0x4E9E750", Offset = "0x4E9E750", VA = "0x4E9E750", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DCC")]
	[Address(RVA = "0x4E9E730", Offset = "0x4E9E730", VA = "0x4E9E730")]
	public SoapAttribute()
	{
	}

	[Token(Token = "0x6001DCF")]
	[Address(RVA = "0x4E9E760", Offset = "0x4E9E760", VA = "0x4E9E760", Slot = "9")]
	internal virtual void SetReflectionObject(object reflectionObject)
	{
	}
}
