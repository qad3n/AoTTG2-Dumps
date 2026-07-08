using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003F2")]
[Flags]
[ComVisible(true)]
public enum StreamingContextStates
{
	[Token(Token = "0x400102F")]
	CrossProcess = 1,
	[Token(Token = "0x4001030")]
	CrossMachine = 2,
	[Token(Token = "0x4001031")]
	File = 4,
	[Token(Token = "0x4001032")]
	Persistence = 8,
	[Token(Token = "0x4001033")]
	Remoting = 0x10,
	[Token(Token = "0x4001034")]
	Other = 0x20,
	[Token(Token = "0x4001035")]
	Clone = 0x40,
	[Token(Token = "0x4001036")]
	CrossAppDomain = 0x80,
	[Token(Token = "0x4001037")]
	All = 0xFF
}
