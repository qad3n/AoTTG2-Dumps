using System;
using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.Events;

[Token(Token = "0x20001DC")]
internal abstract class BaseInvokableCall
{
	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x4AE99E0", Offset = "0x4AE99E0", VA = "0x4AE99E0")]
	protected BaseInvokableCall()
	{
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x4AE99F0", Offset = "0x4AE99F0", VA = "0x4AE99F0")]
	protected BaseInvokableCall(object target, MethodInfo function)
	{
	}

	[Token(Token = "0x6000D23")]
	public abstract void Invoke(object[] args);

	[Token(Token = "0x6000D24")]
	protected static void ThrowOnInvalidArg<T>(object arg)
	{
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x4AE9AE0", Offset = "0x4AE9AE0", VA = "0x4AE9AE0")]
	protected static bool AllowInvoke(Delegate @delegate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D26")]
	public abstract bool Find(object targetObj, MethodInfo method);
}
