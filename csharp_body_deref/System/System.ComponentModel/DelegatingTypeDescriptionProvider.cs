using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000285")]
internal sealed class DelegatingTypeDescriptionProvider : TypeDescriptionProvider
{
	[Token(Token = "0x4000D48")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type _type;

	[Token(Token = "0x17000384")]
	internal TypeDescriptionProvider Provider
	{
		[Token(Token = "0x6000FD2")]
		[Address(RVA = "0x456AC00", Offset = "0x456AC00", VA = "0x456AC00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x456ABD0", Offset = "0x456ABD0", VA = "0x456ABD0")]
	internal DelegatingTypeDescriptionProvider(Type type)
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x456AC60", Offset = "0x456AC60", VA = "0x456AC60", Slot = "4")]
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x456ACF0", Offset = "0x456ACF0", VA = "0x456ACF0", Slot = "5")]
	public override IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x456AD70", Offset = "0x456AD70", VA = "0x456AD70", Slot = "8")]
	public override string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x456ADF0", Offset = "0x456ADF0", VA = "0x456ADF0", Slot = "6")]
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x456AE70", Offset = "0x456AE70", VA = "0x456AE70", Slot = "7")]
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x456AEF0", Offset = "0x456AEF0", VA = "0x456AEF0", Slot = "9")]
	public override Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x456AF70", Offset = "0x456AF70", VA = "0x456AF70", Slot = "10")]
	public override Type GetRuntimeType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x456AFF0", Offset = "0x456AFF0", VA = "0x456AFF0", Slot = "11")]
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x456B070", Offset = "0x456B070", VA = "0x456B070", Slot = "12")]
	public override bool IsSupportedType(Type type)
	{
		return default(bool);
	}
}
