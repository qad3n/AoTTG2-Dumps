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

[Token(Token = "0x20005B1")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Module, AllowMultiple = false)]
[ComVisible(true)]
public sealed class DebuggableAttribute : Attribute
{
	[Token(Token = "0x20005B2")]
	[Flags]
	[ComVisible(true)]
	public enum DebuggingModes
	{
		[Token(Token = "0x4001818")]
		None = 0,
		[Token(Token = "0x4001819")]
		Default = 1,
		[Token(Token = "0x400181A")]
		DisableOptimizations = 0x100,
		[Token(Token = "0x400181B")]
		IgnoreSymbolStoreSequencePoints = 2,
		[Token(Token = "0x400181C")]
		EnableEditAndContinue = 4
	}

	[Token(Token = "0x4001816")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebuggingModes m_debuggingModes;

	[Token(Token = "0x6002B6A")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public DebuggableAttribute(DebuggingModes modes)
	{
	}
}
