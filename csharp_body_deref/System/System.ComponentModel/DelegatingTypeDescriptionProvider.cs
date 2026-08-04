// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DelegatingTypeDescriptionProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x488FD00", Offset = "0x488FD00", VA = "0x488FD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x488FCD0", Offset = "0x488FCD0", VA = "0x488FCD0")]
	internal DelegatingTypeDescriptionProvider(Type type)
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x488FD60", Offset = "0x488FD60", VA = "0x488FD60", Slot = "4")]
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x488FDF0", Offset = "0x488FDF0", VA = "0x488FDF0", Slot = "5")]
	public override IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x488FE70", Offset = "0x488FE70", VA = "0x488FE70", Slot = "8")]
	public override string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x488FEF0", Offset = "0x488FEF0", VA = "0x488FEF0", Slot = "6")]
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x488FF70", Offset = "0x488FF70", VA = "0x488FF70", Slot = "7")]
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x488FFF0", Offset = "0x488FFF0", VA = "0x488FFF0", Slot = "9")]
	public override Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x4890070", Offset = "0x4890070", VA = "0x4890070", Slot = "10")]
	public override Type GetRuntimeType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x48900F0", Offset = "0x48900F0", VA = "0x48900F0", Slot = "11")]
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x4890170", Offset = "0x4890170", VA = "0x4890170", Slot = "12")]
	public override bool IsSupportedType(Type type)
	{
		return default(bool);
	}
}
