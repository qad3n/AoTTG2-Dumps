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
		[Address(RVA = "0x3B63850", Offset = "0x3B63850", VA = "0x3B63850")]
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
		[Address(RVA = "0x3B62900", Offset = "0x3B62900", VA = "0x3B62900")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x3B62910", Offset = "0x3B62910", VA = "0x3B62910")]
		set
		{
		}
	}

	[Token(Token = "0x170002AF")]
	public bool ReadRootValueAsArray
	{
		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x3B62920", Offset = "0x3B62920", VA = "0x3B62920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x3B62930", Offset = "0x3B62930", VA = "0x3B62930")]
		set
		{
		}
	}

	[Token(Token = "0x170002B0")]
	public DateTimeKind DateTimeKindHandling
	{
		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x3B62940", Offset = "0x3B62940", VA = "0x3B62940")]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x3B62950", Offset = "0x3B62950", VA = "0x3B62950")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x3B62960", Offset = "0x3B62960", VA = "0x3B62960")]
	public BsonReader(Stream stream)
	{
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x3B62A70", Offset = "0x3B62A70", VA = "0x3B62A70")]
	public BsonReader(BinaryReader reader)
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x3B62970", Offset = "0x3B62970", VA = "0x3B62970")]
	public BsonReader(Stream stream, bool readRootValueAsArray, DateTimeKind dateTimeKindHandling)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x3B62A80", Offset = "0x3B62A80", VA = "0x3B62A80")]
	public BsonReader(BinaryReader reader, bool readRootValueAsArray, DateTimeKind dateTimeKindHandling)
	{
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x3B62B50", Offset = "0x3B62B50", VA = "0x3B62B50")]
	private string ReadElement()
	{
		return null;
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x3B62F40", Offset = "0x3B62F40", VA = "0x3B62F40", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x3B63760", Offset = "0x3B63760", VA = "0x3B63760", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x3B63530", Offset = "0x3B63530", VA = "0x3B63530")]
	private bool ReadCodeWScope()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x3B63350", Offset = "0x3B63350", VA = "0x3B63350")]
	private bool ReadReference()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x3B63110", Offset = "0x3B63110", VA = "0x3B63110")]
	private bool ReadNormal()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x3B63FE0", Offset = "0x3B63FE0", VA = "0x3B63FE0")]
	private void PopContext()
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x3B63870", Offset = "0x3B63870", VA = "0x3B63870")]
	private void PushContext(ContainerContext newContext)
	{
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x3B63FA0", Offset = "0x3B63FA0", VA = "0x3B63FA0")]
	private byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x3B63960", Offset = "0x3B63960", VA = "0x3B63960")]
	private void ReadType(BsonType type)
	{
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x3B64100", Offset = "0x3B64100", VA = "0x3B64100")]
	private byte[] ReadBinary(out BsonBinaryType binaryType)
	{
		return null;
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x3B62BD0", Offset = "0x3B62BD0", VA = "0x3B62BD0")]
	private string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x3B637D0", Offset = "0x3B637D0", VA = "0x3B637D0")]
	private string ReadLengthString()
	{
		return null;
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x3B64390", Offset = "0x3B64390", VA = "0x3B64390")]
	private string GetString(int length)
	{
		return null;
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x3B64300", Offset = "0x3B64300", VA = "0x3B64300")]
	private int GetLastFullCharStop(int start)
	{
		return default(int);
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x3B646F0", Offset = "0x3B646F0", VA = "0x3B646F0")]
	private int BytesInSequence(byte b)
	{
		return default(int);
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x3B64220", Offset = "0x3B64220", VA = "0x3B64220")]
	private void EnsureBuffers()
	{
	}

	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x3B640C0", Offset = "0x3B640C0", VA = "0x3B640C0")]
	private double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x3B63790", Offset = "0x3B63790", VA = "0x3B63790")]
	private int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x3B641E0", Offset = "0x3B641E0", VA = "0x3B641E0")]
	private long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x3B62B90", Offset = "0x3B62B90", VA = "0x3B62B90")]
	private BsonType ReadType()
	{
		return default(BsonType);
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x3B640A0", Offset = "0x3B640A0", VA = "0x3B640A0")]
	private void MovePosition(int count)
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x3B63920", Offset = "0x3B63920", VA = "0x3B63920")]
	private byte[] ReadBytes(int count)
	{
		return null;
	}
}
