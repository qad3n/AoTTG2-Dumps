using Il2CppDummyDll;

namespace System.Runtime.ConstrainedExecution;

[Token(Token = "0x200045F")]
public enum Consistency
{
	[Token(Token = "0x40012EA")]
	MayCorruptProcess,
	[Token(Token = "0x40012EB")]
	MayCorruptAppDomain,
	[Token(Token = "0x40012EC")]
	MayCorruptInstance,
	[Token(Token = "0x40012ED")]
	WillNotCorruptState
}
