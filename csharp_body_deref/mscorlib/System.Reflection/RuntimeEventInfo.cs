// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RuntimeEventInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000543")]
internal sealed class RuntimeEventInfo : EventInfo, ISerializable
{
	[Token(Token = "0x4001532")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr klass;

	[Token(Token = "0x4001533")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IntPtr handle;

	[Token(Token = "0x17000556")]
	public override Module Module
	{
		[Token(Token = "0x60026C4")]
		[Address(RVA = "0x1A6D120", Offset = "0x1A6B720", VA = "0x181A6D120", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000557")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x60026C5")]
		[Address(RVA = "0x1A6CC00", Offset = "0x1A6B200", VA = "0x181A6CC00")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000558")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x60026C7")]
		[Address(RVA = "0x1A6D2B0", Offset = "0x1A6B8B0", VA = "0x181A6D2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000559")]
	public override Type DeclaringType
	{
		[Token(Token = "0x60026CE")]
		[Address(RVA = "0x1A6D250", Offset = "0x1A6B850", VA = "0x181A6D250", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055A")]
	public override Type ReflectedType
	{
		[Token(Token = "0x60026CF")]
		[Address(RVA = "0x1A6D330", Offset = "0x1A6B930", VA = "0x181A6D330", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055B")]
	public override string Name
	{
		[Token(Token = "0x60026D0")]
		[Address(RVA = "0x1A6D280", Offset = "0x1A6B880", VA = "0x181A6D280", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055C")]
	public override int MetadataToken
	{
		[Token(Token = "0x60026D5")]
		[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026C2")]
	[Address(RVA = "0x1A6D360", Offset = "0x1A6B960", VA = "0x181A6D360")]
	private static extern void get_event_info(System.Reflection.RuntimeEventInfo ev, out System.Reflection.MonoEventInfo info);

	[Token(Token = "0x60026C3")]
	[Address(RVA = "0x1A6CEC0", Offset = "0x1A6B4C0", VA = "0x181A6CEC0")]
	internal static System.Reflection.MonoEventInfo GetEventInfo(System.Reflection.RuntimeEventInfo ev)
	{
		return default(System.Reflection.MonoEventInfo);
	}

	[Token(Token = "0x60026C6")]
	[Address(RVA = "0x1A6CE40", Offset = "0x1A6B440", VA = "0x181A6CE40")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x60026C8")]
	[Address(RVA = "0x1A6D120", Offset = "0x1A6B720", VA = "0x181A6D120")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x60026C9")]
	[Address(RVA = "0x1A6CF00", Offset = "0x1A6B500", VA = "0x181A6CF00", Slot = "22")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026CA")]
	[Address(RVA = "0x1A6CC00", Offset = "0x1A6B200", VA = "0x181A6CC00")]
	internal BindingFlags GetBindingFlags()
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x60026CB")]
	[Address(RVA = "0x1A6CB80", Offset = "0x1A6B180", VA = "0x181A6CB80", Slot = "18")]
	public override MethodInfo GetAddMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x60026CC")]
	[Address(RVA = "0x1A6D020", Offset = "0x1A6B620", VA = "0x181A6D020", Slot = "20")]
	public override MethodInfo GetRaiseMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x60026CD")]
	[Address(RVA = "0x1A6D0A0", Offset = "0x1A6B6A0", VA = "0x181A6D0A0", Slot = "19")]
	public override MethodInfo GetRemoveMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x60026D1")]
	[Address(RVA = "0x1A6D1C0", Offset = "0x1A6B7C0", VA = "0x181A6D1C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60026D2")]
	[Address(RVA = "0x1A6D150", Offset = "0x1A6B750", VA = "0x181A6D150", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026D3")]
	[Address(RVA = "0x1A6CDE0", Offset = "0x1A6B3E0", VA = "0x181A6CDE0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026D4")]
	[Address(RVA = "0x1A6CD70", Offset = "0x1A6B370", VA = "0x181A6CD70", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026D6")]
	[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeEventInfo monoEvent);

	[Token(Token = "0x60026D7")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RuntimeEventInfo()
	{
	}
}
