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
[Token(Token = "0x200051C")]
internal sealed class RuntimeEventInfo : EventInfo, ISerializable
{
	[Token(Token = "0x4001492")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr klass;

	[Token(Token = "0x4001493")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IntPtr handle;

	[Token(Token = "0x17000555")]
	public override Module Module
	{
		[Token(Token = "0x6002692")]
		[Address(RVA = "0x53E7040", Offset = "0x53E6040", VA = "0x53E7040", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000556")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x6002693")]
		[Address(RVA = "0x53E7140", Offset = "0x53E6140", VA = "0x53E7140")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000557")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x6002695")]
		[Address(RVA = "0x53E7380", Offset = "0x53E6380", VA = "0x53E7380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000558")]
	public override Type DeclaringType
	{
		[Token(Token = "0x600269C")]
		[Address(RVA = "0x53E7620", Offset = "0x53E6620", VA = "0x53E7620", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000559")]
	public override Type ReflectedType
	{
		[Token(Token = "0x600269D")]
		[Address(RVA = "0x53E7650", Offset = "0x53E6650", VA = "0x53E7650", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055A")]
	public override string Name
	{
		[Token(Token = "0x600269E")]
		[Address(RVA = "0x53E7680", Offset = "0x53E6680", VA = "0x53E7680", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055B")]
	public override int MetadataToken
	{
		[Token(Token = "0x60026A3")]
		[Address(RVA = "0x53E7850", Offset = "0x53E6850", VA = "0x53E7850", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002690")]
	[Address(RVA = "0x53E6FD0", Offset = "0x53E5FD0", VA = "0x53E6FD0")]
	private static extern void get_event_info(System.Reflection.RuntimeEventInfo ev, out System.Reflection.MonoEventInfo info);

	[Token(Token = "0x6002691")]
	[Address(RVA = "0x53E6FE0", Offset = "0x53E5FE0", VA = "0x53E6FE0")]
	internal static System.Reflection.MonoEventInfo GetEventInfo(System.Reflection.RuntimeEventInfo ev)
	{
		return default(System.Reflection.MonoEventInfo);
	}

	[Token(Token = "0x6002694")]
	[Address(RVA = "0x53E7310", Offset = "0x53E6310", VA = "0x53E7310")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x6002696")]
	[Address(RVA = "0x53E70C0", Offset = "0x53E60C0", VA = "0x53E70C0")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x6002697")]
	[Address(RVA = "0x53E73F0", Offset = "0x53E63F0", VA = "0x53E73F0", Slot = "22")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002698")]
	[Address(RVA = "0x53E7150", Offset = "0x53E6150", VA = "0x53E7150")]
	internal BindingFlags GetBindingFlags()
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x6002699")]
	[Address(RVA = "0x53E7500", Offset = "0x53E6500", VA = "0x53E7500", Slot = "18")]
	public override MethodInfo GetAddMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600269A")]
	[Address(RVA = "0x53E7560", Offset = "0x53E6560", VA = "0x53E7560", Slot = "20")]
	public override MethodInfo GetRaiseMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600269B")]
	[Address(RVA = "0x53E75C0", Offset = "0x53E65C0", VA = "0x53E75C0", Slot = "19")]
	public override MethodInfo GetRemoveMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600269F")]
	[Address(RVA = "0x53E76B0", Offset = "0x53E66B0", VA = "0x53E76B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60026A0")]
	[Address(RVA = "0x53E7740", Offset = "0x53E6740", VA = "0x53E7740", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026A1")]
	[Address(RVA = "0x53E77A0", Offset = "0x53E67A0", VA = "0x53E77A0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026A2")]
	[Address(RVA = "0x53E77F0", Offset = "0x53E67F0", VA = "0x53E77F0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026A4")]
	[Address(RVA = "0x53E7860", Offset = "0x53E6860", VA = "0x53E7860")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeEventInfo monoEvent);

	[Token(Token = "0x60026A5")]
	[Address(RVA = "0x53E7870", Offset = "0x53E6870", VA = "0x53E7870")]
	public RuntimeEventInfo()
	{
	}
}
