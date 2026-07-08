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
		[Address(RVA = "0x4EAECC0", Offset = "0x4EAECC0", VA = "0x4EAECC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F4C")]
	[Address(RVA = "0x4EAE930", Offset = "0x4EAE930", VA = "0x4EAE930")]
	internal SerializationEvents(Type t)
	{
	}

	[Token(Token = "0x6001F4D")]
	[Address(RVA = "0x4EAEA60", Offset = "0x4EAEA60", VA = "0x4EAEA60")]
	private List<MethodInfo> GetMethodsWithAttribute(Type attribute, Type t)
	{
		return null;
	}

	[Token(Token = "0x6001F4F")]
	[Address(RVA = "0x4EAECE0", Offset = "0x4EAECE0", VA = "0x4EAECE0")]
	internal void InvokeOnSerializing(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F50")]
	[Address(RVA = "0x4EAED60", Offset = "0x4EAED60", VA = "0x4EAED60")]
	internal void InvokeOnDeserializing(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F51")]
	[Address(RVA = "0x4EAEDA0", Offset = "0x4EAEDA0", VA = "0x4EAEDA0")]
	internal void InvokeOnDeserialized(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F52")]
	[Address(RVA = "0x4EAEDE0", Offset = "0x4EAEDE0", VA = "0x4EAEDE0")]
	internal SerializationEventHandler AddOnSerialized(object obj, SerializationEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6001F53")]
	[Address(RVA = "0x4EAF040", Offset = "0x4EAF040", VA = "0x4EAF040")]
	internal SerializationEventHandler AddOnDeserialized(object obj, SerializationEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6001F54")]
	[Address(RVA = "0x4EAED20", Offset = "0x4EAED20", VA = "0x4EAED20")]
	private static void InvokeOnDelegate(object obj, StreamingContext context, List<MethodInfo> methods)
	{
	}

	[Token(Token = "0x6001F55")]
	[Address(RVA = "0x4EAEDF0", Offset = "0x4EAEDF0", VA = "0x4EAEDF0")]
	private static SerializationEventHandler AddOnDelegate(object obj, SerializationEventHandler handler, List<MethodInfo> methods)
	{
		return null;
	}
}
