using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200014E")]
public abstract class InstanceInvokerBase<TTarget> : InvokerBase
{
	[Token(Token = "0x6000DB1")]
	protected InstanceInvokerBase(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DB2")]
	protected sealed override void CompileExpression()
	{
	}

	[Token(Token = "0x6000DB3")]
	protected abstract void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions);

	[Token(Token = "0x6000DB4")]
	protected override void VerifyTarget(object target)
	{
	}
}
