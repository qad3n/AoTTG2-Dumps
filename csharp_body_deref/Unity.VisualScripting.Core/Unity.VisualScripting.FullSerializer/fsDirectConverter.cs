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

[Token(Token = "0x2000208")]
public abstract class fsDirectConverter : fsBaseConverter
{
	[Token(Token = "0x17000214")]
	public abstract Type ModelType
	{
		[Token(Token = "0x600126B")]
		get;
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected fsDirectConverter()
	{
	}
}
[Token(Token = "0x2000209")]
public abstract class fsDirectConverter<TModel> : fsDirectConverter
{
	[Token(Token = "0x17000215")]
	public override Type ModelType
	{
		[Token(Token = "0x600126D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600126E")]
	public sealed override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600126F")]
	public sealed override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001270")]
	protected abstract fsResult DoSerialize(TModel model, Dictionary<string, fsData> serialized);

	[Token(Token = "0x6001271")]
	protected abstract fsResult DoDeserialize(Dictionary<string, fsData> data, ref TModel model);

	[Token(Token = "0x6001272")]
	protected fsDirectConverter()
	{
	}
}
