using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002DB")]
public abstract class TypeDescriptionProvider
{
	[Token(Token = "0x20002DC")]
	private sealed class EmptyCustomTypeDescriptor : CustomTypeDescriptor
	{
		[Token(Token = "0x60012A0")]
		[Address(RVA = "0x4586400", Offset = "0x4586400", VA = "0x4586400")]
		public EmptyCustomTypeDescriptor()
		{
		}
	}

	[Token(Token = "0x4000E1F")]
	[FieldOffset(Offset = "0x10")]
	private readonly TypeDescriptionProvider _parent;

	[Token(Token = "0x4000E20")]
	[FieldOffset(Offset = "0x18")]
	private EmptyCustomTypeDescriptor _emptyDescriptor;

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x4586250", Offset = "0x4586250", VA = "0x4586250")]
	protected TypeDescriptionProvider()
	{
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x4586260", Offset = "0x4586260", VA = "0x4586260")]
	protected TypeDescriptionProvider(TypeDescriptionProvider parent)
	{
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x4586290", Offset = "0x4586290", VA = "0x4586290", Slot = "4")]
	public virtual object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x4586350", Offset = "0x4586350", VA = "0x4586350", Slot = "5")]
	public virtual IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x4586370", Offset = "0x4586370", VA = "0x4586370", Slot = "6")]
	public virtual ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x4586410", Offset = "0x4586410", VA = "0x4586410", Slot = "7")]
	protected internal virtual IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x4586550", Offset = "0x4586550", VA = "0x4586550", Slot = "8")]
	public virtual string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x45866C0", Offset = "0x45866C0", VA = "0x45866C0")]
	public Type GetReflectionType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x45866E0", Offset = "0x45866E0", VA = "0x45866E0")]
	public Type GetReflectionType(object instance)
	{
		return null;
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x4586770", Offset = "0x4586770", VA = "0x4586770", Slot = "9")]
	public virtual Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x45867A0", Offset = "0x45867A0", VA = "0x45867A0", Slot = "10")]
	public virtual Type GetRuntimeType(Type reflectionType)
	{
		return null;
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x4586910", Offset = "0x4586910", VA = "0x4586910")]
	public ICustomTypeDescriptor GetTypeDescriptor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x4586630", Offset = "0x4586630", VA = "0x4586630")]
	public ICustomTypeDescriptor GetTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x4586930", Offset = "0x4586930", VA = "0x4586930", Slot = "11")]
	public virtual ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x45869D0", Offset = "0x45869D0", VA = "0x45869D0", Slot = "12")]
	public virtual bool IsSupportedType(Type type)
	{
		return default(bool);
	}
}
