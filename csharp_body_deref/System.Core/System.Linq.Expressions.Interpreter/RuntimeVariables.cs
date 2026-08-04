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

[Token(Token = "0x200021B")]
internal sealed class RuntimeVariables : IRuntimeVariables
{
	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x10")]
	private readonly IStrongBox[] _boxes;

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x4502240", Offset = "0x4502240", VA = "0x4502240")]
	private RuntimeVariables(IStrongBox[] boxes)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x44F76B0", Offset = "0x44F76B0", VA = "0x44F76B0")]
	internal static IRuntimeVariables Create(IStrongBox[] boxes)
	{
		return null;
	}
}
