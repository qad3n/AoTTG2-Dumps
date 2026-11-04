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

[Token(Token = "0x2000190")]
internal sealed class DelegatingTypeDescriptionProvider : TypeDescriptionProvider
{
	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type _type;

	[Token(Token = "0x170001F3")]
	internal TypeDescriptionProvider Provider
	{
		[Token(Token = "0x6000A1A")]
		[Address(RVA = "0x289BA40", Offset = "0x289A040", VA = "0x18289BA40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x289BA00", Offset = "0x289A000", VA = "0x18289BA00")]
	internal DelegatingTypeDescriptionProvider(Type type)
	{
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x289B550", Offset = "0x2899B50", VA = "0x18289B550", Slot = "4")]
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x289B5E0", Offset = "0x2899BE0", VA = "0x18289B5E0", Slot = "5")]
	public override IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x289B760", Offset = "0x2899D60", VA = "0x18289B760", Slot = "8")]
	public override string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x289B660", Offset = "0x2899C60", VA = "0x18289B660", Slot = "6")]
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x289B6E0", Offset = "0x2899CE0", VA = "0x18289B6E0", Slot = "7")]
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x289B7E0", Offset = "0x2899DE0", VA = "0x18289B7E0", Slot = "9")]
	public override Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x289B870", Offset = "0x2899E70", VA = "0x18289B870", Slot = "10")]
	public override Type GetRuntimeType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x289B8F0", Offset = "0x2899EF0", VA = "0x18289B8F0", Slot = "11")]
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x289B980", Offset = "0x2899F80", VA = "0x18289B980", Slot = "12")]
	public override bool IsSupportedType(Type type)
	{
		return default(bool);
	}
}
