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

[Token(Token = "0x20005E2")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false)]
[ComVisible(true)]
public sealed class DebuggerBrowsableAttribute : Attribute
{
	[Token(Token = "0x4001A05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebuggerBrowsableState state;

	[Token(Token = "0x6002E5E")]
	[Address(RVA = "0x3C7A580", Offset = "0x3C7A580", VA = "0x3C7A580")]
	public DebuggerBrowsableAttribute(DebuggerBrowsableState state)
	{
	}
}
