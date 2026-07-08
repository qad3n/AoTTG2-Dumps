using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Token(Token = "0x2000360")]
[ComVisible(true)]
public interface ISponsor
{
	[Token(Token = "0x6001D17")]
	TimeSpan Renewal(ILease lease);
}
