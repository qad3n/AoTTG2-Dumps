// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.AppDomainLevelActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x2000387")]
internal class AppDomainLevelActivator : IActivator
{
	[Token(Token = "0x4000F1A")]
	[FieldOffset(Offset = "0x10")]
	private string _activationUrl;

	[Token(Token = "0x4000F1B")]
	[FieldOffset(Offset = "0x18")]
	private IActivator _next;

	[Token(Token = "0x1700037E")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DB7")]
		[Address(RVA = "0x3B82EC0", Offset = "0x3B82EC0", VA = "0x3B82EC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DB6")]
	[Address(RVA = "0x3B828C0", Offset = "0x3B828C0", VA = "0x3B828C0")]
	public AppDomainLevelActivator(string activationUrl, IActivator next)
	{
	}

	[Token(Token = "0x6001DB8")]
	[Address(RVA = "0x3B82ED0", Offset = "0x3B82ED0", VA = "0x3B82ED0", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage ctorCall)
	{
		return null;
	}
}
