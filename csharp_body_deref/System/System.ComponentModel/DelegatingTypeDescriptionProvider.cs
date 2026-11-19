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

[Token(Token = "0x2000151")]
internal sealed class DelegatingTypeDescriptionProvider : TypeDescriptionProvider
{
	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type _type;

	[Token(Token = "0x170001C4")]
	internal TypeDescriptionProvider Provider
	{
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x622FDE0", Offset = "0x622EDE0", VA = "0x622FDE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x622FDB0", Offset = "0x622EDB0", VA = "0x622FDB0")]
	internal DelegatingTypeDescriptionProvider(Type type)
	{
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x622FE40", Offset = "0x622EE40", VA = "0x622FE40", Slot = "4")]
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x622FED0", Offset = "0x622EED0", VA = "0x622FED0", Slot = "5")]
	public override IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x622FF50", Offset = "0x622EF50", VA = "0x622FF50", Slot = "8")]
	public override string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x622FFD0", Offset = "0x622EFD0", VA = "0x622FFD0", Slot = "6")]
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x6230050", Offset = "0x622F050", VA = "0x6230050", Slot = "7")]
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x62300D0", Offset = "0x622F0D0", VA = "0x62300D0", Slot = "9")]
	public override Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x6230150", Offset = "0x622F150", VA = "0x6230150", Slot = "10")]
	public override Type GetRuntimeType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x62301D0", Offset = "0x622F1D0", VA = "0x62301D0", Slot = "11")]
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x6230250", Offset = "0x622F250", VA = "0x6230250", Slot = "12")]
	public override bool IsSupportedType(Type type)
	{
		return default(bool);
	}
}
