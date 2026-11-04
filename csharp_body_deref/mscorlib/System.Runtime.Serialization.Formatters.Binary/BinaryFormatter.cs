// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000448")]
[ComVisible(true)]
public sealed class BinaryFormatter : IFormatter
{
	[Token(Token = "0x400113F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal ISurrogateSelector m_surrogates;

	[Token(Token = "0x4001140")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal StreamingContext m_context;

	[Token(Token = "0x4001141")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal SerializationBinder m_binder;

	[Token(Token = "0x4001142")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal FormatterTypeStyle m_typeFormat;

	[Token(Token = "0x4001143")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	internal FormatterAssemblyStyle m_assemblyFormat;

	[Token(Token = "0x4001144")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal TypeFilterLevel m_securityLevel;

	[Token(Token = "0x4001145")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal object[] m_crossAppDomainArray;

	[Token(Token = "0x4001146")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Dictionary<Type, System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache;

	[Token(Token = "0x1700044F")]
	public FormatterAssemblyStyle AssemblyFormat
	{
		[Token(Token = "0x6002114")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000450")]
	public ISurrogateSelector SurrogateSelector
	{
		[Token(Token = "0x6002115")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x6002116")]
	[Address(RVA = "0x1A0DB60", Offset = "0x1A0C160", VA = "0x181A0DB60")]
	public BinaryFormatter()
	{
	}

	[Token(Token = "0x6002117")]
	[Address(RVA = "0x1A0DBD0", Offset = "0x1A0C1D0", VA = "0x181A0DBD0")]
	public BinaryFormatter(ISurrogateSelector selector, StreamingContext context)
	{
	}

	[Token(Token = "0x6002118")]
	[Address(RVA = "0x1A0D4F0", Offset = "0x1A0BAF0", VA = "0x181A0D4F0", Slot = "4")]
	public object Deserialize(Stream serializationStream)
	{
		return null;
	}

	[Token(Token = "0x6002119")]
	[Address(RVA = "0x1A0D210", Offset = "0x1A0B810", VA = "0x181A0D210")]
	internal object Deserialize(Stream serializationStream, HeaderHandler handler, bool fCheck)
	{
		return null;
	}

	[Token(Token = "0x600211A")]
	[Address(RVA = "0x1A0D4D0", Offset = "0x1A0BAD0", VA = "0x181A0D4D0", Slot = "6")]
	public object Deserialize(Stream serializationStream, HeaderHandler handler)
	{
		return null;
	}

	[Token(Token = "0x600211B")]
	[Address(RVA = "0x1A0DAB0", Offset = "0x1A0C0B0", VA = "0x181A0DAB0", Slot = "7")]
	public void Serialize(Stream serializationStream, object graph)
	{
	}

	[Token(Token = "0x600211C")]
	[Address(RVA = "0x1A0D7E0", Offset = "0x1A0BDE0", VA = "0x181A0D7E0", Slot = "8")]
	public void Serialize(Stream serializationStream, object graph, Header[] headers)
	{
	}

	[Token(Token = "0x600211D")]
	[Address(RVA = "0x1A0D800", Offset = "0x1A0BE00", VA = "0x181A0D800")]
	internal void Serialize(Stream serializationStream, object graph, Header[] headers, bool fCheck)
	{
	}

	[Token(Token = "0x600211E")]
	[Address(RVA = "0x1A0D510", Offset = "0x1A0BB10", VA = "0x181A0D510")]
	internal static System.Runtime.Serialization.Formatters.Binary.TypeInformation GetTypeInformation(Type type)
	{
		return null;
	}
}
