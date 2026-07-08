using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000160")]
public abstract class StaticFunctionInvokerBase<TResult> : StaticInvokerBase
{
	[Token(Token = "0x6000E3E")]
	protected StaticFunctionInvokerBase(MethodInfo methodInfo)
	{
	}
}
