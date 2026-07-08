using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer.Internal;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000217")]
public class fsSerializer
{
	[Token(Token = "0x2000218")]
	internal class fsLazyCycleDefinitionWriter
	{
		[Token(Token = "0x40009D1")]
		[FieldOffset(Offset = "0x10")]
		private Dictionary<int, fsData> _pendingDefinitions;

		[Token(Token = "0x40009D2")]
		[FieldOffset(Offset = "0x18")]
		private HashSet<int> _references;

		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x4A5F3E0", Offset = "0x4A5F3E0", VA = "0x4A5F3E0")]
		public void WriteDefinition(int id, fsData data)
		{
		}

		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x4A5F090", Offset = "0x4A5F090", VA = "0x4A5F090")]
		public void WriteReference(int id, Dictionary<string, fsData> dict)
		{
		}

		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x4A641B0", Offset = "0x4A641B0", VA = "0x4A641B0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x4A5D1A0", Offset = "0x4A5D1A0", VA = "0x4A5D1A0")]
		public fsLazyCycleDefinitionWriter()
		{
		}
	}

	[Token(Token = "0x40009B7")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<fsConverter> _availableConverters;

	[Token(Token = "0x40009B8")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Type, fsDirectConverter> _availableDirectConverters;

	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<fsObjectProcessor> _processors;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x28")]
	private readonly fsCyclicReferenceManager _references;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x30")]
	private readonly fsLazyCycleDefinitionWriter _lazyReferenceWriter;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<Type, Type> _abstractTypeRemap;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<Type, fsBaseConverter> _cachedConverterTypeInstances;

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<Type, fsBaseConverter> _cachedConverters;

	[Token(Token = "0x40009BF")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<Type, List<fsObjectProcessor>> _cachedProcessors;

	[Token(Token = "0x40009C0")]
	[FieldOffset(Offset = "0x58")]
	public fsContext Context;

	[Token(Token = "0x40009C1")]
	[FieldOffset(Offset = "0x60")]
	public fsConfig Config;

	[Token(Token = "0x40009C2")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<string> _reservedKeywords;

	[Token(Token = "0x40009C3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string Key_ObjectReference;

	[Token(Token = "0x40009C4")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string Key_ObjectDefinition;

	[Token(Token = "0x40009C5")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string Key_InstanceType;

	[Token(Token = "0x40009C6")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string Key_Version;

	[Token(Token = "0x40009C7")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string Key_Content;

	[Token(Token = "0x40009C8")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly string Key_UnitDefault;

	[Token(Token = "0x40009C9")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly string Key_UnitPosition;

	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly string Key_UnitGuid;

	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly string Key_UnitFormerType;

	[Token(Token = "0x40009CC")]
	[FieldOffset(Offset = "0x50")]
	internal static readonly string Key_UnitFormerValue;

	[Token(Token = "0x40009CD")]
	[FieldOffset(Offset = "0x58")]
	internal static readonly string TypeName_Unit;

	[Token(Token = "0x40009CE")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Type Type_Unit;

	[Token(Token = "0x40009CF")]
	[FieldOffset(Offset = "0x68")]
	internal static readonly string TypeName_MissingType;

	[Token(Token = "0x40009D0")]
	[FieldOffset(Offset = "0x70")]
	private static readonly Type Type_MissingType;

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x4A5C280", Offset = "0x4A5C280", VA = "0x4A5C280")]
	public fsSerializer()
	{
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x4A5D5B0", Offset = "0x4A5D5B0", VA = "0x4A5D5B0")]
	private void RemapAbstractStorageTypeToDefaultType(ref Type storageType)
	{
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x4A5D7B0", Offset = "0x4A5D7B0", VA = "0x4A5D7B0")]
	public void AddProcessor(fsObjectProcessor processor)
	{
	}

	[Token(Token = "0x60012B5")]
	public void RemoveProcessor<TProcessor>()
	{
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x4A5D260", Offset = "0x4A5D260", VA = "0x4A5D260")]
	public void SetDefaultStorageType(Type abstractType, Type defaultStorageType)
	{
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x4A5D8A0", Offset = "0x4A5D8A0", VA = "0x4A5D8A0")]
	private List<fsObjectProcessor> GetProcessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x4A5D380", Offset = "0x4A5D380", VA = "0x4A5D380")]
	public void AddConverter(fsBaseConverter converter)
	{
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x4A5DBF0", Offset = "0x4A5DBF0", VA = "0x4A5DBF0")]
	private fsBaseConverter GetConverter(Type type, Type overrideConverterType)
	{
		return null;
	}

	[Token(Token = "0x60012BA")]
	public fsResult TrySerialize<T>(T instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012BB")]
	public fsResult TryDeserialize<T>(fsData data, ref T instance)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x4A5E0D0", Offset = "0x4A5E0D0", VA = "0x4A5E0D0")]
	public fsResult TrySerialize(Type storageType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x4A5E0E0", Offset = "0x4A5E0E0", VA = "0x4A5E0E0")]
	public fsResult TrySerialize(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x4A5E7A0", Offset = "0x4A5E7A0", VA = "0x4A5E7A0")]
	private fsResult InternalSerialize_1_ProcessCycles(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x4A5EBC0", Offset = "0x4A5EBC0", VA = "0x4A5EBC0")]
	private fsResult InternalSerialize_2_Inheritance(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x4A5F530", Offset = "0x4A5F530", VA = "0x4A5F530")]
	private fsResult InternalSerialize_3_ProcessVersioning(Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x4A5FDF0", Offset = "0x4A5FDF0", VA = "0x4A5FDF0")]
	private fsResult InternalSerialize_4_Converter(Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x4A5FE60", Offset = "0x4A5FE60", VA = "0x4A5FE60")]
	public fsResult TryDeserialize(fsData data, Type storageType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x4A5FE70", Offset = "0x4A5FE70", VA = "0x4A5FE70")]
	public fsResult TryDeserialize(fsData data, Type storageType, Type overrideConverterType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x4A60990", Offset = "0x4A60990", VA = "0x4A60990")]
	private fsResult InternalDeserialize_1_CycleReference(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x4A60D10", Offset = "0x4A60D10", VA = "0x4A60D10")]
	private fsResult InternalDeserialize_2_Version(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x4A61710", Offset = "0x4A61710", VA = "0x4A61710")]
	private fsResult InternalDeserialize_3_Inheritance(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x4A63510", Offset = "0x4A63510", VA = "0x4A63510")]
	private fsResult InternalDeserialize_4_Cycles(Type overrideConverterType, fsData data, Type resultType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x4A636B0", Offset = "0x4A636B0", VA = "0x4A636B0")]
	private fsResult InternalDeserialize_5_Converter(Type overrideConverterType, fsData data, Type resultType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x4A61FA0", Offset = "0x4A61FA0", VA = "0x4A61FA0")]
	private static Type GetDataType(ref fsData data, Type defaultType, ref fsResult deserializeResult)
	{
		return null;
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x4A5F790", Offset = "0x4A5F790", VA = "0x4A5F790")]
	private static void EnsureDictionary(fsData data)
	{
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x4A63AB0", Offset = "0x4A63AB0", VA = "0x4A63AB0")]
	static fsSerializer()
	{
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x4A63F20", Offset = "0x4A63F20", VA = "0x4A63F20")]
	public static bool IsReservedKeyword(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x4A60B60", Offset = "0x4A60B60", VA = "0x4A60B60")]
	private static bool IsObjectReference(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x4A61DF0", Offset = "0x4A61DF0", VA = "0x4A61DF0")]
	private static bool IsObjectDefinition(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x4A61340", Offset = "0x4A61340", VA = "0x4A61340")]
	private static bool IsVersioned(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x4A61EF0", Offset = "0x4A61EF0", VA = "0x4A61EF0")]
	private static bool IsTypeSpecified(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x4A637F0", Offset = "0x4A637F0", VA = "0x4A637F0")]
	private static bool IsWrappedData(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x4A638A0", Offset = "0x4A638A0", VA = "0x4A638A0")]
	private static bool IsVisualScriptingUnit(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x4A63FC0", Offset = "0x4A63FC0", VA = "0x4A63FC0")]
	public static void StripDeserializationMetadata(ref fsData data)
	{
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x4A605C0", Offset = "0x4A605C0", VA = "0x4A605C0")]
	private static void ConvertLegacyData(ref fsData data)
	{
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x4A5E650", Offset = "0x4A5E650", VA = "0x4A5E650")]
	private static void Invoke_OnBeforeSerialize(List<fsObjectProcessor> processors, Type storageType, object instance)
	{
	}

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x4A5E700", Offset = "0x4A5E700", VA = "0x4A5E700")]
	private static void Invoke_OnAfterSerialize(List<fsObjectProcessor> processors, Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x4A60460", Offset = "0x4A60460", VA = "0x4A60460")]
	private static void Invoke_OnBeforeDeserialize(List<fsObjectProcessor> processors, Type storageType, ref fsData data)
	{
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x4A63460", Offset = "0x4A63460", VA = "0x4A63460")]
	private static void Invoke_OnBeforeDeserializeAfterInstanceCreation(List<fsObjectProcessor> processors, Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x4A60510", Offset = "0x4A60510", VA = "0x4A60510")]
	private static void Invoke_OnAfterDeserialize(List<fsObjectProcessor> processors, Type storageType, object instance)
	{
	}
}
