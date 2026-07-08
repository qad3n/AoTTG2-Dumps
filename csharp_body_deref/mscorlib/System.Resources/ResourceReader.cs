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
			[Address(RVA = "0x4EE97A0", Offset = "0x4EE97A0", VA = "0x4EE97A0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049C")]
		public object Current
		{
			[Token(Token = "0x60023BA")]
			[Address(RVA = "0x4EE9850", Offset = "0x4EE9850", VA = "0x4EE9850", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049D")]
		internal int DataPosition
		{
			[Token(Token = "0x60023BB")]
			[Address(RVA = "0x4EE9C40", Offset = "0x4EE9C40", VA = "0x4EE9C40")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700049E")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x60023BC")]
			[Address(RVA = "0x4EE98A0", Offset = "0x4EE98A0", VA = "0x4EE98A0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700049F")]
		public object Value
		{
			[Token(Token = "0x60023BD")]
			[Address(RVA = "0x4EE9C50", Offset = "0x4EE9C50", VA = "0x4EE9C50", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60023B7")]
		[Address(RVA = "0x4EE5FD0", Offset = "0x4EE5FD0", VA = "0x4EE5FD0")]
		internal ResourceEnumerator(ResourceReader reader)
		{
		}

		[Token(Token = "0x60023B8")]
		[Address(RVA = "0x4EE9750", Offset = "0x4EE9750", VA = "0x4EE9750", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60023BE")]
		[Address(RVA = "0x4EE9CF0", Offset = "0x4EE9CF0", VA = "0x4EE9CF0", Slot = "9")]
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
	[Address(RVA = "0x4EE5950", Offset = "0x4EE5950", VA = "0x4EE5950")]
	internal ResourceReader(Stream stream, Dictionary<string, System.Resources.ResourceLocator> resCache)
	{
	}

	[Token(Token = "0x600239E")]
	[Address(RVA = "0x4EE5BF0", Offset = "0x4EE5BF0", VA = "0x4EE5BF0", Slot = "4")]
	public void Close()
	{
	}

	[Token(Token = "0x600239F")]
	[Address(RVA = "0x4EE5CC0", Offset = "0x4EE5CC0", VA = "0x4EE5CC0", Slot = "7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60023A0")]
	[Address(RVA = "0x4EE5C00", Offset = "0x4EE5C00", VA = "0x4EE5C00")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60023A1")]
	[Address(RVA = "0x4EE5CD0", Offset = "0x4EE5CD0", VA = "0x4EE5CD0")]
	internal unsafe static int ReadUnalignedI4(int* p)
	{
		return default(int);
	}

	[Token(Token = "0x60023A2")]
	[Address(RVA = "0x4EE5CE0", Offset = "0x4EE5CE0", VA = "0x4EE5CE0")]
	private void SkipString()
	{
	}

	[Token(Token = "0x60023A3")]
	[Address(RVA = "0x4EE5DA0", Offset = "0x4EE5DA0", VA = "0x4EE5DA0")]
	private int GetNameHash(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60023A4")]
	[Address(RVA = "0x4EE5DE0", Offset = "0x4EE5DE0", VA = "0x4EE5DE0")]
	private int GetNamePosition(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60023A5")]
	[Address(RVA = "0x4EE5EF0", Offset = "0x4EE5EF0", VA = "0x4EE5EF0", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023A6")]
	[Address(RVA = "0x4EE5F00", Offset = "0x4EE5F00", VA = "0x4EE5F00", Slot = "5")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023A7")]
	[Address(RVA = "0x4EE6010", Offset = "0x4EE6010", VA = "0x4EE6010")]
	internal ResourceEnumerator GetEnumeratorInternal()
	{
		return null;
	}

	[Token(Token = "0x60023A8")]
	[Address(RVA = "0x4EE6080", Offset = "0x4EE6080", VA = "0x4EE6080")]
	internal int FindPosForResource(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60023A9")]
	[Address(RVA = "0x4EE6630", Offset = "0x4EE6630", VA = "0x4EE6630")]
	private bool CompareStringEqualsName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60023AA")]
	[Address(RVA = "0x4EE6840", Offset = "0x4EE6840", VA = "0x4EE6840")]
	private string AllocateStringForNameIndex(int index, out int dataOffset)
	{
		return null;
	}

	[Token(Token = "0x60023AB")]
	[Address(RVA = "0x4EE70E0", Offset = "0x4EE70E0", VA = "0x4EE70E0")]
	private object GetValueForNameIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x60023AC")]
	[Address(RVA = "0x4EE7630", Offset = "0x4EE7630", VA = "0x4EE7630")]
	internal string LoadString(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023AD")]
	[Address(RVA = "0x4EE7CE0", Offset = "0x4EE7CE0", VA = "0x4EE7CE0")]
	internal object LoadObject(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023AE")]
	[Address(RVA = "0x4EE7D10", Offset = "0x4EE7D10", VA = "0x4EE7D10")]
	internal object LoadObject(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x60023AF")]
	[Address(RVA = "0x4EE7430", Offset = "0x4EE7430", VA = "0x4EE7430")]
	internal object LoadObjectV1(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023B0")]
	[Address(RVA = "0x4EE7D60", Offset = "0x4EE7D60", VA = "0x4EE7D60")]
	private object _LoadObjectV1(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023B1")]
	[Address(RVA = "0x4EE7530", Offset = "0x4EE7530", VA = "0x4EE7530")]
	internal object LoadObjectV2(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x60023B2")]
	[Address(RVA = "0x4EE8640", Offset = "0x4EE8640", VA = "0x4EE8640")]
	private object _LoadObjectV2(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x60023B3")]
	[Address(RVA = "0x4EE84A0", Offset = "0x4EE84A0", VA = "0x4EE84A0")]
	private object DeserializeObject(int typeIndex)
	{
		return null;
	}

	[Token(Token = "0x60023B4")]
	[Address(RVA = "0x4EE5A70", Offset = "0x4EE5A70", VA = "0x4EE5A70")]
	private void ReadResources()
	{
	}

	[Token(Token = "0x60023B5")]
	[Address(RVA = "0x4EE8D80", Offset = "0x4EE8D80", VA = "0x4EE8D80")]
	private void _ReadResources()
	{
	}

	[Token(Token = "0x60023B6")]
	[Address(RVA = "0x4EE78B0", Offset = "0x4EE78B0", VA = "0x4EE78B0")]
	private System.RuntimeType FindType(int typeIndex)
	{
		return null;
	}
}
