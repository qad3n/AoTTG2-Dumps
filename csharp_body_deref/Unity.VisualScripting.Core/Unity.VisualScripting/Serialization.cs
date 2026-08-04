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
		[Address(RVA = "0x4D58670", Offset = "0x4D58670", VA = "0x4D58670")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F7A")]
		[Address(RVA = "0x4D586E0", Offset = "0x4D586E0", VA = "0x4D586E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AE")]
	public static bool isCustomSerializing
	{
		[Token(Token = "0x6000F7B")]
		[Address(RVA = "0x4D58730", Offset = "0x4D58730", VA = "0x4D58730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AF")]
	public static bool isSerializing
	{
		[Token(Token = "0x6000F7C")]
		[Address(RVA = "0x4D587C0", Offset = "0x4D587C0", VA = "0x4D587C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4D58510", Offset = "0x4D58510", VA = "0x4D58510")]
	static Serialization()
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x4D58900", Offset = "0x4D58900", VA = "0x4D58900")]
	private static SerializationOperation StartOperation()
	{
		return null;
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x4D58E40", Offset = "0x4D58E40", VA = "0x4D58E40")]
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
	[Address(RVA = "0x4D59150", Offset = "0x4D59150", VA = "0x4D59150")]
	public static SerializationData Serialize(this object value, bool forceReflected = false)
	{
		return default(SerializationData);
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4D59780", Offset = "0x4D59780", VA = "0x4D59780")]
	public static void DeserializeInto(this SerializationData data, ref object instance, bool forceReflected = false)
	{
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x4D5A780", Offset = "0x4D5A780", VA = "0x4D5A780")]
	public static object Deserialize(this SerializationData data, bool forceReflected = false)
	{
		return null;
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x4D594C0", Offset = "0x4D594C0", VA = "0x4D594C0")]
	private static string SerializeJson(fsSerializer serializer, object instance, bool forceReflected)
	{
		return null;
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x4D5AD60", Offset = "0x4D5AD60", VA = "0x4D5AD60")]
	private static fsResult DeserializeJsonUtil(fsSerializer serializer, string json, ref object instance, bool forceReflected)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x4D59C00", Offset = "0x4D59C00", VA = "0x4D59C00")]
	private static void DeserializeJson(fsSerializer serializer, string json, ref object instance, bool forceReflected)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x4D5A7F0", Offset = "0x4D5A7F0", VA = "0x4D5A7F0")]
	private static void HandleResult(string label, fsResult result, [Optional] Object context)
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x4D5AE50", Offset = "0x4D5AE50", VA = "0x4D5AE50")]
	public static string PrettyPrint(string json)
	{
		return null;
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x4D5AE70", Offset = "0x4D5AE70", VA = "0x4D5AE70")]
	public static void AwaitDependencies(ISerializationDepender depender)
	{
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x4D5B450", Offset = "0x4D5B450", VA = "0x4D5B450")]
	public static void NotifyDependencyDeserializing(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x4D5B5F0", Offset = "0x4D5B5F0", VA = "0x4D5B5F0")]
	public static void NotifyDependencyDeserialized(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x4D5B550", Offset = "0x4D5B550", VA = "0x4D5B550")]
	public static void NotifyDependencyUnavailable(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x4D5B650", Offset = "0x4D5B650", VA = "0x4D5B650")]
	public static void NotifyDependencyAvailable(ISerializationDependency dependency)
	{
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x4D5AF10", Offset = "0x4D5AF10", VA = "0x4D5AF10")]
	private static void CheckIfDependenciesMet(ISerializationDepender depender)
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x4D5B7F0", Offset = "0x4D5B7F0", VA = "0x4D5B7F0")]
	public static void LogStuckDependers()
	{
	}
}
