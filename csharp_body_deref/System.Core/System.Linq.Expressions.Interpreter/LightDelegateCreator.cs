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
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x19DB2A0", Offset = "0x19D98A0", VA = "0x1819DB2A0")]
	internal LightDelegateCreator(Interpreter interpreter, LambdaExpression lambda)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x2470960", Offset = "0x246EF60", VA = "0x182470960")]
	public Delegate CreateDelegate()
	{
		return null;
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x2470970", Offset = "0x246EF70", VA = "0x182470970")]
	internal Delegate CreateDelegate(IStrongBox[] closure)
	{
		return null;
	}
}
