// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.RemoteActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x20003BD")]
internal class RemoteActivator : MarshalByRefObject, IActivator
{
	[Token(Token = "0x17000389")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001E3A")]
		[Address(RVA = "0x1A065D0", Offset = "0x1A04BD0", VA = "0x181A065D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E39")]
	[Address(RVA = "0x1A062C0", Offset = "0x1A048C0", VA = "0x181A062C0", Slot = "7")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage msg)
	{
		return null;
	}
}
