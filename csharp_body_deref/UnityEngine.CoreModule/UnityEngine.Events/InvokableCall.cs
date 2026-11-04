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
	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private UnityAction m_Delegate;

	[Token(Token = "0x14000007")]
	private event UnityAction Delegate
	{
		[Token(Token = "0x6001108")]
		[Address(RVA = "0x2F4B250", Offset = "0x2F49850", VA = "0x182F4B250")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001109")]
		[Address(RVA = "0x2F4B2F0", Offset = "0x2F498F0", VA = "0x182F4B2F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600110A")]
	[Address(RVA = "0x2F4B060", Offset = "0x2F49660", VA = "0x182F4B060")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x2F4B030", Offset = "0x2F49630", VA = "0x182F4B030")]
	public InvokableCall(UnityAction action)
	{
	}

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x2F4AF80", Offset = "0x2F49580", VA = "0x182F4AF80", Slot = "4")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x2F4AF80", Offset = "0x2F49580", VA = "0x182F4AF80")]
	public void Invoke()
	{
	}

	[Token(Token = "0x600110E")]
	[Address(RVA = "0x17C1810", Offset = "0x17BFE10", VA = "0x1817C1810", Slot = "5")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000223")]
internal class InvokableCall<T1> : BaseInvokableCall
{
	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private UnityAction<T1> m_Delegate;

	[Token(Token = "0x14000008")]
	protected event UnityAction<T1> Delegate
	{
		[Token(Token = "0x600110F")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001110")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001111")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6001112")]
	public InvokableCall(UnityAction<T1> action)
	{
	}

	[Token(Token = "0x6001113")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6001114")]
	public virtual void Invoke(T1 args0)
	{
	}

	[Token(Token = "0x6001115")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000224")]
internal class InvokableCall<T1, T2> : BaseInvokableCall
{
	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private UnityAction<T1, T2> Delegate;

	[Token(Token = "0x6001116")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6001117")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6001118")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000225")]
internal class InvokableCall<T1, T2, T3> : BaseInvokableCall
{
	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private UnityAction<T1, T2, T3> m_Delegate;

	[Token(Token = "0x14000009")]
	protected event UnityAction<T1, T2, T3> Delegate
	{
		[Token(Token = "0x6001119")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600111A")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600111B")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x600111C")]
	public InvokableCall(UnityAction<T1, T2, T3> action)
	{
	}

	[Token(Token = "0x600111D")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x600111E")]
	public void Invoke(T1 args0, T2 args1, T3 args2)
	{
	}

	[Token(Token = "0x600111F")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000226")]
internal class InvokableCall<T1, T2, T3, T4> : BaseInvokableCall
{
	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private UnityAction<T1, T2, T3, T4> Delegate;

	[Token(Token = "0x6001120")]
	public InvokableCall(object target, MethodInfo theFunction)
	{
	}

	[Token(Token = "0x6001121")]
	public override void Invoke(object[] args)
	{
	}

	[Token(Token = "0x6001122")]
	public override bool Find(object targetObj, MethodInfo method)
	{
		return default(bool);
	}
}
