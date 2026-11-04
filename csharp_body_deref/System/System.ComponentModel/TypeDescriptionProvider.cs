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

[Token(Token = "0x20001E6")]
public abstract class TypeDescriptionProvider
{
	[Token(Token = "0x20001E7")]
	private sealed class EmptyCustomTypeDescriptor : CustomTypeDescriptor
	{
		[Token(Token = "0x6000CE8")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public EmptyCustomTypeDescriptor()
		{
		}
	}

	[Token(Token = "0x4000756")]
	[FieldOffset(Offset = "0x10")]
	private readonly TypeDescriptionProvider _parent;

	[Token(Token = "0x4000757")]
	[FieldOffset(Offset = "0x18")]
	private EmptyCustomTypeDescriptor _emptyDescriptor;

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected TypeDescriptionProvider()
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	protected TypeDescriptionProvider(TypeDescriptionProvider parent)
	{
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x28CA240", Offset = "0x28C8840", VA = "0x1828CA240", Slot = "4")]
	public virtual object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x28CA300", Offset = "0x28C8900", VA = "0x1828CA300", Slot = "5")]
	public virtual IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x28CA320", Offset = "0x28C8920", VA = "0x1828CA320", Slot = "6")]
	public virtual ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x28CA3C0", Offset = "0x28C89C0", VA = "0x1828CA3C0", Slot = "7")]
	protected internal virtual IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x28CA490", Offset = "0x28C8A90", VA = "0x1828CA490", Slot = "8")]
	public virtual string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x193D700", Offset = "0x193BD00", VA = "0x18193D700")]
	public Type GetReflectionType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x28CA5B0", Offset = "0x28C8BB0", VA = "0x1828CA5B0")]
	public Type GetReflectionType(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x28CA590", Offset = "0x28C8B90", VA = "0x1828CA590", Slot = "9")]
	public virtual Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x28CA640", Offset = "0x28C8C40", VA = "0x1828CA640", Slot = "10")]
	public virtual Type GetRuntimeType(Type reflectionType)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x28CA910", Offset = "0x28C8F10", VA = "0x1828CA910")]
	public ICustomTypeDescriptor GetTypeDescriptor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x28CA880", Offset = "0x28C8E80", VA = "0x1828CA880")]
	public ICustomTypeDescriptor GetTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x28CA7C0", Offset = "0x28C8DC0", VA = "0x1828CA7C0", Slot = "11")]
	public virtual ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x28CA930", Offset = "0x28C8F30", VA = "0x1828CA930", Slot = "12")]
	public virtual bool IsSupportedType(Type type)
	{
		return default(bool);
	}
}
