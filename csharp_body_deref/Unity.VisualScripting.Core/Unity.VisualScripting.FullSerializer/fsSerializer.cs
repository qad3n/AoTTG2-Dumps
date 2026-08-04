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

[Token(Token = "0x2000210")]
public class fsSerializer
{
	[Token(Token = "0x2000211")]
	internal class fsLazyCycleDefinitionWriter
	{
		[Token(Token = "0x40009BF")]
		[FieldOffset(Offset = "0x10")]
		private Dictionary<int, fsData> _pendingDefinitions;

		[Token(Token = "0x40009C0")]
		[FieldOffset(Offset = "0x18")]
		private HashSet<int> _references;

		[Token(Token = "0x60012AF")]
		[Address(RVA = "0x4D88000", Offset = "0x4D88000", VA = "0x4D88000")]
		public void WriteDefinition(int id, fsData data)
		{
		}

		[Token(Token = "0x60012B0")]
		[Address(RVA = "0x4D88150", Offset = "0x4D88150", VA = "0x4D88150")]
		public void WriteReference(int id, Dictionary<string, fsData> dict)
		{
		}

		[Token(Token = "0x60012B1")]
		[Address(RVA = "0x4D88390", Offset = "0x4D88390", VA = "0x4D88390")]
		public void Clear()
		{
		}

		[Token(Token = "0x60012B2")]
		[Address(RVA = "0x4D88400", Offset = "0x4D88400", VA = "0x4D88400")]
		public fsLazyCycleDefinitionWriter()
		{
		}
	}

	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<fsConverter> _availableConverters;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Type, fsDirectConverter> _availableDirectConverters;

	[Token(Token = "0x40009A7")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<fsObjectProcessor> _processors;

	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x28")]
	private readonly fsCyclicReferenceManager _references;

	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x30")]
	private readonly fsLazyCycleDefinitionWriter _lazyReferenceWriter;

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<Type, Type> _abstractTypeRemap;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<Type, fsBaseConverter> _cachedConverterTypeInstances;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<Type, fsBaseConverter> _cachedConverters;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<Type, List<fsObjectProcessor>> _cachedProcessors;

	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0x58")]
	public fsContext Context;

	[Token(Token = "0x40009AF")]
	[FieldOffset(Offset = "0x60")]
	public fsConfig Config;

	[Token(Token = "0x40009B0")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<string> _reservedKeywords;

	[Token(Token = "0x40009B1")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string Key_ObjectReference;

	[Token(Token = "0x40009B2")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string Key_ObjectDefinition;

	[Token(Token = "0x40009B3")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string Key_InstanceType;

	[Token(Token = "0x40009B4")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string Key_Version;

	[Token(Token = "0x40009B5")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string Key_Content;

	[Token(Token = "0x40009B6")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly string Key_UnitDefault;

	[Token(Token = "0x40009B7")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly string Key_UnitPosition;

	[Token(Token = "0x40009B8")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly string Key_UnitGuid;

	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly string Key_UnitFormerType;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x50")]
	internal static readonly string Key_UnitFormerValue;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x58")]
	internal static readonly string TypeName_Unit;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Type Type_Unit;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x68")]
	internal static readonly string TypeName_MissingType;

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x70")]
	private static readonly Type Type_MissingType;

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x4D814D0", Offset = "0x4D814D0", VA = "0x4D814D0")]
	public fsSerializer()
	{
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x4D826A0", Offset = "0x4D826A0", VA = "0x4D826A0")]
	private void RemapAbstractStorageTypeToDefaultType(ref Type storageType)
	{
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x4D828C0", Offset = "0x4D828C0", VA = "0x4D828C0")]
	public void AddProcessor(fsObjectProcessor processor)
	{
	}

	[Token(Token = "0x600128A")]
	public void RemoveProcessor<TProcessor>()
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x4D82350", Offset = "0x4D82350", VA = "0x4D82350")]
	public void SetDefaultStorageType(Type abstractType, Type defaultStorageType)
	{
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x4D829B0", Offset = "0x4D829B0", VA = "0x4D829B0")]
	private List<fsObjectProcessor> GetProcessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x4D82470", Offset = "0x4D82470", VA = "0x4D82470")]
	public void AddConverter(fsBaseConverter converter)
	{
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x4D82D00", Offset = "0x4D82D00", VA = "0x4D82D00")]
	private fsBaseConverter GetConverter(Type type, Type overrideConverterType)
	{
		return null;
	}

	[Token(Token = "0x600128F")]
	public fsResult TrySerialize<T>(T instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001290")]
	public fsResult TryDeserialize<T>(fsData data, ref T instance)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x4D68EE0", Offset = "0x4D68EE0", VA = "0x4D68EE0")]
	public fsResult TrySerialize(Type storageType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x4D71E30", Offset = "0x4D71E30", VA = "0x4D71E30")]
	public fsResult TrySerialize(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x4D83340", Offset = "0x4D83340", VA = "0x4D83340")]
	private fsResult InternalSerialize_1_ProcessCycles(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x4D837C0", Offset = "0x4D837C0", VA = "0x4D837C0")]
	private fsResult InternalSerialize_2_Inheritance(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x4D83BC0", Offset = "0x4D83BC0", VA = "0x4D83BC0")]
	private fsResult InternalSerialize_3_ProcessVersioning(Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x4D84040", Offset = "0x4D84040", VA = "0x4D84040")]
	private fsResult InternalSerialize_4_Converter(Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x4D695D0", Offset = "0x4D695D0", VA = "0x4D695D0")]
	public fsResult TryDeserialize(fsData data, Type storageType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x4D72710", Offset = "0x4D72710", VA = "0x4D72710")]
	public fsResult TryDeserialize(fsData data, Type storageType, Type overrideConverterType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x4D846D0", Offset = "0x4D846D0", VA = "0x4D846D0")]
	private fsResult InternalDeserialize_1_CycleReference(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x4D84A00", Offset = "0x4D84A00", VA = "0x4D84A00")]
	private fsResult InternalDeserialize_2_Version(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x4D851B0", Offset = "0x4D851B0", VA = "0x4D851B0")]
	private fsResult InternalDeserialize_3_Inheritance(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x4D871A0", Offset = "0x4D871A0", VA = "0x4D871A0")]
	private fsResult InternalDeserialize_4_Cycles(Type overrideConverterType, fsData data, Type resultType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x4D87340", Offset = "0x4D87340", VA = "0x4D87340")]
	private fsResult InternalDeserialize_5_Converter(Type overrideConverterType, fsData data, Type resultType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x4D85A00", Offset = "0x4D85A00", VA = "0x4D85A00")]
	private static Type GetDataType(ref fsData data, Type defaultType, ref fsResult deserializeResult)
	{
		return null;
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x4D83E60", Offset = "0x4D83E60", VA = "0x4D83E60")]
	private static void EnsureDictionary(fsData data)
	{
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x4D87880", Offset = "0x4D87880", VA = "0x4D87880")]
	static fsSerializer()
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x4D6B780", Offset = "0x4D6B780", VA = "0x4D6B780")]
	public static bool IsReservedKeyword(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x4D848F0", Offset = "0x4D848F0", VA = "0x4D848F0")]
	private static bool IsObjectReference(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x4D857E0", Offset = "0x4D857E0", VA = "0x4D857E0")]
	private static bool IsObjectDefinition(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x4D850A0", Offset = "0x4D850A0", VA = "0x4D850A0")]
	private static bool IsVersioned(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x4D858F0", Offset = "0x4D858F0", VA = "0x4D858F0")]
	private static bool IsTypeSpecified(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x4D874A0", Offset = "0x4D874A0", VA = "0x4D874A0")]
	private static bool IsWrappedData(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x4D875B0", Offset = "0x4D875B0", VA = "0x4D875B0")]
	private static bool IsVisualScriptingUnit(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x4D87CF0", Offset = "0x4D87CF0", VA = "0x4D87CF0")]
	public static void StripDeserializationMetadata(ref fsData data)
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x4D84210", Offset = "0x4D84210", VA = "0x4D84210")]
	private static void ConvertLegacyData(ref fsData data)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x4D831F0", Offset = "0x4D831F0", VA = "0x4D831F0")]
	private static void Invoke_OnBeforeSerialize(List<fsObjectProcessor> processors, Type storageType, object instance)
	{
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x4D832A0", Offset = "0x4D832A0", VA = "0x4D832A0")]
	private static void Invoke_OnAfterSerialize(List<fsObjectProcessor> processors, Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x4D840B0", Offset = "0x4D840B0", VA = "0x4D840B0")]
	private static void Invoke_OnBeforeDeserialize(List<fsObjectProcessor> processors, Type storageType, ref fsData data)
	{
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x4D870F0", Offset = "0x4D870F0", VA = "0x4D870F0")]
	private static void Invoke_OnBeforeDeserializeAfterInstanceCreation(List<fsObjectProcessor> processors, Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x4D84160", Offset = "0x4D84160", VA = "0x4D84160")]
	private static void Invoke_OnAfterDeserialize(List<fsObjectProcessor> processors, Type storageType, object instance)
	{
	}
}
