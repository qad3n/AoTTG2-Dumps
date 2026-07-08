using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000147")]
public abstract class InstanceFunctionInvokerBase<TTarget, TResult> : InstanceInvokerBase<TTarget>
{
	[Token(Token = "0x6000D86")]
	protected InstanceFunctionInvokerBase(MethodInfo methodInfo)
	{
	}
}
