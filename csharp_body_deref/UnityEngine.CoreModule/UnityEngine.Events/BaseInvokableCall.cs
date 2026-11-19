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

[Token(Token = "0x2000221")]
internal abstract class BaseInvokableCall
{
	[Token(Token = "0x6001116")]
	[Address(RVA = "0x69331A0", Offset = "0x69321A0", VA = "0x69331A0")]
	protected BaseInvokableCall()
	{
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x69331B0", Offset = "0x69321B0", VA = "0x69331B0")]
	protected BaseInvokableCall(object target, MethodInfo function)
	{
	}

	[Token(Token = "0x6001118")]
	public abstract void Invoke(object[] args);

	[Token(Token = "0x6001119")]
	protected static void ThrowOnInvalidArg<T>(object arg)
	{
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x69332A0", Offset = "0x69322A0", VA = "0x69332A0")]
	protected static bool AllowInvoke(Delegate @delegate)
	{
		return default(bool);
	}

	[Token(Token = "0x600111B")]
	public abstract bool Find(object targetObj, MethodInfo method);
}
