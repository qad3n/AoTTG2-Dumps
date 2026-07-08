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
	[Token(Token = "0x40008B4")]
	public const string ConstructorWarning = "This parameterless constructor is only made public for serialization. Use another constructor instead.";

	[Token(Token = "0x40008B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<SerializationOperation> freeOperations;

	[Token(Token = "0x40008B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly HashSet<SerializationOperation> busyOperations;

	[Token(Token = "0x40008B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly object @lock;

	[Token(Token = "0x40008B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly HashSet<ISerializationDepender> awaitingDependers;

	[Token(Token = "0x170001AD")]
	public static bool isUnitySerializing
	{
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x4A33AA0", Offset = "0x4A33AA0", VA = "0x4A33AA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F7A")]
		[Address(RVA = "0x4A33B10", Offset = "0x4A33B10", VA = "0x4A33B10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AE")]
	public static bool isCustomSerializing
	{
		[Token(Token = "0x6000F7B")]
		[Address(RVA = "0x4A33B60", Offset = "0x4A33B60", VA = "0x4A33B60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AF")]
	public static bool isSerializing
	{
		[Token(Token = "0x6000F7C")]
		[Address(RVA = "0x4A33BF0", Offset = "0x4A33BF0", VA = "0x4A33BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4A33940", Offset = "0x4A33940", VA = "0x4A33940")]
	static Serialization()
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x4A33D30", Offset = "0x4A33D30", VA = "0x4A33D30")]
	private static SerializationOperation StartOperation()
	{
		return null;
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x4A34270", Offset = "0x4A34270", VA = "0x4A34270")]
	private static void EndOperation(SerializationOperation operation)
	{
	}

	[Token(Token = "0x6000F7F")]
	public static T CloneViaSerialization<T>(this T value, bool forceReflected = false)
	{
		return (T)null;
	}

	[Token(Token = "0x6000F80")]
	public static void CloneViaSerializationInto<TSource, TDestination>(this TSource value, ref TDestination instance, bool forceReflected = false) where TDestination : TSource
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x4A34580", Offset = "0x4A34580", VA = "0x4A34580")]
	public static SerializationData Serialize(this object value, bool forceReflected = false)
	{
		return default(SerializationData);
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4A34BB0", Offset = "0x4A34BB0", VA = "0x4A34BB0")]
	public static void DeserializeInto(this SerializationData data, ref object instance, bool forceReflected = false)
	{
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x4A35BB0", Offset = "0x4A35BB0", VA = "0x4A35BB0")]
	public static object Deserialize(this SerializationData data, bool forceReflected = false)
	{
		return null;
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x4A348F0", Offset = "0x4A348F0", VA = "0x4A348F0")]
	private static string SerializeJson(fsSerializer serializer, object instance, bool forceReflected)
	{
		return null;
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x4A36190", Offset = "0x4A36190", VA = "0x4A36190")]
	private static fsResult DeserializeJsonUtil(fsSerializer serializer, string json, ref object instance, bool forceReflected)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x4A35030", Offset = "0x4A35030", VA = "0x4A35030")]
	private static void DeserializeJson(fsSerializer serializer, string json, ref object instance, bool forceReflected)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x4A35C20", Offset = "0x4A35C20", VA = "0x4A35C20")]
	private static void HandleResult(string label, fsResult result, [Optional] Object context)
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x4A36280", Offset = "0x4A36280", VA = "0x4A36280")]
	public static string PrettyPrint(string json)
	{
		return null;
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x4A362A0", Offset = "0x4A362A0", VA = "0x4A362A0")]
	public static void AwaitDependencies(ISerializationDepender depender)
	{
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x4A36880", Offset = "0x4A36880", VA = "0x4A36880")]
	public static void NotifyDependencyDeserializing(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x4A36A20", Offset = "0x4A36A20", VA = "0x4A36A20")]
	public static void NotifyDependencyDeserialized(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x4A36980", Offset = "0x4A36980", VA = "0x4A36980")]
	public static void NotifyDependencyUnavailable(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x4A36A80", Offset = "0x4A36A80", VA = "0x4A36A80")]
	public static void NotifyDependencyAvailable(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x4A36340", Offset = "0x4A36340", VA = "0x4A36340")]
	private static void CheckIfDependenciesMet(ISerializationDepender depender)
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x4A36C20", Offset = "0x4A36C20", VA = "0x4A36C20")]
	public static void LogStuckDependers()
	{
	}
}
