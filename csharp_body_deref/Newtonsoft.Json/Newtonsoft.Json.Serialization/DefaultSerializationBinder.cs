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
	[Address(RVA = "0x55CE1B0", Offset = "0x55CD1B0", VA = "0x55CE1B0")]
	public DefaultSerializationBinder()
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x55CE270", Offset = "0x55CD270", VA = "0x55CE270")]
	private Type GetTypeFromTypeNameKey(StructMultiKey<string?, string> typeNameKey)
	{
		return null;
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x55CE680", Offset = "0x55CD680", VA = "0x55CE680")]
	private Type GetGenericTypeFromTypeName(string typeName, Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x55CEA30", Offset = "0x55CDA30", VA = "0x55CEA30")]
	private Type GetTypeByName(StructMultiKey<string?, string> typeNameKey)
	{
		return null;
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x55CEA90", Offset = "0x55CDA90", VA = "0x55CEA90", Slot = "5")]
	public override Type BindToType(string? assemblyName, string typeName)
	{
		return null;
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x55CEB30", Offset = "0x55CDB30", VA = "0x55CEB30", Slot = "4")]
	public override void BindToName(Type serializedType, out string? assemblyName, out string? typeName)
	{
	}
}
