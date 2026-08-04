// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InstanceInvokerBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200014C")]
public abstract class InstanceInvokerBase<TTarget> : InvokerBase
{
	[Token(Token = "0x6000DA6")]
	protected InstanceInvokerBase(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DA7")]
	protected sealed override void CompileExpression()
	{
	}

	[Token(Token = "0x6000DA8")]
	protected abstract void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions);

	[Token(Token = "0x6000DA9")]
	protected override void VerifyTarget(object target)
	{
	}
}
