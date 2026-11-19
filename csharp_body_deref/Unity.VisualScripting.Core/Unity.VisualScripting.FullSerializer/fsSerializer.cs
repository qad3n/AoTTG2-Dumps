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
		[Address(RVA = "0x686D310", Offset = "0x686C310", VA = "0x686D310")]
		public void WriteDefinition(int id, fsData data)
		{
		}

		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x686CFC0", Offset = "0x686BFC0", VA = "0x686CFC0")]
		public void WriteReference(int id, Dictionary<string, fsData> dict)
		{
		}

		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x6871C70", Offset = "0x6870C70", VA = "0x6871C70")]
		public void Clear()
		{
		}

		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x686B230", Offset = "0x686A230", VA = "0x686B230")]
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
	[Address(RVA = "0x686A330", Offset = "0x6869330", VA = "0x686A330")]
	public fsSerializer()
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x686B640", Offset = "0x686A640", VA = "0x686B640")]
	private void RemapAbstractStorageTypeToDefaultType(ref Type storageType)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x686B840", Offset = "0x686A840", VA = "0x686B840")]
	public void AddProcessor(fsObjectProcessor processor)
	{
	}

	[Token(Token = "0x60012C2")]
	public void RemoveProcessor<TProcessor>()
	{
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x686B2F0", Offset = "0x686A2F0", VA = "0x686B2F0")]
	public void SetDefaultStorageType(Type abstractType, Type defaultStorageType)
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x686B920", Offset = "0x686A920", VA = "0x686B920")]
	private List<fsObjectProcessor> GetProcessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x686B410", Offset = "0x686A410", VA = "0x686B410")]
	public void AddConverter(fsBaseConverter converter)
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x686BC70", Offset = "0x686AC70", VA = "0x686BC70")]
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
	[Address(RVA = "0x686C140", Offset = "0x686B140", VA = "0x686C140")]
	public fsResult TrySerialize(Type storageType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x686C150", Offset = "0x686B150", VA = "0x686C150")]
	public fsResult TrySerialize(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x686C7B0", Offset = "0x686B7B0", VA = "0x686C7B0")]
	private fsResult InternalSerialize_1_ProcessCycles(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x686CAF0", Offset = "0x686BAF0", VA = "0x686CAF0")]
	private fsResult InternalSerialize_2_Inheritance(Type storageType, Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x686D460", Offset = "0x686C460", VA = "0x686D460")]
	private fsResult InternalSerialize_3_ProcessVersioning(Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x686DCF0", Offset = "0x686CCF0", VA = "0x686DCF0")]
	private fsResult InternalSerialize_4_Converter(Type overrideConverterType, object instance, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x686DD60", Offset = "0x686CD60", VA = "0x686DD60")]
	public fsResult TryDeserialize(fsData data, Type storageType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x686DD70", Offset = "0x686CD70", VA = "0x686DD70")]
	public fsResult TryDeserialize(fsData data, Type storageType, Type overrideConverterType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x686E780", Offset = "0x686D780", VA = "0x686E780")]
	private fsResult InternalDeserialize_1_CycleReference(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x686EB00", Offset = "0x686DB00", VA = "0x686EB00")]
	private fsResult InternalDeserialize_2_Version(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x686F4A0", Offset = "0x686E4A0", VA = "0x686F4A0")]
	private fsResult InternalDeserialize_3_Inheritance(Type overrideConverterType, fsData data, Type storageType, ref object result, out List<fsObjectProcessor> processors)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x6870FF0", Offset = "0x686FFF0", VA = "0x6870FF0")]
	private fsResult InternalDeserialize_4_Cycles(Type overrideConverterType, fsData data, Type resultType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x6871180", Offset = "0x6870180", VA = "0x6871180")]
	private fsResult InternalDeserialize_5_Converter(Type overrideConverterType, fsData data, Type resultType, ref object result)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x686FD40", Offset = "0x686ED40", VA = "0x686FD40")]
	private static Type GetDataType(ref fsData data, Type defaultType, ref fsResult deserializeResult)
	{
		return null;
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x686D6C0", Offset = "0x686C6C0", VA = "0x686D6C0")]
	private static void EnsureDictionary(fsData data)
	{
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x6871570", Offset = "0x6870570", VA = "0x6871570")]
	static fsSerializer()
	{
	}

	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x68719E0", Offset = "0x68709E0", VA = "0x68719E0")]
	public static bool IsReservedKeyword(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x686E950", Offset = "0x686D950", VA = "0x686E950")]
	private static bool IsObjectReference(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x686FB90", Offset = "0x686EB90", VA = "0x686FB90")]
	private static bool IsObjectDefinition(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DC")]
	[Address(RVA = "0x686F110", Offset = "0x686E110", VA = "0x686F110")]
	private static bool IsVersioned(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x686FC90", Offset = "0x686EC90", VA = "0x686FC90")]
	private static bool IsTypeSpecified(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x68712B0", Offset = "0x68702B0", VA = "0x68712B0")]
	private static bool IsWrappedData(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x6871360", Offset = "0x6870360", VA = "0x6871360")]
	private static bool IsVisualScriptingUnit(fsData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x6871A80", Offset = "0x6870A80", VA = "0x6871A80")]
	public static void StripDeserializationMetadata(ref fsData data)
	{
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x686E3D0", Offset = "0x686D3D0", VA = "0x686E3D0")]
	private static void ConvertLegacyData(ref fsData data)
	{
	}

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x686C660", Offset = "0x686B660", VA = "0x686C660")]
	private static void Invoke_OnBeforeSerialize(List<fsObjectProcessor> processors, Type storageType, object instance)
	{
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x686C710", Offset = "0x686B710", VA = "0x686C710")]
	private static void Invoke_OnAfterSerialize(List<fsObjectProcessor> processors, Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x686E280", Offset = "0x686D280", VA = "0x686E280")]
	private static void Invoke_OnBeforeDeserialize(List<fsObjectProcessor> processors, Type storageType, ref fsData data)
	{
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x6870F40", Offset = "0x686FF40", VA = "0x6870F40")]
	private static void Invoke_OnBeforeDeserializeAfterInstanceCreation(List<fsObjectProcessor> processors, Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x686E330", Offset = "0x686D330", VA = "0x686E330")]
	private static void Invoke_OnAfterDeserialize(List<fsObjectProcessor> processors, Type storageType, object instance)
	{
	}
}
