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
[Token(Token = "0x2000513")]
internal sealed class RuntimeEventInfo : EventInfo, ISerializable
{
	[Token(Token = "0x4001533")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr klass;

	[Token(Token = "0x4001534")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IntPtr handle;

	[Token(Token = "0x17000553")]
	public override Module Module
	{
		[Token(Token = "0x6002641")]
		[Address(RVA = "0x3BE0430", Offset = "0x3BE0430", VA = "0x3BE0430", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000554")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x6002642")]
		[Address(RVA = "0x3BE0530", Offset = "0x3BE0530", VA = "0x3BE0530")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000555")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x6002644")]
		[Address(RVA = "0x3BE07A0", Offset = "0x3BE07A0", VA = "0x3BE07A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000556")]
	public override Type DeclaringType
	{
		[Token(Token = "0x600264B")]
		[Address(RVA = "0x3BE0A40", Offset = "0x3BE0A40", VA = "0x3BE0A40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000557")]
	public override Type ReflectedType
	{
		[Token(Token = "0x600264C")]
		[Address(RVA = "0x3BE0A70", Offset = "0x3BE0A70", VA = "0x3BE0A70", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000558")]
	public override string Name
	{
		[Token(Token = "0x600264D")]
		[Address(RVA = "0x3BE0AA0", Offset = "0x3BE0AA0", VA = "0x3BE0AA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000559")]
	public override int MetadataToken
	{
		[Token(Token = "0x6002652")]
		[Address(RVA = "0x3BE0C70", Offset = "0x3BE0C70", VA = "0x3BE0C70", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600263F")]
	[Address(RVA = "0x3BE03C0", Offset = "0x3BE03C0", VA = "0x3BE03C0")]
	private static extern void get_event_info(System.Reflection.RuntimeEventInfo ev, out System.Reflection.MonoEventInfo info);

	[Token(Token = "0x6002640")]
	[Address(RVA = "0x3BE03D0", Offset = "0x3BE03D0", VA = "0x3BE03D0")]
	internal static System.Reflection.MonoEventInfo GetEventInfo(System.Reflection.RuntimeEventInfo ev)
	{
		return default(System.Reflection.MonoEventInfo);
	}

	[Token(Token = "0x6002643")]
	[Address(RVA = "0x3BE0730", Offset = "0x3BE0730", VA = "0x3BE0730")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x6002645")]
	[Address(RVA = "0x3BE04B0", Offset = "0x3BE04B0", VA = "0x3BE04B0")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x6002646")]
	[Address(RVA = "0x3BE0810", Offset = "0x3BE0810", VA = "0x3BE0810", Slot = "22")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002647")]
	[Address(RVA = "0x3BE0540", Offset = "0x3BE0540", VA = "0x3BE0540")]
	internal BindingFlags GetBindingFlags()
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x6002648")]
	[Address(RVA = "0x3BE0920", Offset = "0x3BE0920", VA = "0x3BE0920", Slot = "18")]
	public override MethodInfo GetAddMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6002649")]
	[Address(RVA = "0x3BE0980", Offset = "0x3BE0980", VA = "0x3BE0980", Slot = "20")]
	public override MethodInfo GetRaiseMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600264A")]
	[Address(RVA = "0x3BE09E0", Offset = "0x3BE09E0", VA = "0x3BE09E0", Slot = "19")]
	public override MethodInfo GetRemoveMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600264E")]
	[Address(RVA = "0x3BE0AD0", Offset = "0x3BE0AD0", VA = "0x3BE0AD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600264F")]
	[Address(RVA = "0x3BE0B60", Offset = "0x3BE0B60", VA = "0x3BE0B60", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002650")]
	[Address(RVA = "0x3BE0BC0", Offset = "0x3BE0BC0", VA = "0x3BE0BC0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002651")]
	[Address(RVA = "0x3BE0C10", Offset = "0x3BE0C10", VA = "0x3BE0C10", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002653")]
	[Address(RVA = "0x3BE0C80", Offset = "0x3BE0C80", VA = "0x3BE0C80")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeEventInfo monoEvent);

	[Token(Token = "0x6002654")]
	[Address(RVA = "0x3BE0C90", Offset = "0x3BE0C90", VA = "0x3BE0C90")]
	public RuntimeEventInfo()
	{
	}
}
