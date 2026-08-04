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

[Token(Token = "0x20002DB")]
public abstract class TypeDescriptionProvider
{
	[Token(Token = "0x20002DC")]
	private sealed class EmptyCustomTypeDescriptor : CustomTypeDescriptor
	{
		[Token(Token = "0x60012A0")]
		[Address(RVA = "0x48AB500", Offset = "0x48AB500", VA = "0x48AB500")]
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
	[Address(RVA = "0x48AB350", Offset = "0x48AB350", VA = "0x48AB350")]
	protected TypeDescriptionProvider()
	{
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x48AB360", Offset = "0x48AB360", VA = "0x48AB360")]
	protected TypeDescriptionProvider(TypeDescriptionProvider parent)
	{
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x48AB390", Offset = "0x48AB390", VA = "0x48AB390", Slot = "4")]
	public virtual object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x48AB450", Offset = "0x48AB450", VA = "0x48AB450", Slot = "5")]
	public virtual IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x48AB470", Offset = "0x48AB470", VA = "0x48AB470", Slot = "6")]
	public virtual ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x48AB510", Offset = "0x48AB510", VA = "0x48AB510", Slot = "7")]
	protected internal virtual IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x48AB650", Offset = "0x48AB650", VA = "0x48AB650", Slot = "8")]
	public virtual string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x48AB7C0", Offset = "0x48AB7C0", VA = "0x48AB7C0")]
	public Type GetReflectionType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x48AB7E0", Offset = "0x48AB7E0", VA = "0x48AB7E0")]
	public Type GetReflectionType(object instance)
	{
		return null;
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x48AB870", Offset = "0x48AB870", VA = "0x48AB870", Slot = "9")]
	public virtual Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x48AB8A0", Offset = "0x48AB8A0", VA = "0x48AB8A0", Slot = "10")]
	public virtual Type GetRuntimeType(Type reflectionType)
	{
		return null;
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x48ABA10", Offset = "0x48ABA10", VA = "0x48ABA10")]
	public ICustomTypeDescriptor GetTypeDescriptor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x48AB730", Offset = "0x48AB730", VA = "0x48AB730")]
	public ICustomTypeDescriptor GetTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x48ABA30", Offset = "0x48ABA30", VA = "0x48ABA30", Slot = "11")]
	public virtual ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x48ABAD0", Offset = "0x48ABAD0", VA = "0x48ABAD0", Slot = "12")]
	public virtual bool IsSupportedType(Type type)
	{
		return default(bool);
	}
}
