// ==================== AoTTG2 cross-reference ====================
// Type: System.Delegate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000184")]
public abstract class Delegate : ICloneable, ISerializable
{
	[Token(Token = "0x400064B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr method_ptr;

	[Token(Token = "0x400064C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr invoke_impl;

	[Token(Token = "0x400064D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object m_target;

	[Token(Token = "0x400064E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr method;

	[Token(Token = "0x400064F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private IntPtr delegate_trampoline;

	[Token(Token = "0x4000650")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private IntPtr extra_arg;

	[Token(Token = "0x4000651")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IntPtr method_code;

	[Token(Token = "0x4000652")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private IntPtr interp_method;

	[Token(Token = "0x4000653")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IntPtr interp_invoke_impl;

	[Token(Token = "0x4000654")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private MethodInfo method_info;

	[Token(Token = "0x4000655")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private MethodInfo original_method_info;

	[Token(Token = "0x4000656")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.DelegateData data;

	[Token(Token = "0x4000657")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private bool method_is_virtual;

	[Token(Token = "0x17000169")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000F96")]
		[Address(RVA = "0x550DEA0", Offset = "0x550CEA0", VA = "0x550DEA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016A")]
	public object Target
	{
		[Token(Token = "0x6000F98")]
		[Address(RVA = "0x550DED0", Offset = "0x550CED0", VA = "0x550DED0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x550DEC0", Offset = "0x550CEC0", VA = "0x550DEC0")]
	private extern MethodInfo GetVirtualMethod_internal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x550DEE0", Offset = "0x550CEE0", VA = "0x550DEE0")]
	internal static extern Delegate CreateDelegate_internal(Type type, object target, MethodInfo info, bool throwOnBindFailure);

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x550DEF0", Offset = "0x550CEF0", VA = "0x550DEF0")]
	private static bool arg_type_match(Type delArgType, Type argType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x550E050", Offset = "0x550D050", VA = "0x550E050")]
	private static bool arg_type_match_this(Type delArgType, Type argType, bool boxedThis)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x550E180", Offset = "0x550D180", VA = "0x550E180")]
	private static bool return_type_match(Type delReturnType, Type returnType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x550E360", Offset = "0x550D360", VA = "0x550E360")]
	private static Delegate CreateDelegate(Type type, object firstArgument, MethodInfo method, bool throwOnBindFailure, bool allowClosed)
	{
		return null;
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x550EC60", Offset = "0x550DC60", VA = "0x550EC60")]
	public static Delegate CreateDelegate(Type type, object firstArgument, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x550EC70", Offset = "0x550DC70", VA = "0x550EC70")]
	public static Delegate CreateDelegate(Type type, MethodInfo method, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x550EC80", Offset = "0x550DC80", VA = "0x550EC80")]
	public static Delegate CreateDelegate(Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x550ECA0", Offset = "0x550DCA0", VA = "0x550ECA0")]
	public static Delegate CreateDelegate(Type type, object target, string method)
	{
		return null;
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x550ECC0", Offset = "0x550DCC0", VA = "0x550ECC0")]
	private static MethodInfo GetCandidateMethod(Type type, Type target, string method, BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x550F1B0", Offset = "0x550E1B0", VA = "0x550F1B0")]
	public static Delegate CreateDelegate(Type type, Type target, string method, bool ignoreCase, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x550F2A0", Offset = "0x550E2A0", VA = "0x550F2A0")]
	public static Delegate CreateDelegate(Type type, Type target, string method)
	{
		return null;
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x550F2B0", Offset = "0x550E2B0", VA = "0x550F2B0")]
	public static Delegate CreateDelegate(Type type, Type target, string method, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x550F2C0", Offset = "0x550E2C0", VA = "0x550F2C0")]
	public static Delegate CreateDelegate(Type type, object target, string method, bool ignoreCase, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x550ECB0", Offset = "0x550DCB0", VA = "0x550ECB0")]
	public static Delegate CreateDelegate(Type type, object target, string method, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x550F390", Offset = "0x550E390", VA = "0x550F390", Slot = "6")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000FA9")]
	[Address(RVA = "0x550F3B0", Offset = "0x550E3B0", VA = "0x550F3B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x550F550", Offset = "0x550E550", VA = "0x550F550", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x550F5C0", Offset = "0x550E5C0", VA = "0x550F5C0", Slot = "7")]
	protected virtual MethodInfo GetMethodImpl()
	{
		return null;
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x550F6A0", Offset = "0x550E6A0", VA = "0x550F6A0", Slot = "8")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x550F8F0", Offset = "0x550E8F0", VA = "0x550F8F0", Slot = "9")]
	public virtual Delegate[] GetInvocationList()
	{
		return null;
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x5509630", Offset = "0x5508630", VA = "0x5509630")]
	public static Delegate Combine(Delegate a, Delegate b)
	{
		return null;
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x550F990", Offset = "0x550E990", VA = "0x550F990")]
	[ComVisible(true)]
	public static Delegate Combine(params Delegate[] delegates)
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x550F9F0", Offset = "0x550E9F0", VA = "0x550F9F0", Slot = "10")]
	protected virtual Delegate CombineImpl(Delegate d)
	{
		return null;
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x5509810", Offset = "0x5508810", VA = "0x5509810")]
	public static Delegate Remove(Delegate source, Delegate value)
	{
		return null;
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x550FA50", Offset = "0x550EA50", VA = "0x550FA50", Slot = "11")]
	protected virtual Delegate RemoveImpl(Delegate d)
	{
		return null;
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x550FA80", Offset = "0x550EA80", VA = "0x550FA80")]
	public static bool operator ==(Delegate d1, Delegate d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x550FAB0", Offset = "0x550EAB0", VA = "0x550FAB0")]
	public static bool operator !=(Delegate d1, Delegate d2)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x550FAE0", Offset = "0x550EAE0", VA = "0x550FAE0")]
	internal static extern MulticastDelegate AllocDelegateLike_internal(Delegate d);
}
