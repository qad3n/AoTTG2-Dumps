// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceEventType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x2000107")]
public enum TraceEventType
{
	[Token(Token = "0x4000459")]
	Critical = 1,
	[Token(Token = "0x400045A")]
	Error = 2,
	[Token(Token = "0x400045B")]
	Warning = 4,
	[Token(Token = "0x400045C")]
	Information = 8,
	[Token(Token = "0x400045D")]
	Verbose = 0x10,
	[Token(Token = "0x400045E")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	Start = 0x100,
	[Token(Token = "0x400045F")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	Stop = 0x200,
	[Token(Token = "0x4000460")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	Suspend = 0x400,
	[Token(Token = "0x4000461")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	Resume = 0x800,
	[Token(Token = "0x4000462")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	Transfer = 0x1000
}
