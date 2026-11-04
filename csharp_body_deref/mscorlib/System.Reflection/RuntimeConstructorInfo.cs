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
[Token(Token = "0x2000548")]
internal class RuntimeConstructorInfo : ConstructorInfo, ISerializable
{
	[Token(Token = "0x4001541")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr mhandle;

	[Token(Token = "0x4001542")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string name;

	[Token(Token = "0x4001543")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type reftype;

	[Token(Token = "0x17000577")]
	public override Module Module
	{
		[Token(Token = "0x600273D")]
		[Address(RVA = "0x1A6C4E0", Offset = "0x1A6AAE0", VA = "0x181A6C4E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000578")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x600273F")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000579")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x6002740")]
		[Address(RVA = "0x1A6CB00", Offset = "0x1A6B100", VA = "0x181A6CB00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057A")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x600274D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x1700057B")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x600274E")]
		[Address(RVA = "0x1A6CA30", Offset = "0x1A6B030", VA = "0x181A6CA30", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x1700057C")]
	public override CallingConventions CallingConvention
	{
		[Token(Token = "0x600274F")]
		[Address(RVA = "0x1A6CA40", Offset = "0x1A6B040", VA = "0x181A6CA40", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x1700057D")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x6002750")]
		[Address(RVA = "0x1A6CA70", Offset = "0x1A6B070", VA = "0x181A6CA70", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057E")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002751")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057F")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6002752")]
		[Address(RVA = "0x1A6CAB0", Offset = "0x1A6B0B0", VA = "0x181A6CAB0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000580")]
	public override string Name
	{
		[Token(Token = "0x6002753")]
		[Address(RVA = "0x1A6CAF0", Offset = "0x1A6B0F0", VA = "0x181A6CAF0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000581")]
	public override bool IsSecurityCritical
	{
		[Token(Token = "0x6002759")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000582")]
	public override int MetadataToken
	{
		[Token(Token = "0x600275A")]
		[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600273E")]
	[Address(RVA = "0x1A6C4E0", Offset = "0x1A6AAE0", VA = "0x181A6C4E0")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x6002741")]
	[Address(RVA = "0x1A6C330", Offset = "0x1A6A930", VA = "0x181A6C330", Slot = "41")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002742")]
	[Address(RVA = "0x1A6C960", Offset = "0x1A6AF60", VA = "0x181A6C960")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x6002743")]
	[Address(RVA = "0x1A6C830", Offset = "0x1A6AE30", VA = "0x181A6C830")]
	internal void SerializationInvoke(object target, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002744")]
	[Address(RVA = "0x1A6C300", Offset = "0x1A6A900", VA = "0x181A6C300", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x6002745")]
	[Address(RVA = "0x1A6C4D0", Offset = "0x1A6AAD0", VA = "0x181A6C4D0", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x6002746")]
	[Address(RVA = "0x1A6C4D0", Offset = "0x1A6AAD0", VA = "0x181A6C4D0", Slot = "35")]
	internal override ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x6002747")]
	[Address(RVA = "0x1A6C4A0", Offset = "0x1A6AAA0", VA = "0x181A6C4A0", Slot = "36")]
	internal override int GetParametersCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002748")]
	[Address(RVA = "0x1A6C570", Offset = "0x1A6AB70", VA = "0x181A6C570")]
	internal extern object InternalInvoke(object obj, object[] parameters, out Exception exc);

	[Token(Token = "0x6002749")]
	[Address(RVA = "0x1A6C6A0", Offset = "0x1A6ACA0", VA = "0x181A6C6A0", Slot = "32")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x600274A")]
	[Address(RVA = "0x1A6C000", Offset = "0x1A6A600", VA = "0x181A6C000")]
	private object DoInvoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x600274B")]
	[Address(RVA = "0x1A6C580", Offset = "0x1A6AB80", VA = "0x181A6C580")]
	public object InternalInvoke(object obj, object[] parameters, bool wrapExceptions)
	{
		return null;
	}

	[Token(Token = "0x600274C")]
	[Address(RVA = "0x1A6C670", Offset = "0x1A6AC70", VA = "0x181A6C670", Slot = "40")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public override object Invoke(BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002754")]
	[Address(RVA = "0x1A6C7C0", Offset = "0x1A6ADC0", VA = "0x181A6C7C0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002755")]
	[Address(RVA = "0x1A6C230", Offset = "0x1A6A830", VA = "0x181A6C230", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002756")]
	[Address(RVA = "0x1A6C290", Offset = "0x1A6A890", VA = "0x181A6C290", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002757")]
	[Address(RVA = "0x1A6C980", Offset = "0x1A6AF80", VA = "0x181A6C980", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002758")]
	[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040")]
	private static int get_core_clr_security_level()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600275B")]
	[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeConstructorInfo method);

	[Token(Token = "0x600275C")]
	[Address(RVA = "0x1A6C9E0", Offset = "0x1A6AFE0", VA = "0x181A6C9E0")]
	public RuntimeConstructorInfo()
	{
	}
}
