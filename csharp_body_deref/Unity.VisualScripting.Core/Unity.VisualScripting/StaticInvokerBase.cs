// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.StaticInvokerBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000167")]
public abstract class StaticInvokerBase : InvokerBase
{
	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x4D46F80", Offset = "0x4D46F80", VA = "0x4D46F80")]
	protected StaticInvokerBase(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x4D47580", Offset = "0x4D47580", VA = "0x4D47580", Slot = "20")]
	protected sealed override void CompileExpression()
	{
	}

	[Token(Token = "0x6000E71")]
	protected abstract void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions);

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x4D47600", Offset = "0x4D47600", VA = "0x4D47600", Slot = "22")]
	protected override void VerifyTarget(object target)
	{
	}
}
