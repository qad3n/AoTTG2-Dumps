// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.CachedInvokableCall
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.Events;

[Token(Token = "0x2000227")]
internal class CachedInvokableCall<T> : InvokableCall<T>
{
	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x0")]
	private readonly T m_Arg1;

	[Token(Token = "0x6001123")]
	public CachedInvokableCall(Object target, MethodInfo theFunction, T argument)
	{
	}

	[Token(Token = "0x6001124")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6001125")]
	public override void Invoke(T arg0)
	{
	}
}
