// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonArrayContract
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000112")]
public class JsonArrayContract : JsonContainerContract
{
	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0xD0")]
	private readonly Type? _genericCollectionDefinitionType;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0xD8")]
	private Type? _genericWrapperType;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0xE0")]
	private ObjectConstructor<object>? _genericWrapperCreator;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0xE8")]
	private Func<object>? _genericTemporaryCollectionCreator;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0xF8")]
	private readonly ConstructorInfo? _parameterizedConstructor;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x100")]
	private ObjectConstructor<object>? _parameterizedCreator;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x108")]
	private ObjectConstructor<object>? _overrideCreator;

	[Token(Token = "0x170000F9")]
	public Type? CollectionItemType
	{
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x55CF330", Offset = "0x55CE330", VA = "0x55CF330")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	public bool IsMultidimensionalArray
	{
		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x55CF340", Offset = "0x55CE340", VA = "0x55CF340")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	internal bool IsArray
	{
		[Token(Token = "0x60007CE")]
		[Address(RVA = "0x55CF350", Offset = "0x55CE350", VA = "0x55CF350")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	internal bool ShouldCreateWrapper
	{
		[Token(Token = "0x60007CF")]
		[Address(RVA = "0x55CF360", Offset = "0x55CE360", VA = "0x55CF360")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FD")]
	internal bool CanDeserialize
	{
		[Token(Token = "0x60007D0")]
		[Address(RVA = "0x55CF370", Offset = "0x55CE370", VA = "0x55CF370")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x55CF380", Offset = "0x55CE380", VA = "0x55CF380")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	internal ObjectConstructor<object>? ParameterizedCreator
	{
		[Token(Token = "0x60007D2")]
		[Address(RVA = "0x55CF390", Offset = "0x55CE390", VA = "0x55CF390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x55CF460", Offset = "0x55CE460", VA = "0x55CF460")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x55CAC80", Offset = "0x55C9C80", VA = "0x55CAC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public bool HasParameterizedCreator
	{
		[Token(Token = "0x60007D5")]
		[Address(RVA = "0x55CF470", Offset = "0x55CE470", VA = "0x55CF470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x55CF480", Offset = "0x55CE480", VA = "0x55CF480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	internal bool HasParameterizedCreatorInternal
	{
		[Token(Token = "0x60007D7")]
		[Address(RVA = "0x55CF490", Offset = "0x55CE490", VA = "0x55CF490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x55C9B90", Offset = "0x55C8B90", VA = "0x55C9B90")]
	public JsonArrayContract(Type underlyingType)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x55CF8C0", Offset = "0x55CE8C0", VA = "0x55CF8C0")]
	internal IWrappedCollection CreateWrapper(object list)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x55CFD20", Offset = "0x55CED20", VA = "0x55CFD20")]
	internal IList CreateTemporaryCollection()
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x55CF700", Offset = "0x55CE700", VA = "0x55CF700")]
	private void StoreFSharpListCreatorIfNecessary(Type underlyingType)
	{
	}
}
