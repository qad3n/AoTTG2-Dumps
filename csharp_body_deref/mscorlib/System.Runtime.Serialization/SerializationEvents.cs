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

[Token(Token = "0x2000404")]
internal sealed class SerializationEvents
{
	[Token(Token = "0x4000FD9")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<MethodInfo> _onSerializingMethods;

	[Token(Token = "0x4000FDA")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<MethodInfo> _onSerializedMethods;

	[Token(Token = "0x4000FDB")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<MethodInfo> _onDeserializingMethods;

	[Token(Token = "0x4000FDC")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<MethodInfo> _onDeserializedMethods;

	[Token(Token = "0x1700041A")]
	internal bool HasOnSerializingEvents
	{
		[Token(Token = "0x6001FBD")]
		[Address(RVA = "0x1A1F010", Offset = "0x1A1D610", VA = "0x181A1F010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001FBB")]
	[Address(RVA = "0x1A1EEC0", Offset = "0x1A1D4C0", VA = "0x181A1EEC0")]
	internal SerializationEvents(Type t)
	{
	}

	[Token(Token = "0x6001FBC")]
	[Address(RVA = "0x1A1EBF0", Offset = "0x1A1D1F0", VA = "0x181A1EBF0")]
	private List<MethodInfo> GetMethodsWithAttribute(Type attribute, Type t)
	{
		return null;
	}

	[Token(Token = "0x6001FBE")]
	[Address(RVA = "0x1A1EE80", Offset = "0x1A1D480", VA = "0x181A1EE80")]
	internal void InvokeOnSerializing(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001FBF")]
	[Address(RVA = "0x1A1EE40", Offset = "0x1A1D440", VA = "0x181A1EE40")]
	internal void InvokeOnDeserializing(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001FC0")]
	[Address(RVA = "0x1A1EE00", Offset = "0x1A1D400", VA = "0x181A1EE00")]
	internal void InvokeOnDeserialized(object obj, StreamingContext context)
	{
	}

	[Token(Token = "0x6001FC1")]
	[Address(RVA = "0x1A1EBD0", Offset = "0x1A1D1D0", VA = "0x181A1EBD0")]
	internal SerializationEventHandler AddOnSerialized(object obj, SerializationEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6001FC2")]
	[Address(RVA = "0x1A1EBB0", Offset = "0x1A1D1B0", VA = "0x181A1EBB0")]
	internal SerializationEventHandler AddOnDeserialized(object obj, SerializationEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6001FC3")]
	[Address(RVA = "0x1A1EDC0", Offset = "0x1A1D3C0", VA = "0x181A1EDC0")]
	private static void InvokeOnDelegate(object obj, StreamingContext context, List<MethodInfo> methods)
	{
	}

	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x1A1E9B0", Offset = "0x1A1CFB0", VA = "0x181A1E9B0")]
	private static SerializationEventHandler AddOnDelegate(object obj, SerializationEventHandler handler, List<MethodInfo> methods)
	{
		return null;
	}
}
