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
		[Address(RVA = "0x3DD6BB0", Offset = "0x3DD6BB0", VA = "0x3DD6BB0")]
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
		[Address(RVA = "0x3DD6BC0", Offset = "0x3DD6BC0", VA = "0x3DD6BC0")]
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
		[Address(RVA = "0x3DD6BD0", Offset = "0x3DD6BD0", VA = "0x3DD6BD0")]
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
		[Address(RVA = "0x3DD6BE0", Offset = "0x3DD6BE0", VA = "0x3DD6BE0")]
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
		[Address(RVA = "0x3DD6BF0", Offset = "0x3DD6BF0", VA = "0x3DD6BF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x3DD6C00", Offset = "0x3DD6C00", VA = "0x3DD6C00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	internal ObjectConstructor<object>? ParameterizedCreator
	{
		[Token(Token = "0x60007D2")]
		[Address(RVA = "0x3DD6C10", Offset = "0x3DD6C10", VA = "0x3DD6C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x3DD6CE0", Offset = "0x3DD6CE0", VA = "0x3DD6CE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x3DD2380", Offset = "0x3DD2380", VA = "0x3DD2380")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public bool HasParameterizedCreator
	{
		[Token(Token = "0x60007D5")]
		[Address(RVA = "0x3DD6CF0", Offset = "0x3DD6CF0", VA = "0x3DD6CF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x3DD6D00", Offset = "0x3DD6D00", VA = "0x3DD6D00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	internal bool HasParameterizedCreatorInternal
	{
		[Token(Token = "0x60007D7")]
		[Address(RVA = "0x3DD6D10", Offset = "0x3DD6D10", VA = "0x3DD6D10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x3DD12D0", Offset = "0x3DD12D0", VA = "0x3DD12D0")]
	public JsonArrayContract(Type underlyingType)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x3DD7160", Offset = "0x3DD7160", VA = "0x3DD7160")]
	internal IWrappedCollection CreateWrapper(object list)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x3DD75C0", Offset = "0x3DD75C0", VA = "0x3DD75C0")]
	internal IList CreateTemporaryCollection()
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x3DD6F80", Offset = "0x3DD6F80", VA = "0x3DD6F80")]
	private void StoreFSharpListCreatorIfNecessary(Type underlyingType)
	{
	}
}
