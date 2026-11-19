// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.RuntimeVariables
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021C")]
internal sealed class RuntimeVariables : IRuntimeVariables
{
	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x10")]
	private readonly IStrongBox[] _boxes;

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x5E17550", Offset = "0x5E16550", VA = "0x5E17550")]
	private RuntimeVariables(IStrongBox[] boxes)
	{
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x5E0CA30", Offset = "0x5E0BA30", VA = "0x5E0CA30")]
	internal static IRuntimeVariables Create(IStrongBox[] boxes)
	{
		return null;
	}
}
