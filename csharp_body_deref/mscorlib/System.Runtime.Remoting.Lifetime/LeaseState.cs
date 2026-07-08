using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Serializable]
[Token(Token = "0x2000365")]
[ComVisible(true)]
public enum LeaseState
{
	[Token(Token = "0x4000EE7")]
	Null,
	[Token(Token = "0x4000EE8")]
	Initial,
	[Token(Token = "0x4000EE9")]
	Active,
	[Token(Token = "0x4000EEA")]
	Renewing,
	[Token(Token = "0x4000EEB")]
	Expired
}
