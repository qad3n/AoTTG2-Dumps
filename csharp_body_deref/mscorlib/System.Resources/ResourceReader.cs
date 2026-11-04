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

[Token(Token = "0x20004ED")]
[ComVisible(true)]
public sealed class ResourceReader : IResourceReader, IEnumerable, IDisposable
{
	[Token(Token = "0x20004EE")]
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

		[Token(Token = "0x1700049E")]
		public object Key
		{
			[Token(Token = "0x600243B")]
			[Address(RVA = "0x1A4CC40", Offset = "0x1A4B240", VA = "0x181A4CC40", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049F")]
		public object Current
		{
			[Token(Token = "0x600243C")]
			[Address(RVA = "0x1A4C7E0", Offset = "0x1A4ADE0", VA = "0x181A4C7E0", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004A0")]
		internal int DataPosition
		{
			[Token(Token = "0x600243D")]
			[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170004A1")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x600243E")]
			[Address(RVA = "0x1A4C840", Offset = "0x1A4AE40", VA = "0x181A4C840", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170004A2")]
		public object Value
		{
			[Token(Token = "0x600243F")]
			[Address(RVA = "0x1A4CDA0", Offset = "0x1A4B3A0", VA = "0x181A4CDA0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002439")]
		[Address(RVA = "0x1A4C7A0", Offset = "0x1A4ADA0", VA = "0x181A4C7A0")]
		internal ResourceEnumerator(ResourceReader reader)
		{
		}

		[Token(Token = "0x600243A")]
		[Address(RVA = "0x1A4C6B0", Offset = "0x1A4ACB0", VA = "0x181A4C6B0", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002440")]
		[Address(RVA = "0x1A4C700", Offset = "0x1A4AD00", VA = "0x181A4C700", Slot = "9")]
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

	[Token(Token = "0x600241F")]
	[Address(RVA = "0x1A538B0", Offset = "0x1A51EB0", VA = "0x181A538B0")]
	internal ResourceReader(Stream stream, Dictionary<string, System.Resources.ResourceLocator> resCache)
	{
	}

	[Token(Token = "0x6002420")]
	[Address(RVA = "0x1A4FE50", Offset = "0x1A4E450", VA = "0x181A4FE50", Slot = "4")]
	public void Close()
	{
	}

	[Token(Token = "0x6002421")]
	[Address(RVA = "0x1A50550", Offset = "0x1A4EB50", VA = "0x181A50550", Slot = "7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002422")]
	[Address(RVA = "0x1A50490", Offset = "0x1A4EA90", VA = "0x181A50490")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002423")]
	[Address(RVA = "0x1A51A20", Offset = "0x1A50020", VA = "0x181A51A20")]
	internal unsafe static int ReadUnalignedI4(int* p)
	{
		return default(int);
	}

	[Token(Token = "0x6002424")]
	[Address(RVA = "0x1A51A40", Offset = "0x1A50040", VA = "0x181A51A40")]
	private void SkipString()
	{
	}

	[Token(Token = "0x6002425")]
	[Address(RVA = "0x1A50F10", Offset = "0x1A4F510", VA = "0x181A50F10")]
	private int GetNameHash(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002426")]
	[Address(RVA = "0x1A50F80", Offset = "0x1A4F580", VA = "0x181A50F80")]
	private int GetNamePosition(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002427")]
	[Address(RVA = "0x1A50E40", Offset = "0x1A4F440", VA = "0x181A50E40", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002428")]
	[Address(RVA = "0x1A50E40", Offset = "0x1A4F440", VA = "0x181A50E40", Slot = "5")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002429")]
	[Address(RVA = "0x1A50DD0", Offset = "0x1A4F3D0", VA = "0x181A50DD0")]
	internal ResourceEnumerator GetEnumeratorInternal()
	{
		return null;
	}

	[Token(Token = "0x600242A")]
	[Address(RVA = "0x1A50560", Offset = "0x1A4EB60", VA = "0x181A50560")]
	internal int FindPosForResource(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600242B")]
	[Address(RVA = "0x1A4FF00", Offset = "0x1A4E500", VA = "0x181A4FF00")]
	private bool CompareStringEqualsName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600242C")]
	[Address(RVA = "0x1A4F720", Offset = "0x1A4DD20", VA = "0x181A4F720")]
	private string AllocateStringForNameIndex(int index, out int dataOffset)
	{
		return null;
	}

	[Token(Token = "0x600242D")]
	[Address(RVA = "0x1A510B0", Offset = "0x1A4F6B0", VA = "0x181A510B0")]
	private object GetValueForNameIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600242E")]
	[Address(RVA = "0x1A515D0", Offset = "0x1A4FBD0", VA = "0x181A515D0")]
	internal string LoadString(int pos)
	{
		return null;
	}

	[Token(Token = "0x600242F")]
	[Address(RVA = "0x1A51540", Offset = "0x1A4FB40", VA = "0x181A51540")]
	internal object LoadObject(int pos)
	{
		return null;
	}

	[Token(Token = "0x6002430")]
	[Address(RVA = "0x1A51570", Offset = "0x1A4FB70", VA = "0x181A51570")]
	internal object LoadObject(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6002431")]
	[Address(RVA = "0x1A51340", Offset = "0x1A4F940", VA = "0x181A51340")]
	internal object LoadObjectV1(int pos)
	{
		return null;
	}

	[Token(Token = "0x6002432")]
	[Address(RVA = "0x1A51B10", Offset = "0x1A50110", VA = "0x181A51B10")]
	private object _LoadObjectV1(int pos)
	{
		return null;
	}

	[Token(Token = "0x6002433")]
	[Address(RVA = "0x1A51440", Offset = "0x1A4FA40", VA = "0x181A51440")]
	internal object LoadObjectV2(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6002434")]
	[Address(RVA = "0x1A522E0", Offset = "0x1A508E0", VA = "0x181A522E0")]
	private object _LoadObjectV2(int pos, out System.Resources.ResourceTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6002435")]
	[Address(RVA = "0x1A502E0", Offset = "0x1A4E8E0", VA = "0x181A502E0")]
	private object DeserializeObject(int typeIndex)
	{
		return null;
	}

	[Token(Token = "0x6002436")]
	[Address(RVA = "0x1A518A0", Offset = "0x1A4FEA0", VA = "0x181A518A0")]
	private void ReadResources()
	{
	}

	[Token(Token = "0x6002437")]
	[Address(RVA = "0x1A52E70", Offset = "0x1A51470", VA = "0x181A52E70")]
	private void _ReadResources()
	{
	}

	[Token(Token = "0x6002438")]
	[Address(RVA = "0x1A50A10", Offset = "0x1A4F010", VA = "0x181A50A10")]
	private System.RuntimeType FindType(int typeIndex)
	{
		return null;
	}
}
