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
	[Token(Token = "0x6001102")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected BaseInvokableCall()
	{
	}

	[Token(Token = "0x6001103")]
	[Address(RVA = "0x2F2F3F0", Offset = "0x2F2D9F0", VA = "0x182F2F3F0")]
	protected BaseInvokableCall(object target, MethodInfo function)
	{
	}

	[Token(Token = "0x6001104")]
	public abstract void Invoke(object[] args);

	[Token(Token = "0x6001105")]
	protected static void ThrowOnInvalidArg<T>(object arg)
	{
	}

	[Token(Token = "0x6001106")]
	[Address(RVA = "0x2F2F360", Offset = "0x2F2D960", VA = "0x182F2F360")]
	protected static bool AllowInvoke(Delegate @delegate)
	{
		return default(bool);
	}

	[Token(Token = "0x6001107")]
	public abstract bool Find(object targetObj, MethodInfo method);
}
