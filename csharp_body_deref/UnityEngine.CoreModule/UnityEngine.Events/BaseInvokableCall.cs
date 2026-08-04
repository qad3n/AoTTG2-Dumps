// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.BaseInvokableCall
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.Events;

[Token(Token = "0x20001DF")]
internal abstract class BaseInvokableCall
{
	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x4E11310", Offset = "0x4E11310", VA = "0x4E11310")]
	protected BaseInvokableCall()
	{
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x4E11320", Offset = "0x4E11320", VA = "0x4E11320")]
	protected BaseInvokableCall(object target, MethodInfo function)
	{
	}

	[Token(Token = "0x6000D25")]
	public abstract void Invoke(object[] args);

	[Token(Token = "0x6000D26")]
	protected static void ThrowOnInvalidArg<T>(object arg)
	{
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x4E11410", Offset = "0x4E11410", VA = "0x4E11410")]
	protected static bool AllowInvoke(Delegate @delegate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D28")]
	public abstract bool Find(object targetObj, MethodInfo method);
}
