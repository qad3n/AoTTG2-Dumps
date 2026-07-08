using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Principal;

[Serializable]
[Token(Token = "0x200032D")]
[ComVisible(true)]
public enum WindowsAccountType
{
	[Token(Token = "0x4000E3F")]
	Normal,
	[Token(Token = "0x4000E40")]
	Guest,
	[Token(Token = "0x4000E41")]
	System,
	[Token(Token = "0x4000E42")]
	Anonymous
}
