using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200013F")]
public abstract class InstanceActionInvokerBase<TTarget> : InstanceInvokerBase<TTarget>
{
	[Token(Token = "0x6000D53")]
	protected InstanceActionInvokerBase(MethodInfo methodInfo)
	{
	}
}
