// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Serialization
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000187")]
public static class Serialization
{
	[Token(Token = "0x40008B2")]
	public const string ConstructorWarning = "This parameterless constructor is only made public for serialization. Use another constructor instead.";

	[Token(Token = "0x40008B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<SerializationOperation> freeOperations;

	[Token(Token = "0x40008B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly HashSet<SerializationOperation> busyOperations;

	[Token(Token = "0x40008B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly object @lock;

	[Token(Token = "0x40008B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly HashSet<ISerializationDepender> awaitingDependers;

	[Token(Token = "0x170001B0")]
	public static bool isUnitySerializing
	{
		[Token(Token = "0x6000F83")]
		[Address(RVA = "0x6843240", Offset = "0x6842240", VA = "0x6843240")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F84")]
		[Address(RVA = "0x68432B0", Offset = "0x68422B0", VA = "0x68432B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public static bool isCustomSerializing
	{
		[Token(Token = "0x6000F85")]
		[Address(RVA = "0x6843300", Offset = "0x6842300", VA = "0x6843300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B2")]
	public static bool isSerializing
	{
		[Token(Token = "0x6000F86")]
		[Address(RVA = "0x6843390", Offset = "0x6842390", VA = "0x6843390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x68430E0", Offset = "0x68420E0", VA = "0x68430E0")]
	static Serialization()
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x68434D0", Offset = "0x68424D0", VA = "0x68434D0")]
	private static SerializationOperation StartOperation()
	{
		return null;
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x68439B0", Offset = "0x68429B0", VA = "0x68439B0")]
	private static void EndOperation(SerializationOperation operation)
	{
	}

	[Token(Token = "0x6000F89")]
	public static T CloneViaSerialization<T>(this T value, bool forceReflected = false)
	{
		return (T)null;
	}

	[Token(Token = "0x6000F8A")]
	public static void CloneViaSerializationInto<TSource, TDestination>(this TSource value, ref TDestination instance, bool forceReflected = false) where TDestination : TSource
	{
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x6843C70", Offset = "0x6842C70", VA = "0x6843C70")]
	public static SerializationData Serialize(this object value, bool forceReflected = false)
	{
		return default(SerializationData);
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x68441E0", Offset = "0x68431E0", VA = "0x68441E0")]
	public static void DeserializeInto(this SerializationData data, ref object instance, bool forceReflected = false)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x6844F70", Offset = "0x6843F70", VA = "0x6844F70")]
	public static object Deserialize(this SerializationData data, bool forceReflected = false)
	{
		return null;
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x6843F70", Offset = "0x6842F70", VA = "0x6843F70")]
	private static string SerializeJson(fsSerializer serializer, object instance, bool forceReflected)
	{
		return null;
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x6845480", Offset = "0x6844480", VA = "0x6845480")]
	private static fsResult DeserializeJsonUtil(fsSerializer serializer, string json, ref object instance, bool forceReflected)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x6844640", Offset = "0x6843640", VA = "0x6844640")]
	private static void DeserializeJson(fsSerializer serializer, string json, ref object instance, bool forceReflected)
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x6844FE0", Offset = "0x6843FE0", VA = "0x6844FE0")]
	private static void HandleResult(string label, fsResult result, [Optional] Object context)
	{
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x6845570", Offset = "0x6844570", VA = "0x6845570")]
	public static string PrettyPrint(string json)
	{
		return null;
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x6845590", Offset = "0x6844590", VA = "0x6845590")]
	public static void AwaitDependencies(ISerializationDepender depender)
	{
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x6845B00", Offset = "0x6844B00", VA = "0x6845B00")]
	public static void NotifyDependencyDeserializing(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x6845CA0", Offset = "0x6844CA0", VA = "0x6845CA0")]
	public static void NotifyDependencyDeserialized(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x6845C00", Offset = "0x6844C00", VA = "0x6845C00")]
	public static void NotifyDependencyUnavailable(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x6845D00", Offset = "0x6844D00", VA = "0x6845D00")]
	public static void NotifyDependencyAvailable(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x6845640", Offset = "0x6844640", VA = "0x6845640")]
	private static void CheckIfDependenciesMet(ISerializationDepender depender)
	{
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x6845EA0", Offset = "0x6844EA0", VA = "0x6845EA0")]
	public static void LogStuckDependers()
	{
	}
}
