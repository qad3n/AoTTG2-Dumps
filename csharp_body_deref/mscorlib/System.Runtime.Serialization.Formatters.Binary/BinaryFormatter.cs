using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000419")]
[ComVisible(true)]
public sealed class BinaryFormatter : IFormatter
{
	[Token(Token = "0x400113D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal ISurrogateSelector m_surrogates;

	[Token(Token = "0x400113E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal StreamingContext m_context;

	[Token(Token = "0x400113F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal SerializationBinder m_binder;

	[Token(Token = "0x4001140")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal FormatterTypeStyle m_typeFormat;

	[Token(Token = "0x4001141")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	internal FormatterAssemblyStyle m_assemblyFormat;

	[Token(Token = "0x4001142")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal TypeFilterLevel m_securityLevel;

	[Token(Token = "0x4001143")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal object[] m_crossAppDomainArray;

	[Token(Token = "0x4001144")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Dictionary<Type, System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache;

	[Token(Token = "0x1700044D")]
	public FormatterAssemblyStyle AssemblyFormat
	{
		[Token(Token = "0x60020A5")]
		[Address(RVA = "0x4EC25A0", Offset = "0x4EC25A0", VA = "0x4EC25A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700044E")]
	public ISurrogateSelector SurrogateSelector
	{
		[Token(Token = "0x60020A6")]
		[Address(RVA = "0x4EC25B0", Offset = "0x4EC25B0", VA = "0x4EC25B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x60020A7")]
	[Address(RVA = "0x4EC25C0", Offset = "0x4EC25C0", VA = "0x4EC25C0")]
	public BinaryFormatter()
	{
	}

	[Token(Token = "0x60020A8")]
	[Address(RVA = "0x4EC2630", Offset = "0x4EC2630", VA = "0x4EC2630")]
	public BinaryFormatter(ISurrogateSelector selector, StreamingContext context)
	{
	}

	[Token(Token = "0x60020A9")]
	[Address(RVA = "0x4EC2690", Offset = "0x4EC2690", VA = "0x4EC2690", Slot = "4")]
	public object Deserialize(Stream serializationStream)
	{
		return null;
	}

	[Token(Token = "0x60020AA")]
	[Address(RVA = "0x4EC26B0", Offset = "0x4EC26B0", VA = "0x4EC26B0")]
	internal object Deserialize(Stream serializationStream, HeaderHandler handler, bool fCheck)
	{
		return null;
	}

	[Token(Token = "0x60020AB")]
	[Address(RVA = "0x4EC26A0", Offset = "0x4EC26A0", VA = "0x4EC26A0", Slot = "6")]
	public object Deserialize(Stream serializationStream, HeaderHandler handler)
	{
		return null;
	}

	[Token(Token = "0x60020AC")]
	[Address(RVA = "0x4EC2FD0", Offset = "0x4EC2FD0", VA = "0x4EC2FD0", Slot = "7")]
	public void Serialize(Stream serializationStream, object graph)
	{
	}

	[Token(Token = "0x60020AD")]
	[Address(RVA = "0x4EC2FE0", Offset = "0x4EC2FE0", VA = "0x4EC2FE0", Slot = "8")]
	public void Serialize(Stream serializationStream, object graph, Header[] headers)
	{
	}

	[Token(Token = "0x60020AE")]
	[Address(RVA = "0x4EC2FF0", Offset = "0x4EC2FF0", VA = "0x4EC2FF0")]
	internal void Serialize(Stream serializationStream, object graph, Header[] headers, bool fCheck)
	{
	}

	[Token(Token = "0x60020AF")]
	[Address(RVA = "0x4EC32C0", Offset = "0x4EC32C0", VA = "0x4EC32C0")]
	internal static System.Runtime.Serialization.Formatters.Binary.TypeInformation GetTypeInformation(Type type)
	{
		return null;
	}
}
