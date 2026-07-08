using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000D1")]
[Flags]
public enum ComputeBufferType
{
	[Token(Token = "0x400021F")]
	Default = 0,
	[Token(Token = "0x4000220")]
	Raw = 1,
	[Token(Token = "0x4000221")]
	Append = 2,
	[Token(Token = "0x4000222")]
	Counter = 4,
	[Token(Token = "0x4000223")]
	Constant = 8,
	[Token(Token = "0x4000224")]
	Structured = 0x10,
	[Token(Token = "0x4000225")]
	[Obsolete("Enum member DrawIndirect has been deprecated. Use IndirectArguments instead (UnityUpgradable) -> IndirectArguments", false)]
	DrawIndirect = 0x100,
	[Token(Token = "0x4000226")]
	IndirectArguments = 0x100,
	[Token(Token = "0x4000227")]
	[Obsolete("Enum member GPUMemory has been deprecated. All compute buffers now follow the behavior previously defined by this member.", false)]
	GPUMemory = 0x200
}
