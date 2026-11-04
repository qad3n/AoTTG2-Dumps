// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.DebuggerBrowsableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20005B4")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false)]
[ComVisible(true)]
public sealed class DebuggerBrowsableAttribute : Attribute
{
	[Token(Token = "0x4001821")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebuggerBrowsableState state;

	[Token(Token = "0x6002B6B")]
	[Address(RVA = "0x1ABF580", Offset = "0x1ABDB80", VA = "0x181ABF580")]
	public DebuggerBrowsableAttribute(DebuggerBrowsableState state)
	{
	}
}
