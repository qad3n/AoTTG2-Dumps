using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Metadata;

[Token(Token = "0x2000391")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Method)]
public sealed class SoapMethodAttribute : SoapAttribute
{
	[Token(Token = "0x4000F23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _responseElement;

	[Token(Token = "0x4000F24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _responseNamespace;

	[Token(Token = "0x4000F25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _returnElement;

	[Token(Token = "0x4000F26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _soapAction;

	[Token(Token = "0x4000F27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _useAttribute;

	[Token(Token = "0x4000F28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string _namespace;

	[Token(Token = "0x1700038B")]
	public override bool UseAttribute
	{
		[Token(Token = "0x6001DD5")]
		[Address(RVA = "0x4E9E860", Offset = "0x4E9E860", VA = "0x4E9E860", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038C")]
	public override string XmlNamespace
	{
		[Token(Token = "0x6001DD6")]
		[Address(RVA = "0x4E9E870", Offset = "0x4E9E870", VA = "0x4E9E870", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DD4")]
	[Address(RVA = "0x4E9E850", Offset = "0x4E9E850", VA = "0x4E9E850")]
	public SoapMethodAttribute()
	{
	}

	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x4E9E880", Offset = "0x4E9E880", VA = "0x4E9E880", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
