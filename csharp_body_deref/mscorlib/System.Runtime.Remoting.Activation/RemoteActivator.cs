// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.RemoteActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x2000396")]
internal class RemoteActivator : MarshalByRefObject, IActivator
{
	[Token(Token = "0x17000388")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001E10")]
		[Address(RVA = "0x538C080", Offset = "0x538B080", VA = "0x538C080", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E0F")]
	[Address(RVA = "0x538BBD0", Offset = "0x538ABD0", VA = "0x538BBD0", Slot = "7")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage msg)
	{
		return null;
	}
}
