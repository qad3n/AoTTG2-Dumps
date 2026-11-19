// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LightDelegateCreator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200019E")]
internal sealed class LightDelegateCreator
{
	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x10")]
	private readonly LambdaExpression _lambda;

	[Token(Token = "0x170001D5")]
	internal Interpreter Interpreter
	{
		[Token(Token = "0x60008FC")]
		[Address(RVA = "0x5E07A20", Offset = "0x5E06A20", VA = "0x5E07A20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x5E079E0", Offset = "0x5E069E0", VA = "0x5E079E0")]
	internal LightDelegateCreator(Interpreter interpreter, LambdaExpression lambda)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x5E07A30", Offset = "0x5E06A30", VA = "0x5E07A30")]
	public Delegate CreateDelegate()
	{
		return null;
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x5E07A40", Offset = "0x5E06A40", VA = "0x5E07A40")]
	internal Delegate CreateDelegate(IStrongBox[] closure)
	{
		return null;
	}
}
