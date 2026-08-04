// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.RemoteActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x200038E")]
internal class RemoteActivator : MarshalByRefObject, IActivator
{
	[Token(Token = "0x17000387")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DCB")]
		[Address(RVA = "0x3B84210", Offset = "0x3B84210", VA = "0x3B84210", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DCA")]
	[Address(RVA = "0x3B83D60", Offset = "0x3B83D60", VA = "0x3B83D60", Slot = "7")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage msg)
	{
		return null;
	}
}
