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
		[Address(RVA = "0x2E3CC50", Offset = "0x2E3B250", VA = "0x182E3CC50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F84")]
		[Address(RVA = "0x2E3CCA0", Offset = "0x2E3B2A0", VA = "0x182E3CCA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public static bool isCustomSerializing
	{
		[Token(Token = "0x6000F85")]
		[Address(RVA = "0x2E3CB30", Offset = "0x2E3B130", VA = "0x182E3CB30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B2")]
	public static bool isSerializing
	{
		[Token(Token = "0x6000F86")]
		[Address(RVA = "0x2E3CBA0", Offset = "0x2E3B1A0", VA = "0x182E3CBA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x2E3C9A0", Offset = "0x2E3AFA0", VA = "0x182E3C9A0")]
	static Serialization()
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x2E3C750", Offset = "0x2E3AD50", VA = "0x182E3C750")]
	private static SerializationOperation StartOperation()
	{
		return null;
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x2E3B3C0", Offset = "0x2E399C0", VA = "0x182E3B3C0")]
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
	[Address(RVA = "0x2E3C460", Offset = "0x2E3AA60", VA = "0x182E3C460")]
	public static SerializationData Serialize(this object value, bool forceReflected = false)
	{
		return default(SerializationData);
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x2E3AC20", Offset = "0x2E39220", VA = "0x182E3AC20")]
	public static void DeserializeInto(this SerializationData data, ref object instance, bool forceReflected = false)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x2E3B340", Offset = "0x2E39940", VA = "0x182E3B340")]
	public static object Deserialize(this SerializationData data, bool forceReflected = false)
	{
		return null;
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x2E3C1E0", Offset = "0x2E3A7E0", VA = "0x182E3C1E0")]
	private static string SerializeJson(fsSerializer serializer, object instance, bool forceReflected)
	{
		return null;
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x2E3AFB0", Offset = "0x2E395B0", VA = "0x182E3AFB0")]
	private static fsResult DeserializeJsonUtil(fsSerializer serializer, string json, ref object instance, bool forceReflected)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x2E3B0E0", Offset = "0x2E396E0", VA = "0x182E3B0E0")]
	private static void DeserializeJson(fsSerializer serializer, string json, ref object instance, bool forceReflected)
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x2E3B620", Offset = "0x2E39C20", VA = "0x182E3B620")]
	private static void HandleResult(string label, fsResult result, [Optional] Object context)
	{
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x2E3C1C0", Offset = "0x2E3A7C0", VA = "0x182E3C1C0")]
	public static string PrettyPrint(string json)
	{
		return null;
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x2E3A960", Offset = "0x2E38F60", VA = "0x182E3A960")]
	public static void AwaitDependencies(ISerializationDepender depender)
	{
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x2E3C0F0", Offset = "0x2E3A6F0", VA = "0x182E3C0F0")]
	public static void NotifyDependencyDeserializing(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x2E3BF70", Offset = "0x2E3A570", VA = "0x182E3BF70")]
	public static void NotifyDependencyDeserialized(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x2E3C170", Offset = "0x2E3A770", VA = "0x182E3C170")]
	public static void NotifyDependencyUnavailable(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x2E3BE20", Offset = "0x2E3A420", VA = "0x182E3BE20")]
	public static void NotifyDependencyAvailable(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x2E3A9F0", Offset = "0x2E38FF0", VA = "0x182E3A9F0")]
	private static void CheckIfDependenciesMet(ISerializationDepender depender)
	{
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x2E3B950", Offset = "0x2E39F50", VA = "0x182E3B950")]
	public static void LogStuckDependers()
	{
	}
}
