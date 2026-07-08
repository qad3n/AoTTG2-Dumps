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
	[Address(RVA = "0x3AE0080", Offset = "0x3AE0080", VA = "0x3AE0080")]
	public DefaultSerializationBinder()
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x3AE0140", Offset = "0x3AE0140", VA = "0x3AE0140")]
	private Type GetTypeFromTypeNameKey(StructMultiKey<string?, string> typeNameKey)
	{
		return null;
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x3AE0550", Offset = "0x3AE0550", VA = "0x3AE0550")]
	private Type GetGenericTypeFromTypeName(string typeName, Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x3AE0910", Offset = "0x3AE0910", VA = "0x3AE0910")]
	private Type GetTypeByName(StructMultiKey<string?, string> typeNameKey)
	{
		return null;
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x3AE0970", Offset = "0x3AE0970", VA = "0x3AE0970", Slot = "5")]
	public override Type BindToType(string? assemblyName, string typeName)
	{
		return null;
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x3AE0A10", Offset = "0x3AE0A10", VA = "0x3AE0A10", Slot = "4")]
	public override void BindToName(Type serializedType, out string? assemblyName, out string? typeName)
	{
	}
}
