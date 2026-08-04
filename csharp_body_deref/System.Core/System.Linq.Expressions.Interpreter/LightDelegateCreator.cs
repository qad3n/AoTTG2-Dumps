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

[Token(Token = "0x200019D")]
internal sealed class LightDelegateCreator
{
	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x10")]
	private readonly LambdaExpression _lambda;

	[Token(Token = "0x170001D3")]
	internal Interpreter Interpreter
	{
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x44F2340", Offset = "0x44F2340", VA = "0x44F2340")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x44F2300", Offset = "0x44F2300", VA = "0x44F2300")]
	internal LightDelegateCreator(Interpreter interpreter, LambdaExpression lambda)
	{
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x44F2350", Offset = "0x44F2350", VA = "0x44F2350")]
	public Delegate CreateDelegate()
	{
		return null;
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x44F2360", Offset = "0x44F2360", VA = "0x44F2360")]
	internal Delegate CreateDelegate(IStrongBox[] closure)
	{
		return null;
	}
}
