using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000167")]
public abstract class StaticInvokerBase : InvokerBase
{
	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x4A223B0", Offset = "0x4A223B0", VA = "0x4A223B0")]
	protected StaticInvokerBase(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x4A229B0", Offset = "0x4A229B0", VA = "0x4A229B0", Slot = "20")]
	protected sealed override void CompileExpression()
	{
	}

	[Token(Token = "0x6000E71")]
	protected abstract void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions);

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x4A22A30", Offset = "0x4A22A30", VA = "0x4A22A30", Slot = "22")]
	protected override void VerifyTarget(object target)
	{
	}
}
