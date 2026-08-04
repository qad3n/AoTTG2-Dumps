// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationEvents
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003D5")]
internal sealed class SerializationEvents
{
	[Token(Token = "0x4000FD3")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<MethodInfo> _onSerializingMethods;

	[Token(Token = "0x4000FD4")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<MethodInfo> _onSerializedMethods;

	[Token(Token = "0x4000FD5")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<MethodInfo> _onDeserializingMethods;

	[Token(Token = "0x4000FD6")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<MethodInfo> _onDeserializedMethods;

	[Token(Token = "0x17000418")]
	internal bool HasOnSerializingEvents
	{
		[Token(Token = "0x6001F4E")]
		[Address(RVA = "0x3B947E0", Offset = "0x3B947E0", VA = "0x3B947E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F4C")]
	[Address(RVA = "0x3B94450", Offset = "0x3B94450", VA = "0x3B94450")]
	internal SerializationEvents(Type t)
	{
	}

	[Token(Token = "0x6001F4D")]
	[Address(RVA = "0x3B94580", Offset = "0x3B94580", VA = "0x3B94580")]
	private List<MethodInfo> GetMethodsWithAttribute(Type attribute, Type t)
	{
		return null;
	}

	[Token(Token = "0x6001F4F")]
	[Address(RVA = "0x3B94800", Offset = "0x3B94800", VA = "0x3B94800")]
	internal void InvokeOnSerializing(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F50")]
	[Address(RVA = "0x3B94880", Offset = "0x3B94880", VA = "0x3B94880")]
	internal void InvokeOnDeserializing(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F51")]
	[Address(RVA = "0x3B948C0", Offset = "0x3B948C0", VA = "0x3B948C0")]
	internal void InvokeOnDeserialized(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F52")]
	[Address(RVA = "0x3B94900", Offset = "0x3B94900", VA = "0x3B94900")]
	internal SerializationEventHandler AddOnSerialized(object obj, SerializationEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6001F53")]
	[Address(RVA = "0x3B94B60", Offset = "0x3B94B60", VA = "0x3B94B60")]
	internal SerializationEventHandler AddOnDeserialized(object obj, SerializationEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6001F54")]
	[Address(RVA = "0x3B94840", Offset = "0x3B94840", VA = "0x3B94840")]
	private static void InvokeOnDelegate(object obj, StreamingContext context, List<MethodInfo> methods)
	{
	}

	[Token(Token = "0x6001F55")]
	[Address(RVA = "0x3B94910", Offset = "0x3B94910", VA = "0x3B94910")]
	private static SerializationEventHandler AddOnDelegate(object obj, SerializationEventHandler handler, List<MethodInfo> methods)
	{
		return null;
	}
}
