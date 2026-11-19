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
[Token(Token = "0x200051E")]
internal class RuntimeFieldInfo : System.Reflection.RtFieldInfo, ISerializable
{
	[Token(Token = "0x4001494")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr klass;

	[Token(Token = "0x4001495")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal RuntimeFieldHandle fhandle;

	[Token(Token = "0x4001496")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string name;

	[Token(Token = "0x4001497")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Type type;

	[Token(Token = "0x4001498")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private FieldAttributes attrs;

	[Token(Token = "0x1700055C")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x60026AA")]
		[Address(RVA = "0x53E7890", Offset = "0x53E6890", VA = "0x53E7890")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x1700055D")]
	public override Module Module
	{
		[Token(Token = "0x60026AB")]
		[Address(RVA = "0x53E78A0", Offset = "0x53E68A0", VA = "0x53E78A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055E")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x60026AD")]
		[Address(RVA = "0x53E7A10", Offset = "0x53E6A10", VA = "0x53E7A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055F")]
	public override FieldAttributes Attributes
	{
		[Token(Token = "0x60026B4")]
		[Address(RVA = "0x53E7ED0", Offset = "0x53E6ED0", VA = "0x53E7ED0", Slot = "16")]
		get
		{
			return default(FieldAttributes);
		}
	}

	[Token(Token = "0x17000560")]
	public override RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x60026B5")]
		[Address(RVA = "0x53E7EE0", Offset = "0x53E6EE0", VA = "0x53E7EE0", Slot = "25")]
		get
		{
			return default(RuntimeFieldHandle);
		}
	}

	[Token(Token = "0x17000561")]
	public override Type FieldType
	{
		[Token(Token = "0x60026B7")]
		[Address(RVA = "0x53E7F00", Offset = "0x53E6F00", VA = "0x53E7F00", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000562")]
	public override Type ReflectedType
	{
		[Token(Token = "0x60026B9")]
		[Address(RVA = "0x53E7F70", Offset = "0x53E6F70", VA = "0x53E7F70", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000563")]
	public override Type DeclaringType
	{
		[Token(Token = "0x60026BA")]
		[Address(RVA = "0x53E7F80", Offset = "0x53E6F80", VA = "0x53E7F80", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000564")]
	public override string Name
	{
		[Token(Token = "0x60026BB")]
		[Address(RVA = "0x53E7F90", Offset = "0x53E6F90", VA = "0x53E7F90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000565")]
	public override int MetadataToken
	{
		[Token(Token = "0x60026C7")]
		[Address(RVA = "0x53E8630", Offset = "0x53E7630", VA = "0x53E8630", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60026AC")]
	[Address(RVA = "0x53E79A0", Offset = "0x53E69A0", VA = "0x53E79A0")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x60026AE")]
	[Address(RVA = "0x53E7920", Offset = "0x53E6920", VA = "0x53E7920")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x60026AF")]
	[Address(RVA = "0x53E7A80", Offset = "0x53E6A80", VA = "0x53E7A80", Slot = "35")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B0")]
	[Address(RVA = "0x53E7BA0", Offset = "0x53E6BA0", VA = "0x53E7BA0", Slot = "32")]
	internal override extern object UnsafeGetValue(object obj);

	[Token(Token = "0x60026B1")]
	[Address(RVA = "0x53E7BB0", Offset = "0x53E6BB0", VA = "0x53E7BB0", Slot = "34")]
	internal override void CheckConsistency(object target)
	{
	}

	[Token(Token = "0x60026B2")]
	[Address(RVA = "0x53E7D30", Offset = "0x53E6D30", VA = "0x53E7D30", Slot = "33")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	internal override void UnsafeSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[Token(Token = "0x60026B3")]
	[Address(RVA = "0x53E7D80", Offset = "0x53E6D80", VA = "0x53E7D80", Slot = "29")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override void SetValueDirect(TypedReference obj, object value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B6")]
	[Address(RVA = "0x53E7EF0", Offset = "0x53E6EF0", VA = "0x53E7EF0")]
	private extern Type ResolveType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B8")]
	[Address(RVA = "0x53E7F60", Offset = "0x53E6F60", VA = "0x53E7F60")]
	private extern Type GetParentType(bool declaring);

	[Token(Token = "0x60026BC")]
	[Address(RVA = "0x53E7FA0", Offset = "0x53E6FA0", VA = "0x53E7FA0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026BD")]
	[Address(RVA = "0x53E8000", Offset = "0x53E7000", VA = "0x53E8000", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026BE")]
	[Address(RVA = "0x53E8050", Offset = "0x53E7050", VA = "0x53E8050", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026BF")]
	[Address(RVA = "0x53E80B0", Offset = "0x53E70B0", VA = "0x53E80B0", Slot = "31")]
	internal override extern int GetFieldOffset();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026C0")]
	[Address(RVA = "0x53E80C0", Offset = "0x53E70C0", VA = "0x53E80C0")]
	private extern object GetValueInternal(object obj);

	[Token(Token = "0x60026C1")]
	[Address(RVA = "0x53E80D0", Offset = "0x53E70D0", VA = "0x53E80D0", Slot = "26")]
	public override object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x60026C2")]
	[Address(RVA = "0x53E82E0", Offset = "0x53E72E0", VA = "0x53E82E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026C3")]
	[Address(RVA = "0x53E8330", Offset = "0x53E7330", VA = "0x53E8330")]
	private static extern void SetValueInternal(FieldInfo fi, object obj, object value);

	[Token(Token = "0x60026C4")]
	[Address(RVA = "0x53E8340", Offset = "0x53E7340", VA = "0x53E8340", Slot = "28")]
	public override void SetValue(object obj, object val, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026C5")]
	[Address(RVA = "0x53E8620", Offset = "0x53E7620", VA = "0x53E8620", Slot = "30")]
	public override extern object GetRawConstantValue();

	[Token(Token = "0x60026C6")]
	[Address(RVA = "0x53E8260", Offset = "0x53E7260", VA = "0x53E8260")]
	private void CheckGeneric()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026C8")]
	[Address(RVA = "0x53E8640", Offset = "0x53E7640", VA = "0x53E8640")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeFieldInfo monoField);

	[Token(Token = "0x60026C9")]
	[Address(RVA = "0x53E8650", Offset = "0x53E7650", VA = "0x53E8650")]
	public RuntimeFieldInfo()
	{
	}
}
