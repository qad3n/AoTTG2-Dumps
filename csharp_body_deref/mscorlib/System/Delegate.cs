using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000181")]
public abstract class Delegate : ICloneable, ISerializable
{
	[Token(Token = "0x4000689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr method_ptr;

	[Token(Token = "0x400068A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr invoke_impl;

	[Token(Token = "0x400068B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object m_target;

	[Token(Token = "0x400068C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr method;

	[Token(Token = "0x400068D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private IntPtr delegate_trampoline;

	[Token(Token = "0x400068E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private IntPtr extra_arg;

	[Token(Token = "0x400068F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IntPtr method_code;

	[Token(Token = "0x4000690")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private IntPtr interp_method;

	[Token(Token = "0x4000691")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IntPtr interp_invoke_impl;

	[Token(Token = "0x4000692")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private MethodInfo method_info;

	[Token(Token = "0x4000693")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private MethodInfo original_method_info;

	[Token(Token = "0x4000694")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.DelegateData data;

	[Token(Token = "0x4000695")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private bool method_is_virtual;

	[Token(Token = "0x17000168")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000F69")]
		[Address(RVA = "0x5024970", Offset = "0x5024970", VA = "0x5024970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000169")]
	public object Target
	{
		[Token(Token = "0x6000F6B")]
		[Address(RVA = "0x50249A0", Offset = "0x50249A0", VA = "0x50249A0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x5024990", Offset = "0x5024990", VA = "0x5024990")]
	private extern MethodInfo GetVirtualMethod_internal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x50249B0", Offset = "0x50249B0", VA = "0x50249B0")]
	internal static extern Delegate CreateDelegate_internal(Type type, object target, MethodInfo info, bool throwOnBindFailure);

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x50249C0", Offset = "0x50249C0", VA = "0x50249C0")]
	private static bool arg_type_match(Type delArgType, Type argType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x5024B20", Offset = "0x5024B20", VA = "0x5024B20")]
	private static bool arg_type_match_this(Type delArgType, Type argType, bool boxedThis)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x5024C50", Offset = "0x5024C50", VA = "0x5024C50")]
	private static bool return_type_match(Type delReturnType, Type returnType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x5024E30", Offset = "0x5024E30", VA = "0x5024E30")]
	private static Delegate CreateDelegate(Type type, object firstArgument, MethodInfo method, bool throwOnBindFailure, bool allowClosed)
	{
		return null;
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x50256B0", Offset = "0x50256B0", VA = "0x50256B0")]
	public static Delegate CreateDelegate(Type type, object firstArgument, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x50256C0", Offset = "0x50256C0", VA = "0x50256C0")]
	public static Delegate CreateDelegate(Type type, MethodInfo method, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x50256D0", Offset = "0x50256D0", VA = "0x50256D0")]
	public static Delegate CreateDelegate(Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x50256F0", Offset = "0x50256F0", VA = "0x50256F0")]
	public static Delegate CreateDelegate(Type type, object target, string method)
	{
		return null;
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x5025710", Offset = "0x5025710", VA = "0x5025710")]
	private static MethodInfo GetCandidateMethod(Type type, Type target, string method, BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x5025C20", Offset = "0x5025C20", VA = "0x5025C20")]
	public static Delegate CreateDelegate(Type type, Type target, string method, bool ignoreCase, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x5025D10", Offset = "0x5025D10", VA = "0x5025D10")]
	public static Delegate CreateDelegate(Type type, Type target, string method)
	{
		return null;
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x5025D20", Offset = "0x5025D20", VA = "0x5025D20")]
	public static Delegate CreateDelegate(Type type, Type target, string method, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x5025D30", Offset = "0x5025D30", VA = "0x5025D30")]
	public static Delegate CreateDelegate(Type type, object target, string method, bool ignoreCase, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x5025700", Offset = "0x5025700", VA = "0x5025700")]
	public static Delegate CreateDelegate(Type type, object target, string method, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x5025E00", Offset = "0x5025E00", VA = "0x5025E00", Slot = "6")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x5025E20", Offset = "0x5025E20", VA = "0x5025E20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x5025FD0", Offset = "0x5025FD0", VA = "0x5025FD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x5026050", Offset = "0x5026050", VA = "0x5026050", Slot = "7")]
	protected virtual MethodInfo GetMethodImpl()
	{
		return null;
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x5026120", Offset = "0x5026120", VA = "0x5026120", Slot = "8")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x50263E0", Offset = "0x50263E0", VA = "0x50263E0", Slot = "9")]
	public virtual Delegate[] GetInvocationList()
	{
		return null;
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x5020290", Offset = "0x5020290", VA = "0x5020290")]
	public static Delegate Combine(Delegate a, Delegate b)
	{
		return null;
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x5026480", Offset = "0x5026480", VA = "0x5026480")]
	[ComVisible(true)]
	public static Delegate Combine(params Delegate[] delegates)
	{
		return null;
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x50264E0", Offset = "0x50264E0", VA = "0x50264E0", Slot = "10")]
	protected virtual Delegate CombineImpl(Delegate d)
	{
		return null;
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x5020470", Offset = "0x5020470", VA = "0x5020470")]
	public static Delegate Remove(Delegate source, Delegate value)
	{
		return null;
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x5026540", Offset = "0x5026540", VA = "0x5026540", Slot = "11")]
	protected virtual Delegate RemoveImpl(Delegate d)
	{
		return null;
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x5026570", Offset = "0x5026570", VA = "0x5026570")]
	public static bool operator ==(Delegate d1, Delegate d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x50265A0", Offset = "0x50265A0", VA = "0x50265A0")]
	public static bool operator !=(Delegate d1, Delegate d2)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x50265D0", Offset = "0x50265D0", VA = "0x50265D0")]
	internal static extern MulticastDelegate AllocDelegateLike_internal(Delegate d);
}
