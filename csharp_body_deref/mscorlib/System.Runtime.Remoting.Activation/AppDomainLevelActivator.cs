// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.AppDomainLevelActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x200038F")]
internal class AppDomainLevelActivator : IActivator
{
	[Token(Token = "0x4000E87")]
	[FieldOffset(Offset = "0x10")]
	private string _activationUrl;

	[Token(Token = "0x4000E88")]
	[FieldOffset(Offset = "0x18")]
	private IActivator _next;

	[Token(Token = "0x1700037F")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DFC")]
		[Address(RVA = "0x538AD90", Offset = "0x5389D90", VA = "0x538AD90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DFB")]
	[Address(RVA = "0x538A790", Offset = "0x5389790", VA = "0x538A790")]
	public AppDomainLevelActivator(string activationUrl, IActivator next)
	{
	}

	[Token(Token = "0x6001DFD")]
	[Address(RVA = "0x538ADA0", Offset = "0x5389DA0", VA = "0x538ADA0", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage ctorCall)
	{
		return null;
	}
}
