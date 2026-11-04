// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.AppDomainLevelActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x20003B6")]
internal class AppDomainLevelActivator : IActivator
{
	[Token(Token = "0x4000F27")]
	[FieldOffset(Offset = "0x10")]
	private string _activationUrl;

	[Token(Token = "0x4000F28")]
	[FieldOffset(Offset = "0x18")]
	private IActivator _next;

	[Token(Token = "0x17000380")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001E26")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E25")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public AppDomainLevelActivator(string activationUrl, IActivator next)
	{
	}

	[Token(Token = "0x6001E27")]
	[Address(RVA = "0x19ED280", Offset = "0x19EB880", VA = "0x1819ED280", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage ctorCall)
	{
		return null;
	}
}
