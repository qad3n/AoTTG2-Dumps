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

[Token(Token = "0x2000421")]
[ComVisible(true)]
public sealed class BinaryFormatter : IFormatter
{
	[Token(Token = "0x400109F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal ISurrogateSelector m_surrogates;

	[Token(Token = "0x40010A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal StreamingContext m_context;

	[Token(Token = "0x40010A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal SerializationBinder m_binder;

	[Token(Token = "0x40010A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal FormatterTypeStyle m_typeFormat;

	[Token(Token = "0x40010A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	internal FormatterAssemblyStyle m_assemblyFormat;

	[Token(Token = "0x40010A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal TypeFilterLevel m_securityLevel;

	[Token(Token = "0x40010A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal object[] m_crossAppDomainArray;

	[Token(Token = "0x40010A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Dictionary<Type, System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache;

	[Token(Token = "0x1700044E")]
	public FormatterAssemblyStyle AssemblyFormat
	{
		[Token(Token = "0x60020EA")]
		[Address(RVA = "0x53AF2A0", Offset = "0x53AE2A0", VA = "0x53AF2A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700044F")]
	public ISurrogateSelector SurrogateSelector
	{
		[Token(Token = "0x60020EB")]
		[Address(RVA = "0x53AF2B0", Offset = "0x53AE2B0", VA = "0x53AF2B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x60020EC")]
	[Address(RVA = "0x53AF2C0", Offset = "0x53AE2C0", VA = "0x53AF2C0")]
	public BinaryFormatter()
	{
	}

	[Token(Token = "0x60020ED")]
	[Address(RVA = "0x53AF330", Offset = "0x53AE330", VA = "0x53AF330")]
	public BinaryFormatter(ISurrogateSelector selector, StreamingContext context)
	{
	}

	[Token(Token = "0x60020EE")]
	[Address(RVA = "0x53AF390", Offset = "0x53AE390", VA = "0x53AF390", Slot = "4")]
	public object Deserialize(Stream serializationStream)
	{
		return null;
	}

	[Token(Token = "0x60020EF")]
	[Address(RVA = "0x53AF3B0", Offset = "0x53AE3B0", VA = "0x53AF3B0")]
	internal object Deserialize(Stream serializationStream, HeaderHandler handler, bool fCheck)
	{
		return null;
	}

	[Token(Token = "0x60020F0")]
	[Address(RVA = "0x53AF3A0", Offset = "0x53AE3A0", VA = "0x53AF3A0", Slot = "6")]
	public object Deserialize(Stream serializationStream, HeaderHandler handler)
	{
		return null;
	}

	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x53AFCC0", Offset = "0x53AECC0", VA = "0x53AFCC0", Slot = "7")]
	public void Serialize(Stream serializationStream, object graph)
	{
	}

	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x53AFCD0", Offset = "0x53AECD0", VA = "0x53AFCD0", Slot = "8")]
	public void Serialize(Stream serializationStream, object graph, Header[] headers)
	{
	}

	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x53AFCE0", Offset = "0x53AECE0", VA = "0x53AFCE0")]
	internal void Serialize(Stream serializationStream, object graph, Header[] headers, bool fCheck)
	{
	}

	[Token(Token = "0x60020F4")]
	[Address(RVA = "0x53AFFB0", Offset = "0x53AEFB0", VA = "0x53AFFB0")]
	internal static System.Runtime.Serialization.Formatters.Binary.TypeInformation GetTypeInformation(Type type)
	{
		return null;
	}
}
