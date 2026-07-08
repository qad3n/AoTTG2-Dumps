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
		[Address(RVA = "0x3AE1260", Offset = "0x3AE1260", VA = "0x3AE1260")]
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
		[Address(RVA = "0x3AE1270", Offset = "0x3AE1270", VA = "0x3AE1270")]
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
		[Address(RVA = "0x3AE1280", Offset = "0x3AE1280", VA = "0x3AE1280")]
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
		[Address(RVA = "0x3AE1290", Offset = "0x3AE1290", VA = "0x3AE1290")]
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
		[Address(RVA = "0x3AE12A0", Offset = "0x3AE12A0", VA = "0x3AE12A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x3AE12B0", Offset = "0x3AE12B0", VA = "0x3AE12B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	internal ObjectConstructor<object>? ParameterizedCreator
	{
		[Token(Token = "0x60007D2")]
		[Address(RVA = "0x3AE12C0", Offset = "0x3AE12C0", VA = "0x3AE12C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x3AE1390", Offset = "0x3AE1390", VA = "0x3AE1390")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x3ADCA30", Offset = "0x3ADCA30", VA = "0x3ADCA30")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public bool HasParameterizedCreator
	{
		[Token(Token = "0x60007D5")]
		[Address(RVA = "0x3AE13A0", Offset = "0x3AE13A0", VA = "0x3AE13A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x3AE13B0", Offset = "0x3AE13B0", VA = "0x3AE13B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	internal bool HasParameterizedCreatorInternal
	{
		[Token(Token = "0x60007D7")]
		[Address(RVA = "0x3AE13C0", Offset = "0x3AE13C0", VA = "0x3AE13C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x3ADB980", Offset = "0x3ADB980", VA = "0x3ADB980")]
	public JsonArrayContract(Type underlyingType)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x3AE1810", Offset = "0x3AE1810", VA = "0x3AE1810")]
	internal IWrappedCollection CreateWrapper(object list)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x3AE1C70", Offset = "0x3AE1C70", VA = "0x3AE1C70")]
	internal IList CreateTemporaryCollection()
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x3AE1630", Offset = "0x3AE1630", VA = "0x3AE1630")]
	private void StoreFSharpListCreatorIfNecessary(Type underlyingType)
	{
	}
}
