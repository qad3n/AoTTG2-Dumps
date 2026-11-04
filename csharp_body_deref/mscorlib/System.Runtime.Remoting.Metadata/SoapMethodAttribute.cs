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

[Token(Token = "0x20003C0")]
[AttributeUsage(AttributeTargets.Method)]
[ComVisible(true)]
public sealed class SoapMethodAttribute : SoapAttribute
{
	[Token(Token = "0x4000F30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _responseElement;

	[Token(Token = "0x4000F31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _responseNamespace;

	[Token(Token = "0x4000F32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _returnElement;

	[Token(Token = "0x4000F33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _soapAction;

	[Token(Token = "0x4000F34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _useAttribute;

	[Token(Token = "0x4000F35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string _namespace;

	[Token(Token = "0x1700038D")]
	public override bool UseAttribute
	{
		[Token(Token = "0x6001E44")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038E")]
	public override string XmlNamespace
	{
		[Token(Token = "0x6001E45")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E43")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public SoapMethodAttribute()
	{
	}

	[Token(Token = "0x6001E46")]
	[Address(RVA = "0x1A08B90", Offset = "0x1A07190", VA = "0x181A08B90", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
