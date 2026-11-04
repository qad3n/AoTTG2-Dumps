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
	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x2E3D260", Offset = "0x2E3B860", VA = "0x182E3D260")]
	protected StaticInvokerBase(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x2E3D130", Offset = "0x2E3B730", VA = "0x182E3D130", Slot = "20")]
	protected sealed override void CompileExpression()
	{
	}

	[Token(Token = "0x6000E7B")]
	protected abstract void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions);

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x2E3D1C0", Offset = "0x2E3B7C0", VA = "0x182E3D1C0", Slot = "22")]
	protected override void VerifyTarget(object target)
	{
	}
}
