// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.NativeDumpFlags
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Burst;

[Token(Token = "0x2000015")]
[Flags]
internal enum NativeDumpFlags
{
	[Token(Token = "0x40000B8")]
	None = 0,
	[Token(Token = "0x40000B9")]
	IL = 1,
	[Token(Token = "0x40000BA")]
	Unused = 2,
	[Token(Token = "0x40000BB")]
	IR = 4,
	[Token(Token = "0x40000BC")]
	IROptimized = 8,
	[Token(Token = "0x40000BD")]
	Asm = 0x10,
	[Token(Token = "0x40000BE")]
	Function = 0x20,
	[Token(Token = "0x40000BF")]
	Analysis = 0x40,
	[Token(Token = "0x40000C0")]
	IRPassAnalysis = 0x80,
	[Token(Token = "0x40000C1")]
	ILPre = 0x100,
	[Token(Token = "0x40000C2")]
	IRPerEntryPoint = 0x200,
	[Token(Token = "0x40000C3")]
	All = IL | IR | IROptimized | Asm | Function | Analysis | IRPassAnalysis | ILPre | IRPerEntryPoint
}
