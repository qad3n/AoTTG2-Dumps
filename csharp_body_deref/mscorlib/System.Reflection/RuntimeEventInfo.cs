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
		[Address(RVA = "0x4EFA910", Offset = "0x4EFA910", VA = "0x4EFA910", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000554")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x6002642")]
		[Address(RVA = "0x4EFAA10", Offset = "0x4EFAA10", VA = "0x4EFAA10")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000555")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x6002644")]
		[Address(RVA = "0x4EFAC80", Offset = "0x4EFAC80", VA = "0x4EFAC80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000556")]
	public override Type DeclaringType
	{
		[Token(Token = "0x600264B")]
		[Address(RVA = "0x4EFAF20", Offset = "0x4EFAF20", VA = "0x4EFAF20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000557")]
	public override Type ReflectedType
	{
		[Token(Token = "0x600264C")]
		[Address(RVA = "0x4EFAF50", Offset = "0x4EFAF50", VA = "0x4EFAF50", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000558")]
	public override string Name
	{
		[Token(Token = "0x600264D")]
		[Address(RVA = "0x4EFAF80", Offset = "0x4EFAF80", VA = "0x4EFAF80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000559")]
	public override int MetadataToken
	{
		[Token(Token = "0x6002652")]
		[Address(RVA = "0x4EFB150", Offset = "0x4EFB150", VA = "0x4EFB150", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600263F")]
	[Address(RVA = "0x4EFA8A0", Offset = "0x4EFA8A0", VA = "0x4EFA8A0")]
	private static extern void get_event_info(System.Reflection.RuntimeEventInfo ev, out System.Reflection.MonoEventInfo info);

	[Token(Token = "0x6002640")]
	[Address(RVA = "0x4EFA8B0", Offset = "0x4EFA8B0", VA = "0x4EFA8B0")]
	internal static System.Reflection.MonoEventInfo GetEventInfo(System.Reflection.RuntimeEventInfo ev)
	{
		return default(System.Reflection.MonoEventInfo);
	}

	[Token(Token = "0x6002643")]
	[Address(RVA = "0x4EFAC10", Offset = "0x4EFAC10", VA = "0x4EFAC10")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x6002645")]
	[Address(RVA = "0x4EFA990", Offset = "0x4EFA990", VA = "0x4EFA990")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x6002646")]
	[Address(RVA = "0x4EFACF0", Offset = "0x4EFACF0", VA = "0x4EFACF0", Slot = "22")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002647")]
	[Address(RVA = "0x4EFAA20", Offset = "0x4EFAA20", VA = "0x4EFAA20")]
	internal BindingFlags GetBindingFlags()
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x6002648")]
	[Address(RVA = "0x4EFAE00", Offset = "0x4EFAE00", VA = "0x4EFAE00", Slot = "18")]
	public override MethodInfo GetAddMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6002649")]
	[Address(RVA = "0x4EFAE60", Offset = "0x4EFAE60", VA = "0x4EFAE60", Slot = "20")]
	public override MethodInfo GetRaiseMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600264A")]
	[Address(RVA = "0x4EFAEC0", Offset = "0x4EFAEC0", VA = "0x4EFAEC0", Slot = "19")]
	public override MethodInfo GetRemoveMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600264E")]
	[Address(RVA = "0x4EFAFB0", Offset = "0x4EFAFB0", VA = "0x4EFAFB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600264F")]
	[Address(RVA = "0x4EFB040", Offset = "0x4EFB040", VA = "0x4EFB040", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002650")]
	[Address(RVA = "0x4EFB0A0", Offset = "0x4EFB0A0", VA = "0x4EFB0A0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002651")]
	[Address(RVA = "0x4EFB0F0", Offset = "0x4EFB0F0", VA = "0x4EFB0F0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002653")]
	[Address(RVA = "0x4EFB160", Offset = "0x4EFB160", VA = "0x4EFB160")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeEventInfo monoEvent);

	[Token(Token = "0x6002654")]
	[Address(RVA = "0x4EFB170", Offset = "0x4EFB170", VA = "0x4EFB170")]
	public RuntimeEventInfo()
	{
	}
}
