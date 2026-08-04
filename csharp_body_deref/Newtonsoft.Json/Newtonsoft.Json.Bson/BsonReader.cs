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
		[Address(RVA = "0x3E591A0", Offset = "0x3E591A0", VA = "0x3E591A0")]
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
		[Address(RVA = "0x3E58250", Offset = "0x3E58250", VA = "0x3E58250")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x3E58260", Offset = "0x3E58260", VA = "0x3E58260")]
		set
		{
		}
	}

	[Token(Token = "0x170002AF")]
	public bool ReadRootValueAsArray
	{
		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x3E58270", Offset = "0x3E58270", VA = "0x3E58270")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x3E58280", Offset = "0x3E58280", VA = "0x3E58280")]
		set
		{
		}
	}

	[Token(Token = "0x170002B0")]
	public DateTimeKind DateTimeKindHandling
	{
		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x3E58290", Offset = "0x3E58290", VA = "0x3E58290")]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x3E582A0", Offset = "0x3E582A0", VA = "0x3E582A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x3E582B0", Offset = "0x3E582B0", VA = "0x3E582B0")]
	public BsonReader(Stream stream)
	{
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x3E583C0", Offset = "0x3E583C0", VA = "0x3E583C0")]
	public BsonReader(BinaryReader reader)
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x3E582C0", Offset = "0x3E582C0", VA = "0x3E582C0")]
	public BsonReader(Stream stream, bool readRootValueAsArray, DateTimeKind dateTimeKindHandling)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x3E583D0", Offset = "0x3E583D0", VA = "0x3E583D0")]
	public BsonReader(BinaryReader reader, bool readRootValueAsArray, DateTimeKind dateTimeKindHandling)
	{
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x3E584A0", Offset = "0x3E584A0", VA = "0x3E584A0")]
	private string ReadElement()
	{
		return null;
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x3E58890", Offset = "0x3E58890", VA = "0x3E58890", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x3E590B0", Offset = "0x3E590B0", VA = "0x3E590B0", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x3E58E80", Offset = "0x3E58E80", VA = "0x3E58E80")]
	private bool ReadCodeWScope()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x3E58CA0", Offset = "0x3E58CA0", VA = "0x3E58CA0")]
	private bool ReadReference()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x3E58A60", Offset = "0x3E58A60", VA = "0x3E58A60")]
	private bool ReadNormal()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x3E59930", Offset = "0x3E59930", VA = "0x3E59930")]
	private void PopContext()
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x3E591C0", Offset = "0x3E591C0", VA = "0x3E591C0")]
	private void PushContext(ContainerContext newContext)
	{
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x3E598F0", Offset = "0x3E598F0", VA = "0x3E598F0")]
	private byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x3E592B0", Offset = "0x3E592B0", VA = "0x3E592B0")]
	private void ReadType(BsonType type)
	{
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x3E59A50", Offset = "0x3E59A50", VA = "0x3E59A50")]
	private byte[] ReadBinary(out BsonBinaryType binaryType)
	{
		return null;
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x3E58520", Offset = "0x3E58520", VA = "0x3E58520")]
	private string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x3E59120", Offset = "0x3E59120", VA = "0x3E59120")]
	private string ReadLengthString()
	{
		return null;
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x3E59CE0", Offset = "0x3E59CE0", VA = "0x3E59CE0")]
	private string GetString(int length)
	{
		return null;
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x3E59C50", Offset = "0x3E59C50", VA = "0x3E59C50")]
	private int GetLastFullCharStop(int start)
	{
		return default(int);
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x3E5A040", Offset = "0x3E5A040", VA = "0x3E5A040")]
	private int BytesInSequence(byte b)
	{
		return default(int);
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x3E59B70", Offset = "0x3E59B70", VA = "0x3E59B70")]
	private void EnsureBuffers()
	{
	}

	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x3E59A10", Offset = "0x3E59A10", VA = "0x3E59A10")]
	private double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x3E590E0", Offset = "0x3E590E0", VA = "0x3E590E0")]
	private int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x3E59B30", Offset = "0x3E59B30", VA = "0x3E59B30")]
	private long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x3E584E0", Offset = "0x3E584E0", VA = "0x3E584E0")]
	private BsonType ReadType()
	{
		return default(BsonType);
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x3E599F0", Offset = "0x3E599F0", VA = "0x3E599F0")]
	private void MovePosition(int count)
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x3E59270", Offset = "0x3E59270", VA = "0x3E59270")]
	private byte[] ReadBytes(int count)
	{
		return null;
	}
}
