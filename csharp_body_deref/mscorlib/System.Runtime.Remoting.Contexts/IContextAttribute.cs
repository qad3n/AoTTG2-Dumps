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
