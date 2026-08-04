// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Contexts.IContextAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Activation;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x200036E")]
[ComVisible(true)]
public interface IContextAttribute
{
	[Token(Token = "0x6001D6F")]
	void GetPropertiesForNewContext(IConstructionCallMessage msg);

	[Token(Token = "0x6001D70")]
	bool IsContextOK(Context ctx, IConstructionCallMessage msg);
}
