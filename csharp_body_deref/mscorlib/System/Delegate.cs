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
[Token(Token = "0x20001AC")]
public abstract class Delegate : ICloneable, ISerializable
{
	[Token(Token = "0x40006ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr method_ptr;

	[Token(Token = "0x40006EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr invoke_impl;

	[Token(Token = "0x40006EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object m_target;

	[Token(Token = "0x40006F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr method;

	[Token(Token = "0x40006F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private IntPtr delegate_trampoline;

	[Token(Token = "0x40006F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private IntPtr extra_arg;

	[Token(Token = "0x40006F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IntPtr method_code;

	[Token(Token = "0x40006F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private IntPtr interp_method;

	[Token(Token = "0x40006F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IntPtr interp_invoke_impl;

	[Token(Token = "0x40006F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private MethodInfo method_info;

	[Token(Token = "0x40006F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private MethodInfo original_method_info;

	[Token(Token = "0x40006F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.DelegateData data;

	[Token(Token = "0x40006F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private bool method_is_virtual;

	[Token(Token = "0x1700016A")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000FBF")]
		[Address(RVA = "0x1A96900", Offset = "0x1A94F00", VA = "0x181A96900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016B")]
	public object Target
	{
		[Token(Token = "0x6000FC1")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x1B802D0", Offset = "0x1B7E8D0", VA = "0x181B802D0")]
	private extern MethodInfo GetVirtualMethod_internal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x1B7EA30", Offset = "0x1B7D030", VA = "0x181B7EA30")]
	internal static extern Delegate CreateDelegate_internal(Type type, object target, MethodInfo info, bool throwOnBindFailure);

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x1B80470", Offset = "0x1B7EA70", VA = "0x181B80470")]
	private static bool arg_type_match(Type delArgType, Type argType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x1B805E0", Offset = "0x1B7EBE0", VA = "0x181B805E0")]
	private static bool arg_type_match_this(Type delArgType, Type argType, bool boxedThis)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x1B807A0", Offset = "0x1B7EDA0", VA = "0x181B807A0")]
	private static bool return_type_match(Type delReturnType, Type returnType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x1B7EB10", Offset = "0x1B7D110", VA = "0x181B7EB10")]
	private static Delegate CreateDelegate(Type type, object firstArgument, MethodInfo method, bool throwOnBindFailure, bool allowClosed)
	{
		return null;
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x1B7F6A0", Offset = "0x1B7DCA0", VA = "0x181B7F6A0")]
	public static Delegate CreateDelegate(Type type, object firstArgument, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x1B7F670", Offset = "0x1B7DC70", VA = "0x181B7F670")]
	public static Delegate CreateDelegate(Type type, MethodInfo method, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x1B7F430", Offset = "0x1B7DA30", VA = "0x181B7F430")]
	public static Delegate CreateDelegate(Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x1B7F570", Offset = "0x1B7DB70", VA = "0x181B7F570")]
	public static Delegate CreateDelegate(Type type, object target, string method)
	{
		return null;
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x1B7F980", Offset = "0x1B7DF80", VA = "0x181B7F980")]
	private static MethodInfo GetCandidateMethod(Type type, Type target, string method, BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x1B7F6C0", Offset = "0x1B7DCC0", VA = "0x181B7F6C0")]
	public static Delegate CreateDelegate(Type type, Type target, string method, bool ignoreCase, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x1B7F650", Offset = "0x1B7DC50", VA = "0x181B7F650")]
	public static Delegate CreateDelegate(Type type, Type target, string method)
	{
		return null;
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x1B7F550", Offset = "0x1B7DB50", VA = "0x181B7F550")]
	public static Delegate CreateDelegate(Type type, Type target, string method, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x1B7F460", Offset = "0x1B7DA60", VA = "0x181B7F460")]
	public static Delegate CreateDelegate(Type type, object target, string method, bool ignoreCase, bool throwOnBindFailure)
	{
		return null;
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x1B7EA40", Offset = "0x1B7D040", VA = "0x181B7EA40")]
	public static Delegate CreateDelegate(Type type, object target, string method, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x1B7E6B0", Offset = "0x1B7CCB0", VA = "0x181B7E6B0", Slot = "6")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x1B7F7C0", Offset = "0x1B7DDC0", VA = "0x181B7F7C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x1B7FE50", Offset = "0x1B7E450", VA = "0x181B7FE50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x1B7FF70", Offset = "0x1B7E570", VA = "0x181B7FF70", Slot = "7")]
	protected virtual MethodInfo GetMethodImpl()
	{
		return null;
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x1B80090", Offset = "0x1B7E690", VA = "0x181B80090", Slot = "8")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x1B7FED0", Offset = "0x1B7E4D0", VA = "0x181B7FED0", Slot = "9")]
	public virtual Delegate[] GetInvocationList()
	{
		return null;
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x1B7E720", Offset = "0x1B7CD20", VA = "0x181B7E720")]
	public static Delegate Combine(Delegate a, Delegate b)
	{
		return null;
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x1B7E880", Offset = "0x1B7CE80", VA = "0x181B7E880")]
	[ComVisible(true)]
	public static Delegate Combine(params Delegate[] delegates)
	{
		return null;
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x1B7E6C0", Offset = "0x1B7CCC0", VA = "0x181B7E6C0", Slot = "10")]
	protected virtual Delegate CombineImpl(Delegate d)
	{
		return null;
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x1B80310", Offset = "0x1B7E910", VA = "0x181B80310")]
	public static Delegate Remove(Delegate source, Delegate value)
	{
		return null;
	}

	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x1B802E0", Offset = "0x1B7E8E0", VA = "0x181B802E0", Slot = "11")]
	protected virtual Delegate RemoveImpl(Delegate d)
	{
		return null;
	}

	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x1B80730", Offset = "0x1B7ED30", VA = "0x181B80730")]
	public static bool operator ==(Delegate d1, Delegate d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x1B80760", Offset = "0x1B7ED60", VA = "0x181B80760")]
	public static bool operator !=(Delegate d1, Delegate d2)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x1B7E6A0", Offset = "0x1B7CCA0", VA = "0x181B7E6A0")]
	internal static extern MulticastDelegate AllocDelegateLike_internal(Delegate d);
}
