// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.DefaultSerializationBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.Serialization;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000108")]
public class DefaultSerializationBinder : SerializationBinder, ISerializationBinder
{
	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DefaultSerializationBinder Instance;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x10")]
	private readonly ThreadSafeStore<StructMultiKey<string?, string>, Type> _typeCache;

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x3DD59D0", Offset = "0x3DD59D0", VA = "0x3DD59D0")]
	public DefaultSerializationBinder()
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x3DD5A90", Offset = "0x3DD5A90", VA = "0x3DD5A90")]
	private Type GetTypeFromTypeNameKey(StructMultiKey<string?, string> typeNameKey)
	{
		return null;
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x3DD5EA0", Offset = "0x3DD5EA0", VA = "0x3DD5EA0")]
	private Type GetGenericTypeFromTypeName(string typeName, Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x3DD6260", Offset = "0x3DD6260", VA = "0x3DD6260")]
	private Type GetTypeByName(StructMultiKey<string?, string> typeNameKey)
	{
		return null;
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x3DD62C0", Offset = "0x3DD62C0", VA = "0x3DD62C0", Slot = "5")]
	public override Type BindToType(string? assemblyName, string typeName)
	{
		return null;
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x3DD6360", Offset = "0x3DD6360", VA = "0x3DD6360", Slot = "4")]
	public override void BindToName(Type serializedType, out string? assemblyName, out string? typeName)
	{
	}
}
