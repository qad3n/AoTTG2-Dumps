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

[Token(Token = "0x20004C6")]
[ComVisible(true)]
public sealed class ResourceReader : IResourceReader, IEnumerable, IDisposable
{
	[Token(Token = "0x20004C7")]
	internal sealed class ResourceEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x40012FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ResourceReader _reader;

		[Token(Token = "0x40012FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private bool _currentIsValid;

		[Token(Token = "0x40012FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int _currentName;

		[Token(Token = "0x4001300")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _dataPosition;

		[Token(Token = "0x1700049D")]
		public object Key
		{
			[Token(Token = "0x6002409")]
			[Address(RVA = "0x53D6540", Offset = "0x53D5540", VA = "0x53D6540", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049E")]
		public object Current
		{
			[Token(Token = "0x600240A")]
			[Address(RVA = "0x53D65F0", Offset = "0x53D55F0", VA = "0x53D65F0", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049F")]
		internal int DataPosition
		{
			[Token(Token = "0x600240B")]
			[Address(RVA = "0x53D69C0", Offset = "0x53D59C0", VA = "0x53D69C0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170004A0")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x600240C")]
			[Address(RVA = "0x53D6640", Offset = "0x53D5640", VA = "0x53D6640", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170004A1")]
		public object Value
		{
			[Token(Token = "0x600240D")]
			[Address(RVA = "0x53D69D0", Offset = "0x53D59D0", VA = "0x53D69D0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002407")]
		[Address(RVA = "0x53D30E0", Offset = "0x53D20E0", VA = "0x53D30E0")]
		internal ResourceEnumerator(ResourceReader reader)
		{
		}

		[Token(Token = "0x6002408")]
		[Address(RVA = "0x53D6500", Offset = "0x53D5500", VA = "0x53D6500", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600240E")]
		[Address(RVA = "0x53D6A70", Offset = "0x53D5A70", VA = "0x53D6A70", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40012EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private BinaryReader _store;

	[Token(Token = "0x40012F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal Dictionary<string, System.Resources.ResourceLocator> _resCache;

	[Token(Token = "0x40012F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private long _nameSectionOffset;

	[Token(Token = "0x40012F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private long _dataSectionOffset;

	[Token(Token = "0x40012F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int[] _nameHashes;

	[Token(Token = "0x40012F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private unsafe int* _nameHashesPtr;

	[Token(Token = "0x40012F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int[] _namePositions;

	[Token(Token = "0x40012F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private unsafe int* _namePositionsPtr;

	[Token(Token = "0x40012F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.RuntimeType[] _typeTable;

	[Token(Token = "0x40012F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int[] _typeNamePositions;

	[Token(Token = "0x40012F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private BinaryFormatter _objFormatter;

	[Token(Token = "0x40012FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int _numResources;

	[Token(Token = "0x40012FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private UnmanagedMemoryStream _ums;

	[Token(Token = "0x40012FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int _version;

	[Token(Token = "0x60023ED")]
	[Address(RVA = "0x53D2A60", Offset = "0x53D1A60", VA = "0x53D2A60")]
	internal ResourceReader(Stream stream, Dictionary<string, System.Resources.ResourceLocator> resCache)
	{
	}

	[Token(Token = "0x60023EE")]
	[Address(RVA = "0x53D2D00", Offset = "0x53D1D00", VA = "0x53D2D00", Slot = "4")]
	public void Close()
	{
	}

	[Token(Token = "0x60023EF")]
	[Address(RVA = "0x53D2DD0", Offset = "0x53D1DD0", VA = "0x53D2DD0", Slot = "7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60023F0")]
	[Address(RVA = "0x53D2D10", Offset = "0x53D1D10", VA = "0x53D2D10")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60023F1")]
	[Address(RVA = "0x53D2DE0", Offset = "0x53D1DE0", VA = "0x53D2DE0")]
	internal unsafe static int ReadUnalignedI4(int* p)
	{
		return default(int);
	}

	[Token(Token = "0x60023F2")]
	[Address(RVA = "0x53D2DF0", Offset = "0x53D1DF0", VA = "0x53D2DF0")]
	private void SkipString()
	{
	}

	[Token(Token = "0x60023F3")]
	[Address(RVA = "0x53D2EB0", Offset = "0x53D1EB0", VA = "0x53D2EB0")]
	private int GetNameHash(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60023F4")]
	[Address(RVA = "0x53D2EF0", Offset = "0x53D1EF0", VA = "0x53D2EF0")]
	private int GetNamePosition(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60023F5")]
	[Address(RVA = "0x53D3000", Offset = "0x53D2000", VA = "0x53D3000", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023F6")]
	[Address(RVA = "0x53D3010", Offset = "0x53D2010", VA = "0x53D3010", Slot = "5")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023F7")]
	[Address(RVA = "0x53D3120", Offset = "0x53D2120", VA = "0x53D3120")]
	internal ResourceEnumerator GetEnumeratorInternal()
	{
		return null;
	}

	[Token(Token = "0x60023F8")]
	[Address(RVA = "0x53D3190", Offset = "0x53D2190", VA = "0x53D3190")]
	internal int FindPosForResource(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60023F9")]
	[Address(RVA = "0x53D3600", Offset = "0x53D2600", VA = "0x53D3600")]
	private bool CompareStringEqualsName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60023FA")]
	[Address(RVA = "0x53D3810", Offset = "0x53D2810", VA = "0x53D3810")]
	private string AllocateStringForNameIndex(int index, out int dataOffset)
	{
		return null;
	}

	[Token(Token = "0x60023FB")]
	[Address(RVA = "0x53D3FB0", Offset = "0x53D2FB0", VA = "0x53D3FB0")]
	private object GetValueForNameIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x60023FC")]
	[Address(RVA = "0x53D4440", Offset = "0x53D3440", VA = "0x53D4440")]
	internal string LoadString(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023FD")]
	[Address(RVA = "0x53D4AA0", Offset = "0x53D3AA0", VA = "0x53D4AA0")]
	internal object LoadObject(int pos)
	{
		return null;
	}

	[Token(Token = "0x60023FE")]
	[Address(RVA = "0x53D4AD0", Offset = "0x53D3AD0", VA = "0x53D4AD0")]
	internal object LoadObject(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x60023FF")]
	[Address(RVA = "0x53D4240", Offset = "0x53D3240", VA = "0x53D4240")]
	internal object LoadObjectV1(int pos)
	{
		return null;
	}

	[Token(Token = "0x6002400")]
	[Address(RVA = "0x53D4B20", Offset = "0x53D3B20", VA = "0x53D4B20")]
	private object _LoadObjectV1(int pos)
	{
		return null;
	}

	[Token(Token = "0x6002401")]
	[Address(RVA = "0x53D4340", Offset = "0x53D3340", VA = "0x53D4340")]
	internal object LoadObjectV2(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6002402")]
	[Address(RVA = "0x53D53F0", Offset = "0x53D43F0", VA = "0x53D53F0")]
	private object _LoadObjectV2(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6002403")]
	[Address(RVA = "0x53D5250", Offset = "0x53D4250", VA = "0x53D5250")]
	private object DeserializeObject(int typeIndex)
	{
		return null;
	}

	[Token(Token = "0x6002404")]
	[Address(RVA = "0x53D2B80", Offset = "0x53D1B80", VA = "0x53D2B80")]
	private void ReadResources()
	{
	}

	[Token(Token = "0x6002405")]
	[Address(RVA = "0x53D5B50", Offset = "0x53D4B50", VA = "0x53D5B50")]
	private void _ReadResources()
	{
	}

	[Token(Token = "0x6002406")]
	[Address(RVA = "0x53D46C0", Offset = "0x53D36C0", VA = "0x53D46C0")]
	private System.RuntimeType FindType(int typeIndex)
	{
		return null;
	}
}
