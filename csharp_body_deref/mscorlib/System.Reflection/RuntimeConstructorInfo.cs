// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RuntimeConstructorInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000518")]
internal class RuntimeConstructorInfo : ConstructorInfo, ISerializable
{
	[Token(Token = "0x4001542")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr mhandle;

	[Token(Token = "0x4001543")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string name;

	[Token(Token = "0x4001544")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type reftype;

	[Token(Token = "0x17000574")]
	public override Module Module
	{
		[Token(Token = "0x60026BA")]
		[Address(RVA = "0x3BE40E0", Offset = "0x3BE40E0", VA = "0x3BE40E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000575")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x60026BC")]
		[Address(RVA = "0x3BE41E0", Offset = "0x3BE41E0", VA = "0x3BE41E0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000576")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x60026BD")]
		[Address(RVA = "0x3BE41F0", Offset = "0x3BE41F0", VA = "0x3BE41F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000577")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x60026CA")]
		[Address(RVA = "0x3BE49A0", Offset = "0x3BE49A0", VA = "0x3BE49A0", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x17000578")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x60026CB")]
		[Address(RVA = "0x3BE49B0", Offset = "0x3BE49B0", VA = "0x3BE49B0", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x17000579")]
	public override CallingConventions CallingConvention
	{
		[Token(Token = "0x60026CC")]
		[Address(RVA = "0x3BE49C0", Offset = "0x3BE49C0", VA = "0x3BE49C0", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x1700057A")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x60026CD")]
		[Address(RVA = "0x3BE49F0", Offset = "0x3BE49F0", VA = "0x3BE49F0", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057B")]
	public override Type ReflectedType
	{
		[Token(Token = "0x60026CE")]
		[Address(RVA = "0x3BE4A30", Offset = "0x3BE4A30", VA = "0x3BE4A30", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057C")]
	public override Type DeclaringType
	{
		[Token(Token = "0x60026CF")]
		[Address(RVA = "0x3BE4A40", Offset = "0x3BE4A40", VA = "0x3BE4A40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057D")]
	public override string Name
	{
		[Token(Token = "0x60026D0")]
		[Address(RVA = "0x3BE4A70", Offset = "0x3BE4A70", VA = "0x3BE4A70", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057E")]
	public override bool IsSecurityCritical
	{
		[Token(Token = "0x60026D6")]
		[Address(RVA = "0x3BE4BF0", Offset = "0x3BE4BF0", VA = "0x3BE4BF0", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057F")]
	public override int MetadataToken
	{
		[Token(Token = "0x60026D7")]
		[Address(RVA = "0x3BE4C00", Offset = "0x3BE4C00", VA = "0x3BE4C00", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60026BB")]
	[Address(RVA = "0x3BE4160", Offset = "0x3BE4160", VA = "0x3BE4160")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x60026BE")]
	[Address(RVA = "0x3BE4260", Offset = "0x3BE4260", VA = "0x3BE4260", Slot = "41")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026BF")]
	[Address(RVA = "0x3BDB0E0", Offset = "0x3BDB0E0", VA = "0x3BDB0E0")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x60026C0")]
	[Address(RVA = "0x3BE43A0", Offset = "0x3BE43A0", VA = "0x3BE43A0")]
	internal void SerializationInvoke(object target, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026C1")]
	[Address(RVA = "0x3BE44E0", Offset = "0x3BE44E0", VA = "0x3BE44E0", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x60026C2")]
	[Address(RVA = "0x3BE4510", Offset = "0x3BE4510", VA = "0x3BE4510", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x60026C3")]
	[Address(RVA = "0x3BE4520", Offset = "0x3BE4520", VA = "0x3BE4520", Slot = "35")]
	internal override ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x60026C4")]
	[Address(RVA = "0x3BE4530", Offset = "0x3BE4530", VA = "0x3BE4530", Slot = "36")]
	internal override int GetParametersCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026C5")]
	[Address(RVA = "0x3BE4550", Offset = "0x3BE4550", VA = "0x3BE4550")]
	internal extern object InternalInvoke(object obj, object[] parameters, out Exception exc);

	[Token(Token = "0x60026C6")]
	[Address(RVA = "0x3BE4560", Offset = "0x3BE4560", VA = "0x3BE4560", Slot = "32")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60026C7")]
	[Address(RVA = "0x3BE4660", Offset = "0x3BE4660", VA = "0x3BE4660")]
	private object DoInvoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60026C8")]
	[Address(RVA = "0x3BE4830", Offset = "0x3BE4830", VA = "0x3BE4830")]
	public object InternalInvoke(object obj, object[] parameters, bool wrapExceptions)
	{
		return null;
	}

	[Token(Token = "0x60026C9")]
	[Address(RVA = "0x3BE4980", Offset = "0x3BE4980", VA = "0x3BE4980", Slot = "40")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public override object Invoke(BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60026D1")]
	[Address(RVA = "0x3BE4A80", Offset = "0x3BE4A80", VA = "0x3BE4A80", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026D2")]
	[Address(RVA = "0x3BE4AE0", Offset = "0x3BE4AE0", VA = "0x3BE4AE0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026D3")]
	[Address(RVA = "0x3BE4B30", Offset = "0x3BE4B30", VA = "0x3BE4B30", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026D4")]
	[Address(RVA = "0x3BE4B90", Offset = "0x3BE4B90", VA = "0x3BE4B90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60026D5")]
	[Address(RVA = "0x3BE4BE0", Offset = "0x3BE4BE0", VA = "0x3BE4BE0")]
	private static int get_core_clr_security_level()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026D8")]
	[Address(RVA = "0x3BE4C10", Offset = "0x3BE4C10", VA = "0x3BE4C10")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeConstructorInfo method);

	[Token(Token = "0x60026D9")]
	[Address(RVA = "0x3BE4C20", Offset = "0x3BE4C20", VA = "0x3BE4C20")]
	public RuntimeConstructorInfo()
	{
	}
}
