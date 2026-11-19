// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Bson.BsonReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.IO;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001D7")]
[Obsolete("BSON reading and writing has been moved to its own package. See https://www.nuget.org/packages/Newtonsoft.Json.Bson for more details.")]
public class BsonReader : JsonReader
{
	[Token(Token = "0x20001D8")]
	private enum BsonReaderState
	{
		[Token(Token = "0x4000847")]
		Normal,
		[Token(Token = "0x4000848")]
		ReferenceStart,
		[Token(Token = "0x4000849")]
		ReferenceRef,
		[Token(Token = "0x400084A")]
		ReferenceId,
		[Token(Token = "0x400084B")]
		CodeWScopeStart,
		[Token(Token = "0x400084C")]
		CodeWScopeCode,
		[Token(Token = "0x400084D")]
		CodeWScopeScope,
		[Token(Token = "0x400084E")]
		CodeWScopeScopeObject,
		[Token(Token = "0x400084F")]
		CodeWScopeScopeEnd
	}

	[Token(Token = "0x20001D9")]
	private class ContainerContext
	{
		[Token(Token = "0x4000850")]
		[FieldOffset(Offset = "0x10")]
		public readonly BsonType Type;

		[Token(Token = "0x4000851")]
		[FieldOffset(Offset = "0x14")]
		public int Length;

		[Token(Token = "0x4000852")]
		[FieldOffset(Offset = "0x18")]
		public int Position;

		[Token(Token = "0x6000FFF")]
		[Address(RVA = "0x564A3B0", Offset = "0x56493B0", VA = "0x564A3B0")]
		public ContainerContext(BsonType type)
		{
		}
	}

	[Token(Token = "0x4000837")]
	private const int MaxCharBytesSize = 128;

	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] SeqRange1;

	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x8")]
	private static readonly byte[] SeqRange2;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly byte[] SeqRange3;

	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] SeqRange4;

	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x78")]
	private readonly BinaryReader _reader;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x80")]
	private readonly List<ContainerContext> _stack;

	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x88")]
	private byte[] _byteBuffer;

	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x90")]
	private char[] _charBuffer;

	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x98")]
	private BsonType _currentElementType;

	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x9C")]
	private BsonReaderState _bsonReaderState;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0xA0")]
	private ContainerContext _currentContext;

	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0xA8")]
	private bool _readRootValueAsArray;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0xA9")]
	private bool _jsonNet35BinaryCompatibility;

	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0xAC")]
	private DateTimeKind _dateTimeKindHandling;

	[Token(Token = "0x170002AE")]
	[Obsolete("JsonNet35BinaryCompatibility will be removed in a future version of Json.NET.")]
	public bool JsonNet35BinaryCompatibility
	{
		[Token(Token = "0x6000FDD")]
		[Address(RVA = "0x56494A0", Offset = "0x56484A0", VA = "0x56494A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x56494B0", Offset = "0x56484B0", VA = "0x56494B0")]
		set
		{
		}
	}

	[Token(Token = "0x170002AF")]
	public bool ReadRootValueAsArray
	{
		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x56494C0", Offset = "0x56484C0", VA = "0x56494C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x56494D0", Offset = "0x56484D0", VA = "0x56494D0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B0")]
	public DateTimeKind DateTimeKindHandling
	{
		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x56494E0", Offset = "0x56484E0", VA = "0x56494E0")]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x56494F0", Offset = "0x56484F0", VA = "0x56494F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x5649500", Offset = "0x5648500", VA = "0x5649500")]
	public BsonReader(Stream stream)
	{
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x5649610", Offset = "0x5648610", VA = "0x5649610")]
	public BsonReader(BinaryReader reader)
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x5649510", Offset = "0x5648510", VA = "0x5649510")]
	public BsonReader(Stream stream, bool readRootValueAsArray, DateTimeKind dateTimeKindHandling)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x5649620", Offset = "0x5648620", VA = "0x5649620")]
	public BsonReader(BinaryReader reader, bool readRootValueAsArray, DateTimeKind dateTimeKindHandling)
	{
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x56496F0", Offset = "0x56486F0", VA = "0x56496F0")]
	private string ReadElement()
	{
		return null;
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x5649AD0", Offset = "0x5648AD0", VA = "0x5649AD0", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x564A2C0", Offset = "0x56492C0", VA = "0x564A2C0", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x564A0A0", Offset = "0x56490A0", VA = "0x564A0A0")]
	private bool ReadCodeWScope()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x5649EC0", Offset = "0x5648EC0", VA = "0x5649EC0")]
	private bool ReadReference()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x5649C60", Offset = "0x5648C60", VA = "0x5649C60")]
	private bool ReadNormal()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x564AB20", Offset = "0x5649B20", VA = "0x564AB20")]
	private void PopContext()
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x564A3D0", Offset = "0x56493D0", VA = "0x564A3D0")]
	private void PushContext(ContainerContext newContext)
	{
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x564AAE0", Offset = "0x5649AE0", VA = "0x564AAE0")]
	private byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x564A4C0", Offset = "0x56494C0", VA = "0x564A4C0")]
	private void ReadType(BsonType type)
	{
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x564AC40", Offset = "0x5649C40", VA = "0x564AC40")]
	private byte[] ReadBinary(out BsonBinaryType binaryType)
	{
		return null;
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x5649770", Offset = "0x5648770", VA = "0x5649770")]
	private string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x564A330", Offset = "0x5649330", VA = "0x564A330")]
	private string ReadLengthString()
	{
		return null;
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x564AED0", Offset = "0x5649ED0", VA = "0x564AED0")]
	private string GetString(int length)
	{
		return null;
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x564AE40", Offset = "0x5649E40", VA = "0x564AE40")]
	private int GetLastFullCharStop(int start)
	{
		return default(int);
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x564B1F0", Offset = "0x564A1F0", VA = "0x564B1F0")]
	private int BytesInSequence(byte b)
	{
		return default(int);
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x564AD60", Offset = "0x5649D60", VA = "0x564AD60")]
	private void EnsureBuffers()
	{
	}

	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x564AC00", Offset = "0x5649C00", VA = "0x564AC00")]
	private double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x564A2F0", Offset = "0x56492F0", VA = "0x564A2F0")]
	private int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x564AD20", Offset = "0x5649D20", VA = "0x564AD20")]
	private long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x5649730", Offset = "0x5648730", VA = "0x5649730")]
	private BsonType ReadType()
	{
		return default(BsonType);
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x564ABE0", Offset = "0x5649BE0", VA = "0x564ABE0")]
	private void MovePosition(int count)
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x564A480", Offset = "0x5649480", VA = "0x564A480")]
	private byte[] ReadBytes(int count)
	{
		return null;
	}
}
