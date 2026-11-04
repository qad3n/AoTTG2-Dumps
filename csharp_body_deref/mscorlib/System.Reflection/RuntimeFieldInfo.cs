// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RuntimeFieldInfo
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
[Token(Token = "0x2000545")]
internal class RuntimeFieldInfo : System.Reflection.RtFieldInfo, ISerializable
{
	[Token(Token = "0x4001534")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr klass;

	[Token(Token = "0x4001535")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal RuntimeFieldHandle fhandle;

	[Token(Token = "0x4001536")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string name;

	[Token(Token = "0x4001537")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Type type;

	[Token(Token = "0x4001538")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private FieldAttributes attrs;

	[Token(Token = "0x1700055D")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x60026DC")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x1700055E")]
	public override Module Module
	{
		[Token(Token = "0x60026DD")]
		[Address(RVA = "0x1A6D870", Offset = "0x1A6BE70", VA = "0x181A6D870", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055F")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x60026DF")]
		[Address(RVA = "0x1A6E0E0", Offset = "0x1A6C6E0", VA = "0x181A6E0E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000560")]
	public override FieldAttributes Attributes
	{
		[Token(Token = "0x60026E6")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60", Slot = "16")]
		get
		{
			return default(FieldAttributes);
		}
	}

	[Token(Token = "0x17000561")]
	public override RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x60026E7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "25")]
		get
		{
			return default(RuntimeFieldHandle);
		}
	}

	[Token(Token = "0x17000562")]
	public override Type FieldType
	{
		[Token(Token = "0x60026E9")]
		[Address(RVA = "0x1A6E080", Offset = "0x1A6C680", VA = "0x181A6E080", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000563")]
	public override Type ReflectedType
	{
		[Token(Token = "0x60026EB")]
		[Address(RVA = "0x1A6E160", Offset = "0x1A6C760", VA = "0x181A6E160", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000564")]
	public override Type DeclaringType
	{
		[Token(Token = "0x60026EC")]
		[Address(RVA = "0x1A6E070", Offset = "0x1A6C670", VA = "0x181A6E070", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000565")]
	public override string Name
	{
		[Token(Token = "0x60026ED")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000566")]
	public override int MetadataToken
	{
		[Token(Token = "0x60026F9")]
		[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60026DE")]
	[Address(RVA = "0x1A6D680", Offset = "0x1A6BC80", VA = "0x181A6D680")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x60026E0")]
	[Address(RVA = "0x1A6D870", Offset = "0x1A6BE70", VA = "0x181A6D870")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x60026E1")]
	[Address(RVA = "0x1A6D710", Offset = "0x1A6BD10", VA = "0x181A6D710", Slot = "35")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026E2")]
	[Address(RVA = "0x1A6D900", Offset = "0x1A6BF00", VA = "0x181A6D900", Slot = "32")]
	internal override extern object UnsafeGetValue(object obj);

	[Token(Token = "0x60026E3")]
	[Address(RVA = "0x1A6D370", Offset = "0x1A6B970", VA = "0x181A6D370", Slot = "34")]
	internal override void CheckConsistency(object target)
	{
	}

	[Token(Token = "0x60026E4")]
	[Address(RVA = "0x1A6E000", Offset = "0x1A6C600", VA = "0x181A6E000", Slot = "33")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	internal override void UnsafeSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[Token(Token = "0x60026E5")]
	[Address(RVA = "0x1A6DB40", Offset = "0x1A6C140", VA = "0x181A6DB40", Slot = "29")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override void SetValueDirect(TypedReference obj, object value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026E8")]
	[Address(RVA = "0x1A6DB30", Offset = "0x1A6C130", VA = "0x181A6DB30")]
	private extern Type ResolveType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026EA")]
	[Address(RVA = "0x1A6D850", Offset = "0x1A6BE50", VA = "0x181A6D850")]
	private extern Type GetParentType(bool declaring);

	[Token(Token = "0x60026EE")]
	[Address(RVA = "0x1A6DAC0", Offset = "0x1A6C0C0", VA = "0x181A6DAC0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026EF")]
	[Address(RVA = "0x1A6D5B0", Offset = "0x1A6BBB0", VA = "0x181A6D5B0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026F0")]
	[Address(RVA = "0x1A6D610", Offset = "0x1A6BC10", VA = "0x181A6D610", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026F1")]
	[Address(RVA = "0x1A6D700", Offset = "0x1A6BD00", VA = "0x181A6D700", Slot = "31")]
	internal override extern int GetFieldOffset();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026F2")]
	[Address(RVA = "0x1A6D900", Offset = "0x1A6BF00", VA = "0x181A6D900")]
	private extern object GetValueInternal(object obj);

	[Token(Token = "0x60026F3")]
	[Address(RVA = "0x1A6D910", Offset = "0x1A6BF10", VA = "0x181A6D910", Slot = "26")]
	public override object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x60026F4")]
	[Address(RVA = "0x1A6DFA0", Offset = "0x1A6C5A0", VA = "0x181A6DFA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026F5")]
	[Address(RVA = "0x1A6DCC0", Offset = "0x1A6C2C0", VA = "0x181A6DCC0")]
	private static extern void SetValueInternal(FieldInfo fi, object obj, object value);

	[Token(Token = "0x60026F6")]
	[Address(RVA = "0x1A6DCD0", Offset = "0x1A6C2D0", VA = "0x181A6DCD0", Slot = "28")]
	public override void SetValue(object obj, object val, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026F7")]
	[Address(RVA = "0x1A6D860", Offset = "0x1A6BE60", VA = "0x181A6D860", Slot = "30")]
	public override extern object GetRawConstantValue();

	[Token(Token = "0x60026F8")]
	[Address(RVA = "0x1A6D520", Offset = "0x1A6BB20", VA = "0x181A6D520")]
	private void CheckGeneric()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026FA")]
	[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeFieldInfo monoField);

	[Token(Token = "0x60026FB")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RuntimeFieldInfo()
	{
	}
}
