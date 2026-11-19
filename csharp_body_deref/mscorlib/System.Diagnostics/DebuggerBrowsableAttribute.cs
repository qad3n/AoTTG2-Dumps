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

[Token(Token = "0x200058F")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false)]
public sealed class DebuggerBrowsableAttribute : Attribute
{
	[Token(Token = "0x4001788")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebuggerBrowsableState state;

	[Token(Token = "0x6002B4A")]
	[Address(RVA = "0x544D600", Offset = "0x544C600", VA = "0x544D600")]
	public DebuggerBrowsableAttribute(DebuggerBrowsableState state)
	{
	}
}
