// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.InvokableCall
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Events;

[Token(Token = "0x20001E0")]
internal class InvokableCall : BaseInvokableCall
{
	[Token(Token = "0x14000005")]
	private event UnityAction Delegate
	{
		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x4E114A0", Offset = "0x4E114A0", VA = "0x4E114A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000D2A")]
		[Address(RVA = "0x4E11530", Offset = "0x4E11530", VA = "0x4E11530")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x4E115C0", Offset = "0x4E115C0", VA = "0x4E115C0")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x4E116E0", Offset = "0x4E116E0", VA = "0x4E116E0")]
	public InvokableCall(UnityAction action)
	{
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x4E11780", Offset = "0x4E11780", VA = "0x4E11780", Slot = "4")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x4E11830", Offset = "0x4E11830", VA = "0x4E11830")]
	public void Invoke()
	{
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x4E118E0", Offset = "0x4E118E0", VA = "0x4E118E0", Slot = "5")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x20001E1")]
internal class InvokableCall<T1> : BaseInvokableCall
{
	[Token(Token = "0x14000006")]
	protected event UnityAction<T1> Delegate
	{
		[Token(Token = "0x6000D30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000D31")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000D32")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D33")]
	public InvokableCall(UnityAction<T1> action)
	{
	}

	[Token(Token = "0x6000D34")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D35")]
	public virtual void Invoke(T1 args0)
	{
	}

	[Token(Token = "0x6000D36")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x20001E2")]
internal class InvokableCall<T1, T2> : BaseInvokableCall
{
	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private UnityAction<T1, T2> Delegate;

	[Token(Token = "0x6000D37")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D38")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D39")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x20001E3")]
internal class InvokableCall<T1, T2, T3> : BaseInvokableCall
{
	[Token(Token = "0x14000007")]
	protected event UnityAction<T1, T2, T3> Delegate
	{
		[Token(Token = "0x6000D3A")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000D3B")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000D3C")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D3D")]
	public InvokableCall(UnityAction<T1, T2, T3> action)
	{
	}

	[Token(Token = "0x6000D3E")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D3F")]
	public void Invoke(T1 args0, T2 args1, T3 args2)
	{
	}

	[Token(Token = "0x6000D40")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x20001E4")]
internal class InvokableCall<T1, T2, T3, T4> : BaseInvokableCall
{
	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private UnityAction<T1, T2, T3, T4> Delegate;

	[Token(Token = "0x6000D41")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D42")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D43")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
