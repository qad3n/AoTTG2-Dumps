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

[Token(Token = "0x2000399")]
[AttributeUsage(AttributeTargets.Method)]
[ComVisible(true)]
public sealed class SoapMethodAttribute : SoapAttribute
{
	[Token(Token = "0x4000E90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _responseElement;

	[Token(Token = "0x4000E91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _responseNamespace;

	[Token(Token = "0x4000E92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _returnElement;

	[Token(Token = "0x4000E93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _soapAction;

	[Token(Token = "0x4000E94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _useAttribute;

	[Token(Token = "0x4000E95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string _namespace;

	[Token(Token = "0x1700038C")]
	public override bool UseAttribute
	{
		[Token(Token = "0x6001E1A")]
		[Address(RVA = "0x538C1F0", Offset = "0x538B1F0", VA = "0x538C1F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038D")]
	public override string XmlNamespace
	{
		[Token(Token = "0x6001E1B")]
		[Address(RVA = "0x538C200", Offset = "0x538B200", VA = "0x538C200", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E19")]
	[Address(RVA = "0x538C1E0", Offset = "0x538B1E0", VA = "0x538C1E0")]
	public SoapMethodAttribute()
	{
	}

	[Token(Token = "0x6001E1C")]
	[Address(RVA = "0x538C210", Offset = "0x538B210", VA = "0x538C210", Slot = "9")]
	internal override void SetReflectionObject(object reflectionObject)
	{
	}
}
