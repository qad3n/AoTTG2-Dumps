using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Events;

[Token(Token = "0x20001DD")]
internal class InvokableCall : BaseInvokableCall
{
	[Token(Token = "0x14000005")]
	private event UnityAction Delegate
	{
		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x4AE9B70", Offset = "0x4AE9B70", VA = "0x4AE9B70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x4AE9C00", Offset = "0x4AE9C00", VA = "0x4AE9C00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x4AE9C90", Offset = "0x4AE9C90", VA = "0x4AE9C90")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x4AE9DB0", Offset = "0x4AE9DB0", VA = "0x4AE9DB0")]
	public InvokableCall(UnityAction action)
	{
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x4AE9E50", Offset = "0x4AE9E50", VA = "0x4AE9E50", Slot = "4")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x4AE9F00", Offset = "0x4AE9F00", VA = "0x4AE9F00")]
	public void Invoke()
	{
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x4AE9FB0", Offset = "0x4AE9FB0", VA = "0x4AE9FB0", Slot = "5")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x20001DE")]
internal class InvokableCall<T1> : BaseInvokableCall
{
	[Token(Token = "0x14000006")]
	protected event UnityAction<T1> Delegate
	{
		[Token(Token = "0x6000D2E")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000D2F")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000D30")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D31")]
	public InvokableCall(UnityAction<T1> action)
	{
	}

	[Token(Token = "0x6000D32")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D33")]
	public virtual void Invoke(T1 args0)
	{
	}

	[Token(Token = "0x6000D34")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x20001DF")]
internal class InvokableCall<T1, T2> : BaseInvokableCall
{
	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private UnityAction<T1, T2> Delegate;

	[Token(Token = "0x6000D35")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D36")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D37")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x20001E0")]
internal class InvokableCall<T1, T2, T3> : BaseInvokableCall
{
	[Token(Token = "0x14000007")]
	protected event UnityAction<T1, T2, T3> Delegate
	{
		[Token(Token = "0x6000D38")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000D39")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000D3A")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D3B")]
	public InvokableCall(UnityAction<T1, T2, T3> action)
	{
	}

	[Token(Token = "0x6000D3C")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D3D")]
	public void Invoke(T1 args0, T2 args1, T3 args2)
	{
	}

	[Token(Token = "0x6000D3E")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x20001E1")]
internal class InvokableCall<T1, T2, T3, T4> : BaseInvokableCall
{
	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private UnityAction<T1, T2, T3, T4> Delegate;

	[Token(Token = "0x6000D3F")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6000D40")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6000D41")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
