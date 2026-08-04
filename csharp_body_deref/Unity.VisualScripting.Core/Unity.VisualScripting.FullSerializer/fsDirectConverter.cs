// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsDirectConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000201")]
public abstract class fsDirectConverter : fsBaseConverter
{
	[Token(Token = "0x17000207")]
	public abstract Type ModelType
	{
		[Token(Token = "0x6001233")]
		get;
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x4D7BD70", Offset = "0x4D7BD70", VA = "0x4D7BD70")]
	protected fsDirectConverter()
	{
	}
}
[Token(Token = "0x2000202")]
public abstract class fsDirectConverter<TModel> : fsDirectConverter
{
	[Token(Token = "0x17000208")]
	public override Type ModelType
	{
		[Token(Token = "0x6001235")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001236")]
	public sealed override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001237")]
	public sealed override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001238")]
	protected abstract fsResult DoSerialize(TModel model, Dictionary<string, fsData> serialized);

	[Token(Token = "0x6001239")]
	protected abstract fsResult DoDeserialize(Dictionary<string, fsData> data, ref TModel model);

	[Token(Token = "0x600123A")]
	protected fsDirectConverter()
	{
	}
}
