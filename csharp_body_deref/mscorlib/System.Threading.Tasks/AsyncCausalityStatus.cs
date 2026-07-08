using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000260")]
[System.Runtime.CompilerServices.FriendAccessAllowed]
internal enum AsyncCausalityStatus
{
	[Token(Token = "0x4000B0F")]
	Started,
	[Token(Token = "0x4000B10")]
	Completed,
	[Token(Token = "0x4000B11")]
	Canceled,
	[Token(Token = "0x4000B12")]
	Error
}
