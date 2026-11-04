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
		[Address(RVA = "0x1CAE600", Offset = "0x1CACC00", VA = "0x181CAE600")]
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
		[Address(RVA = "0x1CAC590", Offset = "0x1CAAB90", VA = "0x181CAC590")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x1CAC5C0", Offset = "0x1CAABC0", VA = "0x181CAC5C0")]
		set
		{
		}
	}

	[Token(Token = "0x170002AF")]
	public bool ReadRootValueAsArray
	{
		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x1CAC5A0", Offset = "0x1CAABA0", VA = "0x181CAC5A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x1CAC5D0", Offset = "0x1CAABD0", VA = "0x181CAC5D0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B0")]
	public DateTimeKind DateTimeKindHandling
	{
		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x1AAAD70", Offset = "0x1AA9370", VA = "0x181AAAD70")]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x1CAC5B0", Offset = "0x1CAABB0", VA = "0x181CAC5B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x1CAC3A0", Offset = "0x1CAA9A0", VA = "0x181CAC3A0")]
	public BsonReader(Stream stream)
	{
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x1CAC2E0", Offset = "0x1CAA8E0", VA = "0x181CAC2E0")]
	public BsonReader(BinaryReader reader)
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x1CAC4A0", Offset = "0x1CAAAA0", VA = "0x181CAC4A0")]
	public BsonReader(Stream stream, bool readRootValueAsArray, DateTimeKind dateTimeKindHandling)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x1CAC220", Offset = "0x1CAA820", VA = "0x181CAC220")]
	public BsonReader(BinaryReader reader, bool readRootValueAsArray, DateTimeKind dateTimeKindHandling)
	{
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x1CAAE00", Offset = "0x1CA9400", VA = "0x181CAAE00")]
	private string ReadElement()
	{
		return null;
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x1CABF30", Offset = "0x1CAA530", VA = "0x181CABF30", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x1CAA390", Offset = "0x1CA8990", VA = "0x181CAA390", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x1CAAB60", Offset = "0x1CA9160", VA = "0x181CAAB60")]
	private bool ReadCodeWScope()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x1CAB2A0", Offset = "0x1CA98A0", VA = "0x181CAB2A0")]
	private bool ReadReference()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x1CAAF60", Offset = "0x1CA9560", VA = "0x181CAAF60")]
	private bool ReadNormal()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x1CAA850", Offset = "0x1CA8E50", VA = "0x181CAA850")]
	private void PopContext()
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x1CAA920", Offset = "0x1CA8F20", VA = "0x181CAA920")]
	private void PushContext(ContainerContext newContext)
	{
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x1CAAAE0", Offset = "0x1CA90E0", VA = "0x181CAAAE0")]
	private byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x1CAB850", Offset = "0x1CA9E50", VA = "0x181CAB850")]
	private void ReadType(BsonType type)
	{
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x1CAA9E0", Offset = "0x1CA8FE0", VA = "0x181CAA9E0")]
	private byte[] ReadBinary(out BsonBinaryType binaryType)
	{
		return null;
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x1CAB570", Offset = "0x1CA9B70", VA = "0x181CAB570")]
	private string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x1CAAED0", Offset = "0x1CA94D0", VA = "0x181CAAED0")]
	private string ReadLengthString()
	{
		return null;
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x1CAA520", Offset = "0x1CA8B20", VA = "0x181CAA520")]
	private string GetString(int length)
	{
		return null;
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x1CAA4A0", Offset = "0x1CA8AA0", VA = "0x181CAA4A0")]
	private int GetLastFullCharStop(int start)
	{
		return default(int);
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x1CAA1A0", Offset = "0x1CA87A0", VA = "0x181CAA1A0")]
	private int BytesInSequence(byte b)
	{
		return default(int);
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x1CAA3D0", Offset = "0x1CA89D0", VA = "0x181CAA3D0")]
	private void EnsureBuffers()
	{
	}

	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x1CAADC0", Offset = "0x1CA93C0", VA = "0x181CAADC0")]
	private double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x1CAAE50", Offset = "0x1CA9450", VA = "0x181CAAE50")]
	private int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x1CAAE90", Offset = "0x1CA9490", VA = "0x181CAAE90")]
	private long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x1CABEF0", Offset = "0x1CAA4F0", VA = "0x181CABEF0")]
	private BsonType ReadType()
	{
		return default(BsonType);
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x1CAA830", Offset = "0x1CA8E30", VA = "0x181CAA830")]
	private void MovePosition(int count)
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x1CAAB20", Offset = "0x1CA9120", VA = "0x181CAAB20")]
	private byte[] ReadBytes(int count)
	{
		return null;
	}
}
