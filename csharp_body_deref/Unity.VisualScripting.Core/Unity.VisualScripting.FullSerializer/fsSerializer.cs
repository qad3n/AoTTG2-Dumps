// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsSerializer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x40009CF")]
		[FieldOffset(Offset = "0x10")]
		private Dictionary<int, fsData> _pendingDefinitions;

		[Token(Token = "0x40009D0")]
		[FieldOffset(Offset = "0x18")]
		private HashSet<int> _references;

		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x2E70BC0", Offset = "0x2E6F1C0", VA = "0x182E70BC0")]
		public void WriteDefinition(int id, fsData data)
		{
		}

		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x2E70D20", Offset = "0x2E6F320", VA = "0x182E70D20")]
		public void WriteReference(int id, Dictionary<string, fsData> dict)
		{
		}

		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x2E70B50", Offset = "0x2E6F150", VA = "0x182E70B50")]
		public void Clear()
		{
		}

		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x2E70F50", Offset = "0x2E6F550", VA = "0x182E70F50")]
		public fsLazyCycleDefinitionWriter()
		{
		}
	}

	[Token(Token = "0x40009B5")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<fsConverter> _availableConverters;

	[Token(Token = "0x40009B6")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Type, fsDirectConverter> _availableDirectConverters;

	[Token(Token = "0x40009B7")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<fsObjectProcessor> _processors;

	[Token(Token = "0x40009B8")]
	[FieldOffset(Offset = "0x28")]
	private readonly fsCyclicReferenceManager _references;

	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x30")]
	private readonly fsLazyCycleDefinitionWriter _lazyReferenceWriter;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<Type, Type> _abstractTypeRemap;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<Type, fsBaseConverter> _cachedConverterTypeInstances;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<Type, fsBaseConverter> _cachedConverters;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<Type, List<fsObjectProcessor>> _cachedProcessors;

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x58")]
	public fsContext Context;

	[Token(Token = "0x40009BF")]
	[FieldOffset(Offset = "0x60")]
	public fsConfig Config;

	[Token(Token = "0x40009C0")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<string> _reservedKeywords;

	[Token(Token = "0x40009C1")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string Key_ObjectReference;

	[Token(Token = "0x40009C2")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string Key_ObjectDefinition;

	[Token(Token = "0x40009C3")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string Key_InstanceType;

	[Token(Token = "0x40009C4")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string Key_Version;

	[Token(Token = "0x40009C5")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string Key_Content;

	[Token(Token = "0x40009C6")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly string Key_UnitDefault;

	[Token(Token = "0x40009C7")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly string Key_UnitPosition;

	[Token(Token = "0x40009C8")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly string Key_UnitGuid;

	[Token(Token = "0x40009C9")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly string Key_UnitFormerType;

	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0x50")]
	internal static readonly string Key_UnitFormerValue;

	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0x58")]
	internal static readonly string TypeName_Unit;

	[Token(Token = "0x40009CC")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Type Type_Unit;

	[Token(Token = "0x40009CD")]
	[FieldOffset(Offset = "0x68")]
	internal static readonly string TypeName_MissingType;

	[Token(Token = "0x40009CE")]
	[FieldOffset(Offset = "0x70")]
	private static readonly Type Type_MissingType;

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x2E792F0", Offset = "0x2E778F0", VA = "0x182E792F0")]
	public fsSerializer()
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x2E77F00", Offset = "0x2E76500", VA = "0x182E77F00")]
	private void RemapAbstractStorageTypeToDefaultType(ref Type storageType)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x2E730B0", Offset = "0x2E716B0", VA = "0x182E730B0")]
	public void AddProcessor(fsObjectProcessor processor)
	{
	}

	[Token(Token = "0x60012C2")]
	public void RemoveProcessor<TProcessor>()
	{
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x2E780E0", Offset = "0x2E766E0", VA = "0x182E780E0")]
	public void SetDefaultStorageType(Type abstractType, Type defaultStorageType)
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x2E74F30", Offset = "0x2E73530", VA = "0x182E74F30")]
	private List<fsObjectProcessor> GetProcessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x2E72DD0", Offset = "0x2E713D0", VA = "0x182E72DD0")]
	public void AddConverter(fsBaseConverter converter)
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x2E735F0", Offset = "0x2E71BF0", VA = "0x182E735F0")]
	private fsBaseConverter GetConverter(Type type, Type overrideConverterType)
	{
		return null;
	}

	[Token(Token = "0x60012C7")]
	public fsResult TrySerialize<T>(T instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C8")]
	public fsResult TryDeserialize<T>(fsData data, ref T instance)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x2E78D00", Offset = "0x2E77300", VA = "0x182E78D00")]
	public fsResult TrySerialize(Type storageType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x2E78960", Offset = "0x2E76F60", VA = "0x182E78960")]
	public fsResult TrySerialize(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x2E76900", Offset = "0x2E74F00", VA = "0x182E76900")]
	private fsResult InternalSerialize_1_ProcessCycles(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x2E76F30", Offset = "0x2E75530", VA = "0x182E76F30")]
	private fsResult InternalSerialize_2_Inheritance(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x2E77240", Offset = "0x2E75840", VA = "0x182E77240")]
	private fsResult InternalSerialize_3_ProcessVersioning(Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x2E77530", Offset = "0x2E75B30", VA = "0x182E77530")]
	private fsResult InternalSerialize_4_Converter(Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x2E78920", Offset = "0x2E76F20", VA = "0x182E78920")]
	public fsResult TryDeserialize(fsData data, Type storageType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x2E78410", Offset = "0x2E76A10", VA = "0x182E78410")]
	public fsResult TryDeserialize(fsData data, Type storageType, Type overrideConverterType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x2E751D0", Offset = "0x2E737D0", VA = "0x182E751D0")]
	private fsResult InternalDeserialize_1_CycleReference(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x2E75520", Offset = "0x2E73B20", VA = "0x182E75520")]
	private fsResult InternalDeserialize_2_Version(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x2E75DF0", Offset = "0x2E743F0", VA = "0x182E75DF0")]
	private fsResult InternalDeserialize_3_Inheritance(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x2E76460", Offset = "0x2E74A60", VA = "0x182E76460")]
	private fsResult InternalDeserialize_4_Cycles(Type overrideConverterType, fsData data, Type resultType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x2E76750", Offset = "0x2E74D50", VA = "0x182E76750")]
	private fsResult InternalDeserialize_5_Converter(Type overrideConverterType, fsData data, Type resultType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x2E73AE0", Offset = "0x2E720E0", VA = "0x182E73AE0")]
	private static Type GetDataType(ref fsData data, Type defaultType, ref fsResult deserializeResult)
	{
		return null;
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x2E73530", Offset = "0x2E71B30", VA = "0x182E73530")]
	private static void EnsureDictionary(fsData data)
	{
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x2E78D40", Offset = "0x2E77340", VA = "0x182E78D40")]
	static fsSerializer()
	{
	}

	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x2E77A40", Offset = "0x2E76040", VA = "0x182E77A40")]
	public static bool IsReservedKeyword(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x2E77990", Offset = "0x2E75F90", VA = "0x182E77990")]
	private static bool IsObjectReference(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x2E778E0", Offset = "0x2E75EE0", VA = "0x182E778E0")]
	private static bool IsObjectDefinition(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DC")]
	[Address(RVA = "0x2E77B70", Offset = "0x2E76170", VA = "0x182E77B70")]
	private static bool IsVersioned(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x2E77AC0", Offset = "0x2E760C0", VA = "0x182E77AC0")]
	private static bool IsTypeSpecified(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x2E77E50", Offset = "0x2E76450", VA = "0x182E77E50")]
	private static bool IsWrappedData(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x2E77C20", Offset = "0x2E76220", VA = "0x182E77C20")]
	private static bool IsVisualScriptingUnit(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x2E781F0", Offset = "0x2E767F0", VA = "0x182E781F0")]
	public static void StripDeserializationMetadata(ref fsData data)
	{
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x2E731A0", Offset = "0x2E717A0", VA = "0x182E731A0")]
	private static void ConvertLegacyData(ref fsData data)
	{
	}

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x2E77850", Offset = "0x2E75E50", VA = "0x182E77850")]
	private static void Invoke_OnBeforeSerialize(List<fsObjectProcessor> processors, Type storageType, object instance)
	{
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x2E77670", Offset = "0x2E75C70", VA = "0x182E77670")]
	private static void Invoke_OnAfterSerialize(List<fsObjectProcessor> processors, Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x2E777C0", Offset = "0x2E75DC0", VA = "0x182E777C0")]
	private static void Invoke_OnBeforeDeserialize(List<fsObjectProcessor> processors, Type storageType, ref fsData data)
	{
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x2E77720", Offset = "0x2E75D20", VA = "0x182E77720")]
	private static void Invoke_OnBeforeDeserializeAfterInstanceCreation(List<fsObjectProcessor> processors, Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x2E775C0", Offset = "0x2E75BC0", VA = "0x182E775C0")]
	private static void Invoke_OnAfterDeserialize(List<fsObjectProcessor> processors, Type storageType, object instance)
	{
	}
}
