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
		[Address(RVA = "0x4EFB190", Offset = "0x4EFB190", VA = "0x4EFB190")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x1700055B")]
	public override Module Module
	{
		[Token(Token = "0x600265A")]
		[Address(RVA = "0x4EFB1A0", Offset = "0x4EFB1A0", VA = "0x4EFB1A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055C")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x600265C")]
		[Address(RVA = "0x4EFB310", Offset = "0x4EFB310", VA = "0x4EFB310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055D")]
	public override FieldAttributes Attributes
	{
		[Token(Token = "0x6002663")]
		[Address(RVA = "0x4EFB7E0", Offset = "0x4EFB7E0", VA = "0x4EFB7E0", Slot = "16")]
		get
		{
			return default(FieldAttributes);
		}
	}

	[Token(Token = "0x1700055E")]
	public override RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x6002664")]
		[Address(RVA = "0x4EFB7F0", Offset = "0x4EFB7F0", VA = "0x4EFB7F0", Slot = "25")]
		get
		{
			return default(RuntimeFieldHandle);
		}
	}

	[Token(Token = "0x1700055F")]
	public override Type FieldType
	{
		[Token(Token = "0x6002666")]
		[Address(RVA = "0x4EFB810", Offset = "0x4EFB810", VA = "0x4EFB810", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000560")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002668")]
		[Address(RVA = "0x4EFB880", Offset = "0x4EFB880", VA = "0x4EFB880", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000561")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6002669")]
		[Address(RVA = "0x4EFB890", Offset = "0x4EFB890", VA = "0x4EFB890", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000562")]
	public override string Name
	{
		[Token(Token = "0x600266A")]
		[Address(RVA = "0x4EFB8A0", Offset = "0x4EFB8A0", VA = "0x4EFB8A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000563")]
	public override int MetadataToken
	{
		[Token(Token = "0x6002676")]
		[Address(RVA = "0x4EFBF40", Offset = "0x4EFBF40", VA = "0x4EFBF40", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600265B")]
	[Address(RVA = "0x4EFB2A0", Offset = "0x4EFB2A0", VA = "0x4EFB2A0")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x600265D")]
	[Address(RVA = "0x4EFB220", Offset = "0x4EFB220", VA = "0x4EFB220")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x600265E")]
	[Address(RVA = "0x4EFB380", Offset = "0x4EFB380", VA = "0x4EFB380", Slot = "35")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600265F")]
	[Address(RVA = "0x4EFB4A0", Offset = "0x4EFB4A0", VA = "0x4EFB4A0", Slot = "32")]
	internal override extern object UnsafeGetValue(object obj);

	[Token(Token = "0x6002660")]
	[Address(RVA = "0x4EFB4B0", Offset = "0x4EFB4B0", VA = "0x4EFB4B0", Slot = "34")]
	internal override void CheckConsistency(object target)
	{
	}

	[Token(Token = "0x6002661")]
	[Address(RVA = "0x4EFB630", Offset = "0x4EFB630", VA = "0x4EFB630", Slot = "33")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	internal override void UnsafeSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[Token(Token = "0x6002662")]
	[Address(RVA = "0x4EFB690", Offset = "0x4EFB690", VA = "0x4EFB690", Slot = "29")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public override void SetValueDirect(TypedReference obj, object value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002665")]
	[Address(RVA = "0x4EFB800", Offset = "0x4EFB800", VA = "0x4EFB800")]
	private extern Type ResolveType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002667")]
	[Address(RVA = "0x4EFB870", Offset = "0x4EFB870", VA = "0x4EFB870")]
	private extern Type GetParentType(bool declaring);

	[Token(Token = "0x600266B")]
	[Address(RVA = "0x4EFB8B0", Offset = "0x4EFB8B0", VA = "0x4EFB8B0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600266C")]
	[Address(RVA = "0x4EFB910", Offset = "0x4EFB910", VA = "0x4EFB910", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600266D")]
	[Address(RVA = "0x4EFB960", Offset = "0x4EFB960", VA = "0x4EFB960", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600266E")]
	[Address(RVA = "0x4EFB9C0", Offset = "0x4EFB9C0", VA = "0x4EFB9C0", Slot = "31")]
	internal override extern int GetFieldOffset();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600266F")]
	[Address(RVA = "0x4EFB9D0", Offset = "0x4EFB9D0", VA = "0x4EFB9D0")]
	private extern object GetValueInternal(object obj);

	[Token(Token = "0x6002670")]
	[Address(RVA = "0x4EFB9E0", Offset = "0x4EFB9E0", VA = "0x4EFB9E0", Slot = "26")]
	public override object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002671")]
	[Address(RVA = "0x4EFBBF0", Offset = "0x4EFBBF0", VA = "0x4EFBBF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002672")]
	[Address(RVA = "0x4EFBC40", Offset = "0x4EFBC40", VA = "0x4EFBC40")]
	private static extern void SetValueInternal(FieldInfo fi, object obj, object value);

	[Token(Token = "0x6002673")]
	[Address(RVA = "0x4EFBC50", Offset = "0x4EFBC50", VA = "0x4EFBC50", Slot = "28")]
	public override void SetValue(object obj, object val, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002674")]
	[Address(RVA = "0x4EFBF30", Offset = "0x4EFBF30", VA = "0x4EFBF30", Slot = "30")]
	public override extern object GetRawConstantValue();

	[Token(Token = "0x6002675")]
	[Address(RVA = "0x4EFBB70", Offset = "0x4EFBB70", VA = "0x4EFBB70")]
	private void CheckGeneric()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002677")]
	[Address(RVA = "0x4EFBF50", Offset = "0x4EFBF50", VA = "0x4EFBF50")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeFieldInfo monoField);

	[Token(Token = "0x6002678")]
	[Address(RVA = "0x4EFBF60", Offset = "0x4EFBF60", VA = "0x4EFBF60")]
	public RuntimeFieldInfo()
	{
	}
}
