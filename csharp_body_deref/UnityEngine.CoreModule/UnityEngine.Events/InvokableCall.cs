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

[Token(Token = "0x2000222")]
internal class InvokableCall : BaseInvokableCall
{
	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private UnityAction m_Delegate;

	[Token(Token = "0x14000007")]
	private event UnityAction Delegate
	{
		[Token(Token = "0x600111C")]
		[Address(RVA = "0x6933330", Offset = "0x6932330", VA = "0x6933330")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600111D")]
		[Address(RVA = "0x69333C0", Offset = "0x69323C0", VA = "0x69333C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600111E")]
	[Address(RVA = "0x6933450", Offset = "0x6932450", VA = "0x6933450")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x6933570", Offset = "0x6932570", VA = "0x6933570")]
	public InvokableCall(UnityAction action)
	{
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x6933610", Offset = "0x6932610", VA = "0x6933610", Slot = "4")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x69336C0", Offset = "0x69326C0", VA = "0x69336C0")]
	public void Invoke()
	{
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x6933770", Offset = "0x6932770", VA = "0x6933770", Slot = "5")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000223")]
internal class InvokableCall<T1> : BaseInvokableCall
{
	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private UnityAction<T1> m_Delegate;

	[Token(Token = "0x14000008")]
	protected event UnityAction<T1> Delegate
	{
		[Token(Token = "0x6001123")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001124")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001125")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6001126")]
	public InvokableCall(UnityAction<T1> action)
	{
	}

	[Token(Token = "0x6001127")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6001128")]
	public virtual void Invoke(T1 args0)
	{
	}

	[Token(Token = "0x6001129")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000224")]
internal class InvokableCall<T1, T2> : BaseInvokableCall
{
	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private UnityAction<T1, T2> Delegate;

	[Token(Token = "0x600112A")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x600112B")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x600112C")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000225")]
internal class InvokableCall<T1, T2, T3> : BaseInvokableCall
{
	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private UnityAction<T1, T2, T3> m_Delegate;

	[Token(Token = "0x14000009")]
	protected event UnityAction<T1, T2, T3> Delegate
	{
		[Token(Token = "0x600112D")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600112E")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600112F")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6001130")]
	public InvokableCall(UnityAction<T1, T2, T3> action)
	{
	}

	[Token(Token = "0x6001131")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6001132")]
	public void Invoke(T1 args0, T2 args1, T3 args2)
	{
	}

	[Token(Token = "0x6001133")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000226")]
internal class InvokableCall<T1, T2, T3, T4> : BaseInvokableCall
{
	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private UnityAction<T1, T2, T3, T4> Delegate;

	[Token(Token = "0x6001134")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6001135")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6001136")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
