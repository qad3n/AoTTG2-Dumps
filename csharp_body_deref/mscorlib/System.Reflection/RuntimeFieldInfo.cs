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
[Token(Token = "0x2000515")]
internal class RuntimeFieldInfo : System.Reflection.RtFieldInfo, ISerializable
{
	[Token(Token = "0x4001535")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr klass;

	[Token(Token = "0x4001536")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal RuntimeFieldHandle fhandle;

	[Token(Token = "0x4001537")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string name;

	[Token(Token = "0x4001538")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Type type;

	[Token(Token = "0x4001539")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private FieldAttributes attrs;

	[Token(Token = "0x1700055A")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x6002659")]
		[Address(RVA = "0x3BE0CB0", Offset = "0x3BE0CB0", VA = "0x3BE0CB0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x1700055B")]
	public override Module Module
	{
		[Token(Token = "0x600265A")]
		[Address(RVA = "0x3BE0CC0", Offset = "0x3BE0CC0", VA = "0x3BE0CC0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055C")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x600265C")]
		[Address(RVA = "0x3BE0E30", Offset = "0x3BE0E30", VA = "0x3BE0E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055D")]
	public override FieldAttributes Attributes
	{
		[Token(Token = "0x6002663")]
		[Address(RVA = "0x3BE1300", Offset = "0x3BE1300", VA = "0x3BE1300", Slot = "16")]
		get
		{
			return default(FieldAttributes);
		}
	}

	[Token(Token = "0x1700055E")]
	public override RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x6002664")]
		[Address(RVA = "0x3BE1310", Offset = "0x3BE1310", VA = "0x3BE1310", Slot = "25")]
		get
		{
			return default(RuntimeFieldHandle);
		}
	}

	[Token(Token = "0x1700055F")]
	public override Type FieldType
	{
		[Token(Token = "0x6002666")]
		[Address(RVA = "0x3BE1330", Offset = "0x3BE1330", VA = "0x3BE1330", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000560")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002668")]
		[Address(RVA = "0x3BE13A0", Offset = "0x3BE13A0", VA = "0x3BE13A0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000561")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6002669")]
		[Address(RVA = "0x3BE13B0", Offset = "0x3BE13B0", VA = "0x3BE13B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000562")]
	public override string Name
	{
		[Token(Token = "0x600266A")]
		[Address(RVA = "0x3BE13C0", Offset = "0x3BE13C0", VA = "0x3BE13C0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000563")]
	public override int MetadataToken
	{
		[Token(Token = "0x6002676")]
		[Address(RVA = "0x3BE1A60", Offset = "0x3BE1A60", VA = "0x3BE1A60", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600265B")]
	[Address(RVA = "0x3BE0DC0", Offset = "0x3BE0DC0", VA = "0x3BE0DC0")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x600265D")]
	[Address(RVA = "0x3BE0D40", Offset = "0x3BE0D40", VA = "0x3BE0D40")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x600265E")]
	[Address(RVA = "0x3BE0EA0", Offset = "0x3BE0EA0", VA = "0x3BE0EA0", Slot = "35")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600265F")]
	[Address(RVA = "0x3BE0FC0", Offset = "0x3BE0FC0", VA = "0x3BE0FC0", Slot = "32")]
	internal override extern object UnsafeGetValue(object obj);

	[Token(Token = "0x6002660")]
	[Address(RVA = "0x3BE0FD0", Offset = "0x3BE0FD0", VA = "0x3BE0FD0", Slot = "34")]
	internal override void CheckConsistency(object target)
	{
	}

	[Token(Token = "0x6002661")]
	[Address(RVA = "0x3BE1150", Offset = "0x3BE1150", VA = "0x3BE1150", Slot = "33")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	internal override void UnsafeSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[Token(Token = "0x6002662")]
	[Address(RVA = "0x3BE11B0", Offset = "0x3BE11B0", VA = "0x3BE11B0", Slot = "29")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public override void SetValueDirect(TypedReference obj, object value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002665")]
	[Address(RVA = "0x3BE1320", Offset = "0x3BE1320", VA = "0x3BE1320")]
	private extern Type ResolveType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002667")]
	[Address(RVA = "0x3BE1390", Offset = "0x3BE1390", VA = "0x3BE1390")]
	private extern Type GetParentType(bool declaring);

	[Token(Token = "0x600266B")]
	[Address(RVA = "0x3BE13D0", Offset = "0x3BE13D0", VA = "0x3BE13D0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600266C")]
	[Address(RVA = "0x3BE1430", Offset = "0x3BE1430", VA = "0x3BE1430", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600266D")]
	[Address(RVA = "0x3BE1480", Offset = "0x3BE1480", VA = "0x3BE1480", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600266E")]
	[Address(RVA = "0x3BE14E0", Offset = "0x3BE14E0", VA = "0x3BE14E0", Slot = "31")]
	internal override extern int GetFieldOffset();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600266F")]
	[Address(RVA = "0x3BE14F0", Offset = "0x3BE14F0", VA = "0x3BE14F0")]
	private extern object GetValueInternal(object obj);

	[Token(Token = "0x6002670")]
	[Address(RVA = "0x3BE1500", Offset = "0x3BE1500", VA = "0x3BE1500", Slot = "26")]
	public override object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002671")]
	[Address(RVA = "0x3BE1710", Offset = "0x3BE1710", VA = "0x3BE1710", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002672")]
	[Address(RVA = "0x3BE1760", Offset = "0x3BE1760", VA = "0x3BE1760")]
	private static extern void SetValueInternal(FieldInfo fi, object obj, object value);

	[Token(Token = "0x6002673")]
	[Address(RVA = "0x3BE1770", Offset = "0x3BE1770", VA = "0x3BE1770", Slot = "28")]
	public override void SetValue(object obj, object val, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002674")]
	[Address(RVA = "0x3BE1A50", Offset = "0x3BE1A50", VA = "0x3BE1A50", Slot = "30")]
	public override extern object GetRawConstantValue();

	[Token(Token = "0x6002675")]
	[Address(RVA = "0x3BE1690", Offset = "0x3BE1690", VA = "0x3BE1690")]
	private void CheckGeneric()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002677")]
	[Address(RVA = "0x3BE1A70", Offset = "0x3BE1A70", VA = "0x3BE1A70")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeFieldInfo monoField);

	[Token(Token = "0x6002678")]
	[Address(RVA = "0x3BE1A80", Offset = "0x3BE1A80", VA = "0x3BE1A80")]
	public RuntimeFieldInfo()
	{
	}
}
