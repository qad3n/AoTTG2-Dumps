using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000208")]
public abstract class fsDirectConverter : fsBaseConverter
{
	[Token(Token = "0x17000211")]
	public abstract Type ModelType
	{
		[Token(Token = "0x600125E")]
		get;
	}

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x4A568B0", Offset = "0x4A568B0", VA = "0x4A568B0")]
	protected fsDirectConverter()
	{
	}
}
[Token(Token = "0x2000209")]
public abstract class fsDirectConverter<TModel> : fsDirectConverter
{
	[Token(Token = "0x17000212")]
	public override Type ModelType
	{
		[Token(Token = "0x6001260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001261")]
	public sealed override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001262")]
	public sealed override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001263")]
	protected abstract fsResult DoSerialize(TModel model, Dictionary<string, fsData> serialized);

	[Token(Token = "0x6001264")]
	protected abstract fsResult DoDeserialize(Dictionary<string, fsData> data, ref TModel model);

	[Token(Token = "0x6001265")]
	protected fsDirectConverter()
	{
	}
}
