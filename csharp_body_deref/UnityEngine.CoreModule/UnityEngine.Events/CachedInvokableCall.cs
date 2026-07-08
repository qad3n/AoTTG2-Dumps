using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.Events;

[Token(Token = "0x20001E2")]
internal class CachedInvokableCall<T> : InvokableCall<T>
{
	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x0")]
	private readonly T m_Arg1;

	[Token(Token = "0x6000D42")]
	public CachedInvokableCall(Object target, MethodInfo theFunction, T argument)
	{
	}

	[Token(Token = "0x6000D43")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D44")]
	public override void Invoke(T arg0)
	{
	}
}
