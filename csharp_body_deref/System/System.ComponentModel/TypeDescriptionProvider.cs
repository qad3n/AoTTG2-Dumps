// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TypeDescriptionProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001A7")]
public abstract class TypeDescriptionProvider
{
	[Token(Token = "0x20001A8")]
	private sealed class EmptyCustomTypeDescriptor : CustomTypeDescriptor
	{
		[Token(Token = "0x6000B28")]
		[Address(RVA = "0x624A960", Offset = "0x6249960", VA = "0x624A960")]
		public EmptyCustomTypeDescriptor()
		{
		}
	}

	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x10")]
	private readonly TypeDescriptionProvider _parent;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x18")]
	private EmptyCustomTypeDescriptor _emptyDescriptor;

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x624A7B0", Offset = "0x62497B0", VA = "0x624A7B0")]
	protected TypeDescriptionProvider()
	{
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x624A7C0", Offset = "0x62497C0", VA = "0x624A7C0")]
	protected TypeDescriptionProvider(TypeDescriptionProvider parent)
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x624A7F0", Offset = "0x62497F0", VA = "0x624A7F0", Slot = "4")]
	public virtual object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x624A8B0", Offset = "0x62498B0", VA = "0x624A8B0", Slot = "5")]
	public virtual IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x624A8D0", Offset = "0x62498D0", VA = "0x624A8D0", Slot = "6")]
	public virtual ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x624A970", Offset = "0x6249970", VA = "0x624A970", Slot = "7")]
	protected internal virtual IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x624AAB0", Offset = "0x6249AB0", VA = "0x624AAB0", Slot = "8")]
	public virtual string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x624AC20", Offset = "0x6249C20", VA = "0x624AC20")]
	public Type GetReflectionType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x624AC40", Offset = "0x6249C40", VA = "0x624AC40")]
	public Type GetReflectionType(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x624ACD0", Offset = "0x6249CD0", VA = "0x624ACD0", Slot = "9")]
	public virtual Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x624AD00", Offset = "0x6249D00", VA = "0x624AD00", Slot = "10")]
	public virtual Type GetRuntimeType(Type reflectionType)
	{
		return null;
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x624AE70", Offset = "0x6249E70", VA = "0x624AE70")]
	public ICustomTypeDescriptor GetTypeDescriptor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x624AB90", Offset = "0x6249B90", VA = "0x624AB90")]
	public ICustomTypeDescriptor GetTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x624AE90", Offset = "0x6249E90", VA = "0x624AE90", Slot = "11")]
	public virtual ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x624AF30", Offset = "0x6249F30", VA = "0x624AF30", Slot = "12")]
	public virtual bool IsSupportedType(Type type)
	{
		return default(bool);
	}
}
