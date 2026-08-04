// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.ResourceReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Runtime.Serialization.Formatters.Binary;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004BD")]
[ComVisible(true)]
public sealed class ResourceReader : IResourceReader, IEnumerable, IDisposable
{
	[Token(Token = "0x20004BE")]
	internal sealed class ResourceEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x400139D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ResourceReader _reader;

		[Token(Token = "0x400139E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private bool _currentIsValid;

		[Token(Token = "0x400139F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int _currentName;

		[Token(Token = "0x40013A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _dataPosition;

		[Token(Token = "0x1700049B")]
		public object Key
		{
			[Token(Token = "0x60023B9")]
			[Address(RVA = "0x3BCF2C0", Offset = "0x3BCF2C0", VA = "0x3BCF2C0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049C")]
		public object Current
		{
			[Token(Token = "0x60023BA")]
			[Address(RVA = "0x3BCF370", Offset = "0x3BCF370", VA = "0x3BCF370", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049D")]
		internal int DataPosition
		{
			[Token(Token = "0x60023BB")]
			[Address(RVA = "0x3BCF760", Offset = "0x3BCF760", VA = "0x3BCF760")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700049E")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x60023BC")]
			[Address(RVA = "0x3BCF3C0", Offset = "0x3BCF3C0", VA = "0x3BCF3C0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700049F")]
		public object Value
		{
			[Token(Token = "0x60023BD")]
			[Address(RVA = "0x3BCF770", Offset = "0x3BCF770", VA = "0x3BCF770", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60023B7")]
		[Address(RVA = "0x3BCBAF0", Offset = "0x3BCBAF0", VA = "0x3BCBAF0")]
		internal ResourceEnumerator(ResourceReader reader)
		{
		}

		[Token(Token = "0x60023B8")]
		[Address(RVA = "0x3BCF270", Offset = "0x3BCF270", VA = "0x3BCF270", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60023BE")]
		[Address(RVA = "0x3BCF810", Offset = "0x3BCF810", VA = "0x3BCF810", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x400138F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private BinaryReader _store;

	[Token(Token = "0x4001390")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal Dictionary<string, System.Resources.ResourceLocator> _resCache;

	[Token(Token = "0x4001391")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private long _nameSectionOffset;

	[Token(Token = "0x4001392")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private long _dataSectionOffset;

	[Token(Token = "0x4001393")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int[] _nameHashes;

	[Token(Token = "0x4001394")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private unsafe int* _nameHashesPtr;

	[Token(Token = "0x4001395")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int[] _namePositions;

	[Token(Token = "0x4001396")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private unsafe int* _namePositionsPtr;

	[Token(Token = "0x4001397")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.RuntimeType[] _typeTable;

	[Token(Token = "0x4001398")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int[] _typeNamePositions;

	[Token(Token = "0x4001399")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private BinaryFormatter _objFormatter;

	[Token(Token = "0x400139A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int _numResources;

	[Token(Token = "0x400139B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private UnmanagedMemoryStream _ums;

	[Token(Token = "0x400139C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int _version;

	[Token(Token = "0x600239D")]
	[Address(RVA = "0x3BCB470", Offset = "0x3BCB470", VA = "0x3BCB470")]
	internal ResourceReader(Stream stream, Dictionary<string, System.Resources.ResourceLocator> resCache)
	{
	}

	[Token(Token = "0x600239E")]
	[Address(RVA = "0x3BCB710", Offset = "0x3BCB710", VA = "0x3BCB710", Slot = "4")]
	public void Close()
	{
	}

	[Token(Token = "0x600239F")]
	[Address(RVA = "0x3BCB7E0", Offset = "0x3BCB7E0", VA = "0x3BCB7E0", Slot = "7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60023A0")]
	[Address(RVA = "0x3BCB720", Offset = "0x3BCB720", VA = "0x3BCB720")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60023A1")]
	[Address(RVA = "0x3BCB7F0", Offset = "0x3BCB7F0", VA = "0x3BCB7F0")]
	internal unsafe static int ReadUnalignedI4(int* p)
	{
		return default(int);
	}

	[Token(Token = "0x60023A2")]
	[Address(RVA = "0x3BCB800", Offset = "0x3BCB800", VA = "0x3BCB800")]
	private void SkipString()
	{
	}

	[Token(Token = "0x60023A3")]
	[Address(RVA = "0x3BCB8C0", Offset = "0x3BCB8C0", VA = "0x3BCB8C0")]
	private int GetNameHash(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60023A4")]
	[Address(RVA = "0x3BCB900", Offset = "0x3BCB900", VA = "0x3BCB900")]
	private int GetNamePosition(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60023A5")]
	[Address(RVA = "0x3BCBA10", Offset = "0x3BCBA10", VA = "0x3BCBA10", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023A6")]
	[Address(RVA = "0x3BCBA20", Offset = "0x3BCBA20", VA = "0x3BCBA20", Slot = "5")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023A7")]
	[Address(RVA = "0x3BCBB30", Offset = "0x3BCBB30", VA = "0x3BCBB30")]
	internal ResourceEnumerator GetEnumeratorInternal()
	{
		return null;
	}

	[Token(Token = "0x60023A8")]
	[Address(RVA = "0x3BCBBA0", Offset = "0x3BCBBA0", VA = "0x3BCBBA0")]
	internal int FindPosForResource(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60023A9")]
	[Address(RVA = "0x3BCC150", Offset = "0x3BCC150", VA = "0x3BCC150")]
	private bool CompareStringEqualsName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60023AA")]
	[Address(RVA = "0x3BCC360", Offset = "0x3BCC360", VA = "0x3BCC360")]
	private string AllocateStringForNameIndex(int index, out int dataOffset)
	{
		return null;
	}

	[Token(Token = "0x60023AB")]
	[Address(RVA = "0x3BCCC00", Offset = "0x3BCCC00", VA = "0x3BCCC00")]
	private object GetValueForNameIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x60023AC")]
	[Address(RVA = "0x3BCD150", Offset = "0x3BCD150", VA = "0x3BCD150")]
	internal string LoadString(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023AD")]
	[Address(RVA = "0x3BCD800", Offset = "0x3BCD800", VA = "0x3BCD800")]
	internal object LoadObject(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023AE")]
	[Address(RVA = "0x3BCD830", Offset = "0x3BCD830", VA = "0x3BCD830")]
	internal object LoadObject(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x60023AF")]
	[Address(RVA = "0x3BCCF50", Offset = "0x3BCCF50", VA = "0x3BCCF50")]
	internal object LoadObjectV1(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023B0")]
	[Address(RVA = "0x3BCD880", Offset = "0x3BCD880", VA = "0x3BCD880")]
	private object _LoadObjectV1(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023B1")]
	[Address(RVA = "0x3BCD050", Offset = "0x3BCD050", VA = "0x3BCD050")]
	internal object LoadObjectV2(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x60023B2")]
	[Address(RVA = "0x3BCE160", Offset = "0x3BCE160", VA = "0x3BCE160")]
	private object _LoadObjectV2(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x60023B3")]
	[Address(RVA = "0x3BCDFC0", Offset = "0x3BCDFC0", VA = "0x3BCDFC0")]
	private object DeserializeObject(int typeIndex)
	{
		return null;
	}

	[Token(Token = "0x60023B4")]
	[Address(RVA = "0x3BCB590", Offset = "0x3BCB590", VA = "0x3BCB590")]
	private void ReadResources()
	{
	}

	[Token(Token = "0x60023B5")]
	[Address(RVA = "0x3BCE8A0", Offset = "0x3BCE8A0", VA = "0x3BCE8A0")]
	private void _ReadResources()
	{
	}

	[Token(Token = "0x60023B6")]
	[Address(RVA = "0x3BCD3D0", Offset = "0x3BCD3D0", VA = "0x3BCD3D0")]
	private System.RuntimeType FindType(int typeIndex)
	{
		return null;
	}
}
