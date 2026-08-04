// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.DebuggerTypeProxyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20005E3")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct, AllowMultiple = true)]
public sealed class DebuggerTypeProxyAttribute : Attribute
{
	[Token(Token = "0x4001A06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string typeName;

	[Token(Token = "0x6002E5F")]
	[Address(RVA = "0x3C7A5F0", Offset = "0x3C7A5F0", VA = "0x3C7A5F0")]
	public DebuggerTypeProxyAttribute(Type type)
	{
	}
}
