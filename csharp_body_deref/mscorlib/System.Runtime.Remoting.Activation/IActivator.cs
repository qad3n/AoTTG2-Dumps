// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.IActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x2000392")]
[ComVisible(true)]
public interface IActivator
{
	[Token(Token = "0x17000382")]
	IActivator NextActivator
	{
		[Token(Token = "0x6001E04")]
		get;
	}

	[Token(Token = "0x6001E05")]
	IConstructionReturnMessage Activate(IConstructionCallMessage msg);
}
