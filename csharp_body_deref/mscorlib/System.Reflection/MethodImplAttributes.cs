using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004E7")]
public enum MethodImplAttributes
{
	[Token(Token = "0x4001429")]
	CodeTypeMask = 3,
	[Token(Token = "0x400142A")]
	IL = 0,
	[Token(Token = "0x400142B")]
	Native = 1,
	[Token(Token = "0x400142C")]
	OPTIL = 2,
	[Token(Token = "0x400142D")]
	Runtime = 3,
	[Token(Token = "0x400142E")]
	ManagedMask = 4,
	[Token(Token = "0x400142F")]
	Unmanaged = 4,
	[Token(Token = "0x4001430")]
	Managed = 0,
	[Token(Token = "0x4001431")]
	ForwardRef = 16,
	[Token(Token = "0x4001432")]
	PreserveSig = 128,
	[Token(Token = "0x4001433")]
	InternalCall = 4096,
	[Token(Token = "0x4001434")]
	Synchronized = 32,
	[Token(Token = "0x4001435")]
	NoInlining = 8,
	[Token(Token = "0x4001436")]
	AggressiveInlining = 256,
	[Token(Token = "0x4001437")]
	NoOptimization = 64,
	[Token(Token = "0x4001438")]
	MaxMethodImplVal = 65535,
	[Token(Token = "0x4001439")]
	SecurityMitigations = 1024
}
