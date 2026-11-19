// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.DebuggableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x200058C")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Module, AllowMultiple = false)]
public sealed class DebuggableAttribute : Attribute
{
	[Token(Token = "0x200058D")]
	[ComVisible(true)]
	[Flags]
	public enum DebuggingModes
	{
		[Token(Token = "0x400177F")]
		None = 0,
		[Token(Token = "0x4001780")]
		Default = 1,
		[Token(Token = "0x4001781")]
		DisableOptimizations = 0x100,
		[Token(Token = "0x4001782")]
		IgnoreSymbolStoreSequencePoints = 2,
		[Token(Token = "0x4001783")]
		EnableEditAndContinue = 4
	}

	[Token(Token = "0x400177D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebuggingModes m_debuggingModes;

	[Token(Token = "0x6002B49")]
	[Address(RVA = "0x544D5E0", Offset = "0x544C5E0", VA = "0x544D5E0")]
	public DebuggableAttribute(DebuggingModes modes)
	{
	}
}
