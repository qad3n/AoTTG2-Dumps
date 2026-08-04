// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Metadata.SoapMethodAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B84380", Offset = "0x3B84380", VA = "0x3B84380", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038C")]
	public override string XmlNamespace
	{
		[Token(Token = "0x6001DD6")]
		[Address(RVA = "0x3B84390", Offset = "0x3B84390", VA = "0x3B84390", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DD4")]
	[Address(RVA = "0x3B84370", Offset = "0x3B84370", VA = "0x3B84370")]
	public SoapMethodAttribute()
	{
	}

	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x3B843A0", Offset = "0x3B843A0", VA = "0x3B843A0", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
