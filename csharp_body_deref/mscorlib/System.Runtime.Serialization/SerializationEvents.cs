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

[Token(Token = "0x20003DD")]
internal sealed class SerializationEvents
{
	[Token(Token = "0x4000F39")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<MethodInfo> _onSerializingMethods;

	[Token(Token = "0x4000F3A")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<MethodInfo> _onSerializedMethods;

	[Token(Token = "0x4000F3B")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<MethodInfo> _onDeserializingMethods;

	[Token(Token = "0x4000F3C")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<MethodInfo> _onDeserializedMethods;

	[Token(Token = "0x17000419")]
	internal bool HasOnSerializingEvents
	{
		[Token(Token = "0x6001F93")]
		[Address(RVA = "0x539C140", Offset = "0x539B140", VA = "0x539C140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x539BDE0", Offset = "0x539ADE0", VA = "0x539BDE0")]
	internal SerializationEvents(Type t)
	{
	}

	[Token(Token = "0x6001F92")]
	[Address(RVA = "0x539BF10", Offset = "0x539AF10", VA = "0x539BF10")]
	private List<MethodInfo> GetMethodsWithAttribute(Type attribute, Type t)
	{
		return null;
	}

	[Token(Token = "0x6001F94")]
	[Address(RVA = "0x539C160", Offset = "0x539B160", VA = "0x539C160")]
	internal void InvokeOnSerializing(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F95")]
	[Address(RVA = "0x539C1E0", Offset = "0x539B1E0", VA = "0x539C1E0")]
	internal void InvokeOnDeserializing(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F96")]
	[Address(RVA = "0x539C220", Offset = "0x539B220", VA = "0x539C220")]
	internal void InvokeOnDeserialized(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F97")]
	[Address(RVA = "0x539C260", Offset = "0x539B260", VA = "0x539C260")]
	internal SerializationEventHandler AddOnSerialized(object obj, SerializationEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6001F98")]
	[Address(RVA = "0x539C490", Offset = "0x539B490", VA = "0x539C490")]
	internal SerializationEventHandler AddOnDeserialized(object obj, SerializationEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6001F99")]
	[Address(RVA = "0x539C1A0", Offset = "0x539B1A0", VA = "0x539C1A0")]
	private static void InvokeOnDelegate(object obj, StreamingContext context, List<MethodInfo> methods)
	{
	}

	[Token(Token = "0x6001F9A")]
	[Address(RVA = "0x539C280", Offset = "0x539B280", VA = "0x539C280")]
	private static SerializationEventHandler AddOnDelegate(object obj, SerializationEventHandler handler, List<MethodInfo> methods)
	{
		return null;
	}
}
